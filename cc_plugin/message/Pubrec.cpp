// Generated by commsdsl2comms v3.3.3

#include "Pubrec.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Pubrec.h"
#include "cc_plugin/field/MessageId.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_msgId()
{
    using Field = mqttsn::message::PubrecFields<>::MsgId;
    auto props = cc_plugin::field::createProps_messageId(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msgId());
    return props;
}

} // namespace

class PubrecImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Pubrec<mqttsn::cc_plugin::Message>,
        PubrecImpl
    >
{
public:
    PubrecImpl() = default;
    PubrecImpl(const PubrecImpl&) = delete;
    PubrecImpl(PubrecImpl&&) = delete;
    virtual ~PubrecImpl() = default;
    PubrecImpl& operator=(const PubrecImpl&) = default;
    PubrecImpl& operator=(PubrecImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Pubrec::Pubrec() : m_pImpl(new PubrecImpl) {}
Pubrec::~Pubrec() = default;

Pubrec& Pubrec::operator=(const Pubrec& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Pubrec& Pubrec::operator=(Pubrec&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Pubrec::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Pubrec::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Pubrec::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Pubrec::resetImpl()
{
    m_pImpl->reset();
}

bool Pubrec::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Pubrec*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Pubrec::MsgIdParamType Pubrec::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Pubrec::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Pubrec::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Pubrec::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Pubrec::lengthImpl() const
{
    return m_pImpl->length();
}

bool Pubrec::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


