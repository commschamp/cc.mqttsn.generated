/// @file
/// @brief Contains definition of <b>"Radius"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/field/FieldBase.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"Radius"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::DefaultOptions, typename... TExtraOpts>
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
    /// @brief Special value <b>"BroadcastToAll"</b>.
    static constexpr typename Base::ValueType valueBroadcastToAll()
    {
        return static_cast<typename Base::ValueType>(0);
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
        return "Radius";
    }
    
};

} // namespace field

} // namespace mqttsn


