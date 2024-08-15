// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains definition of the ProtServerInputMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_mqttsn/message/Connect.h"
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
#include "cc_mqttsn/message/Searchgw.h"
#include "cc_mqttsn/message/Subscribe.h"
#include "cc_mqttsn/message/Unsubscribe.h"
#include "cc_mqttsn/message/Willmsg.h"
#include "cc_mqttsn/message/Willmsgupd.h"
#include "cc_mqttsn/message/Willtopic.h"
#include "cc_mqttsn/message/Willtopicupd.h"
#include "cc_mqttsn/options/DefaultOptions.h"

namespace cc_mqttsn
{

namespace input
{

/// @brief Server input Prot platform messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
using ProtServerInputMessages =
    std::tuple<
        cc_mqttsn::message::Searchgw<TBase, TOpt>,
        cc_mqttsn::message::Gwinfo<TBase, TOpt>,
        cc_mqttsn::message::Connect<TBase, TOpt>,
        cc_mqttsn::message::Willtopic<TBase, TOpt>,
        cc_mqttsn::message::Willmsg<TBase, TOpt>,
        cc_mqttsn::message::Register<TBase, TOpt>,
        cc_mqttsn::message::Regack<TBase, TOpt>,
        cc_mqttsn::message::Publish<TBase, TOpt>,
        cc_mqttsn::message::Puback<TBase, TOpt>,
        cc_mqttsn::message::Pubcomp<TBase, TOpt>,
        cc_mqttsn::message::Pubrec<TBase, TOpt>,
        cc_mqttsn::message::Pubrel<TBase, TOpt>,
        cc_mqttsn::message::Subscribe<TBase, TOpt>,
        cc_mqttsn::message::Unsubscribe<TBase, TOpt>,
        cc_mqttsn::message::Pingreq<TBase, TOpt>,
        cc_mqttsn::message::Pingresp<TBase, TOpt>,
        cc_mqttsn::message::Disconnect<TBase, TOpt>,
        cc_mqttsn::message::Willtopicupd<TBase, TOpt>,
        cc_mqttsn::message::Willmsgupd<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_mqttsn

/// @brief Create type aliases for the server input prot platform messages of the protocol.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
/// @param opts_ Type of the used protocol definition options.
#define CC_MQTTSN_ALIASES_FOR_PROT_SERVER_INPUT_MESSAGES(prefix_, suffix_, interface_, opts_) \
    using prefix_ ## Searchgw ## suffix_ = cc_mqttsn::message::Searchgw<interface_, opts_>; \
    using prefix_ ## Gwinfo ## suffix_ = cc_mqttsn::message::Gwinfo<interface_, opts_>; \
    using prefix_ ## Connect ## suffix_ = cc_mqttsn::message::Connect<interface_, opts_>; \
    using prefix_ ## Willtopic ## suffix_ = cc_mqttsn::message::Willtopic<interface_, opts_>; \
    using prefix_ ## Willmsg ## suffix_ = cc_mqttsn::message::Willmsg<interface_, opts_>; \
    using prefix_ ## Register ## suffix_ = cc_mqttsn::message::Register<interface_, opts_>; \
    using prefix_ ## Regack ## suffix_ = cc_mqttsn::message::Regack<interface_, opts_>; \
    using prefix_ ## Publish ## suffix_ = cc_mqttsn::message::Publish<interface_, opts_>; \
    using prefix_ ## Puback ## suffix_ = cc_mqttsn::message::Puback<interface_, opts_>; \
    using prefix_ ## Pubcomp ## suffix_ = cc_mqttsn::message::Pubcomp<interface_, opts_>; \
    using prefix_ ## Pubrec ## suffix_ = cc_mqttsn::message::Pubrec<interface_, opts_>; \
    using prefix_ ## Pubrel ## suffix_ = cc_mqttsn::message::Pubrel<interface_, opts_>; \
    using prefix_ ## Subscribe ## suffix_ = cc_mqttsn::message::Subscribe<interface_, opts_>; \
    using prefix_ ## Unsubscribe ## suffix_ = cc_mqttsn::message::Unsubscribe<interface_, opts_>; \
    using prefix_ ## Pingreq ## suffix_ = cc_mqttsn::message::Pingreq<interface_, opts_>; \
    using prefix_ ## Pingresp ## suffix_ = cc_mqttsn::message::Pingresp<interface_, opts_>; \
    using prefix_ ## Disconnect ## suffix_ = cc_mqttsn::message::Disconnect<interface_, opts_>; \
    using prefix_ ## Willtopicupd ## suffix_ = cc_mqttsn::message::Willtopicupd<interface_, opts_>; \
    using prefix_ ## Willmsgupd ## suffix_ = cc_mqttsn::message::Willmsgupd<interface_, opts_>;

/// @brief Create type aliases for the server input prot platform messages of the protocol using default options.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
#define CC_MQTTSN_ALIASES_FOR_PROT_SERVER_INPUT_MESSAGES_DEFAULT_OPTIONS(prefix_, suffix_, interface_) \
    CC_MQTTSN_ALIASES_FOR_PROT_SERVER_INPUT_MESSAGES(prefix_, suffix_, interface_, cc_mqttsn::options::DefaultOptions)