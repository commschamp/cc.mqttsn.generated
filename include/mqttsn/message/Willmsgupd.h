// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"WILLMSGUPD"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/WillMsg.h"
#include "mqttsn/message/WillmsgupdCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Willmsgupd.
/// @tparam TOpt Extra options
/// @see @ref Willmsgupd
/// @headerfile "mqttsn/message/Willmsgupd.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct WillmsgupdFields
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

/// @brief Definition of <b>"WILLMSGUPD"</b> message class.
/// @details
///     See @ref WillmsgupdFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Willmsgupd.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Willmsgupd : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Willmsgupd,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willmsgupd>,
        comms::option::def::FieldsImpl<typename WillmsgupdFields<TOpt>::All>,
        comms::option::def::MsgType<Willmsgupd<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Willmsgupd,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willmsgupd>,
            comms::option::def::FieldsImpl<typename WillmsgupdFields<TOpt>::All>,
            comms::option::def::MsgType<Willmsgupd<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_willMsg type and @b field_willMsg() access fuction
    ///         for @ref WillmsgupdFields::WillMsg field.
    COMMS_MSG_FIELDS_NAMES(
        willMsg
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return mqttsn::message::WillmsgupdCommon::name();
    }
    
    
};

} // namespace message

} // namespace mqttsn


