// Generated by commsdsl2comms v5.1.2

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

/// @brief Messages of the protocol in ascending order.
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
