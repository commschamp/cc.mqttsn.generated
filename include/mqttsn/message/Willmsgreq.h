/// @file
/// @brief Contains definition of <b>"WILLMSGREQ"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Willmsgreq.
/// @tparam TOpt Extra options
/// @see @ref Willmsgreq
/// @headerfile "mqttsn/message/Willmsgreq.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct WillmsgreqFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"WILLMSGREQ"</b> message class.
/// @details
///     See @ref WillmsgreqFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Willmsgreq.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Willmsgreq : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Willmsgreq,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Willmsgreq>,
        comms::option::FieldsImpl<typename WillmsgreqFields<TOpt>::All>,
        comms::option::MsgType<Willmsgreq<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Willmsgreq,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Willmsgreq>,
            comms::option::FieldsImpl<typename WillmsgreqFields<TOpt>::All>,
            comms::option::MsgType<Willmsgreq<TMsgBase, TOpt> >,
            comms::option::HasName
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
        return "WILLMSGREQ";
    }
    
    
};

} // namespace message

} // namespace mqttsn


