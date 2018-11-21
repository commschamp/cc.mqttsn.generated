/// @file
/// @brief Contains definition of <b>"ProtocolId"</b> field.

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

/// @brief Definition of <b>"ProtocolId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::DefaultOptions, typename... TExtraOpts>
struct ProtocolId : public
    comms::field::IntValue<
        mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        comms::option::DefaultNumValue<1>,
        comms::option::ValidNumValue<1>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "ProtocolId";
    }
    
};

} // namespace field

} // namespace mqttsn


