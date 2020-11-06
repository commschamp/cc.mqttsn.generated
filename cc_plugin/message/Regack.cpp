// Generated by commsdsl2comms v3.5.3

#include "Regack.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Regack.h"
#include "cc_plugin/field/MessageId.h"
#include "cc_plugin/field/ReturnCode.h"
#include "cc_plugin/field/TopicId.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_topicId()
{
    using Field = mqttsn::message::RegackFields<>::TopicId;
    auto props = cc_plugin::field::createProps_topicId(Field::name());
    return props;
    
}

static QVariantMap createProps_msgId()
{
    using Field = mqttsn::message::RegackFields<>::MsgId;
    auto props = cc_plugin::field::createProps_messageId(Field::name());
    return props;
    
}

static QVariantMap createProps_returnCode()
{
    using Field = mqttsn::message::RegackFields<>::ReturnCode;
    auto props = cc_plugin::field::createProps_returnCode(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_topicId());
    props.append(createProps_msgId());
    props.append(createProps_returnCode());
    return props;
}

} // namespace

class RegackImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Regack<mqttsn::cc_plugin::Message>,
        RegackImpl
    >
{
public:
    RegackImpl() = default;
    RegackImpl(const RegackImpl&) = delete;
    RegackImpl(RegackImpl&&) = delete;
    virtual ~RegackImpl() = default;
    RegackImpl& operator=(const RegackImpl&) = default;
    RegackImpl& operator=(RegackImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Regack::Regack() : m_pImpl(new RegackImpl) {}
Regack::~Regack() = default;

Regack& Regack::operator=(const Regack& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Regack& Regack::operator=(Regack&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Regack::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Regack::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Regack::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Regack::resetImpl()
{
    m_pImpl->reset();
}

bool Regack::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Regack*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Regack::MsgIdParamType Regack::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Regack::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Regack::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Regack::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Regack::lengthImpl() const
{
    return m_pImpl->length();
}

bool Regack::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


