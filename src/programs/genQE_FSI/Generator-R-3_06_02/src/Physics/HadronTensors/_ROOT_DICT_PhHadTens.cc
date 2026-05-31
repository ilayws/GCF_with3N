// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhHadTens
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
#include "HadronTensorModelI.h"
#include "LabFrameHadronTensorI.h"
#include "NievesMECHadronTensorModel.h"
#include "SuSAv2MECHadronTensorModel.h"
#include "SuSAv2QELHadronTensorModel.h"
#include "TabulatedHadronTensorModelI.h"
#include "TabulatedLabFrameHadronTensor.h"

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
   static TClass *geniecLcLHadronTensorI_Dictionary();
   static void geniecLcLHadronTensorI_TClassManip(TClass*);
   static void delete_geniecLcLHadronTensorI(void *p);
   static void deleteArray_geniecLcLHadronTensorI(void *p);
   static void destruct_geniecLcLHadronTensorI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HadronTensorI*)
   {
      ::genie::HadronTensorI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HadronTensorI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HadronTensorI", "HadronTensorI.h", 95,
                  typeid(::genie::HadronTensorI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHadronTensorI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HadronTensorI) );
      instance.SetDelete(&delete_geniecLcLHadronTensorI);
      instance.SetDeleteArray(&deleteArray_geniecLcLHadronTensorI);
      instance.SetDestructor(&destruct_geniecLcLHadronTensorI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HadronTensorI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HadronTensorI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HadronTensorI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHadronTensorI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HadronTensorI*>(nullptr))->GetClass();
      geniecLcLHadronTensorI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHadronTensorI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHadronTensorModelI_Dictionary();
   static void geniecLcLHadronTensorModelI_TClassManip(TClass*);
   static void delete_geniecLcLHadronTensorModelI(void *p);
   static void deleteArray_geniecLcLHadronTensorModelI(void *p);
   static void destruct_geniecLcLHadronTensorModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HadronTensorModelI*)
   {
      ::genie::HadronTensorModelI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HadronTensorModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HadronTensorModelI", "", 35,
                  typeid(::genie::HadronTensorModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHadronTensorModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HadronTensorModelI) );
      instance.SetDelete(&delete_geniecLcLHadronTensorModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLHadronTensorModelI);
      instance.SetDestructor(&destruct_geniecLcLHadronTensorModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HadronTensorModelI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HadronTensorModelI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HadronTensorModelI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHadronTensorModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HadronTensorModelI*>(nullptr))->GetClass();
      geniecLcLHadronTensorModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHadronTensorModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLabFrameHadronTensorI_Dictionary();
   static void geniecLcLLabFrameHadronTensorI_TClassManip(TClass*);
   static void delete_geniecLcLLabFrameHadronTensorI(void *p);
   static void deleteArray_geniecLcLLabFrameHadronTensorI(void *p);
   static void destruct_geniecLcLLabFrameHadronTensorI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LabFrameHadronTensorI*)
   {
      ::genie::LabFrameHadronTensorI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LabFrameHadronTensorI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LabFrameHadronTensorI", "", 130,
                  typeid(::genie::LabFrameHadronTensorI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLabFrameHadronTensorI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LabFrameHadronTensorI) );
      instance.SetDelete(&delete_geniecLcLLabFrameHadronTensorI);
      instance.SetDeleteArray(&deleteArray_geniecLcLLabFrameHadronTensorI);
      instance.SetDestructor(&destruct_geniecLcLLabFrameHadronTensorI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LabFrameHadronTensorI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::LabFrameHadronTensorI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::LabFrameHadronTensorI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLabFrameHadronTensorI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::LabFrameHadronTensorI*>(nullptr))->GetClass();
      geniecLcLLabFrameHadronTensorI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLabFrameHadronTensorI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLTabulatedHadronTensorModelI_Dictionary();
   static void geniecLcLTabulatedHadronTensorModelI_TClassManip(TClass*);
   static void delete_geniecLcLTabulatedHadronTensorModelI(void *p);
   static void deleteArray_geniecLcLTabulatedHadronTensorModelI(void *p);
   static void destruct_geniecLcLTabulatedHadronTensorModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::TabulatedHadronTensorModelI*)
   {
      ::genie::TabulatedHadronTensorModelI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::TabulatedHadronTensorModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::TabulatedHadronTensorModelI", "TabulatedHadronTensorModelI.h", 37,
                  typeid(::genie::TabulatedHadronTensorModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLTabulatedHadronTensorModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::TabulatedHadronTensorModelI) );
      instance.SetDelete(&delete_geniecLcLTabulatedHadronTensorModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLTabulatedHadronTensorModelI);
      instance.SetDestructor(&destruct_geniecLcLTabulatedHadronTensorModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::TabulatedHadronTensorModelI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::TabulatedHadronTensorModelI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::TabulatedHadronTensorModelI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLTabulatedHadronTensorModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::TabulatedHadronTensorModelI*>(nullptr))->GetClass();
      geniecLcLTabulatedHadronTensorModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLTabulatedHadronTensorModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNievesMECHadronTensorModel_Dictionary();
   static void geniecLcLNievesMECHadronTensorModel_TClassManip(TClass*);
   static void *new_geniecLcLNievesMECHadronTensorModel(void *p = nullptr);
   static void *newArray_geniecLcLNievesMECHadronTensorModel(Long_t size, void *p);
   static void delete_geniecLcLNievesMECHadronTensorModel(void *p);
   static void deleteArray_geniecLcLNievesMECHadronTensorModel(void *p);
   static void destruct_geniecLcLNievesMECHadronTensorModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NievesMECHadronTensorModel*)
   {
      ::genie::NievesMECHadronTensorModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NievesMECHadronTensorModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NievesMECHadronTensorModel", "", 318,
                  typeid(::genie::NievesMECHadronTensorModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNievesMECHadronTensorModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NievesMECHadronTensorModel) );
      instance.SetNew(&new_geniecLcLNievesMECHadronTensorModel);
      instance.SetNewArray(&newArray_geniecLcLNievesMECHadronTensorModel);
      instance.SetDelete(&delete_geniecLcLNievesMECHadronTensorModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLNievesMECHadronTensorModel);
      instance.SetDestructor(&destruct_geniecLcLNievesMECHadronTensorModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NievesMECHadronTensorModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NievesMECHadronTensorModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NievesMECHadronTensorModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNievesMECHadronTensorModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NievesMECHadronTensorModel*>(nullptr))->GetClass();
      geniecLcLNievesMECHadronTensorModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNievesMECHadronTensorModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSuSAv2MECHadronTensorModel_Dictionary();
   static void geniecLcLSuSAv2MECHadronTensorModel_TClassManip(TClass*);
   static void *new_geniecLcLSuSAv2MECHadronTensorModel(void *p = nullptr);
   static void *newArray_geniecLcLSuSAv2MECHadronTensorModel(Long_t size, void *p);
   static void delete_geniecLcLSuSAv2MECHadronTensorModel(void *p);
   static void deleteArray_geniecLcLSuSAv2MECHadronTensorModel(void *p);
   static void destruct_geniecLcLSuSAv2MECHadronTensorModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SuSAv2MECHadronTensorModel*)
   {
      ::genie::SuSAv2MECHadronTensorModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SuSAv2MECHadronTensorModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SuSAv2MECHadronTensorModel", "", 365,
                  typeid(::genie::SuSAv2MECHadronTensorModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSuSAv2MECHadronTensorModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SuSAv2MECHadronTensorModel) );
      instance.SetNew(&new_geniecLcLSuSAv2MECHadronTensorModel);
      instance.SetNewArray(&newArray_geniecLcLSuSAv2MECHadronTensorModel);
      instance.SetDelete(&delete_geniecLcLSuSAv2MECHadronTensorModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLSuSAv2MECHadronTensorModel);
      instance.SetDestructor(&destruct_geniecLcLSuSAv2MECHadronTensorModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SuSAv2MECHadronTensorModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SuSAv2MECHadronTensorModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SuSAv2MECHadronTensorModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSuSAv2MECHadronTensorModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SuSAv2MECHadronTensorModel*>(nullptr))->GetClass();
      geniecLcLSuSAv2MECHadronTensorModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSuSAv2MECHadronTensorModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSuSAv2QELHadronTensorModel_Dictionary();
   static void geniecLcLSuSAv2QELHadronTensorModel_TClassManip(TClass*);
   static void *new_geniecLcLSuSAv2QELHadronTensorModel(void *p = nullptr);
   static void *newArray_geniecLcLSuSAv2QELHadronTensorModel(Long_t size, void *p);
   static void delete_geniecLcLSuSAv2QELHadronTensorModel(void *p);
   static void deleteArray_geniecLcLSuSAv2QELHadronTensorModel(void *p);
   static void destruct_geniecLcLSuSAv2QELHadronTensorModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SuSAv2QELHadronTensorModel*)
   {
      ::genie::SuSAv2QELHadronTensorModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SuSAv2QELHadronTensorModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SuSAv2QELHadronTensorModel", "", 412,
                  typeid(::genie::SuSAv2QELHadronTensorModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSuSAv2QELHadronTensorModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SuSAv2QELHadronTensorModel) );
      instance.SetNew(&new_geniecLcLSuSAv2QELHadronTensorModel);
      instance.SetNewArray(&newArray_geniecLcLSuSAv2QELHadronTensorModel);
      instance.SetDelete(&delete_geniecLcLSuSAv2QELHadronTensorModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLSuSAv2QELHadronTensorModel);
      instance.SetDestructor(&destruct_geniecLcLSuSAv2QELHadronTensorModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SuSAv2QELHadronTensorModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SuSAv2QELHadronTensorModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SuSAv2QELHadronTensorModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSuSAv2QELHadronTensorModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SuSAv2QELHadronTensorModel*>(nullptr))->GetClass();
      geniecLcLSuSAv2QELHadronTensorModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSuSAv2QELHadronTensorModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLTabulatedLabFrameHadronTensor_Dictionary();
   static void geniecLcLTabulatedLabFrameHadronTensor_TClassManip(TClass*);
   static void delete_geniecLcLTabulatedLabFrameHadronTensor(void *p);
   static void deleteArray_geniecLcLTabulatedLabFrameHadronTensor(void *p);
   static void destruct_geniecLcLTabulatedLabFrameHadronTensor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::TabulatedLabFrameHadronTensor*)
   {
      ::genie::TabulatedLabFrameHadronTensor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::TabulatedLabFrameHadronTensor));
      static ::ROOT::TGenericClassInfo 
         instance("genie::TabulatedLabFrameHadronTensor", "", 569,
                  typeid(::genie::TabulatedLabFrameHadronTensor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLTabulatedLabFrameHadronTensor_Dictionary, isa_proxy, 0,
                  sizeof(::genie::TabulatedLabFrameHadronTensor) );
      instance.SetDelete(&delete_geniecLcLTabulatedLabFrameHadronTensor);
      instance.SetDeleteArray(&deleteArray_geniecLcLTabulatedLabFrameHadronTensor);
      instance.SetDestructor(&destruct_geniecLcLTabulatedLabFrameHadronTensor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::TabulatedLabFrameHadronTensor*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::TabulatedLabFrameHadronTensor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::TabulatedLabFrameHadronTensor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLTabulatedLabFrameHadronTensor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::TabulatedLabFrameHadronTensor*>(nullptr))->GetClass();
      geniecLcLTabulatedLabFrameHadronTensor_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLTabulatedLabFrameHadronTensor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLHadronTensorI(void *p) {
      delete (static_cast<::genie::HadronTensorI*>(p));
   }
   static void deleteArray_geniecLcLHadronTensorI(void *p) {
      delete [] (static_cast<::genie::HadronTensorI*>(p));
   }
   static void destruct_geniecLcLHadronTensorI(void *p) {
      typedef ::genie::HadronTensorI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HadronTensorI

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLHadronTensorModelI(void *p) {
      delete (static_cast<::genie::HadronTensorModelI*>(p));
   }
   static void deleteArray_geniecLcLHadronTensorModelI(void *p) {
      delete [] (static_cast<::genie::HadronTensorModelI*>(p));
   }
   static void destruct_geniecLcLHadronTensorModelI(void *p) {
      typedef ::genie::HadronTensorModelI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HadronTensorModelI

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLLabFrameHadronTensorI(void *p) {
      delete (static_cast<::genie::LabFrameHadronTensorI*>(p));
   }
   static void deleteArray_geniecLcLLabFrameHadronTensorI(void *p) {
      delete [] (static_cast<::genie::LabFrameHadronTensorI*>(p));
   }
   static void destruct_geniecLcLLabFrameHadronTensorI(void *p) {
      typedef ::genie::LabFrameHadronTensorI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::LabFrameHadronTensorI

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLTabulatedHadronTensorModelI(void *p) {
      delete (static_cast<::genie::TabulatedHadronTensorModelI*>(p));
   }
   static void deleteArray_geniecLcLTabulatedHadronTensorModelI(void *p) {
      delete [] (static_cast<::genie::TabulatedHadronTensorModelI*>(p));
   }
   static void destruct_geniecLcLTabulatedHadronTensorModelI(void *p) {
      typedef ::genie::TabulatedHadronTensorModelI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::TabulatedHadronTensorModelI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNievesMECHadronTensorModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NievesMECHadronTensorModel : new ::genie::NievesMECHadronTensorModel;
   }
   static void *newArray_geniecLcLNievesMECHadronTensorModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NievesMECHadronTensorModel[nElements] : new ::genie::NievesMECHadronTensorModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNievesMECHadronTensorModel(void *p) {
      delete (static_cast<::genie::NievesMECHadronTensorModel*>(p));
   }
   static void deleteArray_geniecLcLNievesMECHadronTensorModel(void *p) {
      delete [] (static_cast<::genie::NievesMECHadronTensorModel*>(p));
   }
   static void destruct_geniecLcLNievesMECHadronTensorModel(void *p) {
      typedef ::genie::NievesMECHadronTensorModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NievesMECHadronTensorModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSuSAv2MECHadronTensorModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SuSAv2MECHadronTensorModel : new ::genie::SuSAv2MECHadronTensorModel;
   }
   static void *newArray_geniecLcLSuSAv2MECHadronTensorModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SuSAv2MECHadronTensorModel[nElements] : new ::genie::SuSAv2MECHadronTensorModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSuSAv2MECHadronTensorModel(void *p) {
      delete (static_cast<::genie::SuSAv2MECHadronTensorModel*>(p));
   }
   static void deleteArray_geniecLcLSuSAv2MECHadronTensorModel(void *p) {
      delete [] (static_cast<::genie::SuSAv2MECHadronTensorModel*>(p));
   }
   static void destruct_geniecLcLSuSAv2MECHadronTensorModel(void *p) {
      typedef ::genie::SuSAv2MECHadronTensorModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SuSAv2MECHadronTensorModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSuSAv2QELHadronTensorModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SuSAv2QELHadronTensorModel : new ::genie::SuSAv2QELHadronTensorModel;
   }
   static void *newArray_geniecLcLSuSAv2QELHadronTensorModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SuSAv2QELHadronTensorModel[nElements] : new ::genie::SuSAv2QELHadronTensorModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSuSAv2QELHadronTensorModel(void *p) {
      delete (static_cast<::genie::SuSAv2QELHadronTensorModel*>(p));
   }
   static void deleteArray_geniecLcLSuSAv2QELHadronTensorModel(void *p) {
      delete [] (static_cast<::genie::SuSAv2QELHadronTensorModel*>(p));
   }
   static void destruct_geniecLcLSuSAv2QELHadronTensorModel(void *p) {
      typedef ::genie::SuSAv2QELHadronTensorModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SuSAv2QELHadronTensorModel

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLTabulatedLabFrameHadronTensor(void *p) {
      delete (static_cast<::genie::TabulatedLabFrameHadronTensor*>(p));
   }
   static void deleteArray_geniecLcLTabulatedLabFrameHadronTensor(void *p) {
      delete [] (static_cast<::genie::TabulatedLabFrameHadronTensor*>(p));
   }
   static void destruct_geniecLcLTabulatedLabFrameHadronTensor(void *p) {
      typedef ::genie::TabulatedLabFrameHadronTensor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::TabulatedLabFrameHadronTensor

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhHadTens() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhHadTens) = RecordReadRules_libGPhHadTens();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhHadTens));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhHadTens_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/HadronTensors",
"GENIE",
"GENIE/Physics/HadronTensors",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/HadronTensors",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/HadronTensors/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhHadTens dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/HadronTensors/HadronTensorI.h")))  HadronTensorI;}
namespace genie{class  HadronTensorModelI;}
namespace genie{class  LabFrameHadronTensorI;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/HadronTensors/TabulatedHadronTensorModelI.h")))  TabulatedHadronTensorModelI;}
namespace genie{class  NievesMECHadronTensorModel;}
namespace genie{class  SuSAv2MECHadronTensorModel;}
namespace genie{class  SuSAv2QELHadronTensorModel;}
namespace genie{class  TabulatedLabFrameHadronTensor;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhHadTens dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::HadronTensorModelI

\brief    Creates hadron tensor objects for use in cross section calculations

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  April 26, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HADRON_TENSOR_MODEL_H_
#define _HADRON_TENSOR_MODEL_H_

// standard library includes
#include <map>
#include <string>
#include <vector>

// GENIE includes
#include "Framework/Algorithm/Algorithm.h"
#include "Physics/HadronTensors/HadronTensorI.h"

namespace genie {

class HadronTensorModelI : public Algorithm {

public:
  virtual ~HadronTensorModelI();

  /// Retrieves a pointer to a hadron tensor object appropriate for this model
  /// \param[in] tensor_pdg The PDG code for the nuclide described by the tensor
  /// \param[in] type The desired kind of hadron tensor
  /// \returns A pointer to the requested hadron tensor, or NULL if a match
  /// could not be found/created
  virtual const HadronTensorI* GetTensor(int tensor_pdg, HadronTensorType_t type) const = 0;

protected:
  HadronTensorModelI();
  HadronTensorModelI(std::string name);
  HadronTensorModelI(std::string name, std::string config);
};

} // namespace genie

#endif // _HADRON_TENSOR_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::LabFrameHadronTensorI

\brief    Abstract interface for an object that computes the elements
          (\f$W^{xx}\f$, \f$W^{0z}\f$, etc.) and structure functions
          (\f$W_1\f$, \f$W_2\f$, etc.) of
          the hadron tensor \f$W^{\mu\nu}\f$ defined according to the
          conventions of the Valencia model.

\details  For (anti)neutrino projectiles, the hadron tensor \f$W^{\mu\nu}\f$
          is defined as in equations (8) and (9) of

          J. Nieves, J. E. Amaro, and M. Valverde,
          "Inclusive Quasi-Elastic Charged-Current Neutrino-Nucleus Reactions,"
          Phys. Rev. C 70, 055503 (2004)
          https://doi.org/10.1103/PhysRevC.70.055503
          https://arxiv.org/abs/nucl-th/0408005v3

