// Generated by commsdsl2comms v3.3.2

#include "Duration.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/Duration.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_duration(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::Duration<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


