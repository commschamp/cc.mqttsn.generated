// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::field::MessageId field.

#pragma once

#include <cstdint>

namespace cc_mqttsn
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_mqttsn::field::MessageId field.
struct MessageIdCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_mqttsn::field::MessageId field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref cc_mqttsn::field::MessageId field.
    static const char* name()
    {
        return "MsgId";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_mqttsn
