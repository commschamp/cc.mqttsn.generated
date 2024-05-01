// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains definition of the FwdMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_mqttsn/message/Fwd.h"
#include "cc_mqttsn/options/DefaultOptions.h"

namespace cc_mqttsn
{

namespace input
{

/// @brief All Fwd platform messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
using FwdMessages =
    std::tuple<
        cc_mqttsn::message::Fwd<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_mqttsn

/// @brief Create type aliases for the all fwd platform messages of the protocol.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
/// @param opts_ Type of the used protocol definition options.
#define CC_MQTTSN_ALIASES_FOR_FWD_MESSAGES(prefix_, suffix_, interface_, opts_) \
    using prefix_ ## Fwd ## suffix_ = cc_mqttsn::message::Fwd<interface_, opts_>;

/// @brief Create type aliases for the all fwd platform messages of the protocol using default options.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
#define CC_MQTTSN_ALIASES_FOR_FWD_MESSAGES_DEFAULT_OPTIONS(prefix_, suffix_, interface_) \
    CC_MQTTSN_ALIASES_FOR_FWD_MESSAGES(prefix_, suffix_, interface_, cc_mqttsn::options::DefaultOptions)
