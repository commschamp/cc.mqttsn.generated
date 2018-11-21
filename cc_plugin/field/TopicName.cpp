#include "TopicName.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/TopicName.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_topicName(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::TopicName<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


