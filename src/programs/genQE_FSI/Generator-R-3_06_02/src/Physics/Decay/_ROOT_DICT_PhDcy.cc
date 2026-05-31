// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDcy
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
#include "BaryonResonanceDecayer.h"
#include "DarkSectorDecayer.h"
#include "Decayer.h"
#include "Pythia6Decayer2023.h"
#include "Pythia8Decayer2023.h"
#include "UnstableParticleDecayer.h"

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
   static TClass *geniecLcLDecayer_Dictionary();
   static void geniecLcLDecayer_TClassManip(TClass*);
   static void delete_geniecLcLDecayer(void *p);
   static void deleteArray_geniecLcLDecayer(void *p);
   static void destruct_geniecLcLDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Decayer*)
   {
      ::genie::Decayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Decayer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Decayer", "Decayer.h", 34,
                  typeid(::genie::Decayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDecayer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Decayer) );
      instance.SetDelete(&delete_geniecLcLDecayer);
      instance.SetDeleteArray(&deleteArray_geniecLcLDecayer);
      instance.SetDestructor(&destruct_geniecLcLDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Decayer*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Decayer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Decayer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDecayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Decayer*>(nullptr))->GetClass();
      geniecLcLDecayer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDecayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBaryonResonanceDecayer_Dictionary();
   static void geniecLcLBaryonResonanceDecayer_TClassManip(TClass*);
   static void *new_geniecLcLBaryonResonanceDecayer(void *p = nullptr);
   static void *newArray_geniecLcLBaryonResonanceDecayer(Long_t size, void *p);
   static void delete_geniecLcLBaryonResonanceDecayer(void *p);
   static void deleteArray_geniecLcLBaryonResonanceDecayer(void *p);
   static void destruct_geniecLcLBaryonResonanceDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BaryonResonanceDecayer*)
   {
      ::genie::BaryonResonanceDecayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BaryonResonanceDecayer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BaryonResonanceDecayer", "", 38,
                  typeid(::genie::BaryonResonanceDecayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBaryonResonanceDecayer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BaryonResonanceDecayer) );
      instance.SetNew(&new_geniecLcLBaryonResonanceDecayer);
      instance.SetNewArray(&newArray_geniecLcLBaryonResonanceDecayer);
      instance.SetDelete(&delete_geniecLcLBaryonResonanceDecayer);
      instance.SetDeleteArray(&deleteArray_geniecLcLBaryonResonanceDecayer);
      instance.SetDestructor(&destruct_geniecLcLBaryonResonanceDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BaryonResonanceDecayer*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BaryonResonanceDecayer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BaryonResonanceDecayer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBaryonResonanceDecayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::BaryonResonanceDecayer*>(nullptr))->GetClass();
      geniecLcLBaryonResonanceDecayer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBaryonResonanceDecayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDarkSectorDecayer_Dictionary();
   static void geniecLcLDarkSectorDecayer_TClassManip(TClass*);
   static void *new_geniecLcLDarkSectorDecayer(void *p = nullptr);
   static void *newArray_geniecLcLDarkSectorDecayer(Long_t size, void *p);
   static void delete_geniecLcLDarkSectorDecayer(void *p);
   static void deleteArray_geniecLcLDarkSectorDecayer(void *p);
   static void destruct_geniecLcLDarkSectorDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DarkSectorDecayer*)
   {
      ::genie::DarkSectorDecayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DarkSectorDecayer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DarkSectorDecayer", "", 141,
                  typeid(::genie::DarkSectorDecayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDarkSectorDecayer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DarkSectorDecayer) );
      instance.SetNew(&new_geniecLcLDarkSectorDecayer);
      instance.SetNewArray(&newArray_geniecLcLDarkSectorDecayer);
      instance.SetDelete(&delete_geniecLcLDarkSectorDecayer);
      instance.SetDeleteArray(&deleteArray_geniecLcLDarkSectorDecayer);
      instance.SetDestructor(&destruct_geniecLcLDarkSectorDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DarkSectorDecayer*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::DarkSectorDecayer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::DarkSectorDecayer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDarkSectorDecayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::DarkSectorDecayer*>(nullptr))->GetClass();
      geniecLcLDarkSectorDecayer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDarkSectorDecayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPythia6Decayer2023_Dictionary();
   static void geniecLcLPythia6Decayer2023_TClassManip(TClass*);
   static void *new_geniecLcLPythia6Decayer2023(void *p = nullptr);
   static void *newArray_geniecLcLPythia6Decayer2023(Long_t size, void *p);
   static void delete_geniecLcLPythia6Decayer2023(void *p);
   static void deleteArray_geniecLcLPythia6Decayer2023(void *p);
   static void destruct_geniecLcLPythia6Decayer2023(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Pythia6Decayer2023*)
   {
      ::genie::Pythia6Decayer2023 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Pythia6Decayer2023));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Pythia6Decayer2023", "", 288,
                  typeid(::genie::Pythia6Decayer2023), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPythia6Decayer2023_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Pythia6Decayer2023) );
      instance.SetNew(&new_geniecLcLPythia6Decayer2023);
      instance.SetNewArray(&newArray_geniecLcLPythia6Decayer2023);
      instance.SetDelete(&delete_geniecLcLPythia6Decayer2023);
      instance.SetDeleteArray(&deleteArray_geniecLcLPythia6Decayer2023);
      instance.SetDestructor(&destruct_geniecLcLPythia6Decayer2023);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Pythia6Decayer2023*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Pythia6Decayer2023*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Pythia6Decayer2023*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPythia6Decayer2023_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Pythia6Decayer2023*>(nullptr))->GetClass();
      geniecLcLPythia6Decayer2023_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPythia6Decayer2023_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPythia8Decayer2023_Dictionary();
   static void geniecLcLPythia8Decayer2023_TClassManip(TClass*);
   static void *new_geniecLcLPythia8Decayer2023(void *p = nullptr);
   static void *newArray_geniecLcLPythia8Decayer2023(Long_t size, void *p);
   static void delete_geniecLcLPythia8Decayer2023(void *p);
   static void deleteArray_geniecLcLPythia8Decayer2023(void *p);
   static void destruct_geniecLcLPythia8Decayer2023(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Pythia8Decayer2023*)
   {
      ::genie::Pythia8Decayer2023 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Pythia8Decayer2023));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Pythia8Decayer2023", "", 349,
                  typeid(::genie::Pythia8Decayer2023), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPythia8Decayer2023_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Pythia8Decayer2023) );
      instance.SetNew(&new_geniecLcLPythia8Decayer2023);
      instance.SetNewArray(&newArray_geniecLcLPythia8Decayer2023);
      instance.SetDelete(&delete_geniecLcLPythia8Decayer2023);
      instance.SetDeleteArray(&deleteArray_geniecLcLPythia8Decayer2023);
      instance.SetDestructor(&destruct_geniecLcLPythia8Decayer2023);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Pythia8Decayer2023*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Pythia8Decayer2023*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Pythia8Decayer2023*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPythia8Decayer2023_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Pythia8Decayer2023*>(nullptr))->GetClass();
      geniecLcLPythia8Decayer2023_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPythia8Decayer2023_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLUnstableParticleDecayer_Dictionary();
   static void geniecLcLUnstableParticleDecayer_TClassManip(TClass*);
   static void *new_geniecLcLUnstableParticleDecayer(void *p = nullptr);
   static void *newArray_geniecLcLUnstableParticleDecayer(Long_t size, void *p);
   static void delete_geniecLcLUnstableParticleDecayer(void *p);
   static void deleteArray_geniecLcLUnstableParticleDecayer(void *p);
   static void destruct_geniecLcLUnstableParticleDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::UnstableParticleDecayer*)
   {
      ::genie::UnstableParticleDecayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::UnstableParticleDecayer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::UnstableParticleDecayer", "", 407,
                  typeid(::genie::UnstableParticleDecayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLUnstableParticleDecayer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::UnstableParticleDecayer) );
      instance.SetNew(&new_geniecLcLUnstableParticleDecayer);
      instance.SetNewArray(&newArray_geniecLcLUnstableParticleDecayer);
      instance.SetDelete(&delete_geniecLcLUnstableParticleDecayer);
      instance.SetDeleteArray(&deleteArray_geniecLcLUnstableParticleDecayer);
      instance.SetDestructor(&destruct_geniecLcLUnstableParticleDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::UnstableParticleDecayer*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::UnstableParticleDecayer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::UnstableParticleDecayer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLUnstableParticleDecayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::UnstableParticleDecayer*>(nullptr))->GetClass();
      geniecLcLUnstableParticleDecayer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLUnstableParticleDecayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLDecayer(void *p) {
      delete (static_cast<::genie::Decayer*>(p));
   }
   static void deleteArray_geniecLcLDecayer(void *p) {
      delete [] (static_cast<::genie::Decayer*>(p));
   }
   static void destruct_geniecLcLDecayer(void *p) {
      typedef ::genie::Decayer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Decayer

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBaryonResonanceDecayer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BaryonResonanceDecayer : new ::genie::BaryonResonanceDecayer;
   }
   static void *newArray_geniecLcLBaryonResonanceDecayer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BaryonResonanceDecayer[nElements] : new ::genie::BaryonResonanceDecayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBaryonResonanceDecayer(void *p) {
      delete (static_cast<::genie::BaryonResonanceDecayer*>(p));
   }
   static void deleteArray_geniecLcLBaryonResonanceDecayer(void *p) {
      delete [] (static_cast<::genie::BaryonResonanceDecayer*>(p));
   }
   static void destruct_geniecLcLBaryonResonanceDecayer(void *p) {
      typedef ::genie::BaryonResonanceDecayer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::BaryonResonanceDecayer

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDarkSectorDecayer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DarkSectorDecayer : new ::genie::DarkSectorDecayer;
   }
   static void *newArray_geniecLcLDarkSectorDecayer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::DarkSectorDecayer[nElements] : new ::genie::DarkSectorDecayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDarkSectorDecayer(void *p) {
      delete (static_cast<::genie::DarkSectorDecayer*>(p));
   }
   static void deleteArray_geniecLcLDarkSectorDecayer(void *p) {
      delete [] (static_cast<::genie::DarkSectorDecayer*>(p));
   }
   static void destruct_geniecLcLDarkSectorDecayer(void *p) {
      typedef ::genie::DarkSectorDecayer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::DarkSectorDecayer

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPythia6Decayer2023(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Pythia6Decayer2023 : new ::genie::Pythia6Decayer2023;
   }
   static void *newArray_geniecLcLPythia6Decayer2023(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Pythia6Decayer2023[nElements] : new ::genie::Pythia6Decayer2023[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPythia6Decayer2023(void *p) {
      delete (static_cast<::genie::Pythia6Decayer2023*>(p));
   }
   static void deleteArray_geniecLcLPythia6Decayer2023(void *p) {
      delete [] (static_cast<::genie::Pythia6Decayer2023*>(p));
   }
   static void destruct_geniecLcLPythia6Decayer2023(void *p) {
      typedef ::genie::Pythia6Decayer2023 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Pythia6Decayer2023

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPythia8Decayer2023(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Pythia8Decayer2023 : new ::genie::Pythia8Decayer2023;
   }
   static void *newArray_geniecLcLPythia8Decayer2023(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Pythia8Decayer2023[nElements] : new ::genie::Pythia8Decayer2023[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPythia8Decayer2023(void *p) {
      delete (static_cast<::genie::Pythia8Decayer2023*>(p));
   }
   static void deleteArray_geniecLcLPythia8Decayer2023(void *p) {
      delete [] (static_cast<::genie::Pythia8Decayer2023*>(p));
   }
   static void destruct_geniecLcLPythia8Decayer2023(void *p) {
      typedef ::genie::Pythia8Decayer2023 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Pythia8Decayer2023

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLUnstableParticleDecayer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::UnstableParticleDecayer : new ::genie::UnstableParticleDecayer;
   }
   static void *newArray_geniecLcLUnstableParticleDecayer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::UnstableParticleDecayer[nElements] : new ::genie::UnstableParticleDecayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLUnstableParticleDecayer(void *p) {
      delete (static_cast<::genie::UnstableParticleDecayer*>(p));
   }
   static void deleteArray_geniecLcLUnstableParticleDecayer(void *p) {
      delete [] (static_cast<::genie::UnstableParticleDecayer*>(p));
   }
   static void destruct_geniecLcLUnstableParticleDecayer(void *p) {
      typedef ::genie::UnstableParticleDecayer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::UnstableParticleDecayer

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhDcy() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhDcy) = RecordReadRules_libGPhDcy();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhDcy));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhDcy_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Decay",
"GENIE",
"GENIE/Physics/Decay",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Decay",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Decay/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDcy dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/Decay/Decayer.h")))  Decayer;}
namespace genie{class  BaryonResonanceDecayer;}
namespace genie{class  DarkSectorDecayer;}
namespace genie{class  Pythia6Decayer2023;}
namespace genie{class  Pythia8Decayer2023;}
namespace genie{class  UnstableParticleDecayer;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDcy dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::BaryonResonanceDecayer

\brief    Baryon resonance decayer module.

