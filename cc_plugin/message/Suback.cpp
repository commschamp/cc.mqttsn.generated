#include "Suback.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Suback.h"
#include "cc_plugin/field/Flags.h"
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

static QVariantMap createProps_flags()
{
    using Field = mqttsn::message::SubackFields<>::Flags;
    return cc_plugin::field::createProps_flags(Field::name());
    
}

static QVariantMap createProps_topicId()
{
    using Field = mqttsn::message::SubackFields<>::TopicId;
    return cc_plugin::field::createProps_topicId(Field::name());
    
}

static QVariantMap createProps_msgId()
{
    using Field = mqttsn::message::SubackFields<>::MsgId;
    return cc_plugin::field::createProps_messageId(Field::name());
    
}

static QVariantMap createProps_returnCode()
{
    using Field = mqttsn::message::SubackFields<>::ReturnCode;
    return cc_plugin::field::createProps_returnCode(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_topicId());
    props.append(createProps_msgId());
    props.append(createProps_returnCode());
    return props;
}

} // namespace

class SubackImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Suback<mqttsn::cc_plugin::Message>,
        SubackImpl
    >
{
public:
    SubackImpl() = default;
    SubackImpl(const SubackImpl&) = delete;
    SubackImpl(SubackImpl&&) = delete;
    virtual ~SubackImpl() = default;
    SubackImpl& operator=(const SubackImpl&) = default;
    SubackImpl& operator=(SubackImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Suback::Suback() : m_pImpl(new SubackImpl) {}
Suback::~Suback() = default;

Suback& Suback::operator=(const Suback& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Suback& Suback::operator=(Suback&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Suback::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Suback::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Suback::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Suback::resetImpl()
{
    m_pImpl->reset();
}

bool Suback::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Suback*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Suback::MsgIdParamType Suback::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Suback::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Suback::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Suback::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Suback::lengthImpl() const
{
    return m_pImpl->length();
}

bool Suback::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


