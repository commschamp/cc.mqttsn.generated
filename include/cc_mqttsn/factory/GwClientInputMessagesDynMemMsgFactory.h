// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains message factory with dynamic memory allocation for the client input "Gw" platform specific messages.

#pragma once

#include <cstdint>
#include <memory>
#include "cc_mqttsn/input/GwClientInputMessages.h"
#include "comms/MsgFactoryCreateFailureReason.h"

namespace cc_mqttsn
{

namespace factory
{

/// @brief Message factory with dynamic memory allocation for the client input "Gw" platform specific messages.
/// @details Defines the same public interface as @b comms::MsgFactory and intended for
///     its replacement.
/// @tparam TInterface Interface class of the messages.
/// @tparam TProtOptions Application specific protocol definition options.
template<typename TInterface, typename TProtOptions>
class GwClientInputMessagesDynMemMsgFactory
{
public:
    /// @brief Type of the common base class of all the messages.
    using Message = TInterface;

    /// @brief Type of the message ID when passed as a parameter.
    using MsgIdParamType = typename Message::MsgIdParamType;

    /// @brief Type of the message ID.
    using MsgIdType = typename Message::MsgIdType;

    /// @brief Smart pointer to @ref Message which holds allocated message object.
    using MsgPtr = std::unique_ptr<Message>;

    /// @brief Reason for message creation failure
    using CreateFailureReason = comms::MsgFactoryCreateFailureReason;

    /// @brief Type of generic message.
    /// @details Not supported
    using GenericMessage = void;

    /// @brief Create message object given the ID of the message.
    /// @param id ID of the message.
    /// @param idx Relative index (or offset) of the message with the same ID.
    /// @param[out] reason Failure reason in case creation has failed.
    MsgPtr createMsg(MsgIdParamType id, unsigned idx = 0U, CreateFailureReason* reason = nullptr) const
    {
        auto updateReasonFunc =
            [reason](CreateFailureReason val)
            {
                if (reason != nullptr) {
                    *reason = val;
                }
            };

        if (1U <= idx) {
            updateReasonFunc(CreateFailureReason::InvalidId);
            return MsgPtr();
        }

        updateReasonFunc(CreateFailureReason::None);
        switch (static_cast<std::intmax_t>(id)) {
            case 0 /* 0x0 */: return MsgPtr(new cc_mqttsn::message::Advertise<TInterface, TProtOptions>);
            case 1 /* 0x1 */: return MsgPtr(new cc_mqttsn::message::Searchgw<TInterface, TProtOptions>);
            case 2 /* 0x2 */: return MsgPtr(new cc_mqttsn::message::Gwinfo<TInterface, TProtOptions>);
            case 5 /* 0x5 */: return MsgPtr(new cc_mqttsn::message::Connack<TInterface, TProtOptions>);
            case 6 /* 0x6 */: return MsgPtr(new cc_mqttsn::message::Willtopicreq<TInterface, TProtOptions>);
            case 8 /* 0x8 */: return MsgPtr(new cc_mqttsn::message::Willmsgreq<TInterface, TProtOptions>);
            case 10 /* 0xa */: return MsgPtr(new cc_mqttsn::message::Register<TInterface, TProtOptions>);
            case 11 /* 0xb */: return MsgPtr(new cc_mqttsn::message::Regack<TInterface, TProtOptions>);
            case 12 /* 0xc */: return MsgPtr(new cc_mqttsn::message::Publish<TInterface, TProtOptions>);
            case 13 /* 0xd */: return MsgPtr(new cc_mqttsn::message::Puback<TInterface, TProtOptions>);
            case 14 /* 0xe */: return MsgPtr(new cc_mqttsn::message::Pubcomp<TInterface, TProtOptions>);
            case 15 /* 0xf */: return MsgPtr(new cc_mqttsn::message::Pubrec<TInterface, TProtOptions>);
            case 16 /* 0x10 */: return MsgPtr(new cc_mqttsn::message::Pubrel<TInterface, TProtOptions>);
            case 19 /* 0x13 */: return MsgPtr(new cc_mqttsn::message::Suback<TInterface, TProtOptions>);
            case 21 /* 0x15 */: return MsgPtr(new cc_mqttsn::message::Unsuback<TInterface, TProtOptions>);
            case 22 /* 0x16 */: return MsgPtr(new cc_mqttsn::message::Pingreq<TInterface, TProtOptions>);
            case 23 /* 0x17 */: return MsgPtr(new cc_mqttsn::message::Pingresp<TInterface, TProtOptions>);
            case 24 /* 0x18 */: return MsgPtr(new cc_mqttsn::message::Disconnect<TInterface, TProtOptions>);
            case 27 /* 0x1b */: return MsgPtr(new cc_mqttsn::message::Willtopicresp<TInterface, TProtOptions>);
            case 29 /* 0x1d */: return MsgPtr(new cc_mqttsn::message::Willmsgresp<TInterface, TProtOptions>);
            case 254 /* 0xfe */: return MsgPtr(new cc_mqttsn::message::Fwd<TInterface, TProtOptions>);
            default: break;
        }

        updateReasonFunc(CreateFailureReason::InvalidId);
        return MsgPtr();
    }

