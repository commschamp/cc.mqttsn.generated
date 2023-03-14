// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Disconnect message and its fields.

#pragma once

#include "cc_mqttsn/field/DurationCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Disconnect message.
/// @see cc_mqttsn::message::DisconnectFields
struct DisconnectFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqttsn::message::DisconnectFields::Duration field.
    struct DurationMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqttsn::message::DisconnectFields::DurationMembers::Duration field.
        using DurationCommon = cc_mqttsn::field::DurationCommon;
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::DisconnectFields::Duration field.
    struct DurationCommon
    {
        /// @brief Name of the @ref cc_mqttsn::message::DisconnectFields::Duration field.
        static const char* name()
        {
            return "Duration";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Disconnect message.
struct DisconnectCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Disconnect message.
    static const char* name()
    {
        return "DISCONNECT";
    }
};

} // namespace message

} // namespace cc_mqttsn
