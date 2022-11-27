// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"CONNACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/ReturnCode.h"
#include "cc_mqttsn/message/ConnackCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Connack.
/// @tparam TOpt Extra options
/// @see @ref Connack
/// @headerfile cc_mqttsn/message/Connack.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct ConnackFields
{
    /// @brief Definition of <b>"ReturnCode"</b> field.
    using ReturnCode =
        cc_mqttsn::field::ReturnCode<
            TOpt
        >;

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ReturnCode
    >;
};

/// @brief Definition of <b>"CONNACK"</b> message class.
/// @details
///     See @ref ConnackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqttsn/message/Connack.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Connack : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Connack,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Connack>,
        comms::option::def::FieldsImpl<typename ConnackFields<TOpt>::All>,
        comms::option::def::MsgType<Connack<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Connack,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Connack>,
            comms::option::def::FieldsImpl<typename ConnackFields<TOpt>::All>,
            comms::option::def::MsgType<Connack<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_returnCode index, @b Field_returnCode type and @b field_returnCode() access fuction
    ///         for @ref ConnackFields::ReturnCode field.
    COMMS_MSG_FIELDS_NAMES(
        returnCode
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqttsn::message::ConnackCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn
