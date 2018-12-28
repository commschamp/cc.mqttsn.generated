/// @file
/// @brief Contains definition of <b>"WillMsg"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/field/FieldBase.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"WillMsg"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::DefaultOptions, typename... TExtraOpts>
struct WillMsg : public
    comms::field::ArrayList<
        mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::WillMsg
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "WillMsg";
    }
    
};

} // namespace field

} // namespace mqttsn


