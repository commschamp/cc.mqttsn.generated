/// @file
/// @brief Contains definition of <b>"MsgId"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"MsgId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::DefaultOptions, typename... TExtraOpts>
struct MsgId : public
    comms::field::EnumValue<
        mqttsn::field::FieldBase<>,
        mqttsn::MsgId,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 2>,
        comms::option::ValidNumValueRange<4, 16>,
        comms::option::ValidNumValueRange<18, 24>,
        comms::option::ValidNumValueRange<26, 29>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "MsgId";
    }
    
};

} // namespace field

} // namespace mqttsn


