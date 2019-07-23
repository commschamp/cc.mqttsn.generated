/// @file
/// @brief Contains dispatch to handling function(s) for client input messages.

#pragma once

#include <type_traits>
#include "mqttsn/MsgId.h"
#include "mqttsn/input/ClientInputMessages.h"

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
///     using MyGwinfo = mqttsn::message::Gwinfo<MyInterface, mqttsn::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyAdvertise& msg) {...}
///         void handle(MyGwinfo& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in mqttsn/dispatch/DispatchClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchClientInputMessage(
    mqttsn::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case mqttsn::MsgId_Advertise:
    {
        using MsgType = mqttsn::message::Advertise<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Gwinfo:
    {
        using MsgType = mqttsn::message::Gwinfo<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Connack:
    {
        using MsgType = mqttsn::message::Connack<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Willtopicreq:
    {
        using MsgType = mqttsn::message::Willtopicreq<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Willmsgreq:
    {
        using MsgType = mqttsn::message::Willmsgreq<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Register:
    {
        using MsgType = mqttsn::message::Register<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Regack:
    {
        using MsgType = mqttsn::message::Regack<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Publish:
    {
        using MsgType = mqttsn::message::Publish<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Puback:
    {
        using MsgType = mqttsn::message::Puback<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Pubcomp:
    {
        using MsgType = mqttsn::message::Pubcomp<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Pubrec:
    {
        using MsgType = mqttsn::message::Pubrec<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Pubrel:
    {
        using MsgType = mqttsn::message::Pubrel<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Suback:
    {
        using MsgType = mqttsn::message::Suback<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Unsuback:
    {
        using MsgType = mqttsn::message::Unsuback<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Pingreq:
    {
        using MsgType = mqttsn::message::Pingreq<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Pingresp:
    {
        using MsgType = mqttsn::message::Pingresp<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Disconnect:
    {
        using MsgType = mqttsn::message::Disconnect<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Willtopicresp:
    {
        using MsgType = mqttsn::message::Willtopicresp<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqttsn::MsgId_Willmsgresp:
    {
        using MsgType = mqttsn::message::Willmsgresp<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchClientInputMessage(), but receives extra @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref mqttsn::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
///     Expected to be @b 0.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchClientInputMessage()
/// @note Defined in mqttsn/dispatch/DispatchClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchClientInputMessage(
    mqttsn::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    if (idx != 0U) {
        return handler.handle(msg);
    }
    return dispatchClientInputMessage(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchClientInputMessage(), but passing
///     mqttsn::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchClientInputMessage()
/// @note Defined in mqttsn/dispatch/DispatchClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchClientInputMessageDefaultOptions(
    mqttsn::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchClientInputMessage<mqttsn::options::DefaultOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchClientInputMessageDefaultOptions(), 
///     but receives extra @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchClientInputMessageDefaultOptions()
/// @note Defined in mqttsn/dispatch/DispatchClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchClientInputMessageDefaultOptions(
    mqttsn::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchClientInputMessage<mqttsn::options::DefaultOptions>(id, idx, msg, handler);
}

} // namespace dispatch

} // namespace mqttsn


