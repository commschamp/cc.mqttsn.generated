// Generated by commsdsl2comms v5.1.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Unsubscribe message and its fields.

#pragma once

#include "cc_mqttsn/field/FlagsCommon.h"
#include "cc_mqttsn/field/MessageIdCommon.h"
#include "cc_mqttsn/field/TopicIdCommon.h"
#include "cc_mqttsn/field/TopicNameCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Unsubscribe message.
/// @see cc_mqttsn::message::UnsubscribeFields
struct UnsubscribeFieldsCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqttsn::message::UnsubscribeFields::Flags field.
    using FlagsMembersCommon = cc_mqttsn::field::FlagsMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::UnsubscribeFields::Flags field.
    using FlagsCommon = cc_mqttsn::field::FlagsCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::UnsubscribeFields::MsgId field.
    using MsgIdCommon = cc_mqttsn::field::MessageIdCommon;

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqttsn::message::UnsubscribeFields::TopicId field.
    struct TopicIdMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqttsn::message::UnsubscribeFields::TopicIdMembers::TopicId field.
        using TopicIdCommon = cc_mqttsn::field::TopicIdCommon;
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::UnsubscribeFields::TopicId field.
    struct TopicIdCommon
    {
        /// @brief Name of the @ref cc_mqttsn::message::UnsubscribeFields::TopicId field.
        static const char* name()
        {
            return "TopicId";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqttsn::message::UnsubscribeFields::TopicName field.
    struct TopicNameMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqttsn::message::UnsubscribeFields::TopicNameMembers::TopicName field.
        using TopicNameCommon = cc_mqttsn::field::TopicNameCommon;
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::UnsubscribeFields::TopicName field.
    struct TopicNameCommon
    {
        /// @brief Name of the @ref cc_mqttsn::message::UnsubscribeFields::TopicName field.
        static const char* name()
        {
            return "TopicName";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Unsubscribe message.
struct UnsubscribeCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Unsubscribe message.
    static const char* name()
    {
        return "UNSUBSCRIBE";
    }
};

} // namespace message

} // namespace cc_mqttsn