          A simple resonance decay simulation built using resonance branching
          fraction data and an N-body phase space generator.
          Since the resonance can be produced off-the-mass-shell, decay
          channels with total-mass > W are suppressed.

          Is a concerete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 27, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _BARYON_RESONANCE_DECAYER_H_
#define _BARYON_RESONANCE_DECAYER_H_

#include <TGenPhaseSpace.h>
#include <TLorentzVector.h>

#include "Physics/Decay/Decayer.h"

namespace genie {

class GHepParticle;
class BaryonResonanceDecayer : protected Decayer {

public:
  BaryonResonanceDecayer();
  BaryonResonanceDecayer(string config);
  virtual ~BaryonResonanceDecayer();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

  virtual void LoadConfig    (void);

private:

  void           Initialize        (void) const;
  bool           IsHandled         (int pdgc) const;
  void           InhibitDecay      (int pdgc, TDecayChannel * ch=0) const;
  void           UnInhibitDecay    (int pdgc, TDecayChannel * ch=0) const;
  double         Weight            (void) const;
  bool           Decay             (int dec_part_id, GHepRecord * event) const;
  TDecayChannel* SelectDecayChannel(int dec_part_id, GHepRecord * event, bool & to_be_deleted ) const;
  // the flag to_be_deleted is referred to the returned decay channel 
  bool           DecayExclusive    (int dec_part_id, GHepRecord * event, TDecayChannel * ch) const;

