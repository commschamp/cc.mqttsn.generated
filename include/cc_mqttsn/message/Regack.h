// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains definition of <b>"REGACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/MessageId.h"
#include "cc_mqttsn/field/ReturnCode.h"
#include "cc_mqttsn/field/TopicId.h"
#include "cc_mqttsn/message/RegackCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Regack.
/// @tparam TOpt Extra options
/// @see @ref Regack
/// @headerfile cc_mqttsn/message/Regack.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct RegackFields
{
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
        TopicId,
        MsgId,
        ReturnCode
    >;
};

/// @brief Definition of <b>"REGACK"</b> message class.
/// @details
///     See @ref RegackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqttsn/message/Regack.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Regack : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Regack>,
        comms::option::def::FieldsImpl<typename RegackFields<TOpt>::All>,
        comms::option::def::MsgType<Regack<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Regack>,
            comms::option::def::FieldsImpl<typename RegackFields<TOpt>::All>,
            comms::option::def::MsgType<Regack<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_topicId index, @b Field_topicId type and @b field_topicId() access fuction
    ///         for @ref RegackFields::TopicId field.
    ///     @li @b FieldIdx_msgId index, @b Field_msgId type and @b field_msgId() access fuction
    ///         for @ref RegackFields::MsgId field.
    ///     @li @b FieldIdx_returnCode index, @b Field_returnCode type and @b field_returnCode() access fuction
    ///         for @ref RegackFields::ReturnCode field.
    COMMS_MSG_FIELDS_NAMES(
        topicId,
        msgId,
        returnCode
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 5U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 5U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqttsn::message::RegackCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn