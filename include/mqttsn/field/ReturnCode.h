/// @file
/// @brief Contains definition of <b>"ReturnCode"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/field/FieldBase.h"

namespace mqttsn
{

namespace field
{

/// @brief Values enumerator for @ref ReturnCode field.
enum class ReturnCodeVal : std::uint8_t
{
    Accepted = 0, ///< value @b Accepted
    Congestion = 1, ///< value @b Congestion
    InvalidTopicId = 2, ///< value @b InvalidTopicId
    NotSupported = 3, ///< value @b NotSupported
    
};

/// @brief Definition of <b>"ReturnCode"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::DefaultOptions, typename... TExtraOpts>
struct ReturnCode : public
    comms::field::EnumValue<
        mqttsn::field::FieldBase<>,
        ReturnCodeVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 3>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "ReturnCode";
    }
    
};

} // namespace field

} // namespace mqttsn


