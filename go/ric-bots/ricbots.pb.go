// Code generated by protoc-gen-go. DO NOT EDIT.
// source: ric-bots/ricbots.proto

package ricbots

import (
	context "context"
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type SetConfigRequest_Geo_Mode int32

const (
	SetConfigRequest_Geo_UNSET   SetConfigRequest_Geo_Mode = 0
	SetConfigRequest_Geo_ONE_WAY SetConfigRequest_Geo_Mode = 1
	SetConfigRequest_Geo_TWO_WAY SetConfigRequest_Geo_Mode = 2
)

var SetConfigRequest_Geo_Mode_name = map[int32]string{
	0: "UNSET",
	1: "ONE_WAY",
	2: "TWO_WAY",
}

var SetConfigRequest_Geo_Mode_value = map[string]int32{
	"UNSET":   0,
	"ONE_WAY": 1,
	"TWO_WAY": 2,
}

func (x SetConfigRequest_Geo_Mode) String() string {
	return proto.EnumName(SetConfigRequest_Geo_Mode_name, int32(x))
}

func (SetConfigRequest_Geo_Mode) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{4, 0, 0}
}

type EmptyResponse struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *EmptyResponse) Reset()         { *m = EmptyResponse{} }
func (m *EmptyResponse) String() string { return proto.CompactTextString(m) }
func (*EmptyResponse) ProtoMessage()    {}
func (*EmptyResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{0}
}

func (m *EmptyResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_EmptyResponse.Unmarshal(m, b)
}
func (m *EmptyResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_EmptyResponse.Marshal(b, m, deterministic)
}
func (m *EmptyResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_EmptyResponse.Merge(m, src)
}
func (m *EmptyResponse) XXX_Size() int {
	return xxx_messageInfo_EmptyResponse.Size(m)
}
func (m *EmptyResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_EmptyResponse.DiscardUnknown(m)
}

var xxx_messageInfo_EmptyResponse proto.InternalMessageInfo

type StartRequest struct {
	Id                   string   `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *StartRequest) Reset()         { *m = StartRequest{} }
func (m *StartRequest) String() string { return proto.CompactTextString(m) }
func (*StartRequest) ProtoMessage()    {}
func (*StartRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{1}
}

func (m *StartRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StartRequest.Unmarshal(m, b)
}
func (m *StartRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StartRequest.Marshal(b, m, deterministic)
}
func (m *StartRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StartRequest.Merge(m, src)
}
func (m *StartRequest) XXX_Size() int {
	return xxx_messageInfo_StartRequest.Size(m)
}
func (m *StartRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_StartRequest.DiscardUnknown(m)
}

var xxx_messageInfo_StartRequest proto.InternalMessageInfo

func (m *StartRequest) GetId() string {
	if m != nil {
		return m.Id
	}
	return ""
}

type StopRequest struct {
	Id                   string   `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *StopRequest) Reset()         { *m = StopRequest{} }
func (m *StopRequest) String() string { return proto.CompactTextString(m) }
func (*StopRequest) ProtoMessage()    {}
func (*StopRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{2}
}

func (m *StopRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StopRequest.Unmarshal(m, b)
}
func (m *StopRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StopRequest.Marshal(b, m, deterministic)
}
func (m *StopRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StopRequest.Merge(m, src)
}
func (m *StopRequest) XXX_Size() int {
	return xxx_messageInfo_StopRequest.Size(m)
}
func (m *StopRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_StopRequest.DiscardUnknown(m)
}

var xxx_messageInfo_StopRequest proto.InternalMessageInfo

func (m *StopRequest) GetId() string {
	if m != nil {
		return m.Id
	}
	return ""
}

type SetStateRequest struct {
	Id                   string                                 `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	State                map[string]*SetStateRequest_StateValue `protobuf:"bytes,2,rep,name=state,proto3" json:"state,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"bytes,2,opt,name=value,proto3"`
	XXX_NoUnkeyedLiteral struct{}                               `json:"-"`
	XXX_unrecognized     []byte                                 `json:"-"`
	XXX_sizecache        int32                                  `json:"-"`
}

func (m *SetStateRequest) Reset()         { *m = SetStateRequest{} }
func (m *SetStateRequest) String() string { return proto.CompactTextString(m) }
func (*SetStateRequest) ProtoMessage()    {}
func (*SetStateRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{3}
}

func (m *SetStateRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetStateRequest.Unmarshal(m, b)
}
func (m *SetStateRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetStateRequest.Marshal(b, m, deterministic)
}
func (m *SetStateRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetStateRequest.Merge(m, src)
}
func (m *SetStateRequest) XXX_Size() int {
	return xxx_messageInfo_SetStateRequest.Size(m)
}
func (m *SetStateRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_SetStateRequest.DiscardUnknown(m)
}

var xxx_messageInfo_SetStateRequest proto.InternalMessageInfo

func (m *SetStateRequest) GetId() string {
	if m != nil {
		return m.Id
	}
	return ""
}

func (m *SetStateRequest) GetState() map[string]*SetStateRequest_StateValue {
	if m != nil {
		return m.State
	}
	return nil
}

