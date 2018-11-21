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
{
    pluginProperties()
        .setProtocolCreateFunc(
            []() -> cc::ProtocolPtr
            {
                return cc::ProtocolPtr(new MqttsnProtocol());
            });
}

MqttsnPlugin::~MqttsnPlugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace mqttsn


