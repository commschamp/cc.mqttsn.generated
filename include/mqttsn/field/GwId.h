// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"GwId"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/GwIdCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"GwId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
struct GwId : public
    comms::field::IntValue<
        mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::GwIdCommon::name();
    }
    
};

} // namespace field

} // namespace mqttsn


