// Generated by commsdsl2comms v3.6.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Register message and its fields.

#pragma once

#include "mqttsn/field/MessageIdCommon.h"
#include "mqttsn/field/TopicIdCommon.h"
#include "mqttsn/field/TopicNameCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Register message.
/// @see mqttsn::message::RegisterFields
struct RegisterFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::RegisterFields::TopicId field.
    using TopicIdCommon = mqttsn::field::TopicIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::RegisterFields::MsgId field.
    using MsgIdCommon = mqttsn::field::MessageIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::RegisterFields::TopicName field.
    using TopicNameCommon = mqttsn::field::TopicNameCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Register message.
/// @see mqttsn::message::Register
struct RegisterCommon
{
    /// @brief Name of the @ref mqttsn::message::Register message.
    static const char* name()
    {
        return "REGISTER";
    }
    
};

} // namespace message

} // namespace mqttsn