type SetStateRequest_StateValue struct {
	// Types that are valid to be assigned to Type:
	//	*SetStateRequest_StateValue_StringVal
	//	*SetStateRequest_StateValue_Int64Val
	//	*SetStateRequest_StateValue_DoubleVal
	Type                 isSetStateRequest_StateValue_Type `protobuf_oneof:"type"`
	XXX_NoUnkeyedLiteral struct{}                          `json:"-"`
	XXX_unrecognized     []byte                            `json:"-"`
	XXX_sizecache        int32                             `json:"-"`
}

func (m *SetStateRequest_StateValue) Reset()         { *m = SetStateRequest_StateValue{} }
func (m *SetStateRequest_StateValue) String() string { return proto.CompactTextString(m) }
func (*SetStateRequest_StateValue) ProtoMessage()    {}
func (*SetStateRequest_StateValue) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{3, 0}
}

func (m *SetStateRequest_StateValue) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetStateRequest_StateValue.Unmarshal(m, b)
}
func (m *SetStateRequest_StateValue) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetStateRequest_StateValue.Marshal(b, m, deterministic)
}
func (m *SetStateRequest_StateValue) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetStateRequest_StateValue.Merge(m, src)
}
func (m *SetStateRequest_StateValue) XXX_Size() int {
	return xxx_messageInfo_SetStateRequest_StateValue.Size(m)
}
func (m *SetStateRequest_StateValue) XXX_DiscardUnknown() {
	xxx_messageInfo_SetStateRequest_StateValue.DiscardUnknown(m)
}

var xxx_messageInfo_SetStateRequest_StateValue proto.InternalMessageInfo

type isSetStateRequest_StateValue_Type interface {
	isSetStateRequest_StateValue_Type()
}

type SetStateRequest_StateValue_StringVal struct {
	StringVal string `protobuf:"bytes,1,opt,name=string_val,json=stringVal,proto3,oneof"`
}

type SetStateRequest_StateValue_Int64Val struct {
	Int64Val int64 `protobuf:"varint,2,opt,name=int64_val,json=int64Val,proto3,oneof"`
}

type SetStateRequest_StateValue_DoubleVal struct {
	DoubleVal float64 `protobuf:"fixed64,3,opt,name=double_val,json=doubleVal,proto3,oneof"`
}

func (*SetStateRequest_StateValue_StringVal) isSetStateRequest_StateValue_Type() {}

func (*SetStateRequest_StateValue_Int64Val) isSetStateRequest_StateValue_Type() {}

func (*SetStateRequest_StateValue_DoubleVal) isSetStateRequest_StateValue_Type() {}

func (m *SetStateRequest_StateValue) GetType() isSetStateRequest_StateValue_Type {
	if m != nil {
		return m.Type
	}
	return nil
}

func (m *SetStateRequest_StateValue) GetStringVal() string {
	if x, ok := m.GetType().(*SetStateRequest_StateValue_StringVal); ok {
		return x.StringVal
	}
	return ""
}

func (m *SetStateRequest_StateValue) GetInt64Val() int64 {
	if x, ok := m.GetType().(*SetStateRequest_StateValue_Int64Val); ok {
		return x.Int64Val
	}
	return 0
}

func (m *SetStateRequest_StateValue) GetDoubleVal() float64 {
	if x, ok := m.GetType().(*SetStateRequest_StateValue_DoubleVal); ok {
		return x.DoubleVal
	}
	return 0
}

// XXX_OneofWrappers is for the internal use of the proto package.
func (*SetStateRequest_StateValue) XXX_OneofWrappers() []interface{} {
	return []interface{}{
		(*SetStateRequest_StateValue_StringVal)(nil),
		(*SetStateRequest_StateValue_Int64Val)(nil),
		(*SetStateRequest_StateValue_DoubleVal)(nil),
	}
}

