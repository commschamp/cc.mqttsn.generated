// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Willtopicupd message and its fields.

#pragma once

#include "cc_mqttsn/field/FlagsCommon.h"
#include "cc_mqttsn/field/WillTopicCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Willtopicupd message.
/// @see cc_mqttsn::message::WilltopicupdFields
struct WilltopicupdFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqttsn::message::WilltopicupdFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common definitions of the member fields of
        ///     @ref cc_mqttsn::message::WilltopicupdFields::FlagsMembers::FlagsField field.
        using FlagsFieldMembersCommon = cc_mqttsn::field::FlagsMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_mqttsn::message::WilltopicupdFields::FlagsMembers::FlagsField field.
        struct FlagsFieldCommon : public cc_mqttsn::field::FlagsCommon
        {
            /// @brief Name of the @ref cc_mqttsn::message::WilltopicupdFields::FlagsMembers::FlagsField field.
            static const char* name()
            {
                return "FlagsField";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::WilltopicupdFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_mqttsn::message::WilltopicupdFields::Flags field.
        static const char* name()
        {
            return "Flags";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::WilltopicupdFields::WillTopic field.
    using WillTopicCommon = cc_mqttsn::field::WillTopicCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Willtopicupd message.
struct WilltopicupdCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Willtopicupd message.
    static const char* name()
    {
        return "WILLTOPICUPD";
    }
};

} // namespace message

} // namespace cc_mqttsn
