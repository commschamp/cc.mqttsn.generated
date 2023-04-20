// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains definition of <b>"WILLMSGUPD"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/WillMsg.h"
#include "cc_mqttsn/message/WillmsgupdCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Willmsgupd.
/// @tparam TOpt Extra options
/// @see @ref Willmsgupd
/// @headerfile cc_mqttsn/message/Willmsgupd.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct WillmsgupdFields
{
    /// @brief Definition of <b>"WillMsg"</b> field.
    using WillMsg =
        cc_mqttsn::field::WillMsg<
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
/// @headerfile cc_mqttsn/message/Willmsgupd.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Willmsgupd : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Willmsgupd,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Willmsgupd>,
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
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Willmsgupd>,
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
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_willMsg index, @b Field_willMsg type and @b field_willMsg() access fuction
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
        return cc_mqttsn::message::WillmsgupdCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn
