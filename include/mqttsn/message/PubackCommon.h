// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Puback message and its fields.

#pragma once

#include "mqttsn/field/MessageIdCommon.h"
#include "mqttsn/field/ReturnCodeCommon.h"
#include "mqttsn/field/TopicIdCommon.h"

namespace mqttsn
{

namespace message
{


/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Puback message.
/// @see mqttsn::message::PubackFields
struct PubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PubackFields::TopicId field.
    using TopicIdCommon = mqttsn::field::TopicIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PubackFields::MsgId field.
    using MsgIdCommon = mqttsn::field::MessageIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PubackFields::ReturnCode field.
    using ReturnCodeCommon = mqttsn::field::ReturnCodeCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Puback message.
struct PubackCommon
{
    /// @brief Name of the @ref mqttsn::message::Puback message.
    static const char* name()
    {
        return "PUBACK";
    }
    
};

} // namespace message

} // namespace mqttsn



