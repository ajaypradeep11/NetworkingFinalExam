// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageEncapsule.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MessageEncapsule_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MessageEncapsule_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MessageEncapsule_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MessageEncapsule_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MessageEncapsule_2eproto;
namespace protoAuth {
class MessageEncapsule;
struct MessageEncapsuleDefaultTypeInternal;
extern MessageEncapsuleDefaultTypeInternal _MessageEncapsule_default_instance_;
}  // namespace protoAuth
PROTOBUF_NAMESPACE_OPEN
template<> ::protoAuth::MessageEncapsule* Arena::CreateMaybeMessage<::protoAuth::MessageEncapsule>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protoAuth {

enum MessageEncapsule_eMessageType : int {
  MessageEncapsule_eMessageType_PLAYER1 = 0,
  MessageEncapsule_eMessageType_PLAYER2 = 1
};
bool MessageEncapsule_eMessageType_IsValid(int value);
constexpr MessageEncapsule_eMessageType MessageEncapsule_eMessageType_eMessageType_MIN = MessageEncapsule_eMessageType_PLAYER1;
constexpr MessageEncapsule_eMessageType MessageEncapsule_eMessageType_eMessageType_MAX = MessageEncapsule_eMessageType_PLAYER2;
constexpr int MessageEncapsule_eMessageType_eMessageType_ARRAYSIZE = MessageEncapsule_eMessageType_eMessageType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MessageEncapsule_eMessageType_descriptor();
template<typename T>
inline const std::string& MessageEncapsule_eMessageType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, MessageEncapsule_eMessageType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function MessageEncapsule_eMessageType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    MessageEncapsule_eMessageType_descriptor(), enum_t_value);
}
inline bool MessageEncapsule_eMessageType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, MessageEncapsule_eMessageType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<MessageEncapsule_eMessageType>(
    MessageEncapsule_eMessageType_descriptor(), name, value);
}
// ===================================================================

class MessageEncapsule final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protoAuth.MessageEncapsule) */ {
 public:
  inline MessageEncapsule() : MessageEncapsule(nullptr) {}
  ~MessageEncapsule() override;
  explicit constexpr MessageEncapsule(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MessageEncapsule(const MessageEncapsule& from);
  MessageEncapsule(MessageEncapsule&& from) noexcept
    : MessageEncapsule() {
    *this = ::std::move(from);
  }

  inline MessageEncapsule& operator=(const MessageEncapsule& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessageEncapsule& operator=(MessageEncapsule&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const MessageEncapsule& default_instance() {
    return *internal_default_instance();
  }
  static inline const MessageEncapsule* internal_default_instance() {
    return reinterpret_cast<const MessageEncapsule*>(
               &_MessageEncapsule_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MessageEncapsule& a, MessageEncapsule& b) {
    a.Swap(&b);
  }
  inline void Swap(MessageEncapsule* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MessageEncapsule* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MessageEncapsule* New() const final {
    return new MessageEncapsule();
  }

  MessageEncapsule* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MessageEncapsule>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MessageEncapsule& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const MessageEncapsule& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MessageEncapsule* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protoAuth.MessageEncapsule";
  }
  protected:
  explicit MessageEncapsule(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef MessageEncapsule_eMessageType eMessageType;
  static constexpr eMessageType PLAYER1 =
    MessageEncapsule_eMessageType_PLAYER1;
  static constexpr eMessageType PLAYER2 =
    MessageEncapsule_eMessageType_PLAYER2;
  static inline bool eMessageType_IsValid(int value) {
    return MessageEncapsule_eMessageType_IsValid(value);
  }
  static constexpr eMessageType eMessageType_MIN =
    MessageEncapsule_eMessageType_eMessageType_MIN;
  static constexpr eMessageType eMessageType_MAX =
    MessageEncapsule_eMessageType_eMessageType_MAX;
  static constexpr int eMessageType_ARRAYSIZE =
    MessageEncapsule_eMessageType_eMessageType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  eMessageType_descriptor() {
    return MessageEncapsule_eMessageType_descriptor();
  }
  template<typename T>
  static inline const std::string& eMessageType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, eMessageType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function eMessageType_Name.");
    return MessageEncapsule_eMessageType_Name(enum_t_value);
  }
  static inline bool eMessageType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      eMessageType* value) {
    return MessageEncapsule_eMessageType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // required string data = 2;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const std::string& data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_data();
  PROTOBUF_MUST_USE_RESULT std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // required .protoAuth.MessageEncapsule.eMessageType type = 1;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::protoAuth::MessageEncapsule_eMessageType type() const;
  void set_type(::protoAuth::MessageEncapsule_eMessageType value);
  private:
  ::protoAuth::MessageEncapsule_eMessageType _internal_type() const;
  void _internal_set_type(::protoAuth::MessageEncapsule_eMessageType value);
  public:

  // @@protoc_insertion_point(class_scope:protoAuth.MessageEncapsule)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  int type_;
  friend struct ::TableStruct_MessageEncapsule_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MessageEncapsule

// required .protoAuth.MessageEncapsule.eMessageType type = 1;
inline bool MessageEncapsule::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool MessageEncapsule::has_type() const {
  return _internal_has_type();
}
inline void MessageEncapsule::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::protoAuth::MessageEncapsule_eMessageType MessageEncapsule::_internal_type() const {
  return static_cast< ::protoAuth::MessageEncapsule_eMessageType >(type_);
}
inline ::protoAuth::MessageEncapsule_eMessageType MessageEncapsule::type() const {
  // @@protoc_insertion_point(field_get:protoAuth.MessageEncapsule.type)
  return _internal_type();
}
inline void MessageEncapsule::_internal_set_type(::protoAuth::MessageEncapsule_eMessageType value) {
  assert(::protoAuth::MessageEncapsule_eMessageType_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  type_ = value;
}
inline void MessageEncapsule::set_type(::protoAuth::MessageEncapsule_eMessageType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:protoAuth.MessageEncapsule.type)
}

// required string data = 2;
inline bool MessageEncapsule::_internal_has_data() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool MessageEncapsule::has_data() const {
  return _internal_has_data();
}
inline void MessageEncapsule::clear_data() {
  data_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& MessageEncapsule::data() const {
  // @@protoc_insertion_point(field_get:protoAuth.MessageEncapsule.data)
  return _internal_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MessageEncapsule::set_data(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:protoAuth.MessageEncapsule.data)
}
inline std::string* MessageEncapsule::mutable_data() {
  std::string* _s = _internal_mutable_data();
  // @@protoc_insertion_point(field_mutable:protoAuth.MessageEncapsule.data)
  return _s;
}
inline const std::string& MessageEncapsule::_internal_data() const {
  return data_.Get();
}
inline void MessageEncapsule::_internal_set_data(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* MessageEncapsule::_internal_mutable_data() {
  _has_bits_[0] |= 0x00000001u;
  return data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* MessageEncapsule::release_data() {
  // @@protoc_insertion_point(field_release:protoAuth.MessageEncapsule.data)
  if (!_internal_has_data()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return data_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void MessageEncapsule::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:protoAuth.MessageEncapsule.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protoAuth

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::protoAuth::MessageEncapsule_eMessageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protoAuth::MessageEncapsule_eMessageType>() {
  return ::protoAuth::MessageEncapsule_eMessageType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MessageEncapsule_2eproto