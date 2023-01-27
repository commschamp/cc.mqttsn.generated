// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains definition of <b>"WillMsg"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/WillMsgCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"WillMsg"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class WillMsg : public
    comms::field::ArrayList<
        cc_mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::WillMsg
    >
{
    using Base =
        comms::field::ArrayList<
            cc_mqttsn::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...,
            typename TOpt::field::WillMsg
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::WillMsgCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
