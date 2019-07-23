/// @file
/// @brief Contains definition of <b>"WILLTOPIC"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/Flags.h"
#include "mqttsn/field/WillTopic.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Willtopic.
/// @tparam TOpt Extra options
/// @see @ref Willtopic
/// @headerfile "mqttsn/message/Willtopic.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct WilltopicFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    using Flags =
        mqttsn::field::Flags<
            TOpt
        >;
    
    /// @brief Definition of <b>"WillTopic"</b> field.
    using WillTopic =
        mqttsn::field::WillTopic<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        WillTopic
    >;
};

/// @brief Definition of <b>"WILLTOPIC"</b> message class.
/// @details
///     See @ref WilltopicFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Willtopic.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Willtopic : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Willtopic,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willtopic>,
        comms::option::def::FieldsImpl<typename WilltopicFields<TOpt>::All>,
        comms::option::def::MsgType<Willtopic<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Willtopic,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willtopic>,
            comms::option::def::FieldsImpl<typename WilltopicFields<TOpt>::All>,
            comms::option::def::MsgType<Willtopic<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_flags() for @ref WilltopicFields::Flags field.
    ///     @li @b field_willTopic() for @ref WilltopicFields::WillTopic field.
    COMMS_MSG_FIELDS_ACCESS(
        flags,
        willTopic
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "WILLTOPIC";
    }
    
    
};

} // namespace message

} // namespace mqttsn


