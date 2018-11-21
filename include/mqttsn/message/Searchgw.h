/// @file
/// @brief Contains definition of <b>"SEARCHGW"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/DefaultOptions.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/Radius.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Searchgw.
/// @tparam TOpt Extra options
/// @see @ref Searchgw
/// @headerfile "mqttsn/message/Searchgw.h"
template <typename TOpt = mqttsn::DefaultOptions>
struct SearchgwFields
{
    /// @brief Definition of <b>"Radius"</b> field.
    using Radius =
        mqttsn::field::Radius<
           TOpt
       >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Radius
    >;
};

/// @brief Definition of <b>"SEARCHGW"</b> message class.
/// @details
///     See @ref SearchgwFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Searchgw.h"
template <typename TMsgBase, typename TOpt = mqttsn::DefaultOptions>
class Searchgw : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Searchgw,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Searchgw>,
        comms::option::FieldsImpl<typename SearchgwFields<TOpt>::All>,
        comms::option::MsgType<Searchgw<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Searchgw,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Searchgw>,
            comms::option::FieldsImpl<typename SearchgwFields<TOpt>::All>,
            comms::option::MsgType<Searchgw<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_radius() for @ref SearchgwFields::Radius field.
    COMMS_MSG_FIELDS_ACCESS(
        radius
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "SEARCHGW";
    }
    
    
};

} // namespace message

} // namespace mqttsn


