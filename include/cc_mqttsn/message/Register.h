// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains definition of <b>"REGISTER"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/MessageId.h"
#include "cc_mqttsn/field/TopicId.h"
#include "cc_mqttsn/field/TopicName.h"
#include "cc_mqttsn/message/RegisterCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Register.
/// @tparam TOpt Extra options
/// @see @ref Register
/// @headerfile cc_mqttsn/message/Register.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct RegisterFields
{
    /// @brief Definition of <b>"TopicId"</b> field.
    using TopicId =
        cc_mqttsn::field::TopicId<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        cc_mqttsn::field::MessageId<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"TopicName"</b> field.
    using TopicName =
        cc_mqttsn::field::TopicName<
            TOpt,
            typename TOpt::message::RegisterFields::TopicName,
            comms::option::def::HasName
        >;

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TopicId,
        MsgId,
        TopicName
    >;
};

/// @brief Definition of <b>"REGISTER"</b> message class.
/// @details
///     See @ref RegisterFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqttsn/message/Register.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Register : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<10 /* 0xa */>,
        comms::option::def::FieldsImpl<typename RegisterFields<TOpt>::All>,
        comms::option::def::MsgType<Register<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<10 /* 0xa */>,
            comms::option::def::FieldsImpl<typename RegisterFields<TOpt>::All>,
            comms::option::def::MsgType<Register<TMsgBase, TOpt> >,
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
    ///         for @ref RegisterFields::TopicId field.
    ///     @li @b FieldIdx_msgId index, @b Field_msgId type and @b field_msgId() access fuction
    ///         for @ref RegisterFields::MsgId field.
    ///     @li @b FieldIdx_topicName index, @b Field_topicName type and @b field_topicName() access fuction
    ///         for @ref RegisterFields::TopicName field.
    COMMS_MSG_FIELDS_NAMES(
        topicId,
        msgId,
        topicName
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqttsn::message::RegisterCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn
