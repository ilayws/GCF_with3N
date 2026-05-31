// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDeEx
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
#include "NucDeExcitationSim.h"

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
   static TClass *geniecLcLNucDeExcitationSim_Dictionary();
   static void geniecLcLNucDeExcitationSim_TClassManip(TClass*);
   static void *new_geniecLcLNucDeExcitationSim(void *p = nullptr);
   static void *newArray_geniecLcLNucDeExcitationSim(Long_t size, void *p);
   static void delete_geniecLcLNucDeExcitationSim(void *p);
   static void deleteArray_geniecLcLNucDeExcitationSim(void *p);
   static void destruct_geniecLcLNucDeExcitationSim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NucDeExcitationSim*)
   {
      ::genie::NucDeExcitationSim *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NucDeExcitationSim));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NucDeExcitationSim", "", 33,
                  typeid(::genie::NucDeExcitationSim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNucDeExcitationSim_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NucDeExcitationSim) );
      instance.SetNew(&new_geniecLcLNucDeExcitationSim);
      instance.SetNewArray(&newArray_geniecLcLNucDeExcitationSim);
      instance.SetDelete(&delete_geniecLcLNucDeExcitationSim);
      instance.SetDeleteArray(&deleteArray_geniecLcLNucDeExcitationSim);
      instance.SetDestructor(&destruct_geniecLcLNucDeExcitationSim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NucDeExcitationSim*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NucDeExcitationSim*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NucDeExcitationSim*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNucDeExcitationSim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NucDeExcitationSim*>(nullptr))->GetClass();
      geniecLcLNucDeExcitationSim_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNucDeExcitationSim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNucDeExcitationSim(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NucDeExcitationSim : new ::genie::NucDeExcitationSim;
   }
   static void *newArray_geniecLcLNucDeExcitationSim(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NucDeExcitationSim[nElements] : new ::genie::NucDeExcitationSim[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNucDeExcitationSim(void *p) {
      delete (static_cast<::genie::NucDeExcitationSim*>(p));
   }
   static void deleteArray_geniecLcLNucDeExcitationSim(void *p) {
      delete [] (static_cast<::genie::NucDeExcitationSim*>(p));
   }
   static void destruct_geniecLcLNucDeExcitationSim(void *p) {
      typedef ::genie::NucDeExcitationSim current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NucDeExcitationSim

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhDeEx() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhDeEx) = RecordReadRules_libGPhDeEx();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhDeEx));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhDeEx_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/NuclearDeExcitation",
"GENIE",
"GENIE/Physics/NuclearDeExcitation",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/NuclearDeExcitation",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/NuclearDeExcitation/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDeEx dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  NucDeExcitationSim;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDeEx dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::NucDeExcitationSim

\brief    Generates nuclear de-excitation gamma rays

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\ref      16O:
           H.Ejiri,Phys.Rev.C48,1442(1993);
           K.Kobayashi et al., Nucl.Phys.B (proc Suppl) 139 (2005)

\created  March 05, 2008

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _NUCLEAR_DEEXCITATION_H_
#define _NUCLEAR_DEEXCITATION_H_

#include <TLorentzVector.h>

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class NucDeExcitationSim : public EventRecordVisitorI {

public :
  NucDeExcitationSim();
  NucDeExcitationSim(string config);
 ~NucDeExcitationSim();

  void Configure( const Registry& config ) override;
  void Configure( std::string config ) override;

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * evrec) const override;

private:
  void           OxygenTargetSim      (GHepRecord * evrec) const;
  void           CarbonTargetSim      (GHepRecord * evrec) const;
  void           ArgonTargetSim       (GHepRecord * evrec) const;
  void           AddPhoton            (GHepRecord * evrec, double E0, double t) const;
  double         PhotonEnergySmearing (double E0, double t) const;
  TLorentzVector Photon4P             (double E) const;

  void           LoadConfig();

  // Configuration flags that enable/disable de-excitations for specific nuclei
  bool fDoCarbon = false;
  bool fDoArgon = false;
};

}      // genie namespace
#endif // _NUCLEAR_DEEXCITATION_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::NucDeExcitationSim", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDeEx",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDeEx_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDeEx_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDeEx() {
  TriggerDictionaryInitialization_libGPhDeEx_Impl();
}
