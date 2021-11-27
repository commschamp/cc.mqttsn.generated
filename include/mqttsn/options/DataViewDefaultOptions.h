// Generated by commsdsl2comms v3.7.0

/// @file
/// @brief Contains definition of protocol default options that apply
///     @b comms::option::app::OrigDataView to applicable fields.

#pragma once

#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace options
{

/// @brief Default options for data view on contiguous buffers to avoid
///    unnecessary copy of data.
/// @tparam TBase Options to use as a basis.
template <typename TBase = mqttsn::options::DefaultOptions>
struct DataViewDefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field : public TBase::field
    {
        /// @brief Extra options for @ref
        ///     mqttsn::field::ClientId field.
        using ClientId = 
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::ClientId
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::Data field.
        using Data = 
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::Data
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::GwAdd field.
        using GwAdd = 
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::GwAdd
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::TopicName field.
        using TopicName = 
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::TopicName
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::WillMsg field.
        using WillMsg = 
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::WillMsg
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::WillTopic field.
        using WillTopic = 
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::WillTopic
            >;
    }; // struct field
    
    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for Layers of
        ///     @ref mqttsn::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     mqttsn::frame::FrameLayers::Data layer.
            using Data = std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::frame::FrameLayers::Data
            >;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

/// @brief Alias to @ref DataViewDefaultOptionsT with default template parameter.
using DataViewDefaultOptions = DataViewDefaultOptionsT<>;

} // namespace options

} // namespace mqttsn


