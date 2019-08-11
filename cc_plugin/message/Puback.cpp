#include "Puback.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Puback.h"
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
    using Field = mqttsn::message::PubackFields<>::TopicId;
    auto props = cc_plugin::field::createProps_topicId(Field::name());
    return props;
    
}

static QVariantMap createProps_msgId()
{
    using Field = mqttsn::message::PubackFields<>::MsgId;
    auto props = cc_plugin::field::createProps_messageId(Field::name());
    return props;
    
}

static QVariantMap createProps_returnCode()
{
    using Field = mqttsn::message::PubackFields<>::ReturnCode;
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

class PubackImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Puback<mqttsn::cc_plugin::Message>,
        PubackImpl
    >
{
public:
    PubackImpl() = default;
    PubackImpl(const PubackImpl&) = delete;
    PubackImpl(PubackImpl&&) = delete;
    virtual ~PubackImpl() = default;
    PubackImpl& operator=(const PubackImpl&) = default;
    PubackImpl& operator=(PubackImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Puback::Puback() : m_pImpl(new PubackImpl) {}
Puback::~Puback() = default;

Puback& Puback::operator=(const Puback& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Puback& Puback::operator=(Puback&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Puback::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Puback::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Puback::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Puback::resetImpl()
{
    m_pImpl->reset();
}

bool Puback::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Puback*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Puback::MsgIdParamType Puback::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Puback::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Puback::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Puback::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Puback::lengthImpl() const
{
    return m_pImpl->length();
}

bool Puback::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


