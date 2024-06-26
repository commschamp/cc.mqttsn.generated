// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Puback message and its fields.

#pragma once

#include "cc_mqttsn/field/MessageIdCommon.h"
#include "cc_mqttsn/field/ReturnCodeCommon.h"
#include "cc_mqttsn/field/TopicIdCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Puback message.
/// @see cc_mqttsn::message::PubackFields
struct PubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::PubackFields::TopicId field.
    using TopicIdCommon = cc_mqttsn::field::TopicIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::PubackFields::MsgId field.
    using MsgIdCommon = cc_mqttsn::field::MessageIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::PubackFields::ReturnCode field.
    using ReturnCodeCommon = cc_mqttsn::field::ReturnCodeCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Puback message.
struct PubackCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Puback message.
    static const char* name()
    {
        return "PUBACK";
    }
};

} // namespace message

} // namespace cc_mqttsn
