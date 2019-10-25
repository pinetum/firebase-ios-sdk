/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 */

#ifndef PB_GOOGLE_PROTOBUF_WRAPPERS_NANOPB_H_INCLUDED
#define PB_GOOGLE_PROTOBUF_WRAPPERS_NANOPB_H_INCLUDED
#include <pb.h>

#include "absl/strings/str_cat.h"
#include "nanopb_pretty_printers.h"

namespace firebase {
namespace firestore {
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Struct definitions */
typedef struct _google_protobuf_BytesValue {
    pb_bytes_array_t *value;

    static const char* Name() {
        return "BytesValue";
    }

    std::string ToString(int indent = 0) const {
        std::string result{"{\n"};

        if (value != nullptr) result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += '}';
        return result;
    }
/* @@protoc_insertion_point(struct:google_protobuf_BytesValue) */
} google_protobuf_BytesValue;

typedef struct _google_protobuf_StringValue {
    pb_bytes_array_t *value;

    static const char* Name() {
        return "StringValue";
    }

    std::string ToString(int indent = 0) const {
        std::string result{"{\n"};

        if (value != nullptr) result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += '}';
        return result;
    }
/* @@protoc_insertion_point(struct:google_protobuf_StringValue) */
} google_protobuf_StringValue;

typedef struct _google_protobuf_BoolValue {
    bool value;

    static const char* Name() {
        return "BoolValue";
    }

    std::string ToString(int indent = 0) const {
        std::string result{"{\n"};

        if (value != false) result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += '}';
        return result;
    }
/* @@protoc_insertion_point(struct:google_protobuf_BoolValue) */
} google_protobuf_BoolValue;

typedef struct _google_protobuf_DoubleValue {
    double value;

    static const char* Name() {
        return "DoubleValue";
    }

    std::string ToString(int indent = 0) const {
        std::string result{"{\n"};

        if (value != 0) result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += '}';
        return result;
    }
/* @@protoc_insertion_point(struct:google_protobuf_DoubleValue) */
} google_protobuf_DoubleValue;

typedef struct _google_protobuf_FloatValue {
    float value;

    static const char* Name() {
        return "FloatValue";
    }

    std::string ToString(int indent = 0) const {
        std::string result{"{\n"};

        if (value != 0) result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += '}';
        return result;
    }
/* @@protoc_insertion_point(struct:google_protobuf_FloatValue) */
} google_protobuf_FloatValue;

typedef struct _google_protobuf_Int32Value {
    int32_t value;

    static const char* Name() {
        return "Int32Value";
    }

    std::string ToString(int indent = 0) const {
        std::string result{"{\n"};

        if (value != 0) result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += '}';
        return result;
    }
/* @@protoc_insertion_point(struct:google_protobuf_Int32Value) */
} google_protobuf_Int32Value;

typedef struct _google_protobuf_Int64Value {
    int64_t value;

    static const char* Name() {
        return "Int64Value";
    }

    std::string ToString(int indent = 0) const {
        std::string result{"{\n"};

        if (value != 0) result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += '}';
        return result;
    }
/* @@protoc_insertion_point(struct:google_protobuf_Int64Value) */
} google_protobuf_Int64Value;

typedef struct _google_protobuf_UInt32Value {
    uint32_t value;

    static const char* Name() {
        return "UInt32Value";
    }

    std::string ToString(int indent = 0) const {
        std::string result{"{\n"};

        if (value != 0) result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += '}';
        return result;
    }
/* @@protoc_insertion_point(struct:google_protobuf_UInt32Value) */
} google_protobuf_UInt32Value;

typedef struct _google_protobuf_UInt64Value {
    uint64_t value;

    static const char* Name() {
        return "UInt64Value";
    }

    std::string ToString(int indent = 0) const {
        std::string result{"{\n"};

        if (value != 0) result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += '}';
        return result;
    }
/* @@protoc_insertion_point(struct:google_protobuf_UInt64Value) */
} google_protobuf_UInt64Value;

/* Default values for struct fields */

/* Initializer values for message structs */
#define google_protobuf_DoubleValue_init_default {0}
#define google_protobuf_FloatValue_init_default  {0}
#define google_protobuf_Int64Value_init_default  {0}
#define google_protobuf_UInt64Value_init_default {0}
#define google_protobuf_Int32Value_init_default  {0}
#define google_protobuf_UInt32Value_init_default {0}
#define google_protobuf_BoolValue_init_default   {0}
#define google_protobuf_StringValue_init_default {NULL}
#define google_protobuf_BytesValue_init_default  {NULL}
#define google_protobuf_DoubleValue_init_zero    {0}
#define google_protobuf_FloatValue_init_zero     {0}
#define google_protobuf_Int64Value_init_zero     {0}
#define google_protobuf_UInt64Value_init_zero    {0}
#define google_protobuf_Int32Value_init_zero     {0}
#define google_protobuf_UInt32Value_init_zero    {0}
#define google_protobuf_BoolValue_init_zero      {0}
#define google_protobuf_StringValue_init_zero    {NULL}
#define google_protobuf_BytesValue_init_zero     {NULL}

/* Field tags (for use in manual encoding/decoding) */
#define google_protobuf_BytesValue_value_tag     1
#define google_protobuf_StringValue_value_tag    1
#define google_protobuf_BoolValue_value_tag      1
#define google_protobuf_DoubleValue_value_tag    1
#define google_protobuf_FloatValue_value_tag     1
#define google_protobuf_Int32Value_value_tag     1
#define google_protobuf_Int64Value_value_tag     1
#define google_protobuf_UInt32Value_value_tag    1
#define google_protobuf_UInt64Value_value_tag    1

/* Struct field encoding specification for nanopb */
extern const pb_field_t google_protobuf_DoubleValue_fields[2];
extern const pb_field_t google_protobuf_FloatValue_fields[2];
extern const pb_field_t google_protobuf_Int64Value_fields[2];
extern const pb_field_t google_protobuf_UInt64Value_fields[2];
extern const pb_field_t google_protobuf_Int32Value_fields[2];
extern const pb_field_t google_protobuf_UInt32Value_fields[2];
extern const pb_field_t google_protobuf_BoolValue_fields[2];
extern const pb_field_t google_protobuf_StringValue_fields[2];
extern const pb_field_t google_protobuf_BytesValue_fields[2];

/* Maximum encoded size of messages (where known) */
#define google_protobuf_DoubleValue_size         9
#define google_protobuf_FloatValue_size          5
#define google_protobuf_Int64Value_size          11
#define google_protobuf_UInt64Value_size         11
#define google_protobuf_Int32Value_size          11
#define google_protobuf_UInt32Value_size         6
#define google_protobuf_BoolValue_size           2
/* google_protobuf_StringValue_size depends on runtime parameters */
/* google_protobuf_BytesValue_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define WRAPPERS_MESSAGES \


#endif


}  // namespace firestore
}  // namespace firebase
/* @@protoc_insertion_point(eof) */

#endif
