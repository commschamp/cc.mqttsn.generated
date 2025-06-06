// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqttsn::message::Fwd message and its fields.

#pragma once

#include "cc_mqttsn/field/CtrlCommon.h"
#include "cc_mqttsn/field/NodeIdCommon.h"

namespace cc_mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqttsn::message::Fwd message.
/// @see cc_mqttsn::message::FwdFields
struct FwdFieldsCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqttsn::message::FwdFields::Ctrl field.
    using CtrlMembersCommon = cc_mqttsn::field::CtrlMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::FwdFields::Ctrl field.
    using CtrlCommon = cc_mqttsn::field::CtrlCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqttsn::message::FwdFields::NodeId field.
    using NodeIdCommon = cc_mqttsn::field::NodeIdCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqttsn::message::Fwd message.
struct FwdCommon
{
    /// @brief Name of the @ref cc_mqttsn::message::Fwd message.
    static const char* name()
    {
        return "FWD";
    }
};

} // namespace message

} // namespace cc_mqttsn
