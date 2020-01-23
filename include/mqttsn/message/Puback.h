// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains definition of <b>"PUBACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/MessageId.h"
#include "mqttsn/field/ReturnCode.h"
#include "mqttsn/field/TopicId.h"
#include "mqttsn/message/PubackCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Puback.
/// @tparam TOpt Extra options
/// @see @ref Puback
/// @headerfile "mqttsn/message/Puback.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct PubackFields
{
    /// @brief Definition of <b>"TopicId"</b> field.
    using TopicId =
        mqttsn::field::TopicId<
            TOpt
        >;
    
    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        mqttsn::field::MessageId<
            TOpt
        >;
    
    /// @brief Definition of <b>"ReturnCode"</b> field.
    using ReturnCode =
        mqttsn::field::ReturnCode<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TopicId,
        MsgId,
        ReturnCode
    >;
};

/// @brief Definition of <b>"PUBACK"</b> message class.
/// @details
///     See @ref PubackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Puback.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Puback : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Puback>,
        comms::option::def::FieldsImpl<typename PubackFields<TOpt>::All>,
        comms::option::def::MsgType<Puback<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Puback>,
            comms::option::def::FieldsImpl<typename PubackFields<TOpt>::All>,
            comms::option::def::MsgType<Puback<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_topicId type and @b field_topicId() fuction
    ///         for @ref PubackFields::TopicId field.
    ///     @li @b Field_msgId type and @b field_msgId() fuction
    ///         for @ref PubackFields::MsgId field.
    ///     @li @b Field_returnCode type and @b field_returnCode() fuction
    ///         for @ref PubackFields::ReturnCode field.
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
        return mqttsn::message::PubackCommon::name();
    }
    
    
};

} // namespace message

} // namespace mqttsn


