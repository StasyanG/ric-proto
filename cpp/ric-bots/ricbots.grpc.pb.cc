// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-bots/ricbots.proto

#include "ric-bots/ricbots.pb.h"
#include "ric-bots/ricbots.grpc.pb.h"

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
namespace bots {

static const char* Bots_method_names[] = {
  "/ric.bots.Bots/Start",
  "/ric.bots.Bots/Stop",
  "/ric.bots.Bots/SetState",
  "/ric.bots.Bots/SetGeoConfig",
  "/ric.bots.Bots/PauseStopGeo",
  "/ric.bots.Bots/StartGeo",
  "/ric.bots.Bots/AddToGenConfig",
  "/ric.bots.Bots/RemoveFromGenConfig",
  "/ric.bots.Bots/SetBotConfig",
};

std::unique_ptr< Bots::Stub> Bots::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Bots::Stub> stub(new Bots::Stub(channel));
  return stub;
}

Bots::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Start_(Bots_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Stop_(Bots_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetState_(Bots_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetGeoConfig_(Bots_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PauseStopGeo_(Bots_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StartGeo_(Bots_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AddToGenConfig_(Bots_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RemoveFromGenConfig_(Bots_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetBotConfig_(Bots_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Bots::Stub::Start(::grpc::ClientContext* context, const ::ric::bots::StartRequest& request, ::ric::bots::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Start_, context, request, response);
}

void Bots::Stub::experimental_async::Start(::grpc::ClientContext* context, const ::ric::bots::StartRequest* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Start_, context, request, response, std::move(f));
}

void Bots::Stub::experimental_async::Start(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Start_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::AsyncStartRaw(::grpc::ClientContext* context, const ::ric::bots::StartRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Start_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::PrepareAsyncStartRaw(::grpc::ClientContext* context, const ::ric::bots::StartRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Start_, context, request, false);
}

::grpc::Status Bots::Stub::Stop(::grpc::ClientContext* context, const ::ric::bots::StopRequest& request, ::ric::bots::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Stop_, context, request, response);
}

void Bots::Stub::experimental_async::Stop(::grpc::ClientContext* context, const ::ric::bots::StopRequest* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, std::move(f));
}

void Bots::Stub::experimental_async::Stop(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::AsyncStopRaw(::grpc::ClientContext* context, const ::ric::bots::StopRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Stop_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::PrepareAsyncStopRaw(::grpc::ClientContext* context, const ::ric::bots::StopRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Stop_, context, request, false);
}

::grpc::Status Bots::Stub::SetState(::grpc::ClientContext* context, const ::ric::bots::SetStateRequest& request, ::ric::bots::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetState_, context, request, response);
}

void Bots::Stub::experimental_async::SetState(::grpc::ClientContext* context, const ::ric::bots::SetStateRequest* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetState_, context, request, response, std::move(f));
}

void Bots::Stub::experimental_async::SetState(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetState_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::AsyncSetStateRaw(::grpc::ClientContext* context, const ::ric::bots::SetStateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_SetState_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::PrepareAsyncSetStateRaw(::grpc::ClientContext* context, const ::ric::bots::SetStateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_SetState_, context, request, false);
}

::grpc::Status Bots::Stub::SetGeoConfig(::grpc::ClientContext* context, const ::ric::bots::SetGeoConfigRequest& request, ::ric::bots::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetGeoConfig_, context, request, response);
}

void Bots::Stub::experimental_async::SetGeoConfig(::grpc::ClientContext* context, const ::ric::bots::SetGeoConfigRequest* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetGeoConfig_, context, request, response, std::move(f));
}

void Bots::Stub::experimental_async::SetGeoConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetGeoConfig_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::AsyncSetGeoConfigRaw(::grpc::ClientContext* context, const ::ric::bots::SetGeoConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_SetGeoConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::PrepareAsyncSetGeoConfigRaw(::grpc::ClientContext* context, const ::ric::bots::SetGeoConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_SetGeoConfig_, context, request, false);
}

::grpc::Status Bots::Stub::PauseStopGeo(::grpc::ClientContext* context, const ::ric::bots::PauseStopGeoRequest& request, ::ric::bots::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_PauseStopGeo_, context, request, response);
}

void Bots::Stub::experimental_async::PauseStopGeo(::grpc::ClientContext* context, const ::ric::bots::PauseStopGeoRequest* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_PauseStopGeo_, context, request, response, std::move(f));
}

void Bots::Stub::experimental_async::PauseStopGeo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_PauseStopGeo_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::AsyncPauseStopGeoRaw(::grpc::ClientContext* context, const ::ric::bots::PauseStopGeoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_PauseStopGeo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::PrepareAsyncPauseStopGeoRaw(::grpc::ClientContext* context, const ::ric::bots::PauseStopGeoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_PauseStopGeo_, context, request, false);
}

::grpc::Status Bots::Stub::StartGeo(::grpc::ClientContext* context, const ::ric::bots::StartGeoRequest& request, ::ric::bots::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_StartGeo_, context, request, response);
}

void Bots::Stub::experimental_async::StartGeo(::grpc::ClientContext* context, const ::ric::bots::StartGeoRequest* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StartGeo_, context, request, response, std::move(f));
}

void Bots::Stub::experimental_async::StartGeo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StartGeo_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::AsyncStartGeoRaw(::grpc::ClientContext* context, const ::ric::bots::StartGeoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_StartGeo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::PrepareAsyncStartGeoRaw(::grpc::ClientContext* context, const ::ric::bots::StartGeoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_StartGeo_, context, request, false);
}

