// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains definition of <b>"GwAdd"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/GwAddCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"GwAdd"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
struct GwAdd : public
    comms::field::ArrayList<
        mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::GwAdd
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::GwAddCommon::name();
    }
    
};

} // namespace field

} // namespace mqttsn


