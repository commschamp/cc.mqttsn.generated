// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains definition of protocol all "Prot" platform scpecific messages dynamic memory allocation message factory options.

#pragma once

#include "cc_mqttsn/factory/ProtMessagesDynMemMsgFactory.h"
#include "cc_mqttsn/options/DefaultOptions.h"

namespace cc_mqttsn
{

namespace options
{

/// @brief Provided all "Prot" platform scpecific messages dynamic memory allocation message factory options of the protocol.
/// @details Must be used as the outermost wrapper of the protocol options.
template <typename TBase = cc_mqttsn::options::DefaultOptions>
struct ProtMessagesDynMemMsgFactoryDefaultOptionsT : public TBase
{
    /// @brief Alias to @ref cc_mqttsn::factory::ProtMessagesDynMemMsgFactory message factory.
    /// @details Exposes the same template parameters as @b comms::MsgFactory.
    template <typename TInterface, typename TAllMessages, typename... TOptions>
    using MsgFactory = cc_mqttsn::factory::ProtMessagesDynMemMsgFactory<TInterface, ProtMessagesDynMemMsgFactoryDefaultOptionsT<TBase> >;

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

/// @brief Alias to @ref ProtMessagesDynMemMsgFactoryDefaultOptionsT with default template parameter.
using ProtMessagesDynMemMsgFactoryDefaultOptions = ProtMessagesDynMemMsgFactoryDefaultOptionsT<>;

} // namespace options

} // namespace cc_mqttsn
