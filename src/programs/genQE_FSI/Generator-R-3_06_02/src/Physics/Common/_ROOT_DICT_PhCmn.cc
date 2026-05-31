// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhCmn
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
#include "HadronicSystemGenerator.h"
#include "InitialStateAppender.h"
#include "KineGeneratorWithCache.h"
#include "NormGenerator.h"
#include "NormInteractionListGenerator.h"
#include "NormXSec.h"
#include "OutgoingDarkGenerator.h"
#include "PrimaryLeptonGenerator.h"
#include "PrimaryLeptonUtils.h"
#include "QvalueShifter.h"
#include "VertexGenerator.h"
#include "XSecLinearCombinations.h"
#include "XSecScaleI.h"
#include "XSecScaleMap.h"

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
   static TClass *geniecLcLHadronicSystemGenerator_Dictionary();
   static void geniecLcLHadronicSystemGenerator_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HadronicSystemGenerator*)
   {
      ::genie::HadronicSystemGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HadronicSystemGenerator", "", 33,
                  typeid(::genie::HadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HadronicSystemGenerator) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HadronicSystemGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HadronicSystemGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HadronicSystemGenerator*>(nullptr))->GetClass();
      geniecLcLHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLInitialStateAppender_Dictionary();
   static void geniecLcLInitialStateAppender_TClassManip(TClass*);
   static void *new_geniecLcLInitialStateAppender(void *p = nullptr);
   static void *newArray_geniecLcLInitialStateAppender(Long_t size, void *p);
   static void delete_geniecLcLInitialStateAppender(void *p);
   static void deleteArray_geniecLcLInitialStateAppender(void *p);
   static void destruct_geniecLcLInitialStateAppender(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::InitialStateAppender*)
   {
      ::genie::InitialStateAppender *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::InitialStateAppender));
      static ::ROOT::TGenericClassInfo 
         instance("genie::InitialStateAppender", "", 93,
                  typeid(::genie::InitialStateAppender), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLInitialStateAppender_Dictionary, isa_proxy, 0,
                  sizeof(::genie::InitialStateAppender) );
      instance.SetNew(&new_geniecLcLInitialStateAppender);
      instance.SetNewArray(&newArray_geniecLcLInitialStateAppender);
      instance.SetDelete(&delete_geniecLcLInitialStateAppender);
      instance.SetDeleteArray(&deleteArray_geniecLcLInitialStateAppender);
      instance.SetDestructor(&destruct_geniecLcLInitialStateAppender);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::InitialStateAppender*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::InitialStateAppender*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::InitialStateAppender*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLInitialStateAppender_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::InitialStateAppender*>(nullptr))->GetClass();
      geniecLcLInitialStateAppender_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLInitialStateAppender_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLKineGeneratorWithCache_Dictionary();
   static void geniecLcLKineGeneratorWithCache_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::KineGeneratorWithCache*)
   {
      ::genie::KineGeneratorWithCache *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::KineGeneratorWithCache));
      static ::ROOT::TGenericClassInfo 
         instance("genie::KineGeneratorWithCache", "", 165,
                  typeid(::genie::KineGeneratorWithCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLKineGeneratorWithCache_Dictionary, isa_proxy, 0,
                  sizeof(::genie::KineGeneratorWithCache) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::KineGeneratorWithCache*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::KineGeneratorWithCache*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::KineGeneratorWithCache*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLKineGeneratorWithCache_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::KineGeneratorWithCache*>(nullptr))->GetClass();
      geniecLcLKineGeneratorWithCache_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLKineGeneratorWithCache_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNormGenerator_Dictionary();
   static void geniecLcLNormGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNormGenerator(void *p = nullptr);
   static void *newArray_geniecLcLNormGenerator(Long_t size, void *p);
   static void delete_geniecLcLNormGenerator(void *p);
   static void deleteArray_geniecLcLNormGenerator(void *p);
   static void destruct_geniecLcLNormGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NormGenerator*)
   {
      ::genie::NormGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NormGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NormGenerator", "", 232,
                  typeid(::genie::NormGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNormGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NormGenerator) );
      instance.SetNew(&new_geniecLcLNormGenerator);
      instance.SetNewArray(&newArray_geniecLcLNormGenerator);
      instance.SetDelete(&delete_geniecLcLNormGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNormGenerator);
      instance.SetDestructor(&destruct_geniecLcLNormGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NormGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NormGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NormGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNormGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NormGenerator*>(nullptr))->GetClass();
      geniecLcLNormGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNormGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNormInteractionListGenerator_Dictionary();
   static void geniecLcLNormInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLNormInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLNormInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLNormInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLNormInteractionListGenerator(void *p);
   static void destruct_geniecLcLNormInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NormInteractionListGenerator*)
   {
      ::genie::NormInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NormInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NormInteractionListGenerator", "", 286,
                  typeid(::genie::NormInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNormInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NormInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLNormInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLNormInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLNormInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNormInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLNormInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NormInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NormInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NormInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNormInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NormInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLNormInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNormInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNormXSec_Dictionary();
   static void geniecLcLNormXSec_TClassManip(TClass*);
   static void *new_geniecLcLNormXSec(void *p = nullptr);
   static void *newArray_geniecLcLNormXSec(Long_t size, void *p);
   static void delete_geniecLcLNormXSec(void *p);
   static void deleteArray_geniecLcLNormXSec(void *p);
   static void destruct_geniecLcLNormXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NormXSec*)
   {
      ::genie::NormXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NormXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NormXSec", "", 343,
                  typeid(::genie::NormXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNormXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NormXSec) );
      instance.SetNew(&new_geniecLcLNormXSec);
      instance.SetNewArray(&newArray_geniecLcLNormXSec);
      instance.SetDelete(&delete_geniecLcLNormXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLNormXSec);
      instance.SetDestructor(&destruct_geniecLcLNormXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NormXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NormXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NormXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNormXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NormXSec*>(nullptr))->GetClass();
      geniecLcLNormXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNormXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLOutgoingDarkGenerator_Dictionary();
   static void geniecLcLOutgoingDarkGenerator_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::OutgoingDarkGenerator*)
   {
      ::genie::OutgoingDarkGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::OutgoingDarkGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::OutgoingDarkGenerator", "", 402,
                  typeid(::genie::OutgoingDarkGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLOutgoingDarkGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::OutgoingDarkGenerator) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::OutgoingDarkGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::OutgoingDarkGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::OutgoingDarkGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLOutgoingDarkGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::OutgoingDarkGenerator*>(nullptr))->GetClass();
      geniecLcLOutgoingDarkGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLOutgoingDarkGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLPrimaryLeptonGenerator_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PrimaryLeptonGenerator*)
   {
      ::genie::PrimaryLeptonGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PrimaryLeptonGenerator", "", 467,
                  typeid(::genie::PrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PrimaryLeptonGenerator) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PrimaryLeptonGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PrimaryLeptonGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PrimaryLeptonGenerator*>(nullptr))->GetClass();
      geniecLcLPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQvalueShifter_Dictionary();
   static void geniecLcLQvalueShifter_TClassManip(TClass*);
   static void *new_geniecLcLQvalueShifter(void *p = nullptr);
   static void *newArray_geniecLcLQvalueShifter(Long_t size, void *p);
   static void delete_geniecLcLQvalueShifter(void *p);
   static void deleteArray_geniecLcLQvalueShifter(void *p);
   static void destruct_geniecLcLQvalueShifter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QvalueShifter*)
   {
      ::genie::QvalueShifter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QvalueShifter));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QvalueShifter", "", 566,
                  typeid(::genie::QvalueShifter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQvalueShifter_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QvalueShifter) );
      instance.SetNew(&new_geniecLcLQvalueShifter);
      instance.SetNewArray(&newArray_geniecLcLQvalueShifter);
      instance.SetDelete(&delete_geniecLcLQvalueShifter);
      instance.SetDeleteArray(&deleteArray_geniecLcLQvalueShifter);
      instance.SetDestructor(&destruct_geniecLcLQvalueShifter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QvalueShifter*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::QvalueShifter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::QvalueShifter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQvalueShifter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::QvalueShifter*>(nullptr))->GetClass();
      geniecLcLQvalueShifter_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQvalueShifter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLVertexGenerator_Dictionary();
   static void geniecLcLVertexGenerator_TClassManip(TClass*);
   static void *new_geniecLcLVertexGenerator(void *p = nullptr);
   static void *newArray_geniecLcLVertexGenerator(Long_t size, void *p);
   static void delete_geniecLcLVertexGenerator(void *p);
   static void deleteArray_geniecLcLVertexGenerator(void *p);
   static void destruct_geniecLcLVertexGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::VertexGenerator*)
   {
      ::genie::VertexGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::VertexGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::VertexGenerator", "", 619,
                  typeid(::genie::VertexGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLVertexGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::VertexGenerator) );
      instance.SetNew(&new_geniecLcLVertexGenerator);
      instance.SetNewArray(&newArray_geniecLcLVertexGenerator);
      instance.SetDelete(&delete_geniecLcLVertexGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLVertexGenerator);
      instance.SetDestructor(&destruct_geniecLcLVertexGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::VertexGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::VertexGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::VertexGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLVertexGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::VertexGenerator*>(nullptr))->GetClass();
      geniecLcLVertexGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLVertexGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLXSecLinearCombinations_Dictionary();
   static void geniecLcLXSecLinearCombinations_TClassManip(TClass*);
   static void *new_geniecLcLXSecLinearCombinations(void *p = nullptr);
   static void *newArray_geniecLcLXSecLinearCombinations(Long_t size, void *p);
   static void delete_geniecLcLXSecLinearCombinations(void *p);
   static void deleteArray_geniecLcLXSecLinearCombinations(void *p);
   static void destruct_geniecLcLXSecLinearCombinations(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::XSecLinearCombinations*)
   {
      ::genie::XSecLinearCombinations *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::XSecLinearCombinations));
      static ::ROOT::TGenericClassInfo 
         instance("genie::XSecLinearCombinations", "", 674,
                  typeid(::genie::XSecLinearCombinations), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLXSecLinearCombinations_Dictionary, isa_proxy, 0,
                  sizeof(::genie::XSecLinearCombinations) );
      instance.SetNew(&new_geniecLcLXSecLinearCombinations);
      instance.SetNewArray(&newArray_geniecLcLXSecLinearCombinations);
      instance.SetDelete(&delete_geniecLcLXSecLinearCombinations);
      instance.SetDeleteArray(&deleteArray_geniecLcLXSecLinearCombinations);
      instance.SetDestructor(&destruct_geniecLcLXSecLinearCombinations);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::XSecLinearCombinations*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::XSecLinearCombinations*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::XSecLinearCombinations*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLXSecLinearCombinations_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::XSecLinearCombinations*>(nullptr))->GetClass();
      geniecLcLXSecLinearCombinations_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLXSecLinearCombinations_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLXSecScaleI_Dictionary();
   static void geniecLcLXSecScaleI_TClassManip(TClass*);
   static void delete_geniecLcLXSecScaleI(void *p);
   static void deleteArray_geniecLcLXSecScaleI(void *p);
   static void destruct_geniecLcLXSecScaleI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::XSecScaleI*)
   {
      ::genie::XSecScaleI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::XSecScaleI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::XSecScaleI", "", 730,
                  typeid(::genie::XSecScaleI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLXSecScaleI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::XSecScaleI) );
      instance.SetDelete(&delete_geniecLcLXSecScaleI);
      instance.SetDeleteArray(&deleteArray_geniecLcLXSecScaleI);
      instance.SetDestructor(&destruct_geniecLcLXSecScaleI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::XSecScaleI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::XSecScaleI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::XSecScaleI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLXSecScaleI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::XSecScaleI*>(nullptr))->GetClass();
      geniecLcLXSecScaleI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLXSecScaleI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLXSecScaleMap_Dictionary();
   static void geniecLcLXSecScaleMap_TClassManip(TClass*);
   static void *new_geniecLcLXSecScaleMap(void *p = nullptr);
   static void *newArray_geniecLcLXSecScaleMap(Long_t size, void *p);
   static void delete_geniecLcLXSecScaleMap(void *p);
   static void deleteArray_geniecLcLXSecScaleMap(void *p);
   static void destruct_geniecLcLXSecScaleMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::XSecScaleMap*)
   {
      ::genie::XSecScaleMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::XSecScaleMap));
      static ::ROOT::TGenericClassInfo 
         instance("genie::XSecScaleMap", "", 774,
                  typeid(::genie::XSecScaleMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLXSecScaleMap_Dictionary, isa_proxy, 0,
                  sizeof(::genie::XSecScaleMap) );
      instance.SetNew(&new_geniecLcLXSecScaleMap);
      instance.SetNewArray(&newArray_geniecLcLXSecScaleMap);
      instance.SetDelete(&delete_geniecLcLXSecScaleMap);
      instance.SetDeleteArray(&deleteArray_geniecLcLXSecScaleMap);
      instance.SetDestructor(&destruct_geniecLcLXSecScaleMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::XSecScaleMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::XSecScaleMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::XSecScaleMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLXSecScaleMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::XSecScaleMap*>(nullptr))->GetClass();
      geniecLcLXSecScaleMap_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLXSecScaleMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
} // end of namespace ROOT for class ::genie::HadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLInitialStateAppender(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::InitialStateAppender : new ::genie::InitialStateAppender;
   }
   static void *newArray_geniecLcLInitialStateAppender(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::InitialStateAppender[nElements] : new ::genie::InitialStateAppender[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLInitialStateAppender(void *p) {
      delete (static_cast<::genie::InitialStateAppender*>(p));
   }
   static void deleteArray_geniecLcLInitialStateAppender(void *p) {
      delete [] (static_cast<::genie::InitialStateAppender*>(p));
   }
   static void destruct_geniecLcLInitialStateAppender(void *p) {
      typedef ::genie::InitialStateAppender current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::InitialStateAppender

namespace ROOT {
} // end of namespace ROOT for class ::genie::KineGeneratorWithCache

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNormGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NormGenerator : new ::genie::NormGenerator;
   }
   static void *newArray_geniecLcLNormGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NormGenerator[nElements] : new ::genie::NormGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNormGenerator(void *p) {
      delete (static_cast<::genie::NormGenerator*>(p));
   }
   static void deleteArray_geniecLcLNormGenerator(void *p) {
      delete [] (static_cast<::genie::NormGenerator*>(p));
   }
   static void destruct_geniecLcLNormGenerator(void *p) {
      typedef ::genie::NormGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NormGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNormInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NormInteractionListGenerator : new ::genie::NormInteractionListGenerator;
   }
   static void *newArray_geniecLcLNormInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NormInteractionListGenerator[nElements] : new ::genie::NormInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNormInteractionListGenerator(void *p) {
      delete (static_cast<::genie::NormInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLNormInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::NormInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLNormInteractionListGenerator(void *p) {
      typedef ::genie::NormInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NormInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNormXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NormXSec : new ::genie::NormXSec;
   }
   static void *newArray_geniecLcLNormXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NormXSec[nElements] : new ::genie::NormXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNormXSec(void *p) {
      delete (static_cast<::genie::NormXSec*>(p));
   }
   static void deleteArray_geniecLcLNormXSec(void *p) {
      delete [] (static_cast<::genie::NormXSec*>(p));
   }
   static void destruct_geniecLcLNormXSec(void *p) {
      typedef ::genie::NormXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NormXSec

namespace ROOT {
} // end of namespace ROOT for class ::genie::OutgoingDarkGenerator

namespace ROOT {
} // end of namespace ROOT for class ::genie::PrimaryLeptonGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQvalueShifter(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::QvalueShifter : new ::genie::QvalueShifter;
   }
   static void *newArray_geniecLcLQvalueShifter(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::QvalueShifter[nElements] : new ::genie::QvalueShifter[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQvalueShifter(void *p) {
      delete (static_cast<::genie::QvalueShifter*>(p));
   }
   static void deleteArray_geniecLcLQvalueShifter(void *p) {
      delete [] (static_cast<::genie::QvalueShifter*>(p));
   }
   static void destruct_geniecLcLQvalueShifter(void *p) {
      typedef ::genie::QvalueShifter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::QvalueShifter

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLVertexGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::VertexGenerator : new ::genie::VertexGenerator;
   }
   static void *newArray_geniecLcLVertexGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::VertexGenerator[nElements] : new ::genie::VertexGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLVertexGenerator(void *p) {
      delete (static_cast<::genie::VertexGenerator*>(p));
   }
   static void deleteArray_geniecLcLVertexGenerator(void *p) {
      delete [] (static_cast<::genie::VertexGenerator*>(p));
   }
   static void destruct_geniecLcLVertexGenerator(void *p) {
      typedef ::genie::VertexGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::VertexGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLXSecLinearCombinations(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::XSecLinearCombinations : new ::genie::XSecLinearCombinations;
   }
   static void *newArray_geniecLcLXSecLinearCombinations(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::XSecLinearCombinations[nElements] : new ::genie::XSecLinearCombinations[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLXSecLinearCombinations(void *p) {
      delete (static_cast<::genie::XSecLinearCombinations*>(p));
   }
   static void deleteArray_geniecLcLXSecLinearCombinations(void *p) {
      delete [] (static_cast<::genie::XSecLinearCombinations*>(p));
   }
   static void destruct_geniecLcLXSecLinearCombinations(void *p) {
      typedef ::genie::XSecLinearCombinations current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::XSecLinearCombinations

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLXSecScaleI(void *p) {
      delete (static_cast<::genie::XSecScaleI*>(p));
   }
   static void deleteArray_geniecLcLXSecScaleI(void *p) {
      delete [] (static_cast<::genie::XSecScaleI*>(p));
   }
   static void destruct_geniecLcLXSecScaleI(void *p) {
      typedef ::genie::XSecScaleI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::XSecScaleI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLXSecScaleMap(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::XSecScaleMap : new ::genie::XSecScaleMap;
   }
   static void *newArray_geniecLcLXSecScaleMap(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::XSecScaleMap[nElements] : new ::genie::XSecScaleMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLXSecScaleMap(void *p) {
      delete (static_cast<::genie::XSecScaleMap*>(p));
   }
   static void deleteArray_geniecLcLXSecScaleMap(void *p) {
      delete [] (static_cast<::genie::XSecScaleMap*>(p));
   }
   static void destruct_geniecLcLXSecScaleMap(void *p) {
      typedef ::genie::XSecScaleMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::XSecScaleMap

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhCmn() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhCmn) = RecordReadRules_libGPhCmn();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhCmn));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhCmn_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Common",
"GENIE",
"GENIE/Physics/Common",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Common",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Common/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhCmn dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  HadronicSystemGenerator;}
namespace genie{class  InitialStateAppender;}
namespace genie{class  KineGeneratorWithCache;}
namespace genie{class  NormGenerator;}
namespace genie{class  NormInteractionListGenerator;}
namespace genie{class  NormXSec;}
namespace genie{class  OutgoingDarkGenerator;}
namespace genie{class  PrimaryLeptonGenerator;}
namespace genie{class  QvalueShifter;}
namespace genie{class  VertexGenerator;}
namespace genie{class  XSecLinearCombinations;}
namespace genie{class  XSecScaleI;}
namespace genie{class  XSecScaleMap;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhCmn dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::HadronicSystemGenerator

\brief    Abstract class. Is used to pass some commonly recurring methods to
          all concrete implementations of the EventRecordVisitorI interface
          generating the hadronic system for a specific processes (QEL,DIS,
          RES,...)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 16, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _HADRONIC_SYSTEM_GENERATOR_H_
#define _HADRONIC_SYSTEM_GENERATOR_H_

#include <TLorentzVector.h>
#include <TVector3.h>

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class HadronicSystemGenerator : public EventRecordVisitorI {

public :

  // Do not implement the EventRecordVisitorI interface.
  // Leave it for the concrete subclasses


  // Common methods for all concrete subclasses

  void AddTargetNucleusRemnant  (GHepRecord * event_rec) const;
  void AddFinalHadronicSyst     (GHepRecord * event_rec) const;
  void PreHadronTransportDecays (GHepRecord * event_rec) const;

  TLorentzVector Hadronic4pLAB       (GHepRecord * event_rec) const;
  TLorentzVector MomentumTransferLAB (GHepRecord * event_rec) const;
  TVector3       HCM2LAB             (GHepRecord * event_rec) const;
  int            HadronShowerCharge  (GHepRecord * event_rec) const;
  int            ResonanceCharge     (GHepRecord * event_rec) const;

protected:

  // Abstract base class
  HadronicSystemGenerator();
  HadronicSystemGenerator(string name);
  HadronicSystemGenerator(string name, string config);
 ~HadronicSystemGenerator();

  const EventRecordVisitorI * fPreINukeDecayer;
};

}      // genie namespace

#endif // _HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::InitialStateAppender

\brief    Appends the initial state information to the event record.
          Is a concerete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 04, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _INITIAL_STATE_APPENDER_H_
#define _INITIAL_STATE_APPENDER_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class InitialStateAppender : public EventRecordVisitorI {

public :

  InitialStateAppender();
  InitialStateAppender(string config);
  ~InitialStateAppender();

  //-- implement the EventRecordVisitorI interface

  void ProcessEventRecord(GHepRecord * event_rec) const;

private :

  void AddNeutrino       (GHepRecord * event_rec) const;
  void AddNucleus        (GHepRecord * event_rec) const;
  void AddStruckParticle (GHepRecord * event_rec) const;

};

}      // genie namespace

#endif // _INITIAL_STATE_APPENDER_H_
//____________________________________________________________________________
/*!

\class    genie::KineGeneratorWithCache

\brief    Abstract class. Provides a data caching mechanism for for concrete
          implementations of the EventRecordVisitorI interface, generating
          kinematics and wishing to cache maximum differential xsecs.

          This class provides some common implementation for handling
          (retrieving, creating, searching, adding to) the cache.
          The various super-classes should implement the ComputeMaxXSec(...)
          method for computing the maximum xsec in case it has not already
          being pushed into the cache at a previous iteration. \n
          
          Update May 15, 2022 IK: 
          It makes possible to cache several values having different keys. 
          The example of using this opportunity see in 
          the class QELEventGeneratorSM.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool \n
          Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research

\created  December 15, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _KINE_GENERATOR_WITH_CACHE_H_
#define _KINE_GENERATOR_WITH_CACHE_H_

#include <string>

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Utils/Range1.h"

using std::string;

namespace genie {

class CacheBranchFx;
class XSecAlgorithmI;

class KineGeneratorWithCache : public EventRecordVisitorI {

protected:
  KineGeneratorWithCache();
  KineGeneratorWithCache(string name);
  KineGeneratorWithCache(string name, string config);
  ~KineGeneratorWithCache();

  virtual double ComputeMaxXSec (const Interaction * in) const = 0;
  virtual double ComputeMaxXSec (const Interaction * in, const int nkey) const;
  virtual double MaxXSec        (GHepRecord * evrec, const int nkey=0) const;
  virtual double FindMaxXSec    (const Interaction * in, const int nkey=0) const;
  virtual void   CacheMaxXSec   (const Interaction * in, double xsec, const int nkey=0) const;
  virtual double Energy         (const Interaction * in) const;

  virtual CacheBranchFx * AccessCacheBranch (const Interaction * in, const int nkey=0) const;

  virtual void AssertXSecLimits (const Interaction * in, double xsec, double xsec_max) const;

  mutable const XSecAlgorithmI * fXSecModel;

  double fSafetyFactor;                     ///< ComputeMaxXSec -> ComputeMaxXSec * fSafetyFactor
  std::vector<double> vSafetyFactors;       ///< MaxXSec -> MaxXSec * fSafetyFactors[nkey]
  int fNumOfSafetyFactors;                  ///< Number of given safety factors
  std::vector<string> vInterpolatorTypes;   ///< Type of interpolator for each key in a branch
  int fNumOfInterpolatorTypes;              ///< Number of given interpolators types
  double fMaxXSecDiffTolerance;             ///< max{100*(xsec-maxxsec)/.5*(xsec+maxxsec)} if xsec>maxxsec
  double fEMin;                             ///< min E for which maxxsec is cached - forcing explicit calc.
  bool   fGenerateUniformly;                ///< uniform over allowed phase space + event weight?
};

}      // genie namespace

#endif // _KINE_GENERATOR_WITH_CACHE_H_
//____________________________________________________________________________
/*!

\class    genie::NormGenerator

\brief    Normalization channel. Its main property is a constant cross section 
          per nucleon over the whole energy range. For nu/charged probes this produces 
          NC/EM events with the probe & target "echoed" back as final state particles.

\ref      [1] GENIE docdb 297


\author   Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research

\created  May 16, 2022

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org      
    
*/
//____________________________________________________________________________

#ifndef _NORM_GENERATOR_H_
#define _NORM_GENERATOR_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/EventGen/EventRecordVisitorI.h"


namespace genie {

  class NormGenerator: public EventRecordVisitorI {

  public :
    NormGenerator();
    NormGenerator(string config);
    ~NormGenerator();

    // implement the EventRecordVisitorI interface
    void ProcessEventRecord(GHepRecord * event_rec) const;

    // overload the Algorithm::Configure() methods to load private data
    // members from configuration options
    void Configure(const Registry & config);
    void Configure(string config);

    // methods to load sub-algorithms and config data from the Registry
    void LoadConfig (void);



  private:
    mutable const XSecAlgorithmI * fXSecModel;
  };

}      // genie namespace
#endif // _NORM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::NormInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the Interaction (= event summary) objects that
          can be generated by the NormGenerator.

\author   Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research

\created  May 16, 2022

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
     
*/
//____________________________________________________________________________

#ifndef _NORM_INTERACTION_LIST_GENERATOR_H_
#define _NORM_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class NormInteractionListGenerator : public InteractionListGeneratorI {

public :

  NormInteractionListGenerator();
  NormInteractionListGenerator(string config);
  ~NormInteractionListGenerator();

  //-- implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);


};

}      // genie namespace

#endif // _NORM_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::NormXSec

\brief    Normalization channel. Its main property is a constant cross section 
          per nucleon over the whole energy range.

\ref      [1] GENIE docdb 297


\author   Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research

\created  May 16, 2022

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org      
    

*/
//____________________________________________________________________________

#ifndef _NORM_CROSS_SECTION_H_
#define _NORM_CROSS_SECTION_H_
#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {


class NormXSec : public XSecAlgorithmI {

public:
  NormXSec();
  NormXSec(string config);
  virtual ~NormXSec();

  // XSecAlgorithmI interface implementation
  double XSec             (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral         (const Interaction * i) const;
  bool   ValidProcess     (const Interaction * i) const;
  bool   ValidKinematics  (const Interaction * i) const;

  // Override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  void LoadConfig (void);
  double fNormScale;
};

}       // genie namespace

#endif
//____________________________________________________________________________
/*!

\class    genie::OutgoingDarkGenerator

\brief    Abstract class. Is used to pass common implementation to concrete
          implementations of the EventRecordVisitorI interface generating the
          primary lepton for a specific processes (QEL,DIS,RES,IMD,...)

\author   Joshua Berger <jberger \at physics.wisc.edu>
          University of Wisconsin-Madison

          Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _OUTGOING_DARK_GENERATOR_H_
#define _OUTGOING_DARK_GENERATOR_H_

class TVector3;
class TLorentzVector;

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class OutgoingDarkGenerator : public EventRecordVisitorI {

public :

  //-- Standard EventRecordVisitorI interface implementation
  virtual void ProcessEventRecord(GHepRecord * evrec) const;

  //-- Common methods for all concrete OutgoingDarkGenerator-type
  //   EventRecordVisitors
  virtual void     SetPolarization  (GHepRecord * ev) const;
  virtual TVector3 NucRestFrame2Lab (GHepRecord * ev) const;
  virtual void     AddToEventRecord (
              GHepRecord * ev, int pdgc, const TLorentzVector & p4) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

protected:

  //-- Abstract class - Can only be instantiated by its children.
  OutgoingDarkGenerator();
  OutgoingDarkGenerator(string name);
  OutgoingDarkGenerator(string name, string config);
  virtual ~OutgoingDarkGenerator();

  void LoadConfig(void);

  bool fApplyCoulombCorrection;
};

}      // genie namespace

#endif // _OUTGOING_DARK_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::PrimaryLeptonGenerator

\brief    Abstract class. Is used to pass common implementation to concrete
          implementations of the EventRecordVisitorI interface generating the
          primary lepton for a specific processes (QEL,DIS,RES,IMD,...)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _PRIMARY_LEPTON_GENERATOR_H_
#define _PRIMARY_LEPTON_GENERATOR_H_

class TVector3;
class TLorentzVector;

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class PrimaryLeptonGenerator : public EventRecordVisitorI {

public :

  //-- Standard EventRecordVisitorI interface implementation
  virtual void ProcessEventRecord(GHepRecord * evrec) const;

  //-- Common methods for all concrete PrimaryLeptonGenerator-type
  //   EventRecordVisitors
  virtual void     SetPolarization  (GHepRecord * ev) const;
  virtual TVector3 NucRestFrame2Lab (GHepRecord * ev) const;
  virtual void     AddToEventRecord (
              GHepRecord * ev, int pdgc, const TLorentzVector & p4) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

protected:

  //-- Abstract class - Can only be instantiated by its children.
  PrimaryLeptonGenerator();
  PrimaryLeptonGenerator(string name);
  PrimaryLeptonGenerator(string name, string config);
  virtual ~PrimaryLeptonGenerator();

  void LoadConfig(void);

  bool fApplyCoulombCorrection;
};

}      // genie namespace

#endif // _PRIMARY_LEPTON_GENERATOR_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils

\brief      Common functions used for handling generation of the primary
            lepton, regardless of whether the relevant class inherits from
            PrimaryLeptonGenerator or not.

\author     Steven Gardiner <gardiner \at fnal.gov>
            Fermi National Accelerator Laboratory

\created    May 01, 2020

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _PRIMARY_LEPTON_UTILS_H
#define _PRIMARY_LEPTON_UTILS_H

namespace genie {

class GHepRecord;

namespace utils {

  void SetPrimaryLeptonPolarization( GHepRecord* ev );

} // utils   namespace
} // genie   namespace

#endif // _PRIMARY_LEPTON_UTILS_H
//____________________________________________________________________________
/*!

\class    genie::QvalueShfiter

\brief    This class is responsible to compute a relative shift to a Qvalue

\author   Code contributed by J.Tena Vidal and M.Roda

\created  June, 2020

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _QVALUE_SHIFTER_H_
#define _QVALUE_SHIFTER_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/Interaction/Interaction.h"
#include "Framework/Interaction/Target.h"
#include <map>

using std::map; 

namespace genie {
  
  class QvalueShifter: public Algorithm {
    
  public:
    QvalueShifter();
    QvalueShifter(string config);
    virtual ~QvalueShifter();
    
    virtual double Shift( const Target & target ) const ; 
    virtual double Shift( const Interaction & interaction ) const ; 
    
    void Configure (const Registry & config);
    void Configure (string config);
    
  protected:
    
    // Load algorithm configuration
    void LoadConfig (void);
    
 private: 
    double fRelShiftDefault ; 
    std::map<int,double> fRelShift ; // map from pdf_target to the Qvalue relative shift 
    
  };
  
}       // genie namespace
#endif  // _QVALUE_SHIFTER_H_
//____________________________________________________________________________
/*!

\class    genie::VertexGenerator

\brief

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  June 16, 2007

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _VERTEX_GENERATOR_H_
#define _VERTEX_GENERATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/Interaction/Interaction.h"

namespace genie {

class VertexGenerator : public EventRecordVisitorI {

public :
  VertexGenerator();
  VertexGenerator(string config);
 ~VertexGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event_rec) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

  //-- Generate the vertex position
  //   public so other classes can reuse this code to generate a position
  TVector3 GenerateVertex(const Interaction * in,double A) const;

private:
  void  LoadConfig (void);

  int    fVtxGenMethod; ///< vtx generation method (0: uniform, 1: according to nuclear density [def])
  double fR0;           ///< parameter controlling nuclear sizes
};

}      // genie namespace
#endif // _VERTEX_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::XSecLinearCombinations

\brief    Computes the xsec as a linear combination of different XSecSlgorithmI
          See GENIE docdb 252

\author   Code contributed by J.Tena Vidal and M.Roda

\created  Mar 12, 2020

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _XSEC_LINEAR_COMBINATIONS_H_
#define _XSEC_LINEAR_COMBINATIONS_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class XSecLinearCombinations : public XSecAlgorithmI {

public:
  XSecLinearCombinations();
  XSecLinearCombinations(string config);
  virtual ~XSecLinearCombinations();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

 protected:

  // Load algorithm configuration
  void LoadConfig (void);

 private: 

  std::vector<const XSecAlgorithmI*> fXSections ;
  std::vector<double> fLinearCoefficients ;

};

}       // genie namespace
#endif  // _XSEC_LINEAR_COMBINATIONS_H_
//____________________________________________________________________________
/*!

\class    genie::XSecScaleI

\brief    This class is responsible to compute a scaling factor for the XSec

\author   Code contributed by J.Tena Vidal and M.Roda

\created  June, 2020

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _XSEC_SCALE_I_H_
#define _XSEC_SCALE_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/Interaction/Interaction.h"

namespace genie {
  
  class XSecScaleI: public Algorithm {
    
  public:    
    virtual ~XSecScaleI();
    // This function returns the scaling value for a given interaction:
    virtual double GetScaling( const Interaction & ) const = 0 ; 

  protected:
    XSecScaleI( string name, string config = "Default" );

    void Configure(const Registry & config) override ;
    virtual void Configure (string config) override ;
    
    virtual void LoadConfig(void) = 0 ;
    
  };
  
}       // genie namespace
#endif  // _XSEC_SCALE_I_H_
//____________________________________________________________________________
/*!

\class    genie::XSecScaleMap

\brief    This class is responsible to compute a scaling factor for the XSec

\author   Code contributed by J.Tena Vidal and M.Roda

\created  June, 2020

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _XSEC_SCALE_MAP_H_
#define _XSEC_SCALE_MAP_H_

#include "Physics/Common/XSecScaleI.h"
#include <map>

namespace genie {
  
  class XSecScaleMap: public XSecScaleI {
    
  public:
    XSecScaleMap();
    XSecScaleMap(string config);
    virtual ~XSecScaleMap();
    
    // This function returns the scaling value for a given interaction:
    virtual double GetScaling( const Interaction & ) const override ; 
    
  protected:
    
    // Load algorithm configuration
    virtual void LoadConfig (void) override ;
    
 private: 
    const XSecScaleI * fXSecScaleDefault ; 
    std::map<int,const XSecScaleI *> fXSecScaleMap ;

  };
  
}       // genie namespace
#endif  // _XSEC_SCALE_MAP_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::HadronicSystemGenerator", payloadCode, "@",
"genie::InitialStateAppender", payloadCode, "@",
"genie::KineGeneratorWithCache", payloadCode, "@",
"genie::NormGenerator", payloadCode, "@",
"genie::NormInteractionListGenerator", payloadCode, "@",
"genie::NormXSec", payloadCode, "@",
"genie::OutgoingDarkGenerator", payloadCode, "@",
"genie::PrimaryLeptonGenerator", payloadCode, "@",
"genie::QvalueShifter", payloadCode, "@",
"genie::VertexGenerator", payloadCode, "@",
"genie::XSecLinearCombinations", payloadCode, "@",
"genie::XSecScaleI", payloadCode, "@",
"genie::XSecScaleMap", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhCmn",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhCmn_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhCmn_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhCmn() {
  TriggerDictionaryInitialization_libGPhCmn_Impl();
}
