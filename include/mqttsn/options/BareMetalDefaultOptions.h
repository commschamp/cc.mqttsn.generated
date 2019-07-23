/// @file
/// @brief Contains definition of protocol default options for bare-metal application
///    where usage of dynamic memory allocation is disabled.

#pragma once

#ifndef DEFAULT_SEQ_FIXED_STORAGE_SIZE
/// @brief Define default fixed size for various sequence fields
/// @details May be defined during compile time to change the default value.
#define DEFAULT_SEQ_FIXED_STORAGE_SIZE 32
#endif

namespace mqttsn
{

namespace options
{

/// @brief Default options for bare-metal application where usage of dynamic
///    memory allocation is diabled.
struct BareMetalDefaultOptions
{
    /// @brief Extra options for fields.
    struct field
    {
        /// @brief Extra options for @ref
        ///     mqttsn::field::ClientId field.
        using ClientId = comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::Data field.
        using Data = comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::GwAdd field.
        using GwAdd = comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::TopicName field.
        using TopicName = comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::WillMsg field.
        using WillMsg = comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::WillTopic field.
        using WillTopic = comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
        
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for
        ///     @ref mqttsn::message::Advertise message.
        using Advertise = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Connack message.
        using Connack = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Connect message.
        using Connect = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Searchgw message.
        using Searchgw = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Suback message.
        using Suback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Subscribe message.
        using Subscribe = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Unsuback message.
        using Unsuback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Unsubscribe message.
        using Unsubscribe = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsg message.
        using Willmsg = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsgreq message.
        using Willmsgreq = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsgresp message.
        using Willmsgresp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsgupd message.
        using Willmsgupd = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopic message.
        using Willtopic = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopicreq message.
        using Willtopicreq = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopicresp message.
        using Willtopicresp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopicupd message.
        using Willtopicupd = comms::option::app::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref mqttsn::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     mqttsn::frame::FrameLayers::Data layer.
            using Data = comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>;
            
            /// @brief Extra options for @ref
            ///     mqttsn::frame::FrameLayers::Id layer.
            using Id = comms::option::app::InPlaceAllocation;
            
            /// @brief Extra options for @ref
            ///     mqttsn::frame::FrameLayers::Length
            ///     layer.
            using Length = comms::option::app::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace mqttsn


