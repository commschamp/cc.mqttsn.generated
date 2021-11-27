// Generated by commsdsl2comms v3.7.0

/// @file
/// @brief Contains definition of <b>"MsgId"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/MessageIdCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"MsgId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
class MessageId : public
    comms::field::IntValue<
        mqttsn::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::IntValue<
            mqttsn::field::FieldBase<>,
            std::uint16_t,
            TExtraOpts...
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return mqttsn::field::MessageIdCommon::hasSpecials();
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::MessageIdCommon::name();
    }
    
};

} // namespace field

} // namespace mqttsn


