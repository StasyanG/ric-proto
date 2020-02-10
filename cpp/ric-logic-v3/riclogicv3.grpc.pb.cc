// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-logic-v3/riclogicv3.proto

#include "ric-logic-v3/riclogicv3.pb.h"
#include "ric-logic-v3/riclogicv3.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace ric {
namespace logic {
namespace v3 {

static const char* RicLogicV3_method_names[] = {
  "/ric.logic.v3.RicLogicV3/GetInstanceInfo",
  "/ric.logic.v3.RicLogicV3/GetAutomatons",
  "/ric.logic.v3.RicLogicV3/StartAutomaton",
  "/ric.logic.v3.RicLogicV3/StopAutomaton",
  "/ric.logic.v3.RicLogicV3/EmitEvent",
};

std::unique_ptr< RicLogicV3::Stub> RicLogicV3::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RicLogicV3::Stub> stub(new RicLogicV3::Stub(channel));
  return stub;
}

RicLogicV3::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetInstanceInfo_(RicLogicV3_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAutomatons_(RicLogicV3_method_names[1], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_StartAutomaton_(RicLogicV3_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StopAutomaton_(RicLogicV3_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EmitEvent_(RicLogicV3_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RicLogicV3::Stub::GetInstanceInfo(::grpc::ClientContext* context, const ::ric::logic::v3::GetInstanceInfoRequest& request, ::ric::logic::v3::GetInstanceInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetInstanceInfo_, context, request, response);
}

void RicLogicV3::Stub::experimental_async::GetInstanceInfo(::grpc::ClientContext* context, const ::ric::logic::v3::GetInstanceInfoRequest* request, ::ric::logic::v3::GetInstanceInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetInstanceInfo_, context, request, response, std::move(f));
}

void RicLogicV3::Stub::experimental_async::GetInstanceInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::logic::v3::GetInstanceInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetInstanceInfo_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::logic::v3::GetInstanceInfoResponse>* RicLogicV3::Stub::AsyncGetInstanceInfoRaw(::grpc::ClientContext* context, const ::ric::logic::v3::GetInstanceInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::logic::v3::GetInstanceInfoResponse>::Create(channel_.get(), cq, rpcmethod_GetInstanceInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::logic::v3::GetInstanceInfoResponse>* RicLogicV3::Stub::PrepareAsyncGetInstanceInfoRaw(::grpc::ClientContext* context, const ::ric::logic::v3::GetInstanceInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::logic::v3::GetInstanceInfoResponse>::Create(channel_.get(), cq, rpcmethod_GetInstanceInfo_, context, request, false);
}

::grpc::ClientReader< ::ric::logic::v3::AutomatonInfo>* RicLogicV3::Stub::GetAutomatonsRaw(::grpc::ClientContext* context, const ::ric::logic::v3::GetAutomatonsRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::ric::logic::v3::AutomatonInfo>::Create(channel_.get(), rpcmethod_GetAutomatons_, context, request);
}

void RicLogicV3::Stub::experimental_async::GetAutomatons(::grpc::ClientContext* context, ::ric::logic::v3::GetAutomatonsRequest* request, ::grpc::experimental::ClientReadReactor< ::ric::logic::v3::AutomatonInfo>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::ric::logic::v3::AutomatonInfo>::Create(stub_->channel_.get(), stub_->rpcmethod_GetAutomatons_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::ric::logic::v3::AutomatonInfo>* RicLogicV3::Stub::AsyncGetAutomatonsRaw(::grpc::ClientContext* context, const ::ric::logic::v3::GetAutomatonsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ric::logic::v3::AutomatonInfo>::Create(channel_.get(), cq, rpcmethod_GetAutomatons_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::ric::logic::v3::AutomatonInfo>* RicLogicV3::Stub::PrepareAsyncGetAutomatonsRaw(::grpc::ClientContext* context, const ::ric::logic::v3::GetAutomatonsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ric::logic::v3::AutomatonInfo>::Create(channel_.get(), cq, rpcmethod_GetAutomatons_, context, request, false, nullptr);
}

::grpc::Status RicLogicV3::Stub::StartAutomaton(::grpc::ClientContext* context, const ::ric::logic::v3::StartAutomatonRequest& request, ::ric::logic::v3::StartAutomatonResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_StartAutomaton_, context, request, response);
}

void RicLogicV3::Stub::experimental_async::StartAutomaton(::grpc::ClientContext* context, const ::ric::logic::v3::StartAutomatonRequest* request, ::ric::logic::v3::StartAutomatonResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StartAutomaton_, context, request, response, std::move(f));
}

void RicLogicV3::Stub::experimental_async::StartAutomaton(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::logic::v3::StartAutomatonResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StartAutomaton_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::logic::v3::StartAutomatonResponse>* RicLogicV3::Stub::AsyncStartAutomatonRaw(::grpc::ClientContext* context, const ::ric::logic::v3::StartAutomatonRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::logic::v3::StartAutomatonResponse>::Create(channel_.get(), cq, rpcmethod_StartAutomaton_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::logic::v3::StartAutomatonResponse>* RicLogicV3::Stub::PrepareAsyncStartAutomatonRaw(::grpc::ClientContext* context, const ::ric::logic::v3::StartAutomatonRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::logic::v3::StartAutomatonResponse>::Create(channel_.get(), cq, rpcmethod_StartAutomaton_, context, request, false);
}

::grpc::Status RicLogicV3::Stub::StopAutomaton(::grpc::ClientContext* context, const ::ric::logic::v3::StopAutomatonRequest& request, ::ric::logic::v3::StopAutomatonResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_StopAutomaton_, context, request, response);
}

void RicLogicV3::Stub::experimental_async::StopAutomaton(::grpc::ClientContext* context, const ::ric::logic::v3::StopAutomatonRequest* request, ::ric::logic::v3::StopAutomatonResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StopAutomaton_, context, request, response, std::move(f));
}

void RicLogicV3::Stub::experimental_async::StopAutomaton(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::logic::v3::StopAutomatonResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StopAutomaton_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::logic::v3::StopAutomatonResponse>* RicLogicV3::Stub::AsyncStopAutomatonRaw(::grpc::ClientContext* context, const ::ric::logic::v3::StopAutomatonRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::logic::v3::StopAutomatonResponse>::Create(channel_.get(), cq, rpcmethod_StopAutomaton_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::logic::v3::StopAutomatonResponse>* RicLogicV3::Stub::PrepareAsyncStopAutomatonRaw(::grpc::ClientContext* context, const ::ric::logic::v3::StopAutomatonRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::logic::v3::StopAutomatonResponse>::Create(channel_.get(), cq, rpcmethod_StopAutomaton_, context, request, false);
}

::grpc::Status RicLogicV3::Stub::EmitEvent(::grpc::ClientContext* context, const ::ric::logic::v3::EmitEventRequest& request, ::ric::logic::v3::EmitEventResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_EmitEvent_, context, request, response);
}

void RicLogicV3::Stub::experimental_async::EmitEvent(::grpc::ClientContext* context, const ::ric::logic::v3::EmitEventRequest* request, ::ric::logic::v3::EmitEventResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EmitEvent_, context, request, response, std::move(f));
}

void RicLogicV3::Stub::experimental_async::EmitEvent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::logic::v3::EmitEventResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EmitEvent_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::logic::v3::EmitEventResponse>* RicLogicV3::Stub::AsyncEmitEventRaw(::grpc::ClientContext* context, const ::ric::logic::v3::EmitEventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::logic::v3::EmitEventResponse>::Create(channel_.get(), cq, rpcmethod_EmitEvent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::logic::v3::EmitEventResponse>* RicLogicV3::Stub::PrepareAsyncEmitEventRaw(::grpc::ClientContext* context, const ::ric::logic::v3::EmitEventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::logic::v3::EmitEventResponse>::Create(channel_.get(), cq, rpcmethod_EmitEvent_, context, request, false);
}

RicLogicV3::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicLogicV3_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RicLogicV3::Service, ::ric::logic::v3::GetInstanceInfoRequest, ::ric::logic::v3::GetInstanceInfoResponse>(
          std::mem_fn(&RicLogicV3::Service::GetInstanceInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicLogicV3_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< RicLogicV3::Service, ::ric::logic::v3::GetAutomatonsRequest, ::ric::logic::v3::AutomatonInfo>(
          std::mem_fn(&RicLogicV3::Service::GetAutomatons), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicLogicV3_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RicLogicV3::Service, ::ric::logic::v3::StartAutomatonRequest, ::ric::logic::v3::StartAutomatonResponse>(
          std::mem_fn(&RicLogicV3::Service::StartAutomaton), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicLogicV3_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RicLogicV3::Service, ::ric::logic::v3::StopAutomatonRequest, ::ric::logic::v3::StopAutomatonResponse>(
          std::mem_fn(&RicLogicV3::Service::StopAutomaton), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicLogicV3_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RicLogicV3::Service, ::ric::logic::v3::EmitEventRequest, ::ric::logic::v3::EmitEventResponse>(
          std::mem_fn(&RicLogicV3::Service::EmitEvent), this)));
}

RicLogicV3::Service::~Service() {
}

::grpc::Status RicLogicV3::Service::GetInstanceInfo(::grpc::ServerContext* context, const ::ric::logic::v3::GetInstanceInfoRequest* request, ::ric::logic::v3::GetInstanceInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RicLogicV3::Service::GetAutomatons(::grpc::ServerContext* context, const ::ric::logic::v3::GetAutomatonsRequest* request, ::grpc::ServerWriter< ::ric::logic::v3::AutomatonInfo>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RicLogicV3::Service::StartAutomaton(::grpc::ServerContext* context, const ::ric::logic::v3::StartAutomatonRequest* request, ::ric::logic::v3::StartAutomatonResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RicLogicV3::Service::StopAutomaton(::grpc::ServerContext* context, const ::ric::logic::v3::StopAutomatonRequest* request, ::ric::logic::v3::StopAutomatonResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RicLogicV3::Service::EmitEvent(::grpc::ServerContext* context, const ::ric::logic::v3::EmitEventRequest* request, ::ric::logic::v3::EmitEventResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ric
}  // namespace logic
}  // namespace v3

