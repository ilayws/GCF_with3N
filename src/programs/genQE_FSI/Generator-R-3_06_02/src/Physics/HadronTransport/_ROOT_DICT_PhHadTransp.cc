// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhHadTransp
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
#include "CascadeReweight.h"
#include "HAIntranuke.h"
#include "HAIntranuke2018.h"
#include "HG4BertCascIntranuke.h"
#include "HINCLCascadeIntranuke.h"
#include "HNIntranuke2018.h"
#include "HadronTransporter.h"
#include "INCLConfigParser.h"
#include "INukeDeltaPropg.h"
#include "INukeException.h"
#include "INukeHadroData.h"
#include "INukeHadroData2018.h"
#include "INukeNucleonCorr.h"
#include "INukeOset.h"
#include "INukeOsetFormula.h"
#include "INukeOsetTable.h"
#include "INukeUtils.h"
#include "INukeUtils2018.h"
#include "Intranuke.h"
#include "Intranuke2018.h"
#include "NucBindEnergyAggregator.h"

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
      namespace intranuke {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLintranuke_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::intranuke", 0 /*version*/, "", 1802,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLintranuke_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLintranuke_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLCascadeReweight_Dictionary();
   static void geniecLcLCascadeReweight_TClassManip(TClass*);
   static void *new_geniecLcLCascadeReweight(void *p = nullptr);
   static void *newArray_geniecLcLCascadeReweight(Long_t size, void *p);
   static void delete_geniecLcLCascadeReweight(void *p);
   static void deleteArray_geniecLcLCascadeReweight(void *p);
   static void destruct_geniecLcLCascadeReweight(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CascadeReweight*)
   {
      ::genie::CascadeReweight *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::CascadeReweight));
      static ::ROOT::TGenericClassInfo 
         instance("genie::CascadeReweight", "", 28,
                  typeid(::genie::CascadeReweight), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCascadeReweight_Dictionary, isa_proxy, 0,
                  sizeof(::genie::CascadeReweight) );
      instance.SetNew(&new_geniecLcLCascadeReweight);
      instance.SetNewArray(&newArray_geniecLcLCascadeReweight);
      instance.SetDelete(&delete_geniecLcLCascadeReweight);
      instance.SetDeleteArray(&deleteArray_geniecLcLCascadeReweight);
      instance.SetDestructor(&destruct_geniecLcLCascadeReweight);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CascadeReweight*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::CascadeReweight*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::CascadeReweight*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCascadeReweight_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::CascadeReweight*>(nullptr))->GetClass();
      geniecLcLCascadeReweight_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCascadeReweight_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLIntranuke_Dictionary();
   static void geniecLcLIntranuke_TClassManip(TClass*);
   static void delete_geniecLcLIntranuke(void *p);
   static void deleteArray_geniecLcLIntranuke(void *p);
   static void destruct_geniecLcLIntranuke(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Intranuke*)
   {
      ::genie::Intranuke *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Intranuke));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Intranuke", "Intranuke.h", 54,
                  typeid(::genie::Intranuke), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIntranuke_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Intranuke) );
      instance.SetDelete(&delete_geniecLcLIntranuke);
      instance.SetDeleteArray(&deleteArray_geniecLcLIntranuke);
      instance.SetDestructor(&destruct_geniecLcLIntranuke);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Intranuke*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Intranuke*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Intranuke*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIntranuke_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Intranuke*>(nullptr))->GetClass();
      geniecLcLIntranuke_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIntranuke_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHAIntranuke_Dictionary();
   static void geniecLcLHAIntranuke_TClassManip(TClass*);
   static void *new_geniecLcLHAIntranuke(void *p = nullptr);
   static void *newArray_geniecLcLHAIntranuke(Long_t size, void *p);
   static void delete_geniecLcLHAIntranuke(void *p);
   static void deleteArray_geniecLcLHAIntranuke(void *p);
   static void destruct_geniecLcLHAIntranuke(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HAIntranuke*)
   {
      ::genie::HAIntranuke *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HAIntranuke));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HAIntranuke", "", 112,
                  typeid(::genie::HAIntranuke), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHAIntranuke_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HAIntranuke) );
      instance.SetNew(&new_geniecLcLHAIntranuke);
      instance.SetNewArray(&newArray_geniecLcLHAIntranuke);
      instance.SetDelete(&delete_geniecLcLHAIntranuke);
      instance.SetDeleteArray(&deleteArray_geniecLcLHAIntranuke);
      instance.SetDestructor(&destruct_geniecLcLHAIntranuke);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HAIntranuke*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HAIntranuke*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HAIntranuke*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHAIntranuke_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HAIntranuke*>(nullptr))->GetClass();
      geniecLcLHAIntranuke_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHAIntranuke_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLIntranuke2018_Dictionary();
   static void geniecLcLIntranuke2018_TClassManip(TClass*);
   static void delete_geniecLcLIntranuke2018(void *p);
   static void deleteArray_geniecLcLIntranuke2018(void *p);
   static void destruct_geniecLcLIntranuke2018(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Intranuke2018*)
   {
      ::genie::Intranuke2018 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Intranuke2018));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Intranuke2018", "Intranuke2018.h", 54,
                  typeid(::genie::Intranuke2018), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLIntranuke2018_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Intranuke2018) );
      instance.SetDelete(&delete_geniecLcLIntranuke2018);
      instance.SetDeleteArray(&deleteArray_geniecLcLIntranuke2018);
      instance.SetDestructor(&destruct_geniecLcLIntranuke2018);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Intranuke2018*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Intranuke2018*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Intranuke2018*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLIntranuke2018_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Intranuke2018*>(nullptr))->GetClass();
      geniecLcLIntranuke2018_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLIntranuke2018_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHAIntranuke2018_Dictionary();
   static void geniecLcLHAIntranuke2018_TClassManip(TClass*);
   static void *new_geniecLcLHAIntranuke2018(void *p = nullptr);
   static void *newArray_geniecLcLHAIntranuke2018(Long_t size, void *p);
   static void delete_geniecLcLHAIntranuke2018(void *p);
   static void deleteArray_geniecLcLHAIntranuke2018(void *p);
   static void destruct_geniecLcLHAIntranuke2018(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HAIntranuke2018*)
   {
      ::genie::HAIntranuke2018 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HAIntranuke2018));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HAIntranuke2018", "", 197,
                  typeid(::genie::HAIntranuke2018), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHAIntranuke2018_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HAIntranuke2018) );
      instance.SetNew(&new_geniecLcLHAIntranuke2018);
      instance.SetNewArray(&newArray_geniecLcLHAIntranuke2018);
      instance.SetDelete(&delete_geniecLcLHAIntranuke2018);
      instance.SetDeleteArray(&deleteArray_geniecLcLHAIntranuke2018);
      instance.SetDestructor(&destruct_geniecLcLHAIntranuke2018);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HAIntranuke2018*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HAIntranuke2018*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HAIntranuke2018*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHAIntranuke2018_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HAIntranuke2018*>(nullptr))->GetClass();
      geniecLcLHAIntranuke2018_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHAIntranuke2018_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHNIntranuke2018_Dictionary();
   static void geniecLcLHNIntranuke2018_TClassManip(TClass*);
   static void *new_geniecLcLHNIntranuke2018(void *p = nullptr);
   static void *newArray_geniecLcLHNIntranuke2018(Long_t size, void *p);
   static void delete_geniecLcLHNIntranuke2018(void *p);
   static void deleteArray_geniecLcLHNIntranuke2018(void *p);
   static void destruct_geniecLcLHNIntranuke2018(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HNIntranuke2018*)
   {
      ::genie::HNIntranuke2018 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HNIntranuke2018));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HNIntranuke2018", "", 472,
                  typeid(::genie::HNIntranuke2018), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHNIntranuke2018_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HNIntranuke2018) );
      instance.SetNew(&new_geniecLcLHNIntranuke2018);
      instance.SetNewArray(&newArray_geniecLcLHNIntranuke2018);
      instance.SetDelete(&delete_geniecLcLHNIntranuke2018);
      instance.SetDeleteArray(&deleteArray_geniecLcLHNIntranuke2018);
      instance.SetDestructor(&destruct_geniecLcLHNIntranuke2018);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HNIntranuke2018*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HNIntranuke2018*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HNIntranuke2018*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHNIntranuke2018_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HNIntranuke2018*>(nullptr))->GetClass();
      geniecLcLHNIntranuke2018_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHNIntranuke2018_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHadronTransporter_Dictionary();
   static void geniecLcLHadronTransporter_TClassManip(TClass*);
   static void *new_geniecLcLHadronTransporter(void *p = nullptr);
   static void *newArray_geniecLcLHadronTransporter(Long_t size, void *p);
   static void delete_geniecLcLHadronTransporter(void *p);
   static void deleteArray_geniecLcLHadronTransporter(void *p);
   static void destruct_geniecLcLHadronTransporter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HadronTransporter*)
   {
      ::genie::HadronTransporter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HadronTransporter));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HadronTransporter", "", 541,
                  typeid(::genie::HadronTransporter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHadronTransporter_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HadronTransporter) );
      instance.SetNew(&new_geniecLcLHadronTransporter);
      instance.SetNewArray(&newArray_geniecLcLHadronTransporter);
      instance.SetDelete(&delete_geniecLcLHadronTransporter);
      instance.SetDeleteArray(&deleteArray_geniecLcLHadronTransporter);
      instance.SetDestructor(&destruct_geniecLcLHadronTransporter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HadronTransporter*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HadronTransporter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HadronTransporter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHadronTransporter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HadronTransporter*>(nullptr))->GetClass();
      geniecLcLHadronTransporter_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHadronTransporter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLINukeDeltaPropg_Dictionary();
   static void geniecLcLINukeDeltaPropg_TClassManip(TClass*);
   static void *new_geniecLcLINukeDeltaPropg(void *p = nullptr);
   static void *newArray_geniecLcLINukeDeltaPropg(Long_t size, void *p);
   static void delete_geniecLcLINukeDeltaPropg(void *p);
   static void deleteArray_geniecLcLINukeDeltaPropg(void *p);
   static void destruct_geniecLcLINukeDeltaPropg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::INukeDeltaPropg*)
   {
      ::genie::INukeDeltaPropg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::INukeDeltaPropg));
      static ::ROOT::TGenericClassInfo 
         instance("genie::INukeDeltaPropg", "", 685,
                  typeid(::genie::INukeDeltaPropg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLINukeDeltaPropg_Dictionary, isa_proxy, 0,
                  sizeof(::genie::INukeDeltaPropg) );
      instance.SetNew(&new_geniecLcLINukeDeltaPropg);
      instance.SetNewArray(&newArray_geniecLcLINukeDeltaPropg);
      instance.SetDelete(&delete_geniecLcLINukeDeltaPropg);
      instance.SetDeleteArray(&deleteArray_geniecLcLINukeDeltaPropg);
      instance.SetDestructor(&destruct_geniecLcLINukeDeltaPropg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::INukeDeltaPropg*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::INukeDeltaPropg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::INukeDeltaPropg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLINukeDeltaPropg_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::INukeDeltaPropg*>(nullptr))->GetClass();
      geniecLcLINukeDeltaPropg_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLINukeDeltaPropg_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLINukeHadroData_Dictionary();
   static void geniecLcLINukeHadroData_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::INukeHadroData*)
   {
      ::genie::INukeHadroData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::INukeHadroData));
      static ::ROOT::TGenericClassInfo 
         instance("genie::INukeHadroData", "", 826,
                  typeid(::genie::INukeHadroData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLINukeHadroData_Dictionary, isa_proxy, 0,
                  sizeof(::genie::INukeHadroData) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::INukeHadroData*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::INukeHadroData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::INukeHadroData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLINukeHadroData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::INukeHadroData*>(nullptr))->GetClass();
      geniecLcLINukeHadroData_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLINukeHadroData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLINukeHadroData2018_Dictionary();
   static void geniecLcLINukeHadroData2018_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::INukeHadroData2018*)
   {
      ::genie::INukeHadroData2018 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::INukeHadroData2018));
      static ::ROOT::TGenericClassInfo 
         instance("genie::INukeHadroData2018", "", 1132,
                  typeid(::genie::INukeHadroData2018), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLINukeHadroData2018_Dictionary, isa_proxy, 0,
                  sizeof(::genie::INukeHadroData2018) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::INukeHadroData2018*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::INukeHadroData2018*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::INukeHadroData2018*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLINukeHadroData2018_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::INukeHadroData2018*>(nullptr))->GetClass();
      geniecLcLINukeHadroData2018_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLINukeHadroData2018_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNucBindEnergyAggregator_Dictionary();
   static void geniecLcLNucBindEnergyAggregator_TClassManip(TClass*);
   static void *new_geniecLcLNucBindEnergyAggregator(void *p = nullptr);
   static void *newArray_geniecLcLNucBindEnergyAggregator(Long_t size, void *p);
   static void delete_geniecLcLNucBindEnergyAggregator(void *p);
   static void deleteArray_geniecLcLNucBindEnergyAggregator(void *p);
   static void destruct_geniecLcLNucBindEnergyAggregator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NucBindEnergyAggregator*)
   {
      ::genie::NucBindEnergyAggregator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NucBindEnergyAggregator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NucBindEnergyAggregator", "", 2329,
                  typeid(::genie::NucBindEnergyAggregator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNucBindEnergyAggregator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NucBindEnergyAggregator) );
      instance.SetNew(&new_geniecLcLNucBindEnergyAggregator);
      instance.SetNewArray(&newArray_geniecLcLNucBindEnergyAggregator);
      instance.SetDelete(&delete_geniecLcLNucBindEnergyAggregator);
      instance.SetDeleteArray(&deleteArray_geniecLcLNucBindEnergyAggregator);
      instance.SetDestructor(&destruct_geniecLcLNucBindEnergyAggregator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NucBindEnergyAggregator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NucBindEnergyAggregator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NucBindEnergyAggregator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNucBindEnergyAggregator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NucBindEnergyAggregator*>(nullptr))->GetClass();
      geniecLcLNucBindEnergyAggregator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNucBindEnergyAggregator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCascadeReweight(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CascadeReweight : new ::genie::CascadeReweight;
   }
   static void *newArray_geniecLcLCascadeReweight(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CascadeReweight[nElements] : new ::genie::CascadeReweight[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCascadeReweight(void *p) {
      delete (static_cast<::genie::CascadeReweight*>(p));
   }
   static void deleteArray_geniecLcLCascadeReweight(void *p) {
      delete [] (static_cast<::genie::CascadeReweight*>(p));
   }
   static void destruct_geniecLcLCascadeReweight(void *p) {
      typedef ::genie::CascadeReweight current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::CascadeReweight

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLIntranuke(void *p) {
      delete (static_cast<::genie::Intranuke*>(p));
   }
   static void deleteArray_geniecLcLIntranuke(void *p) {
      delete [] (static_cast<::genie::Intranuke*>(p));
   }
   static void destruct_geniecLcLIntranuke(void *p) {
      typedef ::genie::Intranuke current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Intranuke

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHAIntranuke(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HAIntranuke : new ::genie::HAIntranuke;
   }
   static void *newArray_geniecLcLHAIntranuke(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HAIntranuke[nElements] : new ::genie::HAIntranuke[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHAIntranuke(void *p) {
      delete (static_cast<::genie::HAIntranuke*>(p));
   }
   static void deleteArray_geniecLcLHAIntranuke(void *p) {
      delete [] (static_cast<::genie::HAIntranuke*>(p));
   }
   static void destruct_geniecLcLHAIntranuke(void *p) {
      typedef ::genie::HAIntranuke current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HAIntranuke

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLIntranuke2018(void *p) {
      delete (static_cast<::genie::Intranuke2018*>(p));
   }
   static void deleteArray_geniecLcLIntranuke2018(void *p) {
      delete [] (static_cast<::genie::Intranuke2018*>(p));
   }
   static void destruct_geniecLcLIntranuke2018(void *p) {
      typedef ::genie::Intranuke2018 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Intranuke2018

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHAIntranuke2018(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HAIntranuke2018 : new ::genie::HAIntranuke2018;
   }
   static void *newArray_geniecLcLHAIntranuke2018(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HAIntranuke2018[nElements] : new ::genie::HAIntranuke2018[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHAIntranuke2018(void *p) {
      delete (static_cast<::genie::HAIntranuke2018*>(p));
   }
   static void deleteArray_geniecLcLHAIntranuke2018(void *p) {
      delete [] (static_cast<::genie::HAIntranuke2018*>(p));
   }
   static void destruct_geniecLcLHAIntranuke2018(void *p) {
      typedef ::genie::HAIntranuke2018 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HAIntranuke2018

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHNIntranuke2018(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HNIntranuke2018 : new ::genie::HNIntranuke2018;
   }
   static void *newArray_geniecLcLHNIntranuke2018(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HNIntranuke2018[nElements] : new ::genie::HNIntranuke2018[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHNIntranuke2018(void *p) {
      delete (static_cast<::genie::HNIntranuke2018*>(p));
   }
   static void deleteArray_geniecLcLHNIntranuke2018(void *p) {
      delete [] (static_cast<::genie::HNIntranuke2018*>(p));
   }
   static void destruct_geniecLcLHNIntranuke2018(void *p) {
      typedef ::genie::HNIntranuke2018 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HNIntranuke2018

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHadronTransporter(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HadronTransporter : new ::genie::HadronTransporter;
   }
   static void *newArray_geniecLcLHadronTransporter(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HadronTransporter[nElements] : new ::genie::HadronTransporter[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHadronTransporter(void *p) {
      delete (static_cast<::genie::HadronTransporter*>(p));
   }
   static void deleteArray_geniecLcLHadronTransporter(void *p) {
      delete [] (static_cast<::genie::HadronTransporter*>(p));
   }
   static void destruct_geniecLcLHadronTransporter(void *p) {
      typedef ::genie::HadronTransporter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HadronTransporter

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLINukeDeltaPropg(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::INukeDeltaPropg : new ::genie::INukeDeltaPropg;
   }
   static void *newArray_geniecLcLINukeDeltaPropg(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::INukeDeltaPropg[nElements] : new ::genie::INukeDeltaPropg[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLINukeDeltaPropg(void *p) {
      delete (static_cast<::genie::INukeDeltaPropg*>(p));
   }
   static void deleteArray_geniecLcLINukeDeltaPropg(void *p) {
      delete [] (static_cast<::genie::INukeDeltaPropg*>(p));
   }
   static void destruct_geniecLcLINukeDeltaPropg(void *p) {
      typedef ::genie::INukeDeltaPropg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::INukeDeltaPropg

namespace ROOT {
} // end of namespace ROOT for class ::genie::INukeHadroData

namespace ROOT {
} // end of namespace ROOT for class ::genie::INukeHadroData2018

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNucBindEnergyAggregator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NucBindEnergyAggregator : new ::genie::NucBindEnergyAggregator;
   }
   static void *newArray_geniecLcLNucBindEnergyAggregator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NucBindEnergyAggregator[nElements] : new ::genie::NucBindEnergyAggregator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNucBindEnergyAggregator(void *p) {
      delete (static_cast<::genie::NucBindEnergyAggregator*>(p));
   }
   static void deleteArray_geniecLcLNucBindEnergyAggregator(void *p) {
      delete [] (static_cast<::genie::NucBindEnergyAggregator*>(p));
   }
   static void destruct_geniecLcLNucBindEnergyAggregator(void *p) {
      typedef ::genie::NucBindEnergyAggregator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NucBindEnergyAggregator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhHadTransp() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhHadTransp) = RecordReadRules_libGPhHadTransp();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhHadTransp));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhHadTransp_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/HadronTransport",
"GENIE",
"GENIE/Physics/HadronTransport",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/HadronTransport",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/HadronTransport/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhHadTransp dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  CascadeReweight;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/HadronTransport/Intranuke.h")))  Intranuke;}
namespace genie{class  HAIntranuke;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/HadronTransport/Intranuke2018.h")))  Intranuke2018;}
namespace genie{class  HAIntranuke2018;}
namespace genie{class  HNIntranuke2018;}
namespace genie{class  HadronTransporter;}
namespace genie{class  INukeDeltaPropg;}
namespace genie{class  INukeHadroData;}
namespace genie{class  INukeHadroData2018;}
namespace genie{class  NucBindEnergyAggregator;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhHadTransp dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::CascadeReweight

\brief    In this module, the event weight is set depending on the FSI fate. 
          The weights are set depending on the xml configuration defined by the user
\author   Julia Tena-Vidal <j.tena-vidal \at liverpool.ac.uk>

\created  July 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _CASCADE_REWEIGHT_H_
#define _CASCADE_REWEIGHT_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Physics/HadronTransport/INukeHadroFates2018.h" 

namespace genie {

class CascadeReweight : public EventRecordVisitorI {

public :
  CascadeReweight();
  CascadeReweight(string config);
 ~CascadeReweight();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);
 protected:
  double GetEventWeight (const GHepRecord & ev) const; ///< get weight from fate and configuration

private:
  void LoadConfig     (void); ///< read configuration from xml file

  static const std::map<INukeFateHN_t,string> & GetEINukeFateKeysMap( void ) {
    static const std::map<INukeFateHN_t,string> map_keys { {kIHNFtNoInteraction,"NoInteraction"},{kIHNFtCEx,"CEx"}, {kIHNFtElas,"Elastic"}, {kIHNFtInelas,"Inelastic"},{kIHNFtAbs,"Abs"}, {kIHNFtCmp,"Cmp"} } ;
    return map_keys ; 
  }

  // Class member
  std::map< INukeFateHN_t, double > fDefaultMap ; // fate, weight 
  std::map< INukeFateHN_t, map<int,double> > fFateWeightsMap ; // < fate, <pdg,weight> > 

};

}      // genie namespace
#endif // _CASCADE_REWEIGHT_H_
//____________________________________________________________________________
/*!

\class    genie::Intranuke

\brief    The INTRANUKE intranuclear hadron transport MC.
          Is a concrete implementation of the EventRecordVisitorI interface.

\ref      R.Merenyi et al., Phys.Rev.D45 (1992)
          R.D.Ransome, Nucl.Phys.B 139 (2005)

          Current INTRANUKE development is led by S.Dytman and H.Gallagher.
          The original INTRANUKE cascade MC was developed (in fortran) for the
          NeuGEN MC by R.Edgecock, G.F.Pearce, W.A.Mann, R.Merenyi and others.

\author   Steve Dytman <dytman+@pitt.edu>, Pittsburgh University
          Aaron Meyer <asm58@pitt.edu>, Pittsburgh University
	  Alex Bell, Pittsburgh University
          Hugh Gallagher <gallag@minos.phy.tufts.edu>, Tufts University
          Costas Andreopoulos <c.andreopoulos \at cern.ch> STFC, Rutherford Lab

\created  September 20, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _HA_INTRANUKE_H_
#define _HA_INTRANUKE_H_

#include <TGenPhaseSpace.h>

#include "Physics/NuclearState/NuclearModelI.h"
#include "Framework/Algorithm/AlgFactory.h"
#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Physics/HadronTransport/INukeMode.h"
#include "Physics/HadronTransport/INukeHadroFates.h"
#include "Physics/HadronTransport/Intranuke.h"

class TLorentzVector;
class TVector3;

namespace genie {

class GHepParticle;
class INukeHadroData;
class PDGCodeList;

class HAIntranuke : public Intranuke {

friend class IntranukeTester;

public :
  HAIntranuke();
  HAIntranuke(string config);
 ~HAIntranuke();

  void ProcessEventRecord(GHepRecord * event_rec) const;

  virtual void Configure (string param_set);

private:

  void LoadConfig (void);

  void  SimulateHadronicFinalState           (GHepRecord* ev, GHepParticle* p) const;
  void  SimulateHadronicFinalStateKinematics (GHepRecord* ev, GHepParticle* p) const;

  INukeFateHA_t HadronFateHA     (const GHepParticle* p) const;
  void          Inelastic        (GHepRecord* ev, GHepParticle* p, INukeFateHA_t fate) const;
  void          ElasHA           (GHepRecord* ev, GHepParticle* p, INukeFateHA_t fate) const;
  void          InelasticHA      (GHepRecord* ev, GHepParticle* p, INukeFateHA_t fate) const;
  double        PiBounce         (void) const;
  double        PnBounce         (void) const;
  bool          HandleCompoundNucleus(GHepRecord* ev, GHepParticle* p, int mom) const;           

  mutable unsigned int fNumIterations;
};

}      // genie namespace

#endif // _HA_INTRANUKE_H_
//____________________________________________________________________________
/*!

\class    genie::Intranuke

\brief    The INTRANUKE intranuclear hadron transport MC.
          Is a concrete implementation of the EventRecordVisitorI interface.

\ref      R.Merenyi et al., Phys.Rev.D45 (1992)
          R.D.Ransome, Nucl.Phys.B 139 (2005)

          Current INTRANUKE development is led by S.Dytman and H.Gallagher.
          The original INTRANUKE cascade MC was developed (in fortran) for the
          NeuGEN MC by R.Edgecock, G.F.Pearce, W.A.Mann, R.Merenyi and others.

\author   Steve Dytman <dytman+@pitt.edu>, Pittsburgh University
          Aaron Meyer <asm58@pitt.edu>, Pittsburgh University
	  Alex Bell, Pittsburgh University
          Hugh Gallagher <gallag@minos.phy.tufts.edu>, Tufts University
          Costas Andreopoulos <c.andreopoulos \at cern.ch> STFC, Rutherford Lab

\created  September 20, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _HA_INTRANUKE_2018_H_
#define _HA_INTRANUKE_2018_H_

#include <TGenPhaseSpace.h>

#include "Physics/NuclearState/NuclearModelI.h"
#include "Framework/Algorithm/AlgFactory.h"
#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Physics/HadronTransport/INukeMode.h"
#include "Physics/HadronTransport/INukeHadroFates2018.h"
#include "Physics/HadronTransport/Intranuke2018.h"

class TLorentzVector;
class TVector3;

namespace genie {

class GHepParticle;
class INukeHadroData2018;
class PDGCodeList;

class HAIntranuke2018 : public Intranuke2018 {

friend class IntranukeTester;

public :
  HAIntranuke2018();
  HAIntranuke2018(string config);
 ~HAIntranuke2018();

  void ProcessEventRecord(GHepRecord * event_rec) const;

  virtual string GetINukeMode() const {return "hA2018";};
  virtual string GetGenINukeMode() const {return "hA";};

private:

  void LoadConfig (void);

  void  SimulateHadronicFinalState           (GHepRecord* ev, GHepParticle* p) const;
  void  SimulateHadronicFinalStateKinematics (GHepRecord* ev, GHepParticle* p) const;

  INukeFateHA_t HadronFateHA     (const GHepParticle* p) const;
  //INukeFateHA_t HadronFateOset   (void) const;
  void          Inelastic        (GHepRecord* ev, GHepParticle* p, INukeFateHA_t fate) const;
  void          ElasHA           (GHepRecord* ev, GHepParticle* p, INukeFateHA_t fate) const;
  void          InelasticHA      (GHepRecord* ev, GHepParticle* p, INukeFateHA_t fate) const;
  double        PiBounce         (void) const;
  double        PnBounce         (void) const;
  int           HandleCompoundNucleus(GHepRecord* ev, GHepParticle* p, int mom) const;           

  mutable int nuclA;     ///< value of A for the target nucleus in hA mode
  mutable unsigned int fNumIterations;
};

}      // genie namespace

#endif // _HA_INTRANUKE_2018_H_
#include "Framework/Conventions/GBuild.h"
#ifdef __GENIE_GEANT4_INTERFACE_ENABLED__
//____________________________________________________________________________
/*!

\class    genie::HG4BertCascIntranuke

\brief    Interface to the Geant4 Bertini intranuclear cascade
          A concrete implementation of the EventRecordVisitorI interface

\ref      D.H. Wright and M.H. Kelsey, "The Geant4 Bertini Cascade",
          Nucl. Inst. & Meth. A804 (2015) 175.

\author   Dennis Wright <dwright@slac.stanford.edu>

\created  31 January 2017

*/
//____________________________________________________________________________

#ifndef _HG4BERTCASCINTERNUKE_H_
#define _HG4BERTCASCINTERNUKE_H_
#include "Framework/Conventions/GBuild.h"

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/GMode.h"
#include "Physics/NuclearState/NuclearModelI.h"


#include <TLorentzVector.h>
class TVector3;

#include <string>
using std::string;

class G4ParticleDefinition;
class G4KineticTrackVector;

namespace genie {

class AlgFactory;
class GHepParticle;
class INukeHadroData;


class HG4BertCascIntranuke : public EventRecordVisitorI {

public :
  HG4BertCascIntranuke();
  HG4BertCascIntranuke(string config);
  int G4BertCascade(GHepRecord * event_rec) const;
 ~HG4BertCascIntranuke();

  void ProcessEventRecord(GHepRecord* event_rec) const;
  virtual string GetINukeMode() const {return "hG4BertCasc";};


  void Configure(const Registry & config);
  void Configure(string param_set);

private:

  void LoadConfig (void);

  void InitG4Particles() const;
  void TransportHadrons(GHepRecord* ev) const;
  const G4ParticleDefinition* PDGtoG4Particle(int pdg) const;
  G4KineticTrackVector* ConvertGenieSecondariesToG4(GHepRecord* evrec) const;
  G4KineticTrackVector* ConvertGenieSecondariesToG4(std::vector<GHepParticle> partList) const;

  bool   Conserve4Momentum  (GHepRecord* ev) const;
  bool   CanRescatter       (const GHepParticle* p) const;
  bool   IsBaryon           (const GHepParticle* p) const;
  void   GenerateVertex     (GHepRecord * ev) const;
  bool   IsInNucleus        (const GHepParticle* p) const;
  void   SetTrackingRadius  (const GHepParticle* p) const;
  double GenerateStep       (GHepRecord* ev, GHepParticle* p) const;
  bool   NeedsRescattering  (const GHepParticle * p) const;

  // utility objects & params
  mutable double fTrackingRadius;  // tracking radius for nucleus current event

  const NuclearModelI* fNuclmodel; // nuclear model used to generate fermi momentum
  mutable int fRemnA;              // remnant nucleus A
  mutable int fRemnZ;              // remnant nucleus Z
  mutable GEvGenMode_t   fGMode;
  // configuration parameters
  double fR0;                      // effective nuclear size param
  double fNR;                      // param multiplying the nuclear radius,
                                   // determining how far to track hadrons
                                   //  beyond the "nuclear boundary"
  double       fNucRmvE;      ///< binding energy to subtract from cascade nucleons
  double       fDelRPion;     ///< factor by which Pion Compton wavelength gets multiplied to become nuclear size enhancement
  double       fDelRNucleon;  ///< factor by which Nucleon Compton wavelength gets multiplied to become nuclear size enhancement
  double       fHadStep;      ///< step size for intranuclear hadron transport
  double       fNucAbsFac;    ///< absorption xsec correction factor (hN Mode)
  double       fNucCEXFac;    ///< charge exchange xsec correction factor (hN Mode)
  double       fEPreEq;       ///< threshold for pre-equilibrium reaction
  double       fFermiFac;     ///< testing parameter to modify fermi momentum
  double       fFermiMomentum;     ///< whether or not particle collision is pauli blocked
  bool         fUseOset;      ///< Oset model for low energy pion in hN
  bool         fAltOset;      ///< NuWro's table-based implementation (not recommended)
  bool         fXsecNNCorr;   ///< use nuclear medium correction for NN cross section
  bool         fDoFermi;
  double       fPionMFPScale;
  double       fNucleonMFPScale;
};

}      // genie namespace

#endif // _HG4BERTCASCINTERNUKE_H_
#endif // __GENIE_GEANT4_INTERFACE_ENABLED__
#include "Framework/Conventions/GBuild.h"
#ifdef __GENIE_INCL_ENABLED__

#ifndef _HINCLCascadeIntranuke_H_
#define _HINCLCascadeIntranuke_H_

#include <string>
using std::string;

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/GMode.h"

#include <TLorentzVector.h>

namespace G4INCL {
  class Config;
  class INCL;
  class IDeExcitation;
}

namespace genie {

  class GHepParticle;

  class HINCLCascadeIntranuke: public EventRecordVisitorI {

  public :
    HINCLCascadeIntranuke();
    HINCLCascadeIntranuke(std::string config);
    ~HINCLCascadeIntranuke();

    int pdgcpiontoA(int pdgc) const;
    int pdgcpiontoZ(int pdgc) const;

    // implement the EventRecordVisitorI interface
    // also the LoadConfig interface

    void Configure (const Registry & config);
    void Configure (string param_set);

    virtual void ProcessEventRecord(GHepRecord * event_rec) const;

  protected:
    virtual void LoadConfig (void);

    bool CanRescatter(const GHepParticle * p) const;
    bool IsInNucleus(const GHepParticle * p) const;
    void TransportHadrons(GHepRecord * evrec) const;
    int  doCascade(GHepRecord * event_rec) const;
    bool NeedsRescattering(const GHepParticle * p) const;

    bool AddDataPathFlags(size_t& nflags, char** flags);
    bool LookForAndAddValidPath(std::vector<std::string>& datapaths,
                                size_t defaultIndx,
                                const char* optString,
                                size_t& nflags, char** flags);


    mutable int            fRemnA;         ///< remnant nucleus A
    mutable int            fRemnZ;         ///< remnant nucleus Z
    mutable TLorentzVector fRemnP4;        ///< P4 of remnant system
    mutable GEvGenMode_t   fGMode;

    mutable G4INCL::Config        *theINCLConfig;
    mutable G4INCL::INCL          *theINCLModel;
    mutable G4INCL::IDeExcitation *theDeExcitation;

  };

}

#endif
#endif // __GENIE_INCL_ENABLED__
//____________________________________________________________________________
/*!

\class    genie::Intranuke

\brief    The INTRANUKE intranuclear hadron transport MC.
          Is a concrete implementation of the EventRecordVisitorI interface.

\ref      R.Merenyi et al., Phys.Rev.D45 (1992)
          R.D.Ransome, Nucl.Phys.B 139 (2005)

          Current INTRANUKE development is led by S.Dytman and H.Gallagher.
          The original INTRANUKE cascade MC was developed (in fortran) for the
          NeuGEN MC by R.Edgecock, G.F.Pearce, W.A.Mann, R.Merenyi and others.

\author   Steve Dytman <dytman+@pitt.edu>, Pittsburgh University
          Aaron Meyer <asm58@pitt.edu>, Pittsburgh University
	  Alex Bell, Pittsburgh University
          Hugh Gallagher <gallag@minos.phy.tufts.edu>, Tufts University
          Costas Andreopoulos <c.andreopoulos \at cern.ch> STFC, Rutherford Lab

\created  September 20, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _HN_INTRANUKE_2018_H_
#define _HN_INTRANUKE_2018_H_

#include <TGenPhaseSpace.h>

#include "Physics/NuclearState/NuclearModelI.h"
#include "Framework/Algorithm/AlgFactory.h"
#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Physics/HadronTransport/INukeMode.h"
#include "Physics/HadronTransport/INukeHadroFates.h"
#include "Physics/HadronTransport/Intranuke2018.h"

class TLorentzVector;
class TVector3;

namespace genie {

class GHepParticle;
class INukeHadroData;
class PDGCodeList;

class HNIntranuke2018 : public Intranuke2018 { 

friend class IntranukeTester;

public :
  HNIntranuke2018();
  HNIntranuke2018(string config);
 ~HNIntranuke2018();

  void ProcessEventRecord(GHepRecord * event_rec) const;

  virtual string GetINukeMode() const {return "hN2018";};
  virtual string GetGenINukeMode() const {return "hN";};

private:

  void LoadConfig (void);

  // methods specific to intranuke HN-mode
  void          SimulateHadronicFinalState (GHepRecord* ev, GHepParticle* p) const;
  INukeFateHN_t HadronFateHN      (const GHepParticle* p) const;
  INukeFateHN_t HadronFateOset () const;
  double        FateWeight        (int pdgc, INukeFateHN_t fate) const;
  void          ElasHN	          (GHepRecord* ev, GHepParticle* p, INukeFateHN_t fate) const;
  void          AbsorbHN	  (GHepRecord* ev, GHepParticle* p, INukeFateHN_t fate) const;
  void          InelasticHN	  (GHepRecord* ev, GHepParticle* p) const;
  void          GammaInelasticHN  (GHepRecord* ev, GHepParticle* p, INukeFateHN_t fate) const; 
  bool          HandleCompoundNucleusHN (GHepRecord* ev, GHepParticle* p) const;
  int           HandleCompoundNucleus(GHepRecord* ev, GHepParticle* p, int mom) const;           

   mutable int nuclA;     ///< value of A for the target nucleus in hA mode

  // data members specific to intranuke HN-mode
  double fNucQEFac;

};

}      // genie namespace

#endif // _HN_INTRANUKE_ALT_H_

//____________________________________________________________________________
/*!

\class    genie::HadronTransporter

\brief    Intranuclear hadronic transport module. 
          It is being used to transfer all hadrons outside the nucleus without
          rescattering -if rescattering is switched off- or to call one of the 
          supported hadron transport MCs -if rescattering is switched on-
         
\author   Costas Andreopoulos <c.andreopoulos \at cern.ch> STFC, Rutherford Lab

\created  September 14, 2006

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _HADRON_TRANSPORTER_H_
#define _HADRON_TRANSPORTER_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class HadronTransporter : public EventRecordVisitorI {

public :
  HadronTransporter();
  HadronTransporter(string config);
 ~HadronTransporter();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  void  LoadConfig                (void);
  void  TransportInTransparentNuc (GHepRecord * ev) const;

  bool  fEnabled;                              ///< hadron transport enabled?
  const EventRecordVisitorI * fHadTranspModel; ///< hadron transport MC to use
  const EventRecordVisitorI * fCascadeReweight; ///< Cascade reweight member

};

}      // genie namespace
#endif // _HADRON_TRANSPORTER_H_
#include "Framework/Conventions/GBuild.h"
#ifdef __GENIE_INCL_ENABLED__

/** \file INCLConfigParser.h
 * \brief A class for parsing input and producing a INCL++ Config
 *        Copied from INC++ main
 *  class name can't be changed from "ConfigParser" to "INCLConfigParser"
 *  due to code in $INCL_SRC_DIR/utils/include/G4INCLConfig.hh:
 *       friend class ::ConfigParser;
 *  and this code needs the access to the private data members
 *  By default copy of the class isn't compiled into any available INC++ library
 *  so we're stuck with the name for the class, but we'll leave the
 *  filename changed to indicate that it references INCL++
 *
 * \date 17th July 2014
 * \author Davide Mancusi
 */

#ifndef INCLCONFIGPARSER_HH_
#define INCLCONFIGPARSER_HH_

#ifdef HAS_BOOST_PROGRAM_OPTIONS

#include <string>
#include "G4INCLConfig.hh"

#include <boost/program_options/options_description.hpp>
#include <boost/program_options/parsers.hpp>
#include <boost/program_options/positional_options.hpp>
#include <boost/program_options/variables_map.hpp>

namespace po = boost::program_options;

class ConfigParser {
  public:
     ConfigParser();
    ~ConfigParser();

    G4INCL::Config *parse(int argc, char *argv[]);
    std::string echo(G4INCL::Config const * const aConfig);

  private:
    G4INCL::Config config;
    po::options_description runOptDesc;
    po::options_description hiddenOptDesc;
    po::options_description genericOptDesc;
    po::options_description physicsOptDesc;
    po::options_description cmdLineOptions;
    po::options_description configFileOptions;
    po::options_description visibleOptions;
    po::positional_options_description p;
    po::variables_map variablesMap;

    static const int randomSeedMin = 1;
    static const int randomSeedMax = ((1<<30)-1)+(1<<30);

    static const std::string suggestHelpMsg;

    // Define the names of the de-excitation models
    static const std::string theNoneName;
#ifdef INCL_DEEXCITATION_SMM
    static const std::string theSMMName;
#endif
#ifdef INCL_DEEXCITATION_GEMINIXX
    static const std::string theGEMINIXXName;
#endif
#ifdef INCL_DEEXCITATION_ABLAXX
    static const std::string theABLAv3pName;
#endif
#ifdef INCL_DEEXCITATION_ABLA07
    static const std::string theABLA07Name;
#endif

    static const std::string listSeparator;

    std::string deExcitationModelList;
    std::string defaultDeExcitationModel;

    std::string echoOptionsDescription(const po::options_description &aDesc);
};

// alias for GENIE
typedef ConfigParser INCLConfigParser;

#endif // HAS_BOOST_PROGRAM_OPTIONS

#endif // INCLCONFIGPARSER_HH_

#endif // __GENIE_INCL_ENABLED__
//____________________________________________________________________________
/*!

\class    genie::INukeDeltaPropg

\brief    	 

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Oct 01, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _INUKE_DELTA_PROPG_H_
#define _INUKE_DELTA_PROPG_H_

#include "Framework/Conventions/GBuild.h"
#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class INukeDeltaPropg : public EventRecordVisitorI {

public:
  INukeDeltaPropg();
  INukeDeltaPropg(string config);
 ~INukeDeltaPropg();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);

  double fR0;       ///< effective nuclear size param
  double fNR;       ///< param multiplying the nuclear radius, determining how far to track hadrons beyond the "nuclear boundary"
  double fHadStep;  ///< step size for intranuclear hadron transport
};

}      // genie namespace
#endif // _INUKE_DELTA_PROPG_H_
//____________________________________________________________________________
/*!

\class   genie::exceptions::INukeException

\brief   An exception thrown by SimulateHadronState for kinematics problems.
         TwoBodyCollision/Kinematics used a lot, has various failure modes.
         When failure occurs in HAIntranuke, rechoose the fate.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

         Steve Dytman <dytman \at pitt.edu>
	 Univ. of Pittsburgh         

\created October 10, 2011

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org
         
*/
//____________________________________________________________________________

#ifndef _INUKE_EXCEPTION_H_
#define _INUKE_EXCEPTION_H_

#include <string>
#include <ostream>

#include <TMath.h>

using std::string;
using std::ostream;

namespace genie {
namespace exceptions {

class INukeException {

public :
  INukeException();
  INukeException(const INukeException & exception);
 ~INukeException();

  void SetReason(string reason) { fReason = reason; }

  string ShowReason(void) const { return fReason; }

  void Init  (void);
  void Copy  (const INukeException & exception);
  void Print (ostream & stream) const;

  friend ostream & operator << (
             ostream & stream, const INukeException & exception);

private:

  string fReason;
};

}      // exceptions namespace
}      // genie namespace

#endif // _INUKE_EXCEPTION_H_
//____________________________________________________________________________
/*!

\class    genie::INukeHadroData

\brief    Singleton class to load & serve hadron x-section splines used by
          GENIE's version of the INTRANUKE cascade MC.

          See $GENIE/src/HadronTransport/Intranuke.h for more details on the
          INTRANUKE cascade MC developed primarity by S.Dytman and H.Gallagher
          continuing older work from R.Edgecock, G.F.Pearce, W.A.Mann, 
          R.Merenyi and others.

          The hadron x-section data used to build the x-section splines stored
          at this singleton are provided & maintained by Steve Dytman.
          See the data files in $GENIE/data/hadron_xsec/ for more details on
          Steve's data sources and applied corrections. 
          In a nutshell:
          The h+N x-sections come mostly from the SAID (Arndt et al.) PWA fit
          while the h+A x-sections come from a combination of Ashery, Carroll 
          data and extrapolations, and INC model results from Mashnik et al.
          for h+Fe56.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>, Rutherford Lab.
          Steve Dytman <dytman+@pitt.edu>, Pittsburgh Univ.
	  Aaron Meyer <asm58@pitt.edu>, Pittsburgh Univ.
	  Alex Bell, Pittsburgh Univ.

\created  February 01, 2007

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          

*/
//____________________________________________________________________________

#ifndef _INTRANUKE_HADRON_CROSS_SECTIONS_H_
#define _INTRANUKE_HADRON_CROSS_SECTIONS_H_

#include "Physics/HadronTransport/INukeHadroFates.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/Numerical/BLI2D.h"

class TGraph2D;

namespace genie {

class Spline;

class INukeHadroData
{
public:
  static INukeHadroData * Instance (void);

// Note that, unlike most the rest of GENIE where everything is expressed
// in natural units, all x-section splines included here are evaluated in
// kinetic energies given in MeV and return the x-section value in mbarns

  double XSec (int hpdgc, int tgt, int nprod, INukeFateHN_t rxnType, double ke, double costh) const;

  double Frac (int hpdgc, INukeFateHA_t fate, double ke) const;
  double XSec (int hpdgc, INukeFateHN_t fate, double ke, int targA, int targZ) const;
  //  double Frac (int hpdgc, INukeFateHA_t fate, double ke) const;
  double Frac (int hpdgc, INukeFateHN_t fate, double ke, int targA=0, int targZ=0) const;
  double IntBounce       (const GHepParticle* p, int target, int s1, INukeFateHN_t fate);
  //int    AngleAndProduct (const GHepParticle* p, int target, double &angle, INukeFateHN_t fate);

  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // hN mode hadron x-section splines
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  const Spline * XSecPipn_Tot     (void) const { return fXSecPipn_Tot;     }
  const Spline * XSecPipn_CEx     (void) const { return fXSecPipn_CEx;     }
  const Spline * XSecPipn_Elas    (void) const { return fXSecPipn_Elas;    }
  const Spline * XSecPipn_Reac    (void) const { return fXSecPipn_Reac;    }
  const Spline * XSecPipp_Tot     (void) const { return fXSecPipp_Tot;     }
  const Spline * XSecPipp_CEx     (void) const { return fXSecPipp_CEx;     }
  const Spline * XSecPipp_Elas    (void) const { return fXSecPipp_Elas;    }
  const Spline * XSecPipp_Reac    (void) const { return fXSecPipp_Reac;    }
  const Spline * XSecPipp_Abs     (void) const { return fXSecPipd_Abs;     }
  const Spline * XSecPi0n_Tot     (void) const { return fXSecPi0n_Tot;     }
  const Spline * XSecPi0n_CEx     (void) const { return fXSecPi0n_CEx;     }
  const Spline * XSecPi0n_Elas    (void) const { return fXSecPi0n_Elas;    }
  const Spline * XSecPi0n_Reac    (void) const { return fXSecPi0n_Reac;    }
  const Spline * XSecPi0p_Tot     (void) const { return fXSecPi0p_Tot;     }
  const Spline * XSecPi0p_CEx     (void) const { return fXSecPi0p_CEx;     }
  const Spline * XSecPi0p_Elas    (void) const { return fXSecPi0p_Elas;    }
  const Spline * XSecPi0p_Reac    (void) const { return fXSecPi0p_Reac;    }
  const Spline * XSecPi0p_Abs     (void) const { return fXSecPi0d_Abs;     }
  const Spline * XSecPp_Tot       (void) const { return fXSecPp_Tot;       }
  const Spline * XSecPp_Elas      (void) const { return fXSecPp_Elas;      }
  const Spline * XSecPp_Reac      (void) const { return fXSecPp_Reac;      }
  const Spline * XSecPn_Tot       (void) const { return fXSecPn_Tot;       }
  const Spline * XSecPn_Elas      (void) const { return fXSecPn_Elas;      } 
  const Spline * XSecPn_Reac      (void) const { return fXSecPn_Reac;      }
  const Spline * XSecNn_Tot       (void) const { return fXSecNn_Tot;       }
  const Spline * XSecNn_Elas      (void) const { return fXSecNn_Elas;      } 
  const Spline * XSecNn_Reac      (void) const { return fXSecNn_Reac;      }
  const Spline * XSecKpn_Elas     (void) const { return fXSecKpn_Elas;     }
  const Spline * XSecKpp_Elas     (void) const { return fXSecKpp_Elas;     }
  const Spline * XSecKpN_Abs      (void) const { return fXSecKpN_Abs;      }
  const Spline * XSecKpN_Tot      (void) const { return fXSecKpN_Tot;      }
  const Spline * XSecGamp_fs      (void) const { return fXSecGamp_fs;      }  
  const Spline * XSecGamn_fs      (void) const { return fXSecGamn_fs;      }
  const Spline * XSecGamN_Tot     (void) const { return fXSecGamN_Tot;     }
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // hA mode hadron x-section splines
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  const Spline * FracPA_Tot       (void) const { return fFracPA_Tot;       }
  const Spline * FracPA_Elas      (void) const { return fFracPA_Elas;      }
  const Spline * FracPA_Inel      (void) const { return fFracPA_Inel;      }
  const Spline * FracPA_CEx       (void) const { return fFracPA_CEx;       }
  const Spline * FracPA_Abs       (void) const { return fFracPA_Abs;       }
  const Spline * FracPA_Pipro     (void) const { return fFracPA_Pipro;     }
  const Spline * FracNA_Tot       (void) const { return fFracNA_Tot;       }
  const Spline * FracNA_Elas      (void) const { return fFracNA_Elas;      }
  const Spline * FracNA_Inel      (void) const { return fFracNA_Inel;      }
  const Spline * FracNA_CEx       (void) const { return fFracNA_CEx;       }
  const Spline * FracNA_Abs       (void) const { return fFracNA_Abs;       }
  const Spline * FracNA_Pipro     (void) const { return fFracNA_Pipro;     }
  const Spline * FracPipA_Tot     (void) const { return fFracPipA_Tot;     }
  const Spline * FracPipA_Elas    (void) const { return fFracPipA_Elas;    }
  const Spline * FracPipA_Inel    (void) const { return fFracPipA_Inel;    }
  const Spline * FracPipA_CEx     (void) const { return fFracPipA_CEx;     }
  const Spline * FracPipA_Abs     (void) const { return fFracPipA_Abs;     }
  const Spline * FracPipA_PiProd  (void) const { return fFracPipA_PiProd;  }
  const Spline * FracPimA_Tot     (void) const { return fFracPimA_Tot;     }
  const Spline * FracPimA_Elas    (void) const { return fFracPimA_Elas;    }
  const Spline * FracPimA_Inel    (void) const { return fFracPimA_Inel;    }
  const Spline * FracPimA_CEx     (void) const { return fFracPimA_CEx;     }
  const Spline * FracPimA_Abs     (void) const { return fFracPimA_Abs;     }
  const Spline * FracPimA_PiProd  (void) const { return fFracPimA_PiProd;  }
  const Spline * FracPi0A_Tot     (void) const { return fFracPi0A_Tot;     }
  const Spline * FracPi0A_Elas    (void) const { return fFracPi0A_Elas;    }
  const Spline * FracPi0A_Inel    (void) const { return fFracPi0A_Inel;    }
  const Spline * FracPi0A_CEx     (void) const { return fFracPi0A_CEx;     }
  const Spline * FracPi0A_Abs     (void) const { return fFracPi0A_Abs;     }
  const Spline * FracPi0A_PiProd  (void) const { return fFracPi0A_PiProd;  }
  const Spline * FracKA_Tot       (void) const { return fFracKA_Tot;       }
  const Spline * FracKA_Elas      (void) const { return fFracKA_Elas;      }
  const Spline * FracKA_Inel      (void) const { return fFracKA_Inel;      }
  const Spline * FracKA_Abs       (void) const { return fFracKA_Abs;       }
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // hN mode TGraph2D XSec objects
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  /*
  const TGraph2D *      hN2dXSecPP_Elas          (void) const { return fhN2dXSecPP_Elas;          }
  const TGraph2D *      hN2dXSecNP_Elas          (void) const { return fhN2dXSecNP_Elas;          }
  const TGraph2D *      hN2dXSecPipN_Elas        (void) const { return fhN2dXSecPipN_Elas;        }
  const TGraph2D *      hN2dXSecPi0N_Elas        (void) const { return fhN2dXSecPi0N_Elas;        }
  const TGraph2D *      hN2dXSecPimN_Elas        (void) const { return fhN2dXSecPimN_Elas;        }
  const TGraph2D *      hN2dXSecKpN_Elas         (void) const { return fhN2dXSecKpN_Elas;         }
  const TGraph2D *      hN2dXSecKpP_Elas         (void) const { return fhN2dXSecKpP_Elas;         }
  const TGraph2D *      hN2dXSecPiN_CEx          (void) const { return fhN2dXSecPiN_CEx;          }
  const TGraph2D *      hN2dXSecPiN_Abs          (void) const { return fhN2dXSecPiN_Abs;          }
  const TGraph2D *      hN2dXSecGamPi0P_Inelas   (void) const { return fhN2dXSecGamPi0P_Inelas;   }
  const TGraph2D *      hN2dXSecGamPi0N_Inelas   (void) const { return fhN2dXSecGamPi0N_Inelas;   }
  const TGraph2D *      hN2dXSecGamPipN_Inelas   (void) const { return fhN2dXSecGamPipN_Inelas;   }
  const TGraph2D *      hN2dXSecGamPimP_Inelas   (void) const { return fhN2dXSecGamPimP_Inelas;   }
  */

  // const methods (don't modify object) that return pointers to a BLI2DNonUnifGrid that is const
  const BLI2DNonUnifGrid *       hN2dXSecPP_Elas          (void) const { return fhN2dXSecPP_Elas;          }
  const BLI2DNonUnifGrid *       hN2dXSecNP_Elas          (void) const { return fhN2dXSecNP_Elas;          }
  const BLI2DNonUnifGrid *       hN2dXSecPipN_Elas        (void) const { return fhN2dXSecPipN_Elas;        }
  const BLI2DNonUnifGrid *       hN2dXSecPi0N_Elas        (void) const { return fhN2dXSecPi0N_Elas;        }
  const BLI2DNonUnifGrid *       hN2dXSecPimN_Elas        (void) const { return fhN2dXSecPimN_Elas;        }
  const BLI2DNonUnifGrid *       hN2dXSecKpN_Elas         (void) const { return fhN2dXSecKpN_Elas;         }
  const BLI2DNonUnifGrid *       hN2dXSecKpP_Elas         (void) const { return fhN2dXSecKpP_Elas;         }
  const BLI2DNonUnifGrid *       hN2dXSecPiN_CEx          (void) const { return fhN2dXSecPiN_CEx;          }
  const BLI2DNonUnifGrid *       hN2dXSecPiN_Abs          (void) const { return fhN2dXSecPiN_Abs;          }
  const BLI2DNonUnifGrid *       hN2dXSecGamPi0P_Inelas   (void) const { return fhN2dXSecGamPi0P_Inelas;   }
  const BLI2DNonUnifGrid *       hN2dXSecGamPi0N_Inelas   (void) const { return fhN2dXSecGamPi0N_Inelas;   }
  const BLI2DNonUnifGrid *       hN2dXSecGamPipN_Inelas   (void) const { return fhN2dXSecGamPipN_Inelas;   }
  const BLI2DNonUnifGrid *       hN2dXSecGamPimP_Inelas   (void) const { return fhN2dXSecGamPimP_Inelas;   }

  static double fMinKinEnergy;   ///<
  static double fMaxKinEnergyHA; ///<
  static double fMaxKinEnergyHN; ///<

private:
  INukeHadroData();
  INukeHadroData(const INukeHadroData & shx);
 ~INukeHadroData();

  void LoadCrossSections(void); 

  void ReadhNFile(
         string filename, double ke, int npoints, int & curr_point,
         /*double * ke_array,*/ double * costh_array, double * xsec_array, int cols);

  static INukeHadroData * fInstance;

  Spline * fXSecPipn_Tot;      ///< pi+n hN x-section splines
  Spline * fXSecPipn_CEx;      ///<
  Spline * fXSecPipn_Elas;     ///<
  Spline * fXSecPipn_Reac;     ///<
  Spline * fXSecPipp_Tot;      ///< pi+p hN x-section splines
  Spline * fXSecPipp_CEx;      ///<
  Spline * fXSecPipp_Elas;     ///<
  Spline * fXSecPipp_Reac;     ///<
  Spline * fXSecPipd_Abs;      ///<
  Spline * fXSecPi0n_Tot;      ///< pi0n hN x-section splines
  Spline * fXSecPi0n_CEx;      ///<
  Spline * fXSecPi0n_Elas;     ///<
  Spline * fXSecPi0n_Reac;     ///<
  Spline * fXSecPi0p_Tot;      ///< pi0p hN x-section splines
  Spline * fXSecPi0p_CEx;      ///<
  Spline * fXSecPi0p_Elas;     ///<
  Spline * fXSecPi0p_Reac;     ///<
  Spline * fXSecPi0d_Abs;      ///<
  Spline * fXSecPp_Tot;        ///< p/nN x-section splines
  Spline * fXSecPp_Elas;       ///<
  Spline * fXSecPp_Reac;       ///<
  Spline * fXSecPn_Tot;        ///<
  Spline * fXSecPn_Elas;       ///<
  Spline * fXSecPn_Reac;       ///<
  Spline * fXSecNn_Tot;        ///<
  Spline * fXSecNn_Elas;       ///<
  Spline * fXSecNn_Reac;       ///<
  Spline * fXSecKpn_Elas;      ///< K+N x-section splines
  Spline * fXSecKpp_Elas;      ///<
  Spline * fXSecKpN_Abs;        ///<
  Spline * fXSecKpN_Tot;       ///<
  Spline * fFracPA_Tot;        ///< N+A x-section splines
  Spline * fFracPA_Elas;       ///<
  Spline * fFracPA_Inel;       ///<
  Spline * fFracPA_CEx;        ///<
  Spline * fFracPA_Abs;        ///<
  Spline * fFracPA_Pipro;       ///<
  Spline * fFracNA_Tot;        ///<
  Spline * fFracNA_Elas;       ///<
  Spline * fFracNA_Inel;       ///<
  Spline * fFracNA_CEx;        ///<
  Spline * fFracNA_Abs;        ///<
  Spline * fFracNA_Pipro;       ///<
  Spline * fFracPipA_Tot;      ///< pi+A x-section splines
  Spline * fFracPipA_Elas;     ///<
  Spline * fFracPipA_Inel;     ///<
  Spline * fFracPipA_CEx;      ///<
  Spline * fFracPipA_Abs;      ///<
  Spline * fFracPipA_PiProd;   ///<
  Spline * fFracPimA_Tot;      ///<
  Spline * fFracPimA_Elas;     ///<
  Spline * fFracPimA_Inel;     ///<
  Spline * fFracPimA_CEx;      ///<
  Spline * fFracPimA_Abs;      ///<
  Spline * fFracPimA_PiProd;  ///<
  Spline * fFracPi0A_Tot;      ///<
  Spline * fFracPi0A_Elas;     ///<
  Spline * fFracPi0A_Inel;     ///<
  Spline * fFracPi0A_CEx;      ///<
  Spline * fFracPi0A_Abs;      ///<
  Spline * fFracPi0A_PiProd;  ///<
  Spline * fFracKA_Tot;        ///< K+A x-section splines
  Spline * fFracKA_Elas;       ///<
  Spline * fFracKA_Inel;       ///<
  Spline * fFracKA_Abs;        ///<
  Spline * fXSecGamp_fs;       ///< gamma A x-section splines
  Spline * fXSecGamn_fs;       ///<
  Spline * fXSecGamN_Tot;      ///<

  /*TGraph2D * fhN2dXSecPP_Elas;
  TGraph2D * fhN2dXSecNP_Elas;
  TGraph2D * fhN2dXSecPipN_Elas;
  TGraph2D * fhN2dXSecPi0N_Elas;
  TGraph2D * fhN2dXSecPimN_Elas;
  TGraph2D * fhN2dXSecKpN_Elas;
  TGraph2D * fhN2dXSecKpP_Elas;
  TGraph2D * fhN2dXSecPiN_CEx;
  TGraph2D * fhN2dXSecPiN_Abs;
  TGraph2D * fhN2dXSecGamPi0P_Inelas;
  TGraph2D * fhN2dXSecGamPi0N_Inelas;
  TGraph2D * fhN2dXSecGamPipN_Inelas;
  TGraph2D * fhN2dXSecGamPimP_Inelas;*/
  BLI2DNonUnifGrid * fhN2dXSecPP_Elas;
  BLI2DNonUnifGrid * fhN2dXSecNP_Elas;
  BLI2DNonUnifGrid * fhN2dXSecPipN_Elas;
  BLI2DNonUnifGrid * fhN2dXSecPi0N_Elas;
  BLI2DNonUnifGrid * fhN2dXSecPimN_Elas;
  BLI2DNonUnifGrid * fhN2dXSecKpN_Elas;
  BLI2DNonUnifGrid * fhN2dXSecKpP_Elas;
  BLI2DNonUnifGrid * fhN2dXSecPiN_CEx;
  BLI2DNonUnifGrid * fhN2dXSecPiN_Abs;
  BLI2DNonUnifGrid * fhN2dXSecGamPi0P_Inelas;
  BLI2DNonUnifGrid * fhN2dXSecGamPi0N_Inelas;
  BLI2DNonUnifGrid * fhN2dXSecGamPipN_Inelas;
  BLI2DNonUnifGrid * fhN2dXSecGamPimP_Inelas;

  //-- Sinleton cleaner
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (INukeHadroData::fInstance !=0) {
            delete INukeHadroData::fInstance;
            INukeHadroData::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace
#endif //_INTRANUKE_HADRON_CROSS_SECTIONS_H_

//____________________________________________________________________________
/*!

\class    genie::INukeHadroData

\brief    Singleton class to load & serve hadron x-section splines used by
          GENIE's version of the INTRANUKE cascade MC.

          See $GENIE/src/HadronTransport/Intranuke.h for more details on the
          INTRANUKE cascade MC developed primarity by S.Dytman and H.Gallagher
          continuing older work from R.Edgecock, G.F.Pearce, W.A.Mann,
          R.Merenyi and others.

          The hadron x-section data used to build the x-section splines stored
          at this singleton are provided & maintained by Steve Dytman.
          See the data files in $GENIE/data/hadron_xsec/ for more details on
          Steve's data sources and applied corrections.
          In a nutshell:
          The h+N x-sections come mostly from the SAID (Arndt et al.) PWA fit
          while the h+A x-sections come from a combination of Ashery, Carroll
          data and extrapolations, and INC model results from Mashnik et al.
          for h+Fe56.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>, Rutherford Lab.
          Steve Dytman <dytman+@pitt.edu>, Pittsburgh Univ.
	  Aaron Meyer <asm58@pitt.edu>, Pittsburgh Univ.
	  Alex Bell, Pittsburgh Univ.

\created  February 01, 2007

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          

*/
//____________________________________________________________________________

#ifndef _INTRANUKE_HADRON_CROSS_SECTIONS_2018_H_
#define _INTRANUKE_HADRON_CROSS_SECTIONS_2018_H_

#include "Physics/HadronTransport/INukeHadroFates2018.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/Numerical/BLI2D.h"

class TGraph2D;

namespace genie {

class Spline;

class INukeHadroData2018
{
public:
  static INukeHadroData2018 * Instance (void);

// Note that, unlike most the rest of GENIE where everything is expressed
// in natural units, all x-section splines included here are evaluated in
// kinetic energies given in MeV and return the x-section value in mbarns

  double XSec (int hpdgc, int tgt, int nprod, INukeFateHN_t rxnType, double ke, double costh) const;
  double XSec (int hpdgc, INukeFateHN_t fate, double ke, int targA, int targZ) const;
  double FracADep (int hpdgc, INukeFateHA_t fate, double ke, int targA) const;
  double FracAIndep (int hpdgc, INukeFateHA_t fate, double ke) const;
  double Frac (int hpdgc, INukeFateHN_t fate, double ke, int targA=0, int targZ=0) const;
  double IntBounce       (const GHepParticle* p, int target, int s1, INukeFateHN_t fate);


  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // hN mode hadron x-section splines
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  const Spline * XSecPipn_Tot     (void) const { return fXSecPipn_Tot;     }
  const Spline * XSecPipn_CEx     (void) const { return fXSecPipn_CEx;     }
  const Spline * XSecPipn_Elas    (void) const { return fXSecPipn_Elas;    }
  const Spline * XSecPipn_Reac    (void) const { return fXSecPipn_Reac;    }
  const Spline * XSecPipp_Tot     (void) const { return fXSecPipp_Tot;     }
  const Spline * XSecPipp_CEx     (void) const { return fXSecPipp_CEx;     }
  const Spline * XSecPipp_Elas    (void) const { return fXSecPipp_Elas;    }
  const Spline * XSecPipp_Reac    (void) const { return fXSecPipp_Reac;    }
  const Spline * XSecPipp_Abs     (void) const { return fXSecPipd_Abs;     }
  const Spline * XSecPi0n_Tot     (void) const { return fXSecPi0n_Tot;     }
  const Spline * XSecPi0n_CEx     (void) const { return fXSecPi0n_CEx;     }
  const Spline * XSecPi0n_Elas    (void) const { return fXSecPi0n_Elas;    }
  const Spline * XSecPi0n_Reac    (void) const { return fXSecPi0n_Reac;    }
  const Spline * XSecPi0p_Tot     (void) const { return fXSecPi0p_Tot;     }
  const Spline * XSecPi0p_CEx     (void) const { return fXSecPi0p_CEx;     }
  const Spline * XSecPi0p_Elas    (void) const { return fXSecPi0p_Elas;    }
  const Spline * XSecPi0p_Reac    (void) const { return fXSecPi0p_Reac;    }
  const Spline * XSecPi0p_Abs     (void) const { return fXSecPi0d_Abs;     }
  const Spline * XSecPp_Tot       (void) const { return fXSecPp_Tot;       }
  const Spline * XSecPp_Elas      (void) const { return fXSecPp_Elas;      }
  const Spline * XSecPp_Reac      (void) const { return fXSecPp_Reac;      }
  const Spline * XSecPn_Tot       (void) const { return fXSecPn_Tot;       }
  const Spline * XSecPn_Elas      (void) const { return fXSecPn_Elas;      }
  const Spline * XSecPn_Reac      (void) const { return fXSecPn_Reac;      }
  const Spline * XSecNn_Tot       (void) const { return fXSecNn_Tot;       }
  const Spline * XSecNn_Elas      (void) const { return fXSecNn_Elas;      }
  const Spline * XSecNn_Reac      (void) const { return fXSecNn_Reac;      }
  const Spline * XSecKpn_Elas     (void) const { return fXSecKpn_Elas;     }
  const Spline * XSecKpn_CEx      (void) const { return fXSecKpn_CEx;      }
  const Spline * XSecKpp_Elas     (void) const { return fXSecKpp_Elas;     }
  const Spline * XSecKpN_Abs      (void) const { return fXSecKpN_Abs;      } //not implemented
  const Spline * XSecKpN_Tot      (void) const { return fXSecKpN_Tot;      }
  const Spline * XSecGamp_fs      (void) const { return fXSecGamp_fs;      }
  const Spline * XSecGamn_fs      (void) const { return fXSecGamn_fs;      }
  const Spline * XSecGamN_Tot     (void) const { return fXSecGamN_Tot;     }
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // hA mode hadron x-section splines
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  const Spline * FracPA_Tot       (void) const { return fFracPA_Tot;       }
  const Spline * FracPA_Elas      (void) const { return fFracPA_Elas;      }
  const Spline * FracPA_Inel      (void) const { return fFracPA_Inel;      }
  const Spline * FracPA_CEx       (void) const { return fFracPA_CEx;       }
  const Spline * FracPA_Abs       (void) const { return fFracPA_Abs;       }
  const Spline * FracPA_PiPro     (void) const { return fFracPA_PiPro;     }
  const Spline * FracNA_Tot       (void) const { return fFracNA_Tot;       }
  const Spline * FracNA_Elas      (void) const { return fFracNA_Elas;      }
  const Spline * FracNA_Inel      (void) const { return fFracNA_Inel;      }
  const Spline * FracNA_CEx       (void) const { return fFracNA_CEx;       }
  const Spline * FracNA_Abs       (void) const { return fFracNA_Abs;       }
  const Spline * FracNA_PiPro     (void) const { return fFracNA_PiPro;     }
  const Spline * FracKA_Tot       (void) const { return fFracKA_Tot;       }
  const Spline * FracKA_Elas      (void) const { return fFracKA_Elas;      }
  const Spline * FracKA_Inel      (void) const { return fFracKA_Inel;      }
  const Spline * FracKA_CEx       (void) const { return fFracKA_CEx;       }
  const Spline * FracKA_Abs       (void) const { return fFracKA_Abs;       }

  const Spline * FracPA_Cmp       (void) const { return fFracPA_Cmp;      }
  const Spline * FracNA_Cmp       (void) const { return fFracNA_Cmp;      } //suarez


  const BLI2DNonUnifGrid * hN2dXSecPP_Elas          (void) const { return fhN2dXSecPP_Elas;          }
  const BLI2DNonUnifGrid * hN2dXSecNP_Elas          (void) const { return fhN2dXSecNP_Elas;          }
  const BLI2DNonUnifGrid * hN2dXSecPipN_Elas        (void) const { return fhN2dXSecPipN_Elas;        }
  const BLI2DNonUnifGrid * hN2dXSecPi0N_Elas        (void) const { return fhN2dXSecPi0N_Elas;        }
  const BLI2DNonUnifGrid * hN2dXSecPimN_Elas        (void) const { return fhN2dXSecPimN_Elas;        }
  const BLI2DNonUnifGrid * hN2dXSecKpN_Elas         (void) const { return fhN2dXSecKpN_Elas;         }
  const BLI2DNonUnifGrid * hN2dXSecKpP_Elas         (void) const { return fhN2dXSecKpP_Elas;         }
  const BLI2DNonUnifGrid * hN2dXSecPiN_CEx          (void) const { return fhN2dXSecPiN_CEx;          }
  const BLI2DNonUnifGrid * hN2dXSecPiN_Abs          (void) const { return fhN2dXSecPiN_Abs;          }
  const BLI2DNonUnifGrid * hN2dXSecGamPi0P_Inelas   (void) const { return fhN2dXSecGamPi0P_Inelas;   }
  const BLI2DNonUnifGrid * hN2dXSecGamPi0N_Inelas   (void) const { return fhN2dXSecGamPi0N_Inelas;   }
  const BLI2DNonUnifGrid * hN2dXSecGamPipN_Inelas   (void) const { return fhN2dXSecGamPipN_Inelas;   }
  const BLI2DNonUnifGrid * hN2dXSecGamPimP_Inelas   (void) const { return fhN2dXSecGamPimP_Inelas;   }

  static double fMinKinEnergy;   ///<
  static double fMaxKinEnergyHA; ///<
  static double fMaxKinEnergyHN; ///<

private:
  INukeHadroData2018();
  INukeHadroData2018(const INukeHadroData2018 & shx);
 ~INukeHadroData2018();

  void LoadCrossSections(void);

  void ReadhNFile(
         string filename, double ke, int npoints, int & curr_point,
         /*double * ke_array,*/ double * costh_array, double * xsec_array, int cols);

  static INukeHadroData2018 * fInstance;

  Spline * fXSecPipn_Tot;      ///< pi+n hN x-section splines
  Spline * fXSecPipn_CEx;      ///<
  Spline * fXSecPipn_Elas;     ///<
  Spline * fXSecPipn_Reac;     ///<
  Spline * fXSecPipp_Tot;      ///< pi+p hN x-section splines
  Spline * fXSecPipp_CEx;      ///<
  Spline * fXSecPipp_Elas;     ///<
  Spline * fXSecPipp_Reac;     ///<
  Spline * fXSecPipd_Abs;      ///<
  Spline * fXSecPi0n_Tot;      ///< pi0n hN x-section splines
  Spline * fXSecPi0n_CEx;      ///<
  Spline * fXSecPi0n_Elas;     ///<
  Spline * fXSecPi0n_Reac;     ///<
  Spline * fXSecPi0p_Tot;      ///< pi0p hN x-section splines
  Spline * fXSecPi0p_CEx;      ///<
  Spline * fXSecPi0p_Elas;     ///<
  Spline * fXSecPi0p_Reac;     ///<
  Spline * fXSecPi0d_Abs;      ///<
  Spline * fXSecPp_Tot;        ///< p/nN x-section splines
  Spline * fXSecPp_Elas;       ///<
  Spline * fXSecPp_Reac;       ///<
  Spline * fXSecPn_Tot;        ///<
  Spline * fXSecPn_Elas;       ///<
  Spline * fXSecPn_Reac;       ///<
  Spline * fXSecNn_Tot;        ///<
  Spline * fXSecNn_Elas;       ///<
  Spline * fXSecNn_Reac;       ///<
  Spline * fXSecKpn_Elas;      ///< K+N x-section splines
  Spline * fXSecKpp_Elas;      ///<
  Spline * fXSecKpn_CEx;       ///<
  Spline * fXSecKpN_Abs;        ///<
  Spline * fXSecKpN_Tot;       ///<
  Spline * fFracPA_Tot;        ///< N+A x-section splines
  Spline * fFracPA_Elas;       ///<
  Spline * fFracPA_Inel;       ///<
  Spline * fFracPA_CEx;        ///<
  Spline * fFracPA_Abs;        ///<
  Spline * fFracPA_PiPro;       ///<
  Spline * fFracNA_Tot;        ///<
  Spline * fFracNA_Elas;       ///<
  Spline * fFracNA_Inel;       ///<
  Spline * fFracNA_CEx;        ///<
  Spline * fFracNA_Abs;        ///<
  Spline * fFracNA_PiPro;       ///<
  Spline * fFracKA_Tot;        ///< K+A x-section splines
  Spline * fFracKA_Elas;       ///<
  Spline * fFracKA_CEx;        ///<
  Spline * fFracKA_Inel;       ///<
  Spline * fFracKA_Abs;        ///<
  Spline * fXSecGamp_fs;       ///< gamma A x-section splines
  Spline * fXSecGamn_fs;       ///<
  Spline * fXSecGamN_Tot;      ///<
  Spline * fXSecPp_Cmp;        ///< NN cmp (compound nucleus) fate
  Spline * fXSecPn_Cmp;
  Spline * fXSecNn_Cmp;
  Spline * fFracPA_Cmp;
  Spline * fFracNA_Cmp;

//  TGraph2D * TPipA_Tot;
  TGraph2D * TfracPipA_CEx;
//  TGraph2D * TfracPipA_Elas;
  TGraph2D * TfracPipA_Inelas;
  TGraph2D * TfracPipA_Abs;
  TGraph2D * TfracPipA_PiPro;

  BLI2DNonUnifGrid * fhN2dXSecPP_Elas;
  BLI2DNonUnifGrid * fhN2dXSecNP_Elas;
  BLI2DNonUnifGrid * fhN2dXSecPipN_Elas;
  BLI2DNonUnifGrid * fhN2dXSecPi0N_Elas;
  BLI2DNonUnifGrid * fhN2dXSecPimN_Elas;
  BLI2DNonUnifGrid * fhN2dXSecKpN_Elas;
  BLI2DNonUnifGrid * fhN2dXSecKpP_Elas;
  BLI2DNonUnifGrid * fhN2dXSecKpN_CEx;
  BLI2DNonUnifGrid * fhN2dXSecKpN_Abs;
  BLI2DNonUnifGrid * fhN2dXSecPiN_CEx;
  BLI2DNonUnifGrid * fhN2dXSecPiN_Abs;
  BLI2DNonUnifGrid * fhN2dXSecGamPi0P_Inelas;
  BLI2DNonUnifGrid * fhN2dXSecGamPi0N_Inelas;
  BLI2DNonUnifGrid * fhN2dXSecGamPipN_Inelas;
  BLI2DNonUnifGrid * fhN2dXSecGamPimP_Inelas;

  //-- Sinleton cleaner
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (INukeHadroData2018::fInstance !=0) {
            delete INukeHadroData2018::fInstance;
            INukeHadroData2018::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace
#endif //_INTRANUKE_HADRON_CROSS_SECTIONS_2015_H_

/**
 * @brief Correction to free NN xsec in nuclear matter
 * 
 * @author Kyle Bachinski, Tomasz Golan
 * @date 2015
 * @remarks V.R. Pandharipande and S. C. Pieper, Phys. Rev. C45 (1992) 791
 * 
*/

#ifndef INUKE_NUCLEON_CORR_H
#define INUKE_NUCLEON_CORR_H

#include <iostream>

#include <TGenPhaseSpace.h>
#include "Framework/ParticleData/PDGCodes.h"

class INukeNucleonCorr
{
  public:
    
    //! get single instance of INukeNucleonCorr; create if necessary
    static INukeNucleonCorr* getInstance() {return fInstance ? fInstance : (fInstance = new INukeNucleonCorr);}
    
    //! get the correction for given four-momentum and density
    //    double getAvgCorrection (const double rho, const int A, const int Z, const int pdg, const double Ek);
    double getAvgCorrection (const double rho, const double A, const double Ek);
    void OutputFiles(int A, int Z);
    double AvgCorrection (const double rho, const int A, const int Z, const int pdg, const double Ek);

  private:
  
    static INukeNucleonCorr *fInstance; //!< single instance of INukeNucleonCorr
  
    // ----- MODEL PARAMETERS ----- //
    
    static const unsigned int fRepeat; //!< number of repetition to get average correction

    // ----- POTENTIAL PARAMETERS (from paper) ----- //
    
    static const double fRho0; //!< equilibrium density

    static const double fAlpha1;  //!<  alpha coefficient as defined by Eq. 2.17
    static const double fAlpha2;  //!<  alpha coefficient as defined by Eq. 2.17
    static const double fBeta1;   //!<   beta coefficient as defined by Eq. 2.18
    static const double fLambda0; //!< lambda coefficient as defined by Eq. 2.19
    static const double fLambda1; //!< lambda coefficient as defined by Eq. 2.19
    
    static const int fNDensityBins; //!< cache binning for density
    //static const int fNEnergyBins;  //!< cache binning for energy

    //static const double fMaxEnergy;   //!< above this energy correction is assumed to be constant
    static const double fDensityStep; //!< within this density step correction is assumed to be constant
    //static const double fEnergyStep;  //!< within this energy step correction is assumed to be constant
    


    //Test Code
    static const int fNEnergyBins1;  //!< cache binning for energy
    static const double fMaxEnergy1;   //!< above this energy correction is assumed to be constant
    static const double fEnergyStep1;  //!< within this energy step correction is assumed to be constant
     static const int fNEnergyBins2;  //!< cache binning for energy
    static const double fMaxEnergy2;   //!< above this energy correction is assumed to be constant
    static const double fEnergyStep2;  //!< within this energy step correction is assumed to be constant
    static const int fNEnergyBins3;  //!< cache binning for energy
    static const double fMaxEnergy3;   //!< above this energy correction is assumed to be constant
    static const double fEnergyStep3;  //!< within this energy step correction is assumed to be constant


    //End Test Code
    // ----- CALC VARIABLES ----- //
    
    double fFermiMomProton;  // local Fermi momentum for protons
    double fFermiMomNeutron; // local Fermi momentum for neutrons
    
    // ----- SINGLETON "BLOCKADES"----- //
        
    INukeNucleonCorr () {}                                 //!< private constructor (called only by getInstance())
    INukeNucleonCorr (const INukeNucleonCorr&);            //!< block copy constructor
    INukeNucleonCorr& operator= (const INukeNucleonCorr&); //!< block assignment operator

    // ----- CALCULATIONS ----- //

    inline double   beta (const double rho) {return fBeta1 * rho;}                //!< potential component (Eq. 2.18)
    inline double lambda (const double rho) {return (fLambda0 + fLambda1 * rho);} //!< potential component (Eq. 2.19)
    
    inline void setFermiLevel (const double rho, const int A, const int Z) //!< set up Fermi momenta
    {
      fFermiMomProton  = localFermiMom (rho, A, Z, genie::kPdgProton);  // local Fermi momentum for protons
      fFermiMomNeutron = localFermiMom (rho, A, Z, genie::kPdgNeutron); // local Fermi momentum for neutrons
    }
    
    //! return proper Fermi momentum based on nucleon PDG
    inline double fermiMomentum (const int pdg) {return pdg == genie::kPdgProton ? fFermiMomProton : fFermiMomNeutron;}
    
    double mstar (const double rho, const double k2); //!< m* calculated based on Eqs. 2.6 and 2.16
    
    double localFermiMom (const double rho, const int A, const int Z, const int pdg); //!< calculate local Fermi momentum 
    
    TLorentzVector generateTargetNucleon (const double mass, const double fermiMomentum); //!< generate target nucleon
    
    double getCorrection (const double mass, const double rho,
                          const TVector3 &k1, const TVector3 &k2,
                          const TVector3 &k3, const TVector3 &k4); //!< calculate xsec correction
};

#endif // INUKE_NUCLEON_CORR_H
/**
 * @brief Oset model handler (abstract class)
 * 
 * @author Tomasz Golan
 * @date 2015
 * @warning Applicable for pion with Tk < 350 MeV
 * @remarks Based on E. Oset et al., Nucl. Phys. A484 (1988) 557-592
 * 
*/

#ifndef INUKE_OSET_H
#define INUKE_OSET_H

#include <cmath>
#include <limits>

#include "Framework/ParticleData/PDGCodes.h"
#include "Framework/ParticleData/PDGLibrary.h"
#include "Framework/Conventions/Constants.h"

using namespace genie;
using namespace genie::constants;

class INukeOset
{
  public:

  INukeOset (); //!< contructor

  //! use to set up Oset class (assign pion Tk, nuclear density etc)
  virtual void setupOset (const double &density, const double &pionTk, const int &pionPDG,
                          const double &protonFraction) = 0;

  //! return total = (qel+cex+abs) cross section 
  inline double getTotalCrossSection  () const
  {
    return fTotalCrossSection;
  }
  
  //! return cex cross section 
  inline double getCexCrossSection () const
  {
    return fCexCrossSection;
  }
  
  //! return absorption cross section
  inline double getAbsorptionCrossSection () const
  {
    return fAbsorptionCrossSection;
  }
  
  //! return fraction of cex events
  inline double getCexFraction () const
  {
    return fCexCrossSection / fTotalCrossSection;
  }
  
  //! return fraction of absorption events
  inline double getAbsorptionFraction () const
  {
    return fAbsorptionCrossSection / fTotalCrossSection;
  }

  protected:

  double fNuclearDensity;    //!< nuclear density in fm-3
  double fPionKineticEnergy; //!< pion kinetic energy in MeV

  //! el+cex+abs cross section (averaged over proton / neutron fraction)
  double fTotalCrossSection;      
  //! cex cross section (averaged over proton / neutron fraction)
  double fCexCrossSection;        
  //! absorption cross section (averaged over proton / neutron fraction)
  double fAbsorptionCrossSection; 

  //! number of possible channels: pi+n, pi+p, pi0
  /*! if (pi0) channel = 2 \n
   *  else channel = [(10 * pip + pim) == (10 * p + n)] \n \n
   *  0 -> pi+n or pi-p, 1 -> pi+p or pi-n, 2 -> pi0
   */
  static const unsigned int fNChannels = 3; 
  
  //! total qel (el+cex) cross section for each channel
  double fQelCrossSections[fNChannels]; 
  double fCexCrossSections[fNChannels]; //!< cex cross section for each channel
  
  //! calculalte cross sections for each channel
  virtual void setCrossSections () = 0;
  
  //! calculate avg cross sections according to proton / neutron fraction
  void setCrossSections (const int &pionPDG,
                         const double &protonFraction);
};

namespace osetUtils
{
  // workaround to get access to last instance
  extern INukeOset* currentInstance; 
  // check if double == double with defined accuracy
  inline bool isEqual (const double &x, const double &y,
                       const double &epsilon)
  {
    return std::abs(x - y) < epsilon;
  }
  // check if double == double with best accuracy
  inline bool isEqual (const double &x, const double &y)
  {
    static const double epsilon = std::numeric_limits<double>::epsilon();
    return isEqual (x, y, epsilon);
  }
  // x -> variale, a->coefficients
  inline double quadraticFunction (const double &x, const double *a)
  {
    return a[0] * x * x + a[1] * x + a[2];
  }
} // namespace osetUtils

#endif // INUKE_OSET_H
/**
 * @brief Formula-based implementation of Oset model
 * 
 * @author Tomasz Golan
 * @date 2015
 * @warning Applicable for pion with Tk < 350 MeV
 * @remarks Based on E. Oset et al., Nucl. Phys. A484 (1988) 557-592
 * 
*/

#ifndef INUKE_OSET_FORMULA_H
#define INUKE_OSET_FORMULA_H

#include "INukeOset.h"

// calculate cross section for piN based on Oset model
class INukeOsetFormula : public INukeOset
{
  public:

  //! use to set up Oset class (assign pion Tk, nuclear density etc)
  void setupOset (const double &density, const double &pionTk,
                  const int &pionPDG, const double &protonFraction);

  private:

  // constants 
  static const double fCouplingConstant; //!< f*^2
  static const double fNucleonMass;      //!< average nucleon mass [MeV]
  static const double fNucleonMass2;     //!< average nucleon mass squared
  static const double fDeltaMass;        //!< delta mass in MeV
  static const double fNormalDensity;    //!< normal nuclear density [fm-3]
  static const double fNormFactor;       //!< MeV^-2 -> mb

  static const double fCoefSigma[fNChannels]; //!< s-wave parametrization eq. 3.7
  static const double fCoefB[fNChannels];     //!< s-wave parametrization eq. 3.8
  static const double fCoefD[fNChannels];     //!< s-wave parametrization eq. 3.8
  static const double ImB0;                 //!< s-wave parametrization eq. 3.12

  static const double    fCoefCQ[fNChannels]; //!< quasi-elastic term (eq. 2.21)
  static const double   fCoefCA2[fNChannels]; //!< two-body absorption (eq. 2.21)
  static const double   fCoefCA3[fNChannels]; //!< three-body absorption (eq. 2.21)
  static const double fCoefAlpha[fNChannels]; //!< alpha (eq. 2.21)
  static const double  fCoefBeta[fNChannels]; //!< beta (eq. 2.21)

  // kinematics variables
  double fPionMass;      //!< pion mass in MeV
  double fPionMass2;     //!< pion mass squared
  double fPionMomentum;  //!< pion momentum in MeV
  double fPionEnergy;    //!< pion total energy in MeV
  double fMomentumCMS;   //!< momentum in CMS in MeV
  double fMomentumCMS2;  //!< momentum in CMS squared
  double fInvariantMass; //!< inv mass = sqrt(s mandelstam) in MeV

  // delta variables
  double fReducedHalfWidth;     //!< reduced delta half width in MeV
  double fSelfEnergyTotal;      //!< total delta self energy in MeV
  double fSelfEnergyAbsorption; //!< abs part of delta self energy in MeV
  double fDeltaPropagator2;     //!< |delta propagator|^2 in MeV-2

  // nucleus variables
  double fFermiMomentum;  //!< Fermi momentum in MeV      
  double fFermiEnergy;    //!< Fermi energy in MeV

  // cross sections
  double fCouplingFactor; //!< (coupling constant / pion mass)^2

  //! set nuclear density and Fermi momentum / energy
  void setNucleus    (const double &density);
  //! do kinematics
  void setKinematics (const double &pionTk, const bool &isPi0);
  //! set up Delta
  void setDelta ();
  
  //! calculate delta self energy 
  void setSelfEnergy ();

  //! calculalte delta width reduction in nuclear medium
  double deltaReduction () const;

  //! calculalte cross sections for each channel
  void setCrossSections ();
};


#endif // INUKE_OSET_FORMULA_H
/**
 * @brief Table-based implementation of Oset model
 * 
 * @author Tomasz Golan
 * @date 2015
 * @warning Applicable for pion with Tk < 350 MeV
 * @remarks 
 * Tables taken from NuWro's implementation of:
 * E. Oset et al., Nucl. Phys. A484 (1988) 557-592
 * 
 * This implementation is kept from historical reasons.
 * Due to different approach to cascade in GENIE and NuWro there are some normalization issues.
 * Default Oset model can be found in INukeOsetFormula
 * 
*/

#ifndef INUKE_OSET_TABLE_H
#define INUKE_OSET_TABLE_H

#include "INukeOset.h"
#include <vector>
#include <string>

// handle tables with Oset cross sections
class INukeOsetTable : public INukeOset
{
  public:

  //! constructor
  INukeOsetTable (const char* filename);  

  //! use to set up Oset class (assign pion Tk, nuclear density etc)
  void setupOset (const double &density, const double &pionTk, const int &pionPDG, const double &protonFraction);

  private:
  
  //! quasi-elastic piN cross section
  /*! vector contains values in the following order:
   * d0 e0, d0 e1, ... , d0 en, d1 e0 ... \n
   * channel = 0 -> pi+n or pi-p, 1 -> pi+p or pi-n, 2 -> pi0
   */
  std::vector <double> fQelCrossSectionTable [fNChannels]; 
  
  //! charge-exchange piN cross section
  /*! vector contains values in the following order:
   * d0 e0, d0 e1, ... , d0 en, d1 e0 ... \n
   * channel = 0 -> pi+n or pi-p, 1 -> pi+p or pi-n, 2 -> pi0
   */
  std::vector <double> fCexCrossSectionTable [fNChannels];
  
  //! pi absorption cross section
  /*! vector contains values in the following order:
   * d0 e0, d0 e1, ... , d0 en, d1 e0 ...
   */
  std::vector <double> fAbsorptionCrossSectionTable;

  unsigned int fNDensityBins; //!< number of denisty bins
  unsigned int fNEnergyBins;  //!< number of energy bins
  double fDensityBinWidth;    //!< density step (must be fixed)
  double fEnergyBinWidth;     //!< energy step (must be fixed)

  //! interpolate cross section (method fixed for Oset tables)
  double interpolate (const std::vector<double> &data) const;

  //! process single line from table file, push values to proper vector (method fixed for Oset tables)
  int processLine (const std::string &line);
  
  //! check if data in file is consistent (method fixed for Oset tables)
  int checkIntegrity (const double &densityValue, const double &energyValue);
  
  //! stop program and through an error if input file is corrupted (method fixed for Oset tables)
  void badFile (const char* file, const int &errorCode, const int &line = 0) const;

  //! calculalte cross sections for each channel
  void setCrossSections ();

  //! handle table's index and weights for given density and energy 
  struct PointHandler
  {
    double value;      //!< exact value as read from table
    double lowWeight;  //!< distance from high boundary
    double highWeight; //!< distance from low boundary
    int index;         //!< point index = index of low boundary
    double binWidth;   //!< bin width used to calculate distances
    int nBins;         //!< nBins to check isEdge
    bool isEdge; //!< true if value is on edge of table (should never happen)

    PointHandler () : value (-1.0) {}; //!< constructor

    //! set up binWidth and nBins
    inline void setHandler (const double &width, const int &bins)
    {
      binWidth = width;
      nBins    = bins;
    }
    
    void update (const double &newValue); //!< update point if changed
  };

  PointHandler fDensityHandler; //!< nuclear density handler
  PointHandler fEnergyHandler;  //!< pion kinetic energy handler
};

#endif // INUKE_OSET_TABLE_H
//____________________________________________________________________________
/*!

\namespace genie::intranuke

\brief     INTRANUKE utilities

\author    Jim Dobson <j.dobson07 \at imperial.ac.uk>
           Imperial College London

           Costas Andreopoulos <c.andreopoulos \at cern.ch>
           University of Liverpool

	   Aaron Meyer <asm58 \at pitt.edu>
	   Pittsburgh University

\created   Mar 03, 2009

\cpright   Copyright (c) 2003-2025, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org
           
*/
//____________________________________________________________________________

#ifndef _INTRANUKE_UTILS_H_
#define _INTRANUKE_UTILS_H_

#include <TGenPhaseSpace.h>

#include "Physics/NuclearState/NuclearModelI.h"
#include "Physics/HadronTransport/INukeHadroFates.h"
#include "Physics/HadronTransport/INukeMode.h"

class TLorentzVector;

namespace genie {

class GHepRecord;
class GHepParticle;
class PDGCodeList;

namespace utils {
namespace intranuke
{
  //! Hadron survival probability
  double ProbSurvival(
    int pdgc, const TLorentzVector & x4, const TLorentzVector & p4, double A,
    double Z, double mfp_scale_factor=1.0,
    double nRpi=0.5, double nRnuc=1.0, double NR=3, double R0=1.4);

  //! Mean free path (pions, nucleons)
  double MeanFreePath(
    int pdgc, const TLorentzVector & x4, const TLorentzVector & p4, double A,
    double Z, double nRpi=0.5, double nRnuc=1.0);
 
  //! Mean free path (Delta++ **test**)
  double MeanFreePath_Delta(
    int pdgc, const TLorentzVector & x4, const TLorentzVector & p4, double A);

  //! Distance to exit
  double Dist2Exit(
    const TLorentzVector & x4, const TLorentzVector & p4, 
    double A, double NR=3, double R0=1.4);

  //! Distance to exit
  double Dist2ExitMFP(
    int pdgc, const TLorentzVector & x4, const TLorentzVector & p4, 
    double A, double Z, double NR=3, double R0=1.4);

  //! Step particle
  void StepParticle(
    GHepParticle * p, double step, double nuclear_radius=-1.);


  //! Intranuke utility functions

  bool TwoBodyCollision(
    GHepRecord* ev, int pcode, int tcode, int scode, int s2code, double C3CM, GHepParticle* p,
    GHepParticle* t, int &RemnA, int &RemnZ, TLorentzVector &RemnP4, EINukeMode mode=kIMdHA);

  bool TwoBodyKinematics(
    double M3, double M4, TLorentzVector tP1L, TLorentzVector tP2L, 
    TLorentzVector &tP3L, TLorentzVector &tP4L, double C3CM, TLorentzVector &RemnP4, double bindE=0);

  bool ThreeBodyKinematics(
    GHepRecord* ev, GHepParticle* p, int tcode, GHepParticle* s1, GHepParticle* s2, GHepParticle* s3,
    bool DoFermi=false, double FermiFac=0, double FermiMomentum=0, const NuclearModelI* Nuclmodel=(const NuclearModelI*)0);

  bool PionProduction(
    GHepRecord* ev, GHepParticle* p, GHepParticle* s1, GHepParticle* s2, GHepParticle* s3, int &RemnA, int &RemnZ,
    TLorentzVector &RemnP4,bool DoFermi, double FermiFac, double FermiMomentum, const NuclearModelI* Nuclmodel);

  double CalculateEta(
    double Minc, double ke, double Mtarg, double Mtwopart, double Mpi);

  void Equilibrium(
    GHepRecord* ev, GHepParticle* p, int &RemnA, int &RemnZ, TLorentzVector &RemnP4, bool DoFermi,
    double FermiFac, const NuclearModelI* Nuclmodel, double NucRmvE, EINukeMode mode=kIMdHN);

  void PreEquilibrium(
    GHepRecord* ev, GHepParticle* p, int &RemnA, int &RemnZ, TLorentzVector &RemnP4, bool DoFermi,
    double FermiFac, const NuclearModelI* Nuclmodel, double NucRmvE, EINukeMode mode=kIMdHN);


  //! general phase space decay method
  bool PhaseSpaceDecay (
    GHepRecord* ev, GHepParticle* p, const PDGCodeList & pdgv, TLorentzVector &RemnP4,
    double NucRmvE, EINukeMode mode=kIMdHA);

}      // intranuke namespace
}      // utils     namespace
}      // genie     namespace


#endif // _INTRANUKE_UTILS_H_
//____________________________________________________________________________
/*!

\namespace genie::intranuke

\brief     INTRANUKE utilities

\author    Jim Dobson <j.dobson07 \at imperial.ac.uk>
           Imperial College London

           Costas Andreopoulos <c.andreopoulos \at cern.ch>
           University of Liverpool

	   Aaron Meyer <asm58 \at pitt.edu>
	   Pittsburgh University

\created   Mar 03, 2009

\cpright   Copyright (c) 2003-2025, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org

*/
//____________________________________________________________________________

#ifndef _INTRANUKE_UTILS_2018_H_
#define _INTRANUKE_UTILS_2018_H_

#include <TGenPhaseSpace.h>

#include "Physics/NuclearState/NuclearModelI.h"
#include "Physics/HadronTransport/INukeHadroFates2018.h"
#include "Physics/HadronTransport/INukeMode.h"
#include "Physics/HadronTransport/INukeNucleonCorr.h"

class TLorentzVector;

namespace genie {

class GHepRecord;
class GHepParticle;
class Intranuke2018;
class PDGCodeList;

namespace utils {
namespace intranuke2018
{
  //! Hadron survival probability
  double ProbSurvival(
    int pdgc, const TLorentzVector & x4, const TLorentzVector & p4, double A,
    double Z, double mfp_scale_factor, const Intranuke2018& fsi_model );

  //! Mean free path (pions, nucleons)
  double MeanFreePath(
    int pdgc, const TLorentzVector & x4, const TLorentzVector & p4, double A,
    double Z, double nRpi=0.5, double nRnuc=1.0, const bool useOset = false, const bool altOset = false, const bool xsecNNCorr = false, string INukeMode = "XX2018");

  //! Mean free path (Delta++ **test**)
  double MeanFreePath_Delta(
			    int pdgc, const TLorentzVector & x4, const TLorentzVector & p4, double A );

  //! Distance to exit
  double Dist2Exit(
    const TLorentzVector & x4, const TLorentzVector & p4,
    double A, double NR=3, double R0=1.4);

  //! Distance to exit
  double Dist2ExitMFP(
   int pdgc, const TLorentzVector & x4, const TLorentzVector & p4,
    double A, double Z, double NR=3, double R0=1.4);

  //! Step particle
  void StepParticle(
    GHepParticle * p, double step, double nuclear_radius=-1.);


  //! Intranuke utility functions

  bool TwoBodyCollision(
    GHepRecord* ev, int pcode, int tcode, int scode, int s2code, double C3CM, GHepParticle* p,
    GHepParticle* t, int &RemnA, int &RemnZ, TLorentzVector &RemnP4, EINukeMode mode=kIMdHA);

  bool TwoBodyKinematics(
    double M3, double M4, TLorentzVector tP1L, TLorentzVector tP2L,
    TLorentzVector &tP3L, TLorentzVector &tP4L, double C3CM, TLorentzVector &RemnP4, double bindE=0);

  bool ThreeBodyKinematics(
    GHepRecord* ev, GHepParticle* p, int tcode, GHepParticle* s1, GHepParticle* s2, GHepParticle* s3,
    bool DoFermi=false, double FermiFac=0, double FermiMomentum=0, const NuclearModelI* Nuclmodel=(const NuclearModelI*)0);

  bool PionProduction(
    GHepRecord* ev, GHepParticle* p, GHepParticle* s1, GHepParticle* s2, GHepParticle* s3, int &RemnA, int &RemnZ,
    TLorentzVector &RemnP4,bool DoFermi, double FermiFac, double FermiMomentum, const NuclearModelI* Nuclmodel);

  double CalculateEta(
    double Minc, double ke, double Mtarg, double Mtwopart, double Mpi);

  void Equilibrium(
    GHepRecord* ev, GHepParticle* p, int &RemnA, int &RemnZ, TLorentzVector &RemnP4, bool DoFermi,
    double FermiFac, const NuclearModelI* Nuclmodel, double NucRmvE, EINukeMode mode=kIMdHN);

  void PreEquilibrium(
    GHepRecord* ev, GHepParticle* p, int &RemnA, int &RemnZ, TLorentzVector &RemnP4, bool DoFermi,
    double FermiFac, const NuclearModelI* Nuclmodel, double NucRmvE, EINukeMode mode=kIMdHN);


  //! general phase space decay method
  bool PhaseSpaceDecay (
    GHepRecord* ev, GHepParticle* p, const PDGCodeList & pdgv, TLorentzVector &RemnP4,
    double NucRmvE, EINukeMode mode=kIMdHA);

  // calculate pion-nucleon total cross section based on Oset model
  // use only for pion with kinetic energy up to 350 MeV
  double sigmaTotalOset (const double &pionKineticEnergy, const double &density,
                         const int &pionPDG, const double &protonFraction,
                         const bool &isTableChosen = true
                         );

}      // intranuke namespace
}      // utils     namespace
}      // genie     namespace


#endif // _INTRANUKE_UTILS_2018_H_
//____________________________________________________________________________
/*!

\class    genie::Intranuke

\brief    The INTRANUKE intranuclear hadron transport MC.
          Is a concrete implementation of the EventRecordVisitorI interface.

\ref      R.Merenyi et al., Phys.Rev.D45 (1992)
          R.D.Ransome, Nucl.Phys.B 139 (2005)

          Current INTRANUKE development is led by S.Dytman and H.Gallagher.
          The original INTRANUKE cascade MC was developed (in fortran) for the
          NeuGEN MC by R.Edgecock, G.F.Pearce, W.A.Mann, R.Merenyi and others.

\author   Steve Dytman <dytman+@pitt.edu>, Pittsburgh University
          Aaron Meyer <asm58@pitt.edu>, Pittsburgh University
	  Alex Bell, Pittsburgh University
          Hugh Gallagher <gallag@minos.phy.tufts.edu>, Tufts University
          Costas Andreopoulos <c.andreopoulos \at cern.ch> STFC, Rutherford Lab

\created  September 20, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _INTRANUKE_H_
#define _INTRANUKE_H_

#include <TGenPhaseSpace.h>

#include "Physics/NuclearState/NuclearModelI.h"

#include "Framework/Algorithm/AlgFactory.h"
#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/GMode.h"
#include "Physics/HadronTransport/INukeMode.h"
#include "Physics/HadronTransport/INukeHadroFates.h"

class TLorentzVector;
class TVector3;

namespace genie {

class GHepParticle;
class INukeHadroData;
class PDGCodeList;
class HNIntranuke;
class HAIntranuke;

class Intranuke : public EventRecordVisitorI {

friend class IntranukeTester;

public :
  Intranuke();
  Intranuke(string name);
  Intranuke(string name, string config);
 ~Intranuke();

  // implement the EventRecordVisitorI interface 
  virtual void ProcessEventRecord(GHepRecord * event_rec) const;

  // override the Algorithm::Configure methods to load configuration
  // data to protected data members
  void Configure (const Registry & config);
  void Configure (string param_set);

protected:

  // methods for loading configuration
  virtual void LoadConfig (void)=0;

  // general methods for the cascade mc structure
  void   TransportHadrons   (GHepRecord * ev) const;
  void   GenerateVertex     (GHepRecord * ev) const;
  bool   NeedsRescattering  (const GHepParticle* p) const;
  bool   CanRescatter       (const GHepParticle* p) const;
  bool   IsInNucleus        (const GHepParticle* p) const;
  void   SetTrackingRadius  (const GHepParticle* p) const;
  double GenerateStep       (GHepRecord* ev, GHepParticle* p) const;

  // virtual functions for individual modes
  virtual void SimulateHadronicFinalState(GHepRecord* ev, GHepParticle* p) const = 0;
  virtual bool HandleCompoundNucleus(GHepRecord* ev, GHepParticle* p, int mom) const = 0;

  // utility objects & params
  mutable double         fTrackingRadius;///< tracking radius for the nucleus in the current event
  mutable TGenPhaseSpace fGenPhaseSpace; ///< a phase space generator
  INukeHadroData *       fHadroData;     ///< a collection of h+N,h+A data & calculations
  AlgFactory *           fAlgf;          ///< algorithm factory instance
  const NuclearModelI *  fNuclmodel;     ///< nuclear model used to generate fermi momentum
  mutable int            fRemnA;         ///< remnant nucleus A
  mutable int            fRemnZ;         ///< remnant nucleus Z
  mutable TLorentzVector fRemnP4;        ///< P4 of remnant system
  mutable GEvGenMode_t   fGMode;         ///< event generation mode (lepton+A, hadron+A, ...)

  // configuration parameters
  double       fR0;           ///< effective nuclear size param
  double       fNR;           ///< param multiplying the nuclear radius, determining how far to track hadrons beyond the "nuclear boundary"
  double       fNucRmvE;      ///< binding energy to subtract from cascade nucleons
  double       fDelRPion;     ///< factor by which Pion Compton wavelength gets multiplied to become nuclear size enhancement 
  double       fDelRNucleon;  ///< factor by which Nucleon Compton wavelength gets multiplied to become nuclear size enhancement 
  double       fHadStep;      ///< step size for intranuclear hadron transport
  double       fNucAbsFac;    ///< absorption xsec correction factor (hN Mode)
  double       fNucCEXFac;    ///< charge exchange xsec correction factor (hN Mode)
  double       fEPreEq;       ///< threshold for pre-equilibrium reaction
  double       fFermiFac;     ///< testing parameter to modify fermi momentum
  double       fFermiMomentum;     ///< whether or not particle collision is pauli blocked
  bool         fDoFermi;      ///< whether or not to do fermi mom. 
  bool         fDoMassDiff;   ///< whether or not to do mass diff. mode
  bool         fDoCompoundNucleus; ///< whether or not to do compound nucleus considerations

  double       fChPionMFPScale;       ///< tweaking factors for tuning
  double       fNeutralPionMFPScale;
  double       fPionFracCExScale;
  double       fPionFracElasScale;
  double       fPionFracInelScale;
  double       fPionFracAbsScale;
  double       fPionFracPiProdScale;
  double       fNucleonMFPScale;
  double       fNucleonFracCExScale;
  double       fNucleonFracElasScale;
  double       fNucleonFracInelScale;
  double       fNucleonFracAbsScale;
  double       fNucleonFracPiProdScale;

};

}      // genie namespace

#endif // _INTRANUKE_H_
//____________________________________________________________________________
/*!

\class    genie::Intranuke

\brief    The INTRANUKE intranuclear hadron transport MC.
          Is a concrete implementation of the EventRecordVisitorI interface.

\ref      R.Merenyi et al., Phys.Rev.D45 (1992)
          R.D.Ransome, Nucl.Phys.B 139 (2005)

          Current INTRANUKE development is led by S.Dytman and H.Gallagher.
          The original INTRANUKE cascade MC was developed (in fortran) for the
          NeuGEN MC by R.Edgecock, G.F.Pearce, W.A.Mann, R.Merenyi and others.

\author   Steve Dytman <dytman+@pitt.edu>, Pittsburgh University
          Aaron Meyer <asm58@pitt.edu>, Pittsburgh University
	  Alex Bell, Pittsburgh University
          Hugh Gallagher <gallag@minos.phy.tufts.edu>, Tufts University
          Costas Andreopoulos <c.andreopoulos \at cern.ch> STFC, Rutherford Lab

\created  September 20, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org

*/
//____________________________________________________________________________

#ifndef _INTRANUKE_2018_H_
#define _INTRANUKE_2018_H_

#include <TGenPhaseSpace.h>

#include "Physics/NuclearState/NuclearModelI.h"

#include "Framework/Algorithm/AlgFactory.h"
#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Conventions/GMode.h"
#include "Physics/HadronTransport/INukeMode.h"
#include "Physics/HadronTransport/INukeHadroFates2018.h"

class TLorentzVector;
class TVector3;

namespace genie {

class GHepParticle;
class INukeHadroData2018;
class PDGCodeList;
class HNIntranuke2018;
class HAIntranuke2018;

class Intranuke2018 : public EventRecordVisitorI {

friend class IntranukeTester;

public :
  Intranuke2018();
  Intranuke2018(string name);
  Intranuke2018(string name, string config);
 ~Intranuke2018();

  // implement the EventRecordVisitorI interface
  virtual void ProcessEventRecord(GHepRecord * event_rec) const;

  // override the Algorithm::Configure methods to load configuration
  // data to protected data members
  virtual void Configure (const Registry & config);
  virtual void Configure (string param_set);

  virtual string GetINukeMode() const {return "XX2018";};
  virtual string GetGenINukeMode() const {return "XX";};

  // Setters used in reweighting
  inline void SetRemnA( int A ) { fRemnA = A; }
  inline void SetRemnZ( int Z ) { fRemnZ = Z; }

  inline double GetRemnA() const { return fRemnA; }
  inline double GetRemnZ() const { return fRemnZ; }

  inline double GetR0() const { return fR0; }
  inline double GetNR() const { return fNR; }

  inline double GetDelRPion() const { return fDelRPion; }
  inline double GetDelRNucleon() const { return fDelRNucleon; }

  inline double GetNucRmvE() const { return fNucRmvE; }
  inline double GetHadStep() const { return fHadStep; }

  inline bool GetUseOset() const { return fUseOset; }
  inline bool GetAltOset() const { return fAltOset; }
  inline bool GetXsecNNCorr() const { return fXsecNNCorr; }

protected:

  // methods for loading configuration
  virtual void LoadConfig (void)=0;

  // general methods for the cascade mc structure
  void   TransportHadrons   (GHepRecord * ev) const;
  void   GenerateVertex     (GHepRecord * ev) const;
  bool   NeedsRescattering  (const GHepParticle* p) const;
  bool   CanRescatter       (const GHepParticle* p) const;
  bool   IsInNucleus        (const GHepParticle* p) const;
  void   SetTrackingRadius  (const GHepParticle* p) const;
  double GenerateStep       (GHepRecord* ev, GHepParticle* p) const;

  // virtual functions for individual modes
  virtual void SimulateHadronicFinalState(GHepRecord* ev, GHepParticle* p) const = 0;
  virtual int HandleCompoundNucleus(GHepRecord* ev, GHepParticle* p, int mom) const = 0;

  // utility objects & params
  mutable double         fTrackingRadius;///< tracking radius for the nucleus in the current event
  mutable TGenPhaseSpace fGenPhaseSpace; ///< a phase space generator
  INukeHadroData2018 *       fHadroData2018;     ///< a collection of h+N,h+A data & calculations
  AlgFactory *           fAlgf;          ///< algorithm factory instance
  const NuclearModelI *  fNuclmodel;     ///< nuclear model used to generate fermi momentum
  mutable int            fRemnA;         ///< remnant nucleus A
  mutable int            fRemnZ;         ///< remnant nucleus Z
  mutable TLorentzVector fRemnP4;        ///< P4 of remnant system
  mutable GEvGenMode_t   fGMode;         ///< event generation mode (lepton+A, hadron+A, ...)

  // configuration parameters
  double       fR0;           ///< effective nuclear size param
  double       fNR;           ///< param multiplying the nuclear radius, determining how far to track hadrons beyond the "nuclear boundary"
  double       fNucRmvE;      ///< binding energy to subtract from cascade nucleons
  double       fDelRPion;     ///< factor by which Pion Compton wavelength gets multiplied to become nuclear size enhancement
  double       fDelRNucleon;  ///< factor by which Nucleon Compton wavelength gets multiplied to become nuclear size enhancement
  double       fHadStep;      ///< step size for intranuclear hadron transport
  double       fNucAbsFac;    ///< absorption xsec correction factor (hN Mode)
  double       fNucCEXFac;    ///< charge exchange xsec correction factor (hN Mode)
  double       fEPreEq;       ///< threshold for pre-equilibrium reaction
  double       fFermiFac;     ///< testing parameter to modify fermi momentum
  double       fFermiMomentum;     ///< whether or not particle collision is pauli blocked
  bool         fDoFermi;      ///< whether or not to do fermi mom.
  bool         fDoMassDiff;   ///< whether or not to do mass diff. mode
  bool         fDoCompoundNucleus; ///< whether or not to do compound nucleus considerations
  bool         fUseOset;      ///< Oset model for low energy pion in hN
  bool         fAltOset;      ///< NuWro's table-based implementation (not recommended)
  bool         fXsecNNCorr;   ///< use nuclear medium correction for NN cross section

  double       fChPionMFPScale;       ///< tweaking factors for tuning
  double       fNeutralPionMFPScale;
  double       fPionFracCExScale;
  double       fPionFracInelScale;
  double       fChPionFracAbsScale;
  double       fNeutralPionFracAbsScale;
  double       fPionFracPiProdScale;
  double       fNucleonMFPScale;
  double       fNucleonFracCExScale;
  double       fNucleonFracInelScale;
  double       fNucleonFracAbsScale;
  double       fNucleonFracPiProdScale;

};

}      // genie namespace

#endif // _INTRANUKE_2018_H_
//____________________________________________________________________________
/*!

\class    genie::NucBindEnergyAggregator

\brief    A nuclear binding energy 'collector' which visits the event record,
          finds nucleons originating from within a nuclei and subtracts the
          binding energy they had in the nucleus.
          To record this action in the event record a hypothetical BINDINO is
          added to the event record.
          Is a concerete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 19, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _NUCLEAR_BINDING_ENERGY_AGGREGATOR_H_
#define _NUCLEAR_BINDING_ENERGY_AGGREGATOR_H_

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class GHepParticle;

class NucBindEnergyAggregator : public EventRecordVisitorI {

public :
  NucBindEnergyAggregator();
  NucBindEnergyAggregator(string config);
 ~NucBindEnergyAggregator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);
  //GHepParticle * FindMotherNucleus(int ipos, GHepRecord * event_rec) const;

  bool fAllowRecombination; 
};

}      // genie namespace

#endif // _NUCLEAR_BINDING_ENERGY_AGGREGATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::CascadeReweight", payloadCode, "@",
"genie::HAIntranuke", payloadCode, "@",
"genie::HAIntranuke2018", payloadCode, "@",
"genie::HNIntranuke2018", payloadCode, "@",
"genie::HadronTransporter", payloadCode, "@",
"genie::INukeDeltaPropg", payloadCode, "@",
"genie::INukeHadroData", payloadCode, "@",
"genie::INukeHadroData2018", payloadCode, "@",
"genie::Intranuke", payloadCode, "@",
"genie::Intranuke2018", payloadCode, "@",
"genie::NucBindEnergyAggregator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhHadTransp",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhHadTransp_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhHadTransp_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhHadTransp() {
  TriggerDictionaryInitialization_libGPhHadTransp_Impl();
}
