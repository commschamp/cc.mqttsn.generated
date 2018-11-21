#include "Willmsg.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Willmsg.h"
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
    using Field = mqttsn::message::WillmsgFields<>::WillMsg;
    return cc_plugin::field::createProps_willMsg(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_willMsg());
    return props;
}

} // namespace

class WillmsgImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Willmsg<mqttsn::cc_plugin::Message>,
        WillmsgImpl
    >
{
public:
    WillmsgImpl() = default;
    WillmsgImpl(const WillmsgImpl&) = delete;
    WillmsgImpl(WillmsgImpl&&) = delete;
    virtual ~WillmsgImpl() = default;
    WillmsgImpl& operator=(const WillmsgImpl&) = default;
    WillmsgImpl& operator=(WillmsgImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willmsg::Willmsg() : m_pImpl(new WillmsgImpl) {}
Willmsg::~Willmsg() = default;

Willmsg& Willmsg::operator=(const Willmsg& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willmsg& Willmsg::operator=(Willmsg&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willmsg::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willmsg::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willmsg::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willmsg::resetImpl()
{
    m_pImpl->reset();
}

bool Willmsg::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Willmsg*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willmsg::MsgIdParamType Willmsg::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willmsg::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willmsg::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willmsg::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willmsg::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willmsg::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


