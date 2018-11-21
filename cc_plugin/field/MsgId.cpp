#include "MsgId.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/MsgId.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_msgId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::MsgId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("ADVERTISE", 0)
            .add("SEARCHGW", 1)
            .add("GWINFO", 2)
            .add("CONNECT", 4)
            .add("CONNACK", 5)
            .add("WILLTOPICREQ", 6)
            .add("WILLTOPIC", 7)
            .add("WILLMSGREQ", 8)
            .add("WILLMSG", 9)
            .add("REGISTER", 10)
            .add("REGACK", 11)
            .add("PUBLISH", 12)
            .add("PUBACK", 13)
            .add("PUBCOMP", 14)
            .add("PUBREC", 15)
            .add("PUBREL", 16)
            .add("SUBSCRIBE", 18)
            .add("SUBACK", 19)
            .add("UNSUBSCRIBE", 20)
            .add("UNSUBACK", 21)
            .add("PINGREQ", 22)
            .add("PINGRESP", 23)
            .add("DISCONNECT", 24)
            .add("WILLTOPICUPD", 26)
            .add("WILLTOPICRESP", 27)
            .add("WILLMSGUPD", 28)
            .add("WILLMSGRESP", 29)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