          Note that the associated erratum includes an important correction
          in the formula for the differential cross section:

          J. Nieves, J. E. Amaro, and M. Valverde,
          "Erratum: Inclusive quasielastic charged-current neutrino-nucleus
           reactions [Phys. Rev. C 70, 055503 (2004)],"
          Phys. Rev. C. 72, 019902 (2005)
          http://doi.org/10.1103/PhysRevC.72.019902

          The calculation is carried out in the lab frame (i.e., the frame
          where the target nucleus has initial 4-momentum
          \f$P^\mu = (M_i, \overrightarrow{0})\f$) with the 3-momentum
          transfer \f$\overrightarrow{q}\f$ chosen to lie along the
          z axis, i.e., \f$q = (q^0, |\overrightarrow{q}|
          \overrightarrow{u}_z)\f$. With this choice of frame, the only
          nonzero elements are \f$W^{00}\f$, \f$W^{0z} = (W^{z0})^*\f$,
          \f$W^{xx} = W^{yy}\f$, \f$W^{xy} = (W^{yx})^*\f$, and \f$W^{zz}\f$.

          For an electron projectile, the hadron tensor is defined as in
          equation (83) of

          A. Gil, J. Nieves, and E. Oset,
          "Many-body approach to the inclusive \f$(e,e^\prime)\f$ reaction
          from the quasielastic to the \f$\Delta\f$ excitation region,"
          Nuclear Physics A 627, 543-598 (1997)
          http://doi.org/10.1016/S0375-9474(97)00513-7