    /// @brief Allocate and initialise @b comms::GenericMessage object.
    MsgPtr createGenericMsg(MsgIdParamType id, unsigned idx = 0U) const
    {
        static_cast<void>(id);
        static_cast<void>(idx);
        return MsgPtr();
    }

    /// @brief Inquiry whether allocation is possible
    bool canAllocate() const
    {
        return true;
    }

    /// @brief Get number of message types that have the specified ID.
    /// @param id ID of the message.
    /// @return Number of message classes that report same ID.
    std::size_t msgCount(MsgIdParamType id) const
    {
        switch (static_cast<std::intmax_t>(id))
        {
            case 0 /* 0x0 */: return 1U;
            case 1 /* 0x1 */: return 1U;
            case 2 /* 0x2 */: return 1U;
            case 5 /* 0x5 */: return 1U;
            case 6 /* 0x6 */: return 1U;
            case 8 /* 0x8 */: return 1U;
            case 10 /* 0xa */: return 1U;
            case 11 /* 0xb */: return 1U;
            case 12 /* 0xc */: return 1U;
            case 13 /* 0xd */: return 1U;
            case 14 /* 0xe */: return 1U;
            case 15 /* 0xf */: return 1U;
            case 16 /* 0x10 */: return 1U;
            case 19 /* 0x13 */: return 1U;
            case 21 /* 0x15 */: return 1U;
            case 22 /* 0x16 */: return 1U;
            case 23 /* 0x17 */: return 1U;
            case 24 /* 0x18 */: return 1U;
            case 27 /* 0x1b */: return 1U;
            case 29 /* 0x1d */: return 1U;
            case 254 /* 0xfe */: return 1U;
            default: break;
        }

        return 0U;
    }

    /// @brief Compile time inquiry whether all the message classes have unique IDs.
    static constexpr bool hasUniqueIds()
    {
        return true;
    }

    /// @brief Compile time inquiry whether polymorphic dispatch tables are
    ///     generated internally to map message ID to actual type.
    static constexpr bool isDispatchPolymorphic()
    {
        return false;
    }

    /// @brief Compile time inquiry whether static binary search dispatch is
    ///     generated internally to map message ID to actual type.
    static constexpr bool isDispatchStaticBinSearch()
    {
        return false;
    }

    /// @brief Compile time inquiry whether linear switch dispatch is
    ///     generated internally to map message ID to actual type.
    static constexpr bool isDispatchLinearSwitch()
    {
        return false;
    }

    /// @brief Compile time inquiry whether factory supports in-place allocation
    static constexpr bool hasInPlaceAllocation()
    {
        return false;
    }

    /// @brief Compile time inquiry whether factory supports @b comms::GenericMessage allocation.
    static constexpr bool hasGenericMessageSupport()
    {
        return false;
    }

    /// @brief Compile time inquiry whether factory has forced dispatch method
    static constexpr bool hasForcedDispatch()
    {
        return true;
    }
};

} // namespace factory

} // namespace cc_mqttsn
