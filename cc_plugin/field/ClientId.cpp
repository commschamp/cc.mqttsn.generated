#include "ClientId.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/ClientId.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_clientId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::ClientId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


