#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <array>
#include <vector>
#include <iomanip>

#include "comms/fields.h"
#include "comms/process.h"

#define QUOTES_(x_) #x_
#define QUOTES(x_) QUOTES_(x_)

#ifndef INTERFACE_HEADER
#error "Interface header needs to be defined"
#endif

#ifndef INTERFACE
#error "Interface type needs to be defined"
#endif

#ifndef FRAME_HEADER
#error "Frame header needs to be defined"
#endif

#ifndef FRAME
#error "Frame type needs to be defined"
#endif

#ifndef OPTIONS_HEADER
#error "Options header needs to be defined"
#endif

#ifndef OPTIONS
#error "Options type needs to be defined"
#endif

#ifndef INPUT_MESSAGES_HEADER
#error "Input messages header needs to be defined"
#endif

#ifndef INPUT_MESSAGES
#error "Input messages type needs to be defined"
#endif

#include QUOTES(INTERFACE_HEADER)
#include QUOTES(FRAME_HEADER)
#include QUOTES(OPTIONS_HEADER)
#include QUOTES(INPUT_MESSAGES_HEADER)

namespace
{

class Handler;
using Message = 
    INTERFACE<
        comms::option::app::ReadIterator<const char*>,
        comms::option::app::WriteIterator<char*>,
        comms::option::app::LengthInfoInterface,
        comms::option::app::Handler<Handler>
    >;

using AppOptions = OPTIONS;
using InputMessages = INPUT_MESSAGES<Message, AppOptions>;
using Frame = FRAME<Message, InputMessages, AppOptions>;

void printIndent(unsigned indent)
{
    while (0U < indent) {
        static const std::string IndStr("    ");
        std::cout << IndStr;
        --indent;
    }
}

// Forward declaration of function used to print variant field
template <typename TField>
void printVariantField(const TField& field, unsigned indent);

class FieldPrinter
{
public:
    explicit FieldPrinter(unsigned indent) : m_indent(indent) {}

    template <typename TField>
    void operator()(const TField& field) const
    {
        using FieldType = typename std::decay<decltype(field)>::type;
        using Tag = FieldTag<FieldType>;
        printIndent(m_indent);
        std::cout << field.name() << " : ";
        printFieldValue(field, Tag());
        std::cout << '\n';
    }

private: 
    struct CastTag {};
    struct AsIsTag {};
    struct IntElementTag {};
    struct FieldElementTag {};
    struct EnumFieldTag {};
    struct BitmaskFieldTag {};
    struct GenericFieldTag {};

    template <typename TField>
    using FieldTag = 
        typename std::conditional<
            comms::field::isEnumValue<TField>(),
            EnumFieldTag,
            typename std::conditional<
                comms::field::isBitmaskValue<TField>(),
                BitmaskFieldTag,
                GenericFieldTag
            >::type
        >::type;

    template <typename TFieldBase, typename T, typename... TOptions>
    static void printFieldValue(const comms::field::IntValue<TFieldBase, T, TOptions...>& field, GenericFieldTag)
    {
        printIntValue(field.value());
    }

    template <typename TField>
    static void printFieldValue(const TField& field, EnumFieldTag)
    {
        using FieldType = typename std::decay<decltype(field)>::type;
        using ValueType = typename FieldType::ValueType;
        using UnderlyingType = typename std::underlying_type<ValueType>::type;

        auto* name = field.valueName(field.value());
        if (name == nullptr) {
            printIntValue(static_cast<UnderlyingType>(field.value()));
            return;
        }

        std::cout << name << " (";
        printIntValue(static_cast<UnderlyingType>(field.value()));
        std::cout << ')';
    }

    template <typename TField>
    void printFieldValue(const TField& field, BitmaskFieldTag) const
    {
        using FieldType = typename std::decay<decltype(field)>::type;
        std::cout << std::hex << "0x" << static_cast<std::uintmax_t>(field.value());
        for (auto idx = 0U; idx < FieldType::BitIdx_numOfValues; ++idx) {
            auto bitIdx = static_cast<typename FieldType::BitIdx>(idx);
            auto* name = field.bitName(bitIdx);
            if (name == nullptr) {
                continue;
            }

            std::cout << '\n';
            printIndent(m_indent + 1);
            std::cout << name << " : " << std::boolalpha << field.getBitValue(bitIdx);
        }
    }

    template <typename TFieldBase, typename TMembers, typename... TOptions>
    void printFieldValue(const comms::field::Bitfield<TFieldBase, TMembers, TOptions...>& field, GenericFieldTag) const
    {
        std::cout << '\n';
        comms::util::tupleForEach(field.value(), FieldPrinter(m_indent + 1));
    }

    template <typename TFieldBase, typename TMembers, typename... TOptions>
    void printFieldValue(const comms::field::Bundle<TFieldBase, TMembers, TOptions...>& field, GenericFieldTag) const
    {
        std::cout << '\n';
        comms::util::tupleForEach(field.value(), FieldPrinter(m_indent + 1));
    }

    template <typename TFieldBase, typename T, typename... TOptions>
    static void printFieldValue(const comms::field::FloatValue<TFieldBase, T, TOptions...>& field, GenericFieldTag)
    {
        std::cout << field.value();
    }

    template <typename TFieldBase, typename... TOptions>
    static void printFieldValue(const comms::field::String<TFieldBase, TOptions...>& field, GenericFieldTag)
    {
        std::cout << std::string(field.value().begin(), field.value().end());
    }

