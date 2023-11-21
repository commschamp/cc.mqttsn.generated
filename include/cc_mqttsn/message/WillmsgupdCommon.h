// Generated by commsdsl2comms v6.2.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Willmsgupd message and its fields.

#pragma once

#include "cc_mqttsn/field/WillMsgCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Willmsgupd message.
/// @see cc_mqttsn::message::WillmsgupdFields
struct WillmsgupdFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::WillmsgupdFields::WillMsg field.
    using WillMsgCommon = cc_mqttsn::field::WillMsgCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Willmsgupd message.
struct WillmsgupdCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Willmsgupd message.
    static const char* name()
    {
        return "WILLMSGUPD";
    }
};

} // namespace message

} // namespace cc_mqttsn
