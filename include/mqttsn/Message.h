/// @file
/// @brief Contains definition of <b>"Message"</b> interface class.

#pragma once

#include "comms/Message.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"

namespace mqttsn
{

/// @brief Definition of <b>"Message"</b> common interface class.
/// @tparam TOpt Interface definition options
/// @headerfile "mqttsn/Message.h"
template <typename... TOpt>
using Message =
    comms::Message<
        TOpt...,
        comms::option::BigEndian,
        comms::option::MsgIdType<mqttsn::MsgId>
    >;

} // namespace mqttsn


