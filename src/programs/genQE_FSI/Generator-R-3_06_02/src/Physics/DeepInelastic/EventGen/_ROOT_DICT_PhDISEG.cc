// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDISEG
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
#include "DISHadronicSystemGenerator.h"
#include "DISInteractionListGenerator.h"
#include "DISKinematicsGenerator.h"
#include "DISPrimaryLeptonGenerator.h"

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
   static TClass *geniecLcLDISHadronicSystemGenerator_Dictionary();
   static void geniecLcLDISHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDISHadronicSystemGenerator(void *p = nullptr);
   static void *newArray_geniecLcLDISHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLDISHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLDISHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLDISHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISHadronicSystemGenerator*)
   {
      ::genie::DISHadronicSystemGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISHadronicSystemGenerator", "", 28,
                  typeid(::genie::DISHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLDISHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLDISHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLDISHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLDISHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DISHadronicSystemGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DISHadronicSystemGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DISHadronicSystemGenerator*>(nullptr))->GetClass();
      geniecLcLDISHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDISInteractionListGenerator_Dictionary();
   static void geniecLcLDISInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDISInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLDISInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLDISInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLDISInteractionListGenerator(void *p);
   static void destruct_geniecLcLDISInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISInteractionListGenerator*)
   {
      ::genie::DISInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISInteractionListGenerator", "", 95,
                  typeid(::genie::DISInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLDISInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLDISInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLDISInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLDISInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DISInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DISInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DISInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLDISInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDISKinematicsGenerator_Dictionary();
   static void geniecLcLDISKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDISKinematicsGenerator(void *p = nullptr);
   static void *newArray_geniecLcLDISKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLDISKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLDISKinematicsGenerator(void *p);
   static void destruct_geniecLcLDISKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISKinematicsGenerator*)
   {
      ::genie::DISKinematicsGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISKinematicsGenerator", "", 158,
                  typeid(::genie::DISKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLDISKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLDISKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLDISKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLDISKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DISKinematicsGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DISKinematicsGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DISKinematicsGenerator*>(nullptr))->GetClass();
      geniecLcLDISKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDISPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLDISPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLDISPrimaryLeptonGenerator(void *p = nullptr);
   static void *newArray_geniecLcLDISPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLDISPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLDISPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLDISPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISPrimaryLeptonGenerator*)
   {
      ::genie::DISPrimaryLeptonGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISPrimaryLeptonGenerator", "", 207,
                  typeid(::genie::DISPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLDISPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLDISPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLDISPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLDISPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DISPrimaryLeptonGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DISPrimaryLeptonGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DISPrimaryLeptonGenerator*>(nullptr))->GetClass();
      geniecLcLDISPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISHadronicSystemGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DISHadronicSystemGenerator : new ::genie::DISHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLDISHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DISHadronicSystemGenerator[nElements] : new ::genie::DISHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISHadronicSystemGenerator(void *p) {
      delete (static_cast<::genie::DISHadronicSystemGenerator*>(p));
   }
   static void deleteArray_geniecLcLDISHadronicSystemGenerator(void *p) {
      delete [] (static_cast<::genie::DISHadronicSystemGenerator*>(p));
   }
   static void destruct_geniecLcLDISHadronicSystemGenerator(void *p) {
      typedef ::genie::DISHadronicSystemGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DISInteractionListGenerator : new ::genie::DISInteractionListGenerator;
   }
   static void *newArray_geniecLcLDISInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DISInteractionListGenerator[nElements] : new ::genie::DISInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISInteractionListGenerator(void *p) {
      delete (static_cast<::genie::DISInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLDISInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::DISInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLDISInteractionListGenerator(void *p) {
      typedef ::genie::DISInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISKinematicsGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DISKinematicsGenerator : new ::genie::DISKinematicsGenerator;
   }
   static void *newArray_geniecLcLDISKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DISKinematicsGenerator[nElements] : new ::genie::DISKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISKinematicsGenerator(void *p) {
      delete (static_cast<::genie::DISKinematicsGenerator*>(p));
   }
   static void deleteArray_geniecLcLDISKinematicsGenerator(void *p) {
      delete [] (static_cast<::genie::DISKinematicsGenerator*>(p));
   }
   static void destruct_geniecLcLDISKinematicsGenerator(void *p) {
      typedef ::genie::DISKinematicsGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISPrimaryLeptonGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DISPrimaryLeptonGenerator : new ::genie::DISPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLDISPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DISPrimaryLeptonGenerator[nElements] : new ::genie::DISPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISPrimaryLeptonGenerator(void *p) {
      delete (static_cast<::genie::DISPrimaryLeptonGenerator*>(p));
   }
   static void deleteArray_geniecLcLDISPrimaryLeptonGenerator(void *p) {
      delete [] (static_cast<::genie::DISPrimaryLeptonGenerator*>(p));
   }
   static void destruct_geniecLcLDISPrimaryLeptonGenerator(void *p) {
      typedef ::genie::DISPrimaryLeptonGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISPrimaryLeptonGenerator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhDISEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhDISEG) = RecordReadRules_libGPhDISEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhDISEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhDISEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/DeepInelastic/EventGen",
"GENIE",
"GENIE/Physics/DeepInelastic/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/DeepInelastic/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/DeepInelastic/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDISEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  DISHadronicSystemGenerator;}
namespace genie{class  DISInteractionListGenerator;}
namespace genie{class  DISKinematicsGenerator;}
namespace genie{class  DISPrimaryLeptonGenerator;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDISEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::DISHadronicSystemGenerator

\brief    Generates the final state hadronic system in v DIS interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _DIS_HADRONIC_SYSTEM_GENERATOR_H_
#define _DIS_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class DISHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  DISHadronicSystemGenerator();
  DISHadronicSystemGenerator(string config);
 ~DISHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void SimulateFormationZone    (GHepRecord * event_rec) const;

  void LoadConfig (void);

  const EventRecordVisitorI * fHadronizationModel;

  bool   fFilterPreFragmEntries;
  double fR0;          ///< param controling nuclear size
  double fNR;          ///< how far beyond the nuclear boundary does the particle tracker goes?
  double fct0pion;     ///< formation zone (c * formation time) - for pions
  double fct0nucleon;  ///< formation zone (c * formation time) - for nucleons
  double fK;           ///< param multiplying pT^2 in formation zone calculation
};

}      // genie namespace

#endif // _DIS_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DISInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generate a list of all the Interaction (= event summary) objects that
          can be generated by the DIS EventGenerator.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 13, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _DIS_INTERACTION_LIST_GENERATOR_H_
#define _DIS_INTERACTION_LIST_GENERATOR_H_

#include <map>

#include "Framework/EventGen/InteractionListGeneratorI.h"

using std::multimap;

namespace genie {

class Interaction;

class DISInteractionListGenerator : public InteractionListGeneratorI {

public :
  DISInteractionListGenerator();
  DISInteractionListGenerator(string config);
 ~DISInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  multimap<int,bool> GetHitQuarks(const Interaction * interaction) const;

  bool fIsCC;
  bool fIsNC;
  bool fIsEM;
  bool fSetHitQuark;
  bool fIsCharm;
};

}      // genie namespace

#endif // _DIS_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DISKinematicsGenerator

\brief    Generates values for the kinematic variables describing DIS v
          interaction events.
          Is a concrete implementation of the EventRecordVisitorI interface.

          Part of its implementation, related with the caching and retrieval of
          previously computed values, is inherited from the KineGeneratorWithCache
          abstract class.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _DIS_KINEMATICS_GENERATOR_H_
#define _DIS_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class DISKinematicsGenerator : public KineGeneratorWithCache {

public :
  DISKinematicsGenerator();
  DISKinematicsGenerator(string config);
  ~DISKinematicsGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig      (void);
  double ComputeMaxXSec  (const Interaction * interaction) const;
};

}      // genie namespace

#endif // _DIS_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::DISPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in v DIS interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _DIS_PRIMARY_LEPTON_GENERATOR_H_
#define _DIS_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class DISPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  DISPrimaryLeptonGenerator();
  DISPrimaryLeptonGenerator(string config);
  ~DISPrimaryLeptonGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _DIS_PRIMARY_LEPTON_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::DISHadronicSystemGenerator", payloadCode, "@",
"genie::DISInteractionListGenerator", payloadCode, "@",
"genie::DISKinematicsGenerator", payloadCode, "@",
"genie::DISPrimaryLeptonGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDISEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDISEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDISEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDISEG() {
  TriggerDictionaryInitialization_libGPhDISEG_Impl();
}
