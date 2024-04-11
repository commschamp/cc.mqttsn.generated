// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Advertise message and its fields.

#pragma once

#include "cc_mqttsn/field/DurationCommon.h"
#include "cc_mqttsn/field/GwIdCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Advertise message.
/// @see cc_mqttsn::message::AdvertiseFields
struct AdvertiseFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::AdvertiseFields::GwId field.
    using GwIdCommon = cc_mqttsn::field::GwIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::AdvertiseFields::Duration field.
    using DurationCommon = cc_mqttsn::field::DurationCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Advertise message.
struct AdvertiseCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Advertise message.
    static const char* name()
    {
        return "ADVERTISE";
    }
};

} // namespace message

} // namespace cc_mqttsn
