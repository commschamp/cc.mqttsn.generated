// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Unsuback message and its fields.

#pragma once

#include "cc_mqttsn/field/MessageIdCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Unsuback message.
/// @see cc_mqttsn::message::UnsubackFields
struct UnsubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::UnsubackFields::MsgId field.
    using MsgIdCommon = cc_mqttsn::field::MessageIdCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Unsuback message.
struct UnsubackCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Unsuback message.
    static const char* name()
    {
        return "UNSUBACK";
    }
};

} // namespace message

} // namespace cc_mqttsn
