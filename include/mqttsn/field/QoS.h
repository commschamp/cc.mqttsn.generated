/// @file
/// @brief Contains definition of <b>"QoS"</b> field.

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

/// @brief Values enumerator for @ref mqttsn::field::QoS field.
enum class QoSVal : std::uint8_t
{
    AtMostOnceDelivery = 0, ///< value @b AtMostOnceDelivery
    AtLeastOnceDelivery = 1, ///< value @b AtLeastOnceDelivery
    ExactlyOnceDelivery = 2, ///< value @b ExactlyOnceDelivery
    NoGwPublish = 3, ///< value @b NoGwPublish
    
};

/// @brief Definition of <b>"QoS"</b> field.
/// @see @ref mqttsn::field::QoSVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
struct QoS : public
    comms::field::EnumValue<
        mqttsn::field::FieldBase<>,
        QoSVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 3>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "QoS";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(QoSVal val)
    {
        static const char* Map[] = {
            "AtMostOnceDelivery",
            "AtLeastOnceDelivery",
            "ExactlyOnceDelivery",
            "NoGwPublish"
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


