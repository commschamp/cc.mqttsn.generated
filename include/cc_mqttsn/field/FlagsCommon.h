// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::field::Flags field.

#pragma once

#include <type_traits>
#include "cc_mqttsn/field/QosCommon.h"
#include "cc_mqttsn/field/TopicIdTypeCommon.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_mqttsn::field::Flags field.
struct FlagsMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::field::FlagsMembers::TopicIdType field.
    using TopicIdTypeCommon = cc_mqttsn::field::TopicIdTypeCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::field::FlagsMembers::Mid field.
    struct MidCommon
    {
        /// @brief Name of the @ref cc_mqttsn::field::FlagsMembers::Mid field.
        static const char* name()
        {
            return "";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_mqttsn::field::FlagsMembers::Mid field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "CleanSession",
                "Will",
                "Retain"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::field::FlagsMembers::Qos field.
    using QosCommon = cc_mqttsn::field::QosCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::field::FlagsMembers::High field.
    struct HighCommon
    {
        /// @brief Name of the @ref cc_mqttsn::field::FlagsMembers::High field.
        static const char* name()
        {
            return "";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_mqttsn::field::FlagsMembers::High field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "Dup"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_mqttsn::field::Flags field.
struct FlagsCommon
{
    /// @brief Name of the @ref cc_mqttsn::field::Flags field.
    static const char* name()
    {
        return "Flags";
    }
};

} // namespace field

} // namespace cc_mqttsn
