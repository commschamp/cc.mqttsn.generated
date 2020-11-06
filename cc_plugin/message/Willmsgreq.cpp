// Generated by commsdsl2comms v3.5.3

#include "Willmsgreq.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Willmsgreq.h"
namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class WillmsgreqImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Willmsgreq<mqttsn::cc_plugin::Message>,
        WillmsgreqImpl
    >
{
public:
    WillmsgreqImpl() = default;
    WillmsgreqImpl(const WillmsgreqImpl&) = delete;
    WillmsgreqImpl(WillmsgreqImpl&&) = delete;
    virtual ~WillmsgreqImpl() = default;
    WillmsgreqImpl& operator=(const WillmsgreqImpl&) = default;
    WillmsgreqImpl& operator=(WillmsgreqImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willmsgreq::Willmsgreq() : m_pImpl(new WillmsgreqImpl) {}
Willmsgreq::~Willmsgreq() = default;

Willmsgreq& Willmsgreq::operator=(const Willmsgreq& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willmsgreq& Willmsgreq::operator=(Willmsgreq&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willmsgreq::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willmsgreq::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willmsgreq::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willmsgreq::resetImpl()
{
    m_pImpl->reset();
}

bool Willmsgreq::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Willmsgreq*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willmsgreq::MsgIdParamType Willmsgreq::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willmsgreq::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willmsgreq::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willmsgreq::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willmsgreq::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willmsgreq::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


