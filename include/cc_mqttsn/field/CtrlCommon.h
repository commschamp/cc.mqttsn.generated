// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::field::Ctrl field.

#pragma once

#include <cstdint>
#include "cc_mqttsn/field/RadiusCommon.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_mqttsn::field::Ctrl field.
struct CtrlMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::field::CtrlMembers::Radius field.
    using RadiusCommon = cc_mqttsn::field::RadiusCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::field::CtrlMembers::Reserved field.
    struct ReservedCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_mqttsn::field::CtrlMembers::Reserved field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_mqttsn::field::CtrlMembers::Reserved field.
        static const char* name()
        {
            return "Reserved";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_mqttsn::field::Ctrl field.
struct CtrlCommon
{
    /// @brief Name of the @ref cc_mqttsn::field::Ctrl field.
    static const char* name()
    {
        return "Ctrl";
    }
};

} // namespace field

} // namespace cc_mqttsn
