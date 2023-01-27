// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains definition of <b>"GwId"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/GwIdCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"GwId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class GwId : public
    comms::field::IntValue<
        cc_mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...
    >
{
    using Base =
        comms::field::IntValue<
            cc_mqttsn::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_mqttsn::field::GwIdCommon::hasSpecials();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::GwIdCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
