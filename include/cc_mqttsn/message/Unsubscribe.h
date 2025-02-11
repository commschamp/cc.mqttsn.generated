// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains definition of <b>"UNSUBSCRIBE"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/Flags.h"
#include "cc_mqttsn/field/MessageId.h"
#include "cc_mqttsn/field/TopicId.h"
#include "cc_mqttsn/field/TopicName.h"
#include "cc_mqttsn/message/UnsubscribeCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/Optional.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Unsubscribe.
/// @tparam TOpt Extra options
/// @see @ref Unsubscribe
/// @headerfile cc_mqttsn/message/Unsubscribe.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct UnsubscribeFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    using Flags =
        cc_mqttsn::field::Flags<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        cc_mqttsn::field::MessageId<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Scope for all the member fields of
    ///     @ref TopicId field.
    struct TopicIdMembers
    {
        /// @brief Definition of <b>"TopicId"</b> field.
        using TopicId =
            cc_mqttsn::field::TopicId<
                TOpt,
                comms::option::def::HasName
            >;
    };

    /// @brief Definition of <b>"TopicId"</b> field.
    class TopicId : public
        comms::field::Optional<
            typename TopicIdMembers::TopicId,
            comms::option::def::HasName,
            comms::option::def::ExistsByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename TopicIdMembers::TopicId,
                comms::option::def::HasName,
                comms::option::def::ExistsByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqttsn::message::UnsubscribeFieldsCommon::TopicIdCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref TopicName field.
    struct TopicNameMembers
    {
        /// @brief Definition of <b>"TopicName"</b> field.
        using TopicName =
            cc_mqttsn::field::TopicName<
                TOpt,
                typename TOpt::message::UnsubscribeFields::TopicNameMembers::TopicName,
                comms::option::def::HasName
            >;
    };

    /// @brief Definition of <b>"TopicName"</b> field.
    class TopicName : public
        comms::field::Optional<
            typename TopicNameMembers::TopicName,
            comms::option::def::HasName,
            comms::option::def::MissingByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename TopicNameMembers::TopicName,
                comms::option::def::HasName,
                comms::option::def::MissingByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqttsn::message::UnsubscribeFieldsCommon::TopicNameCommon::name();
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
/// @headerfile cc_mqttsn/message/Unsubscribe.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Unsubscribe : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Unsubscribe,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Unsubscribe>,
        comms::option::def::FieldsImpl<typename UnsubscribeFields<TOpt>::All>,
        comms::option::def::MsgType<Unsubscribe<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Unsubscribe,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Unsubscribe>,
            comms::option::def::FieldsImpl<typename UnsubscribeFields<TOpt>::All>,
            comms::option::def::MsgType<Unsubscribe<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_flags index, @b Field_flags type and @b field_flags() access fuction
    ///         for @ref UnsubscribeFields::Flags field.
    ///     @li @b FieldIdx_msgId index, @b Field_msgId type and @b field_msgId() access fuction
    ///         for @ref UnsubscribeFields::MsgId field.
    ///     @li @b FieldIdx_topicId index, @b Field_topicId type and @b field_topicId() access fuction
    ///         for @ref UnsubscribeFields::TopicId field.
    ///     @li @b FieldIdx_topicName index, @b Field_topicName type and @b field_topicName() access fuction
    ///         for @ref UnsubscribeFields::TopicName field.
    COMMS_MSG_FIELDS_NAMES(
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
        return cc_mqttsn::message::UnsubscribeCommon::name();
    }

    /// @brief Generated read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = comms::ErrorStatus::Success;
        do {
            es = Base::template doReadUntilAndUpdateLen<FieldIdx_topicId>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_topicId();

            es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_topicId, FieldIdx_topicName>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_topicName();

            es = Base::template doReadFrom<FieldIdx_topicName>(iter, len);
        } while (false);

        return es;
    }

    /// @brief Generated refresh functionality.
    bool doRefresh()
    {
       bool updated = Base::doRefresh();
       updated = refresh_topicId() || updated;
       updated = refresh_topicName() || updated;
       return updated;
    }

private:
    void readPrepare_topicId()
    {
        refresh_topicId();
    }

    void readPrepare_topicName()
    {
        refresh_topicName();
    }

    bool refresh_topicId()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().field_topicIdType().getValue() != static_cast<typename Field_flags::Field_topicIdType::ValueType>(0)) {
            mode = comms::field::OptionalMode::Exists;
        }

        if (field_topicId().getMode() == mode) {
            return false;
        }

        field_topicId().setMode(mode);
        return true;
    }

    bool refresh_topicName()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().field_topicIdType().getValue() == static_cast<typename Field_flags::Field_topicIdType::ValueType>(0)) {
            mode = comms::field::OptionalMode::Exists;
        }

        if (field_topicName().getMode() == mode) {
            return false;
        }

        field_topicName().setMode(mode);
        return true;
    }
};

} // namespace message

} // namespace cc_mqttsn
