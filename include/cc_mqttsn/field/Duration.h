// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains definition of <b>"Duration"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqttsn/field/DurationCommon.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"Duration"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class Duration : public
    comms::field::IntValue<
        cc_mqttsn::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::UnitsSeconds
    >
{
    using Base =
        comms::field::IntValue<
            cc_mqttsn::field::FieldBase<>,
            std::uint16_t,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::UnitsSeconds
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_mqttsn::field::DurationCommon::hasSpecials();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::DurationCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
