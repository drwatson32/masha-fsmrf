// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: yandex/cloud/ai/stt/v2/stt_service.proto
#ifndef GRPC_yandex_2fcloud_2fai_2fstt_2fv2_2fstt_5fservice_2eproto__INCLUDED
#define GRPC_yandex_2fcloud_2fai_2fstt_2fv2_2fstt_5fservice_2eproto__INCLUDED

#include "yandex/cloud/ai/stt/v2/stt_service.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class CompletionQueue;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc

namespace yandex {
namespace cloud {
namespace ai {
namespace stt {
namespace v2 {

class SttService final {
 public:
  static constexpr char const* service_full_name() {
    return "yandex.cloud.ai.stt.v2.SttService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status LongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::yandex::cloud::operation::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>> AsyncLongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>>(AsyncLongRunningRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>> PrepareAsyncLongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>>(PrepareAsyncLongRunningRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>> StreamingRecognize(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>>(StreamingRecognizeRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>> AsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>>(AsyncStreamingRecognizeRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>> PrepareAsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>>(PrepareAsyncStreamingRecognizeRaw(context, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void LongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)>) = 0;
      virtual void LongRunningRecognize(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)>) = 0;
      virtual void LongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request, ::yandex::cloud::operation::Operation* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void LongRunningRecognize(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::yandex::cloud::operation::Operation* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void StreamingRecognize(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest,::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>* AsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>* PrepareAsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* StreamingRecognizeRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* AsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* PrepareAsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status LongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::yandex::cloud::operation::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>> AsyncLongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>>(AsyncLongRunningRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>> PrepareAsyncLongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>>(PrepareAsyncLongRunningRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>> StreamingRecognize(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>>(StreamingRecognizeRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>> AsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>>(AsyncStreamingRecognizeRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>> PrepareAsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>>(PrepareAsyncStreamingRecognizeRaw(context, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void LongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)>) override;
      void LongRunningRecognize(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)>) override;
      void LongRunningRecognize(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request, ::yandex::cloud::operation::Operation* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void LongRunningRecognize(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::yandex::cloud::operation::Operation* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void StreamingRecognize(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest,::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>* AsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>* PrepareAsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* StreamingRecognizeRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* AsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* PrepareAsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_LongRunningRecognize_;
    const ::grpc::internal::RpcMethod rpcmethod_StreamingRecognize_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status LongRunningRecognize(::grpc::ServerContext* context, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request, ::yandex::cloud::operation::Operation* response);
    virtual ::grpc::Status StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse, ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_LongRunningRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_LongRunningRecognize() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_LongRunningRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LongRunningRecognize(::grpc::ServerContext* /*context*/, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLongRunningRecognize(::grpc::ServerContext* context, ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request, ::grpc::ServerAsyncResponseWriter< ::yandex::cloud::operation::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_StreamingRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_StreamingRecognize() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_StreamingRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingRecognize(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse, ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse, ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_LongRunningRecognize<WithAsyncMethod_StreamingRecognize<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_LongRunningRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_LongRunningRecognize() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest, ::yandex::cloud::operation::Operation>(
          [this](::grpc::ServerContext* context,
                 const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* request,
                 ::yandex::cloud::operation::Operation* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->LongRunningRecognize(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_LongRunningRecognize(
        ::grpc::experimental::MessageAllocator< ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest, ::yandex::cloud::operation::Operation>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest, ::yandex::cloud::operation::Operation>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_LongRunningRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LongRunningRecognize(::grpc::ServerContext* /*context*/, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void LongRunningRecognize(::grpc::ServerContext* /*context*/, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_StreamingRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_StreamingRecognize() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc_impl::internal::CallbackBidiHandler< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>(
          [this] { return this->StreamingRecognize(); }));
    }
    ~ExperimentalWithCallbackMethod_StreamingRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingRecognize(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse, ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerBidiReactor< ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>* StreamingRecognize() {
      return new ::grpc_impl::internal::UnimplementedBidiReactor<
        ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest, ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse>;}
  };
  typedef ExperimentalWithCallbackMethod_LongRunningRecognize<ExperimentalWithCallbackMethod_StreamingRecognize<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_LongRunningRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_LongRunningRecognize() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_LongRunningRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LongRunningRecognize(::grpc::ServerContext* /*context*/, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_StreamingRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_StreamingRecognize() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_StreamingRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingRecognize(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse, ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_LongRunningRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_LongRunningRecognize() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_LongRunningRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LongRunningRecognize(::grpc::ServerContext* /*context*/, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLongRunningRecognize(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_StreamingRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_StreamingRecognize() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_StreamingRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingRecognize(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse, ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_LongRunningRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_LongRunningRecognize() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->LongRunningRecognize(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_LongRunningRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LongRunningRecognize(::grpc::ServerContext* /*context*/, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void LongRunningRecognize(::grpc::ServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_StreamingRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_StreamingRecognize() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc_impl::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->StreamingRecognize(); }));
    }
    ~ExperimentalWithRawCallbackMethod_StreamingRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingRecognize(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::yandex::cloud::ai::stt::v2::StreamingRecognitionResponse, ::yandex::cloud::ai::stt::v2::StreamingRecognitionRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* StreamingRecognize() {
      return new ::grpc_impl::internal::UnimplementedBidiReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_LongRunningRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_LongRunningRecognize() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest, ::yandex::cloud::operation::Operation>(std::bind(&WithStreamedUnaryMethod_LongRunningRecognize<BaseClass>::StreamedLongRunningRecognize, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_LongRunningRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status LongRunningRecognize(::grpc::ServerContext* /*context*/, const ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedLongRunningRecognize(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::yandex::cloud::ai::stt::v2::LongRunningRecognitionRequest,::yandex::cloud::operation::Operation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_LongRunningRecognize<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_LongRunningRecognize<Service > StreamedService;
};

}  // namespace v2
}  // namespace stt
}  // namespace ai
}  // namespace cloud
}  // namespace yandex


#endif  // GRPC_yandex_2fcloud_2fai_2fstt_2fv2_2fstt_5fservice_2eproto__INCLUDED