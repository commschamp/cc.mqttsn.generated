// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::field::TopicIdType field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>

namespace mqttsn
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqttsn::field::TopicIdType field.
struct TopicIdTypeCommon
{
    /// @brief Values enumerator for
    ///     @ref mqttsn::field::TopicIdType field.
    enum class ValueType : std::uint8_t
    {
        Normal = 0, ///< value @b Normal. 
        PredefinedTopicId = 1, ///< value @b PredefinedTopicId. 
        ShortTopicName = 2, ///< value @b ShortTopicName. 

        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
    };

    /// @brief Single value name info entry
    using ValueNameInfo = const char*;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

    /// @brief Name of the @ref mqttsn::field::TopicIdType field.
    static const char* name()
    {
        return "TopicIdType";
    }

    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        auto namesMapInfo = valueNamesMap();
        if (namesMapInfo.second <= static_cast<std::size_t>(val)) {
            return nullptr;
        }

        return namesMapInfo.first[static_cast<std::size_t>(val)];
    }

    /// @brief Retrieve map of enum value names
    static ValueNamesMapInfo valueNamesMap()
    {
        static const char* Map[] = {
            "Normal",
            "PredefinedTopicId",
            "ShortTopicName"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }
};

/// @brief Values enumerator for
///     @ref mqttsn::field::TopicIdType field.
using TopicIdTypeVal = TopicIdTypeCommon::ValueType;

} // namespace field

} // namespace mqttsn
