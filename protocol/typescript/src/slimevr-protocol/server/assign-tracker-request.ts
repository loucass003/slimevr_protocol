// automatically generated by the FlatBuffers compiler, do not modify

import * as flatbuffers from 'flatbuffers';

import { TrackerPosition } from '../../slimevr-protocol/server/tracker-position';


export class AssignTrackerRequest {
  bb: flatbuffers.ByteBuffer|null = null;
  bb_pos = 0;
__init(i:number, bb:flatbuffers.ByteBuffer):AssignTrackerRequest {
  this.bb_pos = i;
  this.bb = bb;
  return this;
}

static getRootAsAssignTrackerRequest(bb:flatbuffers.ByteBuffer, obj?:AssignTrackerRequest):AssignTrackerRequest {
  return (obj || new AssignTrackerRequest()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

static getSizePrefixedRootAsAssignTrackerRequest(bb:flatbuffers.ByteBuffer, obj?:AssignTrackerRequest):AssignTrackerRequest {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new AssignTrackerRequest()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

id():number {
  const offset = this.bb!.__offset(this.bb_pos, 4);
  return offset ? this.bb!.readUint8(this.bb_pos + offset) : 0;
}

mountingPosition():TrackerPosition {
  const offset = this.bb!.__offset(this.bb_pos, 6);
  return offset ? this.bb!.readUint8(this.bb_pos + offset) : TrackerPosition.NONE;
}

mountingRotation():number {
  const offset = this.bb!.__offset(this.bb_pos, 8);
  return offset ? this.bb!.readUint16(this.bb_pos + offset) : 0;
}

static startAssignTrackerRequest(builder:flatbuffers.Builder) {
  builder.startObject(3);
}

static addId(builder:flatbuffers.Builder, id:number) {
  builder.addFieldInt8(0, id, 0);
}

static addMountingPosition(builder:flatbuffers.Builder, mountingPosition:TrackerPosition) {
  builder.addFieldInt8(1, mountingPosition, TrackerPosition.NONE);
}

static addMountingRotation(builder:flatbuffers.Builder, mountingRotation:number) {
  builder.addFieldInt16(2, mountingRotation, 0);
}

static endAssignTrackerRequest(builder:flatbuffers.Builder):flatbuffers.Offset {
  const offset = builder.endObject();
  return offset;
}

static createAssignTrackerRequest(builder:flatbuffers.Builder, id:number, mountingPosition:TrackerPosition, mountingRotation:number):flatbuffers.Offset {
  AssignTrackerRequest.startAssignTrackerRequest(builder);
  AssignTrackerRequest.addId(builder, id);
  AssignTrackerRequest.addMountingPosition(builder, mountingPosition);
  AssignTrackerRequest.addMountingRotation(builder, mountingRotation);
  return AssignTrackerRequest.endAssignTrackerRequest(builder);
}

unpack(): AssignTrackerRequestT {
  return new AssignTrackerRequestT(
    this.id(),
    this.mountingPosition(),
    this.mountingRotation()
  );
}


unpackTo(_o: AssignTrackerRequestT): void {
  _o.id = this.id();
  _o.mountingPosition = this.mountingPosition();
  _o.mountingRotation = this.mountingRotation();
}
}

export class AssignTrackerRequestT {
constructor(
  public id: number = 0,
  public mountingPosition: TrackerPosition = TrackerPosition.NONE,
  public mountingRotation: number = 0
){}


pack(builder:flatbuffers.Builder): flatbuffers.Offset {
  return AssignTrackerRequest.createAssignTrackerRequest(builder,
    this.id,
    this.mountingPosition,
    this.mountingRotation
  );
}
}
