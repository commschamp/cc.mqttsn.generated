// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains definition of <b>"WillTopic"</b> field.

#pragma once

#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/WillTopicCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/String.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"WillTopic"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class WillTopic : public
    comms::field::String<
        cc_mqttsn::field::FieldBase<>,
        TExtraOpts...,
        typename TOpt::field::WillTopic
    >
{
    using Base =
        comms::field::String<
            cc_mqttsn::field::FieldBase<>,
            TExtraOpts...,
            typename TOpt::field::WillTopic
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::WillTopicCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
