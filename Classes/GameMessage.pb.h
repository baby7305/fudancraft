// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameMessage.proto


//#ifdef _DEBUG
//#pragma comment (lib, "libprotobuf-lited.lib")
//#else
//#pragma comment (lib, "libprotobuf-lite.lib")
//#endif

#pragma comment (lib, "libprotobuf-lited.lib")


#ifndef PROTOBUF_GameMessage_2eproto__INCLUDED
#define PROTOBUF_GameMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include "GridMap.h"

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
class GameMessage;
class GameMessageDefaultTypeInternal;
extern GameMessageDefaultTypeInternal _GameMessage_default_instance_;
class GameMessageSet;
class GameMessageSetDefaultTypeInternal;
extern GameMessageSetDefaultTypeInternal _GameMessageSet_default_instance_;
class MsgGridPath;
class GridPathDefaultTypeInternal;
extern GridPathDefaultTypeInternal _GridPath_default_instance_;
class MsgGridPoint;
class GridPointDefaultTypeInternal;
extern GridPointDefaultTypeInternal _GridPoint_default_instance_;

namespace protobuf_GameMessage_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_GameMessage_2eproto

enum GameMessage_CmdCode {
  GameMessage_CmdCode_CRT = 0,
  GameMessage_CmdCode_MOV = 1,
  GameMessage_CmdCode_ATK = 2,
  GameMessage_CmdCode_TRC = 3,
  GameMessage_CmdCode_RFP = 4,
  GameMessage_CmdCode_UDP = 5,
  GameMessage_CmdCode_GameMessage_CmdCode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GameMessage_CmdCode_GameMessage_CmdCode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GameMessage_CmdCode_IsValid(int value);
const GameMessage_CmdCode GameMessage_CmdCode_CmdCode_MIN = GameMessage_CmdCode_CRT;
const GameMessage_CmdCode GameMessage_CmdCode_CmdCode_MAX = GameMessage_CmdCode_ATK;
const int GameMessage_CmdCode_CmdCode_ARRAYSIZE = GameMessage_CmdCode_CmdCode_MAX + 1;

// ===================================================================

class GameMessage : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:GameMessage) */ {
 public:
  GameMessage();
  virtual ~GameMessage();

  GameMessage(const GameMessage& from);

