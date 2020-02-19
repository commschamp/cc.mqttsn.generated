// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains definition of <b>"PUBREL"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/MessageId.h"
#include "mqttsn/message/PubrelCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Pubrel.
/// @tparam TOpt Extra options
/// @see @ref Pubrel
/// @headerfile "mqttsn/message/Pubrel.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct PubrelFields
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

/// @brief Definition of <b>"PUBREL"</b> message class.
/// @details
///     See @ref PubrelFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Pubrel.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Pubrel : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Pubrel>,
        comms::option::def::FieldsImpl<typename PubrelFields<TOpt>::All>,
        comms::option::def::MsgType<Pubrel<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Pubrel>,
            comms::option::def::FieldsImpl<typename PubrelFields<TOpt>::All>,
            comms::option::def::MsgType<Pubrel<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_msgId type and @b field_msgId() fuction
    ///         for @ref PubrelFields::MsgId field.
    COMMS_MSG_FIELDS_NAMES(
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
        return mqttsn::message::PubrelCommon::name();
    }
    
    
};

} // namespace message

} // namespace mqttsn


