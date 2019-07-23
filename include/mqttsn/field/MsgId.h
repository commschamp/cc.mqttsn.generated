/// @file
/// @brief Contains definition of <b>"MsgId"</b> field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"MsgId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
struct MsgId : public
    comms::field::EnumValue<
        mqttsn::field::FieldBase<>,
        mqttsn::MsgId,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 2>,
        comms::option::def::ValidNumValueRange<4, 16>,
        comms::option::def::ValidNumValueRange<18, 24>,
        comms::option::def::ValidNumValueRange<26, 29>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "MsgId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(mqttsn::MsgId val)
    {
        using NameInfo = std::pair<mqttsn::MsgId, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(mqttsn::MsgId_Advertise, "ADVERTISE"),
            std::make_pair(mqttsn::MsgId_Searchgw, "SEARCHGW"),
            std::make_pair(mqttsn::MsgId_Gwinfo, "GWINFO"),
            std::make_pair(mqttsn::MsgId_Connect, "CONNECT"),
            std::make_pair(mqttsn::MsgId_Connack, "CONNACK"),
            std::make_pair(mqttsn::MsgId_Willtopicreq, "WILLTOPICREQ"),
            std::make_pair(mqttsn::MsgId_Willtopic, "WILLTOPIC"),
            std::make_pair(mqttsn::MsgId_Willmsgreq, "WILLMSGREQ"),
            std::make_pair(mqttsn::MsgId_Willmsg, "WILLMSG"),
            std::make_pair(mqttsn::MsgId_Register, "REGISTER"),
            std::make_pair(mqttsn::MsgId_Regack, "REGACK"),
            std::make_pair(mqttsn::MsgId_Publish, "PUBLISH"),
            std::make_pair(mqttsn::MsgId_Puback, "PUBACK"),
            std::make_pair(mqttsn::MsgId_Pubcomp, "PUBCOMP"),
            std::make_pair(mqttsn::MsgId_Pubrec, "PUBREC"),
            std::make_pair(mqttsn::MsgId_Pubrel, "PUBREL"),
            std::make_pair(mqttsn::MsgId_Subscribe, "SUBSCRIBE"),
            std::make_pair(mqttsn::MsgId_Suback, "SUBACK"),
            std::make_pair(mqttsn::MsgId_Unsubscribe, "UNSUBSCRIBE"),
            std::make_pair(mqttsn::MsgId_Unsuback, "UNSUBACK"),
            std::make_pair(mqttsn::MsgId_Pingreq, "PINGREQ"),
            std::make_pair(mqttsn::MsgId_Pingresp, "fPINGRESP"),
            std::make_pair(mqttsn::MsgId_Disconnect, "DISCONNECT"),
            std::make_pair(mqttsn::MsgId_Willtopicupd, "WILLTOPICUPD"),
            std::make_pair(mqttsn::MsgId_Willtopicresp, "WILLTOPICRESP"),
            std::make_pair(mqttsn::MsgId_Willmsgupd, "WILLMSGUPD"),
            std::make_pair(mqttsn::MsgId_Willmsgresp, "WILLMSGRESP")
        };
        
        auto iter = std::lower_bound(
            std::begin(Map), std::end(Map), val,
            [](const NameInfo& info, mqttsn::MsgId v) -> bool
            {
                return info.first < v;
            });
        
        if ((iter == std::end(Map)) || (iter->first != val)) {
            return nullptr;
        }
        
        return iter->second;
    }
    
};

} // namespace field

} // namespace mqttsn


