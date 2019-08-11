/// @file
/// @brief Contains definition of protocol default options for a client.

#pragma once

#include "DefaultOptions.h"

namespace mqttsn
{

namespace options
{

/// @brief Default options of the protocol for a client.
struct ClientDefaultOptions : public DefaultOptions
{
    /// @brief Extra options for messages.
    struct message : public DefaultOptions::message
    {
        /// @brief Extra options for
        ///     @ref mqttsn::message::Advertise message.
        using Advertise =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Connack message.
        using Connack =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Connect message.
        using Connect =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Searchgw message.
        using Searchgw =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Suback message.
        using Suback =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Subscribe message.
        using Subscribe =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Unsuback message.
        using Unsuback =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Unsubscribe message.
        using Unsubscribe =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsg message.
        using Willmsg =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsgreq message.
        using Willmsgreq =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsgresp message.
        using Willmsgresp =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsgupd message.
        using Willmsgupd =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopic message.
        using Willtopic =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopicreq message.
        using Willtopicreq =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopicresp message.
        using Willtopicresp =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl
            >;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopicupd message.
        using Willtopicupd =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl
            >;
        
    };
    
};

} // namespace options

} // namespace mqttsn


