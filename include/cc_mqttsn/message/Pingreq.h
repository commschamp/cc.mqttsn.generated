// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains definition of <b>"PINGREQ"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/ClientId.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/message/PingreqCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Pingreq.
/// @tparam TOpt Extra options
/// @see @ref Pingreq
/// @headerfile cc_mqttsn/message/Pingreq.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct PingreqFields
{
    /// @brief Definition of <b>"ClientId"</b> field.
    using ClientId =
        cc_mqttsn::field::ClientId<
            TOpt,
            typename TOpt::message::PingreqFields::ClientId
        >;

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ClientId
    >;
};

/// @brief Definition of <b>"PINGREQ"</b> message class.
/// @details
///     See @ref PingreqFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqttsn/message/Pingreq.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Pingreq : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Pingreq>,
        comms::option::def::FieldsImpl<typename PingreqFields<TOpt>::All>,
        comms::option::def::MsgType<Pingreq<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Pingreq>,
            comms::option::def::FieldsImpl<typename PingreqFields<TOpt>::All>,
            comms::option::def::MsgType<Pingreq<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_clientId index, @b Field_clientId type and @b field_clientId() access fuction
    ///         for @ref PingreqFields::ClientId field.
    COMMS_MSG_FIELDS_NAMES(
        clientId
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqttsn::message::PingreqCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn
