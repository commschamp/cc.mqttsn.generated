// Generated by commsdsl2comms v3.7.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::field::Radius field.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>

namespace mqttsn
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqttsn::field::Radius field.
struct RadiusCommon
{
    /// @brief Re-definition of the value type used by
    ///     mqttsn::field::Radius field.
    using ValueType = std::uint8_t;

    /// @brief Single special value name info entry.
    using SpecialNameInfo = std::pair<ValueType, const char*>;
    
    /// @brief Type returned from @ref specialNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using SpecialNamesMapInfo = std::pair<const SpecialNameInfo*, std::size_t>;
    
    /// @brief Name of the @ref mqttsn::field::Radius field.
    static const char* name()
    {
        return "Radius";
    }
    
    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return true;
    }
    
    /// @brief Special value <b>"BroadcastToAll"</b>.
    static constexpr ValueType valueBroadcastToAll()
    {
        return static_cast<ValueType>(0);
    }
    
    
    /// @brief Retrieve map of special value names
    static SpecialNamesMapInfo specialNamesMap()
    {
        static const SpecialNameInfo Map[] = {
            std::make_pair(valueBroadcastToAll(), "BroadcastToAll")
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        return std::make_pair(&Map[0], MapSize);
        
    }
    
};

} // namespace field

} // namespace mqttsn


