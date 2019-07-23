/// @file
/// @brief Contains definition of <b>"WILLMSG"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/WillMsg.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Willmsg.
/// @tparam TOpt Extra options
/// @see @ref Willmsg
/// @headerfile "mqttsn/message/Willmsg.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct WillmsgFields
{
    /// @brief Definition of <b>"WillMsg"</b> field.
    using WillMsg =
        mqttsn::field::WillMsg<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        WillMsg
    >;
};

/// @brief Definition of <b>"WILLMSG"</b> message class.
/// @details
///     See @ref WillmsgFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Willmsg.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Willmsg : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Willmsg,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willmsg>,
        comms::option::def::FieldsImpl<typename WillmsgFields<TOpt>::All>,
        comms::option::def::MsgType<Willmsg<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Willmsg,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willmsg>,
            comms::option::def::FieldsImpl<typename WillmsgFields<TOpt>::All>,
            comms::option::def::MsgType<Willmsg<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_willMsg() for @ref WillmsgFields::WillMsg field.
    COMMS_MSG_FIELDS_ACCESS(
        willMsg
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "WILLMSG";
    }
    
    
};

} // namespace message

} // namespace mqttsn


