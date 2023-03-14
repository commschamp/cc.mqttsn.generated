// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains definition of protocol data view default options.

#pragma once

#include "cc_mqttsn/options/DefaultOptions.h"

namespace cc_mqttsn
{

namespace options
{

/// @brief Default data view options of the protocol.
template <typename TBase = cc_mqttsn::options::DefaultOptions>
struct DataViewDefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field : public TBase::field
    {
        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::ClientId field.
        using ClientId =
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::ClientId
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::Data field.
        using Data =
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::Data
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::GwAdd field.
        using GwAdd =
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::GwAdd
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::TopicName field.
        using TopicName =
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::TopicName
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::WillMsg field.
        using WillMsg =
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::WillMsg
            >;

        /// @brief Extra options for @ref
        ///     cc_mqttsn::field::WillTopic field.
        using WillTopic =
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::WillTopic
            >;
    }; // struct field

    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for layers of
        ///     @ref cc_mqttsn::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     cc_mqttsn::frame::FrameLayers::Data
            ///     layer.
            using Data =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::frame::FrameLayers::Data
                >;
        }; // struct FrameLayers
    }; // struct frame
};

/// @brief Alias to @ref DataViewDefaultOptionsT with default template parameter.
using DataViewDefaultOptions = DataViewDefaultOptionsT<>;

} // namespace options

} // namespace cc_mqttsn
