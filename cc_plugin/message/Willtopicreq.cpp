// Generated by commsdsl2comms v3.7.0

#include "Willtopicreq.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Willtopicreq.h"
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

class WilltopicreqImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Willtopicreq<mqttsn::cc_plugin::Message>,
        WilltopicreqImpl
    >
{
public:
    WilltopicreqImpl() = default;
    WilltopicreqImpl(const WilltopicreqImpl&) = delete;
    WilltopicreqImpl(WilltopicreqImpl&&) = delete;
    virtual ~WilltopicreqImpl() = default;
    WilltopicreqImpl& operator=(const WilltopicreqImpl&) = default;
    WilltopicreqImpl& operator=(WilltopicreqImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willtopicreq::Willtopicreq() : m_pImpl(new WilltopicreqImpl) {}
Willtopicreq::~Willtopicreq() = default;

Willtopicreq& Willtopicreq::operator=(const Willtopicreq& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willtopicreq& Willtopicreq::operator=(Willtopicreq&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willtopicreq::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willtopicreq::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willtopicreq::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willtopicreq::resetImpl()
{
    m_pImpl->reset();
}

bool Willtopicreq::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Willtopicreq*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willtopicreq::MsgIdParamType Willtopicreq::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willtopicreq::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willtopicreq::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willtopicreq::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willtopicreq::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willtopicreq::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


