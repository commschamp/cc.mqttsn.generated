// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Duration"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqttsn/field/DurationCommon.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"Duration"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
class Duration : public
    comms::field::IntValue<
        mqttsn::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...,
        comms::option::def::UnitsSeconds
    >
{
    using Base =
        comms::field::IntValue<
            mqttsn::field::FieldBase<>,
            std::uint16_t,
            TExtraOpts...,
            comms::option::def::UnitsSeconds
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return mqttsn::field::DurationCommon::hasSpecials();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::DurationCommon::name();
    }
};

} // namespace field

} // namespace mqttsn