type SetConfigRequest struct {
	Id                   string                `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	Geo                  *SetConfigRequest_Geo `protobuf:"bytes,2,opt,name=geo,proto3" json:"geo,omitempty"`
	Gen                  *SetConfigRequest_Gen `protobuf:"bytes,3,opt,name=gen,proto3" json:"gen,omitempty"`
	XXX_NoUnkeyedLiteral struct{}              `json:"-"`
	XXX_unrecognized     []byte                `json:"-"`
	XXX_sizecache        int32                 `json:"-"`
}

func (m *SetConfigRequest) Reset()         { *m = SetConfigRequest{} }
func (m *SetConfigRequest) String() string { return proto.CompactTextString(m) }
func (*SetConfigRequest) ProtoMessage()    {}
func (*SetConfigRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{4}
}

func (m *SetConfigRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetConfigRequest.Unmarshal(m, b)
}
func (m *SetConfigRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetConfigRequest.Marshal(b, m, deterministic)
}
func (m *SetConfigRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetConfigRequest.Merge(m, src)
}
func (m *SetConfigRequest) XXX_Size() int {
	return xxx_messageInfo_SetConfigRequest.Size(m)
}
func (m *SetConfigRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_SetConfigRequest.DiscardUnknown(m)
}

var xxx_messageInfo_SetConfigRequest proto.InternalMessageInfo

func (m *SetConfigRequest) GetId() string {
	if m != nil {
		return m.Id
	}
	return ""
}

func (m *SetConfigRequest) GetGeo() *SetConfigRequest_Geo {
	if m != nil {
		return m.Geo
	}
	return nil
}

func (m *SetConfigRequest) GetGen() *SetConfigRequest_Gen {
	if m != nil {
		return m.Gen
	}
	return nil
}

type SetConfigRequest_Geo struct {
	Mode                 SetConfigRequest_Geo_Mode     `protobuf:"varint,1,opt,name=mode,proto3,enum=ric.bots.SetConfigRequest_Geo_Mode" json:"mode,omitempty"`
	Repeate              bool                          `protobuf:"varint,2,opt,name=repeate,proto3" json:"repeate,omitempty"`
	Map                  map[string]string             `protobuf:"bytes,3,rep,name=map,proto3" json:"map,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"bytes,2,opt,name=value,proto3"`
	Track                []*SetConfigRequest_Geo_Point `protobuf:"bytes,4,rep,name=track,proto3" json:"track,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                      `json:"-"`
	XXX_unrecognized     []byte                        `json:"-"`
	XXX_sizecache        int32                         `json:"-"`
}

func (m *SetConfigRequest_Geo) Reset()         { *m = SetConfigRequest_Geo{} }
func (m *SetConfigRequest_Geo) String() string { return proto.CompactTextString(m) }
func (*SetConfigRequest_Geo) ProtoMessage()    {}
func (*SetConfigRequest_Geo) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{4, 0}
}

func (m *SetConfigRequest_Geo) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetConfigRequest_Geo.Unmarshal(m, b)
}
func (m *SetConfigRequest_Geo) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetConfigRequest_Geo.Marshal(b, m, deterministic)
}
func (m *SetConfigRequest_Geo) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetConfigRequest_Geo.Merge(m, src)
}
func (m *SetConfigRequest_Geo) XXX_Size() int {
	return xxx_messageInfo_SetConfigRequest_Geo.Size(m)
}
func (m *SetConfigRequest_Geo) XXX_DiscardUnknown() {
	xxx_messageInfo_SetConfigRequest_Geo.DiscardUnknown(m)
}

var xxx_messageInfo_SetConfigRequest_Geo proto.InternalMessageInfo

func (m *SetConfigRequest_Geo) GetMode() SetConfigRequest_Geo_Mode {
	if m != nil {
		return m.Mode
	}
	return SetConfigRequest_Geo_UNSET
}

func (m *SetConfigRequest_Geo) GetRepeate() bool {
	if m != nil {
		return m.Repeate
	}
	return false
}

func (m *SetConfigRequest_Geo) GetMap() map[string]string {
	if m != nil {
		return m.Map
	}
	return nil
}

func (m *SetConfigRequest_Geo) GetTrack() []*SetConfigRequest_Geo_Point {
	if m != nil {
		return m.Track
	}
	return nil
}

type SetConfigRequest_Geo_Point struct {
	Lat                  float64  `protobuf:"fixed64,1,opt,name=lat,proto3" json:"lat,omitempty"`
	Lon                  float64  `protobuf:"fixed64,2,opt,name=lon,proto3" json:"lon,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *SetConfigRequest_Geo_Point) Reset()         { *m = SetConfigRequest_Geo_Point{} }
func (m *SetConfigRequest_Geo_Point) String() string { return proto.CompactTextString(m) }
func (*SetConfigRequest_Geo_Point) ProtoMessage()    {}
func (*SetConfigRequest_Geo_Point) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{4, 0, 0}
}

func (m *SetConfigRequest_Geo_Point) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetConfigRequest_Geo_Point.Unmarshal(m, b)
}
func (m *SetConfigRequest_Geo_Point) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetConfigRequest_Geo_Point.Marshal(b, m, deterministic)
}
func (m *SetConfigRequest_Geo_Point) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetConfigRequest_Geo_Point.Merge(m, src)
}
func (m *SetConfigRequest_Geo_Point) XXX_Size() int {
	return xxx_messageInfo_SetConfigRequest_Geo_Point.Size(m)
}
func (m *SetConfigRequest_Geo_Point) XXX_DiscardUnknown() {
	xxx_messageInfo_SetConfigRequest_Geo_Point.DiscardUnknown(m)
}

var xxx_messageInfo_SetConfigRequest_Geo_Point proto.InternalMessageInfo

func (m *SetConfigRequest_Geo_Point) GetLat() float64 {
	if m != nil {
		return m.Lat
	}
	return 0
}

func (m *SetConfigRequest_Geo_Point) GetLon() float64 {
	if m != nil {
		return m.Lon
	}
	return 0
}

