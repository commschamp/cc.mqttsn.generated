// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::field::ProtocolId field.

#pragma once

#include <cstdint>

namespace cc_mqttsn
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_mqttsn::field::ProtocolId field.
struct ProtocolIdCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_mqttsn::field::ProtocolId field.
    using ValueType = std::uint8_t;

    /// @brief Name of the @ref cc_mqttsn::field::ProtocolId field.
    static const char* name()
    {
        return "ProtocolId";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_mqttsn
