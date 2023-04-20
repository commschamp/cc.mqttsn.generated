// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains definition of <b>"Data"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqttsn/field/DataCommon.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"Data"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class Data : public
    comms::field::ArrayList<
        cc_mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::Data
    >
{
    using Base =
        comms::field::ArrayList<
            cc_mqttsn::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...,
            typename TOpt::field::Data
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::DataCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
