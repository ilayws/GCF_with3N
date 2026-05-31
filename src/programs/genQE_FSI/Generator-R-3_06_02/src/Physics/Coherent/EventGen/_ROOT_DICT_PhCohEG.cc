// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhCohEG
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
#include "CEvNSEventGenerator.h"
#include "CEvNSInteractionListGenerator.h"
#include "COHHadronicSystemGenerator.h"
#include "COHInteractionListGenerator.h"
#include "COHKinematicsGenerator.h"
#include "COHPrimaryLeptonGenerator.h"

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
   static TClass *geniecLcLCEvNSEventGenerator_Dictionary();
   static void geniecLcLCEvNSEventGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCEvNSEventGenerator(void *p = nullptr);
   static void *newArray_geniecLcLCEvNSEventGenerator(Long_t size, void *p);
   static void delete_geniecLcLCEvNSEventGenerator(void *p);
   static void deleteArray_geniecLcLCEvNSEventGenerator(void *p);
   static void destruct_geniecLcLCEvNSEventGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CEvNSEventGenerator*)
   {
      ::genie::CEvNSEventGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::CEvNSEventGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::CEvNSEventGenerator", "", 31,
                  typeid(::genie::CEvNSEventGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCEvNSEventGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::CEvNSEventGenerator) );
      instance.SetNew(&new_geniecLcLCEvNSEventGenerator);
      instance.SetNewArray(&newArray_geniecLcLCEvNSEventGenerator);
      instance.SetDelete(&delete_geniecLcLCEvNSEventGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCEvNSEventGenerator);
      instance.SetDestructor(&destruct_geniecLcLCEvNSEventGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CEvNSEventGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::CEvNSEventGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::CEvNSEventGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCEvNSEventGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::CEvNSEventGenerator*>(nullptr))->GetClass();
      geniecLcLCEvNSEventGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCEvNSEventGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCEvNSInteractionListGenerator_Dictionary();
   static void geniecLcLCEvNSInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCEvNSInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLCEvNSInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLCEvNSInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLCEvNSInteractionListGenerator(void *p);
   static void destruct_geniecLcLCEvNSInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CEvNSInteractionListGenerator*)
   {
      ::genie::CEvNSInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::CEvNSInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::CEvNSInteractionListGenerator", "", 93,
                  typeid(::genie::CEvNSInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCEvNSInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::CEvNSInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLCEvNSInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLCEvNSInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLCEvNSInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCEvNSInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLCEvNSInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CEvNSInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::CEvNSInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::CEvNSInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCEvNSInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::CEvNSInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLCEvNSInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCEvNSInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHHadronicSystemGenerator_Dictionary();
   static void geniecLcLCOHHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHHadronicSystemGenerator(void *p = nullptr);
   static void *newArray_geniecLcLCOHHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLCOHHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLCOHHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHHadronicSystemGenerator*)
   {
      ::genie::COHHadronicSystemGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHHadronicSystemGenerator", "", 135,
                  typeid(::genie::COHHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLCOHHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLCOHHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::COHHadronicSystemGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::COHHadronicSystemGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::COHHadronicSystemGenerator*>(nullptr))->GetClass();
      geniecLcLCOHHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHInteractionListGenerator_Dictionary();
   static void geniecLcLCOHInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLCOHInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLCOHInteractionListGenerator(void *p);
   static void destruct_geniecLcLCOHInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHInteractionListGenerator*)
   {
      ::genie::COHInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHInteractionListGenerator", "", 182,
                  typeid(::genie::COHInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLCOHInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLCOHInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::COHInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::COHInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::COHInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLCOHInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHKinematicsGenerator_Dictionary();
   static void geniecLcLCOHKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHKinematicsGenerator(void *p = nullptr);
   static void *newArray_geniecLcLCOHKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLCOHKinematicsGenerator(void *p);
   static void destruct_geniecLcLCOHKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHKinematicsGenerator*)
   {
      ::genie::COHKinematicsGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHKinematicsGenerator", "", 243,
                  typeid(::genie::COHKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLCOHKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLCOHKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::COHKinematicsGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::COHKinematicsGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::COHKinematicsGenerator*>(nullptr))->GetClass();
      geniecLcLCOHKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLCOHPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHPrimaryLeptonGenerator(void *p = nullptr);
   static void *newArray_geniecLcLCOHPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLCOHPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLCOHPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHPrimaryLeptonGenerator*)
   {
      ::genie::COHPrimaryLeptonGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHPrimaryLeptonGenerator", "", 324,
                  typeid(::genie::COHPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLCOHPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLCOHPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::COHPrimaryLeptonGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::COHPrimaryLeptonGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::COHPrimaryLeptonGenerator*>(nullptr))->GetClass();
      geniecLcLCOHPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCEvNSEventGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CEvNSEventGenerator : new ::genie::CEvNSEventGenerator;
   }
   static void *newArray_geniecLcLCEvNSEventGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CEvNSEventGenerator[nElements] : new ::genie::CEvNSEventGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCEvNSEventGenerator(void *p) {
      delete (static_cast<::genie::CEvNSEventGenerator*>(p));
   }
   static void deleteArray_geniecLcLCEvNSEventGenerator(void *p) {
      delete [] (static_cast<::genie::CEvNSEventGenerator*>(p));
   }
   static void destruct_geniecLcLCEvNSEventGenerator(void *p) {
      typedef ::genie::CEvNSEventGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::CEvNSEventGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCEvNSInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CEvNSInteractionListGenerator : new ::genie::CEvNSInteractionListGenerator;
   }
   static void *newArray_geniecLcLCEvNSInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CEvNSInteractionListGenerator[nElements] : new ::genie::CEvNSInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCEvNSInteractionListGenerator(void *p) {
      delete (static_cast<::genie::CEvNSInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLCEvNSInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::CEvNSInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLCEvNSInteractionListGenerator(void *p) {
      typedef ::genie::CEvNSInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::CEvNSInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHHadronicSystemGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHHadronicSystemGenerator : new ::genie::COHHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLCOHHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHHadronicSystemGenerator[nElements] : new ::genie::COHHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHHadronicSystemGenerator(void *p) {
      delete (static_cast<::genie::COHHadronicSystemGenerator*>(p));
   }
   static void deleteArray_geniecLcLCOHHadronicSystemGenerator(void *p) {
      delete [] (static_cast<::genie::COHHadronicSystemGenerator*>(p));
   }
   static void destruct_geniecLcLCOHHadronicSystemGenerator(void *p) {
      typedef ::genie::COHHadronicSystemGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHInteractionListGenerator : new ::genie::COHInteractionListGenerator;
   }
   static void *newArray_geniecLcLCOHInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHInteractionListGenerator[nElements] : new ::genie::COHInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHInteractionListGenerator(void *p) {
      delete (static_cast<::genie::COHInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLCOHInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::COHInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLCOHInteractionListGenerator(void *p) {
      typedef ::genie::COHInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHKinematicsGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHKinematicsGenerator : new ::genie::COHKinematicsGenerator;
   }
   static void *newArray_geniecLcLCOHKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHKinematicsGenerator[nElements] : new ::genie::COHKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHKinematicsGenerator(void *p) {
      delete (static_cast<::genie::COHKinematicsGenerator*>(p));
   }
   static void deleteArray_geniecLcLCOHKinematicsGenerator(void *p) {
      delete [] (static_cast<::genie::COHKinematicsGenerator*>(p));
   }
   static void destruct_geniecLcLCOHKinematicsGenerator(void *p) {
      typedef ::genie::COHKinematicsGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHPrimaryLeptonGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHPrimaryLeptonGenerator : new ::genie::COHPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLCOHPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHPrimaryLeptonGenerator[nElements] : new ::genie::COHPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHPrimaryLeptonGenerator(void *p) {
      delete (static_cast<::genie::COHPrimaryLeptonGenerator*>(p));
   }
   static void deleteArray_geniecLcLCOHPrimaryLeptonGenerator(void *p) {
      delete [] (static_cast<::genie::COHPrimaryLeptonGenerator*>(p));
   }
   static void destruct_geniecLcLCOHPrimaryLeptonGenerator(void *p) {
      typedef ::genie::COHPrimaryLeptonGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHPrimaryLeptonGenerator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhCohEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhCohEG) = RecordReadRules_libGPhCohEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhCohEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhCohEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Coherent/EventGen",
"GENIE",
"GENIE/Physics/Coherent/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Coherent/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Coherent/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhCohEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  CEvNSEventGenerator;}
namespace genie{class  CEvNSInteractionListGenerator;}
namespace genie{class  COHHadronicSystemGenerator;}
namespace genie{class  COHInteractionListGenerator;}
namespace genie{class  COHKinematicsGenerator;}
namespace genie{class  COHPrimaryLeptonGenerator;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhCohEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::CEvNSEventGenerator

\brief    Generates complete CEvNS events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 16, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _CEVNS_EVENT_GENERATOR_H_
#define _CEVNS_EVENT_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class XSecAlgorithmI;

class CEvNSEventGenerator : public EventRecordVisitorI {

public :
  CEvNSEventGenerator();
  CEvNSEventGenerator(string config);
 ~CEvNSEventGenerator();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

public:

  // Methods to load sub-algorithms and config data from the Registry
  void LoadConfig (void);

  // Event generation methods
  void GenerateKinematics    (GHepRecord * event) const;
  void AddFinalStateNeutrino (GHepRecord * event) const;
  void AddRecoilNucleus      (GHepRecord * event) const;

  mutable const XSecAlgorithmI * fXSecModel; ///<

  bool   fGenerateUniformly;    ///<
  double fSafetyFactor;         ///<
  double fMaxXSecDiffTolerance; ///<
};

}      // genie namespace

#endif // _CEVNS_EVENT_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::CEvNSInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the Interaction (= event summary) objects that
          can be generated by the CEvNSEventGenerator.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 16, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _CEVNS_INTERACTION_LIST_GENERATOR_H_
#define _CEVNS_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class CEvNSInteractionListGenerator : public InteractionListGeneratorI {
  
public :
  CEvNSInteractionListGenerator();
  CEvNSInteractionListGenerator(string config);
 ~CEvNSInteractionListGenerator();

  // Implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;
};

}      // genie namespace

#endif // _CEVNS_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::COHHadronicSystemGenerator

\brief    Generates the f/s hadronic system in v COH pi production interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _COH_HADRONIC_SYSTEM_GENERATOR_H_
#define _COH_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

  class XclsTag;

  class COHHadronicSystemGenerator : public HadronicSystemGenerator {

  public :
    COHHadronicSystemGenerator();
    COHHadronicSystemGenerator(string config);
    ~COHHadronicSystemGenerator();

    // implement the EventRecordVisitorI interface
    void ProcessEventRecord(GHepRecord * event_rec) const;
    void CalculateHadronicSystem_ReinSehgal(GHepRecord * event_rec) const;
    void CalculateHadronicSystem_BergerSehgal(GHepRecord * event_rec) const;
    void CalculateHadronicSystem_BergerSehgalFM(GHepRecord * event_rec) const;
    void CalculateHadronicSystem_AlvarezRuso(GHepRecord * event_rec) const;

  private:
    int getPionPDGCodeFromXclTag(const XclsTag& xcls_tag) const;
  };

}      // genie namespace
#endif // _COH_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::COHInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the Interaction (= event summary) objects that
          can be generated by the COH EventGenerator.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  December 19, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _COH_INTERACTION_LIST_GENERATOR_H_
#define _COH_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class COHInteractionListGenerator : public InteractionListGeneratorI {

public :

  COHInteractionListGenerator();
  COHInteractionListGenerator(string config);
  ~COHInteractionListGenerator();

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
  bool fPionProduction ;
  bool fGammaProduction ;
  bool fRhoProduction ;

};

}      // genie namespace

#endif // _COH_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::COHKinematicsGenerator

\brief    Generates values for the kinematic variables describing coherent
          neutrino-nucleus pion production events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _COH_KINEMATICS_GENERATOR_H_
#define _COH_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

class TF2;

namespace genie {

  class COHKinematicsGenerator : public KineGeneratorWithCache {

  public :
    COHKinematicsGenerator();
    COHKinematicsGenerator(string config);
    ~COHKinematicsGenerator();

    // implement the EventRecordVisitorI interface
    void ProcessEventRecord(GHepRecord * event_rec) const;

    // overload the Algorithm::Configure() methods to load private data
    // members from configuration options
    void Configure(const Registry & config);
    void Configure(string config);

    // methods to load sub-algorithms and config data from the Registry
    void LoadConfig (void);

    // different kinematics calculators for different models
    void   CalculateKin_ReinSehgal(GHepRecord * event_rec) const;
    void   CalculateKin_BergerSehgal(GHepRecord * event_rec) const;
    void   CalculateKin_BergerSehgalFM(GHepRecord * event_rec) const;
    void   CalculateKin_AlvarezRuso(GHepRecord * event_rec) const;
    void SetKinematics(const double E_l, const double theta_l, const double phi_l,
                       const double theta_pi, const double phi_pi,
                       const     Interaction* interaction, Kinematics* kinematics) const;
    bool CheckKinematics(const double E_l, const double theta_l,
                         const double phi_l, const double theta_pi,
                         const double phi_pi, const Interaction* interaction) const;

    // overload KineGeneratorWithCache method to compute max xsec
    double ComputeMaxXSec (const Interaction * in) const;
    double MaxXSec_ReinSehgal (const Interaction * in) const;
    double MaxXSec_BergerSehgal (const Interaction * in) const;
    double MaxXSec_BergerSehgalFM (const Interaction * in) const;
    double MaxXSec_AlvarezRuso (const Interaction * in) const;

    // overload KineGeneratorWithCache method to get energy
    double Energy         (const Interaction * in) const;

    // TODO: should fEnvelope and fRo be public? They look like they should be private
    mutable TF2 * fEnvelope; ///< 2-D envelope used for importance sampling
    double fRo;              ///< nuclear scale parameter

  private:
    double pionMass(const Interaction* in) const;
    void   throwOnTooManyIterations(unsigned int iters, GHepRecord* evrec) const;

    double fQ2Min;  ///< lower bound of integration for Q^2 in Berger-Sehgal Model
    double fQ2Max;  ///< upper bound of integration for Q^2 in Berger-Sehgal Model
    double fTMax;   ///< upper bound for t = (q - p_pi)^2
  };

}      // genie namespace
#endif // _COH_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::COHPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in v COH NC interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  September 26, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _COH_PRIMARY_LEPTON_GENERATOR_H_
#define _COH_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

  class COHPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

  public :

    COHPrimaryLeptonGenerator();
    COHPrimaryLeptonGenerator(string config);
    ~COHPrimaryLeptonGenerator();

    //-- implement the EventRecordVisitorI interface

    void ProcessEventRecord(GHepRecord * event_rec) const;

  private :

    void CalculatePrimaryLepton_AlvarezRuso(GHepRecord * event_rec) const;

  };

}      // genie namespace

#endif // _COH_PRIMARY_LEPTON_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::CEvNSEventGenerator", payloadCode, "@",
"genie::CEvNSInteractionListGenerator", payloadCode, "@",
"genie::COHHadronicSystemGenerator", payloadCode, "@",
"genie::COHInteractionListGenerator", payloadCode, "@",
"genie::COHKinematicsGenerator", payloadCode, "@",
"genie::COHPrimaryLeptonGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhCohEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhCohEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhCohEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhCohEG() {
  TriggerDictionaryInitialization_libGPhCohEG_Impl();
}
