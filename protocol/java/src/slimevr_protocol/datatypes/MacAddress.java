// automatically generated by the FlatBuffers compiler, do not modify

package slimevr_protocol.datatypes;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class MacAddress extends Struct {
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public MacAddress __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public int byte0() { return bb.get(bb_pos + 0) & 0xFF; }
  public int byte1() { return bb.get(bb_pos + 1) & 0xFF; }
  public int byte2() { return bb.get(bb_pos + 2) & 0xFF; }
  public int byte3() { return bb.get(bb_pos + 3) & 0xFF; }
  public int byte4() { return bb.get(bb_pos + 4) & 0xFF; }
  public int byte5() { return bb.get(bb_pos + 5) & 0xFF; }

  public static int createMacAddress(FlatBufferBuilder builder, int byte0, int byte1, int byte2, int byte3, int byte4, int byte5) {
    builder.prep(1, 6);
    builder.putByte((byte) byte5);
    builder.putByte((byte) byte4);
    builder.putByte((byte) byte3);
    builder.putByte((byte) byte2);
    builder.putByte((byte) byte1);
    builder.putByte((byte) byte0);
    return builder.offset();
  }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public MacAddress get(int j) { return get(new MacAddress(), j); }
    public MacAddress get(MacAddress obj, int j) {  return obj.__assign(__element(j), bb); }
  }
}

