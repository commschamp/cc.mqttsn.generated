/// @file
/// @brief Contains definition of <b>"WILLTOPICUPD"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/WillTopic.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Willtopicupd.
/// @tparam TOpt Extra options
/// @see @ref Willtopicupd
/// @headerfile "mqttsn/message/Willtopicupd.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct WilltopicupdFields
{
    /// @brief Definition of <b>"WillTopic"</b> field.
    using WillTopic =
        mqttsn::field::WillTopic<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        WillTopic
    >;
};

/// @brief Definition of <b>"WILLTOPICUPD"</b> message class.
/// @details
///     See @ref WilltopicupdFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Willtopicupd.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Willtopicupd : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Willtopicupd,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Willtopicupd>,
        comms::option::FieldsImpl<typename WilltopicupdFields<TOpt>::All>,
        comms::option::MsgType<Willtopicupd<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Willtopicupd,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Willtopicupd>,
            comms::option::FieldsImpl<typename WilltopicupdFields<TOpt>::All>,
            comms::option::MsgType<Willtopicupd<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_willTopic() for @ref WilltopicupdFields::WillTopic field.
    COMMS_MSG_FIELDS_ACCESS(
        willTopic
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "WILLTOPICUPD";
    }
    
    
};

} // namespace message

} // namespace mqttsn


