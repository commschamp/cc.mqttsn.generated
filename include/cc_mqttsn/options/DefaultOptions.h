// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace cc_mqttsn
{

namespace options
{

/// @brief Empty class to serve as the base for options.
struct EmptyOptions {};

/// @brief Default (empty) options of the protocol.
template <typename TBase = EmptyOptions>
struct DefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field
    {
        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::ClientId field.
        using ClientId = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::Data field.
        using Data = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::GwAdd field.
        using GwAdd = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::NodeId field.
        using NodeId = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::TopicName field.
        using TopicName = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::WillMsg field.
        using WillMsg = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::WillTopic field.
        using WillTopic = comms::option::app::EmptyOption;
    }; // struct field

    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Advertise message.
        using Advertise = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Connack message.
        using Connack = comms::option::app::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Connect message.
        struct ConnectFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::ConnectFields::ClientId
            ///     field.
            using ClientId = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Connect message.
        using Connect = comms::option::app::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Fwd message.
        struct FwdFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::FwdFields::NodeId
            ///     field.
            using NodeId = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Gwinfo message.
        struct GwinfoFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::GwinfoFields::GwAdd
            ///     field.
            using GwAdd = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Pingreq message.
        struct PingreqFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::PingreqFields::ClientId
            ///     field.
            using ClientId = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Publish message.
        struct PublishFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::PublishFields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Register message.
        struct RegisterFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::RegisterFields::TopicName
            ///     field.
            using TopicName = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Suback message.
        using Suback = comms::option::app::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Subscribe message.
        struct SubscribeFields
        {
            struct TopicNameMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqttsn::message::SubscribeFields::TopicNameMembers::TopicName
                ///     field.
                using TopicName = comms::option::app::EmptyOption;
            }; // struct TopicNameMembers
        };

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Subscribe message.
        using Subscribe = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Unsuback message.
        using Unsuback = comms::option::app::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Unsubscribe message.
        struct UnsubscribeFields
        {
            struct TopicNameMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqttsn::message::UnsubscribeFields::TopicNameMembers::TopicName
                ///     field.
                using TopicName = comms::option::app::EmptyOption;
            }; // struct TopicNameMembers
        };

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Unsubscribe message.
        using Unsubscribe = comms::option::app::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Willmsg message.
        struct WillmsgFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::WillmsgFields::WillMsg
            ///     field.
            using WillMsg = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willmsg message.
        using Willmsg = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willmsgreq message.
        using Willmsgreq = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willmsgresp message.
        using Willmsgresp = comms::option::app::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Willmsgupd message.
        struct WillmsgupdFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::WillmsgupdFields::WillMsg
            ///     field.
            using WillMsg = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willmsgupd message.
        using Willmsgupd = comms::option::app::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Willtopic message.
        struct WilltopicFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::WilltopicFields::WillTopic
            ///     field.
            using WillTopic = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willtopic message.
        using Willtopic = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willtopicreq
        ///     message.
        using Willtopicreq = comms::option::app::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willtopicresp
        ///     message.
        using Willtopicresp = comms::option::app::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqttsn::message::Willtopicupd message.
        struct WilltopicupdFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::message::WilltopicupdFields::WillTopic
            ///     field.
            using WillTopic = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willtopicupd
        ///     message.
        using Willtopicupd = comms::option::app::EmptyOption;
    }; // struct message

    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for layers of
        ///     @ref cc_mqttsn::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::frame::FrameLayers::DataMembers::Field field.
            struct DataMembers
            {
                using Field = comms::option::app::EmptyOption;
            }; // struct DataMembers

            /// @brief Extra options for @ref
            ///     cc_mqttsn::frame::FrameLayers::Id layer.
            using Id = comms::option::app::EmptyOption;
        }; // struct FrameLayers
    }; // struct frame
};

/// @brief Default (empty) options of the protocol.
using DefaultOptions = DefaultOptionsT<>;

} // namespace options

} // namespace cc_mqttsn
