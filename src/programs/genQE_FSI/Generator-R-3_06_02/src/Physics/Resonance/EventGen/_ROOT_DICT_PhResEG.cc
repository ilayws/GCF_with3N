// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhResEG
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
#include "RESHadronicSystemGenerator.h"
#include "RESInteractionListGenerator.h"
#include "RESKinematicsGenerator.h"
#include "RESPrimaryLeptonGenerator.h"
#include "RSPPHadronicSystemGenerator.h"
#include "RSPPInteractionListGenerator.h"
#include "RSPPResonanceSelector.h"
#include "SPPEventGenerator.h"

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
   static TClass *geniecLcLRESHadronicSystemGenerator_Dictionary();
   static void geniecLcLRESHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRESHadronicSystemGenerator(void *p = nullptr);
   static void *newArray_geniecLcLRESHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLRESHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLRESHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLRESHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESHadronicSystemGenerator*)
   {
      ::genie::RESHadronicSystemGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESHadronicSystemGenerator", "", 37,
                  typeid(::genie::RESHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLRESHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLRESHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLRESHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLRESHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RESHadronicSystemGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RESHadronicSystemGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RESHadronicSystemGenerator*>(nullptr))->GetClass();
      geniecLcLRESHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRESInteractionListGenerator_Dictionary();
   static void geniecLcLRESInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRESInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLRESInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLRESInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLRESInteractionListGenerator(void *p);
   static void destruct_geniecLcLRESInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESInteractionListGenerator*)
   {
      ::genie::RESInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESInteractionListGenerator", "", 93,
                  typeid(::genie::RESInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLRESInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLRESInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLRESInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLRESInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RESInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RESInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RESInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLRESInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRESKinematicsGenerator_Dictionary();
   static void geniecLcLRESKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRESKinematicsGenerator(void *p = nullptr);
   static void *newArray_geniecLcLRESKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLRESKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLRESKinematicsGenerator(void *p);
   static void destruct_geniecLcLRESKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESKinematicsGenerator*)
   {
      ::genie::RESKinematicsGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESKinematicsGenerator", "", 149,
                  typeid(::genie::RESKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLRESKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLRESKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLRESKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLRESKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RESKinematicsGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RESKinematicsGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RESKinematicsGenerator*>(nullptr))->GetClass();
      geniecLcLRESKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRESPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLRESPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRESPrimaryLeptonGenerator(void *p = nullptr);
   static void *newArray_geniecLcLRESPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLRESPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLRESPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLRESPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESPrimaryLeptonGenerator*)
   {
      ::genie::RESPrimaryLeptonGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESPrimaryLeptonGenerator", "", 200,
                  typeid(::genie::RESPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLRESPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLRESPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLRESPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLRESPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RESPrimaryLeptonGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RESPrimaryLeptonGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RESPrimaryLeptonGenerator*>(nullptr))->GetClass();
      geniecLcLRESPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSPPHadronicSystemGenerator_Dictionary();
   static void geniecLcLRSPPHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRSPPHadronicSystemGenerator(void *p = nullptr);
   static void *newArray_geniecLcLRSPPHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLRSPPHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLRSPPHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLRSPPHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSPPHadronicSystemGenerator*)
   {
      ::genie::RSPPHadronicSystemGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSPPHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSPPHadronicSystemGenerator", "", 245,
                  typeid(::genie::RSPPHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSPPHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSPPHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLRSPPHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLRSPPHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLRSPPHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSPPHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLRSPPHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSPPHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSPPHadronicSystemGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSPPHadronicSystemGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSPPHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSPPHadronicSystemGenerator*>(nullptr))->GetClass();
      geniecLcLRSPPHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSPPHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSPPInteractionListGenerator_Dictionary();
   static void geniecLcLRSPPInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRSPPInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLRSPPInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLRSPPInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLRSPPInteractionListGenerator(void *p);
   static void destruct_geniecLcLRSPPInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSPPInteractionListGenerator*)
   {
      ::genie::RSPPInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSPPInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSPPInteractionListGenerator", "", 292,
                  typeid(::genie::RSPPInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSPPInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSPPInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLRSPPInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLRSPPInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLRSPPInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSPPInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLRSPPInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSPPInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSPPInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSPPInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSPPInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSPPInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLRSPPInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSPPInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSPPResonanceSelector_Dictionary();
   static void geniecLcLRSPPResonanceSelector_TClassManip(TClass*);
   static void *new_geniecLcLRSPPResonanceSelector(void *p = nullptr);
   static void *newArray_geniecLcLRSPPResonanceSelector(Long_t size, void *p);
   static void delete_geniecLcLRSPPResonanceSelector(void *p);
   static void deleteArray_geniecLcLRSPPResonanceSelector(void *p);
   static void destruct_geniecLcLRSPPResonanceSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSPPResonanceSelector*)
   {
      ::genie::RSPPResonanceSelector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSPPResonanceSelector));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSPPResonanceSelector", "", 349,
                  typeid(::genie::RSPPResonanceSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSPPResonanceSelector_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSPPResonanceSelector) );
      instance.SetNew(&new_geniecLcLRSPPResonanceSelector);
      instance.SetNewArray(&newArray_geniecLcLRSPPResonanceSelector);
      instance.SetDelete(&delete_geniecLcLRSPPResonanceSelector);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSPPResonanceSelector);
      instance.SetDestructor(&destruct_geniecLcLRSPPResonanceSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSPPResonanceSelector*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSPPResonanceSelector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSPPResonanceSelector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSPPResonanceSelector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSPPResonanceSelector*>(nullptr))->GetClass();
      geniecLcLRSPPResonanceSelector_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSPPResonanceSelector_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSPPEventGenerator_Dictionary();
   static void geniecLcLSPPEventGenerator_TClassManip(TClass*);
   static void *new_geniecLcLSPPEventGenerator(void *p = nullptr);
   static void *newArray_geniecLcLSPPEventGenerator(Long_t size, void *p);
   static void delete_geniecLcLSPPEventGenerator(void *p);
   static void deleteArray_geniecLcLSPPEventGenerator(void *p);
   static void destruct_geniecLcLSPPEventGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SPPEventGenerator*)
   {
      ::genie::SPPEventGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SPPEventGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SPPEventGenerator", "", 425,
                  typeid(::genie::SPPEventGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSPPEventGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SPPEventGenerator) );
      instance.SetNew(&new_geniecLcLSPPEventGenerator);
      instance.SetNewArray(&newArray_geniecLcLSPPEventGenerator);
      instance.SetDelete(&delete_geniecLcLSPPEventGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLSPPEventGenerator);
      instance.SetDestructor(&destruct_geniecLcLSPPEventGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SPPEventGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SPPEventGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SPPEventGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSPPEventGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SPPEventGenerator*>(nullptr))->GetClass();
      geniecLcLSPPEventGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSPPEventGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E*)
   {
      ::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E", "", 503,
                  typeid(::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESHadronicSystemGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESHadronicSystemGenerator : new ::genie::RESHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLRESHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESHadronicSystemGenerator[nElements] : new ::genie::RESHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESHadronicSystemGenerator(void *p) {
      delete (static_cast<::genie::RESHadronicSystemGenerator*>(p));
   }
   static void deleteArray_geniecLcLRESHadronicSystemGenerator(void *p) {
      delete [] (static_cast<::genie::RESHadronicSystemGenerator*>(p));
   }
   static void destruct_geniecLcLRESHadronicSystemGenerator(void *p) {
      typedef ::genie::RESHadronicSystemGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESInteractionListGenerator : new ::genie::RESInteractionListGenerator;
   }
   static void *newArray_geniecLcLRESInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESInteractionListGenerator[nElements] : new ::genie::RESInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESInteractionListGenerator(void *p) {
      delete (static_cast<::genie::RESInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLRESInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::RESInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLRESInteractionListGenerator(void *p) {
      typedef ::genie::RESInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESKinematicsGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESKinematicsGenerator : new ::genie::RESKinematicsGenerator;
   }
   static void *newArray_geniecLcLRESKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESKinematicsGenerator[nElements] : new ::genie::RESKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESKinematicsGenerator(void *p) {
      delete (static_cast<::genie::RESKinematicsGenerator*>(p));
   }
   static void deleteArray_geniecLcLRESKinematicsGenerator(void *p) {
      delete [] (static_cast<::genie::RESKinematicsGenerator*>(p));
   }
   static void destruct_geniecLcLRESKinematicsGenerator(void *p) {
      typedef ::genie::RESKinematicsGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESPrimaryLeptonGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESPrimaryLeptonGenerator : new ::genie::RESPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLRESPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESPrimaryLeptonGenerator[nElements] : new ::genie::RESPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESPrimaryLeptonGenerator(void *p) {
      delete (static_cast<::genie::RESPrimaryLeptonGenerator*>(p));
   }
   static void deleteArray_geniecLcLRESPrimaryLeptonGenerator(void *p) {
      delete [] (static_cast<::genie::RESPrimaryLeptonGenerator*>(p));
   }
   static void destruct_geniecLcLRESPrimaryLeptonGenerator(void *p) {
      typedef ::genie::RESPrimaryLeptonGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESPrimaryLeptonGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSPPHadronicSystemGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSPPHadronicSystemGenerator : new ::genie::RSPPHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLRSPPHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSPPHadronicSystemGenerator[nElements] : new ::genie::RSPPHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSPPHadronicSystemGenerator(void *p) {
      delete (static_cast<::genie::RSPPHadronicSystemGenerator*>(p));
   }
   static void deleteArray_geniecLcLRSPPHadronicSystemGenerator(void *p) {
      delete [] (static_cast<::genie::RSPPHadronicSystemGenerator*>(p));
   }
   static void destruct_geniecLcLRSPPHadronicSystemGenerator(void *p) {
      typedef ::genie::RSPPHadronicSystemGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSPPHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSPPInteractionListGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSPPInteractionListGenerator : new ::genie::RSPPInteractionListGenerator;
   }
   static void *newArray_geniecLcLRSPPInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSPPInteractionListGenerator[nElements] : new ::genie::RSPPInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSPPInteractionListGenerator(void *p) {
      delete (static_cast<::genie::RSPPInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLRSPPInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::RSPPInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLRSPPInteractionListGenerator(void *p) {
      typedef ::genie::RSPPInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSPPInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSPPResonanceSelector(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSPPResonanceSelector : new ::genie::RSPPResonanceSelector;
   }
   static void *newArray_geniecLcLRSPPResonanceSelector(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSPPResonanceSelector[nElements] : new ::genie::RSPPResonanceSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSPPResonanceSelector(void *p) {
      delete (static_cast<::genie::RSPPResonanceSelector*>(p));
   }
   static void deleteArray_geniecLcLRSPPResonanceSelector(void *p) {
      delete [] (static_cast<::genie::RSPPResonanceSelector*>(p));
   }
   static void destruct_geniecLcLRSPPResonanceSelector(void *p) {
      typedef ::genie::RSPPResonanceSelector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSPPResonanceSelector

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSPPEventGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SPPEventGenerator : new ::genie::SPPEventGenerator;
   }
   static void *newArray_geniecLcLSPPEventGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SPPEventGenerator[nElements] : new ::genie::SPPEventGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSPPEventGenerator(void *p) {
      delete (static_cast<::genie::SPPEventGenerator*>(p));
   }
   static void deleteArray_geniecLcLSPPEventGenerator(void *p) {
      delete [] (static_cast<::genie::SPPEventGenerator*>(p));
   }
   static void destruct_geniecLcLSPPEventGenerator(void *p) {
      typedef ::genie::SPPEventGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SPPEventGenerator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E(void *p) {
      delete (static_cast<::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd4XSecMK_dWQ2CosThetaPhi_E(void *p) {
      typedef ::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhResEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhResEG) = RecordReadRules_libGPhResEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhResEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhResEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Resonance/EventGen",
"GENIE",
"GENIE/Physics/Resonance/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Resonance/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Resonance/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhResEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  RESHadronicSystemGenerator;}
namespace genie{class  RESInteractionListGenerator;}
namespace genie{class  RESKinematicsGenerator;}
namespace genie{class  RESPrimaryLeptonGenerator;}
namespace genie{class  RSPPHadronicSystemGenerator;}
namespace genie{class  RSPPInteractionListGenerator;}
namespace genie{class  RSPPResonanceSelector;}
namespace genie{class  SPPEventGenerator;}
namespace genie{namespace utils{namespace gsl{class  d4XSecMK_dWQ2CosThetaPhi_E;}}}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhResEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::RESHadronicSystemGenerator

\brief    Generates the 'final state' hadronic system in v RES interactions.
          It adds the remnant nucleus (if any), the pre-selected resonance
          and the resonance decay products at the GHEP record.
          Unlike the SPP thread, in the RES thread the resonance is specified
          at the time an interaction is selected but its decay products not
          (semi-inclusive resonance reactions). The off the mass-shell baryon
          resonance is decayed using a phase space generator. All kinematically
          available decay channels are being used (not just 1 pi channels).
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 23, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RES_HADRONIC_SYSTEM_GENERATOR_H_
#define _RES_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class Decayer;

class RESHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  RESHadronicSystemGenerator();
  RESHadronicSystemGenerator(string config);
 ~RESHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig                (void);
  int  GetResonancePdgCode       (GHepRecord * evrec) const;
  void AddResonance              (GHepRecord * evrec, int pdgc) const;
  // void AddResonanceDecayProducts (GHepRecord * evrec, int pdgc) const;

  const EventRecordVisitorI * fResonanceDecayer;
};

}      // genie namespace

#endif // _RES_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RESInteractionListGenerator

\brief    Creates a list of all the interactions that can be generated by the
          RES thread (generates semi-inclusive resonance reactions).
          Concrete implementations of the InteractionListGeneratorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 13, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RES_INTERACTION_LIST_GENERATOR_H_
#define _RES_INTERACTION_LIST_GENERATOR_H_

#include "Framework/ParticleData/BaryonResList.h"
#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class RESInteractionListGenerator : public InteractionListGeneratorI {

public :
  RESInteractionListGenerator();
  RESInteractionListGenerator(string config);
 ~RESInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool          fIsCC;
  bool          fIsNC;
  bool          fIsEM;
  BaryonResList fResList;
};

}      // genie namespace
#endif // _RES_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RESKinematicsGenerator

\brief    Generates resonance event (v+N->l+Resonance) kinematics.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 18, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RES_KINEMATICS_GENERATOR_H_
#define _RES_KINEMATICS_GENERATOR_H_

#include "Framework/Utils/Range1.h"
#include "Physics/Common/KineGeneratorWithCache.h"

class TF2;

namespace genie {

class RESKinematicsGenerator : public KineGeneratorWithCache {

public :
  RESKinematicsGenerator();
  RESKinematicsGenerator(string config);
 ~RESKinematicsGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig      (void);
  double ComputeMaxXSec  (const Interaction * interaction) const;

  mutable TF2 * fEnvelope; ///< 2-D envelope used for importance sampling
  double fWcut;            ///< Wcut parameter in DIS/RES join scheme
};

}      // genie namespace
#endif // _RES_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RESPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in v RES interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RES_PRIMARY_LEPTON_GENERATOR_H_
#define _RES_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class RESPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  RESPrimaryLeptonGenerator();
  RESPrimaryLeptonGenerator(string config);
 ~RESPrimaryLeptonGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _RES_PRIMARY_LEPTON_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RSPPHadronicSystemGenerator

\brief    Generates the 'final state' hadronic system in v SPP interactions.
          It adds the remnant nucleus (if any) and the baryon resonance decay
          products at the GHEP record. The resonance decay products are pre-
          determined since in this thread we generate exclusive SPP reactions.
          The module uses a simple phase space decay.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 23, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RSPP_HADRONIC_SYSTEM_GENERATOR_H_
#define _RSPP_HADRONIC_SYSTEM_GENERATOR_H_

#include <TGenPhaseSpace.h>

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class RSPPHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  RSPPHadronicSystemGenerator();
  RSPPHadronicSystemGenerator(string config);
 ~RSPPHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

private:
  void AddResonanceDecayProducts (GHepRecord * event_rec) const;

  mutable TGenPhaseSpace fPhaseSpaceGenerator;
};

}      // genie namespace
#endif // _RSPP_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RSPPInteractionListGenerator

\brief    Creates a list of all the interactions that can be generated by the
          SPP thread (generates exclusive inelastic 1 pion reactions proceeding
          through resonance neutrinoproduction).
          Concrete implementations of the InteractionListGeneratorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 13, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RSPP_INTERACTION_LIST_GENERATOR_H_
#define _RSPP_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"
#include "Framework/Interaction/SppChannel.h"

namespace genie {

class RSPPInteractionListGenerator : public InteractionListGeneratorI {

public :
  RSPPInteractionListGenerator();
  RSPPInteractionListGenerator(string config);
 ~RSPPInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void AddFinalStateInfo (Interaction * i, SppChannel_t chan) const;
  void LoadConfigData(void);

  bool          fIsCC;
  bool          fIsNC;
};

}      // genie namespace
#endif // _RSPP_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RSPPResonanceSelector

\brief    Generates an intermediate baryon resonance for exclusive interactions
          proceeding through resonance productions and adds it to the event
          record. The resonance is selected based on its contribution to the
          selected exclusive reaction cross section.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 18, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RSPP_RESONANCE_SELECTOR_H_
#define _RSPP_RESONANCE_SELECTOR_H_

#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/ParticleData/BaryonResList.h"
#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class RSPPResonanceSelector : public HadronicSystemGenerator {

public :
  RSPPResonanceSelector();
  RSPPResonanceSelector(string config);
 ~RSPPResonanceSelector();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  void LoadConfig (void);

  Resonance_t SelectResonance   (GHepRecord * event_rec) const;
  void        AddResonance      (GHepRecord * event_rec) const;

  BaryonResList fResList; ///< baryon resonances taken into account
};

}      // genie namespace
#endif // _RSPP_RESONANCE_SELECTOR_H_
//____________________________________________________________________________
/*!

\class    genie::SPPEventGenerator

\brief    Generates resonance single pion production event for the following channels:      

for the following channels:      

          1       nu + p -> l      + p + pi+
          2       nu + n -> l      + p + pi0
          3       nu + n -> l      + n + pi+
          4   antinu + n -> l+     + n + pi-
          5   antinu + p -> l+     + n + pi0
          6   antinu + p -> l+     + p + pi-
          7       nu + p -> nu     + p + pi0
          8       nu + p -> nu     + n + pi+
          9       nu + n -> nu     + n + pi0
          10      nu + n -> nu     + p + pi-
          11  antinu + p -> antinu + p + pi0
          12  antinu + p -> antinu + n + pi+
          13  antinu + n -> antinu + n + pi0
          14  antinu + n -> antinu + p + pi-
          
Is a concrete implementation of the EventRecordVisitorI interface.

\authors  Igor Kakorin <kakorin@jinr.ru>, Joint Institute for Nuclear Research \n
          Vadim Naumov <vnaumov@theor.jinr.ru>,  Joint Institute for Nuclear Research \n

\created  May 9, 2020

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SPP_EVENT_GENERATOR_H_
#define _SPP_EVENT_GENERATOR_H_

#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>

#include "Framework/Utils/Range1.h"
#include "Physics/Common/KineGeneratorWithCache.h"


namespace genie {

class SPPEventGenerator : public KineGeneratorWithCache {

public :
  SPPEventGenerator();
  SPPEventGenerator(string config);
 ~SPPEventGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig      (void);
  double ComputeMaxXSec  (const Interaction * interaction) const;
  int GetRecoilNucleonPdgCode(Interaction * interaction) const;
  int GetFinalPionPdgCode(Interaction * interaction) const;
  double fWcut;
  struct Vertex
  {
    Vertex () : Vertex (0., 0., 0., 0.)
    {};
    Vertex (double px1, double px2, double px3, double px4) : x1(px1), x2(px2), x3(px3), x4(px4)
    {};
    ~Vertex(){};
    double x1, x2, x3, x4;
    void Print (std::ostream& os)
    {
      os << "(" << x1 << "," << x2 << "," << x3 << "," << x4 << ")";
    };
    bool operator == (const Vertex &v) const
    {
       double epsilon = 1e-5;
       return (TMath::Abs(this->x1 - v.x1) < epsilon || TMath::Abs(this->x2 - v.x2) < epsilon || TMath::Abs(this->x3 - v.x3) < epsilon || TMath::Abs(this->x4 - v.x4) < epsilon);
    };
   
  };
  
  struct Cell
  {
     Cell(){};
     ~Cell(){};
     Vertex Vertex1;
     Vertex Vertex2;
     void Print (std::ostream& os)
     {
        os << std::endl;
        os << "vertex1 = ";
        Vertex1.Print(os);
        os << std::endl;
        os << "vertex2 = ";
        Vertex2.Print(os);
        os << std::endl;
     };
  };

  int fMaxDepth;  ///< Maximum depth of dividing parent cell
  
};



class XSecAlgorithmI;
class Interaction;

namespace utils {
namespace gsl   {



//.....................................................................................
//
// genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E
// A 4-D cross section function: d4XSecMK_dWQ2CosThetaPhi_E = f(W, Q2, CosTheta, Phi)|(fixed E)
//
class d4XSecMK_dWQ2CosThetaPhi_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d4XSecMK_dWQ2CosThetaPhi_E(const XSecAlgorithmI * m, const Interaction * i, double wcut);
 ~d4XSecMK_dWQ2CosThetaPhi_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  Interaction *    fInteraction;
  Range1D_t Wl;
  double fWcut;
  bool isZero;
  KPhaseSpace * kps;
};


} // gsl   namespace
} // utils namespace

}      // genie namespace
#endif // _SPP_EVENT_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::RESHadronicSystemGenerator", payloadCode, "@",
"genie::RESInteractionListGenerator", payloadCode, "@",
"genie::RESKinematicsGenerator", payloadCode, "@",
"genie::RESPrimaryLeptonGenerator", payloadCode, "@",
"genie::RSPPHadronicSystemGenerator", payloadCode, "@",
"genie::RSPPInteractionListGenerator", payloadCode, "@",
"genie::RSPPResonanceSelector", payloadCode, "@",
"genie::SPPEventGenerator", payloadCode, "@",
"genie::utils::gsl::d4XSecMK_dWQ2CosThetaPhi_E", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhResEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhResEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhResEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhResEG() {
  TriggerDictionaryInitialization_libGPhResEG_Impl();
}
