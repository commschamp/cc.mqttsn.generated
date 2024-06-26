// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Pubcomp message and its fields.

#pragma once

#include "cc_mqttsn/field/MessageIdCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Pubcomp message.
/// @see cc_mqttsn::message::PubcompFields
struct PubcompFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::PubcompFields::MsgId field.
    using MsgIdCommon = cc_mqttsn::field::MessageIdCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Pubcomp message.
struct PubcompCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Pubcomp message.
    static const char* name()
    {
        return "PUBCOMP";
    }
};

} // namespace message

} // namespace cc_mqttsn
