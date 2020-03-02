// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains definition of <b>"WILLTOPICRESP"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/ReturnCode.h"
#include "mqttsn/message/WilltopicrespCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Willtopicresp.
/// @tparam TOpt Extra options
/// @see @ref Willtopicresp
/// @headerfile "mqttsn/message/Willtopicresp.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct WilltopicrespFields
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

/// @brief Definition of <b>"WILLTOPICRESP"</b> message class.
/// @details
///     See @ref WilltopicrespFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Willtopicresp.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Willtopicresp : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Willtopicresp,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willtopicresp>,
        comms::option::def::FieldsImpl<typename WilltopicrespFields<TOpt>::All>,
        comms::option::def::MsgType<Willtopicresp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Willtopicresp,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willtopicresp>,
            comms::option::def::FieldsImpl<typename WilltopicrespFields<TOpt>::All>,
            comms::option::def::MsgType<Willtopicresp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_returnCode type and @b field_returnCode() fuction
    ///         for @ref WilltopicrespFields::ReturnCode field.
    COMMS_MSG_FIELDS_NAMES(
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
        return mqttsn::message::WilltopicrespCommon::name();
    }
    
    
};

} // namespace message

} // namespace mqttsn


