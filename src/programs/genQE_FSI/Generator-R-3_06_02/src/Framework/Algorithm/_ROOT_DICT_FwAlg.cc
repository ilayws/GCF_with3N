// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_FwAlg
#define R__NO_DEPRECATION

/*******************************************************************/
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "AlgConfigPool.h"
#include "AlgFactory.h"
#include "AlgId.h"
#include "Algorithm.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace genie {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "AlgStatus.h", 25,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &genie_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *genie_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *geniecLcLAlgStatus_Dictionary();
   static void geniecLcLAlgStatus_TClassManip(TClass*);
   static void *new_geniecLcLAlgStatus(void *p = nullptr);
   static void *newArray_geniecLcLAlgStatus(Long_t size, void *p);
   static void delete_geniecLcLAlgStatus(void *p);
   static void deleteArray_geniecLcLAlgStatus(void *p);
   static void destruct_geniecLcLAlgStatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AlgStatus*)
   {
      ::genie::AlgStatus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AlgStatus));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AlgStatus", "AlgStatus.h", 36,
                  typeid(::genie::AlgStatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAlgStatus_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AlgStatus) );
      instance.SetNew(&new_geniecLcLAlgStatus);
      instance.SetNewArray(&newArray_geniecLcLAlgStatus);
      instance.SetDelete(&delete_geniecLcLAlgStatus);
      instance.SetDeleteArray(&deleteArray_geniecLcLAlgStatus);
      instance.SetDestructor(&destruct_geniecLcLAlgStatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AlgStatus*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AlgStatus*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AlgStatus*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAlgStatus_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AlgStatus*>(nullptr))->GetClass();
      geniecLcLAlgStatus_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAlgStatus_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAlgCmp_Dictionary();
   static void geniecLcLAlgCmp_TClassManip(TClass*);
   static void *new_geniecLcLAlgCmp(void *p = nullptr);
   static void *newArray_geniecLcLAlgCmp(Long_t size, void *p);
   static void delete_geniecLcLAlgCmp(void *p);
   static void deleteArray_geniecLcLAlgCmp(void *p);
   static void destruct_geniecLcLAlgCmp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AlgCmp*)
   {
      ::genie::AlgCmp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AlgCmp));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AlgCmp", "AlgCmp.h", 37,
                  typeid(::genie::AlgCmp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAlgCmp_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AlgCmp) );
      instance.SetNew(&new_geniecLcLAlgCmp);
      instance.SetNewArray(&newArray_geniecLcLAlgCmp);
      instance.SetDelete(&delete_geniecLcLAlgCmp);
      instance.SetDeleteArray(&deleteArray_geniecLcLAlgCmp);
      instance.SetDestructor(&destruct_geniecLcLAlgCmp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AlgCmp*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AlgCmp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AlgCmp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAlgCmp_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AlgCmp*>(nullptr))->GetClass();
      geniecLcLAlgCmp_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAlgCmp_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAlgId_Dictionary();
   static void geniecLcLAlgId_TClassManip(TClass*);
   static void *new_geniecLcLAlgId(void *p = nullptr);
   static void *newArray_geniecLcLAlgId(Long_t size, void *p);
   static void delete_geniecLcLAlgId(void *p);
   static void deleteArray_geniecLcLAlgId(void *p);
   static void destruct_geniecLcLAlgId(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AlgId*)
   {
      ::genie::AlgId *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AlgId));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AlgId", "AlgId.h", 34,
                  typeid(::genie::AlgId), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAlgId_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AlgId) );
      instance.SetNew(&new_geniecLcLAlgId);
      instance.SetNewArray(&newArray_geniecLcLAlgId);
      instance.SetDelete(&delete_geniecLcLAlgId);
      instance.SetDeleteArray(&deleteArray_geniecLcLAlgId);
      instance.SetDestructor(&destruct_geniecLcLAlgId);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AlgId*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AlgId*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AlgId*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAlgId_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AlgId*>(nullptr))->GetClass();
      geniecLcLAlgId_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAlgId_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAlgFactory_Dictionary();
   static void geniecLcLAlgFactory_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AlgFactory*)
   {
      ::genie::AlgFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AlgFactory));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AlgFactory", "AlgFactory.h", 39,
                  typeid(::genie::AlgFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAlgFactory_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AlgFactory) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AlgFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AlgFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AlgFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAlgFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AlgFactory*>(nullptr))->GetClass();
      geniecLcLAlgFactory_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAlgFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAlgorithm_Dictionary();
   static void geniecLcLAlgorithm_TClassManip(TClass*);
   static void delete_geniecLcLAlgorithm(void *p);
   static void deleteArray_geniecLcLAlgorithm(void *p);
   static void destruct_geniecLcLAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Algorithm*)
   {
      ::genie::Algorithm *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Algorithm));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Algorithm", "Algorithm.h", 54,
                  typeid(::genie::Algorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAlgorithm_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Algorithm) );
      instance.SetDelete(&delete_geniecLcLAlgorithm);
      instance.SetDeleteArray(&deleteArray_geniecLcLAlgorithm);
      instance.SetDestructor(&destruct_geniecLcLAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Algorithm*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Algorithm*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Algorithm*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAlgorithm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Algorithm*>(nullptr))->GetClass();
      geniecLcLAlgorithm_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAlgorithm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAlgConfigPool_Dictionary();
   static void geniecLcLAlgConfigPool_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AlgConfigPool*)
   {
      ::genie::AlgConfigPool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AlgConfigPool));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AlgConfigPool", "", 42,
                  typeid(::genie::AlgConfigPool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAlgConfigPool_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AlgConfigPool) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AlgConfigPool*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AlgConfigPool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AlgConfigPool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAlgConfigPool_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AlgConfigPool*>(nullptr))->GetClass();
      geniecLcLAlgConfigPool_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAlgConfigPool_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAlgStatus(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlgStatus : new ::genie::AlgStatus;
   }
   static void *newArray_geniecLcLAlgStatus(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlgStatus[nElements] : new ::genie::AlgStatus[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAlgStatus(void *p) {
      delete (static_cast<::genie::AlgStatus*>(p));
   }
   static void deleteArray_geniecLcLAlgStatus(void *p) {
      delete [] (static_cast<::genie::AlgStatus*>(p));
   }
   static void destruct_geniecLcLAlgStatus(void *p) {
      typedef ::genie::AlgStatus current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AlgStatus

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAlgCmp(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlgCmp : new ::genie::AlgCmp;
   }
   static void *newArray_geniecLcLAlgCmp(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlgCmp[nElements] : new ::genie::AlgCmp[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAlgCmp(void *p) {
      delete (static_cast<::genie::AlgCmp*>(p));
   }
   static void deleteArray_geniecLcLAlgCmp(void *p) {
      delete [] (static_cast<::genie::AlgCmp*>(p));
   }
   static void destruct_geniecLcLAlgCmp(void *p) {
      typedef ::genie::AlgCmp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AlgCmp

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAlgId(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlgId : new ::genie::AlgId;
   }
   static void *newArray_geniecLcLAlgId(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlgId[nElements] : new ::genie::AlgId[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAlgId(void *p) {
      delete (static_cast<::genie::AlgId*>(p));
   }
   static void deleteArray_geniecLcLAlgId(void *p) {
      delete [] (static_cast<::genie::AlgId*>(p));
   }
   static void destruct_geniecLcLAlgId(void *p) {
      typedef ::genie::AlgId current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AlgId

namespace ROOT {
} // end of namespace ROOT for class ::genie::AlgFactory

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLAlgorithm(void *p) {
      delete (static_cast<::genie::Algorithm*>(p));
   }
   static void deleteArray_geniecLcLAlgorithm(void *p) {
      delete [] (static_cast<::genie::Algorithm*>(p));
   }
   static void destruct_geniecLcLAlgorithm(void *p) {
      typedef ::genie::Algorithm current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Algorithm

namespace ROOT {
} // end of namespace ROOT for class ::genie::AlgConfigPool

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGFwAlg() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGFwAlg) = RecordReadRules_libGFwAlg();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGFwAlg));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGFwAlg_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Framework/Algorithm",
"GENIE",
"GENIE/Framework/Algorithm",
"../include",
"../include/GENIE",
"../include/GENIE/Framework/Algorithm",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Framework/Algorithm/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGFwAlg dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Algorithm/AlgStatus.h")))  __attribute__((annotate("$clingAutoload$Framework/Algorithm/Algorithm.h")))  AlgStatus;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Algorithm/AlgCmp.h")))  __attribute__((annotate("$clingAutoload$Framework/Algorithm/Algorithm.h")))  AlgCmp;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Algorithm/AlgId.h")))  __attribute__((annotate("$clingAutoload$Framework/Algorithm/Algorithm.h")))  AlgId;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Algorithm/AlgFactory.h")))  __attribute__((annotate("$clingAutoload$Framework/Algorithm/Algorithm.h")))  AlgFactory;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Algorithm/Algorithm.h")))  Algorithm;}
namespace genie{class  AlgConfigPool;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGFwAlg dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::AlgConfigPool

\brief    A singleton class holding all configuration registries built while
          parsing all loaded XML configuration files.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 06, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _ALG_CONFIG_POOL_H_
#define _ALG_CONFIG_POOL_H_

#include <map>
#include <vector>
#include <string>
#include <iostream>

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/Registry/Registry.h"

using std::map;
using std::vector;
using std::string;
using std::ostream;

namespace genie {

class AlgConfigPool;
ostream & operator << (ostream & stream, const AlgConfigPool & cp);

class AlgConfigPool {

public:
  static AlgConfigPool * Instance();

  Registry * FindRegistry (string key)                        const;
  Registry * FindRegistry (string alg_name, string param_set) const;
  Registry * FindRegistry (const Algorithm * algorithm)       const;
  Registry * FindRegistry (const AlgId & algid)               const;

  Registry * GlobalParameterList(void) const;
  Registry * CommonList( const string & file_id, const string & set_name ) const;
  Registry * TuneGeneratorList(void) const;


  const vector<string> & ConfigKeyList (void) const;

  void Print(ostream & stream) const;
  friend ostream & operator << (ostream & stream, const AlgConfigPool & cp);

private:
  AlgConfigPool();
  AlgConfigPool(const AlgConfigPool & config_pool);
  virtual ~AlgConfigPool();

  // methods for loading all algorithm XML configuration files
  string BuildConfigKey      (string alg_name, string param_set) const;
  string BuildConfigKey      (const Algorithm * algorithm) const;
  bool   LoadAlgConfig       (void);
  bool   LoadMasterConfig    (std::string configname);
  bool   LoadMasterConfigs   (void);
  bool   LoadGlobalParamLists(void);
  bool   LoadCommonLists( const string & file_id );
  bool   LoadTuneGeneratorList(void);
  bool   LoadSingleAlgConfig (string alg_name, string file_name);
  bool   LoadRegistries      (string key_base, string file_name, string root);
  int    AddParameterVector  (Registry * r, string pt, string pn, string pv, const string & delim = ";" );
  int    AddParameterMatrix  (Registry * r, string pt, string pn, string pv, const string & rowdelim, const string & coldelim );
  int    AddParameterMatrix  (Registry * r, string pt, string pn, string pv);
  void   AddConfigParameter  (Registry * r, string pt, string pn, string pv);
  void   AddBasicParameter   (Registry * r, string pt, string pn, string pv);
  void   AddRootObjParameter (Registry * r, string pt, string pn, string pv);


  static AlgConfigPool * fInstance;

  map<string, Registry *> fRegistryPool;  ///< algorithm/param_set -> Registry
  map<string, string>     fConfigFiles;   ///< algorithm -> XML config file
  vector<string>          fConfigKeyList; ///< list of all available configuration keys
  string                  fMasterConfig;  ///< lists config files for all algorithms

  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (AlgConfigPool::fInstance !=0) {
            delete AlgConfigPool::fInstance;
            AlgConfigPool::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace

#endif // _ALG_CONFIG_POOL_H_
//____________________________________________________________________________
/*!

\class    genie::AlgFactory

\brief    The GENIE Algorithm Factory.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 12, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _ALG_FACTORY_H_
#define _ALG_FACTORY_H_

#include <map>
#include <string>
#include <iostream>

#include "Framework/Algorithm/AlgId.h"

using std::map;
using std::pair;
using std::string;
using std::ostream;

namespace genie {

class Algorithm;
class AlgFactory;

ostream & operator << (ostream & stream, const genie::AlgFactory & algf);

class AlgFactory {

public:
  static AlgFactory * Instance();

  //! Instantiates, configures and returns a pointer to the specified algorithm.
  //! The algorithm is placed at the AlgFactory pool (is owned by the factory)
  //! from where it will be looked up at subsequent calls.
  const Algorithm * GetAlgorithm (const AlgId & algid);
  const Algorithm * GetAlgorithm (string name, string conf="Default");

  //! Like GetAlgorithm() but the algorithm is not placed at the AlgFactory pool
  //! and its ownership is transfered to the caller
  Algorithm * AdoptAlgorithm (const AlgId & algid) const;
  Algorithm * AdoptAlgorithm (string name, string conf="Default") const;

  //! Forces a reconfiguration of all algorithms kept at the factory pool.
  //! The algorithms look up their nominal configuration from the config pool.
  //! Use that to propagate modifications made directly at the config pool.
  void ForceReconfiguration(bool ignore_alg_opt_out=false);

  //! print algorithm factory
  void Print(ostream & stream) const;
  friend ostream & operator << (ostream & stream, const AlgFactory & algf);

private:
  AlgFactory();
  AlgFactory(const AlgFactory & alg_factory);
  virtual ~AlgFactory();

  //! method instantiating (based on TClass * TROOT::GetClass(name))
  //! & configuring algorithmic objects
  Algorithm * InstantiateAlgorithm(string name, string config) const;

  //! sinleton's self
  static AlgFactory * fInstance;

  //! 'algorithm key' (namespace::name/config) -> 'algorithmic object' map
  map<string, Algorithm *> fAlgPool;

  //! singleton cleaner
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (AlgFactory::fInstance !=0) {
            delete AlgFactory::fInstance;
            AlgFactory::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace

#endif // _ALG_FACTORY_H_
//____________________________________________________________________________
/*!

\class    genie::AlgId

\brief    Algorithm ID (algorithm name + configuration set name)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 20, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _ALGID_H_
#define _ALGID_H_

#include <string>
#include <iostream>

#include "Framework/Registry/RegistryItemTypeDef.h"

using std::string;
using std::ostream;

namespace genie {

class AlgId;
ostream & operator << (ostream & stream, const AlgId & alg);

class AlgId {

public:

  AlgId();
  AlgId(string name, string config);
  AlgId(const AlgId & id);
  AlgId(const RgAlg & registry_item);
 ~AlgId();

  string Name   (void) const { return fName;   }
  string Config (void) const { return fConfig; }
  string Key    (void) const { return fKey;    }

  void   SetId     (string name, string config="");
  void   SetName   (string name);
  void   SetConfig (string config);
  void   Copy      (const AlgId & id);
  void   Copy      (const RgAlg & registry_item);
  void   Print     (ostream & stream) const;

  friend ostream & operator << (ostream & stream, const AlgId & alg);

private:

  void Init      (void);
  void UpdateKey (void);

  string fName;   ///< Algorithm name (including namespaces)
  string fConfig; ///< Configuration set name
  string fKey;    ///< Unique key: namespace::alg_name/alg_config
};

}       // genie namespace

#endif  // _ALGID_H_
//____________________________________________________________________________
/*!

\class    genie::Algorithm

\brief    Algorithm abstract base class.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

          Marco Roda <mroda \at liverpool.ac.uk>
          University of Liverpool

\created  May 02, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _ALGORITHM_H_
#define _ALGORITHM_H_

#include <string>
#include <sstream>
#include <iostream>
#include <cassert>
#include <map>

#include "Framework/Algorithm/AlgStatus.h"
#include "Framework/Algorithm/AlgCmp.h"
#include "Framework/Algorithm/AlgId.h"
#include "Framework/Algorithm/AlgFactory.h"
#include "Framework/Registry/Registry.h"
#include "Framework/Registry/RegistryItemTypeDef.h"
#include "Framework/Messenger/Messenger.h"
#include "TMatrixT.h"

using std::string;
using std::ostream;
using std::map;

namespace genie {

class Algorithm;

ostream & operator << (ostream & stream, const Algorithm & alg);

typedef map <string, Algorithm *>                 AlgMap;
typedef map <string, Algorithm *>::iterator       AlgMapIter;
typedef map <string, Algorithm *>::const_iterator AlgMapConstIter;
typedef pair<string, Algorithm *>                 AlgMapPair;

class Algorithm {

public:
  virtual ~Algorithm();

  //! Configure the algorithm with an external registry
  //!   The registry is merged with the top level registry if it is owned,
  //!   Otherwise a copy of it is added with the highest priority
  virtual void Configure (const Registry & config);

  //! Configure the algorithm from the AlgoConfigPool
  //!   based on param_set string given in input
  //! An algorithm contains a vector of registries coming from different
  //!   xml configuration files, which are loaded according a very precise prioriy
  //! This methods will load a number registries in order of priority:
  //!   1) "Tunable" parameter set from CommonParametes. This is loaded with the
  //!      highest prioriry and it is designed to be used for tuning procedure
  //!      Usage not expected from the user.
  //!   2) For every string defined in "CommonParame" the corresponding parameter set will be loaded
  //!      from CommonParameter.xml
  //!   3) parameter set specified by the config string and defined in the xml file of the algorithm
  //!   4) if config is not "Default" also the Default parameter set from the same xml file will be loaded
  //!      Effectively this avoids the repetion of a parameter when it is not changed in the requested configuration
  virtual void Configure (string config);

  //! Lookup configuration from the config pool
  //!   Similar logic from void Configure(string)
  virtual void FindConfig (void);

  //! Get configuration registry
  //!  Evaluate the summary of the configuration and returns it
  //!  The summary of a configuration is a merge of all the registries
  //!  known to the algorithm (see Configure() methods) but every parameter is appearing only
  //!  once and in case of repetitions, only the parameter from the registry with the highest prioriry
  //!  is considered.
  virtual const Registry & GetConfig(void) const ;

  //! Returns the pointer of the summary registry, see previous method
  //!  Gives access to the summary so it could be changed.
  //!  The usage of this method is deprecated as it is mantained only for back compatibility.
  //! If you need to add or chage a parter (or more), use the AddTopRegistry() instead
  Registry * GetOwnedConfig(void);

  //! Get algorithm ID
  virtual const AlgId & Id(void) const { return fID; }

  //! Get algorithm status
  virtual AlgStatus_t GetStatus(void) const { return fStatus; }

  //! Allow reconfigration after initializaton?
  //! Algorithms may opt-out, if reconfiguration is not necessary,
  //! to improve event reweighting speed.
  virtual bool AllowReconfig(void) const { return fAllowReconfig; }

  //! Compare with input algorithm
  virtual AlgCmp_t Compare(const Algorithm * alg) const;

  //! Set algorithm ID
  virtual void SetId(const AlgId & id);
  virtual void SetId(string name,  string config);

  //! Access the sub-algorithm pointed to by the input key, either from the
  //! local pool or from AlgFactory's pool
  const Algorithm * SubAlg(const RgKey & registry_key) const;

  //! Clone the configuration registry looked up from the configuration pool
  //! and take its ownership
  void AdoptConfig (void);

  //! Take ownership of the algorithms subtructure (sub-algorithms,...)
  //! by copying them from the AlgFactory pool to the local pool
  //! Also bring all the configuration variables to the top level config Registry.
  //! This can be used to group together a series of algorithms & their
  //! configurations and extract (a clone of) this group from the shared
  //! pools. Having a series of algorithms/configurations behaving as a
  //! monolithic block, with a single point of configuration (the top level)
  //! is to be used when bits & pieces of GENIE are used in isolation for
  //! data fitting or reweighting
  void AdoptSubstructure (void);

  //! Print algorithm info
  virtual void Print(ostream & stream) const;
  friend ostream & operator << (ostream & stream, const Algorithm & alg);


  static string BuildParamVectKey( const std::string & comm_name, unsigned int i ) ;
  static string BuildParamVectSizeKey( const std::string & comm_name ) ;

  static string BuildParamMatKey( const std::string & comm_name, unsigned int i, unsigned int j) ;
  static string BuildParamMatRowSizeKey( const std::string & comm_name ) ;
  static string BuildParamMatColSizeKey( const std::string & comm_name ) ;


protected:
  Algorithm();
  Algorithm(string name);
  Algorithm(string name, string config);

  void Initialize         (void);
  void DeleteConfig       (void);
  void DeleteSubstructure (void);

  //! Split an incoming configuration Registry into a block valid for this algorithm
  //! Ownership of the returned registry belongs to the algo
  Registry * ExtractLocalConfig( const Registry & in ) const ;
  //! Split an incoming configuration Registry into a block valid for the sub-algo identified by alg_key
  Registry * ExtractLowerConfig( const Registry & in, const string & alg_key ) const ;

  bool         fAllowReconfig; ///<
  //  bool         fOwnsConfig;    ///< true if it owns its config. registry
  bool         fOwnsSubstruc;  ///< true if it owns its substructure (sub-algs,...)
  AlgId        fID;            ///< algorithm name and configuration set


  /// ideally these members should go private
  /// Registry will be access only through the GetParam method
  vector<Registry*>  fConfVect ;   ///< configurations registries from various sources
                                   ///<  the order of the vector is the precedence in case of repeated parameters
                                   ///<  position 0 -> Highest precedence
  vector<bool>       fOwnerships ; ///< ownership for every registry in fConfVect

  AlgStatus_t  fStatus;        ///< algorithm execution status
  AlgMap *     fOwnedSubAlgMp; ///< local pool for owned sub-algs (taken out of the factory pool)

  //! Ideal access to a parameter value from the vector of registries
  //! Returns true if the value is found and the parameters is set
  template<class T>
    bool GetParam( const RgKey & name, T & p, bool is_top_call = true ) const ;

  //! Ideal access to a parameter value from the vector of registries,
  //! With default value. Returns true if the value is set from the
  //! registries, false if the value is the default
  template<class T>
     bool GetParamDef( const RgKey & name, T & p, const T & def ) const ;

  //! Handle to load vectors of parameters
  template<class T>
    int GetParamVect( const std::string & comm_name, std::vector<T> & v,
		      bool is_top_call = true ) const ;

  int GetParamVectKeys( const std::string & comm_name, std::vector<RgKey> & k,
			bool is_top_call = true ) const ;

  //! Handle to load matrix of parameters
  template<class T>
    int GetParamMat( const std::string & comm_name, TMatrixT<T> & mat,
		      bool is_top_call = true ) const ;
  template<class T>
    int GetParamMatSym( const std::string & comm_name, TMatrixTSym<T> & mat,
		      bool is_top_call = true ) const ;

  int GetParamMatKeys( const std::string & comm_name, std::vector<RgKey> & k,
			bool is_top_call = true ) const ;


  int   AddTopRegistry( Registry * rp, bool owns = true );  ///< add registry with top priority, also update ownership
  int   AddLowRegistry( Registry * rp, bool owns = true );  ///< add registry with lowest priority, also update ownership
  int   MergeTopRegistry( const Registry & r ) ;            ///< Merge with top level registry if first reg of the vector is owned
                                                            ///< Otherwise an owned copy is added as a top registry
  int   AddTopRegisties( const vector<Registry*> & rs, bool owns = false ) ; ///< Add registries with top priority, also udated Ownerships

private:

  Registry *   fConfig;        ///< Summary configuration derived from fConvVect, not necessarily allocated

};

}       // genie namespace

#ifndef __CINT__  // don't even try for ROOT 5
#include "Framework/Algorithm/Algorithm.icc"
#endif

#endif  // _ALGORITHM_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::AlgCmp", payloadCode, "@",
"genie::AlgConfigPool", payloadCode, "@",
"genie::AlgFactory", payloadCode, "@",
"genie::AlgId", payloadCode, "@",
"genie::AlgStatus", payloadCode, "@",
"genie::Algorithm", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGFwAlg",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGFwAlg_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGFwAlg_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGFwAlg() {
  TriggerDictionaryInitialization_libGFwAlg_Impl();
}
