// Generated by commsdsl2comms v3.6.0

#include "GwAdd.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/GwAdd.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_gwAdd(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::GwAdd<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


