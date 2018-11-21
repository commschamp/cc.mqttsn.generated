#include "Subscribe.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Subscribe.h"
#include "cc_plugin/field/Flags.h"
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

static QVariantMap createProps_flags()
{
    using Field = mqttsn::message::SubscribeFields<>::Flags;
    return cc_plugin::field::createProps_flags(Field::name());
    
}

static QVariantMap createProps_msgId()
{
    using Field = mqttsn::message::SubscribeFields<>::MsgId;
    return cc_plugin::field::createProps_messageId(Field::name());
    
}

struct TopicIdMembers
{
    static QVariantMap createProps_topicId()
    {
        using Field = mqttsn::message::SubscribeFields<>::TopicIdMembers::TopicId;
        return cc_plugin::field::createProps_topicId(Field::name());
        
    }
    
};

static QVariantMap createProps_topicId()
{
    using Field = mqttsn::message::SubscribeFields<>::TopicId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(TopicIdMembers::createProps_topicId())
            .asMap();
    
}

struct TopicNameMembers
{
    static QVariantMap createProps_topicName()
    {
        using Field = mqttsn::message::SubscribeFields<>::TopicNameMembers::TopicName;
        return cc_plugin::field::createProps_topicName(Field::name());
        
    }
    
};

static QVariantMap createProps_topicName()
{
    using Field = mqttsn::message::SubscribeFields<>::TopicName;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(TopicNameMembers::createProps_topicName())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_msgId());
    props.append(createProps_topicId());
    props.append(createProps_topicName());
    return props;
}

} // namespace

class SubscribeImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Subscribe<mqttsn::cc_plugin::Message>,
        SubscribeImpl
    >
{
public:
    SubscribeImpl() = default;
    SubscribeImpl(const SubscribeImpl&) = delete;
    SubscribeImpl(SubscribeImpl&&) = delete;
    virtual ~SubscribeImpl() = default;
    SubscribeImpl& operator=(const SubscribeImpl&) = default;
    SubscribeImpl& operator=(SubscribeImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Subscribe::Subscribe() : m_pImpl(new SubscribeImpl) {}
Subscribe::~Subscribe() = default;

Subscribe& Subscribe::operator=(const Subscribe& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Subscribe& Subscribe::operator=(Subscribe&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Subscribe::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Subscribe::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Subscribe::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Subscribe::resetImpl()
{
    m_pImpl->reset();
}

bool Subscribe::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Subscribe*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Subscribe::MsgIdParamType Subscribe::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Subscribe::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Subscribe::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Subscribe::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Subscribe::lengthImpl() const
{
    return m_pImpl->length();
}

bool Subscribe::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


