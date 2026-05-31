// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhXSIg
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
#include "GSLXSecFunc.h"
#include "XSecIntegratorI.h"

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
            instance("genie", 0 /*version*/, "Framework/Utils/Range1.h", 26,
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
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutils_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils", 0 /*version*/, "", 35,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutils_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutils_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace genie {
   namespace utils {
      namespace gsl {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLgsl_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::gsl", 0 /*version*/, "", 36,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLgsl_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLgsl_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::dXSec_dQ2_E*)
   {
      ::genie::utils::gsl::dXSec_dQ2_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::dXSec_dQ2_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::dXSec_dQ2_E", "", 43,
                  typeid(::genie::utils::gsl::dXSec_dQ2_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::dXSec_dQ2_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::dXSec_dQ2_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::dXSec_dQ2_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::dXSec_dQ2_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::dXSec_dQ2_E*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dy_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLdXSec_dy_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::dXSec_dy_E*)
   {
      ::genie::utils::gsl::dXSec_dy_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::dXSec_dy_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::dXSec_dy_E", "", 65,
                  typeid(::genie::utils::gsl::dXSec_dy_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLdXSec_dy_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::dXSec_dy_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLdXSec_dy_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dy_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLdXSec_dy_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::dXSec_dy_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::dXSec_dy_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::dXSec_dy_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dy_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::dXSec_dy_E*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLdXSec_dy_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLdXSec_dy_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dxdy_E*)
   {
      ::genie::utils::gsl::d2XSec_dxdy_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dxdy_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dxdy_E", "", 111,
                  typeid(::genie::utils::gsl::d2XSec_dxdy_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dxdy_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dxdy_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d2XSec_dxdy_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dxdy_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dxdy_E*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dWdQ2_E*)
   {
      ::genie::utils::gsl::d2XSec_dWdQ2_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dWdQ2_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dWdQ2_E", "", 217,
                  typeid(::genie::utils::gsl::d2XSec_dWdQ2_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dWdQ2_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dWdQ2_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d2XSec_dWdQ2_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dWdQ2_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dWdQ2_E*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dxdy_Ex*)
   {
      ::genie::utils::gsl::d2XSec_dxdy_Ex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dxdy_Ex));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dxdy_Ex", "", 238,
                  typeid(::genie::utils::gsl::d2XSec_dxdy_Ex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dxdy_Ex) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dxdy_Ex*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d2XSec_dxdy_Ex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dxdy_Ex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dxdy_Ex*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dxdy_Ey*)
   {
      ::genie::utils::gsl::d2XSec_dxdy_Ey *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dxdy_Ey));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dxdy_Ey", "", 260,
                  typeid(::genie::utils::gsl::d2XSec_dxdy_Ey), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dxdy_Ey) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dxdy_Ey*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d2XSec_dxdy_Ey*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dxdy_Ey*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dxdy_Ey*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dWdQ2_EW*)
   {
      ::genie::utils::gsl::d2XSec_dWdQ2_EW *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dWdQ2_EW));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dWdQ2_EW", "", 282,
                  typeid(::genie::utils::gsl::d2XSec_dWdQ2_EW), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dWdQ2_EW) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dWdQ2_EW*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d2XSec_dWdQ2_EW*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dWdQ2_EW*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dWdQ2_EW*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dWdQ2_EQ2*)
   {
      ::genie::utils::gsl::d2XSec_dWdQ2_EQ2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dWdQ2_EQ2));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dWdQ2_EQ2", "", 304,
                  typeid(::genie::utils::gsl::d2XSec_dWdQ2_EQ2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dWdQ2_EQ2) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dWdQ2_EQ2*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d2XSec_dWdQ2_EQ2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dWdQ2_EQ2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSec_dWdQ2_EQ2*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd5XSecAR_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd5XSecAR_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d5XSecAR*)
   {
      ::genie::utils::gsl::d5XSecAR *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d5XSecAR));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d5XSecAR", "", 327,
                  typeid(::genie::utils::gsl::d5XSecAR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd5XSecAR_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d5XSecAR) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd5XSecAR);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd5XSecAR);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd5XSecAR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d5XSecAR*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d5XSecAR*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d5XSecAR*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd5XSecAR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d5XSecAR*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd5XSecAR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd5XSecAR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*)
   {
      ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi", "", 350,
                  typeid(::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*)
   {
      ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d4Xsec_dEldThetaldOmegapi", "", 372,
                  typeid(::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d3Xsec_dOmegaldThetapi*)
   {
      ::genie::utils::gsl::d3Xsec_dOmegaldThetapi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d3Xsec_dOmegaldThetapi));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d3Xsec_dOmegaldThetapi", "", 397,
                  typeid(::genie::utils::gsl::d3Xsec_dOmegaldThetapi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d3Xsec_dOmegaldThetapi) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d3Xsec_dOmegaldThetapi*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d3Xsec_dOmegaldThetapi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d3Xsec_dOmegaldThetapi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d3Xsec_dOmegaldThetapi*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_Dictionary();
   static void geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_TClassManip(TClass*);
   static void *new_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p = nullptr);
   static void *newArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(Long_t size, void *p);
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::dXSec_dElep_AR*)
   {
      ::genie::utils::gsl::dXSec_dElep_AR *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::dXSec_dElep_AR));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::dXSec_dElep_AR", "", 424,
                  typeid(::genie::utils::gsl::dXSec_dElep_AR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::dXSec_dElep_AR) );
      instance.SetNew(&new_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      instance.SetNewArray(&newArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::dXSec_dElep_AR*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::dXSec_dElep_AR*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::dXSec_dElep_AR*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::dXSec_dElep_AR*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_Dictionary();
   static void geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::dXSec_Log_Wrapper*)
   {
      ::genie::utils::gsl::dXSec_Log_Wrapper *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::dXSec_Log_Wrapper));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::dXSec_Log_Wrapper", "", 458,
                  typeid(::genie::utils::gsl::dXSec_Log_Wrapper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::dXSec_Log_Wrapper) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::dXSec_Log_Wrapper*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::dXSec_Log_Wrapper*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::dXSec_Log_Wrapper*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::dXSec_Log_Wrapper*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2Xsec_dn1dn2_E*)
   {
      ::genie::utils::gsl::d2Xsec_dn1dn2_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2Xsec_dn1dn2_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2Xsec_dn1dn2_E", "", 482,
                  typeid(::genie::utils::gsl::d2Xsec_dn1dn2_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2Xsec_dn1dn2_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2Xsec_dn1dn2_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d2Xsec_dn1dn2_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2Xsec_dn1dn2_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2Xsec_dn1dn2_E*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2Xsec_dn1dn2dn3_E*)
   {
      ::genie::utils::gsl::d2Xsec_dn1dn2dn3_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2Xsec_dn1dn2dn3_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2Xsec_dn1dn2dn3_E", "", 502,
                  typeid(::genie::utils::gsl::d2Xsec_dn1dn2dn3_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2Xsec_dn1dn2dn3_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2Xsec_dn1dn2dn3_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d2Xsec_dn1dn2dn3_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2Xsec_dn1dn2dn3_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2Xsec_dn1dn2dn3_E*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLXSecIntegratorI_Dictionary();
   static void geniecLcLXSecIntegratorI_TClassManip(TClass*);
   static void delete_geniecLcLXSecIntegratorI(void *p);
   static void deleteArray_geniecLcLXSecIntegratorI(void *p);
   static void destruct_geniecLcLXSecIntegratorI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::XSecIntegratorI*)
   {
      ::genie::XSecIntegratorI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::XSecIntegratorI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::XSecIntegratorI", "", 552,
                  typeid(::genie::XSecIntegratorI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLXSecIntegratorI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::XSecIntegratorI) );
      instance.SetDelete(&delete_geniecLcLXSecIntegratorI);
      instance.SetDeleteArray(&deleteArray_geniecLcLXSecIntegratorI);
      instance.SetDestructor(&destruct_geniecLcLXSecIntegratorI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::XSecIntegratorI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::XSecIntegratorI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::XSecIntegratorI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLXSecIntegratorI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::XSecIntegratorI*>(nullptr))->GetClass();
      geniecLcLXSecIntegratorI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLXSecIntegratorI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p) {
      delete (static_cast<::genie::utils::gsl::dXSec_dQ2_E*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p) {
      delete [] (static_cast<::genie::utils::gsl::dXSec_dQ2_E*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p) {
      typedef ::genie::utils::gsl::dXSec_dQ2_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::dXSec_dQ2_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p) {
      delete (static_cast<::genie::utils::gsl::dXSec_dy_E*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p) {
      delete [] (static_cast<::genie::utils::gsl::dXSec_dy_E*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p) {
      typedef ::genie::utils::gsl::dXSec_dy_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::dXSec_dy_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p) {
      delete (static_cast<::genie::utils::gsl::d2XSec_dxdy_E*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d2XSec_dxdy_E*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dxdy_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dxdy_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p) {
      delete (static_cast<::genie::utils::gsl::d2XSec_dWdQ2_E*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d2XSec_dWdQ2_E*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dWdQ2_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dWdQ2_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p) {
      delete (static_cast<::genie::utils::gsl::d2XSec_dxdy_Ex*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d2XSec_dxdy_Ex*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dxdy_Ex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dxdy_Ex

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p) {
      delete (static_cast<::genie::utils::gsl::d2XSec_dxdy_Ey*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d2XSec_dxdy_Ey*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dxdy_Ey current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dxdy_Ey

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p) {
      delete (static_cast<::genie::utils::gsl::d2XSec_dWdQ2_EW*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d2XSec_dWdQ2_EW*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dWdQ2_EW current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dWdQ2_EW

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p) {
      delete (static_cast<::genie::utils::gsl::d2XSec_dWdQ2_EQ2*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d2XSec_dWdQ2_EQ2*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dWdQ2_EQ2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dWdQ2_EQ2

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p) {
      delete (static_cast<::genie::utils::gsl::d5XSecAR*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d5XSecAR*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p) {
      typedef ::genie::utils::gsl::d5XSecAR current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d5XSecAR

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p) {
      delete (static_cast<::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p) {
      typedef ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p) {
      delete (static_cast<::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p) {
      typedef ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p) {
      delete (static_cast<::genie::utils::gsl::d3Xsec_dOmegaldThetapi*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d3Xsec_dOmegaldThetapi*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p) {
      typedef ::genie::utils::gsl::d3Xsec_dOmegaldThetapi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d3Xsec_dOmegaldThetapi

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::utils::gsl::dXSec_dElep_AR : new ::genie::utils::gsl::dXSec_dElep_AR;
   }
   static void *newArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::utils::gsl::dXSec_dElep_AR[nElements] : new ::genie::utils::gsl::dXSec_dElep_AR[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p) {
      delete (static_cast<::genie::utils::gsl::dXSec_dElep_AR*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p) {
      delete [] (static_cast<::genie::utils::gsl::dXSec_dElep_AR*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p) {
      typedef ::genie::utils::gsl::dXSec_dElep_AR current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::dXSec_dElep_AR

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p) {
      delete (static_cast<::genie::utils::gsl::dXSec_Log_Wrapper*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p) {
      delete [] (static_cast<::genie::utils::gsl::dXSec_Log_Wrapper*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p) {
      typedef ::genie::utils::gsl::dXSec_Log_Wrapper current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::dXSec_Log_Wrapper

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E(void *p) {
      delete (static_cast<::genie::utils::gsl::d2Xsec_dn1dn2_E*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d2Xsec_dn1dn2_E*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2_E(void *p) {
      typedef ::genie::utils::gsl::d2Xsec_dn1dn2_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2Xsec_dn1dn2_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E(void *p) {
      delete (static_cast<::genie::utils::gsl::d2Xsec_dn1dn2dn3_E*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d2Xsec_dn1dn2dn3_E*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2Xsec_dn1dn2dn3_E(void *p) {
      typedef ::genie::utils::gsl::d2Xsec_dn1dn2dn3_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2Xsec_dn1dn2dn3_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLXSecIntegratorI(void *p) {
      delete (static_cast<::genie::XSecIntegratorI*>(p));
   }
   static void deleteArray_geniecLcLXSecIntegratorI(void *p) {
      delete [] (static_cast<::genie::XSecIntegratorI*>(p));
   }
   static void destruct_geniecLcLXSecIntegratorI(void *p) {
      typedef ::genie::XSecIntegratorI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::XSecIntegratorI

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhXSIg() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhXSIg) = RecordReadRules_libGPhXSIg();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhXSIg));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhXSIg_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/XSectionIntegration",
"GENIE",
"GENIE/Physics/XSectionIntegration",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/XSectionIntegration",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/XSectionIntegration/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhXSIg dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{namespace utils{namespace gsl{class  dXSec_dQ2_E;}}}
namespace genie{namespace utils{namespace gsl{class  dXSec_dy_E;}}}
namespace genie{namespace utils{namespace gsl{class  d2XSec_dxdy_E;}}}
namespace genie{namespace utils{namespace gsl{class  d2XSec_dWdQ2_E;}}}
namespace genie{namespace utils{namespace gsl{class  d2XSec_dxdy_Ex;}}}
namespace genie{namespace utils{namespace gsl{class  d2XSec_dxdy_Ey;}}}
namespace genie{namespace utils{namespace gsl{class  d2XSec_dWdQ2_EW;}}}
namespace genie{namespace utils{namespace gsl{class  d2XSec_dWdQ2_EQ2;}}}
namespace genie{namespace utils{namespace gsl{class  d5XSecAR;}}}
namespace genie{namespace utils{namespace gsl{class  d5Xsec_dEldOmegaldOmegapi;}}}
namespace genie{namespace utils{namespace gsl{class  d4Xsec_dEldThetaldOmegapi;}}}
namespace genie{namespace utils{namespace gsl{class  d3Xsec_dOmegaldThetapi;}}}
namespace genie{namespace utils{namespace gsl{class  dXSec_dElep_AR;}}}
namespace genie{namespace utils{namespace gsl{class  dXSec_Log_Wrapper;}}}
namespace genie{namespace utils{namespace gsl{class  d2Xsec_dn1dn2_E;}}}
namespace genie{namespace utils{namespace gsl{class  d2Xsec_dn1dn2dn3_E;}}}
namespace genie{class  XSecIntegratorI;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhXSIg dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//_____________________________________________________________________________________
/*!

\namespace  genie::utils::gsl

\brief      GENIE differential cross section function wrappers for GSL integrators.

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    Sep 01, 2009

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//_____________________________________________________________________________________

#ifndef _GENIE_XSEC_FUNCTION_GSL_WRAPPERS_H_
#define _GENIE_XSEC_FUNCTION_GSL_WRAPPERS_H_

#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>
#include "Framework/Utils/Range1.h"

#include <string>
using std::string;

namespace genie {

class XSecAlgorithmI;
class Interaction;

namespace utils {
namespace gsl   {

//.....................................................................................
//
// genie::utils::gsl::dXSec_dQ2_E
// A 1-D cross section function: dxsec/dQ2 = f(Q2)|(fixed E)
//
class dXSec_dQ2_E: public ROOT::Math::IBaseFunctionOneDim
{
public:
  dXSec_dQ2_E(const XSecAlgorithmI * m, const Interaction * i, double scale=1.);
 ~dXSec_dQ2_E();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double                 fScale; // can set to -1. for use with GSL minimizer
};

//.....................................................................................
//
// genie::utils::gsl::dXSec_dy_E
// A 1-D cross section function: dxsec/dy = f(y)|(fixed E)
//
class dXSec_dy_E: public ROOT::Math::IBaseFunctionOneDim
{
public:
  dXSec_dy_E(const XSecAlgorithmI * m, const Interaction * i);
 ~dXSec_dy_E();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::dXSec_dEDNu_E
// A 1-D cross section function: dxsec/dEDNu = f(EDNu)|(fixed E)
//
class dXSec_dEDNu_E: public ROOT::Math::IBaseFunctionOneDim
{
public:
  dXSec_dEDNu_E(const XSecAlgorithmI * m, const Interaction * i,
                double DNuMass, double scale=1.);
  ~dXSec_dEDNu_E();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)       const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
  Range1D_t IntegrationRange(void)  const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double                 fDNuMass;
  double                 fScale; // can set to -1. for use with GSL minimizer
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dxdy_E
// A 2-D cross section function: d2xsec/dxdy = f(x,y)|(fixed E)
//
class d2XSec_dxdy_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSec_dxdy_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSec_dxdy_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dlog10xdlog10Q2_E
// A 2-D cross section function: d2xsec/dlog10xdQlog102 = f(log10x,log10Q2)|(fixed E)
//
class d2XSec_dlog10xdlog10Q2_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSec_dlog10xdlog10Q2_E(const XSecAlgorithmI * m, const Interaction * i, double scale=1.);
 ~d2XSec_dlog10xdlog10Q2_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double                 fScale; // can set to -1. for use with GSL minimizer
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dQ2dy_E
// A 2-D cross section function: d2xsec/dQ2dy = f(Q^2,y)|(fixed E)
//
class d2XSec_dQ2dy_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSec_dQ2dy_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSec_dQ2dy_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dQ2dydt_E
// A 3-D cross section function: d3xsec/dQ2dydt = f(Q^2,y,t)|(fixed E)
//
class d2XSec_dQ2dydt_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSec_dQ2dydt_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSec_dQ2dydt_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d3XSec_dxdydt_E
// A 3-D cross section function: d3xsec/dxdydt = f(x,y,t)|(fixed E)
//
class d3XSec_dxdydt_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d3XSec_dxdydt_E(const XSecAlgorithmI * m, const Interaction * i);
  ~d3XSec_dxdydt_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dWdQ2_E
// A 2-D cross section function: d2xsec/dWdQ2 = f(W,Q2)|(fixed E)
//
class d2XSec_dWdQ2_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSec_dWdQ2_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSec_dWdQ2_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dxdy_Ex
// A 1-D cross section function: d2xsec/dxdy = f(y)|(fixed:E,x)
//
class d2XSec_dxdy_Ex: public ROOT::Math::IBaseFunctionOneDim
{
public:
  d2XSec_dxdy_Ex(const XSecAlgorithmI * m, const Interaction * i, double x);
 ~d2XSec_dxdy_Ex();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double fx;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dxdy_Ey
// A 1-D cross section function: d2xsec/dxdy = f(x)|(fixed:E,y)
//
class d2XSec_dxdy_Ey: public ROOT::Math::IBaseFunctionOneDim
{
public:
  d2XSec_dxdy_Ey(const XSecAlgorithmI * m, const Interaction * i, double x);
 ~d2XSec_dxdy_Ey();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double                 fy;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dWdQ2_EW
// A 1-D cross section function: d2xsec/dWdQ2= f(Q2)|(fixed:E,W)
//
class d2XSec_dWdQ2_EW: public ROOT::Math::IBaseFunctionOneDim
{
public:
  d2XSec_dWdQ2_EW( const XSecAlgorithmI * m, const Interaction * i, double W);
 ~d2XSec_dWdQ2_EW();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double                 fW;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dWdQ2_EQ2
// A 1-D cross section function: d2xsec/dWdQ2= f(W)|(fixed:E,Q2)
//
class d2XSec_dWdQ2_EQ2: public ROOT::Math::IBaseFunctionOneDim
{
public:
  d2XSec_dWdQ2_EQ2(const XSecAlgorithmI * m, const Interaction * i, double Q2);
 ~d2XSec_dWdQ2_EQ2();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double                 fQ2;
};

//.....................................................................................

//.....................................................................................
//
//
//
class d5XSecAR : public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d5XSecAR(const XSecAlgorithmI * m, const Interaction * i);
  ~d5XSecAR();
  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
  void SetFlip(bool b) { flip = b; }

private:
  const XSecAlgorithmI * fModel;
  const Interaction * fInteraction;
  bool flip;
};


//.....................................................................................
//
// genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi
// A 5-D cross section function (fixed E_nu)
//
class d5Xsec_dEldOmegaldOmegapi: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d5Xsec_dEldOmegaldOmegapi(const XSecAlgorithmI * m, const Interaction * i);
 ~d5Xsec_dEldOmegaldOmegapi();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

///.....................................................................................
///
/// genie::utils::gsl::d4Xsec_dEldThetaldOmegapi
/// A 4-D cross section function (fixed E_nu)
/// DANIEL - for the Alvarez-Russo cross-section
///
class d4Xsec_dEldThetaldOmegapi: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d4Xsec_dEldThetaldOmegapi(const XSecAlgorithmI * m, const Interaction * i);
 ~d4Xsec_dEldThetaldOmegapi();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

  double                              GetFactor()                 const;
  void                                SetFactor(double factor);

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double fFactor;
};
///.....................................................................................
///
/// genie::utils::gsl::d3Xsec_dOmegaldThetapi
/// A 3-D cross section function (fixed E_nu)
/// Steve Dennis - for the Alvarez-Russo cross-section
///
class d3Xsec_dOmegaldThetapi: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d3Xsec_dOmegaldThetapi(const XSecAlgorithmI * m, const Interaction * i);
 ~d3Xsec_dOmegaldThetapi();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  d3Xsec_dOmegaldThetapi            * Clone  (void)               const;

  // Specific to this class
  void SetE_lep (double E_lepton) const;
  // Yes, it's a const setter
  // Needed because DoEval must be const, but dXSec_dElep_AR::DoEval() must call this

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  mutable double fElep;
};
///.....................................................................................
///
/// genie::utils::gsl::dXSec_dElep_AR
/// A 1-D cross section function: dxsec/dElep
/// Used for Alvarez-Ruso coherent.
///
class dXSec_dElep_AR: public ROOT::Math::IBaseFunctionOneDim
{
public:
  dXSec_dElep_AR(const XSecAlgorithmI * m, const Interaction * i,
                 string gsl_nd_integrator_type, double gsl_relative_tolerance,
                 unsigned int max_n_calls);
  dXSec_dElep_AR() {};
 ~dXSec_dElep_AR();

  // ROOT::Math::IBaseFunctionOneDim interface
  dXSec_dElep_AR *                  Clone  (void)             const;
  double                            DoEval (double xin) const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;

  const genie::utils::gsl::d3Xsec_dOmegaldThetapi * func;

  mutable ROOT::Math::IntegratorMultiDim integrator;

  double kine_min[3];
  double kine_max[3];

  string fGSLIntegratorType;
  double fGSLRelTol;
  unsigned int fGSLMaxCalls;
};

///.....................................................................................
///
/// dXSec_Log_Wrapper
/// Redistributes variables over a range to a e^-x distribution.
/// Allows the integrator to use a logarithmic series of points while calling uniformly.
class dXSec_Log_Wrapper: public ROOT::Math::IBaseFunctionMultiDim
{
  public:
    dXSec_Log_Wrapper(const ROOT::Math::IBaseFunctionMultiDim * fn,
                      bool * ifLog, double * min, double * maxes);
   ~dXSec_Log_Wrapper();

    // ROOT::Math::IBaseFunctionMultiDim interface
    unsigned int                        NDim   (void)               const;
    double                              DoEval (const double * xin) const;
    ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

  private:
    const ROOT::Math::IBaseFunctionMultiDim * fFn;
    bool * fIfLog;
    double * fMins;
    double * fMaxes;
};
 
//.....................................................................................
//
// genie::utils::gsl::d2Xsec_dn1dn2_E
// A 2-D cross section function: d2xsec/dn1dn2 = f(n1,n2)|(fixed E)
//
class d2Xsec_dn1dn2_E: public ROOT::Math::IBaseFunctionMultiDim
{
  public:
    d2Xsec_dn1dn2_E(const XSecAlgorithmI * m, const Interaction * i, double scale=1. );
   ~d2Xsec_dn1dn2_E();
    // ROOT::Math::IBaseFunctionMultiDim interface
    unsigned int                        NDim   (void)               const;
    double                              DoEval (const double * xin) const;
    ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
  private:
    const XSecAlgorithmI * fModel;
    const Interaction *    fInteraction;
    double                 fScale; // can set to -1. for use with GSL minimizer
};

//.....................................................................................
//
// genie::utils::gsl::d2Xsec_dn1dn2dn3_E
// A 3-D cross section function: d2xsec/dn1dn2dn3 = f(n1,n2,n3)|(fixed E)
//
class d2Xsec_dn1dn2dn3_E: public ROOT::Math::IBaseFunctionMultiDim
{
  public:
    d2Xsec_dn1dn2dn3_E(const XSecAlgorithmI * m, const Interaction * i, double scale=1. );
   ~d2Xsec_dn1dn2dn3_E();
    // ROOT::Math::IBaseFunctionMultiDim interface
    unsigned int                        NDim   (void)               const;
    double                              DoEval (const double * xin) const;
    ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
  private:
    const XSecAlgorithmI * fModel;
    const Interaction *    fInteraction;
    double                 fScale; // can set to -1. for use with GSL minimizer
};
 

} // gsl   namespace
} // utils namespace
} // genie namespace

#endif
//____________________________________________________________________________
/*!

\class    genie::XSecIntegratorI

\brief    Cross Section Integrator Interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _XSEC_INTEGRATOR_I_H_
#define _XSEC_INTEGRATOR_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/Interaction/Interaction.h"

namespace genie {

class IntegratorI;

 class XSecIntegratorI : public Algorithm {

public:
  virtual ~XSecIntegratorI();

  virtual double Integrate(const XSecAlgorithmI * model,
                           const Interaction * interaction
                       /*, const KPhaseSpaceCut * cut=0*/) const= 0;
protected:
  XSecIntegratorI();
  XSecIntegratorI(string name);
  XSecIntegratorI(string name, string config);

  const IntegratorI * fIntegrator; ///< GENIE numerical integrator

  string fGSLIntgType;                     ///< name of GSL numerical integrator
  double fGSLRelTol;                       ///< required relative tolerance (error)
  int    fGSLMaxEval;                      ///< GSL max evaluations
  int    fGSLMinEval;                      ///< GSL min evaluations. Ignored by some integrators.
  unsigned int fGSLMaxSizeOfSubintervals;  ///< GSL maximum number of sub-intervals for 1D integrator
  unsigned int fGSLRule;                   ///< GSL Gauss-Kronrod integration rule (only for GSL 1D adaptive type)

};

}       // genie namespace
#endif  // _XSEC_INTEGRATOR_I_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::XSecIntegratorI", payloadCode, "@",
"genie::utils::gsl::d2XSec_dWdQ2_E", payloadCode, "@",
"genie::utils::gsl::d2XSec_dWdQ2_EQ2", payloadCode, "@",
"genie::utils::gsl::d2XSec_dWdQ2_EW", payloadCode, "@",
"genie::utils::gsl::d2XSec_dxdy_E", payloadCode, "@",
"genie::utils::gsl::d2XSec_dxdy_Ex", payloadCode, "@",
"genie::utils::gsl::d2XSec_dxdy_Ey", payloadCode, "@",
"genie::utils::gsl::d2Xsec_dn1dn2_E", payloadCode, "@",
"genie::utils::gsl::d2Xsec_dn1dn2dn3_E", payloadCode, "@",
"genie::utils::gsl::d3Xsec_dOmegaldThetapi", payloadCode, "@",
"genie::utils::gsl::d4Xsec_dEldThetaldOmegapi", payloadCode, "@",
"genie::utils::gsl::d5XSecAR", payloadCode, "@",
"genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi", payloadCode, "@",
"genie::utils::gsl::dXSec_Log_Wrapper", payloadCode, "@",
"genie::utils::gsl::dXSec_dElep_AR", payloadCode, "@",
"genie::utils::gsl::dXSec_dQ2_E", payloadCode, "@",
"genie::utils::gsl::dXSec_dy_E", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhXSIg",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhXSIg_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhXSIg_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhXSIg() {
  TriggerDictionaryInitialization_libGPhXSIg_Impl();
}
