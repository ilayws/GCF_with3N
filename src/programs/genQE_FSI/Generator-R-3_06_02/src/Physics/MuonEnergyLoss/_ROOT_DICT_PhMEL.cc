// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhMEL
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
#include "BetheBlochModel.h"
#include "BezrukovBugaevModel.h"
#include "KokoulinPetrukhinModel.h"
#include "MuELossI.h"
#include "PetrukhinShestakovModel.h"

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
   namespace mueloss {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLmueloss_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::mueloss", 0 /*version*/, "MuELMaterial.h", 27,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLmueloss_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLmueloss_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLMuELossI_Dictionary();
   static void geniecLcLmuelosscLcLMuELossI_TClassManip(TClass*);
   static void delete_geniecLcLmuelosscLcLMuELossI(void *p);
   static void deleteArray_geniecLcLmuelosscLcLMuELossI(void *p);
   static void destruct_geniecLcLmuelosscLcLMuELossI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::MuELossI*)
   {
      ::genie::mueloss::MuELossI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::MuELossI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::MuELossI", "MuELossI.h", 31,
                  typeid(::genie::mueloss::MuELossI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLMuELossI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::MuELossI) );
      instance.SetDelete(&delete_geniecLcLmuelosscLcLMuELossI);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLMuELossI);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLMuELossI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::MuELossI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::mueloss::MuELossI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::MuELossI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLMuELossI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::MuELossI*>(nullptr))->GetClass();
      geniecLcLmuelosscLcLMuELossI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLMuELossI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLBetheBlochModel_Dictionary();
   static void geniecLcLmuelosscLcLBetheBlochModel_TClassManip(TClass*);
   static void *new_geniecLcLmuelosscLcLBetheBlochModel(void *p = nullptr);
   static void *newArray_geniecLcLmuelosscLcLBetheBlochModel(Long_t size, void *p);
   static void delete_geniecLcLmuelosscLcLBetheBlochModel(void *p);
   static void deleteArray_geniecLcLmuelosscLcLBetheBlochModel(void *p);
   static void destruct_geniecLcLmuelosscLcLBetheBlochModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::BetheBlochModel*)
   {
      ::genie::mueloss::BetheBlochModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::BetheBlochModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::BetheBlochModel", "", 32,
                  typeid(::genie::mueloss::BetheBlochModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLBetheBlochModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::BetheBlochModel) );
      instance.SetNew(&new_geniecLcLmuelosscLcLBetheBlochModel);
      instance.SetNewArray(&newArray_geniecLcLmuelosscLcLBetheBlochModel);
      instance.SetDelete(&delete_geniecLcLmuelosscLcLBetheBlochModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLBetheBlochModel);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLBetheBlochModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::BetheBlochModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::mueloss::BetheBlochModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::BetheBlochModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLBetheBlochModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::BetheBlochModel*>(nullptr))->GetClass();
      geniecLcLmuelosscLcLBetheBlochModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLBetheBlochModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLBezrukovBugaevModel_Dictionary();
   static void geniecLcLmuelosscLcLBezrukovBugaevModel_TClassManip(TClass*);
   static void *new_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p = nullptr);
   static void *newArray_geniecLcLmuelosscLcLBezrukovBugaevModel(Long_t size, void *p);
   static void delete_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p);
   static void deleteArray_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p);
   static void destruct_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::BezrukovBugaevModel*)
   {
      ::genie::mueloss::BezrukovBugaevModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::BezrukovBugaevModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::BezrukovBugaevModel", "", 81,
                  typeid(::genie::mueloss::BezrukovBugaevModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLBezrukovBugaevModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::BezrukovBugaevModel) );
      instance.SetNew(&new_geniecLcLmuelosscLcLBezrukovBugaevModel);
      instance.SetNewArray(&newArray_geniecLcLmuelosscLcLBezrukovBugaevModel);
      instance.SetDelete(&delete_geniecLcLmuelosscLcLBezrukovBugaevModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLBezrukovBugaevModel);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLBezrukovBugaevModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::BezrukovBugaevModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::mueloss::BezrukovBugaevModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::BezrukovBugaevModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLBezrukovBugaevModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::BezrukovBugaevModel*>(nullptr))->GetClass();
      geniecLcLmuelosscLcLBezrukovBugaevModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLBezrukovBugaevModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLKokoulinPetrukhinModel_Dictionary();
   static void geniecLcLmuelosscLcLKokoulinPetrukhinModel_TClassManip(TClass*);
   static void *new_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p = nullptr);
   static void *newArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel(Long_t size, void *p);
   static void delete_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p);
   static void deleteArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p);
   static void destruct_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::KokoulinPetrukhinModel*)
   {
      ::genie::mueloss::KokoulinPetrukhinModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::KokoulinPetrukhinModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::KokoulinPetrukhinModel", "", 172,
                  typeid(::genie::mueloss::KokoulinPetrukhinModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLKokoulinPetrukhinModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::KokoulinPetrukhinModel) );
      instance.SetNew(&new_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      instance.SetNewArray(&newArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      instance.SetDelete(&delete_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::KokoulinPetrukhinModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::mueloss::KokoulinPetrukhinModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::KokoulinPetrukhinModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLKokoulinPetrukhinModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::KokoulinPetrukhinModel*>(nullptr))->GetClass();
      geniecLcLmuelosscLcLKokoulinPetrukhinModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLKokoulinPetrukhinModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLPetrukhinShestakovModel_Dictionary();
   static void geniecLcLmuelosscLcLPetrukhinShestakovModel_TClassManip(TClass*);
   static void *new_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p = nullptr);
   static void *newArray_geniecLcLmuelosscLcLPetrukhinShestakovModel(Long_t size, void *p);
   static void delete_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p);
   static void deleteArray_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p);
   static void destruct_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::PetrukhinShestakovModel*)
   {
      ::genie::mueloss::PetrukhinShestakovModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::PetrukhinShestakovModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::PetrukhinShestakovModel", "", 322,
                  typeid(::genie::mueloss::PetrukhinShestakovModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLPetrukhinShestakovModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::PetrukhinShestakovModel) );
      instance.SetNew(&new_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      instance.SetNewArray(&newArray_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      instance.SetDelete(&delete_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::PetrukhinShestakovModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::mueloss::PetrukhinShestakovModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::PetrukhinShestakovModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLPetrukhinShestakovModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::mueloss::PetrukhinShestakovModel*>(nullptr))->GetClass();
      geniecLcLmuelosscLcLPetrukhinShestakovModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLPetrukhinShestakovModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLMuELossI(void *p) {
      delete (static_cast<::genie::mueloss::MuELossI*>(p));
   }
   static void deleteArray_geniecLcLmuelosscLcLMuELossI(void *p) {
      delete [] (static_cast<::genie::mueloss::MuELossI*>(p));
   }
   static void destruct_geniecLcLmuelosscLcLMuELossI(void *p) {
      typedef ::genie::mueloss::MuELossI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::MuELossI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLmuelosscLcLBetheBlochModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::mueloss::BetheBlochModel : new ::genie::mueloss::BetheBlochModel;
   }
   static void *newArray_geniecLcLmuelosscLcLBetheBlochModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::mueloss::BetheBlochModel[nElements] : new ::genie::mueloss::BetheBlochModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLBetheBlochModel(void *p) {
      delete (static_cast<::genie::mueloss::BetheBlochModel*>(p));
   }
   static void deleteArray_geniecLcLmuelosscLcLBetheBlochModel(void *p) {
      delete [] (static_cast<::genie::mueloss::BetheBlochModel*>(p));
   }
   static void destruct_geniecLcLmuelosscLcLBetheBlochModel(void *p) {
      typedef ::genie::mueloss::BetheBlochModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::BetheBlochModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::mueloss::BezrukovBugaevModel : new ::genie::mueloss::BezrukovBugaevModel;
   }
   static void *newArray_geniecLcLmuelosscLcLBezrukovBugaevModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::mueloss::BezrukovBugaevModel[nElements] : new ::genie::mueloss::BezrukovBugaevModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p) {
      delete (static_cast<::genie::mueloss::BezrukovBugaevModel*>(p));
   }
   static void deleteArray_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p) {
      delete [] (static_cast<::genie::mueloss::BezrukovBugaevModel*>(p));
   }
   static void destruct_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p) {
      typedef ::genie::mueloss::BezrukovBugaevModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::BezrukovBugaevModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::mueloss::KokoulinPetrukhinModel : new ::genie::mueloss::KokoulinPetrukhinModel;
   }
   static void *newArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::mueloss::KokoulinPetrukhinModel[nElements] : new ::genie::mueloss::KokoulinPetrukhinModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p) {
      delete (static_cast<::genie::mueloss::KokoulinPetrukhinModel*>(p));
   }
   static void deleteArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p) {
      delete [] (static_cast<::genie::mueloss::KokoulinPetrukhinModel*>(p));
   }
   static void destruct_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p) {
      typedef ::genie::mueloss::KokoulinPetrukhinModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::KokoulinPetrukhinModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::mueloss::PetrukhinShestakovModel : new ::genie::mueloss::PetrukhinShestakovModel;
   }
   static void *newArray_geniecLcLmuelosscLcLPetrukhinShestakovModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::mueloss::PetrukhinShestakovModel[nElements] : new ::genie::mueloss::PetrukhinShestakovModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p) {
      delete (static_cast<::genie::mueloss::PetrukhinShestakovModel*>(p));
   }
   static void deleteArray_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p) {
      delete [] (static_cast<::genie::mueloss::PetrukhinShestakovModel*>(p));
   }
   static void destruct_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p) {
      typedef ::genie::mueloss::PetrukhinShestakovModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::PetrukhinShestakovModel

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhMEL() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhMEL) = RecordReadRules_libGPhMEL();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhMEL));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhMEL_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/MuonEnergyLoss",
"GENIE",
"GENIE/Physics/MuonEnergyLoss",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/MuonEnergyLoss",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/MuonEnergyLoss/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhMEL dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{namespace mueloss{class  __attribute__((annotate("$clingAutoload$Physics/MuonEnergyLoss/MuELossI.h")))  MuELossI;}}
namespace genie{namespace mueloss{class  BetheBlochModel;}}
namespace genie{namespace mueloss{class  BezrukovBugaevModel;}}
namespace genie{namespace mueloss{class  KokoulinPetrukhinModel;}}
namespace genie{namespace mueloss{class  PetrukhinShestakovModel;}}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhMEL dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::mueloss::BetheBlochModel