  // Methods specific for Delta decay
  TObjArray *    EvolveDeltaBR        (int dec_part_pdgc, TObjArray * decay_list, double W) const;
  double         EvolveDeltaDecayWidth(int dec_part_pdgc, TDecayChannel * ch, double W) const;
  bool           AcceptPionDecay( TLorentzVector lab_pion, int dec_part_id, const GHepRecord * event ) const ;

  double         FinalStateMass    ( TDecayChannel * ch ) const;
  bool           IsPiNDecayChannel ( TDecayChannel * ch ) const;

  static bool IsDelta( int dec_part_pdgc ) ; 
  static bool HasEvolvedBRs( int dec_part_pdgc ) ; 

  // utilities for pion angular distribution with phi dependency 

  static double PionAngularDist( const double * x, const double * par ) ;
  static double MinusPionAngularDist( const double * x, const double * par ) {  // this is used to find the maxima of the previous function
    return -1. * BaryonResonanceDecayer::PionAngularDist( x, par ) ; 
  }

  double FindDistributionExtrema( unsigned int i /*q2_bin_index*/, 
				  bool find_maximum = false  ) const ;


  mutable TGenPhaseSpace fPhaseSpaceGenerator;
  mutable double         fWeight;

  bool   fDeltaThetaOnly ;

