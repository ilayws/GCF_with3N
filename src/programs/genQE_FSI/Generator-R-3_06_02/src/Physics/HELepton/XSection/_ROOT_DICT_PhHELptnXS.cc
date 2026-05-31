// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhHELptnXS
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
#include "Born.h"
#include "GLRESPXSec.h"
#include "HELeptonXSec.h"
#include "HENuElPXSec.h"
#include "PhotonCOHPXSec.h"
#include "PhotonRESPXSec.h"
#include "PhotonStrucFunc.h"

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
            instance("genie", 0 /*version*/, "", 26,
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
   static TClass *geniecLcLGLRESPXSec_Dictionary();
   static void geniecLcLGLRESPXSec_TClassManip(TClass*);
   static void *new_geniecLcLGLRESPXSec(void *p = nullptr);
   static void *newArray_geniecLcLGLRESPXSec(Long_t size, void *p);
   static void delete_geniecLcLGLRESPXSec(void *p);
   static void deleteArray_geniecLcLGLRESPXSec(void *p);
   static void destruct_geniecLcLGLRESPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GLRESPXSec*)
   {
      ::genie::GLRESPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GLRESPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GLRESPXSec", "", 100,
                  typeid(::genie::GLRESPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGLRESPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GLRESPXSec) );
      instance.SetNew(&new_geniecLcLGLRESPXSec);
      instance.SetNewArray(&newArray_geniecLcLGLRESPXSec);
      instance.SetDelete(&delete_geniecLcLGLRESPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLGLRESPXSec);
      instance.SetDestructor(&destruct_geniecLcLGLRESPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GLRESPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GLRESPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GLRESPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGLRESPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GLRESPXSec*>(nullptr))->GetClass();
      geniecLcLGLRESPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGLRESPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHELeptonXSec_Dictionary();
   static void geniecLcLHELeptonXSec_TClassManip(TClass*);
   static void *new_geniecLcLHELeptonXSec(void *p = nullptr);
   static void *newArray_geniecLcLHELeptonXSec(Long_t size, void *p);
   static void delete_geniecLcLHELeptonXSec(void *p);
   static void deleteArray_geniecLcLHELeptonXSec(void *p);
   static void destruct_geniecLcLHELeptonXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HELeptonXSec*)
   {
      ::genie::HELeptonXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HELeptonXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HELeptonXSec", "", 162,
                  typeid(::genie::HELeptonXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHELeptonXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HELeptonXSec) );
      instance.SetNew(&new_geniecLcLHELeptonXSec);
      instance.SetNewArray(&newArray_geniecLcLHELeptonXSec);
      instance.SetDelete(&delete_geniecLcLHELeptonXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLHELeptonXSec);
      instance.SetDestructor(&destruct_geniecLcLHELeptonXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HELeptonXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HELeptonXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HELeptonXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHELeptonXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HELeptonXSec*>(nullptr))->GetClass();
      geniecLcLHELeptonXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHELeptonXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHENuElPXSec_Dictionary();
   static void geniecLcLHENuElPXSec_TClassManip(TClass*);
   static void *new_geniecLcLHENuElPXSec(void *p = nullptr);
   static void *newArray_geniecLcLHENuElPXSec(Long_t size, void *p);
   static void delete_geniecLcLHENuElPXSec(void *p);
   static void deleteArray_geniecLcLHENuElPXSec(void *p);
   static void destruct_geniecLcLHENuElPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HENuElPXSec*)
   {
      ::genie::HENuElPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HENuElPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HENuElPXSec", "", 214,
                  typeid(::genie::HENuElPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHENuElPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HENuElPXSec) );
      instance.SetNew(&new_geniecLcLHENuElPXSec);
      instance.SetNewArray(&newArray_geniecLcLHENuElPXSec);
      instance.SetDelete(&delete_geniecLcLHENuElPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLHENuElPXSec);
      instance.SetDestructor(&destruct_geniecLcLHENuElPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HENuElPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HENuElPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HENuElPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHENuElPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HENuElPXSec*>(nullptr))->GetClass();
      geniecLcLHENuElPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHENuElPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPhotonCOHPXSec_Dictionary();
   static void geniecLcLPhotonCOHPXSec_TClassManip(TClass*);
   static void *new_geniecLcLPhotonCOHPXSec(void *p = nullptr);
   static void *newArray_geniecLcLPhotonCOHPXSec(Long_t size, void *p);
   static void delete_geniecLcLPhotonCOHPXSec(void *p);
   static void deleteArray_geniecLcLPhotonCOHPXSec(void *p);
   static void destruct_geniecLcLPhotonCOHPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PhotonCOHPXSec*)
   {
      ::genie::PhotonCOHPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PhotonCOHPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PhotonCOHPXSec", "", 274,
                  typeid(::genie::PhotonCOHPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPhotonCOHPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PhotonCOHPXSec) );
      instance.SetNew(&new_geniecLcLPhotonCOHPXSec);
      instance.SetNewArray(&newArray_geniecLcLPhotonCOHPXSec);
      instance.SetDelete(&delete_geniecLcLPhotonCOHPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLPhotonCOHPXSec);
      instance.SetDestructor(&destruct_geniecLcLPhotonCOHPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PhotonCOHPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PhotonCOHPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PhotonCOHPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPhotonCOHPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PhotonCOHPXSec*>(nullptr))->GetClass();
      geniecLcLPhotonCOHPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPhotonCOHPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPhotonRESPXSec_Dictionary();
   static void geniecLcLPhotonRESPXSec_TClassManip(TClass*);
   static void *new_geniecLcLPhotonRESPXSec(void *p = nullptr);
   static void *newArray_geniecLcLPhotonRESPXSec(Long_t size, void *p);
   static void delete_geniecLcLPhotonRESPXSec(void *p);
   static void deleteArray_geniecLcLPhotonRESPXSec(void *p);
   static void destruct_geniecLcLPhotonRESPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PhotonRESPXSec*)
   {
      ::genie::PhotonRESPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PhotonRESPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PhotonRESPXSec", "", 335,
                  typeid(::genie::PhotonRESPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPhotonRESPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PhotonRESPXSec) );
      instance.SetNew(&new_geniecLcLPhotonRESPXSec);
      instance.SetNewArray(&newArray_geniecLcLPhotonRESPXSec);
      instance.SetDelete(&delete_geniecLcLPhotonRESPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLPhotonRESPXSec);
      instance.SetDestructor(&destruct_geniecLcLPhotonRESPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PhotonRESPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PhotonRESPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PhotonRESPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPhotonRESPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PhotonRESPXSec*>(nullptr))->GetClass();
      geniecLcLPhotonRESPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPhotonRESPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGLRESPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GLRESPXSec : new ::genie::GLRESPXSec;
   }
   static void *newArray_geniecLcLGLRESPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GLRESPXSec[nElements] : new ::genie::GLRESPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGLRESPXSec(void *p) {
      delete (static_cast<::genie::GLRESPXSec*>(p));
   }
   static void deleteArray_geniecLcLGLRESPXSec(void *p) {
      delete [] (static_cast<::genie::GLRESPXSec*>(p));
   }
   static void destruct_geniecLcLGLRESPXSec(void *p) {
      typedef ::genie::GLRESPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GLRESPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHELeptonXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HELeptonXSec : new ::genie::HELeptonXSec;
   }
   static void *newArray_geniecLcLHELeptonXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HELeptonXSec[nElements] : new ::genie::HELeptonXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHELeptonXSec(void *p) {
      delete (static_cast<::genie::HELeptonXSec*>(p));
   }
   static void deleteArray_geniecLcLHELeptonXSec(void *p) {
      delete [] (static_cast<::genie::HELeptonXSec*>(p));
   }
   static void destruct_geniecLcLHELeptonXSec(void *p) {
      typedef ::genie::HELeptonXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HELeptonXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHENuElPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HENuElPXSec : new ::genie::HENuElPXSec;
   }
   static void *newArray_geniecLcLHENuElPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HENuElPXSec[nElements] : new ::genie::HENuElPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHENuElPXSec(void *p) {
      delete (static_cast<::genie::HENuElPXSec*>(p));
   }
   static void deleteArray_geniecLcLHENuElPXSec(void *p) {
      delete [] (static_cast<::genie::HENuElPXSec*>(p));
   }
   static void destruct_geniecLcLHENuElPXSec(void *p) {
      typedef ::genie::HENuElPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HENuElPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPhotonCOHPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonCOHPXSec : new ::genie::PhotonCOHPXSec;
   }
   static void *newArray_geniecLcLPhotonCOHPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonCOHPXSec[nElements] : new ::genie::PhotonCOHPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPhotonCOHPXSec(void *p) {
      delete (static_cast<::genie::PhotonCOHPXSec*>(p));
   }
   static void deleteArray_geniecLcLPhotonCOHPXSec(void *p) {
      delete [] (static_cast<::genie::PhotonCOHPXSec*>(p));
   }
   static void destruct_geniecLcLPhotonCOHPXSec(void *p) {
      typedef ::genie::PhotonCOHPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PhotonCOHPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPhotonRESPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonRESPXSec : new ::genie::PhotonRESPXSec;
   }
   static void *newArray_geniecLcLPhotonRESPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonRESPXSec[nElements] : new ::genie::PhotonRESPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPhotonRESPXSec(void *p) {
      delete (static_cast<::genie::PhotonRESPXSec*>(p));
   }
   static void deleteArray_geniecLcLPhotonRESPXSec(void *p) {
      delete [] (static_cast<::genie::PhotonRESPXSec*>(p));
   }
   static void destruct_geniecLcLPhotonRESPXSec(void *p) {
      typedef ::genie::PhotonRESPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PhotonRESPXSec

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhHELptnXS() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhHELptnXS) = RecordReadRules_libGPhHELptnXS();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhHELptnXS));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhHELptnXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/HELepton/XSection",
"GENIE",
"GENIE/Physics/HELepton/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/HELepton/XSection",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/HELepton/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhHELptnXS dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  GLRESPXSec;}
namespace genie{class  HELeptonXSec;}
namespace genie{class  HENuElPXSec;}
namespace genie{class  PhotonCOHPXSec;}
namespace genie{class  PhotonRESPXSec;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhHELptnXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::Born

\brief    Born level nu-electron cross section.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _BORN_PXSEC_H_
#define _BORN_PXSEC_H_

#include <TComplex.h>

namespace genie {

class Born {

public:
  Born ();
  virtual ~Born ();

