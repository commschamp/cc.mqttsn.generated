// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains definition of <b>"Message"</b> interface class.

#pragma once

#include "cc_mqttsn/MsgId.h"
#include "comms/Message.h"
#include "comms/options.h"

namespace cc_mqttsn
{

/// @brief Definition of <b>"Message"</b> common interface class.
/// @tparam TOpt Interface definition options
/// @headerfile cc_mqttsn/Message.h
template <typename... TOpt>
using Message =
    comms::Message<
        TOpt...,
        comms::option::def::BigEndian,
        comms::option::def::MsgIdType<cc_mqttsn::MsgId>
    >;

} // namespace cc_mqttsn
