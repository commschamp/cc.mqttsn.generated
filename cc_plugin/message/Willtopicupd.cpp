#include "Willtopicupd.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Willtopicupd.h"
#include "cc_plugin/field/WillTopic.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_willTopic()
{
    using Field = mqttsn::message::WilltopicupdFields<>::WillTopic;
    return cc_plugin::field::createProps_willTopic(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_willTopic());
    return props;
}

} // namespace

class WilltopicupdImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Willtopicupd<mqttsn::cc_plugin::Message>,
        WilltopicupdImpl
    >
{
public:
    WilltopicupdImpl() = default;
    WilltopicupdImpl(const WilltopicupdImpl&) = delete;
    WilltopicupdImpl(WilltopicupdImpl&&) = delete;
    virtual ~WilltopicupdImpl() = default;
    WilltopicupdImpl& operator=(const WilltopicupdImpl&) = default;
    WilltopicupdImpl& operator=(WilltopicupdImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willtopicupd::Willtopicupd() : m_pImpl(new WilltopicupdImpl) {}
Willtopicupd::~Willtopicupd() = default;

Willtopicupd& Willtopicupd::operator=(const Willtopicupd& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willtopicupd& Willtopicupd::operator=(Willtopicupd&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willtopicupd::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willtopicupd::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willtopicupd::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willtopicupd::resetImpl()
{
    m_pImpl->reset();
}

bool Willtopicupd::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Willtopicupd*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willtopicupd::MsgIdParamType Willtopicupd::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willtopicupd::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willtopicupd::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willtopicupd::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willtopicupd::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willtopicupd::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


