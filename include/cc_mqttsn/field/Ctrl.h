// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains definition of <b>"Ctrl"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_mqttsn/field/CtrlCommon.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/Radius.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/Bitfield.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref Ctrl field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct CtrlMembers
{
    /// @brief Definition of <b>"Radius"</b> field.
    using Radius =
        cc_mqttsn::field::Radius<
            TOpt,
            comms::option::def::HasName,
            comms::option::def::FixedBitLength<2U>
        >;

    /// @brief Definition of <b>"Reserved"</b> field.
    class Reserved : public
        comms::field::IntValue<
            cc_mqttsn::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::FixedBitLength<6U>,
            comms::option::def::ValidNumValue<0>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_mqttsn::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<6U>,
                comms::option::def::ValidNumValue<0>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_mqttsn::field::CtrlMembersCommon::ReservedCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqttsn::field::CtrlMembersCommon::ReservedCommon::name();
        }
    };

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Radius,
           Reserved
        >;
};

/// @brief Definition of <b>"Ctrl"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class Ctrl : public
    comms::field::Bitfield<
        cc_mqttsn::field::FieldBase<>,
        typename CtrlMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::HasVersionDependentMembers<false>
    >
{
    using Base =
        comms::field::Bitfield<
            cc_mqttsn::field::FieldBase<>,
            typename CtrlMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::HasVersionDependentMembers<false>
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bitfield class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_radius index, @b Field_radius type and @b field_radius() access function -
    ///         for cc_mqttsn::field::CtrlMembers::Radius member field.
    ///     @li @b FieldIdx_reserved index, @b Field_reserved type and @b field_reserved() access function -
    ///         for cc_mqttsn::field::CtrlMembers::Reserved member field.
    COMMS_FIELD_MEMBERS_NAMES(
        radius,
        reserved
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::CtrlCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
