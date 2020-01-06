// Generated by commsdsl2comms v3.3.0

#include "MsgLengthField.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/MsgLengthField.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

namespace
{

struct MsgLengthFieldMembers
{
    static QVariantMap createProps_short(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::MsgLengthFieldMembers<>::Short;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .displayOffset(1)
                .asMap();
        
    }
    
    struct LongMembers
    {
        static QVariantMap createProps_long(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = mqttsn::field::MsgLengthFieldMembers<>::LongMembers::Long;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .displayOffset(3)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_long(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::MsgLengthFieldMembers<>::Long;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .uncheckable()
                .field(LongMembers::createProps_long(serHidden))
                .asMap();
        
    }
    
};

} // namespace


QVariantMap createProps_msgLengthField(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::MsgLengthField<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(MsgLengthFieldMembers::createProps_short(serHidden))
            .add(MsgLengthFieldMembers::createProps_long(serHidden))
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


