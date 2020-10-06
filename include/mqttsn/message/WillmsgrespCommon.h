// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Willmsgresp message and its fields.

#pragma once

#include "mqttsn/field/ReturnCodeCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Willmsgresp message.
/// @see mqttsn::message::WillmsgrespFields
struct WillmsgrespFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::WillmsgrespFields::ReturnCode field.
    using ReturnCodeCommon = mqttsn::field::ReturnCodeCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Willmsgresp message.
/// @see mqttsn::message::Willmsgresp
struct WillmsgrespCommon
{
    /// @brief Name of the @ref mqttsn::message::Willmsgresp message.
    static const char* name()
    {
        return "WILLMSGRESP";
    }
    
};

} // namespace message

} // namespace mqttsn


