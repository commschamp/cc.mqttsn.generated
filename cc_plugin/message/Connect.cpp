// Generated by commsdsl2comms v3.6.2

#include "Connect.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Connect.h"
#include "cc_plugin/field/ClientId.h"
#include "cc_plugin/field/Duration.h"
#include "cc_plugin/field/Flags.h"
#include "cc_plugin/field/ProtocolId.h"

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
    using Field = mqttsn::message::ConnectFields<>::Flags;
    auto props = cc_plugin::field::createProps_flags(Field::name());
    return props;
    
}

static QVariantMap createProps_protocolId()
{
    using Field = mqttsn::message::ConnectFields<>::ProtocolId;
    auto props = cc_plugin::field::createProps_protocolId(Field::name());
    return props;
    
}

static QVariantMap createProps_duration()
{
    using Field = mqttsn::message::ConnectFields<>::Duration;
    auto props = cc_plugin::field::createProps_duration(Field::name());
    return props;
    
}

static QVariantMap createProps_clientId()
{
    using Field = mqttsn::message::ConnectFields<>::ClientId;
    auto props = cc_plugin::field::createProps_clientId(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_protocolId());
    props.append(createProps_duration());
    props.append(createProps_clientId());
    return props;
}

} // namespace

class ConnectImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Connect<mqttsn::cc_plugin::Message>,
        ConnectImpl
    >
{
public:
    ConnectImpl() = default;
    ConnectImpl(const ConnectImpl&) = delete;
    ConnectImpl(ConnectImpl&&) = delete;
    virtual ~ConnectImpl() = default;
    ConnectImpl& operator=(const ConnectImpl&) = default;
    ConnectImpl& operator=(ConnectImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Connect::Connect() : m_pImpl(new ConnectImpl) {}
Connect::~Connect() = default;

Connect& Connect::operator=(const Connect& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Connect& Connect::operator=(Connect&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Connect::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Connect::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Connect::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Connect::resetImpl()
{
    m_pImpl->reset();
}

bool Connect::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Connect*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Connect::MsgIdParamType Connect::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Connect::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Connect::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Connect::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Connect::lengthImpl() const
{
    return m_pImpl->length();
}

bool Connect::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


