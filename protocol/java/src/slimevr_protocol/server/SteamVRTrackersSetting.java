// automatically generated by the FlatBuffers compiler, do not modify

package slimevr_protocol.server;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class SteamVRTrackersSetting extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_2_0_0(); }
  public static SteamVRTrackersSetting getRootAsSteamVRTrackersSetting(ByteBuffer _bb) { return getRootAsSteamVRTrackersSetting(_bb, new SteamVRTrackersSetting()); }
  public static SteamVRTrackersSetting getRootAsSteamVRTrackersSetting(ByteBuffer _bb, SteamVRTrackersSetting obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public SteamVRTrackersSetting __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public boolean waist() { int o = __offset(4); return o != 0 ? 0!=bb.get(o + bb_pos) : false; }
  public boolean chest() { int o = __offset(6); return o != 0 ? 0!=bb.get(o + bb_pos) : false; }
  public boolean legs() { int o = __offset(8); return o != 0 ? 0!=bb.get(o + bb_pos) : false; }
  public boolean knees() { int o = __offset(10); return o != 0 ? 0!=bb.get(o + bb_pos) : false; }
  public boolean elbows() { int o = __offset(12); return o != 0 ? 0!=bb.get(o + bb_pos) : false; }

  public static int createSteamVRTrackersSetting(FlatBufferBuilder builder,
      boolean waist,
      boolean chest,
      boolean legs,
      boolean knees,
      boolean elbows) {
    builder.startTable(5);
    SteamVRTrackersSetting.addElbows(builder, elbows);
    SteamVRTrackersSetting.addKnees(builder, knees);
    SteamVRTrackersSetting.addLegs(builder, legs);
    SteamVRTrackersSetting.addChest(builder, chest);
    SteamVRTrackersSetting.addWaist(builder, waist);
    return SteamVRTrackersSetting.endSteamVRTrackersSetting(builder);
  }

  public static void startSteamVRTrackersSetting(FlatBufferBuilder builder) { builder.startTable(5); }
  public static void addWaist(FlatBufferBuilder builder, boolean waist) { builder.addBoolean(0, waist, false); }
  public static void addChest(FlatBufferBuilder builder, boolean chest) { builder.addBoolean(1, chest, false); }
  public static void addLegs(FlatBufferBuilder builder, boolean legs) { builder.addBoolean(2, legs, false); }
  public static void addKnees(FlatBufferBuilder builder, boolean knees) { builder.addBoolean(3, knees, false); }
  public static void addElbows(FlatBufferBuilder builder, boolean elbows) { builder.addBoolean(4, elbows, false); }
  public static int endSteamVRTrackersSetting(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public SteamVRTrackersSetting get(int j) { return get(new SteamVRTrackersSetting(), j); }
    public SteamVRTrackersSetting get(SteamVRTrackersSetting obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}

