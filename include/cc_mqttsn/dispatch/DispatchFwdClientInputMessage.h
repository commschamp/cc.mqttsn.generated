// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains dispatch to handling function(s) for Fwd platform client input input messages.

#pragma once

#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/input/FwdClientInputMessages.h"
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
/// @note Defined in cc_mqttsn/dispatch/DispatchFwdClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchFwdClientInputMessage(
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
/// @details Same as other dispatchFwdClientInputMessage(), but receives extra @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref cc_mqttsn::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
///     Expected to be @b 0.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchFwdClientInputMessage()
/// @note Defined in cc_mqttsn/dispatch/DispatchFwdClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchFwdClientInputMessage(
    cc_mqttsn::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    if (idx != 0U) {
        return handler.handle(msg);
    }
    return dispatchFwdClientInputMessage<TProtOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchFwdClientInputMessage(), but passing
///     cc_mqttsn::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchFwdClientInputMessage()
/// @note Defined in cc_mqttsn/dispatch/DispatchFwdClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchFwdClientInputMessageDefaultOptions(
    cc_mqttsn::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchFwdClientInputMessage<cc_mqttsn::options::DefaultOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchFwdClientInputMessageDefaultOptions(), 
///     but receives extra @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchFwdClientInputMessageDefaultOptions()
/// @note Defined in cc_mqttsn/dispatch/DispatchFwdClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchFwdClientInputMessageDefaultOptions(
    cc_mqttsn::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchFwdClientInputMessage<cc_mqttsn::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref cc_mqttsn::options::DefaultOptions.
/// @headerfile cc_mqttsn/dispatch/DispatchFwdClientInputMessage.h
template <typename TProtOptions = cc_mqttsn::options::DefaultOptions>
struct FwdClientInputMsgDispatcher
{
    /// @brief Class detection tag
    using MsgDispatcherTag = void;

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchFwdClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] idx Index (or offset) of the message among those having the same numeric ID.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchFwdClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(cc_mqttsn::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(cc_mqttsn::dispatch::dispatchFwdClientInputMessage<TProtOptions>(id, idx, msg, handler))
    {
        return cc_mqttsn::dispatch::dispatchFwdClientInputMessage<TProtOptions>(id, idx, msg, handler);
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
    /// @details Uses appropriate @ref dispatchFwdClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchFwdClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(cc_mqttsn::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(cc_mqttsn::dispatch::dispatchFwdClientInputMessage<TProtOptions>(id, msg, handler))
    {
        return cc_mqttsn::dispatch::dispatchFwdClientInputMessage<TProtOptions>(id, msg, handler);
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
/// @details Same as FwdClientInputMsgDispatcher, but passing
///     @ref cc_mqttsn::options::DefaultOptions as template parameter.
/// @note Defined in cc_mqttsn/dispatch/DispatchFwdClientInputMessage.h
using FwdClientInputMsgDispatcherDefaultOptions =
    FwdClientInputMsgDispatcher<>;

} // namespace dispatch

} // namespace cc_mqttsn
