// automatically generated by the FlatBuffers compiler, do not modify

package slimevr_protocol.server;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class SkeletonPart extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_2_0_0(); }
  public static SkeletonPart getRootAsSkeletonPart(ByteBuffer _bb) { return getRootAsSkeletonPart(_bb, new SkeletonPart()); }
  public static SkeletonPart getRootAsSkeletonPart(ByteBuffer _bb, SkeletonPart obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public SkeletonPart __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public int id() { int o = __offset(4); return o != 0 ? bb.get(o + bb_pos) & 0xFF : 0; }
  public float value() { int o = __offset(6); return o != 0 ? bb.getFloat(o + bb_pos) : 0.0f; }

  public static int createSkeletonPart(FlatBufferBuilder builder,
      int id,
      float value) {
    builder.startTable(2);
    SkeletonPart.addValue(builder, value);
    SkeletonPart.addId(builder, id);
    return SkeletonPart.endSkeletonPart(builder);
  }

  public static void startSkeletonPart(FlatBufferBuilder builder) { builder.startTable(2); }
  public static void addId(FlatBufferBuilder builder, int id) { builder.addByte(0, (byte) id, (byte) 0); }
  public static void addValue(FlatBufferBuilder builder, float value) { builder.addFloat(1, value, 0.0f); }
  public static int endSkeletonPart(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public SkeletonPart get(int j) { return get(new SkeletonPart(), j); }
    public SkeletonPart get(SkeletonPart obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}

