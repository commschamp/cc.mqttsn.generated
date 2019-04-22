/// @file
/// @brief Contains definition of <b>"UNSUBACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/MessageId.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Unsuback.
/// @tparam TOpt Extra options
/// @see @ref Unsuback
/// @headerfile "mqttsn/message/Unsuback.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct UnsubackFields
{
    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        mqttsn::field::MessageId<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MsgId
    >;
};

/// @brief Definition of <b>"UNSUBACK"</b> message class.
/// @details
///     See @ref UnsubackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Unsuback.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Unsuback : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Unsuback,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Unsuback>,
        comms::option::FieldsImpl<typename UnsubackFields<TOpt>::All>,
        comms::option::MsgType<Unsuback<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Unsuback,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Unsuback>,
            comms::option::FieldsImpl<typename UnsubackFields<TOpt>::All>,
            comms::option::MsgType<Unsuback<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_msgId() for @ref UnsubackFields::MsgId field.
    COMMS_MSG_FIELDS_ACCESS(
        msgId
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "UNSUBACK";
    }
    
    
};

} // namespace message

} // namespace mqttsn


