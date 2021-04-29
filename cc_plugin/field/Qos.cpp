// Generated by commsdsl2comms v3.6.2

#include "Qos.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/Qos.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_qos(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::Qos<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("AtMostOnceDelivery", 0)
            .add("AtLeastOnceDelivery", 1)
            .add("ExactlyOnceDelivery", 2)
            .add("NoGwPublish", 3)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


