// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lora-agent/loraagent.proto

#ifndef PROTOBUF_INCLUDED_lora_2dagent_2floraagent_2eproto
#define PROTOBUF_INCLUDED_lora_2dagent_2floraagent_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_lora_2dagent_2floraagent_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_lora_2dagent_2floraagent_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_lora_2dagent_2floraagent_2eproto();
namespace lora {
namespace agent {
class CreateRequest;
class CreateRequestDefaultTypeInternal;
extern CreateRequestDefaultTypeInternal _CreateRequest_default_instance_;
class DeleteRequest;
class DeleteRequestDefaultTypeInternal;
extern DeleteRequestDefaultTypeInternal _DeleteRequest_default_instance_;
class Device;
class DeviceDefaultTypeInternal;
extern DeviceDefaultTypeInternal _Device_default_instance_;
class EmptyResponse;
class EmptyResponseDefaultTypeInternal;
extern EmptyResponseDefaultTypeInternal _EmptyResponse_default_instance_;
}  // namespace agent
}  // namespace lora
namespace google {
namespace protobuf {
template<> ::lora::agent::CreateRequest* Arena::CreateMaybeMessage<::lora::agent::CreateRequest>(Arena*);
template<> ::lora::agent::DeleteRequest* Arena::CreateMaybeMessage<::lora::agent::DeleteRequest>(Arena*);
template<> ::lora::agent::Device* Arena::CreateMaybeMessage<::lora::agent::Device>(Arena*);
template<> ::lora::agent::EmptyResponse* Arena::CreateMaybeMessage<::lora::agent::EmptyResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace lora {
namespace agent {

// ===================================================================

class Device final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lora.agent.Device) */ {
 public:
  Device();
  virtual ~Device();

  Device(const Device& from);

  inline Device& operator=(const Device& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Device(Device&& from) noexcept
    : Device() {
    *this = ::std::move(from);
  }

  inline Device& operator=(Device&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Device& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Device* internal_default_instance() {
    return reinterpret_cast<const Device*>(
               &_Device_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Device* other);
  friend void swap(Device& a, Device& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Device* New() const final {
    return CreateMaybeMessage<Device>(nullptr);
  }

  Device* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Device>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Device& from);
  void MergeFrom(const Device& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Device* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string dev_eui = 1;
  void clear_dev_eui();
  static const int kDevEuiFieldNumber = 1;
  const ::std::string& dev_eui() const;
  void set_dev_eui(const ::std::string& value);
  #if LANG_CXX11
  void set_dev_eui(::std::string&& value);
  #endif
  void set_dev_eui(const char* value);
  void set_dev_eui(const char* value, size_t size);
  ::std::string* mutable_dev_eui();
  ::std::string* release_dev_eui();
  void set_allocated_dev_eui(::std::string* dev_eui);

  // string app_key = 2;
  void clear_app_key();
  static const int kAppKeyFieldNumber = 2;
  const ::std::string& app_key() const;
  void set_app_key(const ::std::string& value);
  #if LANG_CXX11
  void set_app_key(::std::string&& value);
  #endif
  void set_app_key(const char* value);
  void set_app_key(const char* value, size_t size);
  ::std::string* mutable_app_key();
  ::std::string* release_app_key();
  void set_allocated_app_key(::std::string* app_key);

  // string dev_addr = 3;
  void clear_dev_addr();
  static const int kDevAddrFieldNumber = 3;
  const ::std::string& dev_addr() const;
  void set_dev_addr(const ::std::string& value);
  #if LANG_CXX11
  void set_dev_addr(::std::string&& value);
  #endif
  void set_dev_addr(const char* value);
  void set_dev_addr(const char* value, size_t size);
  ::std::string* mutable_dev_addr();
  ::std::string* release_dev_addr();
  void set_allocated_dev_addr(::std::string* dev_addr);

  // string net_s_key = 4;
  void clear_net_s_key();
  static const int kNetSKeyFieldNumber = 4;
  const ::std::string& net_s_key() const;
  void set_net_s_key(const ::std::string& value);
  #if LANG_CXX11
  void set_net_s_key(::std::string&& value);
  #endif
  void set_net_s_key(const char* value);
  void set_net_s_key(const char* value, size_t size);
  ::std::string* mutable_net_s_key();
  ::std::string* release_net_s_key();
  void set_allocated_net_s_key(::std::string* net_s_key);

  // string app_s_key = 5;
  void clear_app_s_key();
  static const int kAppSKeyFieldNumber = 5;
  const ::std::string& app_s_key() const;
  void set_app_s_key(const ::std::string& value);
  #if LANG_CXX11
  void set_app_s_key(::std::string&& value);
  #endif
  void set_app_s_key(const char* value);
  void set_app_s_key(const char* value, size_t size);
  ::std::string* mutable_app_s_key();
  ::std::string* release_app_s_key();
  void set_allocated_app_s_key(::std::string* app_s_key);

  // @@protoc_insertion_point(class_scope:lora.agent.Device)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr dev_eui_;
  ::google::protobuf::internal::ArenaStringPtr app_key_;
  ::google::protobuf::internal::ArenaStringPtr dev_addr_;
  ::google::protobuf::internal::ArenaStringPtr net_s_key_;
  ::google::protobuf::internal::ArenaStringPtr app_s_key_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_lora_2dagent_2floraagent_2eproto;
};
// -------------------------------------------------------------------

class CreateRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lora.agent.CreateRequest) */ {
 public:
  CreateRequest();
  virtual ~CreateRequest();

  CreateRequest(const CreateRequest& from);

  inline CreateRequest& operator=(const CreateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CreateRequest(CreateRequest&& from) noexcept
    : CreateRequest() {
    *this = ::std::move(from);
  }

  inline CreateRequest& operator=(CreateRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const CreateRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CreateRequest* internal_default_instance() {
    return reinterpret_cast<const CreateRequest*>(
               &_CreateRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(CreateRequest* other);
  friend void swap(CreateRequest& a, CreateRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CreateRequest* New() const final {
    return CreateMaybeMessage<CreateRequest>(nullptr);
  }

  CreateRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CreateRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CreateRequest& from);
  void MergeFrom(const CreateRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CreateRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .lora.agent.Device device = 1;
  bool has_device() const;
  void clear_device();
  static const int kDeviceFieldNumber = 1;
  const ::lora::agent::Device& device() const;
  ::lora::agent::Device* release_device();
  ::lora::agent::Device* mutable_device();
  void set_allocated_device(::lora::agent::Device* device);

  // @@protoc_insertion_point(class_scope:lora.agent.CreateRequest)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::lora::agent::Device* device_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_lora_2dagent_2floraagent_2eproto;
};
// -------------------------------------------------------------------

class DeleteRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lora.agent.DeleteRequest) */ {
 public:
  DeleteRequest();
  virtual ~DeleteRequest();

  DeleteRequest(const DeleteRequest& from);

  inline DeleteRequest& operator=(const DeleteRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DeleteRequest(DeleteRequest&& from) noexcept
    : DeleteRequest() {
    *this = ::std::move(from);
  }

  inline DeleteRequest& operator=(DeleteRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const DeleteRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DeleteRequest* internal_default_instance() {
    return reinterpret_cast<const DeleteRequest*>(
               &_DeleteRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(DeleteRequest* other);
  friend void swap(DeleteRequest& a, DeleteRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DeleteRequest* New() const final {
    return CreateMaybeMessage<DeleteRequest>(nullptr);
  }

  DeleteRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DeleteRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DeleteRequest& from);
  void MergeFrom(const DeleteRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DeleteRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string dev_eui = 1;
  void clear_dev_eui();
  static const int kDevEuiFieldNumber = 1;
  const ::std::string& dev_eui() const;
  void set_dev_eui(const ::std::string& value);
  #if LANG_CXX11
  void set_dev_eui(::std::string&& value);
  #endif
  void set_dev_eui(const char* value);
  void set_dev_eui(const char* value, size_t size);
  ::std::string* mutable_dev_eui();
  ::std::string* release_dev_eui();
  void set_allocated_dev_eui(::std::string* dev_eui);

  // @@protoc_insertion_point(class_scope:lora.agent.DeleteRequest)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr dev_eui_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_lora_2dagent_2floraagent_2eproto;
};
// -------------------------------------------------------------------

class EmptyResponse final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lora.agent.EmptyResponse) */ {
 public:
  EmptyResponse();
  virtual ~EmptyResponse();

  EmptyResponse(const EmptyResponse& from);

  inline EmptyResponse& operator=(const EmptyResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EmptyResponse(EmptyResponse&& from) noexcept
    : EmptyResponse() {
    *this = ::std::move(from);
  }

  inline EmptyResponse& operator=(EmptyResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const EmptyResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EmptyResponse* internal_default_instance() {
    return reinterpret_cast<const EmptyResponse*>(
               &_EmptyResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(EmptyResponse* other);
  friend void swap(EmptyResponse& a, EmptyResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EmptyResponse* New() const final {
    return CreateMaybeMessage<EmptyResponse>(nullptr);
  }

  EmptyResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<EmptyResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const EmptyResponse& from);
  void MergeFrom(const EmptyResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EmptyResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:lora.agent.EmptyResponse)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_lora_2dagent_2floraagent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Device

// string dev_eui = 1;
inline void Device::clear_dev_eui() {
  dev_eui_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Device::dev_eui() const {
  // @@protoc_insertion_point(field_get:lora.agent.Device.dev_eui)
  return dev_eui_.GetNoArena();
}
inline void Device::set_dev_eui(const ::std::string& value) {
  
  dev_eui_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lora.agent.Device.dev_eui)
}
#if LANG_CXX11
inline void Device::set_dev_eui(::std::string&& value) {
  
  dev_eui_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lora.agent.Device.dev_eui)
}
#endif
inline void Device::set_dev_eui(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  dev_eui_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lora.agent.Device.dev_eui)
}
inline void Device::set_dev_eui(const char* value, size_t size) {
  
  dev_eui_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lora.agent.Device.dev_eui)
}
inline ::std::string* Device::mutable_dev_eui() {
  
  // @@protoc_insertion_point(field_mutable:lora.agent.Device.dev_eui)
  return dev_eui_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Device::release_dev_eui() {
  // @@protoc_insertion_point(field_release:lora.agent.Device.dev_eui)
  
  return dev_eui_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Device::set_allocated_dev_eui(::std::string* dev_eui) {
  if (dev_eui != nullptr) {
    
  } else {
    
  }
  dev_eui_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dev_eui);
  // @@protoc_insertion_point(field_set_allocated:lora.agent.Device.dev_eui)
}

// string app_key = 2;
inline void Device::clear_app_key() {
  app_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Device::app_key() const {
  // @@protoc_insertion_point(field_get:lora.agent.Device.app_key)
  return app_key_.GetNoArena();
}
inline void Device::set_app_key(const ::std::string& value) {
  
  app_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lora.agent.Device.app_key)
}
#if LANG_CXX11
inline void Device::set_app_key(::std::string&& value) {
  
  app_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lora.agent.Device.app_key)
}
#endif
inline void Device::set_app_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  app_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lora.agent.Device.app_key)
}
inline void Device::set_app_key(const char* value, size_t size) {
  
  app_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lora.agent.Device.app_key)
}
inline ::std::string* Device::mutable_app_key() {
  
  // @@protoc_insertion_point(field_mutable:lora.agent.Device.app_key)
  return app_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Device::release_app_key() {
  // @@protoc_insertion_point(field_release:lora.agent.Device.app_key)
  
  return app_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Device::set_allocated_app_key(::std::string* app_key) {
  if (app_key != nullptr) {
    
  } else {
    
  }
  app_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), app_key);
  // @@protoc_insertion_point(field_set_allocated:lora.agent.Device.app_key)
}

// string dev_addr = 3;
inline void Device::clear_dev_addr() {
  dev_addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Device::dev_addr() const {
  // @@protoc_insertion_point(field_get:lora.agent.Device.dev_addr)
  return dev_addr_.GetNoArena();
}
inline void Device::set_dev_addr(const ::std::string& value) {
  
  dev_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lora.agent.Device.dev_addr)
}
#if LANG_CXX11
inline void Device::set_dev_addr(::std::string&& value) {
  
  dev_addr_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lora.agent.Device.dev_addr)
}
#endif
inline void Device::set_dev_addr(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  dev_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lora.agent.Device.dev_addr)
}
inline void Device::set_dev_addr(const char* value, size_t size) {
  
  dev_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lora.agent.Device.dev_addr)
}
inline ::std::string* Device::mutable_dev_addr() {
  
  // @@protoc_insertion_point(field_mutable:lora.agent.Device.dev_addr)
  return dev_addr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Device::release_dev_addr() {
  // @@protoc_insertion_point(field_release:lora.agent.Device.dev_addr)
  
  return dev_addr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Device::set_allocated_dev_addr(::std::string* dev_addr) {
  if (dev_addr != nullptr) {
    
  } else {
    
  }
  dev_addr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dev_addr);
  // @@protoc_insertion_point(field_set_allocated:lora.agent.Device.dev_addr)
}

// string net_s_key = 4;
inline void Device::clear_net_s_key() {
  net_s_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Device::net_s_key() const {
  // @@protoc_insertion_point(field_get:lora.agent.Device.net_s_key)
  return net_s_key_.GetNoArena();
}
inline void Device::set_net_s_key(const ::std::string& value) {
  
  net_s_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lora.agent.Device.net_s_key)
}
#if LANG_CXX11
inline void Device::set_net_s_key(::std::string&& value) {
  
  net_s_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lora.agent.Device.net_s_key)
}
#endif
inline void Device::set_net_s_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  net_s_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lora.agent.Device.net_s_key)
}
inline void Device::set_net_s_key(const char* value, size_t size) {
  
  net_s_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lora.agent.Device.net_s_key)
}
inline ::std::string* Device::mutable_net_s_key() {
  
  // @@protoc_insertion_point(field_mutable:lora.agent.Device.net_s_key)
  return net_s_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Device::release_net_s_key() {
  // @@protoc_insertion_point(field_release:lora.agent.Device.net_s_key)
  
  return net_s_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Device::set_allocated_net_s_key(::std::string* net_s_key) {
  if (net_s_key != nullptr) {
    
  } else {
    
  }
  net_s_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), net_s_key);
  // @@protoc_insertion_point(field_set_allocated:lora.agent.Device.net_s_key)
}

// string app_s_key = 5;
inline void Device::clear_app_s_key() {
  app_s_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Device::app_s_key() const {
  // @@protoc_insertion_point(field_get:lora.agent.Device.app_s_key)
  return app_s_key_.GetNoArena();
}
inline void Device::set_app_s_key(const ::std::string& value) {
  
  app_s_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lora.agent.Device.app_s_key)
}
#if LANG_CXX11
inline void Device::set_app_s_key(::std::string&& value) {
  
  app_s_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lora.agent.Device.app_s_key)
}
#endif
inline void Device::set_app_s_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  app_s_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lora.agent.Device.app_s_key)
}
inline void Device::set_app_s_key(const char* value, size_t size) {
  
  app_s_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lora.agent.Device.app_s_key)
}
inline ::std::string* Device::mutable_app_s_key() {
  
  // @@protoc_insertion_point(field_mutable:lora.agent.Device.app_s_key)
  return app_s_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Device::release_app_s_key() {
  // @@protoc_insertion_point(field_release:lora.agent.Device.app_s_key)
  
  return app_s_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Device::set_allocated_app_s_key(::std::string* app_s_key) {
  if (app_s_key != nullptr) {
    
  } else {
    
  }
  app_s_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), app_s_key);
  // @@protoc_insertion_point(field_set_allocated:lora.agent.Device.app_s_key)
}

// -------------------------------------------------------------------

// CreateRequest

// .lora.agent.Device device = 1;
inline bool CreateRequest::has_device() const {
  return this != internal_default_instance() && device_ != nullptr;
}
inline void CreateRequest::clear_device() {
  if (GetArenaNoVirtual() == nullptr && device_ != nullptr) {
    delete device_;
  }
  device_ = nullptr;
}
inline const ::lora::agent::Device& CreateRequest::device() const {
  const ::lora::agent::Device* p = device_;
  // @@protoc_insertion_point(field_get:lora.agent.CreateRequest.device)
  return p != nullptr ? *p : *reinterpret_cast<const ::lora::agent::Device*>(
      &::lora::agent::_Device_default_instance_);
}
inline ::lora::agent::Device* CreateRequest::release_device() {
  // @@protoc_insertion_point(field_release:lora.agent.CreateRequest.device)
  
  ::lora::agent::Device* temp = device_;
  device_ = nullptr;
  return temp;
}
inline ::lora::agent::Device* CreateRequest::mutable_device() {
  
  if (device_ == nullptr) {
    auto* p = CreateMaybeMessage<::lora::agent::Device>(GetArenaNoVirtual());
    device_ = p;
  }
  // @@protoc_insertion_point(field_mutable:lora.agent.CreateRequest.device)
  return device_;
}
inline void CreateRequest::set_allocated_device(::lora::agent::Device* device) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete device_;
  }
  if (device) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      device = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, device, submessage_arena);
    }
    
  } else {
    
  }
  device_ = device;
  // @@protoc_insertion_point(field_set_allocated:lora.agent.CreateRequest.device)
}

