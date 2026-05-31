// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhAMNGEG
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
#include "AMNuGammaGenerator.h"
#include "AMNuGammaInteractionListGenerator.h"

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
   static TClass *geniecLcLAMNuGammaGenerator_Dictionary();
   static void geniecLcLAMNuGammaGenerator_TClassManip(TClass*);
   static void *new_geniecLcLAMNuGammaGenerator(void *p = nullptr);
   static void *newArray_geniecLcLAMNuGammaGenerator(Long_t size, void *p);
   static void delete_geniecLcLAMNuGammaGenerator(void *p);
   static void deleteArray_geniecLcLAMNuGammaGenerator(void *p);
   static void destruct_geniecLcLAMNuGammaGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AMNuGammaGenerator*)
   {
      ::genie::AMNuGammaGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AMNuGammaGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AMNuGammaGenerator", "", 27,
                  typeid(::genie::AMNuGammaGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAMNuGammaGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AMNuGammaGenerator) );
      instance.SetNew(&new_geniecLcLAMNuGammaGenerator);
      instance.SetNewArray(&newArray_geniecLcLAMNuGammaGenerator);
      instance.SetDelete(&delete_geniecLcLAMNuGammaGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLAMNuGammaGenerator);
      instance.SetDestructor(&destruct_geniecLcLAMNuGammaGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AMNuGammaGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AMNuGammaGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AMNuGammaGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAMNuGammaGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AMNuGammaGenerator*>(nullptr))->GetClass();
      geniecLcLAMNuGammaGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAMNuGammaGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAMNuGammaInteractionListGenerator_Dictionary();
   static void geniecLcLAMNuGammaInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLAMNuGammaInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLAMNuGammaInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLAMNuGammaInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLAMNuGammaInteractionListGenerator(void *p);
   static void destruct_geniecLcLAMNuGammaInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AMNuGammaInteractionListGenerator*)
   {
      ::genie::AMNuGammaInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AMNuGammaInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AMNuGammaInteractionListGenerator", "", 73,
                  typeid(::genie::AMNuGammaInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAMNuGammaInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AMNuGammaInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLAMNuGammaInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLAMNuGammaInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLAMNuGammaInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLAMNuGammaInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLAMNuGammaInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AMNuGammaInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AMNuGammaInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AMNuGammaInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAMNuGammaInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AMNuGammaInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLAMNuGammaInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAMNuGammaInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAMNuGammaGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AMNuGammaGenerator : new ::genie::AMNuGammaGenerator;
   }
   static void *newArray_geniecLcLAMNuGammaGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AMNuGammaGenerator[nElements] : new ::genie::AMNuGammaGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAMNuGammaGenerator(void *p) {
      delete (static_cast<::genie::AMNuGammaGenerator*>(p));
   }
   static void deleteArray_geniecLcLAMNuGammaGenerator(void *p) {
      delete [] (static_cast<::genie::AMNuGammaGenerator*>(p));
   }
   static void destruct_geniecLcLAMNuGammaGenerator(void *p) {
      typedef ::genie::AMNuGammaGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AMNuGammaGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAMNuGammaInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AMNuGammaInteractionListGenerator : new ::genie::AMNuGammaInteractionListGenerator;
   }
   static void *newArray_geniecLcLAMNuGammaInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AMNuGammaInteractionListGenerator[nElements] : new ::genie::AMNuGammaInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAMNuGammaInteractionListGenerator(void *p) {
      delete (static_cast<::genie::AMNuGammaInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLAMNuGammaInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::AMNuGammaInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLAMNuGammaInteractionListGenerator(void *p) {
      typedef ::genie::AMNuGammaInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AMNuGammaInteractionListGenerator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhAMNGEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhAMNGEG) = RecordReadRules_libGPhAMNGEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhAMNGEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhAMNGEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/AnomalyMediatedNuGamma/EventGen",
"GENIE",
"GENIE/Physics/AnomalyMediatedNuGamma/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/AnomalyMediatedNuGamma/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/AnomalyMediatedNuGamma/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhAMNGEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  AMNuGammaGenerator;}
namespace genie{class  AMNuGammaInteractionListGenerator;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhAMNGEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::AMNuGammaGenerator

\brief

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Feb 15, 2008

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _AMNUGAMMA_GENERATOR_H_
#define _AMNUGAMMA_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class AMNuGammaGenerator : public EventRecordVisitorI {

public :
  AMNuGammaGenerator();
  AMNuGammaGenerator(string config);
 ~AMNuGammaGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event_rec) const;

private:
  void AddPhoton             (GHepRecord * event_rec) const;
  void AddFinalStateNeutrino (GHepRecord * event_rec) const;
  void AddTargetRemnant      (GHepRecord * event_rec) const;
  void AddRecoilNucleon      (GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _AMNUGAMMA_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::AMNuGammaInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the interactions that can be generated by the
          AM-NUGAMMA EventGenerator.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Feb 15, 2008

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _AMNUGAMMA_INTERACTION_GENERATOR_H_
#define _AMNUGAMMA_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class AMNuGammaInteractionListGenerator : public InteractionListGeneratorI {

public :
  AMNuGammaInteractionListGenerator();
  AMNuGammaInteractionListGenerator(string config);
 ~AMNuGammaInteractionListGenerator();

  //-- implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;
};

}      // genie namespace
#endif // _AMNUGAMMA_INTERACTION_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::AMNuGammaGenerator", payloadCode, "@",
"genie::AMNuGammaInteractionListGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhAMNGEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhAMNGEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhAMNGEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhAMNGEG() {
  TriggerDictionaryInitialization_libGPhAMNGEG_Impl();
}
