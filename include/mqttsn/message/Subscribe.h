/// @file
/// @brief Contains definition of <b>"SUBSCRIBE"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/Flags.h"
#include "mqttsn/field/MessageId.h"
#include "mqttsn/field/TopicId.h"
#include "mqttsn/field/TopicName.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Subscribe.
/// @tparam TOpt Extra options
/// @see @ref Subscribe
/// @headerfile "mqttsn/message/Subscribe.h"
template <typename TOpt = mqttsn::DefaultOptions>
struct SubscribeFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    using Flags =
        mqttsn::field::Flags<
           TOpt
       >;
    
    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        mqttsn::field::MessageId<
           TOpt
       >;
    
    /// @brief Scope for all the member fields of @ref TopicId optional.
    struct TopicIdMembers
    {
        /// @brief Definition of <b>"TopicId"</b> field.
        using TopicId =
            mqttsn::field::TopicId<
               TOpt
           >;
        
    };
    
    /// @brief Definition of <b>"TopicId"</b> field.
    struct TopicId : public
        comms::field::Optional<
            typename TopicIdMembers::TopicId,
            comms::option::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "TopicId";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref TopicName optional.
    struct TopicNameMembers
    {
        /// @brief Definition of <b>"TopicName"</b> field.
        using TopicName =
            mqttsn::field::TopicName<
               TOpt
           >;
        
    };
    
    /// @brief Definition of <b>"TopicName"</b> field.
    struct TopicName : public
        comms::field::Optional<
            typename TopicNameMembers::TopicName,
            comms::option::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "TopicName";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        MsgId,
        TopicId,
        TopicName
    >;
};

/// @brief Definition of <b>"SUBSCRIBE"</b> message class.
/// @details
///     See @ref SubscribeFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Subscribe.h"
template <typename TMsgBase, typename TOpt = mqttsn::DefaultOptions>
class Subscribe : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Subscribe,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Subscribe>,
        comms::option::FieldsImpl<typename SubscribeFields<TOpt>::All>,
        comms::option::MsgType<Subscribe<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Subscribe,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Subscribe>,
            comms::option::FieldsImpl<typename SubscribeFields<TOpt>::All>,
            comms::option::MsgType<Subscribe<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_flags() for @ref SubscribeFields::Flags field.
    ///     @li @b field_msgId() for @ref SubscribeFields::MsgId field.
    ///     @li @b field_topicId() for @ref SubscribeFields::TopicId field.
    ///     @li @b field_topicName() for @ref SubscribeFields::TopicName field.
    COMMS_MSG_FIELDS_ACCESS(
        flags,
        msgId,
        topicId,
        topicName
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 3U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "SUBSCRIBE";
    }
    
    
};

} // namespace message

} // namespace mqttsn