  inline GameMessage& operator=(const GameMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const GameMessage& default_instance();

  static inline const GameMessage* internal_default_instance() {
    return reinterpret_cast<const GameMessage*>(
               &_GameMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(GameMessage* other);

  // implements Message ----------------------------------------------

  inline GameMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  GameMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const GameMessage& from);
  void MergeFrom(const GameMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GameMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef GameMessage_CmdCode CmdCode;
  static const CmdCode CRT =
    GameMessage_CmdCode_CRT;
  static const CmdCode MOV =
    GameMessage_CmdCode_MOV;
  static const CmdCode ATK =
    GameMessage_CmdCode_ATK;
  static const CmdCode TRC =
	  GameMessage_CmdCode_TRC;
  static const CmdCode RFP =
	  GameMessage_CmdCode_RFP;
  static const CmdCode UDP =
	  GameMessage_CmdCode_UDP;
  static inline bool CmdCode_IsValid(int value) {
    return GameMessage_CmdCode_IsValid(value);
  }
  static const CmdCode CmdCode_MIN =
    GameMessage_CmdCode_CmdCode_MIN;
  static const CmdCode CmdCode_MAX =
    GameMessage_CmdCode_CmdCode_MAX;
  static const int CmdCode_ARRAYSIZE =
    GameMessage_CmdCode_CmdCode_ARRAYSIZE;

  // accessors -------------------------------------------------------

	void genGameMessage(CmdCode _cmd_code, int _unit_0, int _unit_1, int _damage, int _camp, int _unit_type, const GridPath& _grid_path);

  // .MsgGridPath grid_path = 5;
  bool has_grid_path() const;
  void clear_grid_path();
  static const int kGridPathFieldNumber = 5;
  const ::MsgGridPath& grid_path() const;
  ::MsgGridPath* mutable_grid_path();
  ::MsgGridPath* release_grid_path();
  void set_allocated_grid_path(::MsgGridPath* grid_path);

  // .GameMessage.CmdCode cmd_code = 1;
  void clear_cmd_code();
  static const int kCmdCodeFieldNumber = 1;
  ::GameMessage_CmdCode cmd_code() const;
  void set_cmd_code(::GameMessage_CmdCode value);

  // int32 unit_0 = 2;
  void clear_unit_0();
  static const int kUnit0FieldNumber = 2;
  ::google::protobuf::int32 unit_0() const;
  void set_unit_0(::google::protobuf::int32 value);

  // int32 unit_1 = 3;
  void clear_unit_1();
  static const int kUnit1FieldNumber = 3;
  ::google::protobuf::int32 unit_1() const;
  void set_unit_1(::google::protobuf::int32 value);

  // int32 damage = 4;
  void clear_damage();
  static const int kDamageFieldNumber = 4;
  ::google::protobuf::int32 damage() const;
  void set_damage(::google::protobuf::int32 value);

  // int32 camp = 6;
  void clear_camp();
  static const int kCampFieldNumber = 6;
  ::google::protobuf::int32 camp() const;
  void set_camp(::google::protobuf::int32 value);

  // int32 unit_type = 7;
  void clear_unit_type();
  static const int kUnitTypeFieldNumber = 7;
  ::google::protobuf::int32 unit_type() const;
  void set_unit_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GameMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::MsgGridPath* grid_path_;
  int cmd_code_;
  ::google::protobuf::int32 unit_0_;
  ::google::protobuf::int32 unit_1_;
  ::google::protobuf::int32 damage_;
  ::google::protobuf::int32 camp_;
  ::google::protobuf::int32 unit_type_;
  mutable int _cached_size_;
  friend struct protobuf_GameMessage_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class MsgGridPoint : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:MsgGridPoint) */ {
 public:
  MsgGridPoint();
  virtual ~MsgGridPoint();

  MsgGridPoint(const MsgGridPoint& from);

  inline MsgGridPoint& operator=(const MsgGridPoint& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgGridPoint& default_instance();

  static inline const MsgGridPoint* internal_default_instance() {
    return reinterpret_cast<const MsgGridPoint*>(
               &_GridPoint_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(MsgGridPoint* other);

  // implements Message ----------------------------------------------

  inline MsgGridPoint* New() const PROTOBUF_FINAL { return New(NULL); }

  MsgGridPoint* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const MsgGridPoint& from);
  void MergeFrom(const MsgGridPoint& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MsgGridPoint* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // int32 y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MsgGridPoint)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  mutable int _cached_size_;
  friend struct protobuf_GameMessage_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class MsgGridPath : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:MsgGridPath) */ {
 public:
  MsgGridPath();
  virtual ~MsgGridPath();

  MsgGridPath(const MsgGridPath& from);

  inline MsgGridPath& operator=(const MsgGridPath& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgGridPath& default_instance();

  static inline const MsgGridPath* internal_default_instance() {
    return reinterpret_cast<const MsgGridPath*>(
               &_GridPath_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(MsgGridPath* other);

  // implements Message ----------------------------------------------

  inline MsgGridPath* New() const PROTOBUF_FINAL { return New(NULL); }

  MsgGridPath* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const MsgGridPath& from);
  void MergeFrom(const MsgGridPath& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MsgGridPath* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .MsgGridPoint grid_point = 1;
  int grid_point_size() const;
  void clear_grid_point();
  static const int kGridPointFieldNumber = 1;
  const ::MsgGridPoint& grid_point(int index) const;
  ::MsgGridPoint* mutable_grid_point(int index);
  ::MsgGridPoint* add_grid_point();
  ::google::protobuf::RepeatedPtrField< ::MsgGridPoint >*
      mutable_grid_point();
  const ::google::protobuf::RepeatedPtrField< ::MsgGridPoint >&
      grid_point() const;

  // @@protoc_insertion_point(class_scope:MsgGridPath)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::MsgGridPoint > grid_point_;
  mutable int _cached_size_;
  friend struct protobuf_GameMessage_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GameMessageSet : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:GameMessageSet) */ {
 public:
  GameMessageSet();
  virtual ~GameMessageSet();

  GameMessageSet(const GameMessageSet& from);

  inline GameMessageSet& operator=(const GameMessageSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const GameMessageSet& default_instance();

  static inline const GameMessageSet* internal_default_instance() {
    return reinterpret_cast<const GameMessageSet*>(
               &_GameMessageSet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(GameMessageSet* other);

  // implements Message ----------------------------------------------

  inline GameMessageSet* New() const PROTOBUF_FINAL { return New(NULL); }

  GameMessageSet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const GameMessageSet& from);
  void MergeFrom(const GameMessageSet& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GameMessageSet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .GameMessage game_message = 1;
  int game_message_size() const;
  void clear_game_message();
  static const int kGameMessageFieldNumber = 1;
  const ::GameMessage& game_message(int index) const;
  ::GameMessage* mutable_game_message(int index);
  ::GameMessage* add_game_message();
  ::google::protobuf::RepeatedPtrField< ::GameMessage >*
      mutable_game_message();
  const ::google::protobuf::RepeatedPtrField< ::GameMessage >&
      game_message() const;

  // @@protoc_insertion_point(class_scope:GameMessageSet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::GameMessage > game_message_;
  mutable int _cached_size_;
  friend struct protobuf_GameMessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GameMessage

// .GameMessage.CmdCode cmd_code = 1;
inline void GameMessage::clear_cmd_code() {
  cmd_code_ = 0;
}
inline ::GameMessage_CmdCode GameMessage::cmd_code() const {
  // @@protoc_insertion_point(field_get:GameMessage.cmd_code)
  return static_cast< ::GameMessage_CmdCode >(cmd_code_);
}
inline void GameMessage::set_cmd_code(::GameMessage_CmdCode value) {
  
  cmd_code_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.cmd_code)
}

// int32 unit_0 = 2;
inline void GameMessage::clear_unit_0() {
  unit_0_ = 0;
}
inline ::google::protobuf::int32 GameMessage::unit_0() const {
  // @@protoc_insertion_point(field_get:GameMessage.unit_0)
  return unit_0_;
}
inline void GameMessage::set_unit_0(::google::protobuf::int32 value) {
  
  unit_0_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.unit_0)
}

// int32 unit_1 = 3;
inline void GameMessage::clear_unit_1() {
  unit_1_ = 0;
}
inline ::google::protobuf::int32 GameMessage::unit_1() const {
  // @@protoc_insertion_point(field_get:GameMessage.unit_1)
  return unit_1_;
}
inline void GameMessage::set_unit_1(::google::protobuf::int32 value) {
  
  unit_1_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.unit_1)
}

// int32 damage = 4;
inline void GameMessage::clear_damage() {
  damage_ = 0;
}
inline ::google::protobuf::int32 GameMessage::damage() const {
  // @@protoc_insertion_point(field_get:GameMessage.damage)
  return damage_;
}
inline void GameMessage::set_damage(::google::protobuf::int32 value) {
  
  damage_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.damage)
}

// .MsgGridPath grid_path = 5;
inline bool GameMessage::has_grid_path() const {
  return this != internal_default_instance() && grid_path_ != NULL;
}
inline void GameMessage::clear_grid_path() {
  if (GetArenaNoVirtual() == NULL && grid_path_ != NULL) delete grid_path_;
  grid_path_ = NULL;
}
inline const ::MsgGridPath& GameMessage::grid_path() const {
  // @@protoc_insertion_point(field_get:GameMessage.grid_path)
  return grid_path_ != NULL ? *grid_path_
                         : *::MsgGridPath::internal_default_instance();
}
inline ::MsgGridPath* GameMessage::mutable_grid_path() {
  
  if (grid_path_ == NULL) {
    grid_path_ = new ::MsgGridPath;
  }
  // @@protoc_insertion_point(field_mutable:GameMessage.grid_path)
  return grid_path_;
}
inline ::MsgGridPath* GameMessage::release_grid_path() {
  // @@protoc_insertion_point(field_release:GameMessage.grid_path)
  
  ::MsgGridPath* temp = grid_path_;
  grid_path_ = NULL;
  return temp;
}
inline void GameMessage::set_allocated_grid_path(::MsgGridPath* grid_path) {
  delete grid_path_;
  grid_path_ = grid_path;
  if (grid_path) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:GameMessage.grid_path)
}

// int32 camp = 6;
inline void GameMessage::clear_camp() {
  camp_ = 0;
}
inline ::google::protobuf::int32 GameMessage::camp() const {
  // @@protoc_insertion_point(field_get:GameMessage.camp)
  return camp_;
}
inline void GameMessage::set_camp(::google::protobuf::int32 value) {
  
  camp_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.camp)
}

// int32 unit_type = 7;
inline void GameMessage::clear_unit_type() {
  unit_type_ = 0;
}
inline ::google::protobuf::int32 GameMessage::unit_type() const {
  // @@protoc_insertion_point(field_get:GameMessage.unit_type)
  return unit_type_;
}
inline void GameMessage::set_unit_type(::google::protobuf::int32 value) {
  
  unit_type_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.unit_type)
}

// -------------------------------------------------------------------

// MsgGridPoint

// int32 x = 1;
inline void MsgGridPoint::clear_x() {
  x_ = 0;
}
inline ::google::protobuf::int32 MsgGridPoint::x() const {
  // @@protoc_insertion_point(field_get:MsgGridPoint.x)
  return x_;
}
inline void MsgGridPoint::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:MsgGridPoint.x)
}

// int32 y = 2;
inline void MsgGridPoint::clear_y() {
  y_ = 0;
}
inline ::google::protobuf::int32 MsgGridPoint::y() const {
  // @@protoc_insertion_point(field_get:MsgGridPoint.y)
  return y_;
}
inline void MsgGridPoint::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:MsgGridPoint.y)
}

// -------------------------------------------------------------------

// MsgGridPath

// repeated .MsgGridPoint grid_point = 1;
inline int MsgGridPath::grid_point_size() const {
  return grid_point_.size();
}
inline void MsgGridPath::clear_grid_point() {
  grid_point_.Clear();
}
inline const ::MsgGridPoint& MsgGridPath::grid_point(int index) const {
  // @@protoc_insertion_point(field_get:MsgGridPath.grid_point)
  return grid_point_.Get(index);
}
inline ::MsgGridPoint* MsgGridPath::mutable_grid_point(int index) {
  // @@protoc_insertion_point(field_mutable:MsgGridPath.grid_point)
  return grid_point_.Mutable(index);
}
inline ::MsgGridPoint* MsgGridPath::add_grid_point() {
  // @@protoc_insertion_point(field_add:MsgGridPath.grid_point)
  return grid_point_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::MsgGridPoint >*
MsgGridPath::mutable_grid_point() {
  // @@protoc_insertion_point(field_mutable_list:MsgGridPath.grid_point)
  return &grid_point_;
}
inline const ::google::protobuf::RepeatedPtrField< ::MsgGridPoint >&
MsgGridPath::grid_point() const {
  // @@protoc_insertion_point(field_list:MsgGridPath.grid_point)
  return grid_point_;
}

// -------------------------------------------------------------------

// GameMessageSet

// repeated .GameMessage game_message = 1;
inline int GameMessageSet::game_message_size() const {
  return game_message_.size();
}
inline void GameMessageSet::clear_game_message() {
  game_message_.Clear();
}
inline const ::GameMessage& GameMessageSet::game_message(int index) const {
  // @@protoc_insertion_point(field_get:GameMessageSet.game_message)
  return game_message_.Get(index);
}
inline ::GameMessage* GameMessageSet::mutable_game_message(int index) {
  // @@protoc_insertion_point(field_mutable:GameMessageSet.game_message)
  return game_message_.Mutable(index);
}
inline ::GameMessage* GameMessageSet::add_game_message() {
  // @@protoc_insertion_point(field_add:GameMessageSet.game_message)
  return game_message_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GameMessage >*
GameMessageSet::mutable_game_message() {
  // @@protoc_insertion_point(field_mutable_list:GameMessageSet.game_message)
  return &game_message_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GameMessage >&
GameMessageSet::game_message() const {
  // @@protoc_insertion_point(field_list:GameMessageSet.game_message)
  return game_message_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::GameMessage_CmdCode> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GameMessage_2eproto__INCLUDED
