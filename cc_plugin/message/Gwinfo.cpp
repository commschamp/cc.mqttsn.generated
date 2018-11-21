#include "Gwinfo.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Gwinfo.h"
#include "cc_plugin/field/GwAdd.h"
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
    using Field = mqttsn::message::GwinfoFields<>::GwId;
    return cc_plugin::field::createProps_gwId(Field::name());
    
}

static QVariantMap createProps_gwAdd()
{
    using Field = mqttsn::message::GwinfoFields<>::GwAdd;
    return cc_plugin::field::createProps_gwAdd(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_gwId());
    props.append(createProps_gwAdd());
    return props;
}

} // namespace

class GwinfoImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Gwinfo<mqttsn::cc_plugin::Message>,
        GwinfoImpl
    >
{
public:
    GwinfoImpl() = default;
    GwinfoImpl(const GwinfoImpl&) = delete;
    GwinfoImpl(GwinfoImpl&&) = delete;
    virtual ~GwinfoImpl() = default;
    GwinfoImpl& operator=(const GwinfoImpl&) = default;
    GwinfoImpl& operator=(GwinfoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Gwinfo::Gwinfo() : m_pImpl(new GwinfoImpl) {}
Gwinfo::~Gwinfo() = default;

Gwinfo& Gwinfo::operator=(const Gwinfo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Gwinfo& Gwinfo::operator=(Gwinfo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Gwinfo::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Gwinfo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Gwinfo::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Gwinfo::resetImpl()
{
    m_pImpl->reset();
}

bool Gwinfo::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Gwinfo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Gwinfo::MsgIdParamType Gwinfo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Gwinfo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Gwinfo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Gwinfo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Gwinfo::lengthImpl() const
{
    return m_pImpl->length();
}

bool Gwinfo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


