// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_HARDWAREINFO_SLIMEVR_PROTOCOL_HARDWARE_INFO_H_
#define FLATBUFFERS_GENERATED_HARDWAREINFO_SLIMEVR_PROTOCOL_HARDWARE_INFO_H_

#include "flatbuffers/flatbuffers.h"

#include "datatypes_generated.h"

namespace slimevr_protocol {
namespace hardware_info {

struct DeviceInfo;
struct DeviceInfoBuilder;

struct ImuStatus;
struct ImuStatusBuilder;

struct McuStatus;
struct McuStatusBuilder;

enum class McuId : uint16_t {
  Other = 0,
  ESP8266 = 1,
  ESP32_S2 = 2,
  ESP32_S3 = 3,
  ESP32_C3 = 4,
  MIN = Other,
  MAX = ESP32_C3
};

inline const McuId (&EnumValuesMcuId())[5] {
  static const McuId values[] = {
    McuId::Other,
    McuId::ESP8266,
    McuId::ESP32_S2,
    McuId::ESP32_S3,
    McuId::ESP32_C3
  };
  return values;
}

inline const char * const *EnumNamesMcuId() {
  static const char * const names[6] = {
    "Other",
    "ESP8266",
    "ESP32_S2",
    "ESP32_S3",
    "ESP32_C3",
    nullptr
  };
  return names;
}

inline const char *EnumNameMcuId(McuId e) {
  if (flatbuffers::IsOutRange(e, McuId::Other, McuId::ESP32_C3)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesMcuId()[index];
}

enum class ImuId : uint16_t {
  Other = 0,
  BNO085 = 1,
  BNO080 = 2,
  MPU6050 = 3,
  MPU9250 = 4,
  MPU6500 = 5,
  MIN = Other,
  MAX = MPU6500
};

inline const ImuId (&EnumValuesImuId())[6] {
  static const ImuId values[] = {
    ImuId::Other,
    ImuId::BNO085,
    ImuId::BNO080,
    ImuId::MPU6050,
    ImuId::MPU9250,
    ImuId::MPU6500
  };
  return values;
}

inline const char * const *EnumNamesImuId() {
  static const char * const names[7] = {
    "Other",
    "BNO085",
    "BNO080",
    "MPU6050",
    "MPU9250",
    "MPU6500",
    nullptr
  };
  return names;
}

inline const char *EnumNameImuId(ImuId e) {
  if (flatbuffers::IsOutRange(e, ImuId::Other, ImuId::MPU6500)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesImuId()[index];
}

struct DeviceInfo FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DeviceInfoBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MCU_ID = 4,
    VT_IMU_IDS = 6,
    VT_DISPLAY_NAME = 8,
    VT_MODEL = 10,
    VT_MANUFACTURER = 12,
    VT_FIRMWARE_VERSION = 14,
    VT_MAC_ADDRESS = 16
  };
  slimevr_protocol::hardware_info::McuId mcu_id() const {
    return static_cast<slimevr_protocol::hardware_info::McuId>(GetField<uint16_t>(VT_MCU_ID, 0));
  }
  const flatbuffers::Vector<slimevr_protocol::hardware_info::ImuId> *imu_ids() const {
    return GetPointer<const flatbuffers::Vector<slimevr_protocol::hardware_info::ImuId> *>(VT_IMU_IDS);
  }
  const flatbuffers::String *display_name() const {
    return GetPointer<const flatbuffers::String *>(VT_DISPLAY_NAME);
  }
  const flatbuffers::String *model() const {
    return GetPointer<const flatbuffers::String *>(VT_MODEL);
  }
  const flatbuffers::String *manufacturer() const {
    return GetPointer<const flatbuffers::String *>(VT_MANUFACTURER);
  }
  const flatbuffers::String *firmware_version() const {
    return GetPointer<const flatbuffers::String *>(VT_FIRMWARE_VERSION);
  }
  const slimevr_protocol::datatypes::MacAddress *mac_address() const {
    return GetStruct<const slimevr_protocol::datatypes::MacAddress *>(VT_MAC_ADDRESS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint16_t>(verifier, VT_MCU_ID, 2) &&
           VerifyOffset(verifier, VT_IMU_IDS) &&
           verifier.VerifyVector(imu_ids()) &&
           VerifyOffset(verifier, VT_DISPLAY_NAME) &&
           verifier.VerifyString(display_name()) &&
           VerifyOffset(verifier, VT_MODEL) &&
           verifier.VerifyString(model()) &&
           VerifyOffset(verifier, VT_MANUFACTURER) &&
           verifier.VerifyString(manufacturer()) &&
           VerifyOffset(verifier, VT_FIRMWARE_VERSION) &&
           verifier.VerifyString(firmware_version()) &&
           VerifyField<slimevr_protocol::datatypes::MacAddress>(verifier, VT_MAC_ADDRESS, 1) &&
           verifier.EndTable();
  }
};

struct DeviceInfoBuilder {
  typedef DeviceInfo Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_mcu_id(slimevr_protocol::hardware_info::McuId mcu_id) {
    fbb_.AddElement<uint16_t>(DeviceInfo::VT_MCU_ID, static_cast<uint16_t>(mcu_id), 0);
  }
  void add_imu_ids(flatbuffers::Offset<flatbuffers::Vector<slimevr_protocol::hardware_info::ImuId>> imu_ids) {
    fbb_.AddOffset(DeviceInfo::VT_IMU_IDS, imu_ids);
  }
  void add_display_name(flatbuffers::Offset<flatbuffers::String> display_name) {
    fbb_.AddOffset(DeviceInfo::VT_DISPLAY_NAME, display_name);
  }
  void add_model(flatbuffers::Offset<flatbuffers::String> model) {
    fbb_.AddOffset(DeviceInfo::VT_MODEL, model);
  }
  void add_manufacturer(flatbuffers::Offset<flatbuffers::String> manufacturer) {
    fbb_.AddOffset(DeviceInfo::VT_MANUFACTURER, manufacturer);
  }
  void add_firmware_version(flatbuffers::Offset<flatbuffers::String> firmware_version) {
    fbb_.AddOffset(DeviceInfo::VT_FIRMWARE_VERSION, firmware_version);
  }
  void add_mac_address(const slimevr_protocol::datatypes::MacAddress *mac_address) {
    fbb_.AddStruct(DeviceInfo::VT_MAC_ADDRESS, mac_address);
  }
  explicit DeviceInfoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<DeviceInfo> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DeviceInfo>(end);
    return o;
  }
};

inline flatbuffers::Offset<DeviceInfo> CreateDeviceInfo(
    flatbuffers::FlatBufferBuilder &_fbb,
    slimevr_protocol::hardware_info::McuId mcu_id = slimevr_protocol::hardware_info::McuId::Other,
    flatbuffers::Offset<flatbuffers::Vector<slimevr_protocol::hardware_info::ImuId>> imu_ids = 0,
    flatbuffers::Offset<flatbuffers::String> display_name = 0,
    flatbuffers::Offset<flatbuffers::String> model = 0,
    flatbuffers::Offset<flatbuffers::String> manufacturer = 0,
    flatbuffers::Offset<flatbuffers::String> firmware_version = 0,
    const slimevr_protocol::datatypes::MacAddress *mac_address = nullptr) {
  DeviceInfoBuilder builder_(_fbb);
  builder_.add_mac_address(mac_address);
  builder_.add_firmware_version(firmware_version);
  builder_.add_manufacturer(manufacturer);
  builder_.add_model(model);
  builder_.add_display_name(display_name);
  builder_.add_imu_ids(imu_ids);
  builder_.add_mcu_id(mcu_id);
  return builder_.Finish();
}

inline flatbuffers::Offset<DeviceInfo> CreateDeviceInfoDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    slimevr_protocol::hardware_info::McuId mcu_id = slimevr_protocol::hardware_info::McuId::Other,
    const std::vector<slimevr_protocol::hardware_info::ImuId> *imu_ids = nullptr,
    const char *display_name = nullptr,
    const char *model = nullptr,
    const char *manufacturer = nullptr,
    const char *firmware_version = nullptr,
    const slimevr_protocol::datatypes::MacAddress *mac_address = nullptr) {
  auto imu_ids__ = imu_ids ? _fbb.CreateVector<slimevr_protocol::hardware_info::ImuId>(*imu_ids) : 0;
  auto display_name__ = display_name ? _fbb.CreateString(display_name) : 0;
  auto model__ = model ? _fbb.CreateString(model) : 0;
  auto manufacturer__ = manufacturer ? _fbb.CreateString(manufacturer) : 0;
  auto firmware_version__ = firmware_version ? _fbb.CreateString(firmware_version) : 0;
  return slimevr_protocol::hardware_info::CreateDeviceInfo(
      _fbb,
      mcu_id,
      imu_ids__,
      display_name__,
      model__,
      manufacturer__,
      firmware_version__,
      mac_address);
}

struct ImuStatus FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ImuStatusBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TEMP = 4,
    VT_POLL_RATE = 6
  };
  float temp() const {
    return GetField<float>(VT_TEMP, 0.0f);
  }
  float poll_rate() const {
    return GetField<float>(VT_POLL_RATE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_TEMP, 4) &&
           VerifyField<float>(verifier, VT_POLL_RATE, 4) &&
           verifier.EndTable();
  }
};

