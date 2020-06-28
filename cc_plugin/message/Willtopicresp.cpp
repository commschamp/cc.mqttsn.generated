// Generated by commsdsl2comms v3.4.2

#include "Willtopicresp.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Willtopicresp.h"
#include "cc_plugin/field/ReturnCode.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_returnCode()
{
    using Field = mqttsn::message::WilltopicrespFields<>::ReturnCode;
    auto props = cc_plugin::field::createProps_returnCode(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_returnCode());
    return props;
}

} // namespace

class WilltopicrespImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Willtopicresp<mqttsn::cc_plugin::Message>,
        WilltopicrespImpl
    >
{
public:
    WilltopicrespImpl() = default;
    WilltopicrespImpl(const WilltopicrespImpl&) = delete;
    WilltopicrespImpl(WilltopicrespImpl&&) = delete;
    virtual ~WilltopicrespImpl() = default;
    WilltopicrespImpl& operator=(const WilltopicrespImpl&) = default;
    WilltopicrespImpl& operator=(WilltopicrespImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willtopicresp::Willtopicresp() : m_pImpl(new WilltopicrespImpl) {}
Willtopicresp::~Willtopicresp() = default;

Willtopicresp& Willtopicresp::operator=(const Willtopicresp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willtopicresp& Willtopicresp::operator=(Willtopicresp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willtopicresp::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willtopicresp::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willtopicresp::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willtopicresp::resetImpl()
{
    m_pImpl->reset();
}

bool Willtopicresp::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Willtopicresp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willtopicresp::MsgIdParamType Willtopicresp::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willtopicresp::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willtopicresp::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willtopicresp::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willtopicresp::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willtopicresp::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


