/// @file
/// @brief Contains definition of <b>"CONNACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/ReturnCode.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Connack.
/// @tparam TOpt Extra options
/// @see @ref Connack
/// @headerfile "mqttsn/message/Connack.h"
template <typename TOpt = mqttsn::DefaultOptions>
struct ConnackFields
{
    /// @brief Definition of <b>"ReturnCode"</b> field.
    using ReturnCode =
        mqttsn::field::ReturnCode<
           TOpt
       >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ReturnCode
    >;
};

/// @brief Definition of <b>"CONNACK"</b> message class.
/// @details
///     See @ref ConnackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Connack.h"
template <typename TMsgBase, typename TOpt = mqttsn::DefaultOptions>
class Connack : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Connack,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Connack>,
        comms::option::FieldsImpl<typename ConnackFields<TOpt>::All>,
        comms::option::MsgType<Connack<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Connack,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Connack>,
            comms::option::FieldsImpl<typename ConnackFields<TOpt>::All>,
            comms::option::MsgType<Connack<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_returnCode() for @ref ConnackFields::ReturnCode field.
    COMMS_MSG_FIELDS_ACCESS(
        returnCode
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CONNACK";
    }
    
    
};

} // namespace message

} // namespace mqttsn


