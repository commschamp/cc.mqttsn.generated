#pragma once

#include <QtCore/QVariantMap>

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_clientId(const char* name, bool serHidden = false);

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


