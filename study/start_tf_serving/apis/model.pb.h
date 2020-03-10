// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/model.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fmodel_2eproto
#define PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fmodel_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wrappers.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_5fserving_2fapis_2fmodel_2eproto 

namespace protobuf_tensorflow_5fserving_2fapis_2fmodel_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_tensorflow_5fserving_2fapis_2fmodel_2eproto
namespace tensorflow {
namespace serving {
class ModelSpec;
class ModelSpecDefaultTypeInternal;
extern ModelSpecDefaultTypeInternal _ModelSpec_default_instance_;
}  // namespace serving
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::serving::ModelSpec* Arena::CreateMaybeMessage<::tensorflow::serving::ModelSpec>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace serving {

// ===================================================================

class ModelSpec : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.ModelSpec) */ {
 public:
  ModelSpec();
  virtual ~ModelSpec();

  ModelSpec(const ModelSpec& from);

  inline ModelSpec& operator=(const ModelSpec& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ModelSpec(ModelSpec&& from) noexcept
    : ModelSpec() {
    *this = ::std::move(from);
  }

  inline ModelSpec& operator=(ModelSpec&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const ModelSpec& default_instance();

  enum VersionChoiceCase {
    kVersion = 2,
    kVersionLabel = 4,
    VERSION_CHOICE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ModelSpec* internal_default_instance() {
    return reinterpret_cast<const ModelSpec*>(
               &_ModelSpec_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(ModelSpec* other);
  void Swap(ModelSpec* other);
  friend void swap(ModelSpec& a, ModelSpec& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ModelSpec* New() const final {
    return CreateMaybeMessage<ModelSpec>(NULL);
  }

  ModelSpec* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ModelSpec>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ModelSpec& from);
  void MergeFrom(const ModelSpec& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ModelSpec* other);
  protected:
  explicit ModelSpec(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_name();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // string signature_name = 3;
  void clear_signature_name();
  static const int kSignatureNameFieldNumber = 3;
  const ::std::string& signature_name() const;
  void set_signature_name(const ::std::string& value);
  #if LANG_CXX11
  void set_signature_name(::std::string&& value);
  #endif
  void set_signature_name(const char* value);
  void set_signature_name(const char* value, size_t size);
  ::std::string* mutable_signature_name();
  ::std::string* release_signature_name();
  void set_allocated_signature_name(::std::string* signature_name);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_signature_name();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_signature_name(
      ::std::string* signature_name);

  // .google.protobuf.Int64Value version = 2;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  private:
  const ::google::protobuf::Int64Value& _internal_version() const;
  public:
  const ::google::protobuf::Int64Value& version() const;
  ::google::protobuf::Int64Value* release_version();
  ::google::protobuf::Int64Value* mutable_version();
  void set_allocated_version(::google::protobuf::Int64Value* version);
  void unsafe_arena_set_allocated_version(
      ::google::protobuf::Int64Value* version);
  ::google::protobuf::Int64Value* unsafe_arena_release_version();

  // string version_label = 4;
  private:
  bool has_version_label() const;
  public:
  void clear_version_label();
  static const int kVersionLabelFieldNumber = 4;
  const ::std::string& version_label() const;
  void set_version_label(const ::std::string& value);
  #if LANG_CXX11
  void set_version_label(::std::string&& value);
  #endif
  void set_version_label(const char* value);
  void set_version_label(const char* value, size_t size);
  ::std::string* mutable_version_label();
  ::std::string* release_version_label();
  void set_allocated_version_label(::std::string* version_label);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_version_label();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_version_label(
      ::std::string* version_label);

  void clear_version_choice();
  VersionChoiceCase version_choice_case() const;
  // @@protoc_insertion_point(class_scope:tensorflow.serving.ModelSpec)
 private:
  void set_has_version();
  void set_has_version_label();

  inline bool has_version_choice() const;
  inline void clear_has_version_choice();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr signature_name_;
  union VersionChoiceUnion {
    VersionChoiceUnion() {}
    ::google::protobuf::Int64Value* version_;
    ::google::protobuf::internal::ArenaStringPtr version_label_;
  } version_choice_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_tensorflow_5fserving_2fapis_2fmodel_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ModelSpec

// string name = 1;
inline void ModelSpec::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ModelSpec::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ModelSpec.name)
  return name_.Get();
}
inline void ModelSpec::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.serving.ModelSpec.name)
}
#if LANG_CXX11
inline void ModelSpec::set_name(::std::string&& value) {
  
  name_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.serving.ModelSpec.name)
}
#endif
inline void ModelSpec::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.serving.ModelSpec.name)
}
inline void ModelSpec::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.serving.ModelSpec.name)
}
inline ::std::string* ModelSpec::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ModelSpec.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ModelSpec::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.ModelSpec.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void ModelSpec::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.ModelSpec.name)
}
inline ::std::string* ModelSpec::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.ModelSpec.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ModelSpec::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.ModelSpec.name)
}

