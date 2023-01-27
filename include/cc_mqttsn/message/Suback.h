// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains definition of <b>"SUBACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/Flags.h"
#include "cc_mqttsn/field/MessageId.h"
#include "cc_mqttsn/field/ReturnCode.h"
#include "cc_mqttsn/field/TopicId.h"
#include "cc_mqttsn/message/SubackCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Suback.
/// @tparam TOpt Extra options
/// @see @ref Suback
/// @headerfile cc_mqttsn/message/Suback.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct SubackFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    using Flags =
        cc_mqttsn::field::Flags<
            TOpt
        >;

    /// @brief Definition of <b>"TopicId"</b> field.
    using TopicId =
        cc_mqttsn::field::TopicId<
            TOpt
        >;

    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        cc_mqttsn::field::MessageId<
            TOpt
        >;

    /// @brief Definition of <b>"ReturnCode"</b> field.
    using ReturnCode =
        cc_mqttsn::field::ReturnCode<
            TOpt
        >;

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        TopicId,
        MsgId,
        ReturnCode
    >;
};

/// @brief Definition of <b>"SUBACK"</b> message class.
/// @details
///     See @ref SubackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqttsn/message/Suback.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Suback : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Suback,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Suback>,
        comms::option::def::FieldsImpl<typename SubackFields<TOpt>::All>,
        comms::option::def::MsgType<Suback<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Suback,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Suback>,
            comms::option::def::FieldsImpl<typename SubackFields<TOpt>::All>,
            comms::option::def::MsgType<Suback<TMsgBase, TOpt> >,
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
    ///         for @ref SubackFields::Flags field.
    ///     @li @b FieldIdx_topicId index, @b Field_topicId type and @b field_topicId() access fuction
    ///         for @ref SubackFields::TopicId field.
    ///     @li @b FieldIdx_msgId index, @b Field_msgId type and @b field_msgId() access fuction
    ///         for @ref SubackFields::MsgId field.
    ///     @li @b FieldIdx_returnCode index, @b Field_returnCode type and @b field_returnCode() access fuction
    ///         for @ref SubackFields::ReturnCode field.
    COMMS_MSG_FIELDS_NAMES(
        flags,
        topicId,
        msgId,
        returnCode
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 6U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 6U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqttsn::message::SubackCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn