// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Searchgw message and its fields.

#pragma once

#include "mqttsn/field/RadiusCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Searchgw message.
/// @see mqttsn::message::SearchgwFields
struct SearchgwFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::SearchgwFields::Radius field.
    using RadiusCommon = mqttsn::field::RadiusCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Searchgw message.
/// @see mqttsn::message::Searchgw
struct SearchgwCommon
{
    /// @brief Name of the @ref mqttsn::message::Searchgw message.
    static const char* name()
    {
        return "SEARCHGW";
    }
    
};

} // namespace message

} // namespace mqttsn


