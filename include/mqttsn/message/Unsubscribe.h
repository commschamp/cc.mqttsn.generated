/// @file
/// @brief Contains definition of <b>"UNSUBSCRIBE"</b> message and its fields.

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

/// @brief Fields of @ref Unsubscribe.
/// @tparam TOpt Extra options
/// @see @ref Unsubscribe
/// @headerfile "mqttsn/message/Unsubscribe.h"
template <typename TOpt = mqttsn::DefaultOptions>
struct UnsubscribeFields
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

/// @brief Definition of <b>"UNSUBSCRIBE"</b> message class.
/// @details
///     See @ref UnsubscribeFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Unsubscribe.h"
template <typename TMsgBase, typename TOpt = mqttsn::DefaultOptions>
class Unsubscribe : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Unsubscribe,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Unsubscribe>,
        comms::option::FieldsImpl<typename UnsubscribeFields<TOpt>::All>,
        comms::option::MsgType<Unsubscribe<TMsgBase, TOpt> >,
        comms::option::HasName,
        comms::option::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Unsubscribe,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Unsubscribe>,
            comms::option::FieldsImpl<typename UnsubscribeFields<TOpt>::All>,
            comms::option::MsgType<Unsubscribe<TMsgBase, TOpt> >,
            comms::option::HasName,
            comms::option::HasCustomRefresh
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_flags() for @ref UnsubscribeFields::Flags field.
    ///     @li @b field_msgId() for @ref UnsubscribeFields::MsgId field.
    ///     @li @b field_topicId() for @ref UnsubscribeFields::TopicId field.
    ///     @li @b field_topicName() for @ref UnsubscribeFields::TopicName field.
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
        return "UNSUBSCRIBE";
    }
    
    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_msgId>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
    
        doRefresh();
        return Base::template doReadFrom<FieldIdx_msgId>(iter, len);
    }
    
    /// @brief Custom refresh functionality
    bool doRefresh()
    {
        auto& topicIdTypeField = field_flags().field_topicIdType();
        using TopicIdTypeFieldType = typename std::decay<decltype(topicIdTypeField)>::type;
        using TopicIdVal = typename TopicIdTypeFieldType::ValueType;
        
        bool updated = Base::doRefresh();
        
        auto expectedTopicIdMode = comms::field::OptionalMode::Exists;
        auto expectedTopicNameMode = comms::field::OptionalMode::Missing;
        if (topicIdTypeField.value() == TopicIdVal::TopicName) {
            expectedTopicIdMode = comms::field::OptionalMode::Missing;
            expectedTopicNameMode = comms::field::OptionalMode::Exists;
        }
    
        if (field_topicId().getMode() != expectedTopicIdMode) {
            field_topicId().setMode(expectedTopicIdMode);
            updated = true;
        }
    
        if (field_topicName().getMode() != expectedTopicNameMode) {
            field_topicName().setMode(expectedTopicNameMode);
            updated = true;
        }
    
        return updated;
    }
    
    
};

} // namespace message

} // namespace mqttsn


