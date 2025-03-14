// automatically generated by the FlatBuffers compiler, do not modify

package slimevr_protocol.firmware;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class DeviceInfoRequest extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_2_0_0(); }
  public static DeviceInfoRequest getRootAsDeviceInfoRequest(ByteBuffer _bb) { return getRootAsDeviceInfoRequest(_bb, new DeviceInfoRequest()); }
  public static DeviceInfoRequest getRootAsDeviceInfoRequest(ByteBuffer _bb, DeviceInfoRequest obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public DeviceInfoRequest __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }


  public static void startDeviceInfoRequest(FlatBufferBuilder builder) { builder.startTable(0); }
  public static int endDeviceInfoRequest(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public DeviceInfoRequest get(int j) { return get(new DeviceInfoRequest(), j); }
    public DeviceInfoRequest get(DeviceInfoRequest obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}

