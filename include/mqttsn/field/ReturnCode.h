/// @file
/// @brief Contains definition of <b>"ReturnCode"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Values enumerator for @ref mqttsn::field::ReturnCode field.
enum class ReturnCodeVal : std::uint8_t
{
    Accepted = 0, ///< value @b Accepted
    Congestion = 1, ///< value @b Congestion
    InvalidTopicId = 2, ///< value @b InvalidTopicId
    NotSupported = 3, ///< value @b NotSupported
    
};

/// @brief Definition of <b>"ReturnCode"</b> field.
/// @see @ref mqttsn::field::ReturnCodeVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
struct ReturnCode : public
    comms::field::EnumValue<
        mqttsn::field::FieldBase<>,
        ReturnCodeVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 3>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "ReturnCode";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ReturnCodeVal val)
    {
        static const char* Map[] = {
            "Accepted",
            "Congestion",
            "InvalidTopicId",
            "NotSupported"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

} // namespace field

} // namespace mqttsn


