#pragma once

#include <QtCore/QVariantMap>

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_topicName(const char* name, bool serHidden = false);

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


