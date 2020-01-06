// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains definition of <b>"Radius"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/RadiusCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"Radius"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
class Radius : public
    comms::field::IntValue<
        mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::IntValue<
            mqttsn::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Special value <b>"BroadcastToAll"</b>.
    static constexpr ValueType valueBroadcastToAll()
    {
        return mqttsn::field::RadiusCommon::valueBroadcastToAll();
    }
    
    /// @brief Check the value is equal to special @ref valueBroadcastToAll().
    bool isBroadcastToAll() const
    {
        return Base::value() == valueBroadcastToAll();
    }
    
    /// @brief Assign special value @ref valueBroadcastToAll() to the field.
    void setBroadcastToAll()
    {
        Base::value() = valueBroadcastToAll();
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::RadiusCommon::name();
    }
    
};

} // namespace field

} // namespace mqttsn


