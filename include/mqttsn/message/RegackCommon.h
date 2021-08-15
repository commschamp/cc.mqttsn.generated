// Generated by commsdsl2comms v3.6.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Regack message and its fields.

#pragma once

#include "mqttsn/field/MessageIdCommon.h"
#include "mqttsn/field/ReturnCodeCommon.h"
#include "mqttsn/field/TopicIdCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Regack message.
/// @see mqttsn::message::RegackFields
struct RegackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::RegackFields::TopicId field.
    using TopicIdCommon = mqttsn::field::TopicIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::RegackFields::MsgId field.
    using MsgIdCommon = mqttsn::field::MessageIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::RegackFields::ReturnCode field.
    using ReturnCodeCommon = mqttsn::field::ReturnCodeCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Regack message.
/// @see mqttsn::message::Regack
struct RegackCommon
{
    /// @brief Name of the @ref mqttsn::message::Regack message.
    static const char* name()
    {
        return "REGACK";
    }
    
};

} // namespace message

} // namespace mqttsn


