// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhAMNGXS
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
#include "H3AMNuGammaPXSec.h"

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
   static TClass *geniecLcLH3AMNuGammaPXSec_Dictionary();
   static void geniecLcLH3AMNuGammaPXSec_TClassManip(TClass*);
   static void *new_geniecLcLH3AMNuGammaPXSec(void *p = nullptr);
   static void *newArray_geniecLcLH3AMNuGammaPXSec(Long_t size, void *p);
   static void delete_geniecLcLH3AMNuGammaPXSec(void *p);
   static void deleteArray_geniecLcLH3AMNuGammaPXSec(void *p);
   static void destruct_geniecLcLH3AMNuGammaPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::H3AMNuGammaPXSec*)
   {
      ::genie::H3AMNuGammaPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::H3AMNuGammaPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::H3AMNuGammaPXSec", "", 30,
                  typeid(::genie::H3AMNuGammaPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLH3AMNuGammaPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::H3AMNuGammaPXSec) );
      instance.SetNew(&new_geniecLcLH3AMNuGammaPXSec);
      instance.SetNewArray(&newArray_geniecLcLH3AMNuGammaPXSec);
      instance.SetDelete(&delete_geniecLcLH3AMNuGammaPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLH3AMNuGammaPXSec);
      instance.SetDestructor(&destruct_geniecLcLH3AMNuGammaPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::H3AMNuGammaPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::H3AMNuGammaPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::H3AMNuGammaPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLH3AMNuGammaPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::H3AMNuGammaPXSec*>(nullptr))->GetClass();
      geniecLcLH3AMNuGammaPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLH3AMNuGammaPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLH3AMNuGammaPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::H3AMNuGammaPXSec : new ::genie::H3AMNuGammaPXSec;
   }
   static void *newArray_geniecLcLH3AMNuGammaPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::H3AMNuGammaPXSec[nElements] : new ::genie::H3AMNuGammaPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLH3AMNuGammaPXSec(void *p) {
      delete (static_cast<::genie::H3AMNuGammaPXSec*>(p));
   }
   static void deleteArray_geniecLcLH3AMNuGammaPXSec(void *p) {
      delete [] (static_cast<::genie::H3AMNuGammaPXSec*>(p));
   }
   static void destruct_geniecLcLH3AMNuGammaPXSec(void *p) {
      typedef ::genie::H3AMNuGammaPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::H3AMNuGammaPXSec

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhAMNGXS() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhAMNGXS) = RecordReadRules_libGPhAMNGXS();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhAMNGXS));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhAMNGXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/AnomalyMediatedNuGamma/XSection",
"GENIE",
"GENIE/Physics/AnomalyMediatedNuGamma/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/AnomalyMediatedNuGamma/XSection",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/AnomalyMediatedNuGamma/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhAMNGXS dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  H3AMNuGammaPXSec;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhAMNGXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::H3AMNuGammaPXSec

\brief    An anomaly-mediated neutrino-photon interaction cross section model
          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      J.A.Harvey, C.T.Hill and R.J.Hill, PRL99, 261601 (2007)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  February 15, 2008

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _H3_ANOMALY_MEDIATED_NUGAMMA_PXSEC_H_
#define _H3_ANOMALY_MEDIATED_NUGAMMA_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class H3AMNuGammaPXSec : public XSecAlgorithmI {

public:
  H3AMNuGammaPXSec();
  H3AMNuGammaPXSec(string config);
  virtual ~H3AMNuGammaPXSec();

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

  double fGw;
};

}       // genie namespace
#endif  // _H3_ANOMALY_MEDIATED_NUGAMMA_PXSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::H3AMNuGammaPXSec", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhAMNGXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhAMNGXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhAMNGXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhAMNGXS() {
  TriggerDictionaryInitialization_libGPhAMNGXS_Impl();
}
