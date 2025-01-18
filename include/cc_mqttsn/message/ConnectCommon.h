// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Connect message and its fields.

#pragma once

#include "cc_mqttsn/field/ClientIdCommon.h"
#include "cc_mqttsn/field/DurationCommon.h"
#include "cc_mqttsn/field/FlagsCommon.h"
#include "cc_mqttsn/field/ProtocolIdCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Connect message.
/// @see cc_mqttsn::message::ConnectFields
struct ConnectFieldsCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqttsn::message::ConnectFields::Flags field.
    using FlagsMembersCommon = cc_mqttsn::field::FlagsMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::ConnectFields::Flags field.
    using FlagsCommon = cc_mqttsn::field::FlagsCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::ConnectFields::ProtocolId field.
    using ProtocolIdCommon = cc_mqttsn::field::ProtocolIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::ConnectFields::Duration field.
    using DurationCommon = cc_mqttsn::field::DurationCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::ConnectFields::ClientId field.
    using ClientIdCommon = cc_mqttsn::field::ClientIdCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Connect message.
struct ConnectCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Connect message.
    static const char* name()
    {
        return "CONNECT";
    }
};

} // namespace message

} // namespace cc_mqttsn
