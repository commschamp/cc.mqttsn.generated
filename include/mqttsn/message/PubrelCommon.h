// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Pubrel message and its fields.

#pragma once

#include "mqttsn/field/MessageIdCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Pubrel message.
/// @see mqttsn::message::PubrelFields
struct PubrelFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PubrelFields::MsgId field.
    using MsgIdCommon = mqttsn::field::MessageIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Pubrel message.
/// @see mqttsn::message::Pubrel
struct PubrelCommon
{
    /// @brief Name of the @ref mqttsn::message::Pubrel message.
    static const char* name()
    {
        return "PUBREL";
    }
    
};

} // namespace message

} // namespace mqttsn


