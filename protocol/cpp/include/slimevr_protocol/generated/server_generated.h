// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SERVER_SLIMEVR_PROTOCOL_SERVER_H_
#define FLATBUFFERS_GENERATED_SERVER_SLIMEVR_PROTOCOL_SERVER_H_

#include "flatbuffers/flatbuffers.h"

namespace slimevr_protocol {
namespace server {

struct InboundPacket;
struct InboundPacketBuilder;

struct OutboundPacket;
struct OutboundPacketBuilder;

enum class InboundUnion : uint8_t {
  NONE = 0,
  MIN = NONE,
  MAX = NONE
};

inline const InboundUnion (&EnumValuesInboundUnion())[1] {
  static const InboundUnion values[] = {
    InboundUnion::NONE
  };
  return values;
}

inline const char * const *EnumNamesInboundUnion() {
  static const char * const names[2] = {
    "NONE",
    nullptr
  };
  return names;
}

inline const char *EnumNameInboundUnion(InboundUnion e) {
  if (flatbuffers::IsOutRange(e, InboundUnion::NONE, InboundUnion::NONE)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesInboundUnion()[index];
}

template<typename T> struct InboundUnionTraits {
  static const InboundUnion enum_value = InboundUnion::NONE;
};

bool VerifyInboundUnion(flatbuffers::Verifier &verifier, const void *obj, InboundUnion type);
bool VerifyInboundUnionVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<InboundUnion> *types);

enum class OutboundUnion : uint8_t {
  NONE = 0,
  MIN = NONE,
  MAX = NONE
};

inline const OutboundUnion (&EnumValuesOutboundUnion())[1] {
  static const OutboundUnion values[] = {
    OutboundUnion::NONE
  };
  return values;
}

inline const char * const *EnumNamesOutboundUnion() {
  static const char * const names[2] = {
    "NONE",
    nullptr
  };
  return names;
}

inline const char *EnumNameOutboundUnion(OutboundUnion e) {
  if (flatbuffers::IsOutRange(e, OutboundUnion::NONE, OutboundUnion::NONE)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesOutboundUnion()[index];
}

template<typename T> struct OutboundUnionTraits {
  static const OutboundUnion enum_value = OutboundUnion::NONE;
};

bool VerifyOutboundUnion(flatbuffers::Verifier &verifier, const void *obj, OutboundUnion type);
bool VerifyOutboundUnionVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<OutboundUnion> *types);

struct InboundPacket FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef InboundPacketBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ACKNOWLEDGE_ME = 4,
    VT_PACKET_TYPE = 6,
    VT_PACKET = 8
  };
  bool acknowledge_me() const {
    return GetField<uint8_t>(VT_ACKNOWLEDGE_ME, 0) != 0;
  }
  slimevr_protocol::server::InboundUnion packet_type() const {
    return static_cast<slimevr_protocol::server::InboundUnion>(GetField<uint8_t>(VT_PACKET_TYPE, 0));
  }
  const void *packet() const {
    return GetPointer<const void *>(VT_PACKET);
  }
  template<typename T> const T *packet_as() const;
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_ACKNOWLEDGE_ME, 1) &&
           VerifyField<uint8_t>(verifier, VT_PACKET_TYPE, 1) &&
           VerifyOffset(verifier, VT_PACKET) &&
           VerifyInboundUnion(verifier, packet(), packet_type()) &&
           verifier.EndTable();
  }
};

struct InboundPacketBuilder {
  typedef InboundPacket Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_acknowledge_me(bool acknowledge_me) {
    fbb_.AddElement<uint8_t>(InboundPacket::VT_ACKNOWLEDGE_ME, static_cast<uint8_t>(acknowledge_me), 0);
  }
  void add_packet_type(slimevr_protocol::server::InboundUnion packet_type) {
    fbb_.AddElement<uint8_t>(InboundPacket::VT_PACKET_TYPE, static_cast<uint8_t>(packet_type), 0);
  }
  void add_packet(flatbuffers::Offset<void> packet) {
    fbb_.AddOffset(InboundPacket::VT_PACKET, packet);
  }
  explicit InboundPacketBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<InboundPacket> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<InboundPacket>(end);
    return o;
  }
};

