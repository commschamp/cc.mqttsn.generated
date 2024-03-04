// Generated by commsdsl2comms v6.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Willtopic message and its fields.

#pragma once

#include "cc_mqttsn/field/FlagsCommon.h"
#include "cc_mqttsn/field/WillTopicCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Willtopic message.
/// @see cc_mqttsn::message::WilltopicFields
struct WilltopicFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqttsn::message::WilltopicFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common definitions of the member fields of
        ///     @ref cc_mqttsn::message::WilltopicFields::FlagsMembers::FlagsField field.
        using FlagsFieldMembersCommon = cc_mqttsn::field::FlagsMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_mqttsn::message::WilltopicFields::FlagsMembers::FlagsField field.
        struct FlagsFieldCommon : public cc_mqttsn::field::FlagsCommon
        {
            /// @brief Name of the @ref cc_mqttsn::message::WilltopicFields::FlagsMembers::FlagsField field.
            static const char* name()
            {
                return "FlagsField";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::WilltopicFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_mqttsn::message::WilltopicFields::Flags field.
        static const char* name()
        {
            return "Flags";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::WilltopicFields::WillTopic field.
    using WillTopicCommon = cc_mqttsn::field::WillTopicCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Willtopic message.
struct WilltopicCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Willtopic message.
    static const char* name()
    {
        return "WILLTOPIC";
    }
};

} // namespace message

} // namespace cc_mqttsn
