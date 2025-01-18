// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains dispatch to handling function(s) for Gw platform input messages.

#pragma once

#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/input/GwMessages.h"
#include "cc_mqttsn/options/DefaultOptions.h"

namespace cc_mqttsn
{

namespace dispatch
{

/// @brief Dispatch message object to its appropriate handling function.
/// @details @b switch statement based (on message ID) cast and dispatch functionality.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref cc_mqttsn::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object. Must define
///     @b handle() member function for every message type it exects
///     to handle and one for the interface class as well.
///     @code
///     using MyInterface = cc_mqttsn::Message<...>;
///     using MyAdvertise = cc_mqttsn::message::Advertise<MyInterface, cc_mqttsn::options::DefaultOptions>;
///     using MySearchgw = cc_mqttsn::message::Searchgw<MyInterface, cc_mqttsn::options::DefaultOptions>;
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
/// @note Defined in cc_mqttsn/dispatch/DispatchGwMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchGwMessage(
    cc_mqttsn::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case cc_mqttsn::MsgId_Advertise:
    {
        using MsgType = cc_mqttsn::message::Advertise<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Searchgw:
    {
        using MsgType = cc_mqttsn::message::Searchgw<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Gwinfo:
    {
        using MsgType = cc_mqttsn::message::Gwinfo<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Connect:
    {
        using MsgType = cc_mqttsn::message::Connect<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Connack:
    {
        using MsgType = cc_mqttsn::message::Connack<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Willtopicreq:
    {
        using MsgType = cc_mqttsn::message::Willtopicreq<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Willtopic:
    {
        using MsgType = cc_mqttsn::message::Willtopic<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Willmsgreq:
    {
        using MsgType = cc_mqttsn::message::Willmsgreq<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Willmsg:
    {
        using MsgType = cc_mqttsn::message::Willmsg<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Register:
    {
        using MsgType = cc_mqttsn::message::Register<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Regack:
    {
        using MsgType = cc_mqttsn::message::Regack<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Publish:
    {
        using MsgType = cc_mqttsn::message::Publish<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Puback:
    {
        using MsgType = cc_mqttsn::message::Puback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Pubcomp:
    {
        using MsgType = cc_mqttsn::message::Pubcomp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Pubrec:
    {
        using MsgType = cc_mqttsn::message::Pubrec<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Pubrel:
    {
        using MsgType = cc_mqttsn::message::Pubrel<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Subscribe:
    {
        using MsgType = cc_mqttsn::message::Subscribe<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Suback:
    {
        using MsgType = cc_mqttsn::message::Suback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Unsubscribe:
    {
        using MsgType = cc_mqttsn::message::Unsubscribe<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Unsuback:
    {
        using MsgType = cc_mqttsn::message::Unsuback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Pingreq:
    {
        using MsgType = cc_mqttsn::message::Pingreq<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Pingresp:
    {
        using MsgType = cc_mqttsn::message::Pingresp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Disconnect:
    {
        using MsgType = cc_mqttsn::message::Disconnect<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Willtopicupd:
    {
        using MsgType = cc_mqttsn::message::Willtopicupd<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Willtopicresp:
    {
        using MsgType = cc_mqttsn::message::Willtopicresp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Willmsgupd:
    {
        using MsgType = cc_mqttsn::message::Willmsgupd<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Willmsgresp:
    {
        using MsgType = cc_mqttsn::message::Willmsgresp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqttsn::MsgId_Fwd:
    {
        using MsgType = cc_mqttsn::message::Fwd<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchGwMessage(), but receives extra @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref cc_mqttsn::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
///     Expected to be @b 0.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchGwMessage()
/// @note Defined in cc_mqttsn/dispatch/DispatchGwMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchGwMessage(
    cc_mqttsn::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    if (idx != 0U) {
        return handler.handle(msg);
    }
    return dispatchGwMessage<TProtOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchGwMessage(), but passing
///     cc_mqttsn::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchGwMessage()
/// @note Defined in cc_mqttsn/dispatch/DispatchGwMessage.h
template<typename TMsg, typename THandler>
auto dispatchGwMessageDefaultOptions(
    cc_mqttsn::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchGwMessage<cc_mqttsn::options::DefaultOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchGwMessageDefaultOptions(), 
///     but receives extra @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchGwMessageDefaultOptions()
/// @note Defined in cc_mqttsn/dispatch/DispatchGwMessage.h
template<typename TMsg, typename THandler>
auto dispatchGwMessageDefaultOptions(
    cc_mqttsn::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchGwMessage<cc_mqttsn::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref cc_mqttsn::options::DefaultOptions.
/// @headerfile cc_mqttsn/dispatch/DispatchGwMessage.h
template <typename TProtOptions = cc_mqttsn::options::DefaultOptions>
struct GwMsgDispatcher
{
    /// @brief Class detection tag
    using MsgDispatcherTag = void;

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchGwMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] idx Index (or offset) of the message among those having the same numeric ID.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchGwMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(cc_mqttsn::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(cc_mqttsn::dispatch::dispatchGwMessage<TProtOptions>(id, idx, msg, handler))
    {
        return cc_mqttsn::dispatch::dispatchGwMessage<TProtOptions>(id, idx, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(cc_mqttsn::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, idx, msg, handler))
    {
        return dispatch(id, idx, msg, handler);
    }

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchGwMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchGwMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(cc_mqttsn::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(cc_mqttsn::dispatch::dispatchGwMessage<TProtOptions>(id, msg, handler))
    {
        return cc_mqttsn::dispatch::dispatchGwMessage<TProtOptions>(id, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(cc_mqttsn::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, msg, handler))
    {
        return dispatch(id, msg, handler);
    }
};

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @details Same as GwMsgDispatcher, but passing
///     @ref cc_mqttsn::options::DefaultOptions as template parameter.
/// @note Defined in cc_mqttsn/dispatch/DispatchGwMessage.h
using GwMsgDispatcherDefaultOptions =
    GwMsgDispatcher<>;

} // namespace dispatch

} // namespace cc_mqttsn