    template <typename TFieldBase, typename TElement, typename... TOptions>
    void printFieldValue(const comms::field::ArrayList<TFieldBase, TElement, TOptions...>& field, GenericFieldTag) const
    {
        using FieldType = typename std::decay<decltype(field)>::type;
        using Tag = 
            typename std::conditional<
                std::is_integral<typename FieldType::ElementType>::value,
                IntElementTag,
                FieldElementTag
            >::type;

        printArrayData(field.value(), Tag());
    }

    template <typename TField, typename... TOptions>
    void printFieldValue(const comms::field::Optional<TField, TOptions...>& field, GenericFieldTag) const
    {
        if (field.isMissing()) {
            std::cout << "<missing>";
            return;
        }

        if (!field.doesExist()) {
            assert(!"Should not happen");
            exit(-1);
        }

        std::cout << "<exists>\n";
        FieldPrinter printer(m_indent + 1);
        printer(field.field());
    }

    template <typename TFieldBase, typename TMembers, typename... TOptions>
    void printFieldValue(const comms::field::Variant<TFieldBase, TMembers, TOptions...>& field, GenericFieldTag) const
    {
        if (!field.currentFieldValid()) {
            std::cout << "<none>";
            return;
        }

        std::cout << "(" << field.currentField() << ")\n";
        printVariantField(field, m_indent + 1);
    }

    template <typename T>
    static void printIntValue(T value)
    {
        using Tag = 
            typename std::conditional<
                sizeof(T) == 1U,
                CastTag,
                AsIsTag
            >::type;

        return printIntValue(value, Tag());
    }

    template <typename T>
    static void printIntValue(T value, CastTag)
    {
        using CastType = 
            typename comms::util::SizeToType<sizeof(int), std::is_signed<T>::value>::Type;
        std::cout << static_cast<CastType>(value);
    }

    template <typename T>
    static void printIntValue(T value, AsIsTag)
    {
        std::cout << value;
    }

    template <typename TVec>
    static void printArrayData(const TVec& data, IntElementTag)
    {
        for (auto v : data) {
            std::cout << std::setfill('0') << std::setw(2) << std::hex << 
                static_cast<unsigned>(v) << " ";
        }
    }

    template <typename TVec>
    void printArrayData(const TVec& data, FieldElementTag) const
    {
        if (data.empty()) {
            return;
        }

        std::cout << '\n';
        FieldPrinter printer(m_indent + 1);
        for (auto& f : data) {
            printer(f);
        }
    }

    unsigned m_indent = 0U;
};

class VariantFieldPrinter
{
public:
    explicit VariantFieldPrinter(unsigned indent) : m_printer(indent) {}

    template <std::size_t TIdx, typename TField>
    void operator()(const TField& field)
    {
        m_printer(field);
    }
private:
    FieldPrinter m_printer;
};

template <typename TField>
void printVariantField(const TField& field, unsigned indent)
{
    field.currentFieldExec(VariantFieldPrinter(indent));
}

class Handler
{
public:
    explicit Handler(Frame& frame) : m_frame(frame) {}

    template <typename TMsg>
    void handle(TMsg& msg)
    {
        static_assert(comms::isMessageBase<typename std::decay<decltype(msg)>::type>(),
            "Must be actual message");
        std::cout << '\n' << msg.doName() << " (" << "0x" << std::hex << std::setfill('0') << std::setw(2) << static_cast<std::uintmax_t>(msg.doGetId()) << std::dec << "):\n";
        comms::util::tupleForEach(msg.fields(), FieldPrinter(1));
        std::cout << std::endl;

        // Check write is correct
        std::size_t len = m_frame.length(msg);
        assert(0U < len);
        std::unique_ptr<char []> outBuf(new char[len]);
        auto writeIter = &(outBuf[0]);
        auto es = m_frame.write(msg, writeIter, len);
        if (es != comms::ErrorStatus::Success) {
            std::cerr << "ERROR: Failed to write" << std::endl;
            assert(!"Should not happen");
            exit(-1);
        }

        if (writeIter != (&outBuf[0] + len)) {
            std::cerr << "ERROR: Unexpected pos of write iterator" << std::endl;
            assert(!"Should not happen");
            exit(-1);
        }
    }

    // Handle unexpected messages
    void handle(Message&)
    {
        std::cerr << "ERROR: unexpected message object." << std::endl;
        assert(!"Should not happen");
    }

private:
    Frame& m_frame;
};

} // namespace

int main(int argc, const char* argv[])
{
    static_cast<void>(argc);
    static_cast<void>(argv);

    auto* openResult = std::freopen(nullptr, "rb", stdin);
    static_cast<void>(openResult);

    if(std::ferror(stdin)) {
        std::cerr << "Failed to open stdin" << std::endl;
        return -1;
    }

    std::array<char, 1024> buf;
    std::vector<char> input;
    Frame frame;
    Handler handler(frame);

    while (true) {
        std::size_t len = std::fread(buf.data(), sizeof(buf[0]), buf.size(), stdin);

        if(std::ferror(stdin)) {
            if (std::feof(stdin)) {
                return 0;
            }

            std::cerr << "Some error" << std::endl;
            return -1;
        }

        if (len == 0U) {
            return 0;
        }

        input.insert(input.end(), buf.data(), buf.data() + len); // append to vector
        auto consumed = comms::processAllWithDispatch(&input[0], input.size(), frame, handler);
        input.erase(input.begin(), input.begin() + consumed);
    }
    return 0;
}