  double fMaxTolerance ;

  std::vector<double> fR33, fR31, fR3m1 ;
  std::vector<double*> fRParams ;  // this contains same parameter as fR33, fR31 and fR3m1 alingned by Q2 bin

  std::vector<double> fQ2Thresholds ;

  std::vector<double> fW_max ;

  double fFFScaling ;  // Scaling factor of the form factor of the Delta wrt to Q2

};

}         // genie namespace
#endif    // _BARYON_RESONANCE_DECAYER_H_
//____________________________________________________________________________
/*!
\class    genie::DarkSectorDecayer
\brief    Dark Sector decayer module.

          A simple decay simulation...
          ....
          Is a concerete implementation of the EventRecordVisitorI interface.

\author   Iker de Icaza <i.de-icaza-astiz \at sussex.ac.uk>
          University of Sussex

          Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July XX, 2020

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _DARK_SECTOR_DECAYER_H_
#define _DARK_SECTOR_DECAYER_H_

#include <TGenPhaseSpace.h>
#include <TLorentzVector.h>

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/ParticleData/PDGCodeList.h"
#include "Framework/GHEP/GHepStatus.h"


namespace genie {

  class GHepParticle;
  class DarkSectorDecayer : public EventRecordVisitorI {

    using DecayChannel = std::pair<std::vector<int>, double>;
    // first the vector of pdgs, second the decay amplitude

  public:

    DarkSectorDecayer();
    DarkSectorDecayer(string config);
    virtual ~DarkSectorDecayer();
    virtual void Configure(const Registry & config);
    virtual void Configure(string config);

    // Implement the EventRecordVisitorI interface
    void ProcessEventRecord(GHepRecord * event) const;
    
  protected:
    virtual void LoadConfig(void);

    bool ToBeDecayed(const GHepParticle & p) const;
    // comments later
    std::vector<GHepParticle> Decay(const GHepParticle & mother,
                                    const std::vector<int> & pdg_daughters) const;
    // this function will take care of the momentum conservation
    // the output particles cannot be inserted in the event record as they are
    // they need to be translated in space and time, according to the decay amplitude
    int SelectDecayChannel(const std::vector<DecayChannel> & dcs,
                           double total_amplitude) const;
    std::vector<DecayChannel> DarkMediatorDecayChannels(void) const;
    std::vector<DecayChannel> DarkNeutrinoDecayChannels( int mother_pdg ) const;
    void SetSpaceTime(std::vector<GHepParticle> & pp, const GHepParticle & mother,
                      double total_amplitude) const;
    
  private:

    static string ParticleGunKineAsString(const TLorentzVector & vec4 ) ;

    mutable TGenPhaseSpace fPhaseSpaceGenerator;

    double fEps2;
    std::array<double, 4> fMixing2s;
    double fAlpha_D;

    double fDNuMass, fDNuMass2;
    double fDMediatorMass, fDMediatorMass2;

  };

}         // genie namespace
#endif    // _DARK_SECTOR_DECAYER_H_
//____________________________________________________________________________
/*!

\class    genie::Decayer

\brief    Base class for decayer classes.
          Implements common configuration, allowing users to toggle on/off
          flags for particles and decay channels.
          Is a concerete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 14, 2018

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _DECAYER_H_
#define _DECAYER_H_

class TDecayChannel;

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/ParticleData/PDGCodeList.h"
#include "Framework/GHEP/GHepStatus.h"

namespace genie {

class GHepParticle;

class Decayer : public EventRecordVisitorI {

public:
  virtual ~Decayer();

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

protected:
  Decayer();
  Decayer(string name);
  Decayer(string name, string config);

  virtual void LoadConfig    (void);
  virtual bool ToBeDecayed   (int pdgc, GHepStatus_t ist) const;
  virtual bool IsUnstable    (int pdgc) const;
  virtual bool IsHandled     (int pdgc) const = 0;
  virtual void InhibitDecay  (int pdgc, TDecayChannel * dc=0) const = 0;
  virtual void UnInhibitDecay(int pdgc, TDecayChannel * dc=0) const = 0;

  bool        fGenerateWeighted;    ///< generate weighted or unweighted decays?
  bool        fRunBefHadroTransp;   ///< is invoked before or after FSI?
  PDGCodeList fParticlesToDecay;    ///< list of particles to be decayed
  PDGCodeList fParticlesNotToDecay; ///< list of particles for which decay is inhibited
};

}      // genie namespace
#endif // _DECAYER_H_
//____________________________________________________________________________
/*!

\class    genie::Pythia6Decayer2023

\brief    Interface to PYTHIA particle decayer. \n
          The Pythia6Decayer2023 is a concrete implementation of the Decayer
          interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  June 20, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _PYTHIA6_DECAYER_I_H_
#define _PYTHIA6_DECAYER_I_H_

#include "Framework/Conventions/GBuild.h"
#ifdef __GENIE_PYTHIA6_ENABLED__
#include <TPythia6.h>
#endif

#include "Physics/Decay/Decayer.h"

namespace genie {

class GHepParticle;
class Pythia6Decayer2023: protected Decayer {

public:
  Pythia6Decayer2023();
  Pythia6Decayer2023(string config);
  virtual ~Pythia6Decayer2023();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

private:

  void   Initialize             (void)                           const;
  bool   IsHandled              (int pdgc)                       const;
  void   InhibitDecay           (int pdgc, TDecayChannel * ch=0) const;
  void   UnInhibitDecay         (int pdgc, TDecayChannel * ch=0) const;
  bool   Decay                  (int ip, GHepRecord * event)     const;
  double SumOfBranchingRatios   (int kc)                         const;
  int    FindPythiaDecayChannel (int kc, TDecayChannel * ch)     const;
  bool   MatchDecayChannels     (int ic, TDecayChannel * ch)     const;

#ifdef __GENIE_PYTHIA6_ENABLED__
  mutable TPythia6 * fPythia;  ///< PYTHIA6 wrapper class
#endif
  mutable double     fWeight;
};

}         // genie namespace
#endif    // _PYTHIA6_DECAYER_H_
//____________________________________________________________________________
/*!

\class    genie::Pythia8Decayer2023

\brief    Interface to PYTHIA particle decayer. \n
          The Pythia8Decayer2023 is a concrete implementation of the Decayer
          interface.

\author   Robert Hatcher <rhatcher \at fnal.gov>
          Fermilab

\created  December 21, 2023

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _PYTHIA8DECAYER2023_H_
#define _PYTHIA8DECAYER2023_H_

#ifdef __GENIE_PYTHIA8_ENABLED__
#include "Framework/Utils/Pythia8Singleton.h"
#endif

#include "Physics/Decay/Decayer.h"

namespace genie {

class GHepParticle;
class Pythia8Decayer2023: protected Decayer {

public:
  Pythia8Decayer2023();
  Pythia8Decayer2023(string config);
  virtual ~Pythia8Decayer2023();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

private:

  void   Initialize             (void)                           const;
  bool   IsHandled              (int pdgc)                       const;
  void   InhibitDecay           (int pdgc, TDecayChannel * ch=0) const;
  void   UnInhibitDecay         (int pdgc, TDecayChannel * ch=0) const;
  bool   Decay                  (int ip, GHepRecord * event)     const;
  double SumOfBranchingRatios   (int kc)                         const;
  int    FindPythiaDecayChannel (int kc, TDecayChannel * ch)     const;
  bool   MatchDecayChannels     (int ic, TDecayChannel * ch)     const;

  mutable double     fWeight;
};

}         // genie namespace
#endif    // _PYTHIA8DECAYER2023_H_
//____________________________________________________________________________
/*!

\class    genie::UnstableParticleDecayer

\brief    A hook for concrete particle decayers in the chain of event
          processing modules.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 17, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _UNSTABLE_PARTICLE_DECAYER_H_
#define _UNSTABLE_PARTICLE_DECAYER_H_

#include <vector>

#include "Framework/EventGen/EventRecordVisitorI.h"

using std::vector;

namespace genie {

class GHepParticle;

class UnstableParticleDecayer : public EventRecordVisitorI {

public :

  UnstableParticleDecayer();
  UnstableParticleDecayer(string config);
  ~UnstableParticleDecayer();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void  LoadConfig (void);
  vector <const EventRecordVisitorI *> fDecayers;///< list of all specified decayers
};

}      // genie namespace
#endif // _UNSTABLE_PARTICLE_DECAYER_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::BaryonResonanceDecayer", payloadCode, "@",
"genie::DarkSectorDecayer", payloadCode, "@",
"genie::Decayer", payloadCode, "@",
"genie::Pythia6Decayer2023", payloadCode, "@",
"genie::Pythia8Decayer2023", payloadCode, "@",
"genie::UnstableParticleDecayer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDcy",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDcy_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDcy_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDcy() {
  TriggerDictionaryInitialization_libGPhDcy_Impl();
}