type SetConfigRequest_Gen struct {
	Params               []*SetConfigRequest_Gen_Param `protobuf:"bytes,1,rep,name=params,proto3" json:"params,omitempty"`
	Send                 *SetConfigRequest_Gen_Send    `protobuf:"bytes,2,opt,name=send,proto3" json:"send,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                      `json:"-"`
	XXX_unrecognized     []byte                        `json:"-"`
	XXX_sizecache        int32                         `json:"-"`
}

func (m *SetConfigRequest_Gen) Reset()         { *m = SetConfigRequest_Gen{} }
func (m *SetConfigRequest_Gen) String() string { return proto.CompactTextString(m) }
func (*SetConfigRequest_Gen) ProtoMessage()    {}
func (*SetConfigRequest_Gen) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{4, 1}
}

func (m *SetConfigRequest_Gen) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetConfigRequest_Gen.Unmarshal(m, b)
}
func (m *SetConfigRequest_Gen) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetConfigRequest_Gen.Marshal(b, m, deterministic)
}
func (m *SetConfigRequest_Gen) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetConfigRequest_Gen.Merge(m, src)
}
func (m *SetConfigRequest_Gen) XXX_Size() int {
	return xxx_messageInfo_SetConfigRequest_Gen.Size(m)
}
func (m *SetConfigRequest_Gen) XXX_DiscardUnknown() {
	xxx_messageInfo_SetConfigRequest_Gen.DiscardUnknown(m)
}

var xxx_messageInfo_SetConfigRequest_Gen proto.InternalMessageInfo

func (m *SetConfigRequest_Gen) GetParams() []*SetConfigRequest_Gen_Param {
	if m != nil {
		return m.Params
	}
	return nil
}

func (m *SetConfigRequest_Gen) GetSend() *SetConfigRequest_Gen_Send {
	if m != nil {
		return m.Send
	}
	return nil
}

type SetConfigRequest_Gen_RandomType struct {
	Min                  float64  `protobuf:"fixed64,1,opt,name=min,proto3" json:"min,omitempty"`
	Max                  float64  `protobuf:"fixed64,2,opt,name=max,proto3" json:"max,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *SetConfigRequest_Gen_RandomType) Reset()         { *m = SetConfigRequest_Gen_RandomType{} }
func (m *SetConfigRequest_Gen_RandomType) String() string { return proto.CompactTextString(m) }
func (*SetConfigRequest_Gen_RandomType) ProtoMessage()    {}
func (*SetConfigRequest_Gen_RandomType) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{4, 1, 0}
}

func (m *SetConfigRequest_Gen_RandomType) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetConfigRequest_Gen_RandomType.Unmarshal(m, b)
}
func (m *SetConfigRequest_Gen_RandomType) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetConfigRequest_Gen_RandomType.Marshal(b, m, deterministic)
}
func (m *SetConfigRequest_Gen_RandomType) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetConfigRequest_Gen_RandomType.Merge(m, src)
}
func (m *SetConfigRequest_Gen_RandomType) XXX_Size() int {
	return xxx_messageInfo_SetConfigRequest_Gen_RandomType.Size(m)
}
func (m *SetConfigRequest_Gen_RandomType) XXX_DiscardUnknown() {
	xxx_messageInfo_SetConfigRequest_Gen_RandomType.DiscardUnknown(m)
}

var xxx_messageInfo_SetConfigRequest_Gen_RandomType proto.InternalMessageInfo

func (m *SetConfigRequest_Gen_RandomType) GetMin() float64 {
	if m != nil {
		return m.Min
	}
	return 0
}

func (m *SetConfigRequest_Gen_RandomType) GetMax() float64 {
	if m != nil {
		return m.Max
	}
	return 0
}

type SetConfigRequest_Gen_LinearType struct {
	Step                 float64  `protobuf:"fixed64,1,opt,name=step,proto3" json:"step,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *SetConfigRequest_Gen_LinearType) Reset()         { *m = SetConfigRequest_Gen_LinearType{} }
func (m *SetConfigRequest_Gen_LinearType) String() string { return proto.CompactTextString(m) }
func (*SetConfigRequest_Gen_LinearType) ProtoMessage()    {}
func (*SetConfigRequest_Gen_LinearType) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{4, 1, 1}
}

func (m *SetConfigRequest_Gen_LinearType) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetConfigRequest_Gen_LinearType.Unmarshal(m, b)
}
func (m *SetConfigRequest_Gen_LinearType) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetConfigRequest_Gen_LinearType.Marshal(b, m, deterministic)
}
func (m *SetConfigRequest_Gen_LinearType) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetConfigRequest_Gen_LinearType.Merge(m, src)
}
func (m *SetConfigRequest_Gen_LinearType) XXX_Size() int {
	return xxx_messageInfo_SetConfigRequest_Gen_LinearType.Size(m)
}
func (m *SetConfigRequest_Gen_LinearType) XXX_DiscardUnknown() {
	xxx_messageInfo_SetConfigRequest_Gen_LinearType.DiscardUnknown(m)
}

var xxx_messageInfo_SetConfigRequest_Gen_LinearType proto.InternalMessageInfo

func (m *SetConfigRequest_Gen_LinearType) GetStep() float64 {
	if m != nil {
		return m.Step
	}
	return 0
}

type SetConfigRequest_Gen_Param struct {
	Name string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	// Types that are valid to be assigned to Type:
	//	*SetConfigRequest_Gen_Param_Random
	//	*SetConfigRequest_Gen_Param_Linear
	Type                 isSetConfigRequest_Gen_Param_Type `protobuf_oneof:"type"`
	Send                 *SetConfigRequest_Gen_Send        `protobuf:"bytes,4,opt,name=send,proto3" json:"send,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                          `json:"-"`
	XXX_unrecognized     []byte                            `json:"-"`
	XXX_sizecache        int32                             `json:"-"`
}

