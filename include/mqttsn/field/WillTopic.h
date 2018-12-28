/// @file
/// @brief Contains definition of <b>"WillTopic"</b> field.

#pragma once

#include "comms/field/String.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/field/FieldBase.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"WillTopic"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::DefaultOptions, typename... TExtraOpts>
struct WillTopic : public
    comms::field::String<
        mqttsn::field::FieldBase<>,
        TExtraOpts...,
        typename TOpt::field::WillTopic
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "WillTopic";
    }
    
};

} // namespace field

} // namespace mqttsn


