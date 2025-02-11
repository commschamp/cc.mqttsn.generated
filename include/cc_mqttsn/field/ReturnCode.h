// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains definition of <b>"ReturnCode"</b> field.

#pragma once

#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/ReturnCodeCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Definition of <b>"ReturnCode"</b> field.
/// @see @ref cc_mqttsn::field::ReturnCodeCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class ReturnCode : public
    comms::field::EnumValue<
        cc_mqttsn::field::FieldBase<>,
        cc_mqttsn::field::ReturnCodeCommon::ValueType,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::ValidNumValueRange<0, 3>
    >
{
    using Base =
        comms::field::EnumValue<
            cc_mqttsn::field::FieldBase<>,
            cc_mqttsn::field::ReturnCodeCommon::ValueType,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::ValidNumValueRange<0, 3>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = cc_mqttsn::field::ReturnCodeCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_mqttsn::field::ReturnCodeCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_mqttsn::field::ReturnCodeCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_mqttsn::field::ReturnCodeCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_mqttsn::field::ReturnCodeCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_mqttsn::field::ReturnCodeCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_mqttsn::field::ReturnCodeCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_mqttsn::field::ReturnCodeCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_mqttsn::field::ReturnCodeCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::ReturnCodeCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