func (m *SetConfigRequest_Gen_Param) Reset()         { *m = SetConfigRequest_Gen_Param{} }
func (m *SetConfigRequest_Gen_Param) String() string { return proto.CompactTextString(m) }
func (*SetConfigRequest_Gen_Param) ProtoMessage()    {}
func (*SetConfigRequest_Gen_Param) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{4, 1, 2}
}

func (m *SetConfigRequest_Gen_Param) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetConfigRequest_Gen_Param.Unmarshal(m, b)
}
func (m *SetConfigRequest_Gen_Param) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetConfigRequest_Gen_Param.Marshal(b, m, deterministic)
}
func (m *SetConfigRequest_Gen_Param) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetConfigRequest_Gen_Param.Merge(m, src)
}
func (m *SetConfigRequest_Gen_Param) XXX_Size() int {
	return xxx_messageInfo_SetConfigRequest_Gen_Param.Size(m)
}
func (m *SetConfigRequest_Gen_Param) XXX_DiscardUnknown() {
	xxx_messageInfo_SetConfigRequest_Gen_Param.DiscardUnknown(m)
}

var xxx_messageInfo_SetConfigRequest_Gen_Param proto.InternalMessageInfo

func (m *SetConfigRequest_Gen_Param) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

type isSetConfigRequest_Gen_Param_Type interface {
	isSetConfigRequest_Gen_Param_Type()
}

type SetConfigRequest_Gen_Param_Random struct {
	Random *SetConfigRequest_Gen_RandomType `protobuf:"bytes,2,opt,name=random,proto3,oneof"`
}

type SetConfigRequest_Gen_Param_Linear struct {
	Linear *SetConfigRequest_Gen_LinearType `protobuf:"bytes,3,opt,name=linear,proto3,oneof"`
}

func (*SetConfigRequest_Gen_Param_Random) isSetConfigRequest_Gen_Param_Type() {}

func (*SetConfigRequest_Gen_Param_Linear) isSetConfigRequest_Gen_Param_Type() {}

func (m *SetConfigRequest_Gen_Param) GetType() isSetConfigRequest_Gen_Param_Type {
	if m != nil {
		return m.Type
	}
	return nil
}

func (m *SetConfigRequest_Gen_Param) GetRandom() *SetConfigRequest_Gen_RandomType {
	if x, ok := m.GetType().(*SetConfigRequest_Gen_Param_Random); ok {
		return x.Random
	}
	return nil
}

func (m *SetConfigRequest_Gen_Param) GetLinear() *SetConfigRequest_Gen_LinearType {
	if x, ok := m.GetType().(*SetConfigRequest_Gen_Param_Linear); ok {
		return x.Linear
	}
	return nil
}

func (m *SetConfigRequest_Gen_Param) GetSend() *SetConfigRequest_Gen_Send {
	if m != nil {
		return m.Send
	}
	return nil
}

// XXX_OneofWrappers is for the internal use of the proto package.
func (*SetConfigRequest_Gen_Param) XXX_OneofWrappers() []interface{} {
	return []interface{}{
		(*SetConfigRequest_Gen_Param_Random)(nil),
		(*SetConfigRequest_Gen_Param_Linear)(nil),
	}
}