\brief    Bethe-Bloch model for muon energy loss due to Ionization
          Concrete implementation of the MuELossI interface.

\ref      W.Lohmann, R.Kopp and R.Voss,
          Energy Loss of Muons in the Energy Range 1-10000 GeV, CERN 85-03

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  December 10, 2003

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _BETHE_BLOCH_MODEL_H_
#define _BETHE_BLOCH_MODEL_H_

#include "Physics/MuonEnergyLoss/MuELossI.h"

namespace genie   {
namespace mueloss {

class BetheBlochModel : public MuELossI
{
public:
  BetheBlochModel();
  BetheBlochModel(string config);
  virtual ~BetheBlochModel();

  //! implement the MuELossI interface
  double        dE_dx   (double E, MuELMaterial_t material) const;
  MuELProcess_t Process (void) const { return eMupIonization; }
};

}      // mueloss namespace
}      // genie   namespace
#endif // _BETHE_BLOCH_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::mueloss::BezrukovBugaevModel

\brief    Bezrukov-Bugaev model for the energy loss of high energy muons due
          to photonuclear interactions.
          Concrete implementation of the MuELossI interface.

\ref      W.Lohmann, R.Kopp and R.Voss,
          Energy Loss of Muons in the Energy Range 1-10000 GeV, CERN 85-03

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  December 10, 2003

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _BEZRUKOV_BUGAEV_MODEL_H_
#define _BEZRUKOV_BUGAEV_MODEL_H_

