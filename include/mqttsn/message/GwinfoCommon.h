// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Gwinfo message and its fields.

#pragma once

#include "mqttsn/field/GwAddCommon.h"
#include "mqttsn/field/GwIdCommon.h"

namespace mqttsn
{

namespace message
{


/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Gwinfo message.
/// @see mqttsn::message::GwinfoFields
struct GwinfoFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::GwinfoFields::GwId field.
    using GwIdCommon = mqttsn::field::GwIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::GwinfoFields::GwAdd field.
    using GwAddCommon = mqttsn::field::GwAddCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Gwinfo message.
struct GwinfoCommon
{
    /// @brief Name of the @ref mqttsn::message::Gwinfo message.
    static const char* name()
    {
        return "GWINFO";
    }
    
};

} // namespace message

} // namespace mqttsn



