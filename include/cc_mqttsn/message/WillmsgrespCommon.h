// Generated by commsdsl2comms v6.3.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Willmsgresp message and its fields.

#pragma once

#include "cc_mqttsn/field/ReturnCodeCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Willmsgresp message.
/// @see cc_mqttsn::message::WillmsgrespFields
struct WillmsgrespFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::WillmsgrespFields::ReturnCode field.
    using ReturnCodeCommon = cc_mqttsn::field::ReturnCodeCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Willmsgresp message.
struct WillmsgrespCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Willmsgresp message.
    static const char* name()
    {
        return "WILLMSGRESP";
    }
};

} // namespace message

} // namespace cc_mqttsn
