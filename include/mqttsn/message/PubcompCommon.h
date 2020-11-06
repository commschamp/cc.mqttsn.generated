// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Pubcomp message and its fields.

#pragma once

#include "mqttsn/field/MessageIdCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Pubcomp message.
/// @see mqttsn::message::PubcompFields
struct PubcompFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PubcompFields::MsgId field.
    using MsgIdCommon = mqttsn::field::MessageIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Pubcomp message.
/// @see mqttsn::message::Pubcomp
struct PubcompCommon
{
    /// @brief Name of the @ref mqttsn::message::Pubcomp message.
    static const char* name()
    {
        return "PUBCOMP";
    }
    
};

} // namespace message

} // namespace mqttsn


