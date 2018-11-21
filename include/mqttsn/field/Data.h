/// @file
/// @brief Contains definition of <b>"Data"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/field/FieldBase.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"Data"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::DefaultOptions, typename... TExtraOpts>
struct Data : public
    comms::field::ArrayList<
        mqttsn::field::FieldBase<>,
        std::uint8_t,
        typename TOpt::field::Data,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "Data";
    }
    
};

} // namespace field

} // namespace mqttsn


