// Generated by commsdsl2comms v3.6.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Subscribe message and its fields.

#pragma once

#include "mqttsn/field/FlagsCommon.h"
#include "mqttsn/field/MessageIdCommon.h"
#include "mqttsn/field/TopicIdCommon.h"
#include "mqttsn/field/TopicNameCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Subscribe message.
/// @see mqttsn::message::SubscribeFields
struct SubscribeFieldsCommon
{
    /// @brief Common types and functions for members of
    ///     @ref mqttsn::message::SubscribeFields::Flags field.
    using FlagsMembersCommon = mqttsn::field::FlagsMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::SubscribeFields::Flags field.
    using FlagsCommon = mqttsn::field::FlagsCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::SubscribeFields::MsgId field.
    using MsgIdCommon = mqttsn::field::MessageIdCommon;
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqttsn::message::SubscribeFields::TopicId field.
    struct TopicIdMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref mqttsn::message::SubscribeFields::TopicIdMembers::TopicId field.
        using TopicIdCommon = mqttsn::field::TopicIdCommon;
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqttsn::message::SubscribeFields::TopicId field.
    struct TopicIdCommon
    {
        /// @brief Name of the @ref mqttsn::message::SubscribeFields::TopicId field.
        static const char* name()
        {
            return "TopicId";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqttsn::message::SubscribeFields::TopicName field.
    struct TopicNameMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref mqttsn::message::SubscribeFields::TopicNameMembers::TopicName field.
        using TopicNameCommon = mqttsn::field::TopicNameCommon;
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqttsn::message::SubscribeFields::TopicName field.
    struct TopicNameCommon
    {
        /// @brief Name of the @ref mqttsn::message::SubscribeFields::TopicName field.
        static const char* name()
        {
            return "TopicName";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Subscribe message.
/// @see mqttsn::message::Subscribe
struct SubscribeCommon
{
    /// @brief Name of the @ref mqttsn::message::Subscribe message.
    static const char* name()
    {
        return "SUBSCRIBE";
    }
    
};

} // namespace message

} // namespace mqttsn


