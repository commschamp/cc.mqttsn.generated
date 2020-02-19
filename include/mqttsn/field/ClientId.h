// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains definition of <b>"ClientId"</b> field.

#pragma once

#include "comms/field/String.h"
#include "comms/options.h"
#include "mqttsn/field/ClientIdCommon.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"ClientId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
struct ClientId : public
    comms::field::String<
        mqttsn::field::FieldBase<>,
        TExtraOpts...,
        typename TOpt::field::ClientId
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::ClientIdCommon::name();
    }
    
};

} // namespace field

} // namespace mqttsn


