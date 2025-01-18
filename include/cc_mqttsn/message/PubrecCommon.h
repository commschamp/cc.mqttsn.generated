// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Pubrec message and its fields.

#pragma once

#include "cc_mqttsn/field/MessageIdCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Pubrec message.
/// @see cc_mqttsn::message::PubrecFields
struct PubrecFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::PubrecFields::MsgId field.
    using MsgIdCommon = cc_mqttsn::field::MessageIdCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Pubrec message.
struct PubrecCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Pubrec message.
    static const char* name()
    {
        return "PUBREC";
    }
};

} // namespace message

} // namespace cc_mqttsn
