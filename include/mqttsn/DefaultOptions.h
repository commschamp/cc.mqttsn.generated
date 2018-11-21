/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace mqttsn
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for fields.
    struct field
    {
        /// @brief Extra options for @ref mqttsn::field::ClientId field.
        using ClientId = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::field::Data field.
        using Data = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::field::GwAdd field.
        using GwAdd = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::field::TopicName field.
        using TopicName = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::field::WillMsg field.
        using WillMsg = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::field::WillTopic field.
        using WillTopic = comms::option::EmptyOption;
        
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for @ref mqttsn::message::Advertise message.
        using Advertise = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Connack message.
        using Connack = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Connect message.
        using Connect = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Searchgw message.
        using Searchgw = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Suback message.
        using Suback = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Subscribe message.
        using Subscribe = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Unsuback message.
        using Unsuback = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Unsubscribe message.
        using Unsubscribe = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Willmsg message.
        using Willmsg = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Willmsgreq message.
        using Willmsgreq = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Willmsgresp message.
        using Willmsgresp = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Willmsgupd message.
        using Willmsgupd = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Willtopic message.
        using Willtopic = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Willtopicreq message.
        using Willtopicreq = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Willtopicresp message.
        using Willtopicresp = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqttsn::message::Willtopicupd message.
        using Willtopicupd = comms::option::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of @ref mqttsn::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref mqttsn::frame::FrameLayers::Data layer.
            using Data = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref mqttsn::frame::FrameLayers::Id layer.
            using Id = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref mqttsn::frame::FrameLayers::Length layer.
            using Length = comms::option::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace mqttsn


