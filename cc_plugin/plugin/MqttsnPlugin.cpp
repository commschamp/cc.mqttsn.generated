// Generated by commsdsl2comms v3.3.1

#include "MqttsnPlugin.h"

#include "MqttsnProtocol.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace plugin
{

MqttsnPlugin::MqttsnPlugin()
  : m_protocol(new MqttsnProtocol())
{
    pluginProperties()
        .setProtocolCreateFunc(
            [this]() -> cc::ProtocolPtr
            {
                return m_protocol;
            })
            ;
}

MqttsnPlugin::~MqttsnPlugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace mqttsn


