// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: filter/proto/filter.proto

#ifndef PROTOBUF_filter_2fproto_2ffilter_2eproto__INCLUDED
#define PROTOBUF_filter_2fproto_2ffilter_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace PS {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_filter_2fproto_2ffilter_2eproto();
void protobuf_AssignDesc_filter_2fproto_2ffilter_2eproto();
void protobuf_ShutdownFile_filter_2fproto_2ffilter_2eproto();

class FilterConfig;
class FilterConfig_FixedFloatConfig;

enum FilterConfig_Type {
  FilterConfig_Type_KEY_CACHING = 1,
  FilterConfig_Type_COMPRESSING = 2,
  FilterConfig_Type_FIXING_FLOAT = 3
};
bool FilterConfig_Type_IsValid(int value);
const FilterConfig_Type FilterConfig_Type_Type_MIN = FilterConfig_Type_KEY_CACHING;
const FilterConfig_Type FilterConfig_Type_Type_MAX = FilterConfig_Type_FIXING_FLOAT;
const int FilterConfig_Type_Type_ARRAYSIZE = FilterConfig_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* FilterConfig_Type_descriptor();
inline const ::std::string& FilterConfig_Type_Name(FilterConfig_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    FilterConfig_Type_descriptor(), value);
}
inline bool FilterConfig_Type_Parse(
    const ::std::string& name, FilterConfig_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FilterConfig_Type>(
    FilterConfig_Type_descriptor(), name, value);
}
// ===================================================================

class FilterConfig_FixedFloatConfig : public ::google::protobuf::Message {
 public:
  FilterConfig_FixedFloatConfig();
  virtual ~FilterConfig_FixedFloatConfig();

  FilterConfig_FixedFloatConfig(const FilterConfig_FixedFloatConfig& from);

  inline FilterConfig_FixedFloatConfig& operator=(const FilterConfig_FixedFloatConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FilterConfig_FixedFloatConfig& default_instance();

  void Swap(FilterConfig_FixedFloatConfig* other);

  // implements Message ----------------------------------------------

  FilterConfig_FixedFloatConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FilterConfig_FixedFloatConfig& from);
  void MergeFrom(const FilterConfig_FixedFloatConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional float min_value = 1 [default = -1];
  inline bool has_min_value() const;
  inline void clear_min_value();
  static const int kMinValueFieldNumber = 1;
  inline float min_value() const;
  inline void set_min_value(float value);

  // optional float max_value = 2 [default = 1];
  inline bool has_max_value() const;
  inline void clear_max_value();
  static const int kMaxValueFieldNumber = 2;
  inline float max_value() const;
  inline void set_max_value(float value);

  // optional int32 num_bytes = 3 [default = 3];
  inline bool has_num_bytes() const;
  inline void clear_num_bytes();
  static const int kNumBytesFieldNumber = 3;
  inline ::google::protobuf::int32 num_bytes() const;
  inline void set_num_bytes(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PS.FilterConfig.FixedFloatConfig)
 private:
  inline void set_has_min_value();
  inline void clear_has_min_value();
  inline void set_has_max_value();
  inline void clear_has_max_value();
  inline void set_has_num_bytes();
  inline void clear_has_num_bytes();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  float min_value_;
  float max_value_;
  ::google::protobuf::int32 num_bytes_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_filter_2fproto_2ffilter_2eproto();
  friend void protobuf_AssignDesc_filter_2fproto_2ffilter_2eproto();
  friend void protobuf_ShutdownFile_filter_2fproto_2ffilter_2eproto();

  void InitAsDefaultInstance();
  static FilterConfig_FixedFloatConfig* default_instance_;
};
// -------------------------------------------------------------------

class FilterConfig : public ::google::protobuf::Message {
 public:
  FilterConfig();
  virtual ~FilterConfig();

  FilterConfig(const FilterConfig& from);

