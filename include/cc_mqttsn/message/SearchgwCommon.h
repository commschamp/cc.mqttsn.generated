// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Searchgw message and its fields.

#pragma once

#include "cc_mqttsn/field/RadiusCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Searchgw message.
/// @see cc_mqttsn::message::SearchgwFields
struct SearchgwFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::SearchgwFields::Radius field.
    using RadiusCommon = cc_mqttsn::field::RadiusCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Searchgw message.
struct SearchgwCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Searchgw message.
    static const char* name()
    {
        return "SEARCHGW";
    }
};

} // namespace message

} // namespace cc_mqttsn
