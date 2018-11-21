#pragma once

#include <tuple>
#include <QtCore/QVariantList>
#include "comms_champion/TransportMessageBase.h"
#include "mqttsn/frame/Frame.h"
#include "cc_plugin/Message.h"

namespace mqttsn
{

namespace cc_plugin
{

namespace frame
{

struct FrameTransportMessageFields
{
    using All =
        std::tuple<
            mqttsn::field::MsgLengthField<>,
            mqttsn::field::MsgId<>,
            mqttsn::frame::FrameLayers<>::Data::Field
        >;
};

class FrameTransportMessage : public
    comms_champion::TransportMessageBase<
        mqttsn::cc_plugin::Message,
        FrameTransportMessageFields::All
    >
{
protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace frame

} // namespace cc_plugin

} // namespace mqttsn


