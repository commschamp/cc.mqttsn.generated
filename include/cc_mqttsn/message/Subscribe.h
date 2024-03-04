// Generated by commsdsl2comms v6.3.0

/// @file
/// @brief Contains definition of <b>"SUBSCRIBE"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/Flags.h"
#include "cc_mqttsn/field/MessageId.h"
#include "cc_mqttsn/field/TopicId.h"
#include "cc_mqttsn/field/TopicName.h"
#include "cc_mqttsn/message/SubscribeCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/Optional.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Subscribe.
/// @tparam TOpt Extra options
/// @see @ref Subscribe
/// @headerfile cc_mqttsn/message/Subscribe.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct SubscribeFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    using Flags =
        cc_mqttsn::field::Flags<
            TOpt
        >;

    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        cc_mqttsn::field::MessageId<
            TOpt
        >;

    /// @brief Scope for all the member fields of
    ///     @ref TopicId field.
    struct TopicIdMembers
    {
        /// @brief Definition of <b>"TopicId"</b> field.
        using TopicId =
            cc_mqttsn::field::TopicId<
                TOpt
            >;
    };

    /// @brief Definition of <b>"TopicId"</b> field.
    class TopicId : public
        comms::field::Optional<
            typename TopicIdMembers::TopicId,
            comms::option::def::ExistsByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename TopicIdMembers::TopicId,
                comms::option::def::ExistsByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqttsn::message::SubscribeFieldsCommon::TopicIdCommon::name();
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
                typename TOpt::message::SubscribeFields::TopicNameMembers::TopicName
            >;
    };

    /// @brief Definition of <b>"TopicName"</b> field.
    class TopicName : public
        comms::field::Optional<
            typename TopicNameMembers::TopicName,
            comms::option::def::MissingByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename TopicNameMembers::TopicName,
                comms::option::def::MissingByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqttsn::message::SubscribeFieldsCommon::TopicNameCommon::name();
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
/// @headerfile cc_mqttsn/message/Subscribe.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Subscribe : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Subscribe,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Subscribe>,
        comms::option::def::FieldsImpl<typename SubscribeFields<TOpt>::All>,
        comms::option::def::MsgType<Subscribe<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Subscribe,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Subscribe>,
            comms::option::def::FieldsImpl<typename SubscribeFields<TOpt>::All>,
            comms::option::def::MsgType<Subscribe<TMsgBase, TOpt> >,
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
    ///         for @ref SubscribeFields::Flags field.
    ///     @li @b FieldIdx_msgId index, @b Field_msgId type and @b field_msgId() access fuction
    ///         for @ref SubscribeFields::MsgId field.
    ///     @li @b FieldIdx_topicId index, @b Field_topicId type and @b field_topicId() access fuction
    ///         for @ref SubscribeFields::TopicId field.
    ///     @li @b FieldIdx_topicName index, @b Field_topicName type and @b field_topicName() access fuction
    ///         for @ref SubscribeFields::TopicName field.
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
        return cc_mqttsn::message::SubscribeCommon::name();
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
