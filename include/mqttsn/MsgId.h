/// @file
/// @brief Contains definition of message ids enumeration.

#pragma once

#include <cstdint>

namespace mqttsn
{

/// @brief Message ids enumeration.
enum MsgId : std::uint8_t
{
    MsgId_Advertise = 0x00U, ///< message id <b>ADVERTISE</b>.
    MsgId_Searchgw = 0x01U, ///< message id <b>SEARCHGW</b>.
    MsgId_Gwinfo = 0x02U, ///< message id <b>GWINFO</b>.
    MsgId_Connect = 0x04U, ///< message id <b>CONNECT</b>.
    MsgId_Connack = 0x05U, ///< message id <b>CONNACK</b>.
    MsgId_Willtopicreq = 0x06U, ///< message id <b>WILLTOPICREQ</b>.
    MsgId_Willtopic = 0x07U, ///< message id <b>WILLTOPIC</b>.
    MsgId_Willmsgreq = 0x08U, ///< message id <b>WILLMSGREQ</b>.
    MsgId_Willmsg = 0x09U, ///< message id <b>WILLMSG</b>.
    MsgId_Register = 0x0AU, ///< message id <b>REGISTER</b>.
    MsgId_Regack = 0x0BU, ///< message id <b>REGACK</b>.
    MsgId_Publish = 0x0CU, ///< message id <b>PUBLISH</b>.
    MsgId_Puback = 0x0DU, ///< message id <b>PUBACK</b>.
    MsgId_Pubcomp = 0x0EU, ///< message id <b>PUBCOMP</b>.
    MsgId_Pubrec = 0x0FU, ///< message id <b>PUBREC</b>.
    MsgId_Pubrel = 0x10U, ///< message id <b>PUBREL</b>.
    MsgId_Subscribe = 0x12U, ///< message id <b>SUBSCRIBE</b>.
    MsgId_Suback = 0x13U, ///< message id <b>SUBACK</b>.
    MsgId_Unsubscribe = 0x14U, ///< message id <b>UNSUBSCRIBE</b>.
    MsgId_Unsuback = 0x15U, ///< message id <b>UNSUBACK</b>.
    MsgId_Pingreq = 0x16U, ///< message id <b>PINGREQ</b>.
    MsgId_Pingresp = 0x17U, ///< message id <b>PINGRESP</b>.
    MsgId_Disconnect = 0x18U, ///< message id <b>DISCONNECT</b>.
    MsgId_Willtopicupd = 0x1AU, ///< message id <b>WILLTOPICUPD</b>.
    MsgId_Willtopicresp = 0x1BU, ///< message id <b>WILLTOPICRESP</b>.
    MsgId_Willmsgupd = 0x1CU, ///< message id <b>WILLMSGUPD</b>.
    MsgId_Willmsgresp = 0x1DU, ///< message id <b>WILLMSGRESP</b>.
    
};

} // namespace mqttsn