          It is evaluated in the same reference frame as the neutrino case.

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  August 23, 2018

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef VALENCIA_HADRON_TENSORI_H
#define VALENCIA_HADRON_TENSORI_H

// standard library includes
#include <complex>

// GENIE includes
#include "Framework/Interaction/Interaction.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Physics/HadronTensors/HadronTensorI.h"

namespace genie {

class LabFrameHadronTensorI : public HadronTensorI {

public:

  inline virtual ~LabFrameHadronTensorI() {}

  /// \name Tensor elements
  /// \brief Functions that return the elements of the tensor. Since it is
  /// Hermitian, only ten elements are independent. Although a return type of
  /// std::complex<double> is used for all elements, note that hermiticity
  /// implies that the diagonal elements must be real.
  /// \param[in] q0 The energy transfer \f$q^0\f$ in the lab frame (GeV)
  /// \param[in] q_mag The magnitude of the 3-momentum transfer
  /// \f$\left|\overrightarrow{q}\right|\f$ in the lab frame (GeV)
  /// \retval std::complex<double> The value of the hadronic tensor element
  /// @{

  /// The tensor element \f$W^{0x}\f$
  inline virtual std::complex<double> tx(double /*q0*/, double /*q_mag*/) const
    { return std::complex<double>(0., 0.); }

