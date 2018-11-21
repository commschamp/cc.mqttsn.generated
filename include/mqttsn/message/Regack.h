/// @file
/// @brief Contains definition of <b>"REGACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/MessageId.h"
#include "mqttsn/field/ReturnCode.h"
#include "mqttsn/field/TopicId.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Regack.
/// @tparam TOpt Extra options
/// @see @ref Regack
/// @headerfile "mqttsn/message/Regack.h"
template <typename TOpt = mqttsn::DefaultOptions>
struct RegackFields
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

/// @brief Definition of <b>"REGACK"</b> message class.
/// @details
///     See @ref RegackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Regack.h"
template <typename TMsgBase, typename TOpt = mqttsn::DefaultOptions>
class Regack : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Regack>,
        comms::option::FieldsImpl<typename RegackFields<TOpt>::All>,
        comms::option::MsgType<Regack<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Regack>,
            comms::option::FieldsImpl<typename RegackFields<TOpt>::All>,
            comms::option::MsgType<Regack<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_topicId() for @ref RegackFields::TopicId field.
    ///     @li @b field_msgId() for @ref RegackFields::MsgId field.
    ///     @li @b field_returnCode() for @ref RegackFields::ReturnCode field.
    COMMS_MSG_FIELDS_ACCESS(
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
        return "REGACK";
    }
    
    
};

} // namespace message

} // namespace mqttsn


