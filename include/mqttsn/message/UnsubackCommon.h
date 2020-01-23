// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Unsuback message and its fields.

#pragma once

#include "mqttsn/field/MessageIdCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Unsuback message.
/// @see mqttsn::message::UnsubackFields
struct UnsubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::UnsubackFields::MsgId field.
    using MsgIdCommon = mqttsn::field::MessageIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Unsuback message.
/// @see mqttsn::message::Unsuback
struct UnsubackCommon
{
    /// @brief Name of the @ref mqttsn::message::Unsuback message.
    static const char* name()
    {
        return "UNSUBACK";
    }
    
};

} // namespace message

} // namespace mqttsn


