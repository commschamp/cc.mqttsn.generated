// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"ADVERTISE"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqttsn/MsgId.h"
#include "cc_mqttsn/field/Duration.h"
#include "cc_mqttsn/field/FieldBase.h"
#include "cc_mqttsn/field/GwId.h"
#include "cc_mqttsn/message/AdvertiseCommon.h"
#include "cc_mqttsn/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Fields of @ref Advertise.
/// @tparam TOpt Extra options
/// @see @ref Advertise
/// @headerfile cc_mqttsn/message/Advertise.h
template <typename TOpt = cc_mqttsn::options::DefaultOptions>
struct AdvertiseFields
{
    /// @brief Definition of <b>"GwId"</b> field.
    using GwId =
        cc_mqttsn::field::GwId<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"Duration"</b> field.
    using Duration =
        cc_mqttsn::field::Duration<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        GwId,
        Duration
    >;
};

/// @brief Definition of <b>"ADVERTISE"</b> message class.
/// @details
///     See @ref AdvertiseFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqttsn/message/Advertise.h
template <typename TMsgBase, typename TOpt = cc_mqttsn::options::DefaultOptions>
class Advertise : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Advertise,
        comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Advertise>,
        comms::option::def::FieldsImpl<typename AdvertiseFields<TOpt>::All>,
        comms::option::def::MsgType<Advertise<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Advertise,
            comms::option::def::StaticNumIdImpl<cc_mqttsn::MsgId_Advertise>,
            comms::option::def::FieldsImpl<typename AdvertiseFields<TOpt>::All>,
            comms::option::def::MsgType<Advertise<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_gwId index, @b Field_gwId type and @b field_gwId() access fuction
    ///         for @ref AdvertiseFields::GwId field.
    ///     @li @b FieldIdx_duration index, @b Field_duration type and @b field_duration() access fuction
    ///         for @ref AdvertiseFields::Duration field.
    COMMS_MSG_FIELDS_NAMES(
        gwId,
        duration
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 3U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 3U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqttsn::message::AdvertiseCommon::name();
    }
};

} // namespace message

} // namespace cc_mqttsn
