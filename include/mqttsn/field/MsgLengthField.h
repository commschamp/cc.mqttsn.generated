// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains definition of <b>"Length"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/MsgLengthFieldCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Scope for all the member fields of @ref MsgLengthField bundle.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqttsn::options::DefaultOptions>
struct MsgLengthFieldMembers
{
    /// @brief Definition of <b>"short"</b> field.
    struct Short : public
        comms::field::IntValue<
            mqttsn::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::NumValueSerOffset<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return mqttsn::field::MsgLengthFieldMembersCommon::ShortCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Long optional.
    struct LongMembers
    {
        /// @brief Definition of <b>"long"</b> field.
        struct Long : public
            comms::field::IntValue<
                mqttsn::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::NumValueSerOffset<3>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return mqttsn::field::MsgLengthFieldMembersCommon::LongMembersCommon::LongCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"long"</b> field.
    struct Long : public
        comms::field::Optional<
            typename LongMembers::Long
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return mqttsn::field::MsgLengthFieldMembersCommon::LongCommon::name();
        }
        
    };
    
    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Short,
           Long
        >;
};

/// @brief Definition of <b>"Length"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
class MsgLengthField : public
    comms::field::Bundle<
        mqttsn::field::FieldBase<>,
        typename MsgLengthFieldMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasCustomRead,
        comms::option::def::HasCustomRefresh
    >
{
    using Base = 
        comms::field::Bundle<
            mqttsn::field::FieldBase<>,
            typename MsgLengthFieldMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasCustomRead,
            comms::option::def::HasCustomRefresh
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bundle class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///     @li @b Field_short @b field_short() -
    ///         for MsgLengthFieldMembers::Short member field.
    ///     @li @b Field_long @b field_long() -
    ///         for MsgLengthFieldMembers::Long member field.
    COMMS_FIELD_MEMBERS_NAMES(
        short,
        long
    );
    
    /// @brief Extra function to get current length value
    std::size_t getLengthValue() const
    {
        if (field_short().value() != 0U) {
            return static_cast<std::size_t>(field_short().value());
        }
        
        COMMS_ASSERT(field_long().doesExist());
        return static_cast<std::size_t>(field_long().field().value());
    }
    
    /// @brief Extra function to set current length value
    void setLengthValue(std::size_t val)
    {
        if (val <= 0xfe) {
            field_short().value() = static_cast<std::uint8_t>(val);
            field_long().setMissing();
            return;
        }
        
        field_short().value() = 0U;
        field_long().setExists();
        field_long().field().value() = static_cast<std::uint16_t>(val);
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::MsgLengthFieldCommon::name();
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus read(TIter& iter, std::size_t len)
    {
        auto es = Base::template readUntilAndUpdateLen<FieldIdx_long>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_long();
        
        es = Base::template readFrom<FieldIdx_long>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool refresh()
    {
        bool updated = Base::refresh();
        updated = refresh_long() || updated;
        return updated;
    }
    
private:
    bool refresh_long()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_short().value() == 0U) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_long().getMode() == mode) {
            return false;
        }
        
        field_long().setMode(mode);
        return true;
        
    }
    
};

} // namespace field

} // namespace mqttsn


