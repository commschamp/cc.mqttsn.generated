// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains definition of <b>"ClientId"</b> field.

#pragma once

#include "cc_mqttsn/field/ClientIdCommon.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/String.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"ClientId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class ClientId : public
    comms::field::String<
        cc_mqttsn::field::FieldBase<>,
        TExtraOpts...,
        typename TOpt::field::ClientId
    >
{
    using Base =
        comms::field::String<
            cc_mqttsn::field::FieldBase<>,
            TExtraOpts...,
            typename TOpt::field::ClientId
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::ClientIdCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn