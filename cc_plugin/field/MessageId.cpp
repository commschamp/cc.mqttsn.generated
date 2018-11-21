#include "MessageId.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/MessageId.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_messageId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::MessageId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


