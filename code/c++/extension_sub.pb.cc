// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: extension_sub.proto

#include "extension_sub.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace example {
}  // namespace example
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_extension_5fsub_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_extension_5fsub_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_extension_5fsub_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_extension_5fsub_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_extension_5fsub_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023extension_sub.proto\022\007example\032\024extensio"
  "n_main.proto:\031\n\003bar\022\014.example.Foo\030~ \001(\005"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_extension_5fsub_2eproto_deps[1] = {
  &::descriptor_table_extension_5fmain_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_extension_5fsub_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_extension_5fsub_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_extension_5fsub_2eproto = {
  false, false, descriptor_table_protodef_extension_5fsub_2eproto, "extension_sub.proto", 79,
  &descriptor_table_extension_5fsub_2eproto_once, descriptor_table_extension_5fsub_2eproto_sccs, descriptor_table_extension_5fsub_2eproto_deps, 0, 1,
  schemas, file_default_instances, TableStruct_extension_5fsub_2eproto::offsets,
  file_level_metadata_extension_5fsub_2eproto, 0, file_level_enum_descriptors_extension_5fsub_2eproto, file_level_service_descriptors_extension_5fsub_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_extension_5fsub_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_extension_5fsub_2eproto)), true);
namespace example {
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::example::Foo,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< ::PROTOBUF_NAMESPACE_ID::int32 >, 5, false >
  bar(kBarFieldNumber, 0);

// @@protoc_insertion_point(namespace_scope)
}  // namespace example
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
