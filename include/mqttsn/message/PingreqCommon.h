// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Pingreq message and its fields.

#pragma once

#include "mqttsn/field/ClientIdCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Pingreq message.
/// @see mqttsn::message::PingreqFields
struct PingreqFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PingreqFields::ClientId field.
    using ClientIdCommon = mqttsn::field::ClientIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Pingreq message.
/// @see mqttsn::message::Pingreq
struct PingreqCommon
{
    /// @brief Name of the @ref mqttsn::message::Pingreq message.
    static const char* name()
    {
        return "PINGREQ";
    }
    
};

} // namespace message

} // namespace mqttsn


