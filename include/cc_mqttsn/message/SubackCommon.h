// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Suback message and its fields.

#pragma once

#include "cc_mqttsn/field/FlagsCommon.h"
#include "cc_mqttsn/field/MessageIdCommon.h"
#include "cc_mqttsn/field/ReturnCodeCommon.h"
#include "cc_mqttsn/field/TopicIdCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Suback message.
/// @see cc_mqttsn::message::SubackFields
struct SubackFieldsCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqttsn::message::SubackFields::Flags field.
    using FlagsMembersCommon = cc_mqttsn::field::FlagsMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::SubackFields::Flags field.
    using FlagsCommon = cc_mqttsn::field::FlagsCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::SubackFields::TopicId field.
    using TopicIdCommon = cc_mqttsn::field::TopicIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::SubackFields::MsgId field.
    using MsgIdCommon = cc_mqttsn::field::MessageIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::SubackFields::ReturnCode field.
    using ReturnCodeCommon = cc_mqttsn::field::ReturnCodeCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Suback message.
struct SubackCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Suback message.
    static const char* name()
    {
        return "SUBACK";
    }
};

} // namespace message

} // namespace cc_mqttsn
