// Generated by commsdsl2comms v6.2.4

/// @file
/// @brief Contains definition of base class of all the fields.

#pragma once

#include "comms/Field.h"
#include "comms/options.h"
#include "cc_mqttsn/Version.h"

namespace cc_mqttsn
{

namespace field
{

/// @brief Common base class for all the fields.
/// @tparam TOpt Extra options.
template <typename... TOpt>
using FieldBase =
    comms::Field<
        TOpt...,
        comms::option::def::BigEndian
    >;

} // namespace field

} // namespace cc_mqttsn