  double GetReAlpha (void) { return falpha.Re(); }
  double PXSecCCR      (double s, double t, double mlin, double mlout);
  double PXSecCCV      (double s, double t, double mlin, double mlout);
  double PXSecCCRNC    (double s, double t, double mlin, double mlout);
  double PXSecCCVNC    (double s, double t, double mlin, double mlout);
  double PXSecNCVnu    (double s, double t, double mlin, double mlout);
  double PXSecNCVnubar (double s, double t, double mlin, double mlout);
  double PXSecPhoton   (double s, double t, double mlout2);
  double PXSecPhoton_T (double s12, double s13, double Q2, double ml2);
  double PXSecPhoton_L (double s12, double s13, double Q2, double ml2);
  double GetS           (double mlin, double Enuin);
  double GetT           (double mlin, double mlout, double s, double costhCM);
  double GetU           (double mlin, double mlout, double s, double t);
  bool   IsInPhaseSpace (double mlin, double mlout, double Enuin, double Enuout);
  double Lambda         (double a, double b, double c);

private:

  double fGw;
  double fGz;

  TComplex falpha;
  TComplex fsw2;
  TComplex fcw2;
  TComplex fmw2c;
  TComplex fmz2c;
  TComplex fgae;
  TComplex fgbe;
  TComplex fgav;

};

}       // genie namespace

#endif  // _BORN_H_
//____________________________________________________________________________
/*!

\class    genie::GLRESPXSec

\brief    Differential cross section for glashow resonance

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\ref      Phys. Rev. D 100, 091301 (2019)

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GLASHOW_RESONANCE_PXSEC_H_
#define _GLASHOW_RESONANCE_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/HELepton/XSection/Born.h"

namespace genie {

class XSecIntegratorI;

class GLRESPXSec : public XSecAlgorithmI {

public:
  GLRESPXSec ();
  GLRESPXSec (string config);
  virtual ~GLRESPXSec ();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig (void);

  const XSecIntegratorI *        fXSecIntegrator;     ///< diff. xsec integrator

  double fWmin;            ///< Minimum value of W

  Born * born;

};

}       // genie namespace

#endif  // _GLASHOW_RESONANCE_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::HELeptonXSec

\brief    Total cross section integrator for neutrino-electron

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\ref      Phys. Rev. D 100, 091301 (2019)

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HE_LEPTON_XSEC_H_
#define _HE_LEPTON_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class XSecAlgorithmI;
class Interaction;

class HELeptonXSec : public XSecIntegratorI {

public:
  HELeptonXSec();
  HELeptonXSec(string config);
  virtual ~HELeptonXSec();

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
#endif  // _HE_LEPTON_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::HENuElPXSec

\brief    Differential cross section for neutrino-electron

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\ref      Phys. Rev. D 100, 091301 (2019)

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HE_NUEL_PXSEC_H_
#define _HE_NUEL_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/HELepton/XSection/Born.h"

namespace genie {

class XSecIntegratorI;

class HENuElPXSec : public XSecAlgorithmI {

public:
  HENuElPXSec ();
  HENuElPXSec (string config);
  virtual ~HENuElPXSec ();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig (void);

  const XSecIntegratorI *        fXSecIntegrator;     ///< diff. xsec integrator

  Born * born;

};

}       // genie namespace

#endif  // _HE_NUELECTRON_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::PhotonCOHPXSec

\brief    Differential cross section for W boson production

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\ref      Phys. Rev. D 100, 091301 (2019)

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PHOTON_COH_PXSEC_H_
#define _PHOTON_COH_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/HELepton/XSection/Born.h"

namespace genie {

class XSecIntegratorI;

class PhotonCOHPXSec : public XSecAlgorithmI {

public:
  PhotonCOHPXSec ();
  PhotonCOHPXSec (string config);
  virtual ~PhotonCOHPXSec ();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig (void);
  double F2_Q       (double Q, double r0) const; //EM Nuclear Form-factor

  
  const XSecIntegratorI *        fXSecIntegrator;     ///< diff. xsec integrator

  Born * born;

};

}       // genie namespace

#endif  // _PHOTON_COH_PXSEC_H_//____________________________________________________________________________
/*!

\class    genie::PhotonRESPXSec

\brief    Differential cross section for trident production

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\ref      Phys. Rev. D 100, 091301 (2019)

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PHOTON_RES_PXSEC_H_
#define _PHOTON_RES_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/HELepton/XSection/Born.h"

namespace genie {

class XSecIntegratorI;

class PhotonRESPXSec : public XSecAlgorithmI {

public:
  PhotonRESPXSec ();
  PhotonRESPXSec (string config);
  virtual ~PhotonRESPXSec ();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig (void);

  const XSecIntegratorI *        fXSecIntegrator;     ///< diff. xsec integrator

  double fWmin;            ///< Minimum value of W

  double fQ2PDFmin;
  double fxPDFmin;

  Born * born;


};

}       // genie namespace

#endif  // _PHOTON_RES_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::PhotonStrucFunc

\brief    Structure function using photon PDFs of nucleons

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PHOTON_STRUC_FUNC_H_
#define _PHOTON_STRUC_FUNC_H_

#include "Framework/Numerical/Spline.h"

#include <map>

using std::map;

namespace genie {

  struct SF_x {
    double Fp1,Fm1;
    double Fp2,Fm2;
    double Fp3,Fm3;
  };

  class PhotonStrucFunc
  {
    public:

      // ................................................................
      // GLRES form factor type
      //

      class PhotonStrucFuncTable 
      {
        public:
          PhotonStrucFuncTable() { }
          ~PhotonStrucFuncTable() { /* note: should delete the grids! */ }
          map< int, genie::Spline * > Table;
      };

      // ................................................................

      static PhotonStrucFunc * Instance(void);

      double EvalSF  ( int hitnuc, int hitlep, double x ) { return fSFTables[hitnuc].Table[hitlep]->Evaluate(x); }

    private:

      // Ctors & dtor
      PhotonStrucFunc();
      PhotonStrucFunc(const PhotonStrucFunc &);
     ~PhotonStrucFunc();

      // Self
      static PhotonStrucFunc * fgInstance;

      // These map holds all SF tables (interaction channel is the key)
      map<int, PhotonStrucFuncTable> fSFTables;


      // singleton cleaner
      struct Cleaner {
        void DummyMethodAndSilentCompiler(){}
          ~Cleaner(){
          if (PhotonStrucFunc::fgInstance !=0){
            delete PhotonStrucFunc::fgInstance;
            PhotonStrucFunc::fgInstance = 0;
          }
        }
      };
      friend struct Cleaner;
  };

} // genie namespace

#endif // _PHOTON_STRUC_FUNC_H_
#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::GLRESPXSec", payloadCode, "@",
"genie::HELeptonXSec", payloadCode, "@",
"genie::HENuElPXSec", payloadCode, "@",
"genie::PhotonCOHPXSec", payloadCode, "@",
"genie::PhotonRESPXSec", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhHELptnXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhHELptnXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhHELptnXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhHELptnXS() {
  TriggerDictionaryInitialization_libGPhHELptnXS_Impl();
}
