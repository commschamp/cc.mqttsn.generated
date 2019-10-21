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
#include "mqttsn/field/QoS.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqttsn::field::Flags bitfield.
struct FlagsMembersCommon
{
    /// @brief Values enumerator for
    ///     @ref mqttsn::field::FlagsMembers::TopicIdType field.
    enum class TopicIdTypeVal : std::uint8_t
    {
        NormalTopicId = 0, ///< value @b NormalTopicId
        PredefinedTopicId = 1, ///< value @b PredefinedTopicId
        TopicName = 2, ///< value @b TopicName
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref mqttsn::field::FlagsMembers::TopicIdType field.
    struct TopicIdTypeCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(TopicIdTypeVal val)
        {
            static const char* Map[] = {
                "NormalTopicId",
                "PredefinedTopicId",
                "TopicName"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref mqttsn::field::FlagsMembers::Mid field.
    struct MidCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "CleanSession",
                "Will",
                "Retain"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref mqttsn::field::FlagsMembers::High field.
    struct HighCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "Dup"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Scope for all the member fields of @ref Flags bitfield.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqttsn::options::DefaultOptions>
struct FlagsMembers
{
    /// @brief Values enumerator for
    ///     @ref mqttsn::field::FlagsMembers::TopicIdType field.
    using TopicIdTypeVal = mqttsn::field::FlagsMembersCommon::TopicIdTypeVal;
    
    /// @brief Definition of <b>"TopicIdType"</b> field.
    /// @see @ref mqttsn::field::FlagsMembers::TopicIdTypeVal
    struct TopicIdType : public
        comms::field::EnumValue<
            mqttsn::field::FieldBase<>,
            TopicIdTypeVal,
            comms::option::def::FixedBitLength<2U>,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "TopicIdType";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(TopicIdTypeVal val)
        {
            return mqttsn::field::FlagsMembersCommon::TopicIdTypeCommon::valueName(val);
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
            return "";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                mqttsn::field::FlagsMembersCommon::MidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"QoS"</b> field.
    using QoS =
        mqttsn::field::QoS<
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
            return "";
        }
        
        /// @brief Retrieve name of the bit
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
           QoS,
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
    /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
    ///     related to @b comms::field::Bitfield class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///     @li @b field_topicIdType() - for FlagsMembers::TopicIdType member field.
    ///     @li @b field_mid() - for FlagsMembers::Mid member field.
    ///     @li @b field_qoS() - for FlagsMembers::QoS member field.
    ///     @li @b field_high() - for FlagsMembers::High member field.
    COMMS_FIELD_MEMBERS_ACCESS(
        topicIdType,
        mid,
        qoS,
        high
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "Flags";
    }
    
};

} // namespace field

} // namespace mqttsn


