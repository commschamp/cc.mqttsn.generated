// Generated by commsdsl2comms v6.2.1

/// @file
/// @brief Contains definition of <b>"PINGRESP"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/message/PingrespCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Pingresp.
/// @tparam TOpt Extra options
/// @see @ref Pingresp
/// @headerfile cc_mqttsn/message/Pingresp.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct PingrespFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"PINGRESP"</b> message class.
/// @details
///     See @ref PingrespFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqttsn/message/Pingresp.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Pingresp : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Pingresp>,
        comms::option::def::FieldsImpl<typename PingrespFields<TOpt>::All>,
        comms::option::def::MsgType<Pingresp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Pingresp>,
            comms::option::def::FieldsImpl<typename PingrespFields<TOpt>::All>,
            comms::option::def::MsgType<Pingresp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 0U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqttsn::message::PingrespCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn
