// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains definition of protocol server input "Prot" platform scpecific messages dynamic memory allocation message factory options.

#pragma once

#include "cc_mqttsn/factory/ProtServerInputMessagesDynMemMsgFactory.h"
#include "cc_mqttsn/options/DefaultOptions.h"

namespace cc_mqttsn
{

namespace options
{

/// @brief Provided server input "Prot" platform scpecific messages dynamic memory allocation message factory options of the protocol.
/// @details Must be used as the outermost wrapper of the protocol options.
template <typename TBase = cc_mqttsn::options::DefaultOptions>
struct ProtServerInputMessagesDynMemMsgFactoryDefaultOptionsT : public TBase
{
    /// @brief Alias to actual message factory class.
    /// @details Exposes the same template parameters as @b comms::MsgFactory.
    template <typename TInterface, typename TAllMessages, typename... TOptions>
    using MsgFactory =
        cc_mqttsn::factory::ProtServerInputMessagesDynMemMsgFactory<TInterface, ProtServerInputMessagesDynMemMsgFactoryDefaultOptionsT<TBase> >;

    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for layers of
        ///     @ref cc_mqttsn::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::frame::FrameLayers::Id layer.
            using Id =
                std::tuple<
                    comms::option::app::MsgFactoryTempl<MsgFactory>,
                    typename TBase::frame::FrameLayers::Id
                >;
        }; // struct FrameLayers
    }; // struct frame
};

/// @brief Alias to @ref ProtServerInputMessagesDynMemMsgFactoryDefaultOptionsT with default template parameter.
using ProtServerInputMessagesDynMemMsgFactoryDefaultOptions = ProtServerInputMessagesDynMemMsgFactoryDefaultOptionsT<>;

} // namespace options

} // namespace cc_mqttsn
