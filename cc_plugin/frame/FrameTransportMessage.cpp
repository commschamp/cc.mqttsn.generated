#include "FrameTransportMessage.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/MsgId.h"
#include "cc_plugin/field/MsgLengthField.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace frame
{

namespace
{

struct LengthLayer
{
    static QVariantMap createProps_msgLengthField()
    {
        return cc_plugin::field::createProps_msgLengthField("Length");
    }
    
};

struct IdLayer
{
    static QVariantMap createProps_msgId()
    {
        return cc_plugin::field::createProps_msgId("MsgId");
    }
    
};

struct DataLayer
{
    static QVariantMap createProps_data()
    {
        return cc::property::field::ArrayList().name("Data").asMap();
    }
    
};


QVariantList createProps()
{
     QVariantList props;
     props.append(LengthLayer::createProps_msgLengthField());
     props.append(IdLayer::createProps_msgId());
     props.append(DataLayer::createProps_data());
     return props;
}

} // namespace

const QVariantList& FrameTransportMessage::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace frame

} // namespace cc_plugin

} // namespace mqttsn


