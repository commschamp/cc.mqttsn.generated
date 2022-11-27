// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"CONNECT"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/ClientId.h"
#include "cc_mqttsn/field/Duration.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/Flags.h"
#include "cc_mqttsn/field/ProtocolId.h"
#include "cc_mqttsn/message/ConnectCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Connect.
/// @tparam TOpt Extra options
/// @see @ref Connect
/// @headerfile cc_mqttsn/message/Connect.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct ConnectFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    using Flags =
        cc_mqttsn::field::Flags<
            TOpt
        >;

    /// @brief Definition of <b>"ProtocolId"</b> field.
    using ProtocolId =
        cc_mqttsn::field::ProtocolId<
            TOpt
        >;

    /// @brief Definition of <b>"Duration"</b> field.
    using Duration =
        cc_mqttsn::field::Duration<
            TOpt
        >;

    /// @brief Definition of <b>"ClientId"</b> field.
    using ClientId =
        cc_mqttsn::field::ClientId<
            TOpt
        >;

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        ProtocolId,
        Duration,
        ClientId
    >;
};

/// @brief Definition of <b>"CONNECT"</b> message class.
/// @details
///     See @ref ConnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqttsn/message/Connect.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Connect : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Connect,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Connect>,
        comms::option::def::FieldsImpl<typename ConnectFields<TOpt>::All>,
        comms::option::def::MsgType<Connect<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Connect,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Connect>,
            comms::option::def::FieldsImpl<typename ConnectFields<TOpt>::All>,
            comms::option::def::MsgType<Connect<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_flags index, @b Field_flags type and @b field_flags() access fuction
    ///         for @ref ConnectFields::Flags field.
    ///     @li @b FieldIdx_protocolId index, @b Field_protocolId type and @b field_protocolId() access fuction
    ///         for @ref ConnectFields::ProtocolId field.
    ///     @li @b FieldIdx_duration index, @b Field_duration type and @b field_duration() access fuction
    ///         for @ref ConnectFields::Duration field.
    ///     @li @b FieldIdx_clientId index, @b Field_clientId type and @b field_clientId() access fuction
    ///         for @ref ConnectFields::ClientId field.
    COMMS_MSG_FIELDS_NAMES(
        flags,
        protocolId,
        duration,
        clientId
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqttsn::message::ConnectCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn
