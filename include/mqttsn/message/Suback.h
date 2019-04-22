/// @file
/// @brief Contains definition of <b>"SUBACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/Flags.h"
#include "mqttsn/field/MessageId.h"
#include "mqttsn/field/ReturnCode.h"
#include "mqttsn/field/TopicId.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Suback.
/// @tparam TOpt Extra options
/// @see @ref Suback
/// @headerfile "mqttsn/message/Suback.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct SubackFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    using Flags =
        mqttsn::field::Flags<
            TOpt
        >;
    
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
/// @headerfile "mqttsn/message/Suback.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Suback : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Suback,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Suback>,
        comms::option::FieldsImpl<typename SubackFields<TOpt>::All>,
        comms::option::MsgType<Suback<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Suback,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Suback>,
            comms::option::FieldsImpl<typename SubackFields<TOpt>::All>,
            comms::option::MsgType<Suback<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_flags() for @ref SubackFields::Flags field.
    ///     @li @b field_topicId() for @ref SubackFields::TopicId field.
    ///     @li @b field_msgId() for @ref SubackFields::MsgId field.
    ///     @li @b field_returnCode() for @ref SubackFields::ReturnCode field.
    COMMS_MSG_FIELDS_ACCESS(
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
        return "SUBACK";
    }
    
    
};

} // namespace message

} // namespace mqttsn


