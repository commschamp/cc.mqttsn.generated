// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains definition of <b>"Frame"</b> frame class.

#pragma once

#include "cc_mqttsn/field/MsgId.h"
#include "cc_mqttsn/field/MsgLengthField.h"
#include "cc_mqttsn/input/AllMessages.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/protocol/MsgDataLayer.h"
#include "comms/protocol/MsgIdLayer.h"
#include "comms/protocol/MsgSizeLayer.h"

namespace cc_mqttsn
{

namespace frame
{

/// @brief Layers definition of @ref Frame frame class.
/// @tparam TOpt Protocol options.
/// @see @ref Frame
/// @headerfile cc_mqttsn/frame/Frame.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct FrameLayers
{
    /// @brief Definition of layer "Data".
    using Data =
        comms::protocol::MsgDataLayer<
            typename TOpt::frame::FrameLayers::Data
        >;

    /// @brief Definition of layer "Id".
    template <typename TMessage, typename TAllMessages>
    using Id =
        comms::protocol::MsgIdLayer<
            cc_mqttsn::field::MsgId<
                TOpt
            >,
            TMessage,
            TAllMessages,
            Data,
            typename TOpt::frame::FrameLayers::Id
        >;

    /// @brief Definition of layer "Length".
    template <typename TMessage, typename TAllMessages>
    using Length =
        comms::protocol::MsgSizeLayer<
            cc_mqttsn::field::MsgLengthField<
                TOpt
            >,
            Id<TMessage, TAllMessages>
        >;

    /// @brief Final protocol stack definition.
    template<typename TMessage, typename TAllMessages>
    using Stack = Length<TMessage, TAllMessages>;
};

/// @brief Definition of <b>"Frame"</b> frame class.
/// @tparam TMessage Common interface class of all the messages
/// @tparam TAllMessages All supported input messages.
/// @tparam TOpt Frame definition options
/// @headerfile cc_mqttsn/frame/Frame.h
template <
   typename TMessage,
   typename TAllMessages = cc_mqttsn::input::AllMessages<TMessage>,
   typename TOpt = cc_mqttsn::options::DefaultOptions
>
class Frame : public
    FrameLayers<TOpt>::template Stack<TMessage, TAllMessages>
{
    using Base = typename
        FrameLayers<TOpt>::template Stack<TMessage, TAllMessages>;
public:
    /// @brief Allow access to frame definition layers.
    /// @details See definition of @b COMMS_PROTOCOL_LAYERS_NAMES macro
    ///     from COMMS library for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Layer_data type and @b layer_data() function
    ///         for @ref FrameLayers::Data layer.
    ///     @li @b Layer_id type and @b layer_id() function
    ///         for @ref FrameLayers::Id layer.
    ///     @li @b Layer_length type and @b layer_length() function
    ///         for @ref FrameLayers::Length layer.
    COMMS_PROTOCOL_LAYERS_NAMES(
        data,
        id,
        length
    );
};

} // namespace frame

} // namespace cc_mqttsn