inline flatbuffers::Offset<InboundPacket> CreateInboundPacket(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool acknowledge_me = false,
    slimevr_protocol::server::InboundUnion packet_type = slimevr_protocol::server::InboundUnion::NONE,
    flatbuffers::Offset<void> packet = 0) {
  InboundPacketBuilder builder_(_fbb);
  builder_.add_packet(packet);
  builder_.add_packet_type(packet_type);
  builder_.add_acknowledge_me(acknowledge_me);
  return builder_.Finish();
}

struct OutboundPacket FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef OutboundPacketBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ACKNOWLEDGE_ME = 4,
    VT_PACKET_TYPE = 6,
    VT_PACKET = 8
  };
  bool acknowledge_me() const {
    return GetField<uint8_t>(VT_ACKNOWLEDGE_ME, 0) != 0;
  }
  slimevr_protocol::server::OutboundUnion packet_type() const {
    return static_cast<slimevr_protocol::server::OutboundUnion>(GetField<uint8_t>(VT_PACKET_TYPE, 0));
  }
  const void *packet() const {
    return GetPointer<const void *>(VT_PACKET);
  }
  template<typename T> const T *packet_as() const;
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_ACKNOWLEDGE_ME, 1) &&
           VerifyField<uint8_t>(verifier, VT_PACKET_TYPE, 1) &&
           VerifyOffset(verifier, VT_PACKET) &&
           VerifyOutboundUnion(verifier, packet(), packet_type()) &&
           verifier.EndTable();
  }
};

struct OutboundPacketBuilder {
  typedef OutboundPacket Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_acknowledge_me(bool acknowledge_me) {
    fbb_.AddElement<uint8_t>(OutboundPacket::VT_ACKNOWLEDGE_ME, static_cast<uint8_t>(acknowledge_me), 0);
  }
  void add_packet_type(slimevr_protocol::server::OutboundUnion packet_type) {
    fbb_.AddElement<uint8_t>(OutboundPacket::VT_PACKET_TYPE, static_cast<uint8_t>(packet_type), 0);
  }
  void add_packet(flatbuffers::Offset<void> packet) {
    fbb_.AddOffset(OutboundPacket::VT_PACKET, packet);
  }
  explicit OutboundPacketBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<OutboundPacket> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<OutboundPacket>(end);
    return o;
  }
};

inline flatbuffers::Offset<OutboundPacket> CreateOutboundPacket(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool acknowledge_me = false,
    slimevr_protocol::server::OutboundUnion packet_type = slimevr_protocol::server::OutboundUnion::NONE,
    flatbuffers::Offset<void> packet = 0) {
  OutboundPacketBuilder builder_(_fbb);
  builder_.add_packet(packet);
  builder_.add_packet_type(packet_type);
  builder_.add_acknowledge_me(acknowledge_me);
  return builder_.Finish();
}

inline bool VerifyInboundUnion(flatbuffers::Verifier &verifier, const void *obj, InboundUnion type) {
  switch (type) {
    case InboundUnion::NONE: {
      return true;
    }
    default: return true;
  }
}

inline bool VerifyInboundUnionVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<InboundUnion> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyInboundUnion(
        verifier,  values->Get(i), types->GetEnum<InboundUnion>(i))) {
      return false;
    }
  }
  return true;
}

inline bool VerifyOutboundUnion(flatbuffers::Verifier &verifier, const void *obj, OutboundUnion type) {
  switch (type) {
    case OutboundUnion::NONE: {
      return true;
    }
    default: return true;
  }
}

inline bool VerifyOutboundUnionVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<OutboundUnion> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyOutboundUnion(
        verifier,  values->Get(i), types->GetEnum<OutboundUnion>(i))) {
      return false;
    }
  }
  return true;
}

}  // namespace server
}  // namespace slimevr_protocol

#endif  // FLATBUFFERS_GENERATED_SERVER_SLIMEVR_PROTOCOL_SERVER_H_
