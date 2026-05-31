// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDfrcEG
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
#include "DFRHadronicSystemGenerator.h"
#include "DFRInteractionListGenerator.h"
#include "DFRKinematicsGenerator.h"
#include "DFRPrimaryLeptonGenerator.h"

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
   static TClass *geniecLcLDFRHadronicSystemGenerator_Dictionary();
   static void geniecLcLDFRHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDFRHadronicSystemGenerator(void *p = nullptr);
   static void *newArray_geniecLcLDFRHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLDFRHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLDFRHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLDFRHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DFRHadronicSystemGenerator*)
   {
      ::genie::DFRHadronicSystemGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DFRHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DFRHadronicSystemGenerator", "", 28,
                  typeid(::genie::DFRHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDFRHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DFRHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLDFRHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLDFRHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLDFRHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDFRHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLDFRHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DFRHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DFRHadronicSystemGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DFRHadronicSystemGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDFRHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DFRHadronicSystemGenerator*>(nullptr))->GetClass();
      geniecLcLDFRHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDFRHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDFRInteractionListGenerator_Dictionary();
   static void geniecLcLDFRInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDFRInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLDFRInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLDFRInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLDFRInteractionListGenerator(void *p);
   static void destruct_geniecLcLDFRInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DFRInteractionListGenerator*)
   {
      ::genie::DFRInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DFRInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DFRInteractionListGenerator", "", 68,
                  typeid(::genie::DFRInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDFRInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DFRInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLDFRInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLDFRInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLDFRInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDFRInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLDFRInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DFRInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DFRInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DFRInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDFRInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DFRInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLDFRInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDFRInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDFRKinematicsGenerator_Dictionary();
   static void geniecLcLDFRKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDFRKinematicsGenerator(void *p = nullptr);
   static void *newArray_geniecLcLDFRKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLDFRKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLDFRKinematicsGenerator(void *p);
   static void destruct_geniecLcLDFRKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DFRKinematicsGenerator*)
   {
      ::genie::DFRKinematicsGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DFRKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DFRKinematicsGenerator", "", 120,
                  typeid(::genie::DFRKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDFRKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DFRKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLDFRKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLDFRKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLDFRKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDFRKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLDFRKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DFRKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DFRKinematicsGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DFRKinematicsGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDFRKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DFRKinematicsGenerator*>(nullptr))->GetClass();
      geniecLcLDFRKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDFRKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDFRPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLDFRPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDFRPrimaryLeptonGenerator(void *p = nullptr);
   static void *newArray_geniecLcLDFRPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLDFRPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLDFRPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLDFRPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DFRPrimaryLeptonGenerator*)
   {
      ::genie::DFRPrimaryLeptonGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DFRPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DFRPrimaryLeptonGenerator", "", 170,
                  typeid(::genie::DFRPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDFRPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DFRPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLDFRPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLDFRPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLDFRPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDFRPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLDFRPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DFRPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DFRPrimaryLeptonGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DFRPrimaryLeptonGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDFRPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DFRPrimaryLeptonGenerator*>(nullptr))->GetClass();
      geniecLcLDFRPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDFRPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDFRHadronicSystemGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRHadronicSystemGenerator : new ::genie::DFRHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLDFRHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRHadronicSystemGenerator[nElements] : new ::genie::DFRHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDFRHadronicSystemGenerator(void *p) {
      delete (static_cast<::genie::DFRHadronicSystemGenerator*>(p));
   }
   static void deleteArray_geniecLcLDFRHadronicSystemGenerator(void *p) {
      delete [] (static_cast<::genie::DFRHadronicSystemGenerator*>(p));
   }
   static void destruct_geniecLcLDFRHadronicSystemGenerator(void *p) {
      typedef ::genie::DFRHadronicSystemGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DFRHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDFRInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRInteractionListGenerator : new ::genie::DFRInteractionListGenerator;
   }
   static void *newArray_geniecLcLDFRInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRInteractionListGenerator[nElements] : new ::genie::DFRInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDFRInteractionListGenerator(void *p) {
      delete (static_cast<::genie::DFRInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLDFRInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::DFRInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLDFRInteractionListGenerator(void *p) {
      typedef ::genie::DFRInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DFRInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDFRKinematicsGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRKinematicsGenerator : new ::genie::DFRKinematicsGenerator;
   }
   static void *newArray_geniecLcLDFRKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRKinematicsGenerator[nElements] : new ::genie::DFRKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDFRKinematicsGenerator(void *p) {
      delete (static_cast<::genie::DFRKinematicsGenerator*>(p));
   }
   static void deleteArray_geniecLcLDFRKinematicsGenerator(void *p) {
      delete [] (static_cast<::genie::DFRKinematicsGenerator*>(p));
   }
   static void destruct_geniecLcLDFRKinematicsGenerator(void *p) {
      typedef ::genie::DFRKinematicsGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DFRKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDFRPrimaryLeptonGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRPrimaryLeptonGenerator : new ::genie::DFRPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLDFRPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DFRPrimaryLeptonGenerator[nElements] : new ::genie::DFRPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDFRPrimaryLeptonGenerator(void *p) {
      delete (static_cast<::genie::DFRPrimaryLeptonGenerator*>(p));
   }
   static void deleteArray_geniecLcLDFRPrimaryLeptonGenerator(void *p) {
      delete [] (static_cast<::genie::DFRPrimaryLeptonGenerator*>(p));
   }
   static void destruct_geniecLcLDFRPrimaryLeptonGenerator(void *p) {
      typedef ::genie::DFRPrimaryLeptonGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DFRPrimaryLeptonGenerator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhDfrcEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhDfrcEG) = RecordReadRules_libGPhDfrcEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhDfrcEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhDfrcEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Diffractive/EventGen",
"GENIE",
"GENIE/Physics/Diffractive/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Diffractive/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Diffractive/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDfrcEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  DFRHadronicSystemGenerator;}
namespace genie{class  DFRInteractionListGenerator;}
namespace genie{class  DFRKinematicsGenerator;}
namespace genie{class  DFRPrimaryLeptonGenerator;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDfrcEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::FRHadronicSystemGenerator

\brief    Generates the f/s hadronic system in diffractive interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _DIFFRACTIVE_HADRONIC_SYSTEM_GENERATOR_H_
#define _DIFFRACTIVE_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class DFRHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  DFRHadronicSystemGenerator();
  DFRHadronicSystemGenerator(string config);
 ~DFRHadronicSystemGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _DIFFRACTIVE_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DFRInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the interactions that can be generated by the
          DFR EventGenerator.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Feb 15, 2008

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _DIFFRACTIVE_INTERACTION_LIST_GENERATOR_H_
#define _DIFFRACTIVE_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class DFRInteractionListGenerator : public InteractionListGeneratorI {

public :
  DFRInteractionListGenerator();
  DFRInteractionListGenerator(string config);
 ~DFRInteractionListGenerator();

  //-- implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool fIsCC;
  bool fIsNC;
};

}      // genie namespace
#endif // _DIFFRACTIVE_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DFRKinematicsGenerator

\brief    Generates kinematics for diffractive reactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Feb 15, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _DIFFRACTIVE_KINEMATICS_GENERATOR_H_
#define _DIFFRACTIVE_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class DFRKinematicsGenerator : public KineGeneratorWithCache {

public :
  DFRKinematicsGenerator();
  DFRKinematicsGenerator(string config);
 ~DFRKinematicsGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig      (void);
  double ComputeMaxXSec  (const Interaction * interaction) const;

  double fBeta;
};

}      // genie namespace
#endif // _DIFFRACTIVE_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DFRPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in diffractive reactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Feb 15th, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _DIFFRACTIVE_PRIMARY_LEPTON_GENERATOR_H_
#define _DIFFRACTIVE_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class DFRPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  DFRPrimaryLeptonGenerator();
  DFRPrimaryLeptonGenerator(string config);
 ~DFRPrimaryLeptonGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _DIFFRACTIVE_PRIMARY_LEPTON_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::DFRHadronicSystemGenerator", payloadCode, "@",
"genie::DFRInteractionListGenerator", payloadCode, "@",
"genie::DFRKinematicsGenerator", payloadCode, "@",
"genie::DFRPrimaryLeptonGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDfrcEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDfrcEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDfrcEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDfrcEG() {
  TriggerDictionaryInitialization_libGPhDfrcEG_Impl();
}
