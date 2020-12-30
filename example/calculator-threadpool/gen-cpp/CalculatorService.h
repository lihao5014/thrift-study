/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef CalculatorService_H
#define CalculatorService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "calculator_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class CalculatorServiceIf {
 public:
  virtual ~CalculatorServiceIf() {}
  virtual int32_t add(const int32_t num1, const int32_t num2) = 0;
  virtual int32_t sub(const int32_t num1, const int32_t num2) = 0;
  virtual int32_t mul(const int32_t num1, const int32_t num2) = 0;
  virtual int32_t div(const int32_t num1, const int32_t num2) = 0;
};

class CalculatorServiceIfFactory {
 public:
  typedef CalculatorServiceIf Handler;

  virtual ~CalculatorServiceIfFactory() {}

  virtual CalculatorServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(CalculatorServiceIf* /* handler */) = 0;
};

class CalculatorServiceIfSingletonFactory : virtual public CalculatorServiceIfFactory {
 public:
  CalculatorServiceIfSingletonFactory(const ::std::shared_ptr<CalculatorServiceIf>& iface) : iface_(iface) {}
  virtual ~CalculatorServiceIfSingletonFactory() {}

  virtual CalculatorServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(CalculatorServiceIf* /* handler */) {}

 protected:
  ::std::shared_ptr<CalculatorServiceIf> iface_;
};

class CalculatorServiceNull : virtual public CalculatorServiceIf {
 public:
  virtual ~CalculatorServiceNull() {}
  int32_t add(const int32_t /* num1 */, const int32_t /* num2 */) {
    int32_t _return = 0;
    return _return;
  }
  int32_t sub(const int32_t /* num1 */, const int32_t /* num2 */) {
    int32_t _return = 0;
    return _return;
  }
  int32_t mul(const int32_t /* num1 */, const int32_t /* num2 */) {
    int32_t _return = 0;
    return _return;
  }
  int32_t div(const int32_t /* num1 */, const int32_t /* num2 */) {
    int32_t _return = 0;
    return _return;
  }
};

typedef struct _CalculatorService_add_args__isset {
  _CalculatorService_add_args__isset() : num1(false), num2(false) {}
  bool num1 :1;
  bool num2 :1;
} _CalculatorService_add_args__isset;

class CalculatorService_add_args {
 public:

  CalculatorService_add_args(const CalculatorService_add_args&);
  CalculatorService_add_args& operator=(const CalculatorService_add_args&);
  CalculatorService_add_args() : num1(0), num2(0) {
  }

  virtual ~CalculatorService_add_args() noexcept;
  int32_t num1;
  int32_t num2;

  _CalculatorService_add_args__isset __isset;

  void __set_num1(const int32_t val);

  void __set_num2(const int32_t val);