#include <Math/IFunction.h>

#include "Physics/MuonEnergyLoss/MuELossI.h"

namespace genie {

namespace mueloss {

class BezrukovBugaevModel : public MuELossI
{
public:
  BezrukovBugaevModel();
  BezrukovBugaevModel(string config);
  virtual ~BezrukovBugaevModel();

  //! Implement the MuELossI interface
  double       dE_dx    (double E, MuELMaterial_t material) const;
  MuELProcess_t Process (void) const { return eMupNuclearInteraction; }
private:

};

} // mueloss namespace
} // genie   namespace

//____________________________________________________________________________
/*!
\class    genie::mueloss::BezrukovBugaevIntegrand

\brief    Auxiliary scalar function for the internal integration in Bezrukov
          Bugaev model

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  December 10, 2003
*/
//____________________________________________________________________________

namespace genie {
 namespace mueloss {
   namespace gsl {

    class BezrukovBugaevIntegrand : public ROOT::Math::IBaseFunctionOneDim
    {
     public:
       BezrukovBugaevIntegrand(double E, double A);
      ~BezrukovBugaevIntegrand();
       // ROOT::Math::IBaseFunctionOneDim interface
       unsigned int                      NDim   (void)       const;
       double                            DoEval (double xin) const;
       ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
     private:
       double fE;
       double fA;
     };

  }  // gsl namespace
 }  // mueloss namespace
}  // genie   namespace