// .google.protobuf.Int64Value version = 2;
inline bool ModelSpec::has_version() const {
  return version_choice_case() == kVersion;
}
inline void ModelSpec::set_has_version() {
  _oneof_case_[0] = kVersion;
}
inline const ::google::protobuf::Int64Value& ModelSpec::_internal_version() const {
  return *version_choice_.version_;
}
inline ::google::protobuf::Int64Value* ModelSpec::release_version() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.ModelSpec.version)
  if (has_version()) {
    clear_has_version_choice();
      ::google::protobuf::Int64Value* temp = version_choice_.version_;
    if (GetArenaNoVirtual() != NULL) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    version_choice_.version_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::protobuf::Int64Value& ModelSpec::version() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ModelSpec.version)
  return has_version()
      ? *version_choice_.version_
      : *reinterpret_cast< ::google::protobuf::Int64Value*>(&::google::protobuf::_Int64Value_default_instance_);
}
inline ::google::protobuf::Int64Value* ModelSpec::unsafe_arena_release_version() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.ModelSpec.version)
  if (has_version()) {
    clear_has_version_choice();
    ::google::protobuf::Int64Value* temp = version_choice_.version_;
    version_choice_.version_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void ModelSpec::unsafe_arena_set_allocated_version(::google::protobuf::Int64Value* version) {
  clear_version_choice();
  if (version) {
    set_has_version();
    version_choice_.version_ = version;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.ModelSpec.version)
}
inline ::google::protobuf::Int64Value* ModelSpec::mutable_version() {
  if (!has_version()) {
    clear_version_choice();
    set_has_version();
    version_choice_.version_ = CreateMaybeMessage< ::google::protobuf::Int64Value >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ModelSpec.version)
  return version_choice_.version_;
}

// string version_label = 4;
inline bool ModelSpec::has_version_label() const {
  return version_choice_case() == kVersionLabel;
}
inline void ModelSpec::set_has_version_label() {
  _oneof_case_[0] = kVersionLabel;
}
inline void ModelSpec::clear_version_label() {
  if (has_version_label()) {
    version_choice_.version_label_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        GetArenaNoVirtual());
    clear_has_version_choice();
  }
}
inline const ::std::string& ModelSpec::version_label() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ModelSpec.version_label)
  if (has_version_label()) {
    return version_choice_.version_label_.Get();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void ModelSpec::set_version_label(const ::std::string& value) {
  if (!has_version_label()) {
    clear_version_choice();
    set_has_version_label();
    version_choice_.version_label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  version_choice_.version_label_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.serving.ModelSpec.version_label)
}
#if LANG_CXX11
inline void ModelSpec::set_version_label(::std::string&& value) {
  // @@protoc_insertion_point(field_set:tensorflow.serving.ModelSpec.version_label)
  if (!has_version_label()) {
    clear_version_choice();
    set_has_version_label();
    version_choice_.version_label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  version_choice_.version_label_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.serving.ModelSpec.version_label)
}
#endif
inline void ModelSpec::set_version_label(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_version_label()) {
    clear_version_choice();
    set_has_version_label();
    version_choice_.version_label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  version_choice_.version_label_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.serving.ModelSpec.version_label)
}
inline void ModelSpec::set_version_label(const char* value,
                             size_t size) {
  if (!has_version_label()) {
    clear_version_choice();
    set_has_version_label();
    version_choice_.version_label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  version_choice_.version_label_.Set(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size),
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.serving.ModelSpec.version_label)
}
inline ::std::string* ModelSpec::mutable_version_label() {
  if (!has_version_label()) {
    clear_version_choice();
    set_has_version_label();
    version_choice_.version_label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  return version_choice_.version_label_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ModelSpec.version_label)
}
inline ::std::string* ModelSpec::release_version_label() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.ModelSpec.version_label)
  if (has_version_label()) {
    clear_has_version_choice();
    return version_choice_.version_label_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        GetArenaNoVirtual());
  } else {
    return NULL;
  }
}
inline void ModelSpec::set_allocated_version_label(::std::string* version_label) {
  if (!has_version_label()) {
    version_choice_.version_label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_version_choice();
  if (version_label != NULL) {
    set_has_version_label();
    version_choice_.version_label_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version_label,
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.ModelSpec.version_label)
}
inline ::std::string* ModelSpec::unsafe_arena_release_version_label() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.ModelSpec.version_label)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (has_version_label()) {
    clear_has_version_choice();
    return version_choice_.version_label_.UnsafeArenaRelease(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  } else {
    return NULL;
  }
}
inline void ModelSpec::unsafe_arena_set_allocated_version_label(::std::string* version_label) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (!has_version_label()) {
    version_choice_.version_label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_version_choice();
  if (version_label) {
    set_has_version_label();
    version_choice_.version_label_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version_label, GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.ModelSpec.version_label)
}

