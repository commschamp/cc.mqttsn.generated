// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Willmsg message and its fields.

#pragma once

#include "cc_mqttsn/field/WillMsgCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Willmsg message.
/// @see cc_mqttsn::message::WillmsgFields
struct WillmsgFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::WillmsgFields::WillMsg field.
    using WillMsgCommon = cc_mqttsn::field::WillMsgCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Willmsg message.
struct WillmsgCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Willmsg message.
    static const char* name()
    {
        return "WILLMSG";
    }
};

} // namespace message

} // namespace cc_mqttsn
