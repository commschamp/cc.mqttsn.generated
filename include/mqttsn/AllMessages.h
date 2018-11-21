/// @file
/// @brief Contains definition of all messages bundle.

#pragma once

#include <tuple>
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/message/Advertise.h"
#include "mqttsn/message/Connack.h"
#include "mqttsn/message/Connect.h"
#include "mqttsn/message/Disconnect.h"
#include "mqttsn/message/Gwinfo.h"
#include "mqttsn/message/Pingreq.h"
#include "mqttsn/message/Pingresp.h"
#include "mqttsn/message/Puback.h"
#include "mqttsn/message/Pubcomp.h"
#include "mqttsn/message/Publish.h"
#include "mqttsn/message/Pubrec.h"
#include "mqttsn/message/Pubrel.h"
#include "mqttsn/message/Regack.h"
#include "mqttsn/message/Register.h"
#include "mqttsn/message/Searchgw.h"
#include "mqttsn/message/Suback.h"
#include "mqttsn/message/Subscribe.h"
#include "mqttsn/message/Unsuback.h"
#include "mqttsn/message/Unsubscribe.h"
#include "mqttsn/message/Willmsg.h"
#include "mqttsn/message/Willmsgreq.h"
#include "mqttsn/message/Willmsgresp.h"
#include "mqttsn/message/Willmsgupd.h"
#include "mqttsn/message/Willtopic.h"
#include "mqttsn/message/Willtopicreq.h"
#include "mqttsn/message/Willtopicresp.h"
#include "mqttsn/message/Willtopicupd.h"

namespace mqttsn
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = mqttsn::DefaultOptions>
using AllMessages =
    std::tuple<
        mqttsn::message::Advertise<TBase, TOpt>,
        mqttsn::message::Searchgw<TBase, TOpt>,
        mqttsn::message::Gwinfo<TBase, TOpt>,
        mqttsn::message::Connect<TBase, TOpt>,
        mqttsn::message::Connack<TBase, TOpt>,
        mqttsn::message::Willtopicreq<TBase, TOpt>,
        mqttsn::message::Willtopic<TBase, TOpt>,
        mqttsn::message::Willmsgreq<TBase, TOpt>,
        mqttsn::message::Willmsg<TBase, TOpt>,
        mqttsn::message::Register<TBase, TOpt>,
        mqttsn::message::Regack<TBase, TOpt>,
        mqttsn::message::Publish<TBase, TOpt>,
        mqttsn::message::Puback<TBase, TOpt>,
        mqttsn::message::Pubcomp<TBase, TOpt>,
        mqttsn::message::Pubrec<TBase, TOpt>,
        mqttsn::message::Pubrel<TBase, TOpt>,
        mqttsn::message::Subscribe<TBase, TOpt>,
        mqttsn::message::Suback<TBase, TOpt>,
        mqttsn::message::Unsubscribe<TBase, TOpt>,
        mqttsn::message::Unsuback<TBase, TOpt>,
        mqttsn::message::Pingreq<TBase, TOpt>,
        mqttsn::message::Pingresp<TBase, TOpt>,
        mqttsn::message::Disconnect<TBase, TOpt>,
        mqttsn::message::Willtopicupd<TBase, TOpt>,
        mqttsn::message::Willtopicresp<TBase, TOpt>,
        mqttsn::message::Willmsgupd<TBase, TOpt>,
        mqttsn::message::Willmsgresp<TBase, TOpt>
    >;

} // namespace mqttsn


