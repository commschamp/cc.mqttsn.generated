#include "Flags.h"

#include "cc_plugin/field/QoS.h"
#include "comms_champion/property/field.h"
#include "mqttsn/field/Flags.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

namespace
{

struct FlagsMembers
{
    static QVariantMap createProps_topicIdType(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::FlagsMembers<>::TopicIdType;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("NormalTopicId", 0)
                .add("PredefinedTopicId", 1)
                .add("TopicName", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_mid(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::FlagsMembers<>::Mid;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "CleanSession")
                .add(1U, "Will")
                .add(2U, "Retain")
                .asMap();
        
    }
    
    static QVariantMap createProps_qoS(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::FlagsMembers<>::QoS;
        return cc_plugin::field::createProps_qoS(Field::name(), true);
        
    }
    
    static QVariantMap createProps_high(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::FlagsMembers<>::High;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "Dup")
                .asMap();
        
    }
    
};

} // namespace


QVariantMap createProps_flags(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::Flags<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_topicIdType(serHidden))
            .add(FlagsMembers::createProps_mid(serHidden))
            .add(FlagsMembers::createProps_qoS(serHidden))
            .add(FlagsMembers::createProps_high(serHidden))
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


