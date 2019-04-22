/// @file
/// @brief Contains definition of <b>"TopicName"</b> field.

#pragma once

#include "comms/field/String.h"
#include "comms/options.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"TopicName"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
struct TopicName : public
    comms::field::String<
        mqttsn::field::FieldBase<>,
        TExtraOpts...,
        typename TOpt::field::TopicName
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "TopicName";
    }
    
};

} // namespace field

} // namespace mqttsn


