// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains definition of <b>"Flags"</b> field.

#pragma once

#include <tuple>
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/FlagsCommon.h"
#include "cc_mqttsn/field/Qos.h"
#include "cc_mqttsn/field/TopicIdType.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref Flags field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct FlagsMembers
{
    /// @brief Definition of <b>"TopicIdType"</b> field.
    using TopicIdType =
        cc_mqttsn::field::TopicIdType<
            TOpt,
            comms::option::def::FixedBitLength<2U>
        >;

    /// @brief Definition of <b>""</b> field.
    class Mid : public
        comms::field::BitmaskValue<
            cc_mqttsn::field::FieldBase<>,
            comms::option::def::FixedBitLength<3U>
        >
    {
        using Base =
            comms::field::BitmaskValue<
                cc_mqttsn::field::FieldBase<>,
                comms::option::def::FixedBitLength<3U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_CleanSession, @b getBitValue_CleanSession() and @b setBitValue_CleanSession().
        ///      @li @b BitIdx_Will, @b getBitValue_Will() and @b setBitValue_Will().
        ///      @li @b BitIdx_Retain, @b getBitValue_Retain() and @b setBitValue_Retain().
        COMMS_BITMASK_BITS_SEQ(
            CleanSession,
            Will,
            Retain
        );

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_mqttsn::field::FlagsMembersCommon::MidCommon::bitName().
        static const char* bitName(BitIdx idx)
        {
            return
                cc_mqttsn::field::FlagsMembersCommon::MidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqttsn::field::FlagsMembersCommon::MidCommon::name();
        }
    };

    /// @brief Definition of <b>"Qos"</b> field.
    using Qos =
        cc_mqttsn::field::Qos<
            TOpt,
            comms::option::def::FixedBitLength<2U>
        >;

    /// @brief Definition of <b>""</b> field.
    class High : public
        comms::field::BitmaskValue<
            cc_mqttsn::field::FieldBase<>,
            comms::option::def::FixedBitLength<1U>
        >
    {
        using Base =
            comms::field::BitmaskValue<
                cc_mqttsn::field::FieldBase<>,
                comms::option::def::FixedBitLength<1U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_Dup, @b getBitValue_Dup() and @b setBitValue_Dup().
        COMMS_BITMASK_BITS_SEQ(
            Dup
        );

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_mqttsn::field::FlagsMembersCommon::HighCommon::bitName().
        static const char* bitName(BitIdx idx)
        {
            return
                cc_mqttsn::field::FlagsMembersCommon::HighCommon::bitName(
                    static_cast<std::size_t>(idx));
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqttsn::field::FlagsMembersCommon::HighCommon::name();
        }
    };

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           TopicIdType,
           Mid,
           Qos,
           High
        >;
};

/// @brief Definition of <b>"Flags"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqttsn::options::DefaultOptions, typename... TExtraOpts>
class Flags : public
    comms::field::Bitfield<
        cc_mqttsn::field::FieldBase<>,
        typename FlagsMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasVersionDependentMembers<false>
    >
{
    using Base =
        comms::field::Bitfield<
            cc_mqttsn::field::FieldBase<>,
            typename FlagsMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasVersionDependentMembers<false>
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bitfield class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_topicIdType index, @b Field_topicIdType type and @b field_topicIdType() access function -
    ///         for cc_mqttsn::field::FlagsMembers::TopicIdType member field.
    ///     @li @b FieldIdx_mid index, @b Field_mid type and @b field_mid() access function -
    ///         for cc_mqttsn::field::FlagsMembers::Mid member field.
    ///     @li @b FieldIdx_qos index, @b Field_qos type and @b field_qos() access function -
    ///         for cc_mqttsn::field::FlagsMembers::Qos member field.
    ///     @li @b FieldIdx_high index, @b Field_high type and @b field_high() access function -
    ///         for cc_mqttsn::field::FlagsMembers::High member field.
    COMMS_FIELD_MEMBERS_NAMES(
        topicIdType,
        mid,
        qos,
        high
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqttsn::field::FlagsCommon::name();
    }
};

} // namespace field

} // namespace cc_mqttsn
