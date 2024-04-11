// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains definition of the ClientInputMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_mqttsn/message/Advertise.h"
#include "cc_mqttsn/message/Connack.h"
#include "cc_mqttsn/message/Disconnect.h"
#include "cc_mqttsn/message/Gwinfo.h"
#include "cc_mqttsn/message/Pingreq.h"
#include "cc_mqttsn/message/Pingresp.h"
#include "cc_mqttsn/message/Puback.h"
#include "cc_mqttsn/message/Pubcomp.h"
#include "cc_mqttsn/message/Publish.h"
#include "cc_mqttsn/message/Pubrec.h"
#include "cc_mqttsn/message/Pubrel.h"
#include "cc_mqttsn/message/Regack.h"
#include "cc_mqttsn/message/Register.h"
#include "cc_mqttsn/message/Suback.h"
#include "cc_mqttsn/message/Unsuback.h"
#include "cc_mqttsn/message/Willmsgreq.h"
#include "cc_mqttsn/message/Willmsgresp.h"
#include "cc_mqttsn/message/Willtopicreq.h"
#include "cc_mqttsn/message/Willtopicresp.h"
#include "cc_mqttsn/options/DefaultOptions.h"

namespace cc_mqttsn
{

namespace input
{

/// @brief Client input messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
using ClientInputMessages =
    std::tuple<
        cc_mqttsn::message::Advertise<TBase, TOpt>,
        cc_mqttsn::message::Gwinfo<TBase, TOpt>,
        cc_mqttsn::message::Connack<TBase, TOpt>,
        cc_mqttsn::message::Willtopicreq<TBase, TOpt>,
        cc_mqttsn::message::Willmsgreq<TBase, TOpt>,
        cc_mqttsn::message::Register<TBase, TOpt>,
        cc_mqttsn::message::Regack<TBase, TOpt>,
        cc_mqttsn::message::Publish<TBase, TOpt>,
        cc_mqttsn::message::Puback<TBase, TOpt>,
        cc_mqttsn::message::Pubcomp<TBase, TOpt>,
        cc_mqttsn::message::Pubrec<TBase, TOpt>,
        cc_mqttsn::message::Pubrel<TBase, TOpt>,
        cc_mqttsn::message::Suback<TBase, TOpt>,
        cc_mqttsn::message::Unsuback<TBase, TOpt>,
        cc_mqttsn::message::Pingreq<TBase, TOpt>,
        cc_mqttsn::message::Pingresp<TBase, TOpt>,
        cc_mqttsn::message::Disconnect<TBase, TOpt>,
        cc_mqttsn::message::Willtopicresp<TBase, TOpt>,
        cc_mqttsn::message::Willmsgresp<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_mqttsn

/// @brief Create type aliases for the client input messages of the protocol.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
/// @param opts_ Type of the used protocol definition options.
#define CC_MQTTSN_ALIASES_FOR_CLIENT_INPUT_MESSAGES(prefix_, suffix_, interface_, opts_) \
    using prefix_ ## Advertise ## suffix_ = cc_mqttsn::message::Advertise<interface_, opts_>; \
    using prefix_ ## Gwinfo ## suffix_ = cc_mqttsn::message::Gwinfo<interface_, opts_>; \
    using prefix_ ## Connack ## suffix_ = cc_mqttsn::message::Connack<interface_, opts_>; \
    using prefix_ ## Willtopicreq ## suffix_ = cc_mqttsn::message::Willtopicreq<interface_, opts_>; \
    using prefix_ ## Willmsgreq ## suffix_ = cc_mqttsn::message::Willmsgreq<interface_, opts_>; \
    using prefix_ ## Register ## suffix_ = cc_mqttsn::message::Register<interface_, opts_>; \
    using prefix_ ## Regack ## suffix_ = cc_mqttsn::message::Regack<interface_, opts_>; \
    using prefix_ ## Publish ## suffix_ = cc_mqttsn::message::Publish<interface_, opts_>; \
    using prefix_ ## Puback ## suffix_ = cc_mqttsn::message::Puback<interface_, opts_>; \
    using prefix_ ## Pubcomp ## suffix_ = cc_mqttsn::message::Pubcomp<interface_, opts_>; \
    using prefix_ ## Pubrec ## suffix_ = cc_mqttsn::message::Pubrec<interface_, opts_>; \
    using prefix_ ## Pubrel ## suffix_ = cc_mqttsn::message::Pubrel<interface_, opts_>; \
    using prefix_ ## Suback ## suffix_ = cc_mqttsn::message::Suback<interface_, opts_>; \
    using prefix_ ## Unsuback ## suffix_ = cc_mqttsn::message::Unsuback<interface_, opts_>; \
    using prefix_ ## Pingreq ## suffix_ = cc_mqttsn::message::Pingreq<interface_, opts_>; \
    using prefix_ ## Pingresp ## suffix_ = cc_mqttsn::message::Pingresp<interface_, opts_>; \
    using prefix_ ## Disconnect ## suffix_ = cc_mqttsn::message::Disconnect<interface_, opts_>; \
    using prefix_ ## Willtopicresp ## suffix_ = cc_mqttsn::message::Willtopicresp<interface_, opts_>; \
    using prefix_ ## Willmsgresp ## suffix_ = cc_mqttsn::message::Willmsgresp<interface_, opts_>;

/// @brief Create type aliases for the client input messages of the protocol using default options.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
#define CC_MQTTSN_ALIASES_FOR_CLIENT_INPUT_MESSAGES_DEFAULT_OPTIONS(prefix_, suffix_, interface_) \
    CC_MQTTSN_ALIASES_FOR_CLIENT_INPUT_MESSAGES(prefix_, suffix_, interface_, cc_mqttsn::options::DefaultOptions)
