// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::field::TopicId field.

#pragma once

#include <cstdint>

namespace mqttsn
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqttsn::field::TopicId field.
struct TopicIdCommon
{
    /// @brief Re-definition of the value type used by
    ///     mqttsn::field::TopicId field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref mqttsn::field::TopicId field.
    static const char* name()
    {
        return "TopicId";
    }
    
};

} // namespace field

} // namespace mqttsn


