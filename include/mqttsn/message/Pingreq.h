/// @file
/// @brief Contains definition of <b>"PINGREQ"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/ClientId.h"
#include "mqttsn/field/FieldBase.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Pingreq.
/// @tparam TOpt Extra options
/// @see @ref Pingreq
/// @headerfile "mqttsn/message/Pingreq.h"
template <typename TOpt = mqttsn::DefaultOptions>
struct PingreqFields
{
    /// @brief Definition of <b>"ClientId"</b> field.
    using ClientId =
        mqttsn::field::ClientId<
           TOpt
       >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ClientId
    >;
};

/// @brief Definition of <b>"PINGREQ"</b> message class.
/// @details
///     See @ref PingreqFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Pingreq.h"
template <typename TMsgBase, typename TOpt = mqttsn::DefaultOptions>
class Pingreq : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Pingreq>,
        comms::option::FieldsImpl<typename PingreqFields<TOpt>::All>,
        comms::option::MsgType<Pingreq<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Pingreq>,
            comms::option::FieldsImpl<typename PingreqFields<TOpt>::All>,
            comms::option::MsgType<Pingreq<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_clientId() for @ref PingreqFields::ClientId field.
    COMMS_MSG_FIELDS_ACCESS(
        clientId
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "PINGREQ";
    }
    
    
};

} // namespace message

} // namespace mqttsn


