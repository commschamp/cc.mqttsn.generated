// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains definition of <b>"GwAdd"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/GwAddCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"GwAdd"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class GwAdd : public
    comms::field::ArrayList<
        cc_mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::GwAdd
    >
{
    using Base =
        comms::field::ArrayList<
            cc_mqttsn::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...,
            typename TOpt::field::GwAdd
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::GwAddCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