  /// The tensor element \f$W^{0y}\f$
  inline virtual std::complex<double> ty(double /*q0*/, double /*q_mag*/) const
    { return std::complex<double>(0., 0.); }

  /// The tensor element \f$W^{x0} = (W^{0x})^*\f$
  inline virtual std::complex<double> xt(double q0, double q_mag) const
    { return std::conj( this->tx(q0, q_mag) ); }

  /// The tensor element \f$W^{xz}\f$
  inline virtual std::complex<double> xz(double /*q0*/, double /*q_mag*/) const
    { return std::complex<double>(0., 0.); }

  /// The tensor element \f$W^{y0} = (W^{0y})^*\f$
  inline virtual std::complex<double> yt(double q0, double q_mag) const
    { return std::conj( this->ty(q0, q_mag) ); }

  /// The tensor element \f$W^{yx} = (W^{xy})^*\f$
  inline virtual std::complex<double> yx(double q0, double q_mag) const
    { return std::conj( this->xy(q0, q_mag) ); }

  /// The tensor element \f$W^{yy}\f$
  inline virtual std::complex<double> yy(double q0, double q_mag) const
    { return this->xx(q0, q_mag); }

  /// The tensor element \f$W^{yz}\f$
  inline virtual std::complex<double> yz(double /*q0*/, double /*q_mag*/) const
    { return std::complex<double>(0., 0.); }

  /// The tensor element \f$W^{z0} = (W^{0z})^*\f$
  inline virtual std::complex<double> zt(double q0, double q_mag) const
    { return std::conj( this->tz(q0, q_mag) ); }

  /// The tensor element \f$W^{zx} = (W^{xz})^*\f$
  inline virtual std::complex<double> zx(double q0, double q_mag) const
    { return std::conj( this->xz(q0, q_mag) ); }

  /// The tensor element \f$W^{zy} = (W^{yz})^*\f$
  inline virtual std::complex<double> zy(double q0, double q_mag) const
    { return std::conj( this->yz(q0, q_mag) ); }

  /// @}

  /// \name Structure functions
  /// \param[in] q0 The energy transfer \f$q^0\f$ in the lab frame (GeV)
  /// \param[in] q_mag The magnitude of the 3-momentum transfer
  /// \f$\left|\overrightarrow{q}\right|\f$ in the lab frame (GeV)
  /// \param[in] Mi The mass of the target nucleus \f$M_i\f$ (GeV)
  /// @{

  /// The structure function \f$W_1 = \frac{ W^{xx} }{ 2M_i }\f$
  virtual double W1(double q0, double q_mag, double Mi) const = 0;

  /// The structure function \f$W_2 = \frac{ 1 }{ 2M_i }
  /// \left( W^{00} + W^{xx} + \frac{ (q^0)^2 }
  /// { \left|\overrightarrow{q}\right|^2 } ( W^{zz} - W^{xx} )
  /// - 2\frac{ q^0 }{ \left|\overrightarrow{q}\right| }\Re W^{0z}
  /// \right) \f$
  virtual double W2(double q0, double q_mag, double Mi) const = 0;

  /// The structure function \f$ W_3 = -i \frac{ W^{xy} }
  /// { \left|\overrightarrow{q}\right| } \f$
  virtual double W3(double q0, double q_mag, double Mi) const = 0;

  /// The structure function \f$ W_4 = \frac{ M_i }
  /// { 2 \left|\overrightarrow{q}\right|^2 } ( W^{zz} - W^{xx} ) \f$
  virtual double W4(double q0, double q_mag, double Mi) const = 0;

  /// The structure function \f$ W_5 = \frac{ 1 }
  /// { \left|\overrightarrow{q}\right| }
  /// \left( \Re W^{0z} - \frac{ q^0 }{ \left|\overrightarrow{q}\right| }
  /// ( W^{zz} - W^{xx} ) \right) \f$
  virtual double W5(double q0, double q_mag, double Mi) const = 0;

  /// The structure function \f$ W_6 = \frac{ \Im W^{0z} }
  /// { \left|\overrightarrow{q}\right| } \f$
  virtual double W6(double q0, double q_mag, double Mi) const = 0;
  /// @}

  virtual double contraction(const Interaction* interaction,
    double Q_value) const /*override*/;

  /// \copybrief contraction(const Interaction*)
  /// \param[in] probe_pdg The PDG code for the incident projectile
  /// \param[in] E_probe The lab frame energy of the incident projectile (GeV)
  /// \param[in] m_probe The mass of the incident projectile (GeV)
  /// \param[in] Tl The lab frame kinetic energy of the final state lepton (GeV)
  /// \param[in] cos_l The angle between the direction of the incident
  /// neutrino and the final state lepton (radians)
  /// \param[in] ml The mass of the final state lepton (GeV)
  /// \param[in] Q_value The Q-value that should be used to correct
  /// the energy transfer \f$q_0\f$ (GeV)
  /// \returns The tensor contraction \f$L_{\mu\nu}W^{\mu\nu}\f$ (GeV)
  virtual double contraction(int probe_pdg, double E_probe, double m_probe,
    double Tl, double cos_l, double ml, double Q_value) const;

