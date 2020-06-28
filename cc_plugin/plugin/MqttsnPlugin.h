// Generated by commsdsl2comms v3.4.2

#pragma once

#include <QtCore/QObject>
#include <QtCore/QtPlugin>
#include "comms_champion/Plugin.h"
#include "comms_champion/Protocol.h"

namespace mqttsn
{

namespace cc_plugin
{

namespace plugin
{

class MqttsnPlugin : public comms_champion::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "mqttsn" FILE "MqttsnPlugin.json")
    Q_INTERFACES(comms_champion::Plugin)

public:
    MqttsnPlugin();
    virtual ~MqttsnPlugin();
private:
    comms_champion::ProtocolPtr m_protocol;
};

} // namespace plugin

} // namespace cc_plugin

} // namespace mqttsn


