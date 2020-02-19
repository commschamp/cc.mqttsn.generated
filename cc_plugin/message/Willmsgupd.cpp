// Generated by commsdsl2comms v3.3.2

#include "Willmsgupd.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Willmsgupd.h"
#include "cc_plugin/field/WillMsg.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_willMsg()
{
    using Field = mqttsn::message::WillmsgupdFields<>::WillMsg;
    auto props = cc_plugin::field::createProps_willMsg(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_willMsg());
    return props;
}

} // namespace

class WillmsgupdImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Willmsgupd<mqttsn::cc_plugin::Message>,
        WillmsgupdImpl
    >
{
public:
    WillmsgupdImpl() = default;
    WillmsgupdImpl(const WillmsgupdImpl&) = delete;
    WillmsgupdImpl(WillmsgupdImpl&&) = delete;
    virtual ~WillmsgupdImpl() = default;
    WillmsgupdImpl& operator=(const WillmsgupdImpl&) = default;
    WillmsgupdImpl& operator=(WillmsgupdImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willmsgupd::Willmsgupd() : m_pImpl(new WillmsgupdImpl) {}
Willmsgupd::~Willmsgupd() = default;

Willmsgupd& Willmsgupd::operator=(const Willmsgupd& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willmsgupd& Willmsgupd::operator=(Willmsgupd&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willmsgupd::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willmsgupd::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willmsgupd::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willmsgupd::resetImpl()
{
    m_pImpl->reset();
}

bool Willmsgupd::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Willmsgupd*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willmsgupd::MsgIdParamType Willmsgupd::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willmsgupd::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willmsgupd::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willmsgupd::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willmsgupd::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willmsgupd::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