struct ImuStatusBuilder {
  typedef ImuStatus Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_temp(float temp) {
    fbb_.AddElement<float>(ImuStatus::VT_TEMP, temp, 0.0f);
  }
  void add_poll_rate(float poll_rate) {
    fbb_.AddElement<float>(ImuStatus::VT_POLL_RATE, poll_rate, 0.0f);
  }
  explicit ImuStatusBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<ImuStatus> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ImuStatus>(end);
    return o;
  }
};

inline flatbuffers::Offset<ImuStatus> CreateImuStatus(
    flatbuffers::FlatBufferBuilder &_fbb,
    float temp = 0.0f,
    float poll_rate = 0.0f) {
  ImuStatusBuilder builder_(_fbb);
  builder_.add_poll_rate(poll_rate);
  builder_.add_temp(temp);
  return builder_.Finish();
}

struct McuStatus FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef McuStatusBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TEMP = 4
  };
  float temp() const {
    return GetField<float>(VT_TEMP, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_TEMP, 4) &&
           verifier.EndTable();
  }
};

struct McuStatusBuilder {
  typedef McuStatus Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_temp(float temp) {
    fbb_.AddElement<float>(McuStatus::VT_TEMP, temp, 0.0f);
  }
  explicit McuStatusBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<McuStatus> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<McuStatus>(end);
    return o;
  }
};

inline flatbuffers::Offset<McuStatus> CreateMcuStatus(
    flatbuffers::FlatBufferBuilder &_fbb,
    float temp = 0.0f) {
  McuStatusBuilder builder_(_fbb);
  builder_.add_temp(temp);
  return builder_.Finish();
}

}  // namespace hardware_info
}  // namespace slimevr_protocol

#endif  // FLATBUFFERS_GENERATED_HARDWAREINFO_SLIMEVR_PROTOCOL_HARDWARE_INFO_H_
