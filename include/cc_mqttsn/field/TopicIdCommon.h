// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::field::TopicId field.

#pragma once

#include <cstdint>

namespace cc_mqttsn
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_mqttsn::field::TopicId field.
struct TopicIdCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_mqttsn::field::TopicId field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref cc_mqttsn::field::TopicId field.
    static const char* name()
    {
        return "TopicId";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_mqttsn