  /// Computes the differential cross section \f$\frac{ d^2\sigma } { dT_\ell
  /// d\cos(\theta^\prime) }\f$ for the reaction represented by this hadron
  /// tensor
  /// \param[in] interaction An Interaction object storing information about
  /// the initial and final states
  /// \param[in] Q_value The Q-value that should be used to correct
  /// the energy transfer \f$q_0\f$ (GeV)
  /// \returns The differential cross section (GeV<sup>-3</sup>)
  virtual double dSigma_dT_dCosTheta(const Interaction* interaction,
    double Q_value) const = 0;

  /// \copybrief dSigma_dT_dCosTheta(const Interaction*, double)
  /// \param[in] probe_pdg The PDG code for the incident projectile
  /// \param[in] E_probe The lab frame energy of the incident projectile (GeV)
  /// \param[in] m_probe The mass of the incident projectile (GeV)
  /// \param[in] Tl The lab frame kinetic energy of the final state lepton (GeV)
  /// \param[in] cos_l The angle between the direction of the incident
  /// neutrino and the final state lepton (radians)
  /// \param[in] ml The mass of the final state lepton (GeV)
  /// \param[in] Q_value The Q-value that should be used to correct
  /// the energy transfer \f$q_0\f$ (GeV)
  /// \returns The differential cross section (GeV<sup>-3</sup>)
  virtual double dSigma_dT_dCosTheta(int probe_pdg, double E_probe,
    double m_probe, double Tl, double cos_l, double ml, double Q_value)
    const /*override*/ = 0;


  //As above but using the rosenbluth formalism: should give the same result!
  virtual double dSigma_dT_dCosTheta_rosenbluth(const Interaction* interaction,
    double Q_value) const = 0;
  virtual double dSigma_dT_dCosTheta_rosenbluth(int probe_pdg, double E_probe,
    double m_probe, double Tl, double cos_l, double ml, double Q_value)
    const /*override*/ = 0;

protected:

  inline LabFrameHadronTensorI(int pdg = 0) : HadronTensorI(pdg) {}

  inline LabFrameHadronTensorI(int Z, int A) : HadronTensorI(Z, A) {}

}; // class LabFrameHadronTensorI

} // genie namespace
#endif
//____________________________________________________________________________
/*!

\class    genie::NievesMECHadronTensorModel

\brief    Creates hadron tensor objects for calculations of MEC
          cross sections using the Valencia model

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  April 26, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NIEVES_MEC_HADRON_TENSOR_MODEL_H_
#define _NIEVES_MEC_HADRON_TENSOR_MODEL_H_

// GENIE includes
#include "Physics/HadronTensors/TabulatedHadronTensorModelI.h"

namespace genie {

class NievesMECHadronTensorModel : public TabulatedHadronTensorModelI {

public:

  NievesMECHadronTensorModel();
  NievesMECHadronTensorModel(std::string config);

  virtual ~NievesMECHadronTensorModel();

protected:

  // Implementation of TabulatedHadronTensorModelI interface
  virtual HadronTensorI* ParseTensorFile( const std::string& full_file_name ) const;

};

} // namespace genie

#endif // _NIEVES_MEC_HADRON_TENSOR_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::SuSAv2MECHadronTensorModel

\brief    Creates hadron tensor objects for calculations of MEC
          cross sections using the SuSAv2 approach

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  April 26, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SUSAV2_MEC_HADRON_TENSOR_MODEL_H_
#define _SUSAV2_MEC_HADRON_TENSOR_MODEL_H_

// GENIE includes
#include "Physics/HadronTensors/TabulatedHadronTensorModelI.h"

namespace genie {

class SuSAv2MECHadronTensorModel : public TabulatedHadronTensorModelI {

public:

  SuSAv2MECHadronTensorModel();
  SuSAv2MECHadronTensorModel(std::string config);

  virtual ~SuSAv2MECHadronTensorModel();

protected:

  // Implementation of TabulatedHadronTensorModelI interface
  virtual HadronTensorI* ParseTensorFile( const std::string& full_file_name ) const;

};

} // namespace genie

#endif // _SUSAV2_MEC_HADRON_TENSOR_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::SuSAv2QELHadronTensorModel

\brief    Creates hadron tensor objects for calculations of quasielastic
          cross sections using the SuSAv2 approach

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  April 26, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SUSAV2_QEL_HADRON_TENSOR_MODEL_H_
#define _SUSAV2_QEL_HADRON_TENSOR_MODEL_H_

// GENIE includes
#include "Physics/HadronTensors/TabulatedHadronTensorModelI.h"

namespace genie {

class SuSAv2QELHadronTensorModel : public TabulatedHadronTensorModelI {

public:

  SuSAv2QELHadronTensorModel();
  SuSAv2QELHadronTensorModel(std::string config);

  virtual ~SuSAv2QELHadronTensorModel();

protected:

  // Implementation of TabulatedHadronTensorModelI interface
  virtual HadronTensorI* ParseTensorFile( const std::string& full_file_name ) const;

};

} // namespace genie

#endif // _SUSAV2_QEL_HADRON_TENSOR_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::TabulatedHadronTensorModelI

\brief    Creates hadron tensor objects for cross section calculations
          using precomputed data tables

\author   Steven Gardiner <gardiner \at fnal.gov>
          Liang Liu <liangliu \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  April 26, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE

*/
//____________________________________________________________________________

#ifndef _TABULATED_HADRON_TENSOR_MODEL_H_
#define _TABULATED_HADRON_TENSOR_MODEL_H_

// standard library includes
#include <map>
#include <string>
#include <vector>

// GENIE includes
#include "Framework/Algorithm/Algorithm.h"
#include "Physics/HadronTensors/HadronTensorI.h"
#include "Physics/HadronTensors/HadronTensorModelI.h"

namespace genie {

class TabulatedHadronTensorModelI : public HadronTensorModelI {

public:
  virtual ~TabulatedHadronTensorModelI();

