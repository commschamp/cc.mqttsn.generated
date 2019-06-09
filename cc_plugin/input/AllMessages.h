#pragma once

#include <tuple>
#include "cc_plugin/message/Advertise.h"
#include "cc_plugin/message/Connack.h"
#include "cc_plugin/message/Connect.h"
#include "cc_plugin/message/Disconnect.h"
#include "cc_plugin/message/Gwinfo.h"
#include "cc_plugin/message/Pingreq.h"
#include "cc_plugin/message/Pingresp.h"
#include "cc_plugin/message/Puback.h"
#include "cc_plugin/message/Pubcomp.h"
#include "cc_plugin/message/Publish.h"
#include "cc_plugin/message/Pubrec.h"
#include "cc_plugin/message/Pubrel.h"
#include "cc_plugin/message/Regack.h"
#include "cc_plugin/message/Register.h"
#include "cc_plugin/message/Searchgw.h"
#include "cc_plugin/message/Suback.h"
#include "cc_plugin/message/Subscribe.h"
#include "cc_plugin/message/Unsuback.h"
#include "cc_plugin/message/Unsubscribe.h"
#include "cc_plugin/message/Willmsg.h"
#include "cc_plugin/message/Willmsgreq.h"
#include "cc_plugin/message/Willmsgresp.h"
#include "cc_plugin/message/Willmsgupd.h"
#include "cc_plugin/message/Willtopic.h"
#include "cc_plugin/message/Willtopicreq.h"
#include "cc_plugin/message/Willtopicresp.h"
#include "cc_plugin/message/Willtopicupd.h"

namespace mqttsn
{

namespace cc_plugin
{

namespace input
{

using AllMessages =
    std::tuple<
        mqttsn::cc_plugin::message::Advertise,
        mqttsn::cc_plugin::message::Searchgw,
        mqttsn::cc_plugin::message::Gwinfo,
        mqttsn::cc_plugin::message::Connect,
        mqttsn::cc_plugin::message::Connack,
        mqttsn::cc_plugin::message::Willtopicreq,
        mqttsn::cc_plugin::message::Willtopic,
        mqttsn::cc_plugin::message::Willmsgreq,
        mqttsn::cc_plugin::message::Willmsg,
        mqttsn::cc_plugin::message::Register,
        mqttsn::cc_plugin::message::Regack,
        mqttsn::cc_plugin::message::Publish,
        mqttsn::cc_plugin::message::Puback,
        mqttsn::cc_plugin::message::Pubcomp,
        mqttsn::cc_plugin::message::Pubrec,
        mqttsn::cc_plugin::message::Pubrel,
        mqttsn::cc_plugin::message::Subscribe,
        mqttsn::cc_plugin::message::Suback,
        mqttsn::cc_plugin::message::Unsubscribe,
        mqttsn::cc_plugin::message::Unsuback,
        mqttsn::cc_plugin::message::Pingreq,
        mqttsn::cc_plugin::message::Pingresp,
        mqttsn::cc_plugin::message::Disconnect,
        mqttsn::cc_plugin::message::Willtopicupd,
        mqttsn::cc_plugin::message::Willtopicresp,
        mqttsn::cc_plugin::message::Willmsgupd,
        mqttsn::cc_plugin::message::Willmsgresp
    >;

} // namespace input

} // namespace cc_plugin

} // namespace mqttsn

