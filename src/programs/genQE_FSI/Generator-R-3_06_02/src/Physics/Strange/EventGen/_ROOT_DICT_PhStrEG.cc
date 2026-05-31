// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhStrEG
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
#include "SKHadronicSystemGenerator.h"
#include "SKInteractionListGenerator.h"
#include "SKKinematicsGenerator.h"
#include "SKPrimaryLeptonGenerator.h"

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
   static TClass *geniecLcLSKHadronicSystemGenerator_Dictionary();
   static void geniecLcLSKHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLSKHadronicSystemGenerator(void *p = nullptr);
   static void *newArray_geniecLcLSKHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLSKHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLSKHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLSKHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SKHadronicSystemGenerator*)
   {
      ::genie::SKHadronicSystemGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SKHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SKHadronicSystemGenerator", "", 28,
                  typeid(::genie::SKHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSKHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SKHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLSKHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLSKHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLSKHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLSKHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLSKHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SKHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SKHadronicSystemGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SKHadronicSystemGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSKHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SKHadronicSystemGenerator*>(nullptr))->GetClass();
      geniecLcLSKHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSKHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSKInteractionListGenerator_Dictionary();
   static void geniecLcLSKInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLSKInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLSKInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLSKInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLSKInteractionListGenerator(void *p);
   static void destruct_geniecLcLSKInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SKInteractionListGenerator*)
   {
      ::genie::SKInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SKInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SKInteractionListGenerator", "", 69,
                  typeid(::genie::SKInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSKInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SKInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLSKInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLSKInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLSKInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLSKInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLSKInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SKInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SKInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SKInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSKInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SKInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLSKInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSKInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSKKinematicsGenerator_Dictionary();
   static void geniecLcLSKKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLSKKinematicsGenerator(void *p = nullptr);
   static void *newArray_geniecLcLSKKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLSKKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLSKKinematicsGenerator(void *p);
   static void destruct_geniecLcLSKKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SKKinematicsGenerator*)
   {
      ::genie::SKKinematicsGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SKKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SKKinematicsGenerator", "", 124,
                  typeid(::genie::SKKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSKKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SKKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLSKKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLSKKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLSKKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLSKKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLSKKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SKKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SKKinematicsGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SKKinematicsGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSKKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SKKinematicsGenerator*>(nullptr))->GetClass();
      geniecLcLSKKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSKKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSKPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLSKPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLSKPrimaryLeptonGenerator(void *p = nullptr);
   static void *newArray_geniecLcLSKPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLSKPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLSKPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLSKPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SKPrimaryLeptonGenerator*)
   {
      ::genie::SKPrimaryLeptonGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SKPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SKPrimaryLeptonGenerator", "", 186,
                  typeid(::genie::SKPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSKPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SKPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLSKPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLSKPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLSKPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLSKPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLSKPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SKPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SKPrimaryLeptonGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SKPrimaryLeptonGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSKPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SKPrimaryLeptonGenerator*>(nullptr))->GetClass();
      geniecLcLSKPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSKPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSKHadronicSystemGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SKHadronicSystemGenerator : new ::genie::SKHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLSKHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SKHadronicSystemGenerator[nElements] : new ::genie::SKHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSKHadronicSystemGenerator(void *p) {
      delete (static_cast<::genie::SKHadronicSystemGenerator*>(p));
   }
   static void deleteArray_geniecLcLSKHadronicSystemGenerator(void *p) {
      delete [] (static_cast<::genie::SKHadronicSystemGenerator*>(p));
   }
   static void destruct_geniecLcLSKHadronicSystemGenerator(void *p) {
      typedef ::genie::SKHadronicSystemGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SKHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSKInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SKInteractionListGenerator : new ::genie::SKInteractionListGenerator;
   }
   static void *newArray_geniecLcLSKInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SKInteractionListGenerator[nElements] : new ::genie::SKInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSKInteractionListGenerator(void *p) {
      delete (static_cast<::genie::SKInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLSKInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::SKInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLSKInteractionListGenerator(void *p) {
      typedef ::genie::SKInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SKInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSKKinematicsGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SKKinematicsGenerator : new ::genie::SKKinematicsGenerator;
   }
   static void *newArray_geniecLcLSKKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SKKinematicsGenerator[nElements] : new ::genie::SKKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSKKinematicsGenerator(void *p) {
      delete (static_cast<::genie::SKKinematicsGenerator*>(p));
   }
   static void deleteArray_geniecLcLSKKinematicsGenerator(void *p) {
      delete [] (static_cast<::genie::SKKinematicsGenerator*>(p));
   }
   static void destruct_geniecLcLSKKinematicsGenerator(void *p) {
      typedef ::genie::SKKinematicsGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SKKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSKPrimaryLeptonGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SKPrimaryLeptonGenerator : new ::genie::SKPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLSKPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SKPrimaryLeptonGenerator[nElements] : new ::genie::SKPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSKPrimaryLeptonGenerator(void *p) {
      delete (static_cast<::genie::SKPrimaryLeptonGenerator*>(p));
   }
   static void deleteArray_geniecLcLSKPrimaryLeptonGenerator(void *p) {
      delete [] (static_cast<::genie::SKPrimaryLeptonGenerator*>(p));
   }
   static void destruct_geniecLcLSKPrimaryLeptonGenerator(void *p) {
      typedef ::genie::SKPrimaryLeptonGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SKPrimaryLeptonGenerator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhStrEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhStrEG) = RecordReadRules_libGPhStrEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhStrEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhStrEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Strange/EventGen",
"GENIE",
"GENIE/Physics/Strange/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Strange/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Strange/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhStrEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  SKHadronicSystemGenerator;}
namespace genie{class  SKInteractionListGenerator;}
namespace genie{class  SKKinematicsGenerator;}
namespace genie{class  SKPrimaryLeptonGenerator;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhStrEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::SKHadronicSystemGenerator

\brief    Generates the f/s hadronic system in single-Kaon production interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 20, 2014

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _SK_HADRONIC_SYSTEM_GENERATOR_H_
#define _SK_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class SKHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  SKHadronicSystemGenerator();
  SKHadronicSystemGenerator(string config);
 ~SKHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
  void CalculateHadronicSystem_AtharSingleKaon(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _SK_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::SKInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Creates a list of all the interactions that can be generated
          by the single-Kaon generator.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 20, 2014

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _SK_INTERACTION_LIST_GENERATOR_H_
#define _SK_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class SKInteractionListGenerator : public InteractionListGeneratorI {

public :

  SKInteractionListGenerator();
  SKInteractionListGenerator(string config);
 ~SKInteractionListGenerator();

  // Implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool fIsCC;
  bool fIsNC;
};

}      // genie namespace

#endif // _SK_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::SKKinematicsGenerator

\brief    Generates values for the kinematic variables describing neutrino-nucleus
          single kaon production events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Chris Marshall <marshall \at pas.rochester.edu>
          University of Rochester

\created  October 03, 2014

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _SK_KINEMATICS_GENERATOR_H_
#define _SK_KINEMATICS_GENERATOR_H_

#include "Framework/Utils/Range1.h"
#include "Physics/Common/KineGeneratorWithCache.h"

namespace genie {

class SKKinematicsGenerator : public KineGeneratorWithCache {

public :
  SKKinematicsGenerator();
  SKKinematicsGenerator(string config);
 ~SKKinematicsGenerator();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

public:
  // Methods to load sub-algorithms and config data from the Registry
  void LoadConfig (void);

  // Different kinematics calculators for different models
  void CalculateKin_AtharSingleKaon(GHepRecord * event_rec) const;

  double ComputeMaxXSec (const Interaction * in) const;

  // Overload KineGeneratorWithCache method to get energy
  double Energy (const Interaction * in) const;

private:

  // In computeMaxXSec method, scan log(1-cos(theta)) from this value up to log(2)
  double fMinLog1MinusCosTheta;

};

}      // genie namespace
#endif // _SK_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::SKPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in single-Kaon interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 20, 2014

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _SK_PRIMARY_LEPTON_GENERATOR_H_
#define _SK_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class SKPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :

  SKPrimaryLeptonGenerator();
  SKPrimaryLeptonGenerator(string config);
 ~SKPrimaryLeptonGenerator();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

//void CalculatePrimaryLepton(GHepRecord * event_rec) const;
};

}      // genie namespace

#endif // _SK_PRIMARY_LEPTON_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::SKHadronicSystemGenerator", payloadCode, "@",
"genie::SKInteractionListGenerator", payloadCode, "@",
"genie::SKKinematicsGenerator", payloadCode, "@",
"genie::SKPrimaryLeptonGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhStrEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhStrEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhStrEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhStrEG() {
  TriggerDictionaryInitialization_libGPhStrEG_Impl();
}
