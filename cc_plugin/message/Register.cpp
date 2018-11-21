#include "Register.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Register.h"
#include "cc_plugin/field/MessageId.h"
#include "cc_plugin/field/TopicId.h"
#include "cc_plugin/field/TopicName.h"

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
    using Field = mqttsn::message::RegisterFields<>::TopicId;
    return cc_plugin::field::createProps_topicId(Field::name());
    
}

static QVariantMap createProps_msgId()
{
    using Field = mqttsn::message::RegisterFields<>::MsgId;
    return cc_plugin::field::createProps_messageId(Field::name());
    
}

static QVariantMap createProps_topicName()
{
    using Field = mqttsn::message::RegisterFields<>::TopicName;
    return cc_plugin::field::createProps_topicName(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_topicId());
    props.append(createProps_msgId());
    props.append(createProps_topicName());
    return props;
}

} // namespace

class RegisterImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Register<mqttsn::cc_plugin::Message>,
        RegisterImpl
    >
{
public:
    RegisterImpl() = default;
    RegisterImpl(const RegisterImpl&) = delete;
    RegisterImpl(RegisterImpl&&) = delete;
    virtual ~RegisterImpl() = default;
    RegisterImpl& operator=(const RegisterImpl&) = default;
    RegisterImpl& operator=(RegisterImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Register::Register() : m_pImpl(new RegisterImpl) {}
Register::~Register() = default;

Register& Register::operator=(const Register& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Register& Register::operator=(Register&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Register::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Register::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Register::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Register::resetImpl()
{
    m_pImpl->reset();
}

bool Register::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Register*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Register::MsgIdParamType Register::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Register::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Register::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Register::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Register::lengthImpl() const
{
    return m_pImpl->length();
}

bool Register::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