// -------------------------------------------------------------------

// DeleteRequest

// string dev_eui = 1;
inline void DeleteRequest::clear_dev_eui() {
  dev_eui_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DeleteRequest::dev_eui() const {
  // @@protoc_insertion_point(field_get:lora.agent.DeleteRequest.dev_eui)
  return dev_eui_.GetNoArena();
}
inline void DeleteRequest::set_dev_eui(const ::std::string& value) {
  
  dev_eui_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lora.agent.DeleteRequest.dev_eui)
}
#if LANG_CXX11
inline void DeleteRequest::set_dev_eui(::std::string&& value) {
  
  dev_eui_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lora.agent.DeleteRequest.dev_eui)
}
#endif
inline void DeleteRequest::set_dev_eui(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  dev_eui_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lora.agent.DeleteRequest.dev_eui)
}
inline void DeleteRequest::set_dev_eui(const char* value, size_t size) {
  
  dev_eui_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lora.agent.DeleteRequest.dev_eui)
}
inline ::std::string* DeleteRequest::mutable_dev_eui() {
  
  // @@protoc_insertion_point(field_mutable:lora.agent.DeleteRequest.dev_eui)
  return dev_eui_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeleteRequest::release_dev_eui() {
  // @@protoc_insertion_point(field_release:lora.agent.DeleteRequest.dev_eui)
  
  return dev_eui_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeleteRequest::set_allocated_dev_eui(::std::string* dev_eui) {
  if (dev_eui != nullptr) {
    
  } else {
    
  }
  dev_eui_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dev_eui);
  // @@protoc_insertion_point(field_set_allocated:lora.agent.DeleteRequest.dev_eui)
}

// -------------------------------------------------------------------

// EmptyResponse

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace agent
}  // namespace lora

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_lora_2dagent_2floraagent_2eproto
