// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains definition of <b>"TopicName"</b> field.

#pragma once

#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/TopicNameCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/String.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"TopicName"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class TopicName : public
    comms::field::String<
        cc_mqttsn::field::FieldBase<>,
        TExtraOpts...,
        typename TOpt::field::TopicName
    >
{
    using Base =
        comms::field::String<
            cc_mqttsn::field::FieldBase<>,
            TExtraOpts...,
            typename TOpt::field::TopicName
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::TopicNameCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
