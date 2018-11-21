#include "GwId.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/GwId.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_gwId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::GwId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


