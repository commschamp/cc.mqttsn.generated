// Generated by commsdsl2comms v3.6.4

#include "Radius.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/Radius.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_radius(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::Radius<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .addSpecial("BroadcastToAll", 0)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