#endif // _BEZRUKOV_BUGAEV_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::mueloss::KokoulinPetrukhinModel

\brief    Kokoulin-Petrukhin model for the energy loss of muons due to direct
          e+e- pair production.
          Concrete implementation of the MuELossI interface.

\ref      W.Lohmann, R.Kopp and R.Voss,
          Energy Loss of Muons in the Energy Range 1-10000 GeV, CERN 85-03

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  December 10, 2003

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _KOKOULIN_PETRUKHIN_MODEL_H_
#define _KOKOULIN_PETRUKHIN_MODEL_H_

#include <Math/IFunction.h>

#include "Physics/MuonEnergyLoss/MuELossI.h"
//#include "Numerical/GSFunc.h"

namespace genie {

//class IntegratorI;

namespace mueloss {

class KokoulinPetrukhinModel : public MuELossI
{
public:

  KokoulinPetrukhinModel();
  KokoulinPetrukhinModel(string config);
  virtual ~KokoulinPetrukhinModel();

  //! Implement the MuELossI interface
  double        dE_dx   (double E, MuELMaterial_t material) const;
  MuELProcess_t Process (void) const { return eMupPairProduction; }

//  //! overload the Algorithm::Configure() methods to load private data
//  //! members from configuration options
//  void Configure(const Registry & config);
//  void Configure(string config);
//
//private:
//  void LoadConfig (void);
// // const IntegratorI * fIntegrator;
};

} // mueloss namespace
} // genie   namespace

//____________________________________________________________________________
/*!
\class    genie::mueloss::KokoulinPetrukhinIntegrand

\brief    Auxiliary scalar function for the internal integration in Kokulin
          Petrukhin model

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  December 10, 2003
*/
//____________________________________________________________________________

namespace genie {
 namespace mueloss {
   namespace gsl {

    class KokoulinPetrukhinIntegrand : public ROOT::Math::IBaseFunctionMultiDim
    {
     public:
       KokoulinPetrukhinIntegrand(double E, double Z);
      ~KokoulinPetrukhinIntegrand();
       // ROOT::Math::IBaseFunctionMultiDim interface
       unsigned int                        NDim   (void)               const;
       double                              DoEval (const double * xin) const;
       ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
     private:
       double fE;
       double fZ;
     };

  }  // gsl namespace
 }  // mueloss namespace
}  // genie   namespace

