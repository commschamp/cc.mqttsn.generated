/// @file
/// @brief Contains definition of <b>"ClientId"</b> field.

#pragma once

#include "comms/field/String.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/field/FieldBase.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"ClientId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::DefaultOptions, typename... TExtraOpts>
struct ClientId : public
    comms::field::String<
        mqttsn::field::FieldBase<>,
        typename TOpt::field::ClientId,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "ClientId";
    }
    
};

} // namespace field

} // namespace mqttsn


