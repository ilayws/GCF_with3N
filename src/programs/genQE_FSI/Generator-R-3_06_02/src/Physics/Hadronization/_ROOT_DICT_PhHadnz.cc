// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhHadnz
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
#include "AGCharmPythia6Hadro2023.h"
#include "AGCharmPythia8Hadro2023.h"
#include "AGCharmPythiaBaseHadro2023.h"
#include "AGKY2019.h"
#include "AGKYLowW2019.h"
#include "CollinsSpillerFragm.h"
#include "FragmentationFunctionI.h"
#include "FragmentationFunctions.h"
#include "LeptoHadPythia6.h"
#include "LeptoHadPythia8.h"
#include "PetersonFragm.h"
#include "Pythia6Hadro2019.h"
#include "Pythia8Hadro2019.h"
#include "PythiaBaseHadro2019.h"

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

namespace genie {
   namespace utils {
      namespace frgmfunc {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLfrgmfunc_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::frgmfunc", 0 /*version*/, "", 623,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLfrgmfunc_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLfrgmfunc_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLAGCharmPythiaBaseHadro2023_Dictionary();
   static void geniecLcLAGCharmPythiaBaseHadro2023_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AGCharmPythiaBaseHadro2023*)
   {
      ::genie::AGCharmPythiaBaseHadro2023 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AGCharmPythiaBaseHadro2023));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AGCharmPythiaBaseHadro2023", "AGCharmPythiaBaseHadro2023.h", 45,
                  typeid(::genie::AGCharmPythiaBaseHadro2023), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAGCharmPythiaBaseHadro2023_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AGCharmPythiaBaseHadro2023) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AGCharmPythiaBaseHadro2023*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AGCharmPythiaBaseHadro2023*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AGCharmPythiaBaseHadro2023*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAGCharmPythiaBaseHadro2023_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AGCharmPythiaBaseHadro2023*>(nullptr))->GetClass();
      geniecLcLAGCharmPythiaBaseHadro2023_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAGCharmPythiaBaseHadro2023_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAGCharmPythia6Hadro2023_Dictionary();
   static void geniecLcLAGCharmPythia6Hadro2023_TClassManip(TClass*);
   static void *new_geniecLcLAGCharmPythia6Hadro2023(void *p = nullptr);
   static void *newArray_geniecLcLAGCharmPythia6Hadro2023(Long_t size, void *p);
   static void delete_geniecLcLAGCharmPythia6Hadro2023(void *p);
   static void deleteArray_geniecLcLAGCharmPythia6Hadro2023(void *p);
   static void destruct_geniecLcLAGCharmPythia6Hadro2023(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AGCharmPythia6Hadro2023*)
   {
      ::genie::AGCharmPythia6Hadro2023 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AGCharmPythia6Hadro2023));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AGCharmPythia6Hadro2023", "", 46,
                  typeid(::genie::AGCharmPythia6Hadro2023), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAGCharmPythia6Hadro2023_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AGCharmPythia6Hadro2023) );
      instance.SetNew(&new_geniecLcLAGCharmPythia6Hadro2023);
      instance.SetNewArray(&newArray_geniecLcLAGCharmPythia6Hadro2023);
      instance.SetDelete(&delete_geniecLcLAGCharmPythia6Hadro2023);
      instance.SetDeleteArray(&deleteArray_geniecLcLAGCharmPythia6Hadro2023);
      instance.SetDestructor(&destruct_geniecLcLAGCharmPythia6Hadro2023);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AGCharmPythia6Hadro2023*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AGCharmPythia6Hadro2023*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AGCharmPythia6Hadro2023*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAGCharmPythia6Hadro2023_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AGCharmPythia6Hadro2023*>(nullptr))->GetClass();
      geniecLcLAGCharmPythia6Hadro2023_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAGCharmPythia6Hadro2023_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAGCharmPythia8Hadro2023_Dictionary();
   static void geniecLcLAGCharmPythia8Hadro2023_TClassManip(TClass*);
   static void *new_geniecLcLAGCharmPythia8Hadro2023(void *p = nullptr);
   static void *newArray_geniecLcLAGCharmPythia8Hadro2023(Long_t size, void *p);
   static void delete_geniecLcLAGCharmPythia8Hadro2023(void *p);
   static void deleteArray_geniecLcLAGCharmPythia8Hadro2023(void *p);
   static void destruct_geniecLcLAGCharmPythia8Hadro2023(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AGCharmPythia8Hadro2023*)
   {
      ::genie::AGCharmPythia8Hadro2023 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AGCharmPythia8Hadro2023));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AGCharmPythia8Hadro2023", "", 111,
                  typeid(::genie::AGCharmPythia8Hadro2023), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAGCharmPythia8Hadro2023_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AGCharmPythia8Hadro2023) );
      instance.SetNew(&new_geniecLcLAGCharmPythia8Hadro2023);
      instance.SetNewArray(&newArray_geniecLcLAGCharmPythia8Hadro2023);
      instance.SetDelete(&delete_geniecLcLAGCharmPythia8Hadro2023);
      instance.SetDeleteArray(&deleteArray_geniecLcLAGCharmPythia8Hadro2023);
      instance.SetDestructor(&destruct_geniecLcLAGCharmPythia8Hadro2023);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AGCharmPythia8Hadro2023*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AGCharmPythia8Hadro2023*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AGCharmPythia8Hadro2023*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAGCharmPythia8Hadro2023_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AGCharmPythia8Hadro2023*>(nullptr))->GetClass();
      geniecLcLAGCharmPythia8Hadro2023_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAGCharmPythia8Hadro2023_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAGKY2019_Dictionary();
   static void geniecLcLAGKY2019_TClassManip(TClass*);
   static void *new_geniecLcLAGKY2019(void *p = nullptr);
   static void *newArray_geniecLcLAGKY2019(Long_t size, void *p);
   static void delete_geniecLcLAGKY2019(void *p);
   static void deleteArray_geniecLcLAGKY2019(void *p);
   static void destruct_geniecLcLAGKY2019(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AGKY2019*)
   {
      ::genie::AGKY2019 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AGKY2019));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AGKY2019", "", 287,
                  typeid(::genie::AGKY2019), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAGKY2019_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AGKY2019) );
      instance.SetNew(&new_geniecLcLAGKY2019);
      instance.SetNewArray(&newArray_geniecLcLAGKY2019);
      instance.SetDelete(&delete_geniecLcLAGKY2019);
      instance.SetDeleteArray(&deleteArray_geniecLcLAGKY2019);
      instance.SetDestructor(&destruct_geniecLcLAGKY2019);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AGKY2019*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AGKY2019*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AGKY2019*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAGKY2019_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AGKY2019*>(nullptr))->GetClass();
      geniecLcLAGKY2019_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAGKY2019_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAGKYLowW2019_Dictionary();
   static void geniecLcLAGKYLowW2019_TClassManip(TClass*);
   static void *new_geniecLcLAGKYLowW2019(void *p = nullptr);
   static void *newArray_geniecLcLAGKYLowW2019(Long_t size, void *p);
   static void delete_geniecLcLAGKYLowW2019(void *p);
   static void deleteArray_geniecLcLAGKYLowW2019(void *p);
   static void destruct_geniecLcLAGKYLowW2019(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AGKYLowW2019*)
   {
      ::genie::AGKYLowW2019 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AGKYLowW2019));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AGKYLowW2019", "", 380,
                  typeid(::genie::AGKYLowW2019), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAGKYLowW2019_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AGKYLowW2019) );
      instance.SetNew(&new_geniecLcLAGKYLowW2019);
      instance.SetNewArray(&newArray_geniecLcLAGKYLowW2019);
      instance.SetDelete(&delete_geniecLcLAGKYLowW2019);
      instance.SetDeleteArray(&deleteArray_geniecLcLAGKYLowW2019);
      instance.SetDestructor(&destruct_geniecLcLAGKYLowW2019);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AGKYLowW2019*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AGKYLowW2019*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AGKYLowW2019*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAGKYLowW2019_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AGKYLowW2019*>(nullptr))->GetClass();
      geniecLcLAGKYLowW2019_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAGKYLowW2019_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLFragmentationFunctionI_Dictionary();
   static void geniecLcLFragmentationFunctionI_TClassManip(TClass*);
   static void delete_geniecLcLFragmentationFunctionI(void *p);
   static void deleteArray_geniecLcLFragmentationFunctionI(void *p);
   static void destruct_geniecLcLFragmentationFunctionI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::FragmentationFunctionI*)
   {
      ::genie::FragmentationFunctionI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::FragmentationFunctionI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::FragmentationFunctionI", "FragmentationFunctionI.h", 27,
                  typeid(::genie::FragmentationFunctionI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLFragmentationFunctionI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::FragmentationFunctionI) );
      instance.SetDelete(&delete_geniecLcLFragmentationFunctionI);
      instance.SetDeleteArray(&deleteArray_geniecLcLFragmentationFunctionI);
      instance.SetDestructor(&destruct_geniecLcLFragmentationFunctionI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::FragmentationFunctionI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::FragmentationFunctionI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::FragmentationFunctionI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLFragmentationFunctionI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::FragmentationFunctionI*>(nullptr))->GetClass();
      geniecLcLFragmentationFunctionI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLFragmentationFunctionI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCollinsSpillerFragm_Dictionary();
   static void geniecLcLCollinsSpillerFragm_TClassManip(TClass*);
   static void *new_geniecLcLCollinsSpillerFragm(void *p = nullptr);
   static void *newArray_geniecLcLCollinsSpillerFragm(Long_t size, void *p);
   static void delete_geniecLcLCollinsSpillerFragm(void *p);
   static void deleteArray_geniecLcLCollinsSpillerFragm(void *p);
   static void destruct_geniecLcLCollinsSpillerFragm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CollinsSpillerFragm*)
   {
      ::genie::CollinsSpillerFragm *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::CollinsSpillerFragm));
      static ::ROOT::TGenericClassInfo 
         instance("genie::CollinsSpillerFragm", "", 528,
                  typeid(::genie::CollinsSpillerFragm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCollinsSpillerFragm_Dictionary, isa_proxy, 0,
                  sizeof(::genie::CollinsSpillerFragm) );
      instance.SetNew(&new_geniecLcLCollinsSpillerFragm);
      instance.SetNewArray(&newArray_geniecLcLCollinsSpillerFragm);
      instance.SetDelete(&delete_geniecLcLCollinsSpillerFragm);
      instance.SetDeleteArray(&deleteArray_geniecLcLCollinsSpillerFragm);
      instance.SetDestructor(&destruct_geniecLcLCollinsSpillerFragm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CollinsSpillerFragm*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::CollinsSpillerFragm*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::CollinsSpillerFragm*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCollinsSpillerFragm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::CollinsSpillerFragm*>(nullptr))->GetClass();
      geniecLcLCollinsSpillerFragm_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCollinsSpillerFragm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLeptoHadPythia6_Dictionary();
   static void geniecLcLLeptoHadPythia6_TClassManip(TClass*);
   static void *new_geniecLcLLeptoHadPythia6(void *p = nullptr);
   static void *newArray_geniecLcLLeptoHadPythia6(Long_t size, void *p);
   static void delete_geniecLcLLeptoHadPythia6(void *p);
   static void deleteArray_geniecLcLLeptoHadPythia6(void *p);
   static void destruct_geniecLcLLeptoHadPythia6(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LeptoHadPythia6*)
   {
      ::genie::LeptoHadPythia6 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LeptoHadPythia6));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LeptoHadPythia6", "", 688,
                  typeid(::genie::LeptoHadPythia6), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLeptoHadPythia6_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LeptoHadPythia6) );
      instance.SetNew(&new_geniecLcLLeptoHadPythia6);
      instance.SetNewArray(&newArray_geniecLcLLeptoHadPythia6);
      instance.SetDelete(&delete_geniecLcLLeptoHadPythia6);
      instance.SetDeleteArray(&deleteArray_geniecLcLLeptoHadPythia6);
      instance.SetDestructor(&destruct_geniecLcLLeptoHadPythia6);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LeptoHadPythia6*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::LeptoHadPythia6*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::LeptoHadPythia6*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLeptoHadPythia6_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::LeptoHadPythia6*>(nullptr))->GetClass();
      geniecLcLLeptoHadPythia6_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLeptoHadPythia6_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLeptoHadPythia8_Dictionary();
   static void geniecLcLLeptoHadPythia8_TClassManip(TClass*);
   static void *new_geniecLcLLeptoHadPythia8(void *p = nullptr);
   static void *newArray_geniecLcLLeptoHadPythia8(Long_t size, void *p);
   static void delete_geniecLcLLeptoHadPythia8(void *p);
   static void deleteArray_geniecLcLLeptoHadPythia8(void *p);
   static void destruct_geniecLcLLeptoHadPythia8(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LeptoHadPythia8*)
   {
      ::genie::LeptoHadPythia8 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LeptoHadPythia8));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LeptoHadPythia8", "", 784,
                  typeid(::genie::LeptoHadPythia8), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLeptoHadPythia8_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LeptoHadPythia8) );
      instance.SetNew(&new_geniecLcLLeptoHadPythia8);
      instance.SetNewArray(&newArray_geniecLcLLeptoHadPythia8);
      instance.SetDelete(&delete_geniecLcLLeptoHadPythia8);
      instance.SetDeleteArray(&deleteArray_geniecLcLLeptoHadPythia8);
      instance.SetDestructor(&destruct_geniecLcLLeptoHadPythia8);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LeptoHadPythia8*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::LeptoHadPythia8*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::LeptoHadPythia8*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLeptoHadPythia8_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::LeptoHadPythia8*>(nullptr))->GetClass();
      geniecLcLLeptoHadPythia8_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLeptoHadPythia8_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPetersonFragm_Dictionary();
   static void geniecLcLPetersonFragm_TClassManip(TClass*);
   static void *new_geniecLcLPetersonFragm(void *p = nullptr);
   static void *newArray_geniecLcLPetersonFragm(Long_t size, void *p);
   static void delete_geniecLcLPetersonFragm(void *p);
   static void deleteArray_geniecLcLPetersonFragm(void *p);
   static void destruct_geniecLcLPetersonFragm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PetersonFragm*)
   {
      ::genie::PetersonFragm *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PetersonFragm));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PetersonFragm", "", 875,
                  typeid(::genie::PetersonFragm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPetersonFragm_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PetersonFragm) );
      instance.SetNew(&new_geniecLcLPetersonFragm);
      instance.SetNewArray(&newArray_geniecLcLPetersonFragm);
      instance.SetDelete(&delete_geniecLcLPetersonFragm);
      instance.SetDeleteArray(&deleteArray_geniecLcLPetersonFragm);
      instance.SetDestructor(&destruct_geniecLcLPetersonFragm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PetersonFragm*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PetersonFragm*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PetersonFragm*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPetersonFragm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PetersonFragm*>(nullptr))->GetClass();
      geniecLcLPetersonFragm_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPetersonFragm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPythiaBaseHadro2019_Dictionary();
   static void geniecLcLPythiaBaseHadro2019_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PythiaBaseHadro2019*)
   {
      ::genie::PythiaBaseHadro2019 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PythiaBaseHadro2019));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PythiaBaseHadro2019", "PythiaBaseHadro2019.h", 29,
                  typeid(::genie::PythiaBaseHadro2019), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPythiaBaseHadro2019_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PythiaBaseHadro2019) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PythiaBaseHadro2019*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PythiaBaseHadro2019*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PythiaBaseHadro2019*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPythiaBaseHadro2019_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PythiaBaseHadro2019*>(nullptr))->GetClass();
      geniecLcLPythiaBaseHadro2019_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPythiaBaseHadro2019_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPythia6Hadro2019_Dictionary();
   static void geniecLcLPythia6Hadro2019_TClassManip(TClass*);
   static void *new_geniecLcLPythia6Hadro2019(void *p = nullptr);
   static void *newArray_geniecLcLPythia6Hadro2019(Long_t size, void *p);
   static void delete_geniecLcLPythia6Hadro2019(void *p);
   static void deleteArray_geniecLcLPythia6Hadro2019(void *p);
   static void destruct_geniecLcLPythia6Hadro2019(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Pythia6Hadro2019*)
   {
      ::genie::Pythia6Hadro2019 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Pythia6Hadro2019));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Pythia6Hadro2019", "", 933,
                  typeid(::genie::Pythia6Hadro2019), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPythia6Hadro2019_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Pythia6Hadro2019) );
      instance.SetNew(&new_geniecLcLPythia6Hadro2019);
      instance.SetNewArray(&newArray_geniecLcLPythia6Hadro2019);
      instance.SetDelete(&delete_geniecLcLPythia6Hadro2019);
      instance.SetDeleteArray(&deleteArray_geniecLcLPythia6Hadro2019);
      instance.SetDestructor(&destruct_geniecLcLPythia6Hadro2019);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Pythia6Hadro2019*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Pythia6Hadro2019*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Pythia6Hadro2019*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPythia6Hadro2019_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Pythia6Hadro2019*>(nullptr))->GetClass();
      geniecLcLPythia6Hadro2019_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPythia6Hadro2019_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPythia8Hadro2019_Dictionary();
   static void geniecLcLPythia8Hadro2019_TClassManip(TClass*);
   static void *new_geniecLcLPythia8Hadro2019(void *p = nullptr);
   static void *newArray_geniecLcLPythia8Hadro2019(Long_t size, void *p);
   static void delete_geniecLcLPythia8Hadro2019(void *p);
   static void deleteArray_geniecLcLPythia8Hadro2019(void *p);
   static void destruct_geniecLcLPythia8Hadro2019(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Pythia8Hadro2019*)
   {
      ::genie::Pythia8Hadro2019 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Pythia8Hadro2019));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Pythia8Hadro2019", "", 1004,
                  typeid(::genie::Pythia8Hadro2019), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPythia8Hadro2019_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Pythia8Hadro2019) );
      instance.SetNew(&new_geniecLcLPythia8Hadro2019);
      instance.SetNewArray(&newArray_geniecLcLPythia8Hadro2019);
      instance.SetDelete(&delete_geniecLcLPythia8Hadro2019);
      instance.SetDeleteArray(&deleteArray_geniecLcLPythia8Hadro2019);
      instance.SetDestructor(&destruct_geniecLcLPythia8Hadro2019);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Pythia8Hadro2019*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Pythia8Hadro2019*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Pythia8Hadro2019*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPythia8Hadro2019_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Pythia8Hadro2019*>(nullptr))->GetClass();
      geniecLcLPythia8Hadro2019_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPythia8Hadro2019_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
} // end of namespace ROOT for class ::genie::AGCharmPythiaBaseHadro2023

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAGCharmPythia6Hadro2023(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AGCharmPythia6Hadro2023 : new ::genie::AGCharmPythia6Hadro2023;
   }
   static void *newArray_geniecLcLAGCharmPythia6Hadro2023(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AGCharmPythia6Hadro2023[nElements] : new ::genie::AGCharmPythia6Hadro2023[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAGCharmPythia6Hadro2023(void *p) {
      delete (static_cast<::genie::AGCharmPythia6Hadro2023*>(p));
   }
   static void deleteArray_geniecLcLAGCharmPythia6Hadro2023(void *p) {
      delete [] (static_cast<::genie::AGCharmPythia6Hadro2023*>(p));
   }
   static void destruct_geniecLcLAGCharmPythia6Hadro2023(void *p) {
      typedef ::genie::AGCharmPythia6Hadro2023 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AGCharmPythia6Hadro2023

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAGCharmPythia8Hadro2023(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AGCharmPythia8Hadro2023 : new ::genie::AGCharmPythia8Hadro2023;
   }
   static void *newArray_geniecLcLAGCharmPythia8Hadro2023(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AGCharmPythia8Hadro2023[nElements] : new ::genie::AGCharmPythia8Hadro2023[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAGCharmPythia8Hadro2023(void *p) {
      delete (static_cast<::genie::AGCharmPythia8Hadro2023*>(p));
   }
   static void deleteArray_geniecLcLAGCharmPythia8Hadro2023(void *p) {
      delete [] (static_cast<::genie::AGCharmPythia8Hadro2023*>(p));
   }
   static void destruct_geniecLcLAGCharmPythia8Hadro2023(void *p) {
      typedef ::genie::AGCharmPythia8Hadro2023 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AGCharmPythia8Hadro2023

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAGKY2019(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AGKY2019 : new ::genie::AGKY2019;
   }
   static void *newArray_geniecLcLAGKY2019(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AGKY2019[nElements] : new ::genie::AGKY2019[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAGKY2019(void *p) {
      delete (static_cast<::genie::AGKY2019*>(p));
   }
   static void deleteArray_geniecLcLAGKY2019(void *p) {
      delete [] (static_cast<::genie::AGKY2019*>(p));
   }
   static void destruct_geniecLcLAGKY2019(void *p) {
      typedef ::genie::AGKY2019 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AGKY2019

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAGKYLowW2019(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AGKYLowW2019 : new ::genie::AGKYLowW2019;
   }
   static void *newArray_geniecLcLAGKYLowW2019(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AGKYLowW2019[nElements] : new ::genie::AGKYLowW2019[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAGKYLowW2019(void *p) {
      delete (static_cast<::genie::AGKYLowW2019*>(p));
   }
   static void deleteArray_geniecLcLAGKYLowW2019(void *p) {
      delete [] (static_cast<::genie::AGKYLowW2019*>(p));
   }
   static void destruct_geniecLcLAGKYLowW2019(void *p) {
      typedef ::genie::AGKYLowW2019 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AGKYLowW2019

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLFragmentationFunctionI(void *p) {
      delete (static_cast<::genie::FragmentationFunctionI*>(p));
   }
   static void deleteArray_geniecLcLFragmentationFunctionI(void *p) {
      delete [] (static_cast<::genie::FragmentationFunctionI*>(p));
   }
   static void destruct_geniecLcLFragmentationFunctionI(void *p) {
      typedef ::genie::FragmentationFunctionI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::FragmentationFunctionI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCollinsSpillerFragm(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CollinsSpillerFragm : new ::genie::CollinsSpillerFragm;
   }
   static void *newArray_geniecLcLCollinsSpillerFragm(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CollinsSpillerFragm[nElements] : new ::genie::CollinsSpillerFragm[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCollinsSpillerFragm(void *p) {
      delete (static_cast<::genie::CollinsSpillerFragm*>(p));
   }
   static void deleteArray_geniecLcLCollinsSpillerFragm(void *p) {
      delete [] (static_cast<::genie::CollinsSpillerFragm*>(p));
   }
   static void destruct_geniecLcLCollinsSpillerFragm(void *p) {
      typedef ::genie::CollinsSpillerFragm current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::CollinsSpillerFragm

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLLeptoHadPythia6(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::LeptoHadPythia6 : new ::genie::LeptoHadPythia6;
   }
   static void *newArray_geniecLcLLeptoHadPythia6(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::LeptoHadPythia6[nElements] : new ::genie::LeptoHadPythia6[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLLeptoHadPythia6(void *p) {
      delete (static_cast<::genie::LeptoHadPythia6*>(p));
   }
   static void deleteArray_geniecLcLLeptoHadPythia6(void *p) {
      delete [] (static_cast<::genie::LeptoHadPythia6*>(p));
   }
   static void destruct_geniecLcLLeptoHadPythia6(void *p) {
      typedef ::genie::LeptoHadPythia6 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::LeptoHadPythia6

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLLeptoHadPythia8(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::LeptoHadPythia8 : new ::genie::LeptoHadPythia8;
   }
   static void *newArray_geniecLcLLeptoHadPythia8(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::LeptoHadPythia8[nElements] : new ::genie::LeptoHadPythia8[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLLeptoHadPythia8(void *p) {
      delete (static_cast<::genie::LeptoHadPythia8*>(p));
   }
   static void deleteArray_geniecLcLLeptoHadPythia8(void *p) {
      delete [] (static_cast<::genie::LeptoHadPythia8*>(p));
   }
   static void destruct_geniecLcLLeptoHadPythia8(void *p) {
      typedef ::genie::LeptoHadPythia8 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::LeptoHadPythia8

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPetersonFragm(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PetersonFragm : new ::genie::PetersonFragm;
   }
   static void *newArray_geniecLcLPetersonFragm(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PetersonFragm[nElements] : new ::genie::PetersonFragm[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPetersonFragm(void *p) {
      delete (static_cast<::genie::PetersonFragm*>(p));
   }
   static void deleteArray_geniecLcLPetersonFragm(void *p) {
      delete [] (static_cast<::genie::PetersonFragm*>(p));
   }
   static void destruct_geniecLcLPetersonFragm(void *p) {
      typedef ::genie::PetersonFragm current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PetersonFragm

namespace ROOT {
} // end of namespace ROOT for class ::genie::PythiaBaseHadro2019

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPythia6Hadro2019(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Pythia6Hadro2019 : new ::genie::Pythia6Hadro2019;
   }
   static void *newArray_geniecLcLPythia6Hadro2019(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Pythia6Hadro2019[nElements] : new ::genie::Pythia6Hadro2019[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPythia6Hadro2019(void *p) {
      delete (static_cast<::genie::Pythia6Hadro2019*>(p));
   }
   static void deleteArray_geniecLcLPythia6Hadro2019(void *p) {
      delete [] (static_cast<::genie::Pythia6Hadro2019*>(p));
   }
   static void destruct_geniecLcLPythia6Hadro2019(void *p) {
      typedef ::genie::Pythia6Hadro2019 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Pythia6Hadro2019

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPythia8Hadro2019(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Pythia8Hadro2019 : new ::genie::Pythia8Hadro2019;
   }
   static void *newArray_geniecLcLPythia8Hadro2019(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Pythia8Hadro2019[nElements] : new ::genie::Pythia8Hadro2019[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPythia8Hadro2019(void *p) {
      delete (static_cast<::genie::Pythia8Hadro2019*>(p));
   }
   static void deleteArray_geniecLcLPythia8Hadro2019(void *p) {
      delete [] (static_cast<::genie::Pythia8Hadro2019*>(p));
   }
   static void destruct_geniecLcLPythia8Hadro2019(void *p) {
      typedef ::genie::Pythia8Hadro2019 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Pythia8Hadro2019

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhHadnz() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhHadnz) = RecordReadRules_libGPhHadnz();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhHadnz));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhHadnz_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Hadronization",
"GENIE",
"GENIE/Physics/Hadronization",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Hadronization",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Hadronization/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhHadnz dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/Hadronization/AGCharmPythiaBaseHadro2023.h")))  AGCharmPythiaBaseHadro2023;}
namespace genie{class  AGCharmPythia6Hadro2023;}
namespace genie{class  AGCharmPythia8Hadro2023;}
namespace genie{class  AGKY2019;}
namespace genie{class  AGKYLowW2019;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/Hadronization/FragmentationFunctionI.h")))  FragmentationFunctionI;}
namespace genie{class  CollinsSpillerFragm;}
namespace genie{class  LeptoHadPythia6;}
namespace genie{class  LeptoHadPythia8;}
namespace genie{class  PetersonFragm;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/Hadronization/PythiaBaseHadro2019.h")))  PythiaBaseHadro2019;}
namespace genie{class  Pythia6Hadro2019;}
namespace genie{class  Pythia8Hadro2019;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhHadnz dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::AGCharmPythia6Hadro2023

\brief    Andreopoulos - Gallagher (AG) GENIE Charm Hadronization model.

          The model relies on empirical charm fragmentation and pT functions,
          as well as on experimentally-determined charm fractions, to produce
          the ID and 4-momentum of charmed hadron in charm production events.

          The remnant (non-charm) system is hadronised by a call to PYTHIA.

          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <constantinos.andreopoulos \at cern.ch>
          University of Liverpool & STFC Rutherford Appleton Laboratory

          Hugh Gallagher <gallag@minos.phy.tufts.edu>
          Tufts University

\created  August 17, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _AGCHARM_PYTHIA6_HADRONIZATION_H_
#define _AGCHARM_PYTHIA6_HADRONIZATION_H_

#include "Physics/Hadronization/AGCharmPythiaBaseHadro2023.h"

#include "Framework/Conventions/GBuild.h"
#ifdef __GENIE_PYTHIA6_ENABLED__
class TPythia6;
#endif

namespace genie {

class Spline;
class FragmentationFunctionI;

class AGCharmPythia6Hadro2023 : public AGCharmPythiaBaseHadro2023 {

public:
  AGCharmPythia6Hadro2023();
  AGCharmPythia6Hadro2023(string config);
  virtual ~AGCharmPythia6Hadro2023();


private:
  void           Initialize      (void)                                  const;
  bool           HadronizeRemnant(int qrkSyst1, int qrkSyst2, double WR, TLorentzVector p4R,
                                  unsigned int& rpos, TClonesArray * particle_list) const;


#ifdef __GENIE_PYTHIA6_ENABLED__
  mutable TPythia6 *             fPythia;      ///< remnant (non-charm) hadronizer
#endif
};

}         // genie namespace

#endif    // _AGCHARM_PYTHIA6_HADRONIZATION__H_
//____________________________________________________________________________
/*!

\class    genie::AGCharmPythia8Hadro2023

\brief    Andreopoulos - Gallagher (AG) GENIE Charm Hadronization model.

          The model relies on empirical charm fragmentation and pT functions,
          as well as on experimentally-determined charm fractions, to produce
          the ID and 4-momentum of charmed hadron in charm production events.

          The remnant (non-charm) system is hadronised by a call to PYTHIA.

          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <constantinos.andreopoulos \at cern.ch>
          University of Liverpool & STFC Rutherford Appleton Laboratory

          Hugh Gallagher <gallag@minos.phy.tufts.edu>
          Tufts University

\created  August 17, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _AGCHARM_PYTHIA8_HADRONIZATION_H_
#define _AGCHARM_PYTHIA8_HADRONIZATION_H_

#include "Physics/Hadronization/AGCharmPythiaBaseHadro2023.h"

#ifdef __GENIE_PYTHIA8_ENABLED__
#include "Framework/Utils/Pythia8Singleton.h"
#endif

namespace genie {

class Spline;
class FragmentationFunctionI;

class AGCharmPythia8Hadro2023 : public AGCharmPythiaBaseHadro2023 {

public:
  AGCharmPythia8Hadro2023();
  AGCharmPythia8Hadro2023(string config);
  virtual ~AGCharmPythia8Hadro2023();


private:
  void           Initialize      (void)                                  const;
  bool           HadronizeRemnant(int qrkSyst1, int qrkSyst2, double WR, TLorentzVector p4R,
                                  unsigned int& rpos, TClonesArray * particle_list) const;

  void LoadConfig (void);

  void CopyOriginalDecayFlags     (void) const;
  void SetDesiredDecayFlags       (void) const;
  void RestoreOriginalDecayFlags  (void) const;

  // Original PYTHIA decay flags (stored so as to be restored after hadronization)
  mutable bool fOriDecayFlag_pi0; // pi^0
  mutable bool fOriDecayFlag_K0;  // K^0
  mutable bool fOriDecayFlag_K0b; // \bar{K^0}
  mutable bool fOriDecayFlag_L0;  // \Lambda^0
  mutable bool fOriDecayFlag_L0b; // \bar{\Lambda^0}
  mutable bool fOriDecayFlag_Dm;  // \Delta^-
  mutable bool fOriDecayFlag_D0;  // \Delta^0
  mutable bool fOriDecayFlag_Dp;  // \Delta^+
  mutable bool fOriDecayFlag_Dpp; // \Delta^++
  // Required PYTHIA decay flags set via Configure() [fixed]
  mutable bool fReqDecayFlag_pi0;         // pi^0
  mutable bool fReqDecayFlag_K0;          // K^0
  mutable bool fReqDecayFlag_K0b;         // \bar{K^0}
  mutable bool fReqDecayFlag_L0;          // \Lambda^0
  mutable bool fReqDecayFlag_L0b;         // \bar{\Lambda^0}
  mutable bool fReqDecayFlag_Dm;          // \Delta^-
  mutable bool fReqDecayFlag_D0;          // \Delta^0
  mutable bool fReqDecayFlag_Dp;          // \Delta^+
  mutable bool fReqDecayFlag_Dpp;         // \Delta^++

};

}         // genie namespace

#endif    // _AGCHARM_PYTHIA8_HADRONIZATION__H_
//____________________________________________________________________________
/*!

\class    genie::AGCharmPythiaBaseHadro2023

\brief    Andreopoulos - Gallagher (AG) GENIE Charm Hadronization model.

          The model relies on empirical charm fragmentation and pT functions,
          as well as on experimentally-determined charm fractions, to produce
          the ID and 4-momentum of charmed hadron in charm production events.

          The remnant (non-charm) system is hadronised by a call to PYTHIA.

          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

          Hugh Gallagher <gallag@minos.phy.tufts.edu>
          Tufts University

\created  August 17, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _CHARM_HADRONIZATION_H_
#define _CHARM_HADRONIZATION_H_

#include <TGenPhaseSpace.h>

#include "Framework/Conventions/GBuild.h"
#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Interaction/Interaction.h"

class TF1;

namespace genie {

class Spline;
class FragmentationFunctionI;

class AGCharmPythiaBaseHadro2023 : public EventRecordVisitorI {

public:

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

protected:

  AGCharmPythiaBaseHadro2023();
  AGCharmPythiaBaseHadro2023(string config);
  AGCharmPythiaBaseHadro2023(string name, string config);
  virtual ~AGCharmPythiaBaseHadro2023();

protected:
  void           LoadConfig          (void);
  void           Initialize          (void)                                    const ;

  virtual bool HadronizeRemnant(int qrkSyst1, int qrkSyst2, double WR, TLorentzVector p4R,
                                unsigned int& rpos, TClonesArray * particle_list)      const = 0;
  // needs to append to TClonesArray of GHepParticle starting at rpos

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  //
  void Configure(const Registry & config);
  void Configure(string config);

private:

  TClonesArray * Hadronize           (const Interaction* )                     const ;
  // returns TClonesArray of GHepParticle

  int            GenerateCharmHadron (int nupdg, double EvLab)                 const ;

  double         Weight              (void)                                    const ;

  mutable TGenPhaseSpace fPhaseSpaceGenerator; ///< a phase space generator

  // Configuration parameters
  //
  bool                           fCharmOnly;   ///< don't hadronize non-charm blob
  TF1 *                          fCharmPT2pdf; ///< charm hadron pT^2 pdf
  const FragmentationFunctionI * fFragmFunc;   ///< charm hadron fragmentation func

  double fFracMaxEnergy ;                      ///< Maximum energy available for the Meson fractions

  Spline *                       fD0FracSpl;   ///< nu charm fraction vs Ev: D0
  Spline *                       fDpFracSpl;   ///< nu charm fraction vs Ev: D+
  Spline *                       fDsFracSpl;   ///< nu charm fraction vs Ev: Ds+
  double                         fD0BarFrac;   ///< nubar \bar{D0} charm fraction
  double                         fDmFrac;      ///< nubar D- charm fraction
};

}         // genie namespace

#endif    // _CHARM_HADRONIZATION__H_
//____________________________________________________________________________
/*!

\class    genie::AGKY2019

\brief    A 'composite' hadronization model using a KNO-based hadronization
          model at low W and PYTHIA/JETSET at higher W.
          Contains no new hadronization code but merely a configurable KNO to
          PYTHIA transition scheme.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  June 08, 2006

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _KNO_PYTHIA_HADRONIZATION_H_
#define _KNO_PYTHIA_HADRONIZATION_H_

#include "Framework/Interaction/Interaction.h"
#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class AGKY2019 : protected EventRecordVisitorI {

public:

  AGKY2019();
  AGKY2019(string config);
  virtual ~AGKY2019();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  virtual void Configure(const Registry & config);
  virtual void Configure(string config);

private:

  void LoadConfig (void);

  const EventRecordVisitorI * SelectHadronizer(const Interaction *) const;

  //-- configuration

  const EventRecordVisitorI * fKNOHadronizer;    ///< KNO Hadronizer
  const EventRecordVisitorI * fPythiaHadronizer; ///< PYTHIA Hadronizer

  int    fMethod;       ///< KNO -> PYTHIA transition method
  double fWminTrWindow; ///< min W in transition region (pure KNO    < Wmin)
  double fWmaxTrWindow; ///< max W in transition region (pure PYTHIA > Wmax)
};

}         // genie namespace

#endif    // _KNO_PYTHIA_HADRONIZATION_H_
//____________________________________________________________________________
/*!

\class    genie::AGKYLowW2019

\brief    A KNO-based hadronization model.

          Is a concrete implementation of the EventRecordVisitorI interface.

\author   The main authors of this model are:

          - Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

          - Hugh Gallagher <gallag@minos.phy.tufts.edu>
            Tufts University

          - Tinjun Yang <tjyang@stanford.edu>
            Stanford University

          This is an improved version of the legacy neugen3 KNO-based model.
          Giles Barr, Geoff Pearce, and Hugh Gallagher were listed as authors
          of the original neugen3 model.

          Strange baryon production was implemented by Keith Hofmann and
          Hugh Gallagher (Tufts)

          Production of etas was added by Ji Liu (W&M)

          Changes required to implement the GENIE Boosted Dark Matter module
          were installed by Josh Berger (Univ. of Wisconsin)

\created  August 17, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _KNO_HADRONIZATION_H_
#define _KNO_HADRONIZATION_H_

#include <TGenPhaseSpace.h>

#include "Framework/Interaction/Interaction.h"
#include "Physics/Decay/Decayer.h"
#include "Framework/EventGen/EventRecordVisitorI.h"


class TF1;

namespace genie {

class Decayer;
//class Spline;

class AGKYLowW2019 : public EventRecordVisitorI {

public:

  AGKYLowW2019();
  AGKYLowW2019(string config);
  virtual ~AGKYLowW2019();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  virtual void Configure(const Registry & config);
  virtual void Configure(string config);

  friend class KNOTunedQPMDISPXSec ;

private:

  void           LoadConfig            (void);
  void           Initialize            (void)                                        const;
  TClonesArray * Hadronize             (const Interaction* )                         const;
  double         Weight                (void)                                        const;
  PDGCodeList *  SelectParticles       (const Interaction*)                          const;
  TH1D *         MultiplicityProb      (const Interaction*, Option_t* opt = "")      const;
  bool           AssertValidity        (const Interaction * i)                       const;
  PDGCodeList *  GenerateHadronCodes   (int mult, int maxQ, double W)                const;
  int            GenerateBaryonPdgCode (int mult, int maxQ, double W)                const;
  int            HadronShowerCharge    (const Interaction * )                        const;
  double         KNO                   (int nu, int nuc, double z)                   const;
  double         AverageChMult         (int nu, int nuc, double W)                   const;
  void           HandleDecays          (TClonesArray * particle_list)                const;
  double         ReWeightPt2           (const PDGCodeList & pdgcv)                   const;
  double         MaxMult               (const Interaction * i)                       const;
  TH1D *         CreateMultProbHist    (double maxmult)                              const;
  void           ApplyRijk             (const Interaction * i, bool norm, TH1D * mp) const;
  double         Wmin                  (void)                                        const;

  TClonesArray* DecayMethod1    (double W, const PDGCodeList & pdgv, bool reweight_decays) const;
  TClonesArray* DecayMethod2    (double W, const PDGCodeList & pdgv, bool reweight_decays) const;
  TClonesArray* DecayBackToBack (double W, const PDGCodeList & pdgv) const;

  bool PhaseSpaceDecay(
         TClonesArray & pl, TLorentzVector & pd,
	   const PDGCodeList & pdgv, int offset=0, bool reweight=false) const;

  mutable TGenPhaseSpace fPhaseSpaceGenerator; ///< a phase space generator
  mutable double         fWeight;              ///< weight for generated event

  // Configuration parameters
  // Note: additional configuration parameters common to all hadronizers
  // (Wcut,Rijk,...) are declared one layer down in the inheritance tree

  bool     fForceNeuGenLimit;    ///< force upper hadronic multiplicity to NeuGEN limit
//bool     fUseLegacyKNOSpline;  ///< use legacy spline instead of Levy
  bool     fUseIsotropic2BDecays;///< force isotropic, non-reweighted 2-body decays for consistency with neugen/daikon
  bool     fUseBaryonXfPt2Param; ///< Generate baryon xF,pT2 from experimental parameterization?
  bool     fReWeightDecays;      ///< Reweight phase space decays?
  bool     fForceDecays;         ///< force decays of unstable hadrons produced?
  bool     fForceMinMult;        ///< force minimum multiplicity if (at low W) generated less?
  bool     fGenerateWeighted;    ///< generate weighted events?
  double   fPhSpRwA;             ///< parameter for phase space decay reweighting
  double   fPpi0;                ///< {pi0 pi0  } production probability
  double   fPpic;                ///< {pi+ pi-  } production probability
  double   fPKc;                 ///< {K+  K-   } production probability
  double   fPK0;                 ///< {K0  K0bar} production probability
  double   fPpi0eta;             ///< {Pi0 eta} production probability
  double   fPeta;                ///< {eta eta} production probability
  double   fAvp;                 ///< offset in average charged hadron multiplicity = f(W) relation for vp
  double   fAvn;                 ///< offset in average charged hadron multiplicity = f(W) relation for vn
  double   fAvbp;                ///< offset in average charged hadron multiplicity = f(W) relation for vbp
  double   fAvbn;                ///< offset in average charged hadron multiplicity = f(W) relation for vbn
  double   fBvp;                 ///< slope  in average charged hadron multiplicity = f(W) relation for vp
  double   fBvn;                 ///< slope  in average charged hadron multiplicity = f(W) relation for vn
  double   fBvbp;                ///< slope  in average charged hadron multiplicity = f(W) relation for vbp
  double   fBvbn;                ///< slope  in average charged hadron multiplicity = f(W) relation for vbn
  double   fAhyperon;            ///< parameter controlling strange baryon production probability via associated production (P=a+b*lnW^2)
  double   fBhyperon;            ///< see above
  double   fCvp;                 ///< Levy function parameter for vp
  double   fCvn;                 ///< Levy function parameter for vn
  double   fCvbp;                ///< Levy function parameter for vbp
  double   fCvbn;                ///< Levy function parameter for vbn
  TF1 *    fBaryonXFpdf;         ///< baryon xF PDF
  TF1 *    fBaryonPT2pdf;        ///< baryon pT^2 PDF

  // nuegen parameters
  double   fWcut;      ///< Rijk applied for W<Wcut (see DIS/RES join scheme)
  double   fRvpCCm2;   ///< Rijk: vp,  CC, multiplicity = 2
  double   fRvpCCm3;   ///< Rijk: vp,  CC, multiplicity = 3
  double   fRvpNCm2;   ///< Rijk: vp,  NC, multiplicity = 2
  double   fRvpNCm3;   ///< Rijk: vp,  NC, multiplicity = 3
  double   fRvpEMm2;   ///< Rijk: vp,  EM, multiplicity = 2
  double   fRvpEMm3;   ///< Rijk: vp,  EM, multiplicity = 3
  double   fRvnCCm2;   ///< Rijk: vn,  CC, multiplicity = 2
  double   fRvnCCm3;   ///< Rijk: vn,  CC, multiplicity = 3
  double   fRvnNCm2;   ///< Rijk: vn,  NC, multiplicity = 2
  double   fRvnNCm3;   ///< Rijk: vn,  NC, multiplicity = 3
  double   fRvnEMm2;   ///< Rijk: vn,  EM, multiplicity = 2
  double   fRvnEMm3;   ///< Rijk: vn,  EM, multiplicity = 3
  double   fRvbpCCm2;  ///< Rijk: vbp, CC, multiplicity = 2
  double   fRvbpCCm3;  ///< Rijk: vbp, CC, multiplicity = 3
  double   fRvbpNCm2;  ///< Rijk: vbp, NC, multiplicity = 2
  double   fRvbpNCm3;  ///< Rijk: vbp, NC, multiplicity = 3
  double   fRvbpEMm2;  ///< Rijk: vbp, EM, multiplicity = 2
  double   fRvbpEMm3;  ///< Rijk: vbp, EM, multiplicity = 3
  double   fRvbnCCm2;  ///< Rijk: vbn, CC, multiplicity = 2
  double   fRvbnCCm3;  ///< Rijk: vbn, CC, multiplicity = 3
  double   fRvbnNCm2;  ///< Rijk: vbn, NC, multiplicity = 2
  double   fRvbnNCm3;  ///< Rijk: vbn, NC, multiplicity = 3
  double   fRvbnEMm2;  ///< Rijk: vbn, EM, multiplicity = 2
  double   fRvbnEMm3;  ///< Rijk: vbn, EM, multiplicity = 3

};

}         // genie namespace

#endif    // _KNO_HADRONIZATION_H_
//____________________________________________________________________________
/*!

\class    genie::CollinsSpillerFragm

\brief    The Collins-Spiller fragmentation function. \n
          Is a concrete implementation of the FragmentationFunctionI interface.

\ref      P.D.B.Collins and T.P.Spiller, J.Phys.G11, 1289 (1984)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  June 15, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _COLLINS_SPILLER_FRAGM_H_
#define _COLLINS_SPILLER_FRAGM_H_

#include <TF1.h>

#include "Physics/Hadronization/FragmentationFunctionI.h"

namespace genie {

class CollinsSpillerFragm : public FragmentationFunctionI {

public:
  CollinsSpillerFragm();
  CollinsSpillerFragm(string config);
  ~CollinsSpillerFragm();

  //! implements the FragmentationFunctionI interface
  double Value     (double z) const;
  double GenerateZ (void)     const;

  //! methods overloading the Algorithm() interface implementation
  //! to build the fragmentation function from configuration data
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void BuildFunction (void);
  TF1 * fFunc;
};

}      // genie namespace

#endif // _COLLINS_SPILLER_FRAGM_H_
//____________________________________________________________________________
/*!

\class    genie::FragmentationFunctionI

\brief    Pure abstract base class.
          Defines the FragmentationFunctionI interface to be implemented by
          any algorithmic class implementing a fragmentation function.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  June 15, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _FRAGMENTATION_FUNCTION_I_H_
#define _FRAGMENTATION_FUNCTION_I_H_

#include "Framework/Algorithm/Algorithm.h"

namespace genie {

class FragmentationFunctionI : public Algorithm {

public:

  virtual ~FragmentationFunctionI();

  //-- define FragmentationFunctionI interface

  virtual double Value     (double z) const = 0;
  virtual double GenerateZ (void)     const = 0;

protected:

  FragmentationFunctionI();
  FragmentationFunctionI(string name);
  FragmentationFunctionI(string name, string config);
};

}      // genie namespace

#endif // _FRAGMENTATION_FUNCTION_I_H_
//____________________________________________________________________________
/*!

\namespace genie::utils::frgmfunc

\brief     Fragmentation functions

\author    Costas Andreopoulos <c.andreopoulos \at cern.ch>
           University of Liverpool

\created   June 15, 2004

\cpright   Copyright (c) 2003-2025, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org           
*/
//____________________________________________________________________________

#ifndef _FRAGMENTATION_FUNCTIONS_H_
#define _FRAGMENTATION_FUNCTIONS_H_

namespace genie    {
namespace utils    {
namespace frgmfunc {

/*!
 \fn    double collins_spiller_func(double * x, double * par)
 \brief The Collins-Spiller fragmentation function
*/
  double collins_spiller_func(double * x, double * par);

/*!
  \fn    double peterson_func(double * x, double * par)
  \brief The Peterson fragmentation function
*/
  double peterson_func(double * x, double * par);

} // frgmfunc namespace
} // utils    namespace
} // genie    namespace

#endif // _FRAGMENTATION_FUNCTIONS_H_
//____________________________________________________________________________
/*!

\class    genie::LeptoHadPythia6

\brief    Provides access to the PYTHIA6 hadronization. \n

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC (Valencia)

\created  December 12, 2024

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _LEPTO_HAD_PYTHIA6__H_
#define _LEPTO_HAD_PYTHIA6__H_

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

class GHepParticle;

class LeptoHadPythia6 : public EventRecordVisitorI {

public:
  LeptoHadPythia6();
  LeptoHadPythia6(string config);
  virtual ~LeptoHadPythia6();

  //-- implement the HadronizationModelI interface
  void ProcessEventRecord(GHepRecord * event) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool           Hadronize        (GHepRecord * event) const;
  void           Initialize       (void)               const;
  void           LoadConfig       (void);

  //-- configuration parameters
  int    fMaxIterHad;         // Maxmium number of iterations to look for a combination of hadrons
  double fPrimordialKT;       // Width of Gaussian distribution for the primordial transverse momentum kT of partons in the nucleon.
  double fRemnantPT;          // Width of Gaussian distribution in transverse momentum when a non-trivial target remnant is split into two particles
  double fMinESinglet;        // It is, with quark masses added, used to define the minimum allowable energy of a colour-singlet parton system.
  double fWmin;               // Minimum value of W

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

}         // genie namespace

#endif    // _LEPTO_HAD_PYTHIA6__H_

//____________________________________________________________________________
/*!

\class    genie::LeptoHadPythia8

\brief    Provides access to the PYTHIA8 hadronization. \n

\author   Alfonso Garcia <aagarciasoto \at km3net.de>
          IFIC (Valencia)

\created  December 12, 2024

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _LEPTO_HAD_PYTHIA8__H_
#define _LEPTO_HAD_PYTHIA8__H_

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

class GHepParticle;

class LeptoHadPythia8 : public EventRecordVisitorI {

public:
  LeptoHadPythia8();
  LeptoHadPythia8(string config);
  virtual ~LeptoHadPythia8();

  //-- implement the HadronizationModelI interface
  void ProcessEventRecord(GHepRecord * event) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool           Hadronize        (GHepRecord * event) const;
  void           Initialize       (void)               const;
  void           LoadConfig       (void);

  int            getMeson         (int,int,double)     const;    ///< create meson
  int            getBaryon        (int,int,double)     const;    ///< create baryon
  double         getRandomZ       (double,double)      const;    ///< fragmentation
  double Afrag;                                                ///< fragmentation parameter
  double Bfrag;                                                ///< fragmentation parameter
  double mesonRateSum[3];                                      ///<meson parameter
  double CGOct[6] = { 0.75, 0.5, 0., 0.1667, 0.0833, 0.1667};  ///<baryon parameter
  double CGDec[6] = { 0.00, 0.0, 1., 0.3333, 0.6667, 0.3333};  ///<baryon parameter
  double CGSum[6];                                             ///< baryon parameter

  //-- configuration parameters
  int    fMaxIterHad;         // Maxmium number of iterations to look for a combination of hadrons
  double fPrimordialKT;       // Width of Gaussian distribution for the primordial transverse momentum kT of partons in the nucleon.
  double fRemnantPT;          // Width of Gaussian distribution in transverse momentum when a non-trivial target remnant is split into two particles
  double fMinESinglet;        // It is, with quark masses added, used to define the minimum allowable energy of a colour-singlet parton system.
  double fWmin;               // Minimum value of W

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
  mutable Pythia8::Pythia * fPythia;         ///< PYTHIA8 object
#endif

};

}         // genie namespace

#endif    // _LEPTO_HAD_PYTHIA8__H_

//____________________________________________________________________________
/*!

\class    genie::PetersonFragm

\brief    The Peterson fragmentation function.
          Is a concrete implementation of the FragmentationFunctionI interface.

\ref      C.Peterson et al., Phys.Rev.D23, 56 (1981)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  June 15, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _PETERSON_FRAGM_H_
#define _PETERSON_FRAGM_H_

#include <TF1.h>

#include "Framework/Interaction/Interaction.h"
#include "Physics/Hadronization/FragmentationFunctionI.h"

namespace genie {

class PetersonFragm : public FragmentationFunctionI {

public:
  PetersonFragm();
  PetersonFragm(string config);
  ~PetersonFragm();

  //! implement the FragmentationFunctionI interface
  double Value     (double z) const;
  double GenerateZ (void)     const;

  //! methods overloading the Algorithm() interface implementation
  //! to build the fragmentation function from configuration data
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void BuildFunction (void);
  TF1 * fFunc;
};

}      // genie namespace

#endif // _PETERSON_FRAGM_H_
//____________________________________________________________________________
/*!

\class    genie::Pythia6Hadro2019

\brief    Provides access to the PYTHIA hadronization models. \n
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  August 17, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _PYTHIA6_HADRONIZATION_H_
#define _PYTHIA6_HADRONIZATION_H_

#include "Framework/Conventions/GBuild.h"
#include "Framework/Interaction/Interaction.h"
#include "Physics/Hadronization/PythiaBaseHadro2019.h"

#ifdef __GENIE_PYTHIA6_ENABLED__
#include <TPythia6.h>
#endif

namespace genie {

class GHepParticle;

class Pythia6Hadro2019 : public PythiaBaseHadro2019 {

public:
  Pythia6Hadro2019();
  Pythia6Hadro2019(string config);
  virtual ~Pythia6Hadro2019();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool Hadronize (GHepRecord* event) const;

  void CopyOriginalDecayFlags     (void) const;
  void SetDesiredDecayFlags       (void) const;
  void RestoreOriginalDecayFlags  (void) const;

  void LoadConfig (void);
  void Initialize (void);

#ifdef __GENIE_PYTHIA6_ENABLED__
  mutable TPythia6 * fPythia;  ///< PYTHIA6 wrapper class
#endif
};

}         // genie namespace

#endif    // _PYTHIA6_HADRONIZATION_H_
//____________________________________________________________________________
/*!

\class    genie::Pythia8Hadro2019

\brief    Provides access to the PYTHIA hadronization models. \n
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

          Shivesh Mandalia <s.p.mandalia@qmul.ac.uk>
          Queen Mary University of London

\created  October 17, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _PYTHIA8_HADRONIZATION_H_
#define _PYTHIA8_HADRONIZATION_H_

#include "Framework/Conventions/GBuild.h"
#include "Framework/Interaction/Interaction.h"
#include "Physics/Hadronization/PythiaBaseHadro2019.h"

#ifdef __GENIE_PYTHIA8_ENABLED__
#include "Framework/Utils/Pythia8Singleton.h"
#endif

namespace genie {

class GHepParticle;

class Pythia8Hadro2019 : public PythiaBaseHadro2019 {

public:
  Pythia8Hadro2019();
  Pythia8Hadro2019(string config);
  virtual ~Pythia8Hadro2019();

  // Implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  bool Hadronize (GHepRecord* event) const;

  void CopyOriginalDecayFlags     (void) const;
  void SetDesiredDecayFlags       (void) const;
  void RestoreOriginalDecayFlags  (void) const;

  void LoadConfig (void);
  void Initialize (void);

};

}         // genie namespace

#endif    // _PYTHIA8_HADRONIZATION_H_
//____________________________________________________________________________
/*!

\class    genie::PythiaBaseHadro2019

\brief    Base class for the Pythia (6 and 8) hadronization modules in GENIE.
          In particular, the base class provides common checks and basic
          assignments of quark/diquark codes for a no frills interface to
          Pythia hadronization routines.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  August 17, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _PYTHIA_HADRONIZATION_BASE_H_
#define _PYTHIA_HADRONIZATION_BASE_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Interaction/Interaction.h"

namespace genie {

class PythiaBaseHadro2019 : public EventRecordVisitorI {

protected:
  PythiaBaseHadro2019();
  PythiaBaseHadro2019(string name);
  PythiaBaseHadro2019(string name, string config);
  virtual ~PythiaBaseHadro2019();

  virtual void ProcessEventRecord         (GHepRecord* event)     const;
  virtual void MakeQuarkDiquarkAssignments(const Interaction* in) const;
  virtual bool AssertValidity             (const Interaction* in) const;
  virtual void Initialize                 (void);
  virtual void LoadConfig                 (void);

  virtual void CopyOriginalDecayFlags     (void) const = 0;
  virtual void SetDesiredDecayFlags       (void) const = 0;
  virtual void RestoreOriginalDecayFlags  (void) const = 0;

  virtual bool Hadronize (GHepRecord* event) const = 0;

  // PDG codes assigned on an event-by-event basis and driving
  // PYTHIA6/8 hadronization routines
  mutable int fLeadingQuark;
  mutable int fRemnantDiquark;

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

  // Original PYTHIA decay flags (stored so as to be restored after hadronization)
  mutable bool fOriDecayFlag_pi0; // pi^0
  mutable bool fOriDecayFlag_K0;  // K^0
  mutable bool fOriDecayFlag_K0b; // \bar{K^0}
  mutable bool fOriDecayFlag_L0;  // \Lambda^0
  mutable bool fOriDecayFlag_L0b; // \bar{\Lambda^0}
  mutable bool fOriDecayFlag_Dm;  // \Delta^-
  mutable bool fOriDecayFlag_D0;  // \Delta^0
  mutable bool fOriDecayFlag_Dp;  // \Delta^+
  mutable bool fOriDecayFlag_Dpp; // \Delta^++
  // Required PYTHIA decay flags set via Configure() [fixed]
  bool fReqDecayFlag_pi0;         // pi^0
  bool fReqDecayFlag_K0;          // K^0
  bool fReqDecayFlag_K0b;         // \bar{K^0}
  bool fReqDecayFlag_L0;          // \Lambda^0
  bool fReqDecayFlag_L0b;         // \bar{\Lambda^0}
  bool fReqDecayFlag_Dm;          // \Delta^-
  bool fReqDecayFlag_D0;          // \Delta^0
  bool fReqDecayFlag_Dp;          // \Delta^+
  bool fReqDecayFlag_Dpp;         // \Delta^++
};

}         // genie namespace

#endif    // _PYTHIA_HADRONIZATION_BASE_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::AGCharmPythia6Hadro2023", payloadCode, "@",
"genie::AGCharmPythia8Hadro2023", payloadCode, "@",
"genie::AGCharmPythiaBaseHadro2023", payloadCode, "@",
"genie::AGKY2019", payloadCode, "@",
"genie::AGKYLowW2019", payloadCode, "@",
"genie::CollinsSpillerFragm", payloadCode, "@",
"genie::FragmentationFunctionI", payloadCode, "@",
"genie::LeptoHadPythia6", payloadCode, "@",
"genie::LeptoHadPythia8", payloadCode, "@",
"genie::PetersonFragm", payloadCode, "@",
"genie::Pythia6Hadro2019", payloadCode, "@",
"genie::Pythia8Hadro2019", payloadCode, "@",
"genie::PythiaBaseHadro2019", payloadCode, "@",
"genie::utils::frgmfunc::collins_spiller_func", payloadCode, "@",
"genie::utils::frgmfunc::peterson_func", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhHadnz",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhHadnz_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhHadnz_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhHadnz() {
  TriggerDictionaryInitialization_libGPhHadnz_Impl();
}
