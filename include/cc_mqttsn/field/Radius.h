// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains definition of <b>"Radius"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/RadiusCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"Radius"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class Radius : public
    comms::field::IntValue<
        cc_mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        comms::option::def::HasName
    >
{
    using Base =
        comms::field::IntValue<
            cc_mqttsn::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...,
            comms::option::def::HasName
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single special value name info entry.
    using SpecialNameInfo = cc_mqttsn::field::RadiusCommon::SpecialNameInfo;

    /// @brief Type returned from @ref specialNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using SpecialNamesMapInfo = cc_mqttsn::field::RadiusCommon::SpecialNamesMapInfo;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_mqttsn::field::RadiusCommon::hasSpecials();
    }

    /// @brief Special value <b>"BroadcastToAll"</b>.
    /// @see @ref cc_mqttsn::field::RadiusCommon::valueBroadcastToAll().
    static constexpr ValueType valueBroadcastToAll()
    {
        return cc_mqttsn::field::RadiusCommon::valueBroadcastToAll();
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
        return cc_mqttsn::field::RadiusCommon::specialNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::RadiusCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
