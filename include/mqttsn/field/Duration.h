/// @file
/// @brief Contains definition of <b>"Duration"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
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
struct Duration : public
    comms::field::IntValue<
        mqttsn::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...,
        comms::option::UnitsSeconds
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "Duration";
    }
    
};

} // namespace field

} // namespace mqttsn