  // Implementation of Algorithm interface
  virtual void Configure(const Registry& config);
  virtual void Configure(std::string config);

  // Implementation of HadronTensorModelI interface
  virtual const HadronTensorI* GetTensor(int tensor_pdg, HadronTensorType_t type) const;

protected:

  TabulatedHadronTensorModelI();
  TabulatedHadronTensorModelI(std::string name);
  TabulatedHadronTensorModelI(std::string name, std::string config);

  /// Saves some basic XML config parameters to data members
  void LoadConfig();

  /// Looks up the full path when constructing hadron tensor objects that are
  /// based on a data file
  std::string FindTensorTableFile(const std::string& basename,
    bool& ok) const;

  /// Struct used to provide a unique ID for each tensor object
  struct HadronTensorID {
    HadronTensorID(int pdg = 0, HadronTensorType_t typ = kHT_Undefined)
      : target_pdg( pdg ), type( typ ) {}
    int target_pdg;
    HadronTensorType_t type;

    // Less than operator needed for sorting a map of these IDs
    bool operator<(const HadronTensorID& other) const {
      return (target_pdg < other.target_pdg)
        || (target_pdg == other.target_pdg && type < other.type);
    }
  };

  /// If true, logging messages will be issued when a requested hadron tensor
  /// file cannot be found
  bool fWarnIfMissing;

  /// Cache of hadron tensor objects that have been fully loaded into memory
  ///
  /// Keys are tensor IDs, values are pointers to hadron tensor objects
  mutable std::map< HadronTensorID, HadronTensorI* > fTensors;

  /// Paths to check when searching for hadron tensor data files
  std::vector<std::string> fDataPaths;

  /// Create a HadronTensorI object given a particular HadronTensorID
  const HadronTensorI* BuildTensor( const HadronTensorID& ht_id ) const;

  /// Loads the basename for a particular hadron tensor file from
  /// the configuration Registry
  std::string GetTensorFileBasename( const HadronTensorID& ht_id ) const;

  /// Parses the hadron tensor file (specified by its full file name,
  /// including the path) and returns a HadronTensorI* to it
  virtual HadronTensorI* ParseTensorFile( const std::string& full_file_name ) const = 0;
};

} // namespace genie

#endif // _TABULATED_HADRON_TENSOR_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::TabulatedLabFrameHadronTensor

\brief    Computes the elements and structure functions of the hadron
          tensor \f$W^{\mu\nu}\f$ (using the conventions of the Valencia model)
          using precomputed tables.
          Is a concrete implementation of the HadronTensorI interface.

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  August 23, 2018

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef TABULATED_VALENCIA_HADRON_TENSOR_H
#define TABULATED_VALENCIA_HADRON_TENSOR_H

// standard library includes
#include <vector>

// GENIE includes
#include "Framework/Numerical/BLI2DNonUnifObjectGrid.h"
#include "Physics/HadronTensors/LabFrameHadronTensorI.h"

namespace genie {

class TabulatedLabFrameHadronTensor : public LabFrameHadronTensorI {

  public:

  TabulatedLabFrameHadronTensor(const std::string& table_file_name);
  virtual ~TabulatedLabFrameHadronTensor();

  // \todo Enable override specifiers when GENIE modernizes to C++11

  virtual std::complex<double> tt(double q0, double q_mag) const /*override*/;

  virtual std::complex<double> tz(double q0, double q_mag) const /*override*/;

  virtual std::complex<double> xx(double q0, double q_mag) const /*override*/;

  virtual std::complex<double> xy(double q0, double q_mag) const /*override*/;

  virtual std::complex<double> zz(double q0, double q_mag) const /*override*/;

  virtual double W1(double q0, double q_mag, double Mi) const /*override*/;
  virtual double W2(double q0, double q_mag, double Mi) const /*override*/;
  virtual double W3(double q0, double q_mag, double Mi) const /*override*/;
  virtual double W4(double q0, double q_mag, double Mi) const /*override*/;
  virtual double W5(double q0, double q_mag, double Mi) const /*override*/;
  virtual double W6(double q0, double q_mag, double Mi) const /*override*/;

  //virtual double contraction(const Interaction* interaction) const /*override*/;

  virtual double dSigma_dT_dCosTheta(const Interaction* interaction,
    double Q_value) const /*override*/;

  virtual double dSigma_dT_dCosTheta(int probe_pdg, double E_probe,
    double m_probe, double Tl, double cos_l, double ml, double Q_value)
    const /*override*/;

  virtual double dSigma_dT_dCosTheta_rosenbluth(const Interaction* interaction,
    double Q_value) const /*override*/;

  virtual double dSigma_dT_dCosTheta_rosenbluth(int probe_pdg, double E_probe,
    double m_probe, double Tl, double cos_l, double ml, double Q_value)
    const /*override*/;

  inline virtual double q0Min() const /*override*/ { return fGrid.x_min(); }
  inline virtual double q0Max() const /*override*/ { return fGrid.x_max(); }
  inline virtual double qMagMin() const /*override*/ { return fGrid.y_min(); }
  inline virtual double qMagMax() const /*override*/ { return fGrid.y_max(); }

  protected:

