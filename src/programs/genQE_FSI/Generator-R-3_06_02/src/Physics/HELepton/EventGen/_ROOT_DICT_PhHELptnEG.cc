// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhHELptnEG
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
#include "GLRESGenerator.h"
#include "GLRESWdecPythia6.h"
#include "GLRESWdecPythia8.h"
#include "HELeptonInteractionListGenerator.h"
#include "HELeptonKinematicsGenerator.h"
#include "HENuElGenerator.h"
#include "PhotonCOHGenerator.h"
#include "PhotonCOHWdecPythia6.h"
#include "PhotonCOHWdecPythia8.h"
#include "PhotonRESGenerator.h"
#include "PhotonRESWdecPythia6.h"
#include "PhotonRESWdecPythia8.h"

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
   static TClass *geniecLcLGLRESGenerator_Dictionary();
   static void geniecLcLGLRESGenerator_TClassManip(TClass*);
   static void *new_geniecLcLGLRESGenerator(void *p = nullptr);
   static void *newArray_geniecLcLGLRESGenerator(Long_t size, void *p);
   static void delete_geniecLcLGLRESGenerator(void *p);
   static void deleteArray_geniecLcLGLRESGenerator(void *p);
   static void destruct_geniecLcLGLRESGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GLRESGenerator*)
   {
      ::genie::GLRESGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GLRESGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GLRESGenerator", "", 30,
                  typeid(::genie::GLRESGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGLRESGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GLRESGenerator) );
      instance.SetNew(&new_geniecLcLGLRESGenerator);
      instance.SetNewArray(&newArray_geniecLcLGLRESGenerator);
      instance.SetDelete(&delete_geniecLcLGLRESGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLGLRESGenerator);
      instance.SetDestructor(&destruct_geniecLcLGLRESGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GLRESGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GLRESGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GLRESGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGLRESGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GLRESGenerator*>(nullptr))->GetClass();
      geniecLcLGLRESGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGLRESGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGLRESWdecPythia6_Dictionary();
   static void geniecLcLGLRESWdecPythia6_TClassManip(TClass*);
   static void *new_geniecLcLGLRESWdecPythia6(void *p = nullptr);
   static void *newArray_geniecLcLGLRESWdecPythia6(Long_t size, void *p);
   static void delete_geniecLcLGLRESWdecPythia6(void *p);
   static void deleteArray_geniecLcLGLRESWdecPythia6(void *p);
   static void destruct_geniecLcLGLRESWdecPythia6(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GLRESWdecPythia6*)
   {
      ::genie::GLRESWdecPythia6 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GLRESWdecPythia6));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GLRESWdecPythia6", "", 101,
                  typeid(::genie::GLRESWdecPythia6), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGLRESWdecPythia6_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GLRESWdecPythia6) );
      instance.SetNew(&new_geniecLcLGLRESWdecPythia6);
      instance.SetNewArray(&newArray_geniecLcLGLRESWdecPythia6);
      instance.SetDelete(&delete_geniecLcLGLRESWdecPythia6);
      instance.SetDeleteArray(&deleteArray_geniecLcLGLRESWdecPythia6);
      instance.SetDestructor(&destruct_geniecLcLGLRESWdecPythia6);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GLRESWdecPythia6*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GLRESWdecPythia6*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GLRESWdecPythia6*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGLRESWdecPythia6_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GLRESWdecPythia6*>(nullptr))->GetClass();
      geniecLcLGLRESWdecPythia6_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGLRESWdecPythia6_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGLRESWdecPythia8_Dictionary();
   static void geniecLcLGLRESWdecPythia8_TClassManip(TClass*);
   static void *new_geniecLcLGLRESWdecPythia8(void *p = nullptr);
   static void *newArray_geniecLcLGLRESWdecPythia8(Long_t size, void *p);
   static void delete_geniecLcLGLRESWdecPythia8(void *p);
   static void deleteArray_geniecLcLGLRESWdecPythia8(void *p);
   static void destruct_geniecLcLGLRESWdecPythia8(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GLRESWdecPythia8*)
   {
      ::genie::GLRESWdecPythia8 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GLRESWdecPythia8));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GLRESWdecPythia8", "", 191,
                  typeid(::genie::GLRESWdecPythia8), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGLRESWdecPythia8_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GLRESWdecPythia8) );
      instance.SetNew(&new_geniecLcLGLRESWdecPythia8);
      instance.SetNewArray(&newArray_geniecLcLGLRESWdecPythia8);
      instance.SetDelete(&delete_geniecLcLGLRESWdecPythia8);
      instance.SetDeleteArray(&deleteArray_geniecLcLGLRESWdecPythia8);
      instance.SetDestructor(&destruct_geniecLcLGLRESWdecPythia8);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GLRESWdecPythia8*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GLRESWdecPythia8*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GLRESWdecPythia8*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGLRESWdecPythia8_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GLRESWdecPythia8*>(nullptr))->GetClass();
      geniecLcLGLRESWdecPythia8_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGLRESWdecPythia8_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHELeptonInteractionListGenerator_Dictionary();
   static void geniecLcLHELeptonInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLHELeptonInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLHELeptonInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLHELeptonInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLHELeptonInteractionListGenerator(void *p);
   static void destruct_geniecLcLHELeptonInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HELeptonInteractionListGenerator*)
   {
      ::genie::HELeptonInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HELeptonInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HELeptonInteractionListGenerator", "", 261,
                  typeid(::genie::HELeptonInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHELeptonInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HELeptonInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLHELeptonInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLHELeptonInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLHELeptonInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLHELeptonInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLHELeptonInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HELeptonInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HELeptonInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HELeptonInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHELeptonInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HELeptonInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLHELeptonInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHELeptonInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHELeptonKinematicsGenerator_Dictionary();
   static void geniecLcLHELeptonKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLHELeptonKinematicsGenerator(void *p = nullptr);
   static void *newArray_geniecLcLHELeptonKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLHELeptonKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLHELeptonKinematicsGenerator(void *p);
   static void destruct_geniecLcLHELeptonKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HELeptonKinematicsGenerator*)
   {
      ::genie::HELeptonKinematicsGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HELeptonKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HELeptonKinematicsGenerator", "", 328,
                  typeid(::genie::HELeptonKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHELeptonKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HELeptonKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLHELeptonKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLHELeptonKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLHELeptonKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLHELeptonKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLHELeptonKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HELeptonKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HELeptonKinematicsGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HELeptonKinematicsGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHELeptonKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HELeptonKinematicsGenerator*>(nullptr))->GetClass();
      geniecLcLHELeptonKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHELeptonKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHENuElGenerator_Dictionary();
   static void geniecLcLHENuElGenerator_TClassManip(TClass*);
   static void *new_geniecLcLHENuElGenerator(void *p = nullptr);
   static void *newArray_geniecLcLHENuElGenerator(Long_t size, void *p);
   static void delete_geniecLcLHENuElGenerator(void *p);
   static void deleteArray_geniecLcLHENuElGenerator(void *p);
   static void destruct_geniecLcLHENuElGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HENuElGenerator*)
   {
      ::genie::HENuElGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HENuElGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HENuElGenerator", "", 388,
                  typeid(::genie::HENuElGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHENuElGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HENuElGenerator) );
      instance.SetNew(&new_geniecLcLHENuElGenerator);
      instance.SetNewArray(&newArray_geniecLcLHENuElGenerator);
      instance.SetDelete(&delete_geniecLcLHENuElGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLHENuElGenerator);
      instance.SetDestructor(&destruct_geniecLcLHENuElGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HENuElGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HENuElGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HENuElGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHENuElGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HENuElGenerator*>(nullptr))->GetClass();
      geniecLcLHENuElGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHENuElGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPhotonCOHGenerator_Dictionary();
   static void geniecLcLPhotonCOHGenerator_TClassManip(TClass*);
   static void *new_geniecLcLPhotonCOHGenerator(void *p = nullptr);
   static void *newArray_geniecLcLPhotonCOHGenerator(Long_t size, void *p);
   static void delete_geniecLcLPhotonCOHGenerator(void *p);
   static void deleteArray_geniecLcLPhotonCOHGenerator(void *p);
   static void destruct_geniecLcLPhotonCOHGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PhotonCOHGenerator*)
   {
      ::genie::PhotonCOHGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PhotonCOHGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PhotonCOHGenerator", "", 441,
                  typeid(::genie::PhotonCOHGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPhotonCOHGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PhotonCOHGenerator) );
      instance.SetNew(&new_geniecLcLPhotonCOHGenerator);
      instance.SetNewArray(&newArray_geniecLcLPhotonCOHGenerator);
      instance.SetDelete(&delete_geniecLcLPhotonCOHGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLPhotonCOHGenerator);
      instance.SetDestructor(&destruct_geniecLcLPhotonCOHGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PhotonCOHGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PhotonCOHGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PhotonCOHGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPhotonCOHGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PhotonCOHGenerator*>(nullptr))->GetClass();
      geniecLcLPhotonCOHGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPhotonCOHGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPhotonCOHWdecPythia6_Dictionary();
   static void geniecLcLPhotonCOHWdecPythia6_TClassManip(TClass*);
   static void *new_geniecLcLPhotonCOHWdecPythia6(void *p = nullptr);
   static void *newArray_geniecLcLPhotonCOHWdecPythia6(Long_t size, void *p);
   static void delete_geniecLcLPhotonCOHWdecPythia6(void *p);
   static void deleteArray_geniecLcLPhotonCOHWdecPythia6(void *p);
   static void destruct_geniecLcLPhotonCOHWdecPythia6(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PhotonCOHWdecPythia6*)
   {
      ::genie::PhotonCOHWdecPythia6 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PhotonCOHWdecPythia6));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PhotonCOHWdecPythia6", "", 510,
                  typeid(::genie::PhotonCOHWdecPythia6), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPhotonCOHWdecPythia6_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PhotonCOHWdecPythia6) );
      instance.SetNew(&new_geniecLcLPhotonCOHWdecPythia6);
      instance.SetNewArray(&newArray_geniecLcLPhotonCOHWdecPythia6);
      instance.SetDelete(&delete_geniecLcLPhotonCOHWdecPythia6);
      instance.SetDeleteArray(&deleteArray_geniecLcLPhotonCOHWdecPythia6);
      instance.SetDestructor(&destruct_geniecLcLPhotonCOHWdecPythia6);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PhotonCOHWdecPythia6*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PhotonCOHWdecPythia6*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PhotonCOHWdecPythia6*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPhotonCOHWdecPythia6_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PhotonCOHWdecPythia6*>(nullptr))->GetClass();
      geniecLcLPhotonCOHWdecPythia6_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPhotonCOHWdecPythia6_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPhotonCOHWdecPythia8_Dictionary();
   static void geniecLcLPhotonCOHWdecPythia8_TClassManip(TClass*);
   static void *new_geniecLcLPhotonCOHWdecPythia8(void *p = nullptr);
   static void *newArray_geniecLcLPhotonCOHWdecPythia8(Long_t size, void *p);
   static void delete_geniecLcLPhotonCOHWdecPythia8(void *p);
   static void deleteArray_geniecLcLPhotonCOHWdecPythia8(void *p);
   static void destruct_geniecLcLPhotonCOHWdecPythia8(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PhotonCOHWdecPythia8*)
   {
      ::genie::PhotonCOHWdecPythia8 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PhotonCOHWdecPythia8));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PhotonCOHWdecPythia8", "", 596,
                  typeid(::genie::PhotonCOHWdecPythia8), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPhotonCOHWdecPythia8_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PhotonCOHWdecPythia8) );
      instance.SetNew(&new_geniecLcLPhotonCOHWdecPythia8);
      instance.SetNewArray(&newArray_geniecLcLPhotonCOHWdecPythia8);
      instance.SetDelete(&delete_geniecLcLPhotonCOHWdecPythia8);
      instance.SetDeleteArray(&deleteArray_geniecLcLPhotonCOHWdecPythia8);
      instance.SetDestructor(&destruct_geniecLcLPhotonCOHWdecPythia8);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PhotonCOHWdecPythia8*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PhotonCOHWdecPythia8*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PhotonCOHWdecPythia8*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPhotonCOHWdecPythia8_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PhotonCOHWdecPythia8*>(nullptr))->GetClass();
      geniecLcLPhotonCOHWdecPythia8_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPhotonCOHWdecPythia8_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPhotonRESGenerator_Dictionary();
   static void geniecLcLPhotonRESGenerator_TClassManip(TClass*);
   static void *new_geniecLcLPhotonRESGenerator(void *p = nullptr);
   static void *newArray_geniecLcLPhotonRESGenerator(Long_t size, void *p);
   static void delete_geniecLcLPhotonRESGenerator(void *p);
   static void deleteArray_geniecLcLPhotonRESGenerator(void *p);
   static void destruct_geniecLcLPhotonRESGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PhotonRESGenerator*)
   {
      ::genie::PhotonRESGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PhotonRESGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PhotonRESGenerator", "", 666,
                  typeid(::genie::PhotonRESGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPhotonRESGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PhotonRESGenerator) );
      instance.SetNew(&new_geniecLcLPhotonRESGenerator);
      instance.SetNewArray(&newArray_geniecLcLPhotonRESGenerator);
      instance.SetDelete(&delete_geniecLcLPhotonRESGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLPhotonRESGenerator);
      instance.SetDestructor(&destruct_geniecLcLPhotonRESGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PhotonRESGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PhotonRESGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PhotonRESGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPhotonRESGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PhotonRESGenerator*>(nullptr))->GetClass();
      geniecLcLPhotonRESGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPhotonRESGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPhotonRESWdecPythia6_Dictionary();
   static void geniecLcLPhotonRESWdecPythia6_TClassManip(TClass*);
   static void *new_geniecLcLPhotonRESWdecPythia6(void *p = nullptr);
   static void *newArray_geniecLcLPhotonRESWdecPythia6(Long_t size, void *p);
   static void delete_geniecLcLPhotonRESWdecPythia6(void *p);
   static void deleteArray_geniecLcLPhotonRESWdecPythia6(void *p);
   static void destruct_geniecLcLPhotonRESWdecPythia6(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PhotonRESWdecPythia6*)
   {
      ::genie::PhotonRESWdecPythia6 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PhotonRESWdecPythia6));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PhotonRESWdecPythia6", "", 737,
                  typeid(::genie::PhotonRESWdecPythia6), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPhotonRESWdecPythia6_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PhotonRESWdecPythia6) );
      instance.SetNew(&new_geniecLcLPhotonRESWdecPythia6);
      instance.SetNewArray(&newArray_geniecLcLPhotonRESWdecPythia6);
      instance.SetDelete(&delete_geniecLcLPhotonRESWdecPythia6);
      instance.SetDeleteArray(&deleteArray_geniecLcLPhotonRESWdecPythia6);
      instance.SetDestructor(&destruct_geniecLcLPhotonRESWdecPythia6);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PhotonRESWdecPythia6*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PhotonRESWdecPythia6*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PhotonRESWdecPythia6*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPhotonRESWdecPythia6_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PhotonRESWdecPythia6*>(nullptr))->GetClass();
      geniecLcLPhotonRESWdecPythia6_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPhotonRESWdecPythia6_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPhotonRESWdecPythia8_Dictionary();
   static void geniecLcLPhotonRESWdecPythia8_TClassManip(TClass*);
   static void *new_geniecLcLPhotonRESWdecPythia8(void *p = nullptr);
   static void *newArray_geniecLcLPhotonRESWdecPythia8(Long_t size, void *p);
   static void delete_geniecLcLPhotonRESWdecPythia8(void *p);
   static void deleteArray_geniecLcLPhotonRESWdecPythia8(void *p);
   static void destruct_geniecLcLPhotonRESWdecPythia8(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PhotonRESWdecPythia8*)
   {
      ::genie::PhotonRESWdecPythia8 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PhotonRESWdecPythia8));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PhotonRESWdecPythia8", "", 829,
                  typeid(::genie::PhotonRESWdecPythia8), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPhotonRESWdecPythia8_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PhotonRESWdecPythia8) );
      instance.SetNew(&new_geniecLcLPhotonRESWdecPythia8);
      instance.SetNewArray(&newArray_geniecLcLPhotonRESWdecPythia8);
      instance.SetDelete(&delete_geniecLcLPhotonRESWdecPythia8);
      instance.SetDeleteArray(&deleteArray_geniecLcLPhotonRESWdecPythia8);
      instance.SetDestructor(&destruct_geniecLcLPhotonRESWdecPythia8);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PhotonRESWdecPythia8*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PhotonRESWdecPythia8*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PhotonRESWdecPythia8*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPhotonRESWdecPythia8_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PhotonRESWdecPythia8*>(nullptr))->GetClass();
      geniecLcLPhotonRESWdecPythia8_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPhotonRESWdecPythia8_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGLRESGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GLRESGenerator : new ::genie::GLRESGenerator;
   }
   static void *newArray_geniecLcLGLRESGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GLRESGenerator[nElements] : new ::genie::GLRESGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGLRESGenerator(void *p) {
      delete (static_cast<::genie::GLRESGenerator*>(p));
   }
   static void deleteArray_geniecLcLGLRESGenerator(void *p) {
      delete [] (static_cast<::genie::GLRESGenerator*>(p));
   }
   static void destruct_geniecLcLGLRESGenerator(void *p) {
      typedef ::genie::GLRESGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GLRESGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGLRESWdecPythia6(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GLRESWdecPythia6 : new ::genie::GLRESWdecPythia6;
   }
   static void *newArray_geniecLcLGLRESWdecPythia6(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GLRESWdecPythia6[nElements] : new ::genie::GLRESWdecPythia6[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGLRESWdecPythia6(void *p) {
      delete (static_cast<::genie::GLRESWdecPythia6*>(p));
   }
   static void deleteArray_geniecLcLGLRESWdecPythia6(void *p) {
      delete [] (static_cast<::genie::GLRESWdecPythia6*>(p));
   }
   static void destruct_geniecLcLGLRESWdecPythia6(void *p) {
      typedef ::genie::GLRESWdecPythia6 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GLRESWdecPythia6

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGLRESWdecPythia8(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GLRESWdecPythia8 : new ::genie::GLRESWdecPythia8;
   }
   static void *newArray_geniecLcLGLRESWdecPythia8(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GLRESWdecPythia8[nElements] : new ::genie::GLRESWdecPythia8[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGLRESWdecPythia8(void *p) {
      delete (static_cast<::genie::GLRESWdecPythia8*>(p));
   }
   static void deleteArray_geniecLcLGLRESWdecPythia8(void *p) {
      delete [] (static_cast<::genie::GLRESWdecPythia8*>(p));
   }
   static void destruct_geniecLcLGLRESWdecPythia8(void *p) {
      typedef ::genie::GLRESWdecPythia8 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GLRESWdecPythia8

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHELeptonInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HELeptonInteractionListGenerator : new ::genie::HELeptonInteractionListGenerator;
   }
   static void *newArray_geniecLcLHELeptonInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HELeptonInteractionListGenerator[nElements] : new ::genie::HELeptonInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHELeptonInteractionListGenerator(void *p) {
      delete (static_cast<::genie::HELeptonInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLHELeptonInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::HELeptonInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLHELeptonInteractionListGenerator(void *p) {
      typedef ::genie::HELeptonInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HELeptonInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHELeptonKinematicsGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HELeptonKinematicsGenerator : new ::genie::HELeptonKinematicsGenerator;
   }
   static void *newArray_geniecLcLHELeptonKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HELeptonKinematicsGenerator[nElements] : new ::genie::HELeptonKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHELeptonKinematicsGenerator(void *p) {
      delete (static_cast<::genie::HELeptonKinematicsGenerator*>(p));
   }
   static void deleteArray_geniecLcLHELeptonKinematicsGenerator(void *p) {
      delete [] (static_cast<::genie::HELeptonKinematicsGenerator*>(p));
   }
   static void destruct_geniecLcLHELeptonKinematicsGenerator(void *p) {
      typedef ::genie::HELeptonKinematicsGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HELeptonKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHENuElGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HENuElGenerator : new ::genie::HENuElGenerator;
   }
   static void *newArray_geniecLcLHENuElGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HENuElGenerator[nElements] : new ::genie::HENuElGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHENuElGenerator(void *p) {
      delete (static_cast<::genie::HENuElGenerator*>(p));
   }
   static void deleteArray_geniecLcLHENuElGenerator(void *p) {
      delete [] (static_cast<::genie::HENuElGenerator*>(p));
   }
   static void destruct_geniecLcLHENuElGenerator(void *p) {
      typedef ::genie::HENuElGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HENuElGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPhotonCOHGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonCOHGenerator : new ::genie::PhotonCOHGenerator;
   }
   static void *newArray_geniecLcLPhotonCOHGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonCOHGenerator[nElements] : new ::genie::PhotonCOHGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPhotonCOHGenerator(void *p) {
      delete (static_cast<::genie::PhotonCOHGenerator*>(p));
   }
   static void deleteArray_geniecLcLPhotonCOHGenerator(void *p) {
      delete [] (static_cast<::genie::PhotonCOHGenerator*>(p));
   }
   static void destruct_geniecLcLPhotonCOHGenerator(void *p) {
      typedef ::genie::PhotonCOHGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PhotonCOHGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPhotonCOHWdecPythia6(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonCOHWdecPythia6 : new ::genie::PhotonCOHWdecPythia6;
   }
   static void *newArray_geniecLcLPhotonCOHWdecPythia6(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonCOHWdecPythia6[nElements] : new ::genie::PhotonCOHWdecPythia6[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPhotonCOHWdecPythia6(void *p) {
      delete (static_cast<::genie::PhotonCOHWdecPythia6*>(p));
   }
   static void deleteArray_geniecLcLPhotonCOHWdecPythia6(void *p) {
      delete [] (static_cast<::genie::PhotonCOHWdecPythia6*>(p));
   }
   static void destruct_geniecLcLPhotonCOHWdecPythia6(void *p) {
      typedef ::genie::PhotonCOHWdecPythia6 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PhotonCOHWdecPythia6

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPhotonCOHWdecPythia8(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonCOHWdecPythia8 : new ::genie::PhotonCOHWdecPythia8;
   }
   static void *newArray_geniecLcLPhotonCOHWdecPythia8(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonCOHWdecPythia8[nElements] : new ::genie::PhotonCOHWdecPythia8[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPhotonCOHWdecPythia8(void *p) {
      delete (static_cast<::genie::PhotonCOHWdecPythia8*>(p));
   }
   static void deleteArray_geniecLcLPhotonCOHWdecPythia8(void *p) {
      delete [] (static_cast<::genie::PhotonCOHWdecPythia8*>(p));
   }
   static void destruct_geniecLcLPhotonCOHWdecPythia8(void *p) {
      typedef ::genie::PhotonCOHWdecPythia8 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PhotonCOHWdecPythia8

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPhotonRESGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonRESGenerator : new ::genie::PhotonRESGenerator;
   }
   static void *newArray_geniecLcLPhotonRESGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonRESGenerator[nElements] : new ::genie::PhotonRESGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPhotonRESGenerator(void *p) {
      delete (static_cast<::genie::PhotonRESGenerator*>(p));
   }
   static void deleteArray_geniecLcLPhotonRESGenerator(void *p) {
      delete [] (static_cast<::genie::PhotonRESGenerator*>(p));
   }
   static void destruct_geniecLcLPhotonRESGenerator(void *p) {
      typedef ::genie::PhotonRESGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PhotonRESGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPhotonRESWdecPythia6(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonRESWdecPythia6 : new ::genie::PhotonRESWdecPythia6;
   }
   static void *newArray_geniecLcLPhotonRESWdecPythia6(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonRESWdecPythia6[nElements] : new ::genie::PhotonRESWdecPythia6[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPhotonRESWdecPythia6(void *p) {
      delete (static_cast<::genie::PhotonRESWdecPythia6*>(p));
   }
   static void deleteArray_geniecLcLPhotonRESWdecPythia6(void *p) {
      delete [] (static_cast<::genie::PhotonRESWdecPythia6*>(p));
   }
   static void destruct_geniecLcLPhotonRESWdecPythia6(void *p) {
      typedef ::genie::PhotonRESWdecPythia6 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PhotonRESWdecPythia6

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPhotonRESWdecPythia8(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonRESWdecPythia8 : new ::genie::PhotonRESWdecPythia8;
   }
   static void *newArray_geniecLcLPhotonRESWdecPythia8(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhotonRESWdecPythia8[nElements] : new ::genie::PhotonRESWdecPythia8[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPhotonRESWdecPythia8(void *p) {
      delete (static_cast<::genie::PhotonRESWdecPythia8*>(p));
   }
   static void deleteArray_geniecLcLPhotonRESWdecPythia8(void *p) {
      delete [] (static_cast<::genie::PhotonRESWdecPythia8*>(p));
   }
   static void destruct_geniecLcLPhotonRESWdecPythia8(void *p) {
      typedef ::genie::PhotonRESWdecPythia8 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PhotonRESWdecPythia8

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhHELptnEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhHELptnEG) = RecordReadRules_libGPhHELptnEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhHELptnEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhHELptnEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/HELepton/EventGen",
"GENIE",
"GENIE/Physics/HELepton/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/HELepton/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/HELepton/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhHELptnEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  GLRESGenerator;}
namespace genie{class  GLRESWdecPythia6;}
namespace genie{class  GLRESWdecPythia8;}
namespace genie{class  HELeptonInteractionListGenerator;}
namespace genie{class  HELeptonKinematicsGenerator;}
namespace genie{class  HENuElGenerator;}
namespace genie{class  PhotonCOHGenerator;}
namespace genie{class  PhotonCOHWdecPythia6;}
namespace genie{class  PhotonCOHWdecPythia8;}
namespace genie{class  PhotonRESGenerator;}
namespace genie{class  PhotonRESWdecPythia6;}
namespace genie{class  PhotonRESWdecPythia8;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhHELptnEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::GLRESGenerator

\brief    Generator for glashow resonance.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GLASHOW_RESONANCE_GENERATOR_H_
#define _GLASHOW_RESONANCE_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

using namespace genie;

namespace genie {

class GLRESGenerator : public EventRecordVisitorI {

public :
  GLRESGenerator();
  GLRESGenerator(string config);
 ~GLRESGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  virtual void Configure(const Registry & config);
  virtual void Configure(string config);

private:

  void LoadConfig         (void);

  const EventRecordVisitorI * fWDecayer; ///< PYTHIA W decayer

};

}      // genie namespace
#endif // _GLASHOW_RESONANCE_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::GLRESWdecPythia6

\brief    Glashow resonance decay with pythia6.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC (Valencia)

\created  Dec 12, 2024

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GLASHOW_RESONANCE_WDEC_PYTHIA6_H_
#define _GLASHOW_RESONANCE_WDEC_PYTHIA6_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/Constants.h"
#include "Framework/Numerical/RandomGen.h"
#include "Framework/Numerical/MathUtils.h"
#include "Framework/GHEP/GHepRecord.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/GHEP/GHepFlags.h"
#include "Framework/ParticleData/PDGCodes.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Framework/ParticleData/PDGLibrary.h"
#include "Framework/EventGen/EVGThreadException.h"
#include "Framework/Utils/StringUtils.h"
#include "Physics/HELepton/XSection/Born.h"

#ifdef __GENIE_PYTHIA6_ENABLED__
#include <TPythia6.h>
#endif

using namespace genie;
using namespace genie::constants;
using namespace genie::utils::math;

namespace genie {

class GLRESWdecPythia6 : public EventRecordVisitorI {

public :
  GLRESWdecPythia6();
  GLRESWdecPythia6(string config);
 ~GLRESWdecPythia6();

  //-- implement the HadronizationModelI interface
  void ProcessEventRecord(GHepRecord * event) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool           Wdecay           (GHepRecord * event) const;

  void           Initialize       (void)               const;
  void           LoadConfig       (void);

  // PYTHIA physics configuration parameters used
  double fSSBarSuppression;       ///< ssbar suppression
  double fGaussianPt2;            ///< gaussian pt2 distribution width
  double fNonGaussianPt2Tail;     ///< non gaussian pt2 tail parameterization
  double fRemainingECutoff;       ///< remaining E cutoff stopping fragmentation
  double fDiQuarkSuppression;     ///< di-quark suppression parameter
  double fLightVMesonSuppression; ///< light vector meson suppression
  double fSVMesonSuppression;     ///< strange vector meson suppression
  double fLunda;                  ///< Lund a parameter
  double fLundb;                  ///< Lund b parameter
  double fLundaDiq;               ///< adjustment of Lund a for di-quark

  Born * born;

#ifdef __GENIE_PYTHIA6_ENABLED__
  mutable TPythia6 * fPythia;   ///< PYTHIA6 wrapper class
#endif

};

}      // genie namespace
#endif // _GLASHOW_RESONANCE_WDEC_PYTHIA6_H_
//____________________________________________________________________________
/*!

\class    genie::GLRESWdecPythia8

\brief    Glashow resonance decay with pythia8.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC (Valencia)

\created  Dec 12, 2024

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GLASHOW_RESONANCE_WDEC_PYTHIA8_H_
#define _GLASHOW_RESONANCE_WDEC_PYTHIA8_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/Constants.h"
#include "Framework/Numerical/RandomGen.h"
#include "Framework/Numerical/MathUtils.h"
#include "Framework/GHEP/GHepRecord.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/GHEP/GHepFlags.h"
#include "Framework/ParticleData/PDGCodes.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Framework/ParticleData/PDGLibrary.h"
#include "Framework/EventGen/EVGThreadException.h"
#include "Framework/Utils/StringUtils.h"
#include "Physics/HELepton/XSection/Born.h"

#ifdef __GENIE_PYTHIA8_ENABLED__
#include "Pythia8/Pythia.h"
#endif

using namespace genie;
using namespace genie::constants;
using namespace genie::utils::math;

namespace genie {

class GLRESWdecPythia8 : public EventRecordVisitorI {

public :
  GLRESWdecPythia8();
  GLRESWdecPythia8(string config);
 ~GLRESWdecPythia8();

  //-- implement the HadronizationModelI interface
  void ProcessEventRecord(GHepRecord * event) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool           Wdecay           (GHepRecord * event) const;

  void           Initialize       (void)               const;
  void           LoadConfig       (void);

  // PYTHIA physics configuration parameters used
  double fSSBarSuppression;       ///< ssbar suppression
  double fGaussianPt2;            ///< gaussian pt2 distribution width
  double fNonGaussianPt2Tail;     ///< non gaussian pt2 tail parameterization
  double fRemainingECutoff;       ///< remaining E cutoff stopping fragmentation
  double fDiQuarkSuppression;     ///< di-quark suppression parameter
  double fLightVMesonSuppression; ///< light vector meson suppression
  double fSVMesonSuppression;     ///< strange vector meson suppression
  double fLunda;                  ///< Lund a parameter
  double fLundb;                  ///< Lund b parameter
  double fLundaDiq;               ///< adjustment of Lund a for di-quark

  Born * born;

#ifdef __GENIE_PYTHIA8_ENABLED__
  mutable Pythia8::Pythia * fPythia;
#endif

};

}      // genie namespace
#endif // _GLASHOW_RESONANCE_WDEC_PYTHIA8_H_
//____________________________________________________________________________
/*!

\class    genie::HELeptonInteractionListGenerator

\brief    Interaction list generator in HELepton

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HE_LEPTON_INTERACTION_GENERATOR_H_
#define _HE_LEPTON_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class HELeptonInteractionListGenerator : public InteractionListGeneratorI {

public :
  HELeptonInteractionListGenerator();
  HELeptonInteractionListGenerator(string config);
 ~HELeptonInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  InteractionList * GLRESInteraction        (const InitialState & init_state) const;
  InteractionList * HENuElectronInteraction (const InitialState & init_state) const;
  InteractionList * PhotonRESInteraction    (const InitialState & init_state) const;
  InteractionList * PhotonCOHInteraction    (const InitialState & init_state) const;

  void LoadConfigData(void);
  
  bool fIsGLRESMu;
  bool fIsGLRESTau;
  bool fIsGLRESEle;
  bool fIsGLRESHad;
  bool fIsHENuElCC;
  bool fIsHENuElNC;
  bool fIsPhotonRESMu;
  bool fIsPhotonRESEle;
  bool fIsPhotonRESTau;
  bool fIsPhotonRESHad;
  bool fIsPhotonCOH;

};

}      // genie namespace

#endif // _HE_LEPTON_INTERACTION_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::HELeptonKinematicsGenerator

\brief    Kinematics generator for HELepton.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HE_LEPTON_KINEMATICS_GENERATOR_H_
#define _HE_LEPTON_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"

namespace genie {

class HELeptonKinematicsGenerator : public KineGeneratorWithCache {

public :
  HELeptonKinematicsGenerator();
  HELeptonKinematicsGenerator(string config);
 ~HELeptonKinematicsGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  //-- methods to load sub-algorithms and config data from the Registry
  void   LoadConfig (void);

  //-- overload KineGeneratorWithCache methods
  double ComputeMaxXSec (const Interaction * in) const;
  double Energy         (const Interaction * in) const;

  double fDeltaN1NuE;
  double fDeltaN1NuMu;
  double fDeltaN1NuTau;

};

}      // genie namespace
#endif // _HE_LEPTON_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::HENuElGenerator

\brief    Generator for high energy neutrino-electron scattering.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HE_NUEL_GENERATOR_H_
#define _HE_NUEL_GENERATOR_H_

#include "Framework/Conventions/GBuild.h"
#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Physics/HELepton/XSection/Born.h"

namespace genie {

class HENuElGenerator : public EventRecordVisitorI {

public :
  HENuElGenerator();
  HENuElGenerator(string config);
 ~HENuElGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig(void);

  Born * born;

};

}      // genie namespace
#endif // _GLASHOW_RESONANCE_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::PhotonCOHGenerator

\brief    Generator for W boson production.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PHOTON_COH_GENERATOR_H_
#define _PHOTON_COH_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

using namespace genie;

namespace genie {

class PhotonCOHGenerator : public EventRecordVisitorI {

public :
  PhotonCOHGenerator();
  PhotonCOHGenerator(string config);
 ~PhotonCOHGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  virtual void Configure(const Registry & config);
  virtual void Configure(string config);

private:

  void LoadConfig         (void);

  const EventRecordVisitorI * fWDecayer; ///< PYTHIA W decayer

};

}      // genie namespace
#endif // _PHOTON_COH_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::PhotonCOHWdecPythia6

\brief    PhotonCOH W decay with pythia6.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC (Valencia)

\created  Dec 12, 2024

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PHOTON_COH_WDEC_PYTHIA6_H_
#define _PHOTON_COH_WDEC_PYTHIA6_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/Constants.h"
#include "Framework/Numerical/RandomGen.h"
#include "Framework/Numerical/MathUtils.h"
#include "Framework/GHEP/GHepRecord.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/GHEP/GHepFlags.h"
#include "Framework/ParticleData/PDGCodes.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Framework/ParticleData/PDGLibrary.h"
#include "Framework/EventGen/EVGThreadException.h"

#ifdef __GENIE_PYTHIA6_ENABLED__
#include <TPythia6.h>
#endif

using namespace genie;
using namespace genie::constants;
using namespace genie::utils::math;

namespace genie {

class PhotonCOHWdecPythia6 : public EventRecordVisitorI {

public :
  PhotonCOHWdecPythia6();
  PhotonCOHWdecPythia6(string config);
 ~PhotonCOHWdecPythia6();

  //-- implement the HadronizationModelI interface
  void ProcessEventRecord(GHepRecord * event) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool           Wdecay           (GHepRecord * event) const;

  void           Initialize       (void)               const;
  void           LoadConfig       (void);

  // PYTHIA physics configuration parameters used
  double fSSBarSuppression;       ///< ssbar suppression
  double fGaussianPt2;            ///< gaussian pt2 distribution width
  double fNonGaussianPt2Tail;     ///< non gaussian pt2 tail parameterization
  double fRemainingECutoff;       ///< remaining E cutoff stopping fragmentation
  double fDiQuarkSuppression;     ///< di-quark suppression parameter
  double fLightVMesonSuppression; ///< light vector meson suppression
  double fSVMesonSuppression;     ///< strange vector meson suppression
  double fLunda;                  ///< Lund a parameter
  double fLundb;                  ///< Lund b parameter
  double fLundaDiq;               ///< adjustment of Lund a for di-quark

#ifdef __GENIE_PYTHIA6_ENABLED__
  mutable TPythia6 * fPythia;   ///< PYTHIA6 wrapper class
#endif

};

}      // genie namespace
#endif // _PHOTON_COH_WDEC_PYTHIA6_H_
//____________________________________________________________________________
/*!

\class    genie::PhotonCOHWdecPythia8

\brief    PhotonCOH W decay with pythia8.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC (Valencia)

\created  Dec 12, 2024

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PHOTON_COH_WDEC_PYTHIA8_H_
#define _PHOTON_COH_WDEC_PYTHIA8_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/Constants.h"
#include "Framework/Numerical/RandomGen.h"
#include "Framework/Numerical/MathUtils.h"
#include "Framework/GHEP/GHepRecord.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/GHEP/GHepFlags.h"
#include "Framework/ParticleData/PDGCodes.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Framework/ParticleData/PDGLibrary.h"
#include "Framework/EventGen/EVGThreadException.h"

#ifdef __GENIE_PYTHIA8_ENABLED__
#include "Framework/Utils/Pythia8Singleton.h"
#endif

using namespace genie;
using namespace genie::constants;
using namespace genie::utils::math;

namespace genie {

class PhotonCOHWdecPythia8 : public EventRecordVisitorI {

public :
  PhotonCOHWdecPythia8();
  PhotonCOHWdecPythia8(string config);
 ~PhotonCOHWdecPythia8();

  //-- implement the HadronizationModelI interface
  void ProcessEventRecord(GHepRecord * event) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool           Wdecay           (GHepRecord * event) const;

  void           Initialize       (void)               const;
  void           LoadConfig       (void);

  // PYTHIA physics configuration parameters used
  double fSSBarSuppression;       ///< ssbar suppression
  double fGaussianPt2;            ///< gaussian pt2 distribution width
  double fNonGaussianPt2Tail;     ///< non gaussian pt2 tail parameterization
  double fRemainingECutoff;       ///< remaining E cutoff stopping fragmentation
  double fDiQuarkSuppression;     ///< di-quark suppression parameter
  double fLightVMesonSuppression; ///< light vector meson suppression
  double fSVMesonSuppression;     ///< strange vector meson suppression
  double fLunda;                  ///< Lund a parameter
  double fLundb;                  ///< Lund b parameter
  double fLundaDiq;               ///< adjustment of Lund a for di-quark

#ifdef __GENIE_PYTHIA8_ENABLED__
  mutable Pythia8::Pythia * fPythia;
#endif

};

}      // genie namespace
#endif // _PHOTON_COH_WDEC_PYTHIA8_H_
//____________________________________________________________________________
/*!

\class    genie::PhotonRESGenerator

\brief    Generator for trident production.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC & Harvard University

\created  Dec 8, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PHOTON_RES_GENERATOR_H_
#define _PHOTON_RES_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

using namespace genie;

namespace genie {

class PhotonRESGenerator : public EventRecordVisitorI {

public :
  PhotonRESGenerator();
  PhotonRESGenerator(string config);
 ~PhotonRESGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  virtual void Configure(const Registry & config);
  virtual void Configure(string config);

private:

  void LoadConfig         (void);

  const EventRecordVisitorI * fWDecayer; ///< PYTHIA W decayer

};

}      // genie namespace
#endif // _PHOTON_RES_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::PhotonRESWdecPythia6

\brief    PhotonRES W decay with pythia6.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC (Valencia)

\created  Dec 12, 2024

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PHOTON_RES_WDEC_PYTHIA6_H_
#define _PHOTON_RES_WDEC_PYTHIA6_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/Constants.h"
#include "Framework/Numerical/RandomGen.h"
#include "Framework/Numerical/MathUtils.h"
#include "Framework/GHEP/GHepRecord.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/GHEP/GHepFlags.h"
#include "Framework/ParticleData/PDGCodes.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Framework/ParticleData/PDGLibrary.h"
#include "Framework/EventGen/EVGThreadException.h"
#include "Framework/Utils/StringUtils.h"
#include "Physics/HELepton/XSection/Born.h"

#ifdef __GENIE_PYTHIA6_ENABLED__
#include <TPythia6.h>
#endif

using namespace genie;
using namespace genie::constants;
using namespace genie::utils::math;

namespace genie {

class PhotonRESWdecPythia6 : public EventRecordVisitorI {

public :
  PhotonRESWdecPythia6();
  PhotonRESWdecPythia6(string config);
 ~PhotonRESWdecPythia6();

  //-- implement the HadronizationModelI interface
  void ProcessEventRecord(GHepRecord * event) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool           Wdecay           (GHepRecord * event) const;

  void           Initialize       (void)               const;
  void           LoadConfig       (void);

  // PYTHIA physics configuration parameters used
  double fSSBarSuppression;       ///< ssbar suppression
  double fGaussianPt2;            ///< gaussian pt2 distribution width
  double fNonGaussianPt2Tail;     ///< non gaussian pt2 tail parameterization
  double fRemainingECutoff;       ///< remaining E cutoff stopping fragmentation
  double fDiQuarkSuppression;     ///< di-quark suppression parameter
  double fLightVMesonSuppression; ///< light vector meson suppression
  double fSVMesonSuppression;     ///< strange vector meson suppression
  double fLunda;                  ///< Lund a parameter
  double fLundb;                  ///< Lund b parameter
  double fLundaDiq;               ///< adjustment of Lund a for di-quark

  double fQ2PDFmin;

  Born * born;

#ifdef __GENIE_PYTHIA6_ENABLED__
  mutable TPythia6 * fPythia;   ///< PYTHIA6 wrapper class
#endif

};

}      // genie namespace
#endif // _PHOTON_RES_WDEC_PYTHIA6_H_
//____________________________________________________________________________
/*!

\class    genie::PhotonRESWdecPythia8

\brief    PhotonRES W decay with pythia8.

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC (Valencia)

\created  Dec 12, 2024

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PHOTON_RES_WDEC_PYTHIA8_H_
#define _PHOTON_RES_WDEC_PYTHIA8_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/Constants.h"
#include "Framework/Numerical/RandomGen.h"
#include "Framework/Numerical/MathUtils.h"
#include "Framework/GHEP/GHepRecord.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/GHEP/GHepFlags.h"
#include "Framework/ParticleData/PDGCodes.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Framework/ParticleData/PDGLibrary.h"
#include "Framework/EventGen/EVGThreadException.h"
#include "Framework/Utils/StringUtils.h"
#include "Physics/HELepton/XSection/Born.h"

#ifdef __GENIE_PYTHIA8_ENABLED__
#include "Pythia8/Pythia.h"
#endif

using namespace genie;
using namespace genie::constants;
using namespace genie::utils::math;

namespace genie {

class PhotonRESWdecPythia8 : public EventRecordVisitorI {

public :
  PhotonRESWdecPythia8();
  PhotonRESWdecPythia8(string config);
 ~PhotonRESWdecPythia8();

  //-- implement the HadronizationModelI interface
  void ProcessEventRecord(GHepRecord * event) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool           Wdecay           (GHepRecord * event) const;

  void           Initialize       (void)               const;
  void           LoadConfig       (void);

  // PYTHIA physics configuration parameters used
  double fSSBarSuppression;       ///< ssbar suppression
  double fGaussianPt2;            ///< gaussian pt2 distribution width
  double fNonGaussianPt2Tail;     ///< non gaussian pt2 tail parameterization
  double fRemainingECutoff;       ///< remaining E cutoff stopping fragmentation
  double fDiQuarkSuppression;     ///< di-quark suppression parameter
  double fLightVMesonSuppression; ///< light vector meson suppression
  double fSVMesonSuppression;     ///< strange vector meson suppression
  double fLunda;                  ///< Lund a parameter
  double fLundb;                  ///< Lund b parameter
  double fLundaDiq;               ///< adjustment of Lund a for di-quark

  double fQ2PDFmin;

  Born * born;

#ifdef __GENIE_PYTHIA8_ENABLED__
  // we need to classes because we have to simulate anue+e->W- (N) and nue+e+>W+ (P) decays
  mutable Pythia8::Pythia * fPythiaP;
  mutable Pythia8::Pythia * fPythiaN;
#endif

};

}      // genie namespace
#endif // _PHOTON_RES_WDEC_PYTHIA8_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::GLRESGenerator", payloadCode, "@",
"genie::GLRESWdecPythia6", payloadCode, "@",
"genie::GLRESWdecPythia8", payloadCode, "@",
"genie::HELeptonInteractionListGenerator", payloadCode, "@",
"genie::HELeptonKinematicsGenerator", payloadCode, "@",
"genie::HENuElGenerator", payloadCode, "@",
"genie::PhotonCOHGenerator", payloadCode, "@",
"genie::PhotonCOHWdecPythia6", payloadCode, "@",
"genie::PhotonCOHWdecPythia8", payloadCode, "@",
"genie::PhotonRESGenerator", payloadCode, "@",
"genie::PhotonRESWdecPythia6", payloadCode, "@",
"genie::PhotonRESWdecPythia8", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhHELptnEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhHELptnEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhHELptnEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhHELptnEG() {
  TriggerDictionaryInitialization_libGPhHELptnEG_Impl();
}
