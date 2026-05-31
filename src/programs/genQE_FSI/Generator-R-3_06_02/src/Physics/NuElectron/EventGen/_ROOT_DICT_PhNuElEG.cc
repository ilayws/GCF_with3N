// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhNuElEG
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
#include "NuEInteractionListGenerator.h"
#include "NuEKinematicsGenerator.h"
#include "NuEPrimaryLeptonGenerator.h"
#include "NuETargetRemnantGenerator.h"

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
   static TClass *geniecLcLNuEInteractionListGenerator_Dictionary();
   static void geniecLcLNuEInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNuEInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLNuEInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLNuEInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLNuEInteractionListGenerator(void *p);
   static void destruct_geniecLcLNuEInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuEInteractionListGenerator*)
   {
      ::genie::NuEInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuEInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuEInteractionListGenerator", "", 29,
                  typeid(::genie::NuEInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuEInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuEInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLNuEInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLNuEInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLNuEInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuEInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLNuEInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuEInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NuEInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NuEInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuEInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NuEInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLNuEInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuEInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuEKinematicsGenerator_Dictionary();
   static void geniecLcLNuEKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNuEKinematicsGenerator(void *p = nullptr);
   static void *newArray_geniecLcLNuEKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLNuEKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLNuEKinematicsGenerator(void *p);
   static void destruct_geniecLcLNuEKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuEKinematicsGenerator*)
   {
      ::genie::NuEKinematicsGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuEKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuEKinematicsGenerator", "", 84,
                  typeid(::genie::NuEKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuEKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuEKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLNuEKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLNuEKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLNuEKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuEKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLNuEKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuEKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NuEKinematicsGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NuEKinematicsGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuEKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NuEKinematicsGenerator*>(nullptr))->GetClass();
      geniecLcLNuEKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuEKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuEPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLNuEPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNuEPrimaryLeptonGenerator(void *p = nullptr);
   static void *newArray_geniecLcLNuEPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLNuEPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLNuEPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLNuEPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuEPrimaryLeptonGenerator*)
   {
      ::genie::NuEPrimaryLeptonGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuEPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuEPrimaryLeptonGenerator", "", 137,
                  typeid(::genie::NuEPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuEPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuEPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLNuEPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLNuEPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLNuEPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuEPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLNuEPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuEPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NuEPrimaryLeptonGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NuEPrimaryLeptonGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuEPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NuEPrimaryLeptonGenerator*>(nullptr))->GetClass();
      geniecLcLNuEPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuEPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuETargetRemnantGenerator_Dictionary();
   static void geniecLcLNuETargetRemnantGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNuETargetRemnantGenerator(void *p = nullptr);
   static void *newArray_geniecLcLNuETargetRemnantGenerator(Long_t size, void *p);
   static void delete_geniecLcLNuETargetRemnantGenerator(void *p);
   static void deleteArray_geniecLcLNuETargetRemnantGenerator(void *p);
   static void destruct_geniecLcLNuETargetRemnantGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuETargetRemnantGenerator*)
   {
      ::genie::NuETargetRemnantGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuETargetRemnantGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuETargetRemnantGenerator", "", 177,
                  typeid(::genie::NuETargetRemnantGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuETargetRemnantGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuETargetRemnantGenerator) );
      instance.SetNew(&new_geniecLcLNuETargetRemnantGenerator);
      instance.SetNewArray(&newArray_geniecLcLNuETargetRemnantGenerator);
      instance.SetDelete(&delete_geniecLcLNuETargetRemnantGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuETargetRemnantGenerator);
      instance.SetDestructor(&destruct_geniecLcLNuETargetRemnantGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuETargetRemnantGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NuETargetRemnantGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NuETargetRemnantGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuETargetRemnantGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NuETargetRemnantGenerator*>(nullptr))->GetClass();
      geniecLcLNuETargetRemnantGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuETargetRemnantGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuEInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuEInteractionListGenerator : new ::genie::NuEInteractionListGenerator;
   }
   static void *newArray_geniecLcLNuEInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuEInteractionListGenerator[nElements] : new ::genie::NuEInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuEInteractionListGenerator(void *p) {
      delete (static_cast<::genie::NuEInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLNuEInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::NuEInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLNuEInteractionListGenerator(void *p) {
      typedef ::genie::NuEInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuEInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuEKinematicsGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuEKinematicsGenerator : new ::genie::NuEKinematicsGenerator;
   }
   static void *newArray_geniecLcLNuEKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuEKinematicsGenerator[nElements] : new ::genie::NuEKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuEKinematicsGenerator(void *p) {
      delete (static_cast<::genie::NuEKinematicsGenerator*>(p));
   }
   static void deleteArray_geniecLcLNuEKinematicsGenerator(void *p) {
      delete [] (static_cast<::genie::NuEKinematicsGenerator*>(p));
   }
   static void destruct_geniecLcLNuEKinematicsGenerator(void *p) {
      typedef ::genie::NuEKinematicsGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuEKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuEPrimaryLeptonGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuEPrimaryLeptonGenerator : new ::genie::NuEPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLNuEPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuEPrimaryLeptonGenerator[nElements] : new ::genie::NuEPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuEPrimaryLeptonGenerator(void *p) {
      delete (static_cast<::genie::NuEPrimaryLeptonGenerator*>(p));
   }
   static void deleteArray_geniecLcLNuEPrimaryLeptonGenerator(void *p) {
      delete [] (static_cast<::genie::NuEPrimaryLeptonGenerator*>(p));
   }
   static void destruct_geniecLcLNuEPrimaryLeptonGenerator(void *p) {
      typedef ::genie::NuEPrimaryLeptonGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuEPrimaryLeptonGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuETargetRemnantGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuETargetRemnantGenerator : new ::genie::NuETargetRemnantGenerator;
   }
   static void *newArray_geniecLcLNuETargetRemnantGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuETargetRemnantGenerator[nElements] : new ::genie::NuETargetRemnantGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuETargetRemnantGenerator(void *p) {
      delete (static_cast<::genie::NuETargetRemnantGenerator*>(p));
   }
   static void deleteArray_geniecLcLNuETargetRemnantGenerator(void *p) {
      delete [] (static_cast<::genie::NuETargetRemnantGenerator*>(p));
   }
   static void destruct_geniecLcLNuETargetRemnantGenerator(void *p) {
      typedef ::genie::NuETargetRemnantGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuETargetRemnantGenerator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhNuElEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhNuElEG) = RecordReadRules_libGPhNuElEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhNuElEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhNuElEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/NuElectron/EventGen",
"GENIE",
"GENIE/Physics/NuElectron/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/NuElectron/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/NuElectron/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhNuElEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  NuEInteractionListGenerator;}
namespace genie{class  NuEKinematicsGenerator;}
namespace genie{class  NuEPrimaryLeptonGenerator;}
namespace genie{class  NuETargetRemnantGenerator;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhNuElEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::NuEInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the Interaction (= event summary) objects that
          can be generated by the NUE EventGenerator.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 13, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _NUE_INTERACTION_GENERATOR_H_
#define _NUE_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class NuEInteractionListGenerator : public InteractionListGeneratorI {

public :
  NuEInteractionListGenerator();
  NuEInteractionListGenerator(string config);
 ~NuEInteractionListGenerator();

  //-- implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  InteractionList * IMDInteractionList   (const InitialState & init_state) const;
  InteractionList * IMDAnnihilationInteractionList (const InitialState & init_state) const;
  InteractionList * NuEELInteractionList (const InitialState & init_state) const;

  void LoadConfig (void);

  bool fIsIMD;
  bool fIsIMDAnh;
};

}      // genie namespace
#endif // _NUE_INTERACTION_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::NuEKinematicsGenerator

\brief    Generates kinematics for neutrino-electron events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 13, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _NUE_KINEMATICS_GENERATOR_H_
#define _NUE_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class NuEKinematicsGenerator : public KineGeneratorWithCache {

public :
  NuEKinematicsGenerator();
  NuEKinematicsGenerator(string config);
 ~NuEKinematicsGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

public:

  //-- methods to load sub-algorithms and config data from the Registry
  void   LoadConfig (void);

  //-- overload KineGeneratorWithCache methods
  double ComputeMaxXSec (const Interaction * in) const;
  double Energy         (const Interaction * in) const;
};

}      // genie namespace
#endif // _NUE_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::NuEPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in neutrino-electron events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 13, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _NUE_PRIMARY_LEPTON_GENERATOR_H_
#define _NUE_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class NuEPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  NuEPrimaryLeptonGenerator();
  NuEPrimaryLeptonGenerator(string config);
 ~NuEPrimaryLeptonGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _NUE_PRIMARY_LEPTON_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::NuETargetRemnantGenerator

\brief    Generates all the non-primary lepton final state particles in
          neutrino-electron events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 17, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _NUE_TARGET_REMNANT_GENERATOR_H_
#define _NUE_TARGET_REMNANT_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class NuETargetRemnantGenerator : public EventRecordVisitorI {

public :
  NuETargetRemnantGenerator();
  NuETargetRemnantGenerator(string config);
 ~NuETargetRemnantGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * evrec) const;

private:
  void AddElectronNeutrino     (GHepRecord * evrec) const;
  void AddTargetNucleusRemnant (GHepRecord * evrec) const;
};

}      // genie namespace
#endif // _NUE_TARGET_REMNANT_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::NuEInteractionListGenerator", payloadCode, "@",
"genie::NuEKinematicsGenerator", payloadCode, "@",
"genie::NuEPrimaryLeptonGenerator", payloadCode, "@",
"genie::NuETargetRemnantGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhNuElEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhNuElEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhNuElEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhNuElEG() {
  TriggerDictionaryInitialization_libGPhNuElEG_Impl();
}
