// Generated by commsdsl2comms v6.3.0

/// @file
/// @brief Contains definition of protocol client default options.

#pragma once

#include "cc_mqttsn/options/DefaultOptions.h"

namespace cc_mqttsn
{

namespace options
{

/// @brief Default client options of the protocol.
template <typename TBase = cc_mqttsn::options::DefaultOptions>
struct ClientDefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Advertise message.
        using Advertise =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Advertise
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Connack message.
        using Connack =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Connack
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Connect message.
        using Connect =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Connect
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Searchgw message.
        using Searchgw =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Searchgw
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Suback message.
        using Suback =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Suback
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Subscribe message.
        using Subscribe =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Subscribe
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Unsuback message.
        using Unsuback =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Unsuback
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Unsubscribe message.
        using Unsubscribe =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Unsubscribe
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willmsg message.
        using Willmsg =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Willmsg
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willmsgreq message.
        using Willmsgreq =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Willmsgreq
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willmsgresp message.
        using Willmsgresp =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Willmsgresp
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willmsgupd message.
        using Willmsgupd =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Willmsgupd
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willtopic message.
        using Willtopic =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Willtopic
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willtopicreq
        ///     message.
        using Willtopicreq =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Willtopicreq
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willtopicresp
        ///     message.
        using Willtopicresp =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Willtopicresp
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::message::Willtopicupd
        ///     message.
        using Willtopicupd =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Willtopicupd
            >;
    }; // struct message
};

/// @brief Alias to @ref ClientDefaultOptionsT with default template parameter.
using ClientDefaultOptions = ClientDefaultOptionsT<>;

} // namespace options

} // namespace cc_mqttsn
