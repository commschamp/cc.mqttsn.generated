/// @file
/// @brief Contains definition of <b>"REGISTER"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/MessageId.h"
#include "mqttsn/field/TopicId.h"
#include "mqttsn/field/TopicName.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Register.
/// @tparam TOpt Extra options
/// @see @ref Register
/// @headerfile "mqttsn/message/Register.h"
template <typename TOpt = mqttsn::DefaultOptions>
struct RegisterFields
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
    
    /// @brief Definition of <b>"TopicName"</b> field.
    using TopicName =
        mqttsn::field::TopicName<
           TOpt
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
/// @headerfile "mqttsn/message/Register.h"
template <typename TMsgBase, typename TOpt = mqttsn::DefaultOptions>
class Register : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Register>,
        comms::option::FieldsImpl<typename RegisterFields<TOpt>::All>,
        comms::option::MsgType<Register<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Register>,
            comms::option::FieldsImpl<typename RegisterFields<TOpt>::All>,
            comms::option::MsgType<Register<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_topicId() for @ref RegisterFields::TopicId field.
    ///     @li @b field_msgId() for @ref RegisterFields::MsgId field.
    ///     @li @b field_topicName() for @ref RegisterFields::TopicName field.
    COMMS_MSG_FIELDS_ACCESS(
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
        return "REGISTER";
    }
    
    
};

} // namespace message

} // namespace mqttsn


