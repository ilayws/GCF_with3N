// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDfrcXS
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
#include "DFRXSec.h"
#include "ReinDFRPXSec.h"

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
   static TClass *geniecLcLDFRXSec_Dictionary();
   static void geniecLcLDFRXSec_TClassManip(TClass*);
   static void *new_geniecLcLDFRXSec(void *p = nullptr);
   static void *newArray_geniecLcLDFRXSec(Long_t size, void *p);
   static void delete_geniecLcLDFRXSec(void *p);
   static void deleteArray_geniecLcLDFRXSec(void *p);
   static void destruct_geniecLcLDFRXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DFRXSec*)
   {
      ::genie::DFRXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DFRXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DFRXSec", "", 38,
                  typeid(::genie::DFRXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDFRXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DFRXSec) );
      instance.SetNew(&new_geniecLcLDFRXSec);
      instance.SetNewArray(&newArray_geniecLcLDFRXSec);
      instance.SetDelete(&delete_geniecLcLDFRXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLDFRXSec);
      instance.SetDestructor(&destruct_geniecLcLDFRXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DFRXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DFRXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DFRXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDFRXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DFRXSec*>(nullptr))->GetClass();
      geniecLcLDFRXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDFRXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinDFRPXSec_Dictionary();
   static void geniecLcLReinDFRPXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinDFRPXSec(void *p = nullptr);
   static void *newArray_geniecLcLReinDFRPXSec(Long_t size, void *p);
   static void delete_geniecLcLReinDFRPXSec(void *p);
   static void deleteArray_geniecLcLReinDFRPXSec(void *p);
   static void destruct_geniecLcLReinDFRPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinDFRPXSec*)
   {
      ::genie::ReinDFRPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinDFRPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinDFRPXSec", "", 94,
                  typeid(::genie::ReinDFRPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinDFRPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinDFRPXSec) );
      instance.SetNew(&new_geniecLcLReinDFRPXSec);
      instance.SetNewArray(&newArray_geniecLcLReinDFRPXSec);
      instance.SetDelete(&delete_geniecLcLReinDFRPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinDFRPXSec);
      instance.SetDestructor(&destruct_geniecLcLReinDFRPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinDFRPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ReinDFRPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ReinDFRPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinDFRPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ReinDFRPXSec*>(nullptr))->GetClass();
      geniecLcLReinDFRPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinDFRPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDFRXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRXSec : new ::genie::DFRXSec;
   }
   static void *newArray_geniecLcLDFRXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRXSec[nElements] : new ::genie::DFRXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDFRXSec(void *p) {
      delete (static_cast<::genie::DFRXSec*>(p));
   }
   static void deleteArray_geniecLcLDFRXSec(void *p) {
      delete [] (static_cast<::genie::DFRXSec*>(p));
   }
   static void destruct_geniecLcLDFRXSec(void *p) {
      typedef ::genie::DFRXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DFRXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinDFRPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinDFRPXSec : new ::genie::ReinDFRPXSec;
   }
   static void *newArray_geniecLcLReinDFRPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinDFRPXSec[nElements] : new ::genie::ReinDFRPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinDFRPXSec(void *p) {
      delete (static_cast<::genie::ReinDFRPXSec*>(p));
   }
   static void deleteArray_geniecLcLReinDFRPXSec(void *p) {
      delete [] (static_cast<::genie::ReinDFRPXSec*>(p));
   }
   static void destruct_geniecLcLReinDFRPXSec(void *p) {
      typedef ::genie::ReinDFRPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinDFRPXSec

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhDfrcXS() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhDfrcXS) = RecordReadRules_libGPhDfrcXS();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhDfrcXS));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhDfrcXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Diffractive/XSection",
"GENIE",
"GENIE/Physics/Diffractive/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Diffractive/XSection",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Diffractive/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDfrcXS dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  DFRXSec;}
namespace genie{class  ReinDFRPXSec;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDfrcXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::DFRXSec

\brief    Computes the cross section for DFR neutrino-nucleus pi production.\n
          Is a concrete implementation of the XSecIntegratorI interface.

\author   Jeremy Wolcott <jeremy.wolcott \at tufts.edu>
          Tufts University

\created  May 13, 2016

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________
#ifndef _DFR_XSEC_H_
#define _DFR_XSEC_H_

#include <string>

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie
{
  class Interaction;
  class Registry;
  class XSecAlgorithmI;
}

namespace genie
{

  class DFRXSec : public XSecIntegratorI
  {
    public:
      DFRXSec ();
      DFRXSec (std::string config);
      virtual ~DFRXSec ();

      // XSecIntegratorI interface implementation
      double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

      // Overload the Algorithm::Configure() methods to load private data
      // members from configuration options
      void Configure(const Registry & config);
      void Configure(std::string config);

    private:
      void LoadConfig (void);

      double fTMax;   ///< upper bound for t = (q - p_pi)^2
  };

} /* namespace genie */

#endif /* _DFR_XSEC_H_ */
//____________________________________________________________________________
/*!

\class    genie::ReinDFRPXSec

\brief    Neutrino diffractive pion production cross section.

\ref      D.Rein, Nucl.Phys.B278(1986) 61-77

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Feb 17th, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _REIN_DFRC_PXSEC_H_
#define _REIN_DFRC_PXSEC_H_

#include <string>

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class ReinDFRPXSec : public XSecAlgorithmI {

public:
  ReinDFRPXSec();
  ReinDFRPXSec(const std::string & config);
  virtual ~ReinDFRPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig (void);

  double fMa;      ///< axial mass
  double fBeta;    ///< b in dsig{piN}/dt = dsig0{piN}/dt * exp(-b(t-tmin)), b ~ 0.333 (nucleon_size)^2

  const XSecIntegratorI * fXSecIntegrator;
};

}       // genie namespace
#endif  // _REIN_DFRC_PXSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::DFRXSec", payloadCode, "@",
"genie::ReinDFRPXSec", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDfrcXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDfrcXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDfrcXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDfrcXS() {
  TriggerDictionaryInitialization_libGPhDfrcXS_Impl();
}
