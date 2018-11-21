#include "Advertise.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Advertise.h"
#include "cc_plugin/field/Duration.h"
#include "cc_plugin/field/GwId.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_gwId()
{
    using Field = mqttsn::message::AdvertiseFields<>::GwId;
    return cc_plugin::field::createProps_gwId(Field::name());
    
}

static QVariantMap createProps_duration()
{
    using Field = mqttsn::message::AdvertiseFields<>::Duration;
    return cc_plugin::field::createProps_duration(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_gwId());
    props.append(createProps_duration());
    return props;
}

} // namespace

class AdvertiseImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Advertise<mqttsn::cc_plugin::Message>,
        AdvertiseImpl
    >
{
public:
    AdvertiseImpl() = default;
    AdvertiseImpl(const AdvertiseImpl&) = delete;
    AdvertiseImpl(AdvertiseImpl&&) = delete;
    virtual ~AdvertiseImpl() = default;
    AdvertiseImpl& operator=(const AdvertiseImpl&) = default;
    AdvertiseImpl& operator=(AdvertiseImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Advertise::Advertise() : m_pImpl(new AdvertiseImpl) {}
Advertise::~Advertise() = default;

Advertise& Advertise::operator=(const Advertise& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Advertise& Advertise::operator=(Advertise&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Advertise::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Advertise::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Advertise::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Advertise::resetImpl()
{
    m_pImpl->reset();
}

bool Advertise::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Advertise*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Advertise::MsgIdParamType Advertise::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Advertise::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Advertise::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Advertise::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Advertise::lengthImpl() const
{
    return m_pImpl->length();
}

bool Advertise::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


