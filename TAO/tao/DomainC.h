// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:151

#ifndef _TAO_IDL_ORIG_DOMAINC_H_
#define _TAO_IDL_ORIG_DOMAINC_H_

#include "ace/pre.h"
#include "tao/corba.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "PolicyC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module/module_ch.cpp:48

TAO_NAMESPACE  CORBA
{
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:52

#if !defined (_CORBA_DOMAINMANAGER___PTR_CH_)
#define _CORBA_DOMAINMANAGER___PTR_CH_
  
  class DomainManager;
  typedef DomainManager *DomainManager_ptr;

#endif /* end #if !defined */
  
    struct tao_DomainManager_life;
    typedef TAO_Objref_Var_T<DomainManager, tao_DomainManager_life> DomainManager_var;
    typedef TAO_Objref_Out_T<DomainManager, tao_DomainManager_life> DomainManager_out;

    struct tao_DomainManager_life
    {
      static DomainManager_ptr tao_duplicate (DomainManager_ptr);
      static void tao_release (DomainManager_ptr);
      static DomainManager_ptr tao_nil (void);
    };

    struct tao_DomainManager_cast
    {
      static DomainManager_ptr tao_narrow (CORBA::Object_ptr
                                 ACE_ENV_ARG_DECL);
      static CORBA::Object_ptr tao_upcast (void *);
    };

#if 0
  
#if !defined (_CORBA_DOMAINMANAGER___VAR_CH_)
#define _CORBA_DOMAINMANAGER___VAR_CH_
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:571
  
  class TAO_Export DomainManager_var : public TAO_Base_var
  {
  public:
    DomainManager_var (void); // default constructor
    DomainManager_var (DomainManager_ptr p) : ptr_ (p) {} 
    DomainManager_var (const DomainManager_var &); // copy constructor
    ~DomainManager_var (void); // destructor
    
    DomainManager_var &operator= (DomainManager_ptr);
    DomainManager_var &operator= (const DomainManager_var &);
    DomainManager_ptr operator-> (void) const;
    
    operator const DomainManager_ptr &() const;
    operator DomainManager_ptr &();
    // in, inout, out, _retn 
    DomainManager_ptr in (void) const;
    DomainManager_ptr &inout (void);
    DomainManager_ptr &out (void);
    DomainManager_ptr _retn (void);
    DomainManager_ptr ptr (void) const;
    
    // Hooks used by template sequence and object manager classes
    // for non-defined forward declared interfaces.
    static DomainManager_ptr tao_duplicate (DomainManager_ptr);
    static void tao_release (DomainManager_ptr);
    static DomainManager_ptr tao_nil (void);
    static DomainManager_ptr tao_narrow (
        CORBA::Object *
        ACE_ENV_ARG_DECL_NOT_USED
      );
    static CORBA::Object * tao_upcast (void *);
  
  private:
    DomainManager_ptr ptr_;
    // Unimplemented - prevents widening assignment.
    DomainManager_var (const TAO_Base_var &rhs);
    DomainManager_var &operator= (const TAO_Base_var &rhs);
  };

#endif /* end #if !defined */

#if !defined (_CORBA_DOMAINMANAGER___OUT_CH_)
#define _CORBA_DOMAINMANAGER___OUT_CH_
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:946
  
  class TAO_Export DomainManager_out
  {
  public:
    DomainManager_out (DomainManager_ptr &);
    DomainManager_out (DomainManager_var &);
    DomainManager_out (const DomainManager_out &);
    DomainManager_out &operator= (const DomainManager_out &);
    DomainManager_out &operator= (const DomainManager_var &);
    DomainManager_out &operator= (DomainManager_ptr);
    operator DomainManager_ptr &();
    DomainManager_ptr &ptr (void);
    DomainManager_ptr operator-> (void);
  
  private:
    DomainManager_ptr &ptr_;
  };

#endif /* end #if !defined */

#endif /* 0 */
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:110

#if !defined (_CORBA_DOMAINMANAGER_CH_)
#define _CORBA_DOMAINMANAGER_CH_
  
  class _TAO_DomainManager_Proxy_Impl;
  class _TAO_DomainManager_Remote_Proxy_Impl;
  class _TAO_DomainManager_Proxy_Broker;
  class _TAO_DomainManager_Remote_Proxy_Broker;
  
  class TAO_Export DomainManager
    : public virtual CORBA::Object
  {
  public:
    typedef DomainManager_ptr _ptr_type;
    typedef DomainManager_var _var_type;
    static int _tao_class_id;
    
    // The static operations.
    static DomainManager_ptr _duplicate (DomainManager_ptr obj);
    
    static DomainManager_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static DomainManager_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static DomainManager_ptr _nil (void)
      {
        return (DomainManager_ptr)0;
      }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_ch.cpp:46
    
    virtual ::CORBA::Policy_ptr get_domain_policy (
        CORBA::PolicyType policy_type
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
    
    // TAO_IDL - Generated from
    // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:267
    
    virtual CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    virtual void *_tao_QueryInterface (ptr_arith_t type);
    
    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  private:
    _TAO_DomainManager_Proxy_Broker *the_TAO_DomainManager_Proxy_Broker_;
  
  protected:
    DomainManager (int collocated = 0);
    
    // These methods travese the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void CORBA_DomainManager_setup_collocation (int collocated);
    
    DomainManager (
        TAO_Stub *objref, 
        CORBA::Boolean _tao_collocated = 0,
        TAO_Abstract_ServantBase *servant = 0
      );
    virtual ~DomainManager (void);
    
    friend class _TAO_DomainManager_Remote_Proxy_Impl;
    friend class _TAO_DomainManager_ThruPOA_Proxy_Impl;
    friend class _TAO_DomainManager_Direct_Proxy_Impl;
  
  private:
    DomainManager (const DomainManager &);
    void operator= (const DomainManager &);
  };
  
  // The Proxy Implementations are used by each interface to
  // perform a call. Each different implementation encapsulates
  // an invocation logic.
  
  
  ///////////////////////////////////////////////////////////////////////
  //                    Base Proxy Impl. Declaration
  //
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/base_proxy_impl_ch.cpp:35
  
  class TAO_Export _TAO_DomainManager_Proxy_Impl
    : public virtual TAO_Object_Proxy_Impl
  {
  public:
    virtual ~_TAO_DomainManager_Proxy_Impl (void) {}
    
    // TAO_IDL - Generated from
    // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/base_proxy_impl_ch.cpp:24
    
    virtual ::CORBA::Policy_ptr get_domain_policy (
        CORBA::Object *_collocated_tao_target_,
        CORBA::PolicyType policy_type
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;
  
  protected:
    _TAO_DomainManager_Proxy_Impl (void);
  };
  
  //
  //               End Base Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////
  
  
  ///////////////////////////////////////////////////////////////////////
  //                Remote Proxy Impl. Declaration
  //
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/remote_proxy_impl_ch.cpp:37
  
  class TAO_Export _TAO_DomainManager_Remote_Proxy_Impl
    : public virtual _TAO_DomainManager_Proxy_Impl,
      public virtual TAO_Remote_Object_Proxy_Impl
  {
  public:
    _TAO_DomainManager_Remote_Proxy_Impl (void);
    
    virtual ~_TAO_DomainManager_Remote_Proxy_Impl (void) {}
    
    // TAO_IDL - Generated from
    // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24
    
    virtual ::CORBA::Policy_ptr get_domain_policy (
        CORBA::Object *_collocated_tao_target_,
        CORBA::PolicyType policy_type
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
  };
  
  //
  //             End Remote Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////
  
  // The Proxy Brokers are used by each interface to get
  // the right proxy for performing a call. In the new 
  // collocation scheme, the proxy to be used can vary on
  // a call by call basis.
  
  ///////////////////////////////////////////////////////////////////////
  //                 Base Proxy Broker Declaration 
  //
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/base_proxy_broker_ch.cpp:35
  
  class TAO_Export _TAO_DomainManager_Proxy_Broker
  {
  public:
    virtual ~_TAO_DomainManager_Proxy_Broker (void);
    virtual _TAO_DomainManager_Proxy_Impl &select_proxy (
        DomainManager *object
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      ) = 0;
    
  protected:
    _TAO_DomainManager_Proxy_Broker (void);
    
  };
  
  //
  //              End Base Proxy Broker Declaration 
  ///////////////////////////////////////////////////////////////////////
  
    
  ///////////////////////////////////////////////////////////////////////
  //                 Remote Proxy Broker Declaration 
  //
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/remote_proxy_broker_ch.cpp:40
  
  class TAO_Export _TAO_DomainManager_Remote_Proxy_Broker
    : public virtual _TAO_DomainManager_Proxy_Broker
  {
  public: 
    _TAO_DomainManager_Remote_Proxy_Broker (void);
    
    virtual ~_TAO_DomainManager_Remote_Proxy_Broker (void);
    
    virtual _TAO_DomainManager_Proxy_Impl &select_proxy (
        DomainManager *object
        ACE_ENV_ARG_DECL
      );
    
  private:
    _TAO_DomainManager_Remote_Proxy_Impl remote_proxy_impl_;
  
  public:
    // This member function is used to get an handle to the unique instance
    // of the Remote Proxy Broker that is available for a given
    // interface.
    static _TAO_DomainManager_Remote_Proxy_Broker *the_TAO_DomainManager_Remote_Proxy_Broker (void);
  };
  
  //
  //              End Remote Proxy Broker Declaration 
  ///////////////////////////////////////////////////////////////////////

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_DomainManager;
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_constant/constant_ch.cpp:52
  
  const CORBA::ULong SecConstruction = 11U;
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:52

#if !defined (_CORBA_CONSTRUCTIONPOLICY___PTR_CH_)
#define _CORBA_CONSTRUCTIONPOLICY___PTR_CH_
  
  class ConstructionPolicy;
  typedef ConstructionPolicy *ConstructionPolicy_ptr;

#endif /* end #if !defined */

#if !defined (_CORBA_CONSTRUCTIONPOLICY___VAR_CH_)
#define _CORBA_CONSTRUCTIONPOLICY___VAR_CH_
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:571
  
  class TAO_Export ConstructionPolicy_var : public TAO_Base_var
  {
  public:
    ConstructionPolicy_var (void); // default constructor
    ConstructionPolicy_var (ConstructionPolicy_ptr p) : ptr_ (p) {} 
    ConstructionPolicy_var (const ConstructionPolicy_var &); // copy constructor
    ~ConstructionPolicy_var (void); // destructor
    
    ConstructionPolicy_var &operator= (ConstructionPolicy_ptr);
    ConstructionPolicy_var &operator= (const ConstructionPolicy_var &);
    ConstructionPolicy_ptr operator-> (void) const;
    
    operator const ConstructionPolicy_ptr &() const;
    operator ConstructionPolicy_ptr &();
    // in, inout, out, _retn 
    ConstructionPolicy_ptr in (void) const;
    ConstructionPolicy_ptr &inout (void);
    ConstructionPolicy_ptr &out (void);
    ConstructionPolicy_ptr _retn (void);
    ConstructionPolicy_ptr ptr (void) const;
    
    // Hooks used by template sequence and object manager classes
    // for non-defined forward declared interfaces.
    static ConstructionPolicy_ptr tao_duplicate (ConstructionPolicy_ptr);
    static void tao_release (ConstructionPolicy_ptr);
    static ConstructionPolicy_ptr tao_nil (void);
    static ConstructionPolicy_ptr tao_narrow (
        CORBA::Object *
        ACE_ENV_ARG_DECL_NOT_USED
      );
    static CORBA::Object * tao_upcast (void *);
  
  private:
    ConstructionPolicy_ptr ptr_;
    // Unimplemented - prevents widening assignment.
    ConstructionPolicy_var (const TAO_Base_var &rhs);
    ConstructionPolicy_var &operator= (const TAO_Base_var &rhs);
  };

#endif /* end #if !defined */

#if !defined (_CORBA_CONSTRUCTIONPOLICY___OUT_CH_)
#define _CORBA_CONSTRUCTIONPOLICY___OUT_CH_
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:946
  
  class TAO_Export ConstructionPolicy_out
  {
  public:
    ConstructionPolicy_out (ConstructionPolicy_ptr &);
    ConstructionPolicy_out (ConstructionPolicy_var &);
    ConstructionPolicy_out (const ConstructionPolicy_out &);
    ConstructionPolicy_out &operator= (const ConstructionPolicy_out &);
    ConstructionPolicy_out &operator= (const ConstructionPolicy_var &);
    ConstructionPolicy_out &operator= (ConstructionPolicy_ptr);
    operator ConstructionPolicy_ptr &();
    ConstructionPolicy_ptr &ptr (void);
    ConstructionPolicy_ptr operator-> (void);
  
  private:
    ConstructionPolicy_ptr &ptr_;
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:110

#if !defined (_CORBA_CONSTRUCTIONPOLICY_CH_)
#define _CORBA_CONSTRUCTIONPOLICY_CH_
  
  class _TAO_ConstructionPolicy_Proxy_Impl;
  class _TAO_ConstructionPolicy_Remote_Proxy_Impl;
  class _TAO_ConstructionPolicy_Proxy_Broker;
  class _TAO_ConstructionPolicy_Remote_Proxy_Broker;
  
  class TAO_Export ConstructionPolicy
    : public virtual CORBA::Policy
  {
  public:
    typedef ConstructionPolicy_ptr _ptr_type;
    typedef ConstructionPolicy_var _var_type;
    static int _tao_class_id;
    
    // The static operations.
    static ConstructionPolicy_ptr _duplicate (ConstructionPolicy_ptr obj);
    
    static ConstructionPolicy_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static ConstructionPolicy_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static ConstructionPolicy_ptr _nil (void)
      {
        return (ConstructionPolicy_ptr)0;
      }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_ch.cpp:46
    
    virtual void make_domain_manager (
        CORBA::InterfaceDef_ptr object_type,
        CORBA::Boolean constr_policy
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
    
    // TAO_IDL - Generated from
    // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:267
    
    virtual CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    virtual void *_tao_QueryInterface (ptr_arith_t type);
    
    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  private:
    _TAO_ConstructionPolicy_Proxy_Broker *the_TAO_ConstructionPolicy_Proxy_Broker_;
  
  protected:
    ConstructionPolicy (int collocated = 0);
    
    // These methods travese the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void CORBA_ConstructionPolicy_setup_collocation (int collocated);
    
    ConstructionPolicy (
        TAO_Stub *objref, 
        CORBA::Boolean _tao_collocated = 0,
        TAO_Abstract_ServantBase *servant = 0
      );
    virtual ~ConstructionPolicy (void);
    
    friend class _TAO_ConstructionPolicy_Remote_Proxy_Impl;
    friend class _TAO_ConstructionPolicy_ThruPOA_Proxy_Impl;
    friend class _TAO_ConstructionPolicy_Direct_Proxy_Impl;
  
  private:
    ConstructionPolicy (const ConstructionPolicy &);
    void operator= (const ConstructionPolicy &);
  };
  
  // The Proxy Implementations are used by each interface to
  // perform a call. Each different implementation encapsulates
  // an invocation logic.
  
  
  ///////////////////////////////////////////////////////////////////////
  //                    Base Proxy Impl. Declaration
  //
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/base_proxy_impl_ch.cpp:35
  
  class TAO_Export _TAO_ConstructionPolicy_Proxy_Impl
    : public virtual CORBA::_TAO_Policy_Proxy_Impl
  {
  public:
    virtual ~_TAO_ConstructionPolicy_Proxy_Impl (void) {}
    
    // TAO_IDL - Generated from
    // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/base_proxy_impl_ch.cpp:24
    
    virtual void make_domain_manager (
        CORBA::Object *_collocated_tao_target_,
        CORBA::InterfaceDef_ptr object_type,
        CORBA::Boolean constr_policy
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;
  
  protected:
    _TAO_ConstructionPolicy_Proxy_Impl (void);
  };
  
  //
  //               End Base Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////
  
  
  ///////////////////////////////////////////////////////////////////////
  //                Remote Proxy Impl. Declaration
  //
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/remote_proxy_impl_ch.cpp:37
  
  class TAO_Export _TAO_ConstructionPolicy_Remote_Proxy_Impl
    : public virtual _TAO_ConstructionPolicy_Proxy_Impl,
      public virtual TAO_Remote_Object_Proxy_Impl,
      public virtual CORBA::_TAO_Policy_Remote_Proxy_Impl
  {
  public:
    _TAO_ConstructionPolicy_Remote_Proxy_Impl (void);
    
    virtual ~_TAO_ConstructionPolicy_Remote_Proxy_Impl (void) {}
    
    // TAO_IDL - Generated from
    // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24
    
    virtual void make_domain_manager (
        CORBA::Object *_collocated_tao_target_,
        CORBA::InterfaceDef_ptr object_type,
        CORBA::Boolean constr_policy
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
  };
  
  //
  //             End Remote Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////
  
  // The Proxy Brokers are used by each interface to get
  // the right proxy for performing a call. In the new 
  // collocation scheme, the proxy to be used can vary on
  // a call by call basis.
  
  ///////////////////////////////////////////////////////////////////////
  //                 Base Proxy Broker Declaration 
  //
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/base_proxy_broker_ch.cpp:35
  
  class TAO_Export _TAO_ConstructionPolicy_Proxy_Broker
  {
  public:
    virtual ~_TAO_ConstructionPolicy_Proxy_Broker (void);
    virtual _TAO_ConstructionPolicy_Proxy_Impl &select_proxy (
        ConstructionPolicy *object
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      ) = 0;
    
  protected:
    _TAO_ConstructionPolicy_Proxy_Broker (void);
    
  };
  
  //
  //              End Base Proxy Broker Declaration 
  ///////////////////////////////////////////////////////////////////////
  
    
  ///////////////////////////////////////////////////////////////////////
  //                 Remote Proxy Broker Declaration 
  //
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/remote_proxy_broker_ch.cpp:40
  
  class TAO_Export _TAO_ConstructionPolicy_Remote_Proxy_Broker
    : public virtual _TAO_ConstructionPolicy_Proxy_Broker
  {
  public: 
    _TAO_ConstructionPolicy_Remote_Proxy_Broker (void);
    
    virtual ~_TAO_ConstructionPolicy_Remote_Proxy_Broker (void);
    
    virtual _TAO_ConstructionPolicy_Proxy_Impl &select_proxy (
        ConstructionPolicy *object
        ACE_ENV_ARG_DECL
      );
    
  private:
    _TAO_ConstructionPolicy_Remote_Proxy_Impl remote_proxy_impl_;
  
  public:
    // This member function is used to get an handle to the unique instance
    // of the Remote Proxy Broker that is available for a given
    // interface.
    static _TAO_ConstructionPolicy_Remote_Proxy_Broker *the_TAO_ConstructionPolicy_Remote_Proxy_Broker (void);
  };
  
  //
  //              End Remote Proxy Broker Declaration 
  ///////////////////////////////////////////////////////////////////////

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_ConstructionPolicy;
  
#if 0
  
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)

#if !defined (__TAO_UNBOUNDED_OBJECT_SEQUENCE_CORBA_DOMAINMANAGERLIST_CH_)
#define __TAO_UNBOUNDED_OBJECT_SEQUENCE_CORBA_DOMAINMANAGERLIST_CH_
  
  class TAO_Export _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList
    : public TAO_Unbounded_Base_Sequence
  {
  public:
    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList (void);
    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList (CORBA::ULong maximum);
    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList (
        CORBA::ULong maximum,
        CORBA::ULong length,
        DomainManager* *value,
        CORBA::Boolean release = 0
      );
    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList (
        const _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList &rhs
      );
    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList &operator= (
        const _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList &rhs
      );
    virtual ~_TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList (void);
    
    // = Accessors.
    TAO_Object_Manager<CORBA::DomainManager,CORBA::DomainManager_var> operator[] (CORBA::ULong index) const;
    
    // = Static operations.
    static DomainManager **allocbuf (CORBA::ULong nelems);
    static void freebuf (DomainManager **buffer);
    
    // Implement the TAO_Base_Sequence methods (see Sequence.h)
    virtual void _allocate_buffer (CORBA::ULong length);
    virtual void _deallocate_buffer (void);
    DomainManager* *get_buffer (CORBA::Boolean orphan = 0);
    const DomainManager* *get_buffer (void) const;
    virtual void _shrink_buffer (
        CORBA::ULong nl,
        CORBA::ULong ol
      );
    
    virtual void _downcast (
        void* target,
        CORBA::Object *src
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    virtual CORBA::Object* _upcast (void *src) const;
  };

#endif /* end #if !defined */

#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 

#if !defined (_CORBA_DOMAINMANAGERLIST_CH_)
#define _CORBA_DOMAINMANAGERLIST_CH_
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_ch.cpp:371
  
  class DomainManagerList;
  class DomainManagerList_var;
  
  // *************************************************************
  // CORBA::DomainManagerList
  // *************************************************************
  
  class TAO_Export DomainManagerList : public 
  
  // TAO_IDL - Generated from 
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_ch.cpp:51

#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList
#else /* TAO_USE_SEQUENCE_TEMPLATES */
  TAO_Unbounded_Object_Sequence<DomainManager,DomainManager_var,tao_DomainManager_life,tao_DomainManager_cast>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 
  {
  public:
    DomainManagerList (void);
    DomainManagerList (CORBA::ULong max);
    DomainManagerList (
        CORBA::ULong max, 
        CORBA::ULong length, 
        DomainManager_ptr *buffer, 
        CORBA::Boolean release = 0
      );
    DomainManagerList (const DomainManagerList &);
    ~DomainManagerList (void);
    
    static void _tao_any_destructor (void*);
    
    typedef DomainManagerList_var _var_type;
  };

#endif /* end #if !defined */
  
#endif /* 0 */

  typedef TAO_Unbounded_Object_Sequence<DomainManager,
                                        DomainManager_var,
                                        tao_DomainManager_life,
                                        tao_DomainManager_cast>
    DomainManagerList;
  
#if !defined (_CORBA_DOMAINMANAGERLIST___VAR_CH_)
#define _CORBA_DOMAINMANAGERLIST___VAR_CH_
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_ch.cpp:549
  
  // *************************************************************
  // class CORBA::DomainManagerList_var
  // *************************************************************
  
  class TAO_Export DomainManagerList_var
  {
  public:
    DomainManagerList_var (void);
    DomainManagerList_var (DomainManagerList *);
    DomainManagerList_var (const DomainManagerList_var &);
    ~DomainManagerList_var (void);
    
    DomainManagerList_var &operator= (DomainManagerList *);
    DomainManagerList_var &operator= (const DomainManagerList_var &);
    DomainManagerList *operator-> (void);
    const DomainManagerList *operator-> (void) const;
    
    operator const DomainManagerList &() const;
    operator DomainManagerList &();
    operator DomainManagerList &() const;
    
    // Variable-size base types only.
    operator DomainManagerList *&();
    
    TAO_Object_Manager<DomainManager,DomainManager_var,tao_DomainManager_life> operator[] (CORBA::ULong index);
    
    // in, inout, out, _retn 
    const DomainManagerList &in (void) const;
    DomainManagerList &inout (void);
    DomainManagerList *&out (void);
    DomainManagerList *_retn (void);
    DomainManagerList *ptr (void) const;
  
  private:
    DomainManagerList *ptr_;
  };

#endif /* end #if !defined */

#if !defined (_CORBA_DOMAINMANAGERLIST___OUT_CH_)
#define _CORBA_DOMAINMANAGERLIST___OUT_CH_
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_ch.cpp:753
  
  class TAO_Export DomainManagerList_out
  {
  public:
    DomainManagerList_out (DomainManagerList *&);
    DomainManagerList_out (DomainManagerList_var &);
    DomainManagerList_out (const DomainManagerList_out &);
    DomainManagerList_out &operator= (const DomainManagerList_out &);
    DomainManagerList_out &operator= (DomainManagerList *);
    operator DomainManagerList *&();
    DomainManagerList *&ptr (void);
    DomainManagerList *operator-> (void);
    TAO_Object_Manager<DomainManager,DomainManager_var,tao_DomainManager_life> operator[] (CORBA::ULong index);
  
  private:
    DomainManagerList *&ptr_;
    // Assignment from T_var not allowed.
    void operator= (const DomainManagerList_var &);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_DomainManagerList;

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module/module_ch.cpp:67

}
TAO_NAMESPACE_CLOSE // module CORBA

// Proxy Broker Factory function pointer declarations.

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/root.cpp:80

extern TAO_Export
CORBA::_TAO_DomainManager_Proxy_Broker *
(*CORBA__TAO_DomainManager_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  );

extern TAO_Export
CORBA::_TAO_ConstructionPolicy_Proxy_Broker *
(*CORBA__TAO_ConstructionPolicy_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  );

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, CORBA::DomainManager_ptr); // copying
TAO_Export void operator<<= (CORBA::Any &, CORBA::DomainManager_ptr *); // non-copying
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::DomainManager_ptr &);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, CORBA::ConstructionPolicy_ptr); // copying
TAO_Export void operator<<= (CORBA::Any &, CORBA::ConstructionPolicy_ptr *); // non-copying
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::ConstructionPolicy_ptr &);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const CORBA::DomainManagerList &); // copying version
TAO_Export void operator<<= (CORBA::Any &, CORBA::DomainManagerList*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::DomainManagerList *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const CORBA::DomainManagerList *&);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/cdr_op.cpp:48

#ifndef __ACE_INLINE__

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/cdr_op_ch.cpp:55

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::DomainManager_ptr );
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::DomainManager_ptr &);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/cdr_op_ch.cpp:55

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::ConstructionPolicy_ptr );
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::ConstructionPolicy_ptr &);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_ch.cpp:57

#if !defined _TAO_CDR_OP_CORBA_DomainManagerList_H_
#define _TAO_CDR_OP_CORBA_DomainManagerList_H_

TAO_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const CORBA::DomainManagerList &
  );
TAO_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA::DomainManagerList &
  );

#endif /* _TAO_CDR_OP_CORBA_DomainManagerList_H_ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/cdr_op.cpp:64

#endif /* __ACE_INLINE__ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:1009

#if defined (__ACE_INLINE__)
#include "DomainC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include "ace/post.h"
#endif /* ifndef */