  inline FilterConfig& operator=(const FilterConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FilterConfig& default_instance();

  void Swap(FilterConfig* other);

  // implements Message ----------------------------------------------

  FilterConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FilterConfig& from);
  void MergeFrom(const FilterConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef FilterConfig_FixedFloatConfig FixedFloatConfig;

  typedef FilterConfig_Type Type;
  static const Type KEY_CACHING = FilterConfig_Type_KEY_CACHING;
  static const Type COMPRESSING = FilterConfig_Type_COMPRESSING;
  static const Type FIXING_FLOAT = FilterConfig_Type_FIXING_FLOAT;
  static inline bool Type_IsValid(int value) {
    return FilterConfig_Type_IsValid(value);
  }
  static const Type Type_MIN =
    FilterConfig_Type_Type_MIN;
  static const Type Type_MAX =
    FilterConfig_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    FilterConfig_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return FilterConfig_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return FilterConfig_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return FilterConfig_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .PS.FilterConfig.Type type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::PS::FilterConfig_Type type() const;
  inline void set_type(::PS::FilterConfig_Type value);

  // optional bool clear_cache_if_done = 20 [default = false];
  inline bool has_clear_cache_if_done() const;
  inline void clear_clear_cache_if_done();
  static const int kClearCacheIfDoneFieldNumber = 20;
  inline bool clear_cache_if_done() const;
  inline void set_clear_cache_if_done(bool value);

  // repeated .PS.FilterConfig.FixedFloatConfig fixed_point = 4;
  inline int fixed_point_size() const;
  inline void clear_fixed_point();
  static const int kFixedPointFieldNumber = 4;
  inline const ::PS::FilterConfig_FixedFloatConfig& fixed_point(int index) const;
  inline ::PS::FilterConfig_FixedFloatConfig* mutable_fixed_point(int index);
  inline ::PS::FilterConfig_FixedFloatConfig* add_fixed_point();
  inline const ::google::protobuf::RepeatedPtrField< ::PS::FilterConfig_FixedFloatConfig >&
      fixed_point() const;
  inline ::google::protobuf::RepeatedPtrField< ::PS::FilterConfig_FixedFloatConfig >*
      mutable_fixed_point();

  // optional uint32 signature = 2;
  inline bool has_signature() const;
  inline void clear_signature();
  static const int kSignatureFieldNumber = 2;
  inline ::google::protobuf::uint32 signature() const;
  inline void set_signature(::google::protobuf::uint32 value);

  // repeated uint64 uncompressed_size = 3;
  inline int uncompressed_size_size() const;
  inline void clear_uncompressed_size();
  static const int kUncompressedSizeFieldNumber = 3;
  inline ::google::protobuf::uint64 uncompressed_size(int index) const;
  inline void set_uncompressed_size(int index, ::google::protobuf::uint64 value);
  inline void add_uncompressed_size(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      uncompressed_size() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_uncompressed_size();

  // @@protoc_insertion_point(class_scope:PS.FilterConfig)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_clear_cache_if_done();
  inline void clear_has_clear_cache_if_done();
  inline void set_has_signature();
  inline void clear_has_signature();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int type_;
  bool clear_cache_if_done_;
  ::google::protobuf::RepeatedPtrField< ::PS::FilterConfig_FixedFloatConfig > fixed_point_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > uncompressed_size_;
  ::google::protobuf::uint32 signature_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_filter_2fproto_2ffilter_2eproto();
  friend void protobuf_AssignDesc_filter_2fproto_2ffilter_2eproto();
  friend void protobuf_ShutdownFile_filter_2fproto_2ffilter_2eproto();

  void InitAsDefaultInstance();
  static FilterConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// FilterConfig_FixedFloatConfig

// optional float min_value = 1 [default = -1];
inline bool FilterConfig_FixedFloatConfig::has_min_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FilterConfig_FixedFloatConfig::set_has_min_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FilterConfig_FixedFloatConfig::clear_has_min_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FilterConfig_FixedFloatConfig::clear_min_value() {
  min_value_ = -1;
  clear_has_min_value();
}
inline float FilterConfig_FixedFloatConfig::min_value() const {
  return min_value_;
}
inline void FilterConfig_FixedFloatConfig::set_min_value(float value) {
  set_has_min_value();
  min_value_ = value;
}

// optional float max_value = 2 [default = 1];
inline bool FilterConfig_FixedFloatConfig::has_max_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FilterConfig_FixedFloatConfig::set_has_max_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FilterConfig_FixedFloatConfig::clear_has_max_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FilterConfig_FixedFloatConfig::clear_max_value() {
  max_value_ = 1;
  clear_has_max_value();
}
inline float FilterConfig_FixedFloatConfig::max_value() const {
  return max_value_;
}
inline void FilterConfig_FixedFloatConfig::set_max_value(float value) {
  set_has_max_value();
  max_value_ = value;
}

// optional int32 num_bytes = 3 [default = 3];
inline bool FilterConfig_FixedFloatConfig::has_num_bytes() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FilterConfig_FixedFloatConfig::set_has_num_bytes() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FilterConfig_FixedFloatConfig::clear_has_num_bytes() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FilterConfig_FixedFloatConfig::clear_num_bytes() {
  num_bytes_ = 3;
  clear_has_num_bytes();
}
inline ::google::protobuf::int32 FilterConfig_FixedFloatConfig::num_bytes() const {
  return num_bytes_;
}
inline void FilterConfig_FixedFloatConfig::set_num_bytes(::google::protobuf::int32 value) {
  set_has_num_bytes();
  num_bytes_ = value;
}

// -------------------------------------------------------------------

// FilterConfig

// required .PS.FilterConfig.Type type = 1;
inline bool FilterConfig::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FilterConfig::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FilterConfig::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FilterConfig::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::PS::FilterConfig_Type FilterConfig::type() const {
  return static_cast< ::PS::FilterConfig_Type >(type_);
}
inline void FilterConfig::set_type(::PS::FilterConfig_Type value) {
  assert(::PS::FilterConfig_Type_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional bool clear_cache_if_done = 20 [default = false];
inline bool FilterConfig::has_clear_cache_if_done() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FilterConfig::set_has_clear_cache_if_done() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FilterConfig::clear_has_clear_cache_if_done() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FilterConfig::clear_clear_cache_if_done() {
  clear_cache_if_done_ = false;
  clear_has_clear_cache_if_done();
}
inline bool FilterConfig::clear_cache_if_done() const {
  return clear_cache_if_done_;
}
inline void FilterConfig::set_clear_cache_if_done(bool value) {
  set_has_clear_cache_if_done();
  clear_cache_if_done_ = value;
}

// repeated .PS.FilterConfig.FixedFloatConfig fixed_point = 4;
inline int FilterConfig::fixed_point_size() const {
  return fixed_point_.size();
}
inline void FilterConfig::clear_fixed_point() {
  fixed_point_.Clear();
}
inline const ::PS::FilterConfig_FixedFloatConfig& FilterConfig::fixed_point(int index) const {
  return fixed_point_.Get(index);
}
inline ::PS::FilterConfig_FixedFloatConfig* FilterConfig::mutable_fixed_point(int index) {
  return fixed_point_.Mutable(index);
}
inline ::PS::FilterConfig_FixedFloatConfig* FilterConfig::add_fixed_point() {
  return fixed_point_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PS::FilterConfig_FixedFloatConfig >&
FilterConfig::fixed_point() const {
  return fixed_point_;
}
inline ::google::protobuf::RepeatedPtrField< ::PS::FilterConfig_FixedFloatConfig >*
FilterConfig::mutable_fixed_point() {
  return &fixed_point_;
}

// optional uint32 signature = 2;
inline bool FilterConfig::has_signature() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FilterConfig::set_has_signature() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FilterConfig::clear_has_signature() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FilterConfig::clear_signature() {
  signature_ = 0u;
  clear_has_signature();
}
inline ::google::protobuf::uint32 FilterConfig::signature() const {
  return signature_;
}
inline void FilterConfig::set_signature(::google::protobuf::uint32 value) {
  set_has_signature();
  signature_ = value;
}

// repeated uint64 uncompressed_size = 3;
inline int FilterConfig::uncompressed_size_size() const {
  return uncompressed_size_.size();
}
inline void FilterConfig::clear_uncompressed_size() {
  uncompressed_size_.Clear();
}
inline ::google::protobuf::uint64 FilterConfig::uncompressed_size(int index) const {
  return uncompressed_size_.Get(index);
}
inline void FilterConfig::set_uncompressed_size(int index, ::google::protobuf::uint64 value) {
  uncompressed_size_.Set(index, value);
}
inline void FilterConfig::add_uncompressed_size(::google::protobuf::uint64 value) {
  uncompressed_size_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
FilterConfig::uncompressed_size() const {
  return uncompressed_size_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
FilterConfig::mutable_uncompressed_size() {
  return &uncompressed_size_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PS::FilterConfig_Type>() {
  return ::PS::FilterConfig_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_filter_2fproto_2ffilter_2eproto__INCLUDED