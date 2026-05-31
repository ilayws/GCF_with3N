// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhMNucXS
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
#include "EmpiricalMECPXSec2015.h"
#include "MECScaleVsW.h"
#include "MECUtils.h"
#include "MECXSec.h"
#include "MartiniEricsonChanfrayMarteauMECPXSec2016.h"
#include "NievesSimoVacasMECPXSec2016.h"
#include "SuSAv2MECPXSec.h"

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
      namespace mec {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLmec_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::mec", 0 /*version*/, "", 179,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLmec_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLmec_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLEmpiricalMECPXSec2015_Dictionary();
   static void geniecLcLEmpiricalMECPXSec2015_TClassManip(TClass*);
   static void *new_geniecLcLEmpiricalMECPXSec2015(void *p = nullptr);
   static void *newArray_geniecLcLEmpiricalMECPXSec2015(Long_t size, void *p);
   static void delete_geniecLcLEmpiricalMECPXSec2015(void *p);
   static void deleteArray_geniecLcLEmpiricalMECPXSec2015(void *p);
   static void destruct_geniecLcLEmpiricalMECPXSec2015(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::EmpiricalMECPXSec2015*)
   {
      ::genie::EmpiricalMECPXSec2015 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::EmpiricalMECPXSec2015));
      static ::ROOT::TGenericClassInfo 
         instance("genie::EmpiricalMECPXSec2015", "", 32,
                  typeid(::genie::EmpiricalMECPXSec2015), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLEmpiricalMECPXSec2015_Dictionary, isa_proxy, 0,
                  sizeof(::genie::EmpiricalMECPXSec2015) );
      instance.SetNew(&new_geniecLcLEmpiricalMECPXSec2015);
      instance.SetNewArray(&newArray_geniecLcLEmpiricalMECPXSec2015);
      instance.SetDelete(&delete_geniecLcLEmpiricalMECPXSec2015);
      instance.SetDeleteArray(&deleteArray_geniecLcLEmpiricalMECPXSec2015);
      instance.SetDestructor(&destruct_geniecLcLEmpiricalMECPXSec2015);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::EmpiricalMECPXSec2015*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::EmpiricalMECPXSec2015*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::EmpiricalMECPXSec2015*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLEmpiricalMECPXSec2015_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::EmpiricalMECPXSec2015*>(nullptr))->GetClass();
      geniecLcLEmpiricalMECPXSec2015_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLEmpiricalMECPXSec2015_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLMECScaleVsW_Dictionary();
   static void geniecLcLMECScaleVsW_TClassManip(TClass*);
   static void *new_geniecLcLMECScaleVsW(void *p = nullptr);
   static void *newArray_geniecLcLMECScaleVsW(Long_t size, void *p);
   static void delete_geniecLcLMECScaleVsW(void *p);
   static void deleteArray_geniecLcLMECScaleVsW(void *p);
   static void destruct_geniecLcLMECScaleVsW(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::MECScaleVsW*)
   {
      ::genie::MECScaleVsW *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::MECScaleVsW));
      static ::ROOT::TGenericClassInfo 
         instance("genie::MECScaleVsW", "", 107,
                  typeid(::genie::MECScaleVsW), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMECScaleVsW_Dictionary, isa_proxy, 0,
                  sizeof(::genie::MECScaleVsW) );
      instance.SetNew(&new_geniecLcLMECScaleVsW);
      instance.SetNewArray(&newArray_geniecLcLMECScaleVsW);
      instance.SetDelete(&delete_geniecLcLMECScaleVsW);
      instance.SetDeleteArray(&deleteArray_geniecLcLMECScaleVsW);
      instance.SetDestructor(&destruct_geniecLcLMECScaleVsW);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::MECScaleVsW*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::MECScaleVsW*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::MECScaleVsW*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMECScaleVsW_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::MECScaleVsW*>(nullptr))->GetClass();
      geniecLcLMECScaleVsW_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMECScaleVsW_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLMECXSec_Dictionary();
   static void geniecLcLMECXSec_TClassManip(TClass*);
   static void *new_geniecLcLMECXSec(void *p = nullptr);
   static void *newArray_geniecLcLMECXSec(Long_t size, void *p);
   static void delete_geniecLcLMECXSec(void *p);
   static void deleteArray_geniecLcLMECXSec(void *p);
   static void destruct_geniecLcLMECXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::MECXSec*)
   {
      ::genie::MECXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::MECXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::MECXSec", "", 302,
                  typeid(::genie::MECXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMECXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::MECXSec) );
      instance.SetNew(&new_geniecLcLMECXSec);
      instance.SetNewArray(&newArray_geniecLcLMECXSec);
      instance.SetDelete(&delete_geniecLcLMECXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLMECXSec);
      instance.SetDestructor(&destruct_geniecLcLMECXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::MECXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::MECXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::MECXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMECXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::MECXSec*>(nullptr))->GetClass();
      geniecLcLMECXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMECXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNievesSimoVacasMECPXSec2016_Dictionary();
   static void geniecLcLNievesSimoVacasMECPXSec2016_TClassManip(TClass*);
   static void *new_geniecLcLNievesSimoVacasMECPXSec2016(void *p = nullptr);
   static void *newArray_geniecLcLNievesSimoVacasMECPXSec2016(Long_t size, void *p);
   static void delete_geniecLcLNievesSimoVacasMECPXSec2016(void *p);
   static void deleteArray_geniecLcLNievesSimoVacasMECPXSec2016(void *p);
   static void destruct_geniecLcLNievesSimoVacasMECPXSec2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NievesSimoVacasMECPXSec2016*)
   {
      ::genie::NievesSimoVacasMECPXSec2016 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NievesSimoVacasMECPXSec2016));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NievesSimoVacasMECPXSec2016", "", 437,
                  typeid(::genie::NievesSimoVacasMECPXSec2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNievesSimoVacasMECPXSec2016_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NievesSimoVacasMECPXSec2016) );
      instance.SetNew(&new_geniecLcLNievesSimoVacasMECPXSec2016);
      instance.SetNewArray(&newArray_geniecLcLNievesSimoVacasMECPXSec2016);
      instance.SetDelete(&delete_geniecLcLNievesSimoVacasMECPXSec2016);
      instance.SetDeleteArray(&deleteArray_geniecLcLNievesSimoVacasMECPXSec2016);
      instance.SetDestructor(&destruct_geniecLcLNievesSimoVacasMECPXSec2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NievesSimoVacasMECPXSec2016*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NievesSimoVacasMECPXSec2016*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NievesSimoVacasMECPXSec2016*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNievesSimoVacasMECPXSec2016_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NievesSimoVacasMECPXSec2016*>(nullptr))->GetClass();
      geniecLcLNievesSimoVacasMECPXSec2016_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNievesSimoVacasMECPXSec2016_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSuSAv2MECPXSec_Dictionary();
   static void geniecLcLSuSAv2MECPXSec_TClassManip(TClass*);
   static void *new_geniecLcLSuSAv2MECPXSec(void *p = nullptr);
   static void *newArray_geniecLcLSuSAv2MECPXSec(Long_t size, void *p);
   static void delete_geniecLcLSuSAv2MECPXSec(void *p);
   static void deleteArray_geniecLcLSuSAv2MECPXSec(void *p);
   static void destruct_geniecLcLSuSAv2MECPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SuSAv2MECPXSec*)
   {
      ::genie::SuSAv2MECPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SuSAv2MECPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SuSAv2MECPXSec", "", 512,
                  typeid(::genie::SuSAv2MECPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSuSAv2MECPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SuSAv2MECPXSec) );
      instance.SetNew(&new_geniecLcLSuSAv2MECPXSec);
      instance.SetNewArray(&newArray_geniecLcLSuSAv2MECPXSec);
      instance.SetDelete(&delete_geniecLcLSuSAv2MECPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLSuSAv2MECPXSec);
      instance.SetDestructor(&destruct_geniecLcLSuSAv2MECPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SuSAv2MECPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SuSAv2MECPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SuSAv2MECPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSuSAv2MECPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SuSAv2MECPXSec*>(nullptr))->GetClass();
      geniecLcLSuSAv2MECPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSuSAv2MECPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLEmpiricalMECPXSec2015(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EmpiricalMECPXSec2015 : new ::genie::EmpiricalMECPXSec2015;
   }
   static void *newArray_geniecLcLEmpiricalMECPXSec2015(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EmpiricalMECPXSec2015[nElements] : new ::genie::EmpiricalMECPXSec2015[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLEmpiricalMECPXSec2015(void *p) {
      delete (static_cast<::genie::EmpiricalMECPXSec2015*>(p));
   }
   static void deleteArray_geniecLcLEmpiricalMECPXSec2015(void *p) {
      delete [] (static_cast<::genie::EmpiricalMECPXSec2015*>(p));
   }
   static void destruct_geniecLcLEmpiricalMECPXSec2015(void *p) {
      typedef ::genie::EmpiricalMECPXSec2015 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::EmpiricalMECPXSec2015

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLMECScaleVsW(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MECScaleVsW : new ::genie::MECScaleVsW;
   }
   static void *newArray_geniecLcLMECScaleVsW(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MECScaleVsW[nElements] : new ::genie::MECScaleVsW[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLMECScaleVsW(void *p) {
      delete (static_cast<::genie::MECScaleVsW*>(p));
   }
   static void deleteArray_geniecLcLMECScaleVsW(void *p) {
      delete [] (static_cast<::genie::MECScaleVsW*>(p));
   }
   static void destruct_geniecLcLMECScaleVsW(void *p) {
      typedef ::genie::MECScaleVsW current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::MECScaleVsW

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLMECXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MECXSec : new ::genie::MECXSec;
   }
   static void *newArray_geniecLcLMECXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MECXSec[nElements] : new ::genie::MECXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLMECXSec(void *p) {
      delete (static_cast<::genie::MECXSec*>(p));
   }
   static void deleteArray_geniecLcLMECXSec(void *p) {
      delete [] (static_cast<::genie::MECXSec*>(p));
   }
   static void destruct_geniecLcLMECXSec(void *p) {
      typedef ::genie::MECXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::MECXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNievesSimoVacasMECPXSec2016(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NievesSimoVacasMECPXSec2016 : new ::genie::NievesSimoVacasMECPXSec2016;
   }
   static void *newArray_geniecLcLNievesSimoVacasMECPXSec2016(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NievesSimoVacasMECPXSec2016[nElements] : new ::genie::NievesSimoVacasMECPXSec2016[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNievesSimoVacasMECPXSec2016(void *p) {
      delete (static_cast<::genie::NievesSimoVacasMECPXSec2016*>(p));
   }
   static void deleteArray_geniecLcLNievesSimoVacasMECPXSec2016(void *p) {
      delete [] (static_cast<::genie::NievesSimoVacasMECPXSec2016*>(p));
   }
   static void destruct_geniecLcLNievesSimoVacasMECPXSec2016(void *p) {
      typedef ::genie::NievesSimoVacasMECPXSec2016 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NievesSimoVacasMECPXSec2016

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSuSAv2MECPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SuSAv2MECPXSec : new ::genie::SuSAv2MECPXSec;
   }
   static void *newArray_geniecLcLSuSAv2MECPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SuSAv2MECPXSec[nElements] : new ::genie::SuSAv2MECPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSuSAv2MECPXSec(void *p) {
      delete (static_cast<::genie::SuSAv2MECPXSec*>(p));
   }
   static void deleteArray_geniecLcLSuSAv2MECPXSec(void *p) {
      delete [] (static_cast<::genie::SuSAv2MECPXSec*>(p));
   }
   static void destruct_geniecLcLSuSAv2MECPXSec(void *p) {
      typedef ::genie::SuSAv2MECPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SuSAv2MECPXSec

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhMNucXS() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhMNucXS) = RecordReadRules_libGPhMNucXS();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhMNucXS));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhMNucXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Multinucleon/XSection",
"GENIE",
"GENIE/Physics/Multinucleon/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Multinucleon/XSection",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Multinucleon/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhMNucXS dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  EmpiricalMECPXSec2015;}
namespace genie{class  MECScaleVsW;}
namespace genie{class  MECXSec;}
namespace genie{class  NievesSimoVacasMECPXSec2016;}
namespace genie{class  SuSAv2MECPXSec;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhMNucXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::EmpiricalMECPXSec2015

\brief    Computes the MEC differential cross section.
          Is a concrete implementation of the XSecAlgorithmI interface. \n

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

          Steve Dytman <dytman+ \at pitt.edu>
          Pittsburgh University

\created  May 05, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _MEC_PXSEC_H_
#define _MEC_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class EmpiricalMECPXSec2015 : public XSecAlgorithmI {

public:
  EmpiricalMECPXSec2015();
  EmpiricalMECPXSec2015(string config);
  virtual ~EmpiricalMECPXSec2015();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  void LoadConfig (void);

  double fMq2d;       ///< toy model param: `mass' in dipole (Q2 - dependence) form factor (GeV)
  double fMass;       ///< toy model param: peak  of W distribution (GeV)
  double fWidth;      ///< toy model param: width of W distribution (GeV)
  double fMECAPower;      ///< power of A relative to carbon

  double fFracPN_NC;     ///< toy model param: fraction of nucleon pairs that are pn, not nn or pp
  double fFracPN_CC;     ///< toy model param: fraction of nucleon pairs that are pn, not nn or pp
  double fFracPN_EM;     ///< toy model param: fraction of nucleon pairs that are pn, not nn or pp

  double fFracCCQE;   ///< empirical model param: MEC cross section is taken to be this fraction of CCQE cross section
  double fFracNCQE;   ///< empirical model param: MEC cross section is taken to be this fraction of NCQE cross section
  double fFracEMQE;   ///< empirical model param: MEC cross section is taken to be this fraction of Rosenbluth xs

  const XSecAlgorithmI * fXSecAlgCCQE; ///< cross section algorithm for CCQE
  const XSecAlgorithmI * fXSecAlgNCQE; ///< cross section algorithm for NCQE
  const XSecAlgorithmI * fXSecAlgEMQE; ///< cross section algorithm for EMQE

  /// Integrator used for reweighting
  const XSecIntegratorI* fXSecIntegrator;

  /// Whether to integrate in the usual way (false) or in "reweighting mode"
  /// (true)
  bool fIntegrateForReweighting;
};

}       // genie namespace
#endif  // _MEC_PARTIAL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::MECScaleVsW

\brief    This class is responsible to compute the MEC scaling factor given 
          Q0, Q3. The scaling is done as a function of the hadronic invariant
	  mass.

\author   Code contributed by J.Tena Vidal and M.Roda

\created  June, 2020

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _MEC_SCALE_VS_W_H_
#define _MEC_SCALE_VS_W_H_

#include "Physics/Common/XSecScaleI.h"
#include <TSpline.h>

namespace genie {
  
  class MECScaleVsW: public XSecScaleI {

    using weight_type_map = std::map<double,double> ;
    using weight_type_pair = std::pair<double,double> ;

  public:
    MECScaleVsW();
    MECScaleVsW(string config);
    virtual ~MECScaleVsW();
    
    // This function returns the scaling value at a given Q0 Q3:
    virtual double GetScaling( const Interaction & ) const override ; 
    
  protected:
    
    // Load algorithm configuration
    virtual void LoadConfig (void) override ;

    // This function returns the scaling value at a given Q0 Q3:
    virtual double GetScaling( const double Q0, const double Q3 ) const ; 

    // This function adds the limits of the phase space if they are not set by the user
    weight_type_map GetMapWithLimits( const double Q0, const double Q3 ) const ;

    // Thist function calculates the scale factor value at W as a linear interpolation
    // between two W values (Wmin,Wmax) with weights (scale_min,scale_max).
    virtual double ScaleFunction( const double W, const weight_type_pair min, const weight_type_pair max ) const ;

 private: 
    double fDefaultWeight ; 
    weight_type_map fWeightsMap ;
    // Adding Spline to handle the limits of W1:
    TSpline3 fW1_Q0Q3_limits ; 

    double fLowLimitWeight ; 
    double fUpperLimitWeight ; 

  };
  
}       // genie namespace
#endif  // _MEC_SCALE_VS_W_H_
//____________________________________________________________________________
/*!

\namespace genie::utils::mec

\brief     MEC utilities

\author

\created

\cpright   Copyright (c) 2003-2025, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _MEC_UTILS_H_
#define _MEC_UTILS_H_

#include "Physics/HadronTensors/HadronTensorI.h"
#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>
#include "Framework/Numerical/MathUtils.h"

namespace genie {

class Interaction;
class XSecAlgorithmI;

namespace utils {
namespace mec   {

  // ---------------------- this should be removed (is replaced by code below)
  //
  // Kinematic calculation: Give q0q3 (and Enu and lepton mass) and
  // return muon KE and costheta, and jacobian area.
  // Contributed by R.Gran.
  double GetTmuCostFromq0q3(
    double dq0, double dq3, double Enu, double lmass, double &tmu, double &cost, double &area);
  // -----------------------


  //----------------------- once in trunk, this could be copied in KineUtils
  // Kinematic calculations:
  // Get lepton KE and costheta from q0, q3 (and Enu and lepton mass)
  bool GetTlCostlFromq0q3(
    double q0, double q3, double Enu, double ml, double & Tl, double & costl);
  // Get q0, q3 from lepton KE and costheta (and Enu and lepton mass)
  bool Getq0q3FromTlCostl(
    double Tl, double costl, double Enu, double ml, double & q0, double & q3);
  //----------------------- once in trunk, this could be embedded in KineUtils::Jacobian()
  // Jacobian for tranformation of d2sigma / dT dcostl to d2sigma / dq0 dq3
  double J(double q0, double q3, double Enu, double ml);
  //----------------------


  // Utility that encodes the Qvalues for the kinematic calculation.
  // this is used in the code that contracts the hadron tensor with the lepton tensor
  // Contributed by R.Gran.
  double Qvalue(int targetpdg, int nupdg);


  //Version of the tesor contraction in GENIE 2.12.X (modified to use new hadron tensor pool) for debugging purposes
  //double OldTensorContraction(int nupdg, int targetpdg, double Enu, double Ml, double Tl, double costhl, int tensorpdg, genie::HadronTensorType_t tensor_type, char* tensor_model);
  double OldTensorContraction(int nupdg, int targetpdg, double Enu, double Ml, double Tl, double costhl, int tensorpdg, genie::HadronTensorType_t tensor_type, char* tensor_model );

  // Performs a brute-force scan of the kPSTlctl phase space to compute the
  // maximum value of the differential cross section within a specified
  // tolerance. An optional safety factor can be applied to the final result.
  // This function is used by MECGenerator::SelectSuSALeptonKinematics() during
  // rejection sampling. -- S. Gardiner, 16 March 2020
  double GetMaxXSecTlctl( const XSecAlgorithmI& xsec_model,
    const Interaction& inter, const double tolerance = 0.01,
    const double safety_factor = 1.2, const int max_n_layers = 100 );

  // Hard-coded bounds for the scan over phase space in GetMaxXSecTlctl.
  // These are based on the upper limits in the current set of SuSAv2 hadron
  // tensor tables. In the future, it would be good to refactor GetMaxXSecTlctl
  // to retrieve these bounds from the relevant hadron tensor model itself.
  // - S. Gardiner

  // Maximum tabulated energy transfer (GeV)
  const double Q0LimitMaxXSec = 2.;

  // Maximum tabulated momentum transfer (GeV)
  const double QMagLimitMaxXSec = 2.;

  namespace gsl {
    //_____________________________________________________________________________________
    //
    // GSL wrappers
    //
    //_____________________________________________________________________________________
    
    class d2Xsec_dTCosth: public ROOT::Math::IBaseFunctionMultiDim
    {
    public:
      d2Xsec_dTCosth(const XSecAlgorithmI * m, const Interaction & i, const double Enu, 
		     const double LepMass, const double Factor = 1. );
      ~d2Xsec_dTCosth();
      // ROOT::Math::IBaseFunctionMultiDim interface
      unsigned int                        NDim   (void)               const;
      double                              DoEval (const double * xin) const;
      ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
      
    private:
      const XSecAlgorithmI * fModel;
      const Interaction fInteraction;
      const double fEnu ; 
      const double fLepMass ;
      const double fFactor;
    };
    
  }
} // mec   namespace
} // utils namespace
} // genie namespace

#endif // _MEC_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::MECXSec

\brief    A numerical cross-section integrator (GENIE/GSL interface) for the
          J. Nieves, I. Ruiz Simo, M.J. Vicente Vacas and Martini MEC models.
          Is a concrete implementation of the XSecIntegratorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 22, 2016

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _MEC_XSEC_H_
#define _MEC_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

#include <Math/Integrator.h>
#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>

namespace genie {

class XSecAlgorithmI;
class Interaction;

class MECXSec : public XSecIntegratorI {
public:
  MECXSec();
  MECXSec(string config);
  virtual ~MECXSec();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

protected:
  bool fSplitIntegral;

private:
  void LoadConfig (void);
  double fQ3Max;
};

} // genie namespace

#endif  // _MEC_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::MartiniEricsonChanfrayMarteauMECPXSec2016

\brief    Computes the Martini, Ericson, Chanfray and Marteau MEC model
          differential cross section.
          Uses precomputed hadon tensor tables.
          Is a concrete implementation of the XSecAlgorithmI interface.

\author   Sara Bolognesi <sara.bolognesi@cea.fr>
          CEA Saclay

          Marco Martini
          CEA Saclay

\ref      M. Martini, M. Ericson, G. Chanfray, J. Marteau.
          Neutrino and antineutrino quasielastic interactions with nuclei
          Phys.Rev. C81 (2010) 045502

\created  Mar 30, 2016

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _MARTINI_ERICSON_CHANFRAY_MARTEAU_MEC_PXSEC_2016_H_
#define _MARTINI_ERICSON_CHANFRAY_MARTEAU_MEC_PXSEC_2016_H_

#include <vector>

#include "Framework/EventGen/XSecAlgorithmI.h"

using std::vector;

namespace genie {

class XSecIntegratorI;

class MartiniEricsonChanfrayMarteauMECPXSec2016 : public XSecAlgorithmI {

public:
  MartiniEricsonChanfrayMarteauMECPXSec2016();
  MartiniEricsonChanfrayMarteauMECPXSec2016(string config);
  virtual ~MartiniEricsonChanfrayMarteauMECPXSec2016();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

private:

  // Load algorithm configuration
  void LoadConfig (void);

  const XSecIntegratorI *  fXSecIntegrator; // Numerical integrator (GSL)

};

}       // genie namespace
#endif  // _MARTINI_ERICSON_CHANFRAY_MARTEAU_MEC_PXSEC_2016_H_
//____________________________________________________________________________
/*!

\class    genie::NievesSimoVacasMECPXSec2016

\brief    Computes the Valencia MEC model differential cross section.
          Uses precomputed hadon tensor tables.
          Is a concrete implementation of the XSecAlgorithmI interface.

\author   Code contributed by J. Schwehr, D. Cherdack, R. Gran and described
          in arXiv:1601.02038 and some of the refereces there-in,
          in particular PRD 88 (2013) 113007

          Substantial code refactorizations by the core GENIE group.

          Refactored in 2018 by S. Gardiner to use the new hadron tensor
          framework

\ref      J. Nieves, I. Ruiz Simo, M.J. Vicente Vacas,
          Inclusive quasi-elastic neutrino reactions, PRC 83 (2011) 045501

\created  Mar 22, 2016

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _NIEVES_SIMO_VACAS_MEC_PXSEC_2016_H_
#define _NIEVES_SIMO_VACAS_MEC_PXSEC_2016_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/HadronTensors/HadronTensorModelI.h"
#include "Physics/Common/XSecScaleI.h"
#include "Physics/Common/QvalueShifter.h"

namespace genie {

class XSecIntegratorI;

class NievesSimoVacasMECPXSec2016 : public XSecAlgorithmI {

public:
  NievesSimoVacasMECPXSec2016();
  NievesSimoVacasMECPXSec2016(string config);
  virtual ~NievesSimoVacasMECPXSec2016();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

private:

  // Load algorithm configuration
  void LoadConfig (void);

  double fXSecCCScale; ///< external xsec scaling factor
  double fXSecNCScale; ///< external xsec scaling factor

  const HadronTensorModelI* fHadronTensorModel;

  const XSecIntegratorI *  fXSecIntegrator; // Numerical integrator (GSL)

  const XSecScaleI * fMECScaleAlg ; // Optional algorithm to scale the xsec as a function of W
  const QvalueShifter * fQvalueShifter ; // Optional algorithm to retrieve the qvalue shift for a given target
};

}       // genie namespace
#endif  // _NIEVES_SIMO_VACAS_MEC_PXSEC_2016_H_
//____________________________________________________________________________
/*!

\class    genie::SuSAv2MECPXSec

\brief    Computes the SuSAv2-MEC model differential cross section.
          Uses precomputed hadron tensor tables.
          Is a concrete implementation of the XSecAlgorithmI interface.

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Acclerator Laboratory

          Stephen Dolan <stephen.joseph.dolan \at cern.ch>
          European Organization for Nuclear Research (CERN)

\ref      G.D. Megias et al., "Meson-exchange currents and quasielastic
          predictions for charged-current neutrino-12C scattering in the
          superscaling approach," PRD 91 (2015) 073004

\created  November 2, 2018

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SUSAV2_MEC_PXSEC_H_
#define _SUSAV2_MEC_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/HadronTensors/HadronTensorModelI.h"
#include "Physics/Common/XSecScaleI.h"
#include "Physics/Common/QvalueShifter.h"

namespace genie {

class XSecIntegratorI;

class SuSAv2MECPXSec : public XSecAlgorithmI {

public:

  SuSAv2MECPXSec();
  SuSAv2MECPXSec(string config);
  virtual ~SuSAv2MECPXSec();

  // XSecAlgorithmI interface implementation
  double XSec(const Interaction* i, KinePhaseSpace_t k) const;
  double Integral(const Interaction* i) const;
  bool   ValidProcess(const Interaction* i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

  // Method specifically for evaluating np/pp pair probabilities
  double PairRatio(const Interaction* i,
    const std::string& final_state_ratio = "pnFraction") const;

private:

  /// Load algorithm configuration
  void LoadConfig (void);

  // Calculate Qvalue Shift for susa:
  double Qvalue(const Interaction & interaction ) const ;

  /// External scaling factor for this cross section
  double fXSecCCScale;
  double fXSecNCScale;
  double fXSecEMScale;

  const genie::HadronTensorModelI* fHadronTensorModel;

  // Fermi momentum table used for scaling
  string fKFTable;

  // Binding energies:
  double fEbHe;
  double fEbLi;
  double fEbC;
  double fEbO;
  double fEbMg;
  double fEbAr;
  double fEbCa;
  double fEbFe;
  double fEbNi;
  double fEbSn;
  double fEbAu;
  double fEbPb;

  /// GSL numerical integrator
  const XSecIntegratorI*  fXSecIntegrator;

  const XSecScaleI * fMECScaleAlg ; // Optional algorithm to scale the xsec as a function of W
  const QvalueShifter * fQvalueShifter ; // Optional algorithm to retrieve the qvalue shift for a given target

};

} // genie namespace
#endif // _SUSAV2_MEC_PXSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::EmpiricalMECPXSec2015", payloadCode, "@",
"genie::MECScaleVsW", payloadCode, "@",
"genie::MECXSec", payloadCode, "@",
"genie::NievesSimoVacasMECPXSec2016", payloadCode, "@",
"genie::SuSAv2MECPXSec", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhMNucXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhMNucXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhMNucXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhMNucXS() {
  TriggerDictionaryInitialization_libGPhMNucXS_Impl();
}
