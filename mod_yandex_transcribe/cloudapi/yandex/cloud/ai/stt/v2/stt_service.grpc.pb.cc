// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: yandex/cloud/ai/stt/v2/stt_service.proto

#include "yandex/cloud/ai/stt/v2/stt_service.pb.h"
#include "yandex/cloud/ai/stt/v2/stt_service.grpc.pb.h"

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
namespace yandex {
namespace cloud {
namespace ai {
namespace stt {
namespace v2 {

static const char* SttService_method_names[] = {
  "/yandex.cloud.ai.stt.v2.SttService/LongRunningRecognize",
  "/yandex.cloud.ai.stt.v2.SttService/StreamingRecognize",
};

std::unique_ptr< SttService::Stub> SttService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SttService::Stub> stub(new SttService::Stub(channel));
  return stub;
}

SttService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_LongRunningRecognize_(SttService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StreamingRecognize_(SttService_method_names[1], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::Status SttService::Stub::LongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::yandex::cloud::operation::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_LongRunningRecognize_, context, request, response);
}

void SttService::Stub::experimental_async::LongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_LongRunningRecognize_, context, request, response, std::move(f));
}

void SttService::Stub::experimental_async::LongRunningRecognize(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_LongRunningRecognize_, context, request, response, std::move(f));
}

void SttService::Stub::experimental_async::LongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request, ::yandex::cloud::operation::Operation* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_LongRunningRecognize_, context, request, response, reactor);
}

void SttService::Stub::experimental_async::LongRunningRecognize(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::yandex::cloud::operation::Operation* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_LongRunningRecognize_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>* SttService::Stub::AsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::yandex::cloud::operation::Operation>::Create(channel_.get(), cq, rpcmethod_LongRunningRecognize_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>* SttService::Stub::PrepareAsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::yandex::cloud::operation::Operation>::Create(channel_.get(), cq, rpcmethod_LongRunningRecognize_, context, request, false);
}

::grpc::ClientReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* SttService::Stub::StreamingRecognizeRaw(::grpc::ClientContext* context) {
  return ::grpc_impl::internal::ClientReaderWriterFactory< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>::Create(channel_.get(), rpcmethod_StreamingRecognize_, context);
}

void SttService::Stub::experimental_async::StreamingRecognize(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest,::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderWriterFactory< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest,::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_StreamingRecognize_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* SttService::Stub::AsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>::Create(channel_.get(), cq, rpcmethod_StreamingRecognize_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* SttService::Stub::PrepareAsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>::Create(channel_.get(), cq, rpcmethod_StreamingRecognize_, context, false, nullptr);
}

SttService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SttService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SttService::Service, ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest, ::yandex::cloud::operation::Operation>(
          std::mem_fn(&SttService::Service::LongRunningRecognize), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SttService_method_names[1],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< SttService::Service, ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>(
          std::mem_fn(&SttService::Service::StreamingRecognize), this)));
}

SttService::Service::~Service() {
}

::grpc::Status SttService::Service::LongRunningRecognize(::grpc::ServerContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request, ::yandex::cloud::operation::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SttService::Service::StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse, ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace yandex
}  // namespace cloud
}  // namespace ai
}  // namespace stt
}  // namespace v2

