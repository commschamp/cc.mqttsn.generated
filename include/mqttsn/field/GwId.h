/// @file
/// @brief Contains definition of <b>"GwId"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/field/FieldBase.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"GwId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::DefaultOptions, typename... TExtraOpts>
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
        return "GwId";
    }
    
};

} // namespace field

} // namespace mqttsn