::grpc::Status Bots::Stub::AddToGenConfig(::grpc::ClientContext* context, const ::ric::bots::AddToGenConfigRequest& request, ::ric::bots::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AddToGenConfig_, context, request, response);
}

void Bots::Stub::experimental_async::AddToGenConfig(::grpc::ClientContext* context, const ::ric::bots::AddToGenConfigRequest* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AddToGenConfig_, context, request, response, std::move(f));
}

void Bots::Stub::experimental_async::AddToGenConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AddToGenConfig_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::AsyncAddToGenConfigRaw(::grpc::ClientContext* context, const ::ric::bots::AddToGenConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_AddToGenConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::PrepareAsyncAddToGenConfigRaw(::grpc::ClientContext* context, const ::ric::bots::AddToGenConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_AddToGenConfig_, context, request, false);
}

::grpc::Status Bots::Stub::RemoveFromGenConfig(::grpc::ClientContext* context, const ::ric::bots::RemoveFromGenConfigRequest& request, ::ric::bots::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RemoveFromGenConfig_, context, request, response);
}

void Bots::Stub::experimental_async::RemoveFromGenConfig(::grpc::ClientContext* context, const ::ric::bots::RemoveFromGenConfigRequest* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RemoveFromGenConfig_, context, request, response, std::move(f));
}

void Bots::Stub::experimental_async::RemoveFromGenConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RemoveFromGenConfig_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::AsyncRemoveFromGenConfigRaw(::grpc::ClientContext* context, const ::ric::bots::RemoveFromGenConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_RemoveFromGenConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::PrepareAsyncRemoveFromGenConfigRaw(::grpc::ClientContext* context, const ::ric::bots::RemoveFromGenConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_RemoveFromGenConfig_, context, request, false);
}

::grpc::Status Bots::Stub::SetBotConfig(::grpc::ClientContext* context, const ::ric::bots::SetBotConfigRequest& request, ::ric::bots::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetBotConfig_, context, request, response);
}

void Bots::Stub::experimental_async::SetBotConfig(::grpc::ClientContext* context, const ::ric::bots::SetBotConfigRequest* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetBotConfig_, context, request, response, std::move(f));
}

void Bots::Stub::experimental_async::SetBotConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bots::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetBotConfig_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::AsyncSetBotConfigRaw(::grpc::ClientContext* context, const ::ric::bots::SetBotConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_SetBotConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bots::EmptyResponse>* Bots::Stub::PrepareAsyncSetBotConfigRaw(::grpc::ClientContext* context, const ::ric::bots::SetBotConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bots::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_SetBotConfig_, context, request, false);
}

Bots::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::ric::bots::StartRequest, ::ric::bots::EmptyResponse>(
          std::mem_fn(&Bots::Service::Start), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::ric::bots::StopRequest, ::ric::bots::EmptyResponse>(
          std::mem_fn(&Bots::Service::Stop), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::ric::bots::SetStateRequest, ::ric::bots::EmptyResponse>(
          std::mem_fn(&Bots::Service::SetState), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::ric::bots::SetGeoConfigRequest, ::ric::bots::EmptyResponse>(
          std::mem_fn(&Bots::Service::SetGeoConfig), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::ric::bots::PauseStopGeoRequest, ::ric::bots::EmptyResponse>(
          std::mem_fn(&Bots::Service::PauseStopGeo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::ric::bots::StartGeoRequest, ::ric::bots::EmptyResponse>(
          std::mem_fn(&Bots::Service::StartGeo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::ric::bots::AddToGenConfigRequest, ::ric::bots::EmptyResponse>(
          std::mem_fn(&Bots::Service::AddToGenConfig), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::ric::bots::RemoveFromGenConfigRequest, ::ric::bots::EmptyResponse>(
          std::mem_fn(&Bots::Service::RemoveFromGenConfig), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::ric::bots::SetBotConfigRequest, ::ric::bots::EmptyResponse>(
          std::mem_fn(&Bots::Service::SetBotConfig), this)));
}

Bots::Service::~Service() {
}

::grpc::Status Bots::Service::Start(::grpc::ServerContext* context, const ::ric::bots::StartRequest* request, ::ric::bots::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::Stop(::grpc::ServerContext* context, const ::ric::bots::StopRequest* request, ::ric::bots::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::SetState(::grpc::ServerContext* context, const ::ric::bots::SetStateRequest* request, ::ric::bots::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::SetGeoConfig(::grpc::ServerContext* context, const ::ric::bots::SetGeoConfigRequest* request, ::ric::bots::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::PauseStopGeo(::grpc::ServerContext* context, const ::ric::bots::PauseStopGeoRequest* request, ::ric::bots::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::StartGeo(::grpc::ServerContext* context, const ::ric::bots::StartGeoRequest* request, ::ric::bots::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::AddToGenConfig(::grpc::ServerContext* context, const ::ric::bots::AddToGenConfigRequest* request, ::ric::bots::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::RemoveFromGenConfig(::grpc::ServerContext* context, const ::ric::bots::RemoveFromGenConfigRequest* request, ::ric::bots::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::SetBotConfig(::grpc::ServerContext* context, const ::ric::bots::SetBotConfigRequest* request, ::ric::bots::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ric
}  // namespace bots