// string signature_name = 3;
inline void ModelSpec::clear_signature_name() {
  signature_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ModelSpec::signature_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ModelSpec.signature_name)
  return signature_name_.Get();
}
inline void ModelSpec::set_signature_name(const ::std::string& value) {
  
  signature_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.serving.ModelSpec.signature_name)
}
#if LANG_CXX11
inline void ModelSpec::set_signature_name(::std::string&& value) {
  
  signature_name_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.serving.ModelSpec.signature_name)
}
#endif
inline void ModelSpec::set_signature_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  signature_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.serving.ModelSpec.signature_name)
}
inline void ModelSpec::set_signature_name(const char* value,
    size_t size) {
  
  signature_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.serving.ModelSpec.signature_name)
}
inline ::std::string* ModelSpec::mutable_signature_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ModelSpec.signature_name)
  return signature_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ModelSpec::release_signature_name() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.ModelSpec.signature_name)
  
  return signature_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void ModelSpec::set_allocated_signature_name(::std::string* signature_name) {
  if (signature_name != NULL) {
    
  } else {
    
  }
  signature_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signature_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.ModelSpec.signature_name)
}
inline ::std::string* ModelSpec::unsafe_arena_release_signature_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.ModelSpec.signature_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return signature_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ModelSpec::unsafe_arena_set_allocated_signature_name(
    ::std::string* signature_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (signature_name != NULL) {
    
  } else {
    
  }
  signature_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      signature_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.ModelSpec.signature_name)
}

inline bool ModelSpec::has_version_choice() const {
  return version_choice_case() != VERSION_CHOICE_NOT_SET;
}
inline void ModelSpec::clear_has_version_choice() {
  _oneof_case_[0] = VERSION_CHOICE_NOT_SET;
}
inline ModelSpec::VersionChoiceCase ModelSpec::version_choice_case() const {
  return ModelSpec::VersionChoiceCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fmodel_2eproto
