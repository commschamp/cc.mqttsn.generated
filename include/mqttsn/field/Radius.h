// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Radius"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/RadiusCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"Radius"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
class Radius : public
    comms::field::IntValue<
        mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...
    >
{
    using Base =
        comms::field::IntValue<
            mqttsn::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single special value name info entry.
    using SpecialNameInfo = mqttsn::field::RadiusCommon::SpecialNameInfo;

    /// @brief Type returned from @ref specialNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using SpecialNamesMapInfo = mqttsn::field::RadiusCommon::SpecialNamesMapInfo;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return mqttsn::field::RadiusCommon::hasSpecials();
    }

    /// @brief Special value <b>"BroadcastToAll"</b>.
    /// @see @ref mqttsn::field::RadiusCommon::valueBroadcastToAll().
    static constexpr ValueType valueBroadcastToAll()
    {
        return mqttsn::field::RadiusCommon::valueBroadcastToAll();
    }

    /// @brief Check the value is equal to special @ref valueBroadcastToAll().
    bool isBroadcastToAll() const
    {
        return Base::getValue() == valueBroadcastToAll();
    }

    /// @brief Assign special value @ref valueBroadcastToAll() to the field.
    void setBroadcastToAll()
    {
        Base::setValue(valueBroadcastToAll());
    }

    /// @brief Retrieve map of special value names
    static SpecialNamesMapInfo specialNamesMap()
    {
        return mqttsn::field::RadiusCommon::specialNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::RadiusCommon::name();
    }
};

} // namespace field

} // namespace mqttsn