type SetConfigRequest_Gen_Send struct {
	Period               float64  `protobuf:"fixed64,1,opt,name=period,proto3" json:"period,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *SetConfigRequest_Gen_Send) Reset()         { *m = SetConfigRequest_Gen_Send{} }
func (m *SetConfigRequest_Gen_Send) String() string { return proto.CompactTextString(m) }
func (*SetConfigRequest_Gen_Send) ProtoMessage()    {}
func (*SetConfigRequest_Gen_Send) Descriptor() ([]byte, []int) {
	return fileDescriptor_bd134b2217701610, []int{4, 1, 3}
}

func (m *SetConfigRequest_Gen_Send) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SetConfigRequest_Gen_Send.Unmarshal(m, b)
}
func (m *SetConfigRequest_Gen_Send) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SetConfigRequest_Gen_Send.Marshal(b, m, deterministic)
}
func (m *SetConfigRequest_Gen_Send) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SetConfigRequest_Gen_Send.Merge(m, src)
}
func (m *SetConfigRequest_Gen_Send) XXX_Size() int {
	return xxx_messageInfo_SetConfigRequest_Gen_Send.Size(m)
}
func (m *SetConfigRequest_Gen_Send) XXX_DiscardUnknown() {
	xxx_messageInfo_SetConfigRequest_Gen_Send.DiscardUnknown(m)
}

var xxx_messageInfo_SetConfigRequest_Gen_Send proto.InternalMessageInfo

func (m *SetConfigRequest_Gen_Send) GetPeriod() float64 {
	if m != nil {
		return m.Period
	}
	return 0
}

func init() {
	proto.RegisterEnum("ric.bots.SetConfigRequest_Geo_Mode", SetConfigRequest_Geo_Mode_name, SetConfigRequest_Geo_Mode_value)
	proto.RegisterType((*EmptyResponse)(nil), "ric.bots.EmptyResponse")
	proto.RegisterType((*StartRequest)(nil), "ric.bots.StartRequest")
	proto.RegisterType((*StopRequest)(nil), "ric.bots.StopRequest")
	proto.RegisterType((*SetStateRequest)(nil), "ric.bots.SetStateRequest")
	proto.RegisterMapType((map[string]*SetStateRequest_StateValue)(nil), "ric.bots.SetStateRequest.StateEntry")
	proto.RegisterType((*SetStateRequest_StateValue)(nil), "ric.bots.SetStateRequest.StateValue")
	proto.RegisterType((*SetConfigRequest)(nil), "ric.bots.SetConfigRequest")
	proto.RegisterType((*SetConfigRequest_Geo)(nil), "ric.bots.SetConfigRequest.Geo")
	proto.RegisterMapType((map[string]string)(nil), "ric.bots.SetConfigRequest.Geo.MapEntry")
	proto.RegisterType((*SetConfigRequest_Geo_Point)(nil), "ric.bots.SetConfigRequest.Geo.Point")
	proto.RegisterType((*SetConfigRequest_Gen)(nil), "ric.bots.SetConfigRequest.Gen")
	proto.RegisterType((*SetConfigRequest_Gen_RandomType)(nil), "ric.bots.SetConfigRequest.Gen.RandomType")
	proto.RegisterType((*SetConfigRequest_Gen_LinearType)(nil), "ric.bots.SetConfigRequest.Gen.LinearType")
	proto.RegisterType((*SetConfigRequest_Gen_Param)(nil), "ric.bots.SetConfigRequest.Gen.Param")
	proto.RegisterType((*SetConfigRequest_Gen_Send)(nil), "ric.bots.SetConfigRequest.Gen.Send")
}

func init() { proto.RegisterFile("ric-bots/ricbots.proto", fileDescriptor_bd134b2217701610) }

var fileDescriptor_bd134b2217701610 = []byte{
	// 704 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x94, 0x95, 0x6f, 0x4f, 0x13, 0x4f,
	0x10, 0xc7, 0x7b, 0x7f, 0xfa, 0xe7, 0x86, 0xdf, 0x0f, 0x9a, 0x8d, 0x62, 0xbd, 0x04, 0x68, 0x8a,
	0x89, 0x35, 0xc4, 0x93, 0xa0, 0x41, 0x24, 0xc6, 0x28, 0xa4, 0x81, 0x07, 0x0a, 0x64, 0x0f, 0x21,
	0xfa, 0x40, 0xb2, 0xf4, 0x56, 0x72, 0xe1, 0x6e, 0xf7, 0xbc, 0xdb, 0x12, 0xfa, 0xbe, 0x7c, 0x0d,
	0xbe, 0x07, 0x1f, 0xfa, 0xc4, 0x17, 0xe1, 0x23, 0xb3, 0x73, 0xd7, 0x52, 0x94, 0xb3, 0xfa, 0xa8,
	0x3b, 0x33, 0xf7, 0xd9, 0x99, 0xf9, 0xce, 0x66, 0x0a, 0xf3, 0x69, 0xd8, 0x7f, 0x78, 0x2a, 0x55,
	0xf6, 0x28, 0x0d, 0xfb, 0xfa, 0xd7, 0x4b, 0x52, 0xa9, 0x24, 0x69, 0xa4, 0x61, 0xdf, 0xd3, 0x76,
	0x67, 0x0e, 0xfe, 0xef, 0xc5, 0x89, 0x1a, 0x52, 0x9e, 0x25, 0x52, 0x64, 0xbc, 0xb3, 0x08, 0xff,
	0xf9, 0x8a, 0xa5, 0x8a, 0xf2, 0x4f, 0x03, 0x9e, 0x29, 0x32, 0x0b, 0x66, 0x18, 0xb4, 0x8c, 0xb6,
	0xd1, 0x75, 0xa8, 0x19, 0x06, 0x9d, 0x05, 0x98, 0xf1, 0x95, 0x4c, 0xca, 0xc2, 0x9f, 0x4d, 0x98,
	0xf3, 0xb9, 0xf2, 0x15, 0x53, 0xbc, 0xe4, 0x1b, 0xb2, 0x09, 0xd5, 0x4c, 0xc7, 0x5b, 0x66, 0xdb,
	0xea, 0xce, 0xac, 0xdd, 0xf3, 0x46, 0xd5, 0x78, 0xbf, 0x90, 0x1e, 0x1a, 0x3d, 0xa1, 0xd2, 0x21,
	0xcd, 0x11, 0x77, 0x00, 0x80, 0xce, 0x23, 0x16, 0x0d, 0x38, 0x59, 0x02, 0xc8, 0x54, 0x1a, 0x8a,
	0xb3, 0x93, 0x0b, 0x16, 0xe5, 0x19, 0x76, 0x2b, 0xd4, 0xc9, 0x7d, 0x47, 0x2c, 0x22, 0x0b, 0xe0,
	0x84, 0x42, 0xad, 0x3f, 0xc1, 0xb8, 0xd9, 0x36, 0xba, 0xd6, 0x6e, 0x85, 0x36, 0xd0, 0xa5, 0xc3,
	0x4b, 0x00, 0x81, 0x1c, 0x9c, 0x46, 0x1c, 0xe3, 0x56, 0xdb, 0xe8, 0x1a, 0x9a, 0xcf, 0x7d, 0x47,
	0x2c, 0xda, 0xaa, 0x81, 0xad, 0x86, 0x09, 0x77, 0x3f, 0x14, 0x69, 0xb1, 0x16, 0xd2, 0x04, 0xeb,
	0x9c, 0x0f, 0x8b, 0x8e, 0xf4, 0x51, 0xb7, 0x74, 0xa1, 0x2b, 0xc2, 0x1c, 0xd3, 0x5b, 0xc2, 0xea,
	0x69, 0x8e, 0x6c, 0x9a, 0x1b, 0x46, 0xe7, 0x4b, 0x1d, 0x9a, 0x3e, 0x57, 0xdb, 0x52, 0x7c, 0x0c,
	0xcf, 0xca, 0x74, 0x5b, 0x05, 0xeb, 0x8c, 0xcb, 0x22, 0xc5, 0xe2, 0xb5, 0x14, 0xd7, 0x40, 0x6f,
	0x87, 0x4b, 0xaa, 0x3f, 0xcd, 0x09, 0x81, 0x8d, 0x4d, 0x23, 0x84, 0x26, 0x84, 0xfb, 0xcd, 0x04,
	0x6b, 0x87, 0x4b, 0xf2, 0x14, 0xec, 0x58, 0x06, 0x1c, 0xb3, 0xcf, 0xae, 0x2d, 0xff, 0x39, 0x99,
	0xf7, 0x46, 0x06, 0x9c, 0x22, 0x40, 0x5a, 0x50, 0x4f, 0x79, 0xc2, 0xf3, 0xf1, 0x1a, 0xdd, 0x06,
	0x1d, 0x99, 0xe4, 0x19, 0x58, 0x31, 0x4b, 0x5a, 0x16, 0x0e, 0xfd, 0xfe, 0xb4, 0x1b, 0x59, 0x92,
	0xcf, 0x5d, 0x33, 0x5a, 0x5e, 0x95, 0xb2, 0xfe, 0x79, 0xcb, 0xbe, 0xe1, 0xc5, 0xfc, 0x0e, 0x1f,
	0xc8, 0x50, 0x28, 0x9a, 0x23, 0xee, 0x0a, 0x54, 0xd1, 0xd6, 0x53, 0x8b, 0x98, 0xc2, 0x8e, 0x0c,
	0xaa, 0x8f, 0xe8, 0x91, 0x02, 0xeb, 0xd4, 0x1e, 0x29, 0xdc, 0x75, 0x68, 0x8c, 0x32, 0xdf, 0x30,
	0xe5, 0x5b, 0x93, 0x53, 0x76, 0x26, 0xe7, 0xb7, 0x02, 0xb6, 0xd6, 0x80, 0x38, 0x50, 0x7d, 0xbb,
	0xe7, 0xf7, 0x0e, 0x9b, 0x15, 0x32, 0x03, 0xf5, 0xfd, 0xbd, 0xde, 0xc9, 0xf1, 0xab, 0x77, 0x4d,
	0x43, 0x1b, 0x87, 0xc7, 0xfb, 0x68, 0x98, 0xee, 0x57, 0x4b, 0x6b, 0x2c, 0xc8, 0x73, 0xa8, 0x25,
	0x2c, 0x65, 0x71, 0xd6, 0x32, 0xfe, 0xa2, 0x2d, 0xe1, 0x1d, 0xe8, 0x8f, 0x69, 0xc1, 0xe8, 0x09,
	0x65, 0x5c, 0x04, 0xc5, 0x73, 0x58, 0x9e, 0xc2, 0xfa, 0x5c, 0x04, 0x14, 0x01, 0x77, 0x15, 0x80,
	0x32, 0x11, 0xc8, 0xf8, 0x70, 0x98, 0x70, 0xdd, 0x65, 0x1c, 0x8a, 0x91, 0x2a, 0x71, 0x28, 0xd0,
	0xc3, 0x2e, 0x47, 0xaa, 0xc4, 0xec, 0xd2, 0x6d, 0x03, 0xbc, 0x0e, 0x05, 0x67, 0x29, 0x12, 0x04,
	0xec, 0x4c, 0xf1, 0xa4, 0x40, 0xf0, 0xec, 0x7e, 0x37, 0xa0, 0x8a, 0xe5, 0xe9, 0xa8, 0x60, 0x31,
	0x2f, 0x64, 0xc3, 0x33, 0xd9, 0x86, 0x5a, 0x8a, 0x19, 0x8b, 0x62, 0x1f, 0x4c, 0x29, 0xf6, 0xaa,
	0xbc, 0xdd, 0x0a, 0x2d, 0x50, 0x7d, 0x49, 0x84, 0x45, 0x14, 0xcf, 0x79, 0xda, 0x25, 0x57, 0x15,
	0xeb, 0x4b, 0x72, 0x74, 0x2c, 0x9a, 0xfd, 0x8f, 0xa2, 0x8d, 0x17, 0xc1, 0x22, 0xd8, 0xda, 0x4b,
	0xe6, 0xa1, 0x96, 0xf0, 0x34, 0x94, 0x41, 0x21, 0x43, 0x61, 0xad, 0xfd, 0x30, 0xc0, 0xde, 0x92,
	0x2a, 0x23, 0x1b, 0x50, 0xc5, 0x3d, 0x4a, 0xe6, 0x27, 0x92, 0x4c, 0x2c, 0x56, 0xf7, 0xce, 0x95,
	0xff, 0xda, 0x06, 0x26, 0xeb, 0x60, 0xeb, 0x0d, 0x4b, 0x6e, 0x4f, 0x82, 0xe3, 0x8d, 0x5b, 0xce,
	0xbd, 0x80, 0xc6, 0x68, 0xd9, 0x90, 0xbb, 0xa5, 0x0b, 0xa8, 0x9c, 0x7f, 0x09, 0xce, 0x58, 0x05,
	0xe2, 0x96, 0x4b, 0x53, 0x7a, 0xc3, 0x96, 0xf3, 0xbe, 0x5e, 0xfc, 0xcf, 0x9c, 0xd6, 0xf0, 0x8f,
	0xe6, 0xf1, 0xcf, 0x00, 0x00, 0x00, 0xff, 0xff, 0x24, 0xca, 0x00, 0x2a, 0x82, 0x06, 0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// BotsClient is the client API for Bots service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type BotsClient interface {
	Start(ctx context.Context, in *StartRequest, opts ...grpc.CallOption) (*EmptyResponse, error)
	Stop(ctx context.Context, in *StopRequest, opts ...grpc.CallOption) (*EmptyResponse, error)
	SetState(ctx context.Context, in *SetStateRequest, opts ...grpc.CallOption) (*EmptyResponse, error)
	SetConfig(ctx context.Context, in *SetConfigRequest, opts ...grpc.CallOption) (*EmptyResponse, error)
}

type botsClient struct {
	cc *grpc.ClientConn
}

func NewBotsClient(cc *grpc.ClientConn) BotsClient {
	return &botsClient{cc}
}

func (c *botsClient) Start(ctx context.Context, in *StartRequest, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/ric.bots.Bots/Start", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *botsClient) Stop(ctx context.Context, in *StopRequest, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/ric.bots.Bots/Stop", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *botsClient) SetState(ctx context.Context, in *SetStateRequest, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/ric.bots.Bots/SetState", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *botsClient) SetConfig(ctx context.Context, in *SetConfigRequest, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/ric.bots.Bots/SetConfig", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// BotsServer is the server API for Bots service.
type BotsServer interface {
	Start(context.Context, *StartRequest) (*EmptyResponse, error)
	Stop(context.Context, *StopRequest) (*EmptyResponse, error)
	SetState(context.Context, *SetStateRequest) (*EmptyResponse, error)
	SetConfig(context.Context, *SetConfigRequest) (*EmptyResponse, error)
}

// UnimplementedBotsServer can be embedded to have forward compatible implementations.
type UnimplementedBotsServer struct {
}

func (*UnimplementedBotsServer) Start(ctx context.Context, req *StartRequest) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Start not implemented")
}
func (*UnimplementedBotsServer) Stop(ctx context.Context, req *StopRequest) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Stop not implemented")
}
func (*UnimplementedBotsServer) SetState(ctx context.Context, req *SetStateRequest) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SetState not implemented")
}
func (*UnimplementedBotsServer) SetConfig(ctx context.Context, req *SetConfigRequest) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SetConfig not implemented")
}

func RegisterBotsServer(s *grpc.Server, srv BotsServer) {
	s.RegisterService(&_Bots_serviceDesc, srv)
}

func _Bots_Start_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(StartRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BotsServer).Start(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.bots.Bots/Start",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BotsServer).Start(ctx, req.(*StartRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Bots_Stop_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(StopRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BotsServer).Stop(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.bots.Bots/Stop",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BotsServer).Stop(ctx, req.(*StopRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Bots_SetState_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(SetStateRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BotsServer).SetState(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.bots.Bots/SetState",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BotsServer).SetState(ctx, req.(*SetStateRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Bots_SetConfig_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(SetConfigRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BotsServer).SetConfig(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.bots.Bots/SetConfig",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BotsServer).SetConfig(ctx, req.(*SetConfigRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _Bots_serviceDesc = grpc.ServiceDesc{
	ServiceName: "ric.bots.Bots",
	HandlerType: (*BotsServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Start",
			Handler:    _Bots_Start_Handler,
		},
		{
			MethodName: "Stop",
			Handler:    _Bots_Stop_Handler,
		},
		{
			MethodName: "SetState",
			Handler:    _Bots_SetState_Handler,
		},
		{
			MethodName: "SetConfig",
			Handler:    _Bots_SetConfig_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "ric-bots/ricbots.proto",
}