#endif  // _KOKOULIN_PETRUKHIN_MODEL_
//____________________________________________________________________________
/*!

\class    genie::MuELossI

\brief    Cross Section Calculation Interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  December 10, 2003

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _MUELOSS_I_H_
#define _MUELOSS_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Physics/MuonEnergyLoss/MuELMaterial.h"
#include "Physics/MuonEnergyLoss/MuELProcess.h"

namespace genie   {
namespace mueloss {

const double kMaxMuE = 10000; // 10 TeV

class MuELossI : public Algorithm {

public:
  virtual ~MuELossI();

  virtual double        dE_dx   (double E, MuELMaterial_t m) const = 0;
  virtual MuELProcess_t Process (void) const = 0;

protected:
  MuELossI();
  MuELossI(string name);
  MuELossI(string name, string config);
};

}       // mueloss namespace
}       // genie   namespace

#endif  // _MUELOSS_I_H_
//____________________________________________________________________________
/*!

\class    genie::mueloss::PetrukhinShestakovModel

\brief    Bethe-Heitler, Petrukhin-Shestakov model for the energy loss of muons
          due to bremsstrahlung.
          Concrete implementation of the MuELossI interface.

\ref      W.Lohmann, R.Kopp and R.Voss,
          Energy Loss of Muons in the Energy Range 1-10000 GeV, CERN 85-03

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  December 10, 2003

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          

*/
//____________________________________________________________________________

#ifndef _PETRUKHIN_SHESTAKOV_MODEL_H_
#define _PETRUKHIN_SHESTAKOV_MODEL_H_

#include <Math/IFunction.h>

#include "Physics/MuonEnergyLoss/MuELossI.h"
///#include "Numerical/GSFunc.h"

namespace genie {

////class IntegratorI;

namespace mueloss {

class PetrukhinShestakovModel : public MuELossI
{
public:
  PetrukhinShestakovModel();
  PetrukhinShestakovModel(string config);
  virtual ~PetrukhinShestakovModel();

  //! Implement the MuELossI interface
  double        dE_dx   (double E, MuELMaterial_t material) const;
  MuELProcess_t Process (void) const { return eMupBremsstrahlung; }

//  //! Overload the Algorithm::Configure() methods to load private data
//  //! members from configuration options
//  void Configure(const Registry & config);
//  void Configure(string config);
//
//private:
//  void LoadConfig (void);
//  //const IntegratorI * fIntegrator;
};

} // mueloss namespace
} // genie   namespace

//____________________________________________________________________________
/*!
\class    genie::mueloss::PetrukhinShestakovIntegrand

\brief    Auxiliary scalar function for the internal integration in Petrukhin
          Shestakov model

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  December 10, 2003
*/
//____________________________________________________________________________

namespace genie {
 namespace mueloss {
   namespace gsl {
          
    class PetrukhinShestakovIntegrand : public ROOT::Math::IBaseFunctionOneDim
    {
     public:
       PetrukhinShestakovIntegrand(double E, double Z);
      ~PetrukhinShestakovIntegrand();
       // ROOT::Math::IBaseFunctionOneDim interface
       unsigned int                      NDim   (void)       const;
       double                            DoEval (double xin) const;
       ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
     private:
       double fE;
       double fZ;
     };

  }  // gsl namespace  
 }  // mueloss namespace
}  // genie   namespace

#endif // _PETRUKHIN_SHESTAKOV_MODEL_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::mueloss::BetheBlochModel", payloadCode, "@",
"genie::mueloss::BezrukovBugaevModel", payloadCode, "@",
"genie::mueloss::KokoulinPetrukhinModel", payloadCode, "@",
"genie::mueloss::MuELossI", payloadCode, "@",
"genie::mueloss::PetrukhinShestakovModel", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhMEL",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhMEL_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhMEL_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhMEL() {
  TriggerDictionaryInitialization_libGPhMEL_Impl();
}
