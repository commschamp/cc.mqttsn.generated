// Generated by commsdsl2comms v6.2.1

/// @file
/// @brief Contains definition of <b>"DISCONNECT"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/Duration.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/message/DisconnectCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/Optional.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Disconnect.
/// @tparam TOpt Extra options
/// @see @ref Disconnect
/// @headerfile cc_mqttsn/message/Disconnect.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct DisconnectFields
{
    /// @brief Scope for all the member fields of
    ///     @ref Duration field.
    struct DurationMembers
    {
        /// @brief Definition of <b>"Duration"</b> field.
        using Duration =
            cc_mqttsn::field::Duration<
                TOpt
            >;
    };

    /// @brief Definition of <b>"Duration"</b> field.
    class Duration : public
        comms::field::Optional<
            typename DurationMembers::Duration
        >
    {
        using Base =
            comms::field::Optional<
                typename DurationMembers::Duration
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqttsn::message::DisconnectFieldsCommon::DurationCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Duration
    >;
};

/// @brief Definition of <b>"DISCONNECT"</b> message class.
/// @details
///     See @ref DisconnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqttsn/message/Disconnect.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Disconnect : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Disconnect>,
        comms::option::def::FieldsImpl<typename DisconnectFields<TOpt>::All>,
        comms::option::def::MsgType<Disconnect<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Disconnect>,
            comms::option::def::FieldsImpl<typename DisconnectFields<TOpt>::All>,
            comms::option::def::MsgType<Disconnect<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_duration index, @b Field_duration type and @b field_duration() access fuction
    ///         for @ref DisconnectFields::Duration field.
    COMMS_MSG_FIELDS_NAMES(
        duration
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqttsn::message::DisconnectCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn
