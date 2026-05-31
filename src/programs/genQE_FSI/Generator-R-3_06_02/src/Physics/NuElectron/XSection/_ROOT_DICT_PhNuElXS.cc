// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhNuElXS
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
#include "BardinIMDRadCorPXSec.h"
#include "IMDAnnihilationPXSec.h"
#include "IMDXSec.h"
#include "NuElectronPXSec.h"
#include "NuElectronXSec.h"

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
            instance("genie", 0 /*version*/, "Framework/Algorithm/AlgStatus.h", 25,
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
   static TClass *geniecLcLBardinIMDRadCorPXSec_Dictionary();
   static void geniecLcLBardinIMDRadCorPXSec_TClassManip(TClass*);
   static void *new_geniecLcLBardinIMDRadCorPXSec(void *p = nullptr);
   static void *newArray_geniecLcLBardinIMDRadCorPXSec(Long_t size, void *p);
   static void delete_geniecLcLBardinIMDRadCorPXSec(void *p);
   static void deleteArray_geniecLcLBardinIMDRadCorPXSec(void *p);
   static void destruct_geniecLcLBardinIMDRadCorPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BardinIMDRadCorPXSec*)
   {
      ::genie::BardinIMDRadCorPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BardinIMDRadCorPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BardinIMDRadCorPXSec", "", 41,
                  typeid(::genie::BardinIMDRadCorPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBardinIMDRadCorPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BardinIMDRadCorPXSec) );
      instance.SetNew(&new_geniecLcLBardinIMDRadCorPXSec);
      instance.SetNewArray(&newArray_geniecLcLBardinIMDRadCorPXSec);
      instance.SetDelete(&delete_geniecLcLBardinIMDRadCorPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLBardinIMDRadCorPXSec);
      instance.SetDestructor(&destruct_geniecLcLBardinIMDRadCorPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BardinIMDRadCorPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BardinIMDRadCorPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BardinIMDRadCorPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBardinIMDRadCorPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::BardinIMDRadCorPXSec*>(nullptr))->GetClass();
      geniecLcLBardinIMDRadCorPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBardinIMDRadCorPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLIMDAnnihilationPXSec_Dictionary();
   static void geniecLcLIMDAnnihilationPXSec_TClassManip(TClass*);
   static void *new_geniecLcLIMDAnnihilationPXSec(void *p = nullptr);
   static void *newArray_geniecLcLIMDAnnihilationPXSec(Long_t size, void *p);
   static void delete_geniecLcLIMDAnnihilationPXSec(void *p);
   static void deleteArray_geniecLcLIMDAnnihilationPXSec(void *p);
   static void destruct_geniecLcLIMDAnnihilationPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::IMDAnnihilationPXSec*)
   {
      ::genie::IMDAnnihilationPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::IMDAnnihilationPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::IMDAnnihilationPXSec", "", 148,
                  typeid(::genie::IMDAnnihilationPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIMDAnnihilationPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::IMDAnnihilationPXSec) );
      instance.SetNew(&new_geniecLcLIMDAnnihilationPXSec);
      instance.SetNewArray(&newArray_geniecLcLIMDAnnihilationPXSec);
      instance.SetDelete(&delete_geniecLcLIMDAnnihilationPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLIMDAnnihilationPXSec);
      instance.SetDestructor(&destruct_geniecLcLIMDAnnihilationPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::IMDAnnihilationPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::IMDAnnihilationPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::IMDAnnihilationPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIMDAnnihilationPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::IMDAnnihilationPXSec*>(nullptr))->GetClass();
      geniecLcLIMDAnnihilationPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIMDAnnihilationPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLIMDXSec_Dictionary();
   static void geniecLcLIMDXSec_TClassManip(TClass*);
   static void *new_geniecLcLIMDXSec(void *p = nullptr);
   static void *newArray_geniecLcLIMDXSec(Long_t size, void *p);
   static void delete_geniecLcLIMDXSec(void *p);
   static void deleteArray_geniecLcLIMDXSec(void *p);
   static void destruct_geniecLcLIMDXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::IMDXSec*)
   {
      ::genie::IMDXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::IMDXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::IMDXSec", "", 200,
                  typeid(::genie::IMDXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIMDXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::IMDXSec) );
      instance.SetNew(&new_geniecLcLIMDXSec);
      instance.SetNewArray(&newArray_geniecLcLIMDXSec);
      instance.SetDelete(&delete_geniecLcLIMDXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLIMDXSec);
      instance.SetDestructor(&destruct_geniecLcLIMDXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::IMDXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::IMDXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::IMDXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIMDXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::IMDXSec*>(nullptr))->GetClass();
      geniecLcLIMDXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIMDXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuElectronPXSec_Dictionary();
   static void geniecLcLNuElectronPXSec_TClassManip(TClass*);
   static void *new_geniecLcLNuElectronPXSec(void *p = nullptr);
   static void *newArray_geniecLcLNuElectronPXSec(Long_t size, void *p);
   static void delete_geniecLcLNuElectronPXSec(void *p);
   static void deleteArray_geniecLcLNuElectronPXSec(void *p);
   static void destruct_geniecLcLNuElectronPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuElectronPXSec*)
   {
      ::genie::NuElectronPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuElectronPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuElectronPXSec", "", 259,
                  typeid(::genie::NuElectronPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuElectronPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuElectronPXSec) );
      instance.SetNew(&new_geniecLcLNuElectronPXSec);
      instance.SetNewArray(&newArray_geniecLcLNuElectronPXSec);
      instance.SetDelete(&delete_geniecLcLNuElectronPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuElectronPXSec);
      instance.SetDestructor(&destruct_geniecLcLNuElectronPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuElectronPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NuElectronPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NuElectronPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuElectronPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NuElectronPXSec*>(nullptr))->GetClass();
      geniecLcLNuElectronPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuElectronPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuElectronXSec_Dictionary();
   static void geniecLcLNuElectronXSec_TClassManip(TClass*);
   static void *new_geniecLcLNuElectronXSec(void *p = nullptr);
   static void *newArray_geniecLcLNuElectronXSec(Long_t size, void *p);
   static void delete_geniecLcLNuElectronXSec(void *p);
   static void deleteArray_geniecLcLNuElectronXSec(void *p);
   static void destruct_geniecLcLNuElectronXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuElectronXSec*)
   {
      ::genie::NuElectronXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuElectronXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuElectronXSec", "", 324,
                  typeid(::genie::NuElectronXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuElectronXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuElectronXSec) );
      instance.SetNew(&new_geniecLcLNuElectronXSec);
      instance.SetNewArray(&newArray_geniecLcLNuElectronXSec);
      instance.SetDelete(&delete_geniecLcLNuElectronXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuElectronXSec);
      instance.SetDestructor(&destruct_geniecLcLNuElectronXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuElectronXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NuElectronXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NuElectronXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuElectronXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NuElectronXSec*>(nullptr))->GetClass();
      geniecLcLNuElectronXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuElectronXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBardinIMDRadCorPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BardinIMDRadCorPXSec : new ::genie::BardinIMDRadCorPXSec;
   }
   static void *newArray_geniecLcLBardinIMDRadCorPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BardinIMDRadCorPXSec[nElements] : new ::genie::BardinIMDRadCorPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBardinIMDRadCorPXSec(void *p) {
      delete (static_cast<::genie::BardinIMDRadCorPXSec*>(p));
   }
   static void deleteArray_geniecLcLBardinIMDRadCorPXSec(void *p) {
      delete [] (static_cast<::genie::BardinIMDRadCorPXSec*>(p));
   }
   static void destruct_geniecLcLBardinIMDRadCorPXSec(void *p) {
      typedef ::genie::BardinIMDRadCorPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::BardinIMDRadCorPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLIMDAnnihilationPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IMDAnnihilationPXSec : new ::genie::IMDAnnihilationPXSec;
   }
   static void *newArray_geniecLcLIMDAnnihilationPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IMDAnnihilationPXSec[nElements] : new ::genie::IMDAnnihilationPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLIMDAnnihilationPXSec(void *p) {
      delete (static_cast<::genie::IMDAnnihilationPXSec*>(p));
   }
   static void deleteArray_geniecLcLIMDAnnihilationPXSec(void *p) {
      delete [] (static_cast<::genie::IMDAnnihilationPXSec*>(p));
   }
   static void destruct_geniecLcLIMDAnnihilationPXSec(void *p) {
      typedef ::genie::IMDAnnihilationPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::IMDAnnihilationPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLIMDXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IMDXSec : new ::genie::IMDXSec;
   }
   static void *newArray_geniecLcLIMDXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IMDXSec[nElements] : new ::genie::IMDXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLIMDXSec(void *p) {
      delete (static_cast<::genie::IMDXSec*>(p));
   }
   static void deleteArray_geniecLcLIMDXSec(void *p) {
      delete [] (static_cast<::genie::IMDXSec*>(p));
   }
   static void destruct_geniecLcLIMDXSec(void *p) {
      typedef ::genie::IMDXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::IMDXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuElectronPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuElectronPXSec : new ::genie::NuElectronPXSec;
   }
   static void *newArray_geniecLcLNuElectronPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuElectronPXSec[nElements] : new ::genie::NuElectronPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuElectronPXSec(void *p) {
      delete (static_cast<::genie::NuElectronPXSec*>(p));
   }
   static void deleteArray_geniecLcLNuElectronPXSec(void *p) {
      delete [] (static_cast<::genie::NuElectronPXSec*>(p));
   }
   static void destruct_geniecLcLNuElectronPXSec(void *p) {
      typedef ::genie::NuElectronPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuElectronPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuElectronXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuElectronXSec : new ::genie::NuElectronXSec;
   }
   static void *newArray_geniecLcLNuElectronXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuElectronXSec[nElements] : new ::genie::NuElectronXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuElectronXSec(void *p) {
      delete (static_cast<::genie::NuElectronXSec*>(p));
   }
   static void deleteArray_geniecLcLNuElectronXSec(void *p) {
      delete [] (static_cast<::genie::NuElectronXSec*>(p));
   }
   static void destruct_geniecLcLNuElectronXSec(void *p) {
      typedef ::genie::NuElectronXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuElectronXSec

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhNuElXS() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhNuElXS) = RecordReadRules_libGPhNuElXS();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhNuElXS));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhNuElXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/NuElectron/XSection",
"GENIE",
"GENIE/Physics/NuElectron/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/NuElectron/XSection",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/NuElectron/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhNuElXS dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  BardinIMDRadCorPXSec;}
namespace genie{class  IMDAnnihilationPXSec;}
namespace genie{class  IMDXSec;}
namespace genie{class  NuElectronPXSec;}
namespace genie{class  NuElectronXSec;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhNuElXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::BardinIMDRadCorPXSec

\brief    Computes the Inverse Muon Decay (IMD) diff. cross section using the
          Bardin-Dokuchaeva including all 1-loop radiative corrections. \n

          This is a 'trully' inclusive IMD cross section, i.e. the brem. cross
          section (dxsec_brem/dy)|w>w0 [see Bardin paper, cited below] is not
          subtracted from the IMD cross section and therefore it is not suitable
          for experimental situations where a photon energy trigger threshold
          is applied.

          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      D.Yu.Bardin and V.A.Dokuchaeva, Nucl.Phys.B287:839 (1987)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  February 14, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _BARDIN_IMD_RADIATIVE_CORRECTIONS_PARTIAL_XSEC_H_
#define _BARDIN_IMD_RADIATIVE_CORRECTIONS_PARTIAL_XSEC_H_

#include <Math/IFunction.h>
#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class BardinIMDRadCorPXSec : public XSecAlgorithmI {

public:
  BardinIMDRadCorPXSec();
  BardinIMDRadCorPXSec(string config);
  virtual ~BardinIMDRadCorPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // Override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  // Load configuration when Algorithm::Configure() is called
  void LoadConfig(void);

  // Private functions
  // (symbols follow the notation in Bardin-Dokuchaeva paper)
  double Li2 (double z)                      const;
  double Fa  (double re, double r, double y) const;
  double P   (int    i,  double r, double y) const;
  double C   (int    i,  int k,    double r) const;

  // Private data members
//  const IntegratorI *      fIntegrator;     ///< num integrator for BardinIMDRadCorIntegrand
  const XSecIntegratorI *  fXSecIntegrator; ///< differential x-sec integrator
};

} // genie namespace

//____________________________________________________________________________
/*!
\class    genie::BardinIMDRadCorIntegrand

\brief    Auxiliary scalar function for the internal integration in Bardin's
          IMD d2xsec/dxdy cross section algorithm

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  February 20, 2006
*/
//____________________________________________________________________________

namespace genie {
 namespace utils {
  namespace gsl   {
   namespace wrap   {

    class BardinIMDRadCorIntegrand : public ROOT::Math::IBaseFunctionOneDim
    {
     public:
       BardinIMDRadCorIntegrand(double z);
      ~BardinIMDRadCorIntegrand();
       // ROOT::Math::IBaseFunctionOneDim interface
       unsigned int                      NDim   (void)       const;
       double                            DoEval (double xin) const;
       ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
     private:
       double fZ;
     };

   } // wrap namespace
  } // gsl namespace
 } // utils namespace
} // genie namespace

#endif  // _BARDIN_IMD_RADIATIVE_CORRECTIONS_PARTIAL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::IMDAnnihilationPXSec

\brief    nuebar + e- -> mu- + numubar [CC]
          scattering differential cross section \n

          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      W.J.Marciano and Z.Parsa, Neutrino-electron scattering theory,
          J.Phys.G: Nucl.Part.Phys. 29 (2003) 2629-2645

\author   Rosen Matev (r.matev@gmail.com)

\created  October 3, 2011

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _IMD_ANNIHILATION_PXSEC_H_
#define _IMD_ANNIHILATION_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class IntegratorI;
class XSecIntegratorI;

class IMDAnnihilationPXSec : public XSecAlgorithmI {

public:
  IMDAnnihilationPXSec();
  IMDAnnihilationPXSec(string config);
  virtual ~IMDAnnihilationPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
  bool   ValidKinematics (const Interaction * i) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);

  const XSecIntegratorI * fXSecIntegrator;

};

}       // genie namespace
#endif  // _IMD_ANNIHILATION_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::IMDXSec

\brief    Computes the Inverse Muon Decay cross section.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Fabruary 14, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _IMD_XSEC_H_
#define _IMD_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class IMDXSec : public XSecIntegratorI {

public:
  IMDXSec();
  IMDXSec(string config);
  virtual ~IMDXSec();

  //! XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  //! Overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);
};

}       // genie namespace
#endif  // _IMD_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::NuElectronPXSec

\brief    nu/nubar + e- scattering differential cross section \n
          The cross section algorithm handles:
             - nue/nuebar + e- -> nue/nuebar + e- [CC + NC + interference]
             - numu/nutau + e- -> numu/nutau + e- [NC]
             - numubar/nutaubar + e- -> numubar/nutaubar + e- [NC]
             - numu/nutau + e- -> l- + nu_e [CC]

          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      W.J.Marciano and Z.Parsa, Neutrino-electron scattering theory,
          J.Phys.G: Nucl.Part.Phys. 29 (2003) 2629-2645

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  February 10, 2006

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _NU_ELECTRON_PARTIAL_XSEC_H_
#define _NU_ELECTRON_PARTIAL_XSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class IntegratorI;
class XSecIntegratorI;

class NuElectronPXSec : public XSecAlgorithmI {

public:
  NuElectronPXSec();
  NuElectronPXSec(string config);
  virtual ~NuElectronPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
  bool   ValidKinematics (const Interaction * i) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);

  const XSecIntegratorI * fXSecIntegrator;

  double fSin28w; // sin^2(theta-weinberg)
  double fSin48w;
};

}       // genie namespace
#endif  // _NU_ELECTRON_PARTIAL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::NuElectronXSec

\brief    nu/nubar + e- scattering cross section. Integrates the loaded
          differential cross section model. An analytical cross section
          model also exists, so you cal also use that if you do not apply
          any kinematical cuts.

          The cross section algorithm handles:
             - nue/nuebar + e- -> nue/nuebar + e- [CC + NC + interference]
             - numu/nutau + e- -> numu/nutau + e- [NC]
             - numubar/nutaubar + e- -> numubar/nutaubar + e- [NC]
             - numu/nutau + e- -> l- + nu_e [CC]

          Is a concrete implementation of the XSecIntegratorI interface. \n

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  February 10, 2006

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _NU_ELECTRON_XSEC_H_
#define _NU_ELECTRON_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class NuElectronXSec : public XSecIntegratorI {

public:
  NuElectronXSec();
  NuElectronXSec(string config);
  virtual ~NuElectronXSec();

  //! XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  //! Overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);
};

}       // genie namespace
#endif  // _NU_ELECTRON_XSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::BardinIMDRadCorPXSec", payloadCode, "@",
"genie::IMDAnnihilationPXSec", payloadCode, "@",
"genie::IMDXSec", payloadCode, "@",
"genie::NuElectronPXSec", payloadCode, "@",
"genie::NuElectronXSec", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhNuElXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhNuElXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhNuElXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhNuElXS() {
  TriggerDictionaryInitialization_libGPhNuElXS_Impl();
}