  bool operator == (const CalculatorService_add_args & rhs) const
  {
    if (!(num1 == rhs.num1))
      return false;
    if (!(num2 == rhs.num2))
      return false;
    return true;
  }
  bool operator != (const CalculatorService_add_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CalculatorService_add_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CalculatorService_add_pargs {
 public:


  virtual ~CalculatorService_add_pargs() noexcept;
  const int32_t* num1;
  const int32_t* num2;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CalculatorService_add_result__isset {
  _CalculatorService_add_result__isset() : success(false) {}
  bool success :1;
} _CalculatorService_add_result__isset;

class CalculatorService_add_result {
 public:

  CalculatorService_add_result(const CalculatorService_add_result&);
  CalculatorService_add_result& operator=(const CalculatorService_add_result&);
  CalculatorService_add_result() : success(0) {
  }

  virtual ~CalculatorService_add_result() noexcept;
  int32_t success;

  _CalculatorService_add_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const CalculatorService_add_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CalculatorService_add_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CalculatorService_add_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CalculatorService_add_presult__isset {
  _CalculatorService_add_presult__isset() : success(false) {}
  bool success :1;
} _CalculatorService_add_presult__isset;

class CalculatorService_add_presult {
 public:


  virtual ~CalculatorService_add_presult() noexcept;
  int32_t* success;

  _CalculatorService_add_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CalculatorService_sub_args__isset {
  _CalculatorService_sub_args__isset() : num1(false), num2(false) {}
  bool num1 :1;
  bool num2 :1;
} _CalculatorService_sub_args__isset;

class CalculatorService_sub_args {
 public:

  CalculatorService_sub_args(const CalculatorService_sub_args&);
  CalculatorService_sub_args& operator=(const CalculatorService_sub_args&);
  CalculatorService_sub_args() : num1(0), num2(0) {
  }

  virtual ~CalculatorService_sub_args() noexcept;
  int32_t num1;
  int32_t num2;

  _CalculatorService_sub_args__isset __isset;

  void __set_num1(const int32_t val);

  void __set_num2(const int32_t val);

  bool operator == (const CalculatorService_sub_args & rhs) const
  {
    if (!(num1 == rhs.num1))
      return false;
    if (!(num2 == rhs.num2))
      return false;
    return true;
  }
  bool operator != (const CalculatorService_sub_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CalculatorService_sub_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CalculatorService_sub_pargs {
 public:


  virtual ~CalculatorService_sub_pargs() noexcept;
  const int32_t* num1;
  const int32_t* num2;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CalculatorService_sub_result__isset {
  _CalculatorService_sub_result__isset() : success(false) {}
  bool success :1;
} _CalculatorService_sub_result__isset;

class CalculatorService_sub_result {
 public:

  CalculatorService_sub_result(const CalculatorService_sub_result&);
  CalculatorService_sub_result& operator=(const CalculatorService_sub_result&);
  CalculatorService_sub_result() : success(0) {
  }

  virtual ~CalculatorService_sub_result() noexcept;
  int32_t success;

  _CalculatorService_sub_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const CalculatorService_sub_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CalculatorService_sub_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CalculatorService_sub_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CalculatorService_sub_presult__isset {
  _CalculatorService_sub_presult__isset() : success(false) {}
  bool success :1;
} _CalculatorService_sub_presult__isset;

class CalculatorService_sub_presult {
 public:


  virtual ~CalculatorService_sub_presult() noexcept;
  int32_t* success;

  _CalculatorService_sub_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CalculatorService_mul_args__isset {
  _CalculatorService_mul_args__isset() : num1(false), num2(false) {}
  bool num1 :1;
  bool num2 :1;
} _CalculatorService_mul_args__isset;

class CalculatorService_mul_args {
 public:

  CalculatorService_mul_args(const CalculatorService_mul_args&);
  CalculatorService_mul_args& operator=(const CalculatorService_mul_args&);
  CalculatorService_mul_args() : num1(0), num2(0) {
  }

  virtual ~CalculatorService_mul_args() noexcept;
  int32_t num1;
  int32_t num2;

  _CalculatorService_mul_args__isset __isset;

  void __set_num1(const int32_t val);

  void __set_num2(const int32_t val);

  bool operator == (const CalculatorService_mul_args & rhs) const
  {
    if (!(num1 == rhs.num1))
      return false;
    if (!(num2 == rhs.num2))
      return false;
    return true;
  }
  bool operator != (const CalculatorService_mul_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CalculatorService_mul_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CalculatorService_mul_pargs {
 public:


  virtual ~CalculatorService_mul_pargs() noexcept;
  const int32_t* num1;
  const int32_t* num2;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CalculatorService_mul_result__isset {
  _CalculatorService_mul_result__isset() : success(false) {}
  bool success :1;
} _CalculatorService_mul_result__isset;

class CalculatorService_mul_result {
 public:

  CalculatorService_mul_result(const CalculatorService_mul_result&);
  CalculatorService_mul_result& operator=(const CalculatorService_mul_result&);
  CalculatorService_mul_result() : success(0) {
  }

  virtual ~CalculatorService_mul_result() noexcept;
  int32_t success;

  _CalculatorService_mul_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const CalculatorService_mul_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CalculatorService_mul_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CalculatorService_mul_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CalculatorService_mul_presult__isset {
  _CalculatorService_mul_presult__isset() : success(false) {}
  bool success :1;
} _CalculatorService_mul_presult__isset;

class CalculatorService_mul_presult {
 public:


  virtual ~CalculatorService_mul_presult() noexcept;
  int32_t* success;

  _CalculatorService_mul_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CalculatorService_div_args__isset {
  _CalculatorService_div_args__isset() : num1(false), num2(false) {}
  bool num1 :1;
  bool num2 :1;
} _CalculatorService_div_args__isset;

class CalculatorService_div_args {
 public:

  CalculatorService_div_args(const CalculatorService_div_args&);
  CalculatorService_div_args& operator=(const CalculatorService_div_args&);
  CalculatorService_div_args() : num1(0), num2(0) {
  }

  virtual ~CalculatorService_div_args() noexcept;
  int32_t num1;
  int32_t num2;

  _CalculatorService_div_args__isset __isset;

  void __set_num1(const int32_t val);

  void __set_num2(const int32_t val);

  bool operator == (const CalculatorService_div_args & rhs) const
  {
    if (!(num1 == rhs.num1))
      return false;
    if (!(num2 == rhs.num2))
      return false;
    return true;
  }
  bool operator != (const CalculatorService_div_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CalculatorService_div_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CalculatorService_div_pargs {
 public:


  virtual ~CalculatorService_div_pargs() noexcept;
  const int32_t* num1;
  const int32_t* num2;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CalculatorService_div_result__isset {
  _CalculatorService_div_result__isset() : success(false) {}
  bool success :1;
} _CalculatorService_div_result__isset;

class CalculatorService_div_result {
 public:

  CalculatorService_div_result(const CalculatorService_div_result&);
  CalculatorService_div_result& operator=(const CalculatorService_div_result&);
  CalculatorService_div_result() : success(0) {
  }

  virtual ~CalculatorService_div_result() noexcept;
  int32_t success;

  _CalculatorService_div_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const CalculatorService_div_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CalculatorService_div_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CalculatorService_div_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CalculatorService_div_presult__isset {
  _CalculatorService_div_presult__isset() : success(false) {}
  bool success :1;
} _CalculatorService_div_presult__isset;

class CalculatorService_div_presult {
 public:


  virtual ~CalculatorService_div_presult() noexcept;
  int32_t* success;

  _CalculatorService_div_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class CalculatorServiceClient : virtual public CalculatorServiceIf {
 public:
  CalculatorServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  CalculatorServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t add(const int32_t num1, const int32_t num2);
  void send_add(const int32_t num1, const int32_t num2);
  int32_t recv_add();
  int32_t sub(const int32_t num1, const int32_t num2);
  void send_sub(const int32_t num1, const int32_t num2);
  int32_t recv_sub();
  int32_t mul(const int32_t num1, const int32_t num2);
  void send_mul(const int32_t num1, const int32_t num2);
  int32_t recv_mul();
  int32_t div(const int32_t num1, const int32_t num2);
  void send_div(const int32_t num1, const int32_t num2);
  int32_t recv_div();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class CalculatorServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<CalculatorServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (CalculatorServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_add(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_sub(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_mul(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_div(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  CalculatorServiceProcessor(::std::shared_ptr<CalculatorServiceIf> iface) :
    iface_(iface) {
    processMap_["add"] = &CalculatorServiceProcessor::process_add;
    processMap_["sub"] = &CalculatorServiceProcessor::process_sub;
    processMap_["mul"] = &CalculatorServiceProcessor::process_mul;
    processMap_["div"] = &CalculatorServiceProcessor::process_div;
  }

  virtual ~CalculatorServiceProcessor() {}
};

class CalculatorServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  CalculatorServiceProcessorFactory(const ::std::shared_ptr< CalculatorServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< CalculatorServiceIfFactory > handlerFactory_;
};

class CalculatorServiceMultiface : virtual public CalculatorServiceIf {
 public:
  CalculatorServiceMultiface(std::vector<std::shared_ptr<CalculatorServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~CalculatorServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<CalculatorServiceIf> > ifaces_;
  CalculatorServiceMultiface() {}
  void add(::std::shared_ptr<CalculatorServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  int32_t add(const int32_t num1, const int32_t num2) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->add(num1, num2);
    }
    return ifaces_[i]->add(num1, num2);
  }

  int32_t sub(const int32_t num1, const int32_t num2) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->sub(num1, num2);
    }
    return ifaces_[i]->sub(num1, num2);
  }

  int32_t mul(const int32_t num1, const int32_t num2) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->mul(num1, num2);
    }
    return ifaces_[i]->mul(num1, num2);
  }

  int32_t div(const int32_t num1, const int32_t num2) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->div(num1, num2);
    }
    return ifaces_[i]->div(num1, num2);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class CalculatorServiceConcurrentClient : virtual public CalculatorServiceIf {
 public:
  CalculatorServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  CalculatorServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t add(const int32_t num1, const int32_t num2);
  int32_t send_add(const int32_t num1, const int32_t num2);
  int32_t recv_add(const int32_t seqid);
  int32_t sub(const int32_t num1, const int32_t num2);
  int32_t send_sub(const int32_t num1, const int32_t num2);
  int32_t recv_sub(const int32_t seqid);
  int32_t mul(const int32_t num1, const int32_t num2);
  int32_t send_mul(const int32_t num1, const int32_t num2);
  int32_t recv_mul(const int32_t seqid);
  int32_t div(const int32_t num1, const int32_t num2);
  int32_t send_div(const int32_t num1, const int32_t num2);
  int32_t recv_div(const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif