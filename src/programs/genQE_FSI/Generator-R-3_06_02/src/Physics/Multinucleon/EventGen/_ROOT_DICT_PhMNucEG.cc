// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhMNucEG
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
#include "MECGenerator.h"
#include "MECInteractionListGenerator.h"

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
            instance("genie", 0 /*version*/, "Framework/Utils/Range1.h", 26,
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
   static TClass *geniecLcLMECGenerator_Dictionary();
   static void geniecLcLMECGenerator_TClassManip(TClass*);
   static void *new_geniecLcLMECGenerator(void *p = nullptr);
   static void *newArray_geniecLcLMECGenerator(Long_t size, void *p);
   static void delete_geniecLcLMECGenerator(void *p);
   static void deleteArray_geniecLcLMECGenerator(void *p);
   static void destruct_geniecLcLMECGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::MECGenerator*)
   {
      ::genie::MECGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::MECGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::MECGenerator", "", 38,
                  typeid(::genie::MECGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMECGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::MECGenerator) );
      instance.SetNew(&new_geniecLcLMECGenerator);
      instance.SetNewArray(&newArray_geniecLcLMECGenerator);
      instance.SetDelete(&delete_geniecLcLMECGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLMECGenerator);
      instance.SetDestructor(&destruct_geniecLcLMECGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::MECGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::MECGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::MECGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMECGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::MECGenerator*>(nullptr))->GetClass();
      geniecLcLMECGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMECGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLMECInteractionListGenerator_Dictionary();
   static void geniecLcLMECInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLMECInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLMECInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLMECInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLMECInteractionListGenerator(void *p);
   static void destruct_geniecLcLMECInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::MECInteractionListGenerator*)
   {
      ::genie::MECInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::MECInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::MECInteractionListGenerator", "", 118,
                  typeid(::genie::MECInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMECInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::MECInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLMECInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLMECInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLMECInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLMECInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLMECInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::MECInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::MECInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::MECInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMECInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::MECInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLMECInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMECInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLMECGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MECGenerator : new ::genie::MECGenerator;
   }
   static void *newArray_geniecLcLMECGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MECGenerator[nElements] : new ::genie::MECGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLMECGenerator(void *p) {
      delete (static_cast<::genie::MECGenerator*>(p));
   }
   static void deleteArray_geniecLcLMECGenerator(void *p) {
      delete [] (static_cast<::genie::MECGenerator*>(p));
   }
   static void destruct_geniecLcLMECGenerator(void *p) {
      typedef ::genie::MECGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::MECGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLMECInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MECInteractionListGenerator : new ::genie::MECInteractionListGenerator;
   }
   static void *newArray_geniecLcLMECInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MECInteractionListGenerator[nElements] : new ::genie::MECInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLMECInteractionListGenerator(void *p) {
      delete (static_cast<::genie::MECInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLMECInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::MECInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLMECInteractionListGenerator(void *p) {
      typedef ::genie::MECInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::MECInteractionListGenerator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhMNucEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhMNucEG) = RecordReadRules_libGPhMNucEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhMNucEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhMNucEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Multinucleon/EventGen",
"GENIE",
"GENIE/Physics/Multinucleon/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Multinucleon/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Multinucleon/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhMNucEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  MECGenerator;}
namespace genie{class  MECInteractionListGenerator;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhMNucEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::MECGenerator

\brief    Simulate the primary MEC interaction

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

          Steve Dytman <dytman+ \at pitt.edu>
          Pittsburgh University

\created  Sep. 22, 2008

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _MEC_GENERATOR_H_
#define _MEC_GENERATOR_H_

#include <TGenPhaseSpace.h>
#include "Framework/Utils/Range1.h"

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/ParticleData/PDGCodeList.h"

namespace genie {

class Interaction;
class NuclearModelI;
class XSecAlgorithmI;

class MECGenerator : public EventRecordVisitorI {

public :
  MECGenerator();
  MECGenerator(string config);
 ~MECGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void    LoadConfig                        (void);
  void    AddNucleonCluster                 (GHepRecord * event) const;
  void    AddTargetRemnant                  (GHepRecord * event) const;
  void    GenerateFermiMomentum             (GHepRecord * event) const;
  void    SelectEmpiricalKinematics         (GHepRecord * event) const;
  void    AddFinalStateLepton               (GHepRecord * event) const;
  void    RecoilNucleonCluster              (GHepRecord * event) const;
  void    DecayNucleonCluster               (GHepRecord * event) const;
  void    SelectNSVLeptonKinematics         (GHepRecord * event) const;
  void    SelectSuSALeptonKinematics        (GHepRecord * event) const;
  void    GenerateNSVInitialHadrons         (GHepRecord * event) const;
  PDGCodeList NucleonClusterConstituents    (int pdgc)           const;

  // Helper function that computes the maximum differential cross section
  // in the kPSTlctl phase space
  double GetXSecMaxTlctl( const Interaction & inter, const Range1D_t & Tl_range, const Range1D_t & ctl_range ) const;

  mutable const XSecAlgorithmI * fXSecModel;
  mutable TGenPhaseSpace         fPhaseSpaceGenerator;
  const NuclearModelI *          fNuclModel;

  double fSafetyFactor ; 
  int fFunctionCalls ; 
  double fRelTolerance ; // Relative tolerance 
  int fMinScanPointsTmu ; 
  int fMinScanPointsCosth ; 
  
  double fQ3Max;

  // Tolerate this maximum percent deviation above the calculated maximum cross
  // section when sampling lepton kinematics for the SuSAv2-MEC model.
  double fSuSAMaxXSecDiffTolerance;
};

}      // genie namespace
#endif // _MEC_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::MECInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the interactions that can be generated by the
          MEC EventGenerator.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Sep 22, 2008

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _MEC_INTERACTION_GENERATOR_H_
#define _MEC_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class MECInteractionListGenerator : public InteractionListGeneratorI {

public :
  MECInteractionListGenerator();
  MECInteractionListGenerator(string config);
 ~MECInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool fIsCC;
  bool fIsNC;
  bool fIsEM;
  bool fSetDiNucleonCode;
  bool fSetDiNucleonCodeEM;
};

}      // genie namespace
#endif // _MEC_INTERACTION_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::MECGenerator", payloadCode, "@",
"genie::MECInteractionListGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhMNucEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhMNucEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhMNucEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhMNucEG() {
  TriggerDictionaryInitialization_libGPhMNucEG_Impl();
}
