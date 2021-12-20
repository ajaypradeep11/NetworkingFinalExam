// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageEncapsule.proto

#include "MessageEncapsule.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace protoAuth {
constexpr MessageEncapsule::MessageEncapsule(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , type_(0)
{}
struct MessageEncapsuleDefaultTypeInternal {
  constexpr MessageEncapsuleDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~MessageEncapsuleDefaultTypeInternal() {}
  union {
    MessageEncapsule _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT MessageEncapsuleDefaultTypeInternal _MessageEncapsule_default_instance_;
}  // namespace protoAuth
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_MessageEncapsule_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_MessageEncapsule_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_MessageEncapsule_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_MessageEncapsule_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::protoAuth::MessageEncapsule, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protoAuth::MessageEncapsule, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::protoAuth::MessageEncapsule, type_),
  PROTOBUF_FIELD_OFFSET(::protoAuth::MessageEncapsule, data_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::protoAuth::MessageEncapsule)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protoAuth::_MessageEncapsule_default_instance_),
};

const char descriptor_table_protodef_MessageEncapsule_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026MessageEncapsule.proto\022\tprotoAuth\"\202\001\n\020"
  "MessageEncapsule\0226\n\004type\030\001 \002(\0162(.protoAu"
  "th.MessageEncapsule.eMessageType\022\014\n\004data"
  "\030\002 \002(\t\"(\n\014eMessageType\022\013\n\007PLAYER1\020\000\022\013\n\007P"
  "LAYER2\020\001"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_MessageEncapsule_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MessageEncapsule_2eproto = {
  false, false, 168, descriptor_table_protodef_MessageEncapsule_2eproto, "MessageEncapsule.proto", 
  &descriptor_table_MessageEncapsule_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_MessageEncapsule_2eproto::offsets,
  file_level_metadata_MessageEncapsule_2eproto, file_level_enum_descriptors_MessageEncapsule_2eproto, file_level_service_descriptors_MessageEncapsule_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_MessageEncapsule_2eproto_getter() {
  return &descriptor_table_MessageEncapsule_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_MessageEncapsule_2eproto(&descriptor_table_MessageEncapsule_2eproto);
namespace protoAuth {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MessageEncapsule_eMessageType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageEncapsule_2eproto);
  return file_level_enum_descriptors_MessageEncapsule_2eproto[0];
}
bool MessageEncapsule_eMessageType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr MessageEncapsule_eMessageType MessageEncapsule::PLAYER1;
constexpr MessageEncapsule_eMessageType MessageEncapsule::PLAYER2;
constexpr MessageEncapsule_eMessageType MessageEncapsule::eMessageType_MIN;
constexpr MessageEncapsule_eMessageType MessageEncapsule::eMessageType_MAX;
constexpr int MessageEncapsule::eMessageType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class MessageEncapsule::_Internal {
 public:
  using HasBits = decltype(std::declval<MessageEncapsule>()._has_bits_);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

MessageEncapsule::MessageEncapsule(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protoAuth.MessageEncapsule)
}
MessageEncapsule::MessageEncapsule(const MessageEncapsule& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_data()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArenaForAllocation());
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:protoAuth.MessageEncapsule)
}

void MessageEncapsule::SharedCtor() {
data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
type_ = 0;
}

MessageEncapsule::~MessageEncapsule() {
  // @@protoc_insertion_point(destructor:protoAuth.MessageEncapsule)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void MessageEncapsule::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void MessageEncapsule::ArenaDtor(void* object) {
  MessageEncapsule* _this = reinterpret_cast< MessageEncapsule* >(object);
  (void)_this;
}
void MessageEncapsule::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MessageEncapsule::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void MessageEncapsule::Clear() {
// @@protoc_insertion_point(message_clear_start:protoAuth.MessageEncapsule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    data_.ClearNonDefaultToEmpty();
  }
  type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageEncapsule::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required .protoAuth.MessageEncapsule.eMessageType type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::protoAuth::MessageEncapsule_eMessageType_IsValid(val))) {
            _internal_set_type(static_cast<::protoAuth::MessageEncapsule_eMessageType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // required string data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "protoAuth.MessageEncapsule.data");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MessageEncapsule::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protoAuth.MessageEncapsule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .protoAuth.MessageEncapsule.eMessageType type = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // required string data = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_data().data(), static_cast<int>(this->_internal_data().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "protoAuth.MessageEncapsule.data");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protoAuth.MessageEncapsule)
  return target;
}

size_t MessageEncapsule::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:protoAuth.MessageEncapsule)
  size_t total_size = 0;

  if (_internal_has_data()) {
    // required string data = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_data());
  }

  if (_internal_has_type()) {
    // required .protoAuth.MessageEncapsule.eMessageType type = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  return total_size;
}
size_t MessageEncapsule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protoAuth.MessageEncapsule)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string data = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_data());

    // required .protoAuth.MessageEncapsule.eMessageType type = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageEncapsule::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    MessageEncapsule::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageEncapsule::GetClassData() const { return &_class_data_; }

void MessageEncapsule::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<MessageEncapsule *>(to)->MergeFrom(
      static_cast<const MessageEncapsule &>(from));
}


void MessageEncapsule::MergeFrom(const MessageEncapsule& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protoAuth.MessageEncapsule)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_data(from._internal_data());
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageEncapsule::CopyFrom(const MessageEncapsule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protoAuth.MessageEncapsule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageEncapsule::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void MessageEncapsule::InternalSwap(MessageEncapsule* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &data_, lhs_arena,
      &other->data_, rhs_arena
  );
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageEncapsule::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_MessageEncapsule_2eproto_getter, &descriptor_table_MessageEncapsule_2eproto_once,
      file_level_metadata_MessageEncapsule_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protoAuth
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protoAuth::MessageEncapsule* Arena::CreateMaybeMessage< ::protoAuth::MessageEncapsule >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protoAuth::MessageEncapsule >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
