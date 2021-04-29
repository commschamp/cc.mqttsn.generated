// Generated by commsdsl2comms v3.6.2

#include "MqttsnProtocol.h"

#include <cassert>
#include "comms_champion/ProtocolBase.h"
#include "cc_plugin/frame/Frame.h"
#include "cc_plugin/frame/FrameTransportMessage.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace plugin
{

class MqttsnProtocolImpl : public
    cc::ProtocolBase<
        mqttsn::cc_plugin::frame::Frame,
        mqttsn::cc_plugin::frame::FrameTransportMessage
    >
{
    using Base =
        cc::ProtocolBase<
            mqttsn::cc_plugin::frame::Frame,
            mqttsn::cc_plugin::frame::FrameTransportMessage
        >;
public:
    friend class mqttsn::cc_plugin::plugin::MqttsnProtocol;

    MqttsnProtocolImpl() = default;
    virtual ~MqttsnProtocolImpl() = default;

protected:
    virtual const QString& nameImpl() const override
    {
        static const QString Str("mqttsn");
        return Str;
    }

    using Base::createInvalidMessageImpl;
    using Base::createRawDataMessageImpl;
    using Base::createExtraInfoMessageImpl;

};

MqttsnProtocol::MqttsnProtocol()
  : m_pImpl(new MqttsnProtocolImpl())
{
}

MqttsnProtocol::~MqttsnProtocol() = default;

const QString& MqttsnProtocol::nameImpl() const
{
    return m_pImpl->name();
}

MqttsnProtocol::MessagesList MqttsnProtocol::readImpl(const cc::DataInfo& dataInfo, bool final)
{
    return m_pImpl->read(dataInfo, final);
}

cc::DataInfoPtr MqttsnProtocol::writeImpl(cc::Message& msg)
{
    return m_pImpl->write(msg);
}

MqttsnProtocol::MessagesList MqttsnProtocol::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc::MessagePtr MqttsnProtocol::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return static_cast<cc::Protocol*>(m_pImpl.get())->createMessage(idAsString, idx);
}

MqttsnProtocol::UpdateStatus MqttsnProtocol::updateMessageImpl(cc::Message& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc::MessagePtr MqttsnProtocol::cloneMessageImpl(const cc::Message& msg)
{
    return m_pImpl->cloneMessage(msg);
}

cc::MessagePtr MqttsnProtocol::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessageImpl();
}

cc::MessagePtr MqttsnProtocol::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessageImpl();
}

cc::MessagePtr MqttsnProtocol::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessageImpl();
}

} // namespace plugin

} // namespace cc_plugin

} // namespace mqttsn


