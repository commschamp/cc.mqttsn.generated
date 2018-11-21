#include "WillMsg.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/WillMsg.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_willMsg(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::WillMsg<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


