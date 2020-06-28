// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"Flags"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/FlagsCommon.h"
#include "mqttsn/field/Qos.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref Flags bitfield.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqttsn::options::DefaultOptions>
struct FlagsMembers
{
    /// @brief Definition of <b>"TopicIdType"</b> field.
    /// @see @ref mqttsn::field::FlagsMembersCommon::TopicIdTypeVal
    class TopicIdType : public
        comms::field::EnumValue<
            mqttsn::field::FieldBase<>,
            mqttsn::field::FlagsMembersCommon::TopicIdTypeVal,
            comms::option::def::FixedBitLength<2U>,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        using Base = 
            comms::field::EnumValue<
                mqttsn::field::FieldBase<>,
                mqttsn::field::FlagsMembersCommon::TopicIdTypeVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return mqttsn::field::FlagsMembersCommon::TopicIdTypeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return mqttsn::field::FlagsMembersCommon::TopicIdTypeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>""</b> field.
    class Mid : public
        comms::field::BitmaskValue<
            mqttsn::field::FieldBase<>,
            comms::option::def::FixedBitLength<3U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                mqttsn::field::FieldBase<>,
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
        
        /// @brief Name of the field.
        static const char* name()
        {
            return mqttsn::field::FlagsMembersCommon::MidCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                mqttsn::field::FlagsMembersCommon::MidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"Qos"</b> field.
    using Qos =
        mqttsn::field::Qos<
            TOpt,
            comms::option::def::FixedBitLength<2U>
        >;
    
    /// @brief Definition of <b>""</b> field.
    class High : public
        comms::field::BitmaskValue<
            mqttsn::field::FieldBase<>,
            comms::option::def::FixedBitLength<1U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                mqttsn::field::FieldBase<>,
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
        
        /// @brief Name of the field.
        static const char* name()
        {
            return mqttsn::field::FlagsMembersCommon::HighCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                mqttsn::field::FlagsMembersCommon::HighCommon::bitName(
                    static_cast<std::size_t>(idx));
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
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
class Flags : public
    comms::field::Bitfield<
        mqttsn::field::FieldBase<>,
        typename FlagsMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::Bitfield<
            mqttsn::field::FieldBase<>,
            typename FlagsMembers<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bitfield class from COMMS library
    ///     for details.
    ///
    ///     The generated types and access functions are:
    ///     @li @b Field_topicIdType type and @b field_topicIdType() access function -
    ///         for FlagsMembers::TopicIdType member field.
    ///     @li @b Field_mid type and @b field_mid() access function -
    ///         for FlagsMembers::Mid member field.
    ///     @li @b Field_qos type and @b field_qos() access function -
    ///         for FlagsMembers::Qos member field.
    ///     @li @b Field_high type and @b field_high() access function -
    ///         for FlagsMembers::High member field.
    COMMS_FIELD_MEMBERS_NAMES(
        topicIdType,
        mid,
        qos,
        high
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::FlagsCommon::name();
    }
    
};

} // namespace field

} // namespace mqttsn


