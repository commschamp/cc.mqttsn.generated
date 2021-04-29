// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains dispatch to handling function(s) for all input messages.

#pragma once

#include <type_traits>
#include "mqttsn/MsgId.h"
#include "mqttsn/input/AllMessages.h"

namespace mqttsn
{

namespace dispatch
{

/// @brief Dispatch message object to its appropriate handling function.
/// @details @b switch statement based (on message ID) cast and dispatch functionality.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref mqttsn::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object. Must define
///     @b handle() member function for every message type it exects
///     to handle and one for the interface class as well.
///     @code
///     using MyInterface = mqttsn::Message<...>;
///     using MyAdvertise = mqttsn::message::Advertise<MyInterface, mqttsn::options::DefaultOptions>;
///     using MySearchgw = mqttsn::message::Searchgw<MyInterface, mqttsn::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyAdvertise& msg) {...}
///         void handle(MySearchgw& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in mqttsn/dispatch/DispatchMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchMessage(
    mqttsn::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case mqttsn::MsgId_Advertise:
    {
        using MsgType = mqttsn::message::Advertise<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Searchgw:
    {
        using MsgType = mqttsn::message::Searchgw<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Gwinfo:
    {
        using MsgType = mqttsn::message::Gwinfo<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Connect:
    {
        using MsgType = mqttsn::message::Connect<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Connack:
    {
        using MsgType = mqttsn::message::Connack<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Willtopicreq:
    {
        using MsgType = mqttsn::message::Willtopicreq<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Willtopic:
    {
        using MsgType = mqttsn::message::Willtopic<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Willmsgreq:
    {
        using MsgType = mqttsn::message::Willmsgreq<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Willmsg:
    {
        using MsgType = mqttsn::message::Willmsg<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Register:
    {
        using MsgType = mqttsn::message::Register<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Regack:
    {
        using MsgType = mqttsn::message::Regack<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Publish:
    {
        using MsgType = mqttsn::message::Publish<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Puback:
    {
        using MsgType = mqttsn::message::Puback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Pubcomp:
    {
        using MsgType = mqttsn::message::Pubcomp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Pubrec:
    {
        using MsgType = mqttsn::message::Pubrec<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Pubrel:
    {
        using MsgType = mqttsn::message::Pubrel<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Subscribe:
    {
        using MsgType = mqttsn::message::Subscribe<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Suback:
    {
        using MsgType = mqttsn::message::Suback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Unsubscribe:
    {
        using MsgType = mqttsn::message::Unsubscribe<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Unsuback:
    {
        using MsgType = mqttsn::message::Unsuback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Pingreq:
    {
        using MsgType = mqttsn::message::Pingreq<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Pingresp:
    {
        using MsgType = mqttsn::message::Pingresp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Disconnect:
    {
        using MsgType = mqttsn::message::Disconnect<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Willtopicupd:
    {
        using MsgType = mqttsn::message::Willtopicupd<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Willtopicresp:
    {
        using MsgType = mqttsn::message::Willtopicresp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Willmsgupd:
    {
        using MsgType = mqttsn::message::Willmsgupd<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case mqttsn::MsgId_Willmsgresp:
    {
        using MsgType = mqttsn::message::Willmsgresp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchMessage(), but receives extra @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref mqttsn::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
///     Expected to be @b 0.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchMessage()
/// @note Defined in mqttsn/dispatch/DispatchMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchMessage(
    mqttsn::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    if (idx != 0U) {
        return handler.handle(msg);
    }
    return dispatchMessage<TProtOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchMessage(), but passing
///     mqttsn::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchMessage()
/// @note Defined in mqttsn/dispatch/DispatchMessage.h
template<typename TMsg, typename THandler>
auto dispatchMessageDefaultOptions(
    mqttsn::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchMessage<mqttsn::options::DefaultOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchMessageDefaultOptions(), 
///     but receives extra @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchMessageDefaultOptions()
/// @note Defined in mqttsn/dispatch/DispatchMessage.h
template<typename TMsg, typename THandler>
auto dispatchMessageDefaultOptions(
    mqttsn::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchMessage<mqttsn::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref mqttsn::options::DefaultOptions.
/// @headerfile "mqttsn/dispatch/DispatchMessage.h"
template <typename TProtOptions>
struct MsgDispatcher
{
    /// @brief Class detection tag
    using MsgDispatcherTag = void;

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] idx Index (or offset) of the message among those having the same numeric ID.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(mqttsn::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(mqttsn::dispatch::dispatchMessage<TProtOptions>(id, idx, msg, handler))
    {
        return mqttsn::dispatch::dispatchMessage<TProtOptions>(id, idx, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(mqttsn::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, idx, msg, handler))
    {
        return dispatch(id, idx, msg, handler);
    }

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(mqttsn::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(mqttsn::dispatch::dispatchMessage<TProtOptions>(id, msg, handler))
    {
        return mqttsn::dispatch::dispatchMessage<TProtOptions>(id, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(mqttsn::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, msg, handler))
    {
        return dispatch(id, msg, handler);
    }
};

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @details Same as @ref MsgDispatcher, but passing
///     @ref mqttsn::options::DefaultOptions as template parameter.
/// @note Defined in "mqttsn/dispatch/DispatchMessage.h"
using MsgDispatcherDefaultOptions =
    MsgDispatcher<mqttsn::options::DefaultOptions>;

} // namespace dispatch

} // namespace mqttsn


