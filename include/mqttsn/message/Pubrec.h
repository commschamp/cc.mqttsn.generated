// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"PUBREC"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/MessageId.h"
#include "mqttsn/message/PubrecCommon.h"
#include "mqttsn/options/DefaultOptions.h"


namespace mqttsn
{

namespace message
{


/// @brief Fields of @ref Pubrec.
/// @tparam TOpt Extra options
/// @see @ref Pubrec
/// @headerfile mqttsn/message/Pubrec.h
template <typename TOpt = mqttsn::options::DefaultOptions>
struct PubrecFields
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

/// @brief Definition of <b>"PUBREC"</b> message class.
/// @details
///     See @ref PubrecFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile mqttsn/message/Pubrec.h
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Pubrec : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Pubrec>,
        comms::option::def::FieldsImpl<typename PubrecFields<TOpt>::All>,
        comms::option::def::MsgType<Pubrec<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Pubrec>,
            comms::option::def::FieldsImpl<typename PubrecFields<TOpt>::All>,
            comms::option::def::MsgType<Pubrec<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_msgId index, @b Field_msgId type and @b field_msgId() access fuction
    ///         for @ref PubrecFields::MsgId field.
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
        return mqttsn::message::PubrecCommon::name();
    }
    

};

} // namespace message

} // namespace mqttsn