  /// Helper function that allows this class to handle variations in the
  /// data file format for the 1D \f$q_0\f$ and
  /// \f$\left|\overrightarrow{q}\right|\f$ grids
  /// \param[in] num_points The number of grid points to be read from the file
  /// \param[in] flag A numerical flag describing the grid data format
  /// \param[inout] in_file A reference to the file being read
  /// \param[out] vec_to_fill The vector that will store the grid points
  void read1DGridValues(int num_points, int flag, std::ifstream& in_file,
    std::vector<double>& vec_to_fill);

  class TableEntry {

    public:

    double W00;
    double Wxx;
    double Wzz;
    double ImWxy;
    double ReW0z;

    // Scalar operations
    TableEntry operator*(double d) const
      { return apply_to_elements(d, &TableEntry::multiply); }

    TableEntry operator/(double d) const
      { return apply_to_elements(d, &TableEntry::divide); }

    // TableEntry operations
    TableEntry operator+(const TableEntry& rhs) const
      { return apply_to_elements(rhs, &TableEntry::add); }

    TableEntry operator-(const TableEntry& rhs) const
      { return apply_to_elements(rhs, &TableEntry::subtract); }

    TableEntry operator*(const TableEntry& rhs) const
      { return apply_to_elements(rhs, &TableEntry::multiply); }

    TableEntry operator/(const TableEntry& rhs) const
      { return apply_to_elements(rhs, &TableEntry::divide); }

    bool operator==(const TableEntry& rhs) const {
      bool are_equal = this->W00 == rhs.W00;
      if ( are_equal ) are_equal = this->Wxx == rhs.Wxx;
      if ( are_equal ) are_equal = this->Wzz == rhs.Wzz;
      if ( are_equal ) are_equal = this->ImWxy == rhs.ImWxy;
      if ( are_equal ) are_equal = this->ReW0z == rhs.ReW0z;
      return are_equal;
    }

    bool operator!=(const TableEntry& rhs) const {
      return !operator==(rhs);
    }

    protected:

    TableEntry apply_to_elements(double d,
      double (*my_function)(double, double) ) const
    {
      // Create a new TableEntry object by applying the function to
      // each pair of elements
      TableEntry result;
      result.W00 = (*my_function)( this->W00, d );
      result.Wxx = (*my_function)( this->Wxx, d );
      result.Wzz = (*my_function)( this->Wzz, d );
      result.ImWxy = (*my_function)( this->ImWxy, d );
      result.ReW0z = (*my_function)( this->ReW0z, d );

      return result;
    }

    TableEntry apply_to_elements(const TableEntry& rhs,
      double (*my_function)(double, double) ) const
    {
      // Create a new TableEntry object by applying the function to
      // each pair of elements
      TableEntry result;
      result.W00 = (*my_function)( this->W00, rhs.W00 );
      result.Wxx = (*my_function)( this->Wxx, rhs.Wxx );
      result.Wzz = (*my_function)( this->Wzz, rhs.Wzz );
      result.ImWxy = (*my_function)( this->ImWxy, rhs.ImWxy );
      result.ReW0z = (*my_function)( this->ReW0z, rhs.ReW0z );
      return result;
    }

    private:

    // Dummy functions defined so that they can be applied to each class member
    // by passing a function pointer to apply_to_elements()
    /// \todo Replace these with lambdas (or something similar) when GENIE
    /// updates to C++11. This technique is a bit of a hack.
    inline static double add(double x, double y) { return x + y; }
    inline static double subtract(double x, double y) { return x - y; }
    inline static double multiply(double x, double y) { return x * y; }
    inline static double divide(double x, double y) { return x / y; }
  };

  /// \name Structure function helpers
  /// \brief These helper functions allow multiple structure
  /// function values (e.g., \f$W_1\f$ and \f$W_2\f$) to be computed
  /// without having to perform bilinear interpolation every time.
  /// \details Because the differential cross section
  /// \f$\frac{ d^2\sigma_{\nu l} }
  /// { d\cos(\theta^\prime) dE^\prime_l }\f$ does not depend on the
  /// initial nucleus's mass \f$M_i\f$, the explicit factors of \f$M_i\f$
  /// have been removed from these internally-used functions.
  /// \param[in] Hadronic tensor table entry that has been pre-interpolated
  /// @{
  virtual double W1(double q0, double q_mag, const TableEntry& entry) const;

  virtual double W2(double q0, double q_mag, const TableEntry& entry) const;

  virtual double W3(double q0, double q_mag, const TableEntry& entry) const;

  virtual double W4(double q0, double q_mag, const TableEntry& entry) const;

  virtual double W5(double q0, double q_mag, const TableEntry& entry) const;

  virtual double W6(double q0, double q_mag, const TableEntry& entry) const;
  ///@}

  std::vector<double> fq0Points;
  std::vector<double> fqmagPoints;
  std::vector<TableEntry> fEntries;

  BLI2DNonUnifObjectGrid<TableEntry> fGrid;

}; // class TabulatedLabFrameHadronTensor

}  // genie namespace
#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::HadronTensorI", payloadCode, "@",
"genie::HadronTensorModelI", payloadCode, "@",
"genie::LabFrameHadronTensorI", payloadCode, "@",
"genie::NievesMECHadronTensorModel", payloadCode, "@",
"genie::SuSAv2MECHadronTensorModel", payloadCode, "@",
"genie::SuSAv2QELHadronTensorModel", payloadCode, "@",
"genie::TabulatedHadronTensorModelI", payloadCode, "@",
"genie::TabulatedLabFrameHadronTensor", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhHadTens",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhHadTens_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhHadTens_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhHadTens() {
  TriggerDictionaryInitialization_libGPhHadTens_Impl();
}
