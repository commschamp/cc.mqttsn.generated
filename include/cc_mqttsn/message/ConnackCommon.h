// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Connack message and its fields.

#pragma once

#include "cc_mqttsn/field/ReturnCodeCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Connack message.
/// @see cc_mqttsn::message::ConnackFields
struct ConnackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::ConnackFields::ReturnCode field.
    using ReturnCodeCommon = cc_mqttsn::field::ReturnCodeCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Connack message.
struct ConnackCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Connack message.
    static const char* name()
    {
        return "CONNACK";
    }
};

} // namespace message

} // namespace cc_mqttsn
