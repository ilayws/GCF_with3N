// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhIBDEG
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
#include "IBDHadronicSystemGenerator.h"
#include "IBDInteractionListGenerator.h"
#include "IBDKinematicsGenerator.h"
#include "IBDPrimaryLeptonGenerator.h"

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
   static TClass *geniecLcLIBDHadronicSystemGenerator_Dictionary();
   static void geniecLcLIBDHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLIBDHadronicSystemGenerator(void *p = nullptr);
   static void *newArray_geniecLcLIBDHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLIBDHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLIBDHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLIBDHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::IBDHadronicSystemGenerator*)
   {
      ::genie::IBDHadronicSystemGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::IBDHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::IBDHadronicSystemGenerator", "", 31,
                  typeid(::genie::IBDHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIBDHadronicSystemGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::genie::IBDHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLIBDHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLIBDHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLIBDHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLIBDHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLIBDHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::IBDHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::IBDHadronicSystemGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::IBDHadronicSystemGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIBDHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::IBDHadronicSystemGenerator*>(nullptr))->GetClass();
      geniecLcLIBDHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIBDHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLIBDInteractionListGenerator_Dictionary();
   static void geniecLcLIBDInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLIBDInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLIBDInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLIBDInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLIBDInteractionListGenerator(void *p);
   static void destruct_geniecLcLIBDInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::IBDInteractionListGenerator*)
   {
      ::genie::IBDInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::IBDInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::IBDInteractionListGenerator", "", 74,
                  typeid(::genie::IBDInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIBDInteractionListGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::genie::IBDInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLIBDInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLIBDInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLIBDInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLIBDInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLIBDInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::IBDInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::IBDInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::IBDInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIBDInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::IBDInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLIBDInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIBDInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLIBDKinematicsGenerator_Dictionary();
   static void geniecLcLIBDKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLIBDKinematicsGenerator(void *p = nullptr);
   static void *newArray_geniecLcLIBDKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLIBDKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLIBDKinematicsGenerator(void *p);
   static void destruct_geniecLcLIBDKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::IBDKinematicsGenerator*)
   {
      ::genie::IBDKinematicsGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::IBDKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::IBDKinematicsGenerator", "", 125,
                  typeid(::genie::IBDKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIBDKinematicsGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::genie::IBDKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLIBDKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLIBDKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLIBDKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLIBDKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLIBDKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::IBDKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::IBDKinematicsGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::IBDKinematicsGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIBDKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::IBDKinematicsGenerator*>(nullptr))->GetClass();
      geniecLcLIBDKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIBDKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLIBDPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLIBDPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLIBDPrimaryLeptonGenerator(void *p = nullptr);
   static void *newArray_geniecLcLIBDPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLIBDPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLIBDPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLIBDPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::IBDPrimaryLeptonGenerator*)
   {
      ::genie::IBDPrimaryLeptonGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::IBDPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::IBDPrimaryLeptonGenerator", "", 176,
                  typeid(::genie::IBDPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIBDPrimaryLeptonGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::genie::IBDPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLIBDPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLIBDPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLIBDPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLIBDPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLIBDPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::IBDPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::IBDPrimaryLeptonGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::IBDPrimaryLeptonGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIBDPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::IBDPrimaryLeptonGenerator*>(nullptr))->GetClass();
      geniecLcLIBDPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIBDPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLIBDHadronicSystemGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IBDHadronicSystemGenerator : new ::genie::IBDHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLIBDHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IBDHadronicSystemGenerator[nElements] : new ::genie::IBDHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLIBDHadronicSystemGenerator(void *p) {
      delete (static_cast<::genie::IBDHadronicSystemGenerator*>(p));
   }
   static void deleteArray_geniecLcLIBDHadronicSystemGenerator(void *p) {
      delete [] (static_cast<::genie::IBDHadronicSystemGenerator*>(p));
   }
   static void destruct_geniecLcLIBDHadronicSystemGenerator(void *p) {
      typedef ::genie::IBDHadronicSystemGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::IBDHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLIBDInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IBDInteractionListGenerator : new ::genie::IBDInteractionListGenerator;
   }
   static void *newArray_geniecLcLIBDInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IBDInteractionListGenerator[nElements] : new ::genie::IBDInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLIBDInteractionListGenerator(void *p) {
      delete (static_cast<::genie::IBDInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLIBDInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::IBDInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLIBDInteractionListGenerator(void *p) {
      typedef ::genie::IBDInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::IBDInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLIBDKinematicsGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IBDKinematicsGenerator : new ::genie::IBDKinematicsGenerator;
   }
   static void *newArray_geniecLcLIBDKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IBDKinematicsGenerator[nElements] : new ::genie::IBDKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLIBDKinematicsGenerator(void *p) {
      delete (static_cast<::genie::IBDKinematicsGenerator*>(p));
   }
   static void deleteArray_geniecLcLIBDKinematicsGenerator(void *p) {
      delete [] (static_cast<::genie::IBDKinematicsGenerator*>(p));
   }
   static void destruct_geniecLcLIBDKinematicsGenerator(void *p) {
      typedef ::genie::IBDKinematicsGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::IBDKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLIBDPrimaryLeptonGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IBDPrimaryLeptonGenerator : new ::genie::IBDPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLIBDPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::IBDPrimaryLeptonGenerator[nElements] : new ::genie::IBDPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLIBDPrimaryLeptonGenerator(void *p) {
      delete (static_cast<::genie::IBDPrimaryLeptonGenerator*>(p));
   }
   static void deleteArray_geniecLcLIBDPrimaryLeptonGenerator(void *p) {
      delete [] (static_cast<::genie::IBDPrimaryLeptonGenerator*>(p));
   }
   static void destruct_geniecLcLIBDPrimaryLeptonGenerator(void *p) {
      typedef ::genie::IBDPrimaryLeptonGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::IBDPrimaryLeptonGenerator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhIBDEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhIBDEG) = RecordReadRules_libGPhIBDEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhIBDEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhIBDEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/InverseBetaDecay/EventGen",
"GENIE",
"GENIE/Physics/InverseBetaDecay/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/InverseBetaDecay/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/InverseBetaDecay/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhIBDEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  IBDHadronicSystemGenerator;}
namespace genie{class  IBDInteractionListGenerator;}
namespace genie{class  IBDKinematicsGenerator;}
namespace genie{class  IBDPrimaryLeptonGenerator;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhIBDEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::IBDHadronicSystemGenerator

\brief    Generates the final state hadronic system in v IBD interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Corey Reed <cjreed \at nikhef.nl> - October 29, 2009
          using code from the QELKinematicGenerator written by
          Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 29, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _IBD_HADRONIC_SYSTEM_GENERATOR_H_
#define _IBD_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class IBDHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  IBDHadronicSystemGenerator();
  IBDHadronicSystemGenerator(string config);
  virtual ~IBDHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event_rec) const;

private:
  void AddRecoilBaryon    (GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _IBD_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::IBDInteractionListGenerator

\brief    Generates a list of all the interactions that can be generated by the
          VLE SV QEL Nu-Nucleon generator

\author   Corey Reed <cjreed \at nikhef.nl>
          Nikhef

\created  Jun 26, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _INVERSEBETADECAY_INTERACTION_GENERATOR_H_
#define _INVERSEBETADECAY_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

   class IBDInteractionListGenerator : public InteractionListGeneratorI {
      private:
	 void LoadConfigData(void);

      public :
	 IBDInteractionListGenerator();
	 IBDInteractionListGenerator(string config);
	 virtual ~IBDInteractionListGenerator();

	 //-- implement the InteractionListGeneratorI interface
	 InteractionList * CreateInteractionList(const InitialState & init) const;
	 
	 // overload the Algorithm::Configure() methods to load private data
	 // members from configuration options
	 void Configure(const Registry & config);
	 void Configure(string config);
   };

}      // genie namespace
#endif // _SVQELNUNUCLEON_INTERACTION_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::IBDKinematicsGenerator

\brief    Generates values for the kinematic variables describing IBD neutrino
          interaction events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Corey Reed <cjreed \at nikhef.nl> - October 29, 2009
          using code from the QELKinematicGenerator written by
          Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 29, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _IBD_KINEMATICS_GENERATOR_H_
#define _IBD_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class IBDKinematicsGenerator : public KineGeneratorWithCache {

public :
  IBDKinematicsGenerator();
  IBDKinematicsGenerator(string config);
  virtual ~IBDKinematicsGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig     (void);
  double ComputeMaxXSec (const Interaction * in) const;
};

}      // genie namespace
#endif // _IBD_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::IBDPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in v IBD interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Corey Reed <cjreed \at nikhef.nl> - October 29, 2009
          using code from the QELKinematicGenerator written by
          Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 29, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _IBD_PRIMARY_LEPTON_GENERATOR_H_
#define _IBD_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class IBDPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  IBDPrimaryLeptonGenerator();
  IBDPrimaryLeptonGenerator(string config);
  virtual ~IBDPrimaryLeptonGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _IBD_PRIMARY_LEPTON_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::IBDHadronicSystemGenerator", payloadCode, "@",
"genie::IBDInteractionListGenerator", payloadCode, "@",
"genie::IBDKinematicsGenerator", payloadCode, "@",
"genie::IBDPrimaryLeptonGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhIBDEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhIBDEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhIBDEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhIBDEG() {
  TriggerDictionaryInitialization_libGPhIBDEG_Impl();
}
