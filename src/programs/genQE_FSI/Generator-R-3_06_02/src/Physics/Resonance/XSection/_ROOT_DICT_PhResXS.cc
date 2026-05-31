// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhResXS
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
#include "BSKLNBaseRESPXSec2014.h"
#include "BergerSehgalRESPXSec2014.h"
#include "BostedChristyEMPXSec.h"
#include "FKR.h"
#include "GiBUURESFormFactor.h"
#include "KuzminLyubushkinNaumovRESPXSec2014.h"
#include "MKSPPPXSec2020.h"
#include "P33PaschosLalakulichPXSec.h"
#include "RESXSec.h"
#include "RSHelicityAmpl.h"
#include "RSHelicityAmplModelCC.h"
#include "RSHelicityAmplModelEMn.h"
#include "RSHelicityAmplModelEMp.h"
#include "RSHelicityAmplModelI.h"
#include "RSHelicityAmplModelNCn.h"
#include "RSHelicityAmplModelNCp.h"
#include "ReinSehgalRESPXSec.h"
#include "ReinSehgalRESXSec.h"
#include "ReinSehgalRESXSecFast.h"
#include "ReinSehgalRESXSecWithCache.h"
#include "ReinSehgalRESXSecWithCacheFast.h"
#include "ReinSehgalSPPPXSec.h"
#include "ReinSehgalSPPXSec.h"
#include "SPPXSec.h"
#include "SPPXSecWithCache.h"

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
      namespace gsl {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLgsl_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::gsl", 0 /*version*/, "ReinSehgalRESXSecWithCacheFast.h", 69,
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
   static TClass *geniecLcLBSKLNBaseRESPXSec2014_Dictionary();
   static void geniecLcLBSKLNBaseRESPXSec2014_TClassManip(TClass*);
   static void delete_geniecLcLBSKLNBaseRESPXSec2014(void *p);
   static void deleteArray_geniecLcLBSKLNBaseRESPXSec2014(void *p);
   static void destruct_geniecLcLBSKLNBaseRESPXSec2014(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BSKLNBaseRESPXSec2014*)
   {
      ::genie::BSKLNBaseRESPXSec2014 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BSKLNBaseRESPXSec2014));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BSKLNBaseRESPXSec2014", "", 58,
                  typeid(::genie::BSKLNBaseRESPXSec2014), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBSKLNBaseRESPXSec2014_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BSKLNBaseRESPXSec2014) );
      instance.SetDelete(&delete_geniecLcLBSKLNBaseRESPXSec2014);
      instance.SetDeleteArray(&deleteArray_geniecLcLBSKLNBaseRESPXSec2014);
      instance.SetDestructor(&destruct_geniecLcLBSKLNBaseRESPXSec2014);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BSKLNBaseRESPXSec2014*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BSKLNBaseRESPXSec2014*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BSKLNBaseRESPXSec2014*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBSKLNBaseRESPXSec2014_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::BSKLNBaseRESPXSec2014*>(nullptr))->GetClass();
      geniecLcLBSKLNBaseRESPXSec2014_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBSKLNBaseRESPXSec2014_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBergerSehgalRESPXSec2014_Dictionary();
   static void geniecLcLBergerSehgalRESPXSec2014_TClassManip(TClass*);
   static void *new_geniecLcLBergerSehgalRESPXSec2014(void *p = nullptr);
   static void *newArray_geniecLcLBergerSehgalRESPXSec2014(Long_t size, void *p);
   static void delete_geniecLcLBergerSehgalRESPXSec2014(void *p);
   static void deleteArray_geniecLcLBergerSehgalRESPXSec2014(void *p);
   static void destruct_geniecLcLBergerSehgalRESPXSec2014(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BergerSehgalRESPXSec2014*)
   {
      ::genie::BergerSehgalRESPXSec2014 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BergerSehgalRESPXSec2014));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BergerSehgalRESPXSec2014", "", 187,
                  typeid(::genie::BergerSehgalRESPXSec2014), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBergerSehgalRESPXSec2014_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BergerSehgalRESPXSec2014) );
      instance.SetNew(&new_geniecLcLBergerSehgalRESPXSec2014);
      instance.SetNewArray(&newArray_geniecLcLBergerSehgalRESPXSec2014);
      instance.SetDelete(&delete_geniecLcLBergerSehgalRESPXSec2014);
      instance.SetDeleteArray(&deleteArray_geniecLcLBergerSehgalRESPXSec2014);
      instance.SetDestructor(&destruct_geniecLcLBergerSehgalRESPXSec2014);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BergerSehgalRESPXSec2014*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BergerSehgalRESPXSec2014*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BergerSehgalRESPXSec2014*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBergerSehgalRESPXSec2014_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::BergerSehgalRESPXSec2014*>(nullptr))->GetClass();
      geniecLcLBergerSehgalRESPXSec2014_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBergerSehgalRESPXSec2014_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBostedChristyEMPXSec_Dictionary();
   static void geniecLcLBostedChristyEMPXSec_TClassManip(TClass*);
   static void *new_geniecLcLBostedChristyEMPXSec(void *p = nullptr);
   static void *newArray_geniecLcLBostedChristyEMPXSec(Long_t size, void *p);
   static void delete_geniecLcLBostedChristyEMPXSec(void *p);
   static void deleteArray_geniecLcLBostedChristyEMPXSec(void *p);
   static void destruct_geniecLcLBostedChristyEMPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BostedChristyEMPXSec*)
   {
      ::genie::BostedChristyEMPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BostedChristyEMPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BostedChristyEMPXSec", "", 239,
                  typeid(::genie::BostedChristyEMPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBostedChristyEMPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BostedChristyEMPXSec) );
      instance.SetNew(&new_geniecLcLBostedChristyEMPXSec);
      instance.SetNewArray(&newArray_geniecLcLBostedChristyEMPXSec);
      instance.SetDelete(&delete_geniecLcLBostedChristyEMPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLBostedChristyEMPXSec);
      instance.SetDestructor(&destruct_geniecLcLBostedChristyEMPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BostedChristyEMPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BostedChristyEMPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BostedChristyEMPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBostedChristyEMPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::BostedChristyEMPXSec*>(nullptr))->GetClass();
      geniecLcLBostedChristyEMPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBostedChristyEMPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLKuzminLyubushkinNaumovRESPXSec2014_Dictionary();
   static void geniecLcLKuzminLyubushkinNaumovRESPXSec2014_TClassManip(TClass*);
   static void *new_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p = nullptr);
   static void *newArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(Long_t size, void *p);
   static void delete_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p);
   static void deleteArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p);
   static void destruct_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::KuzminLyubushkinNaumovRESPXSec2014*)
   {
      ::genie::KuzminLyubushkinNaumovRESPXSec2014 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::KuzminLyubushkinNaumovRESPXSec2014));
      static ::ROOT::TGenericClassInfo 
         instance("genie::KuzminLyubushkinNaumovRESPXSec2014", "", 575,
                  typeid(::genie::KuzminLyubushkinNaumovRESPXSec2014), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLKuzminLyubushkinNaumovRESPXSec2014_Dictionary, isa_proxy, 0,
                  sizeof(::genie::KuzminLyubushkinNaumovRESPXSec2014) );
      instance.SetNew(&new_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      instance.SetNewArray(&newArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      instance.SetDelete(&delete_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      instance.SetDeleteArray(&deleteArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      instance.SetDestructor(&destruct_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::KuzminLyubushkinNaumovRESPXSec2014*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::KuzminLyubushkinNaumovRESPXSec2014*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::KuzminLyubushkinNaumovRESPXSec2014*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLKuzminLyubushkinNaumovRESPXSec2014_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::KuzminLyubushkinNaumovRESPXSec2014*>(nullptr))->GetClass();
      geniecLcLKuzminLyubushkinNaumovRESPXSec2014_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLKuzminLyubushkinNaumovRESPXSec2014_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmpl_Dictionary();
   static void geniecLcLRSHelicityAmpl_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmpl(void *p = nullptr);
   static void *newArray_geniecLcLRSHelicityAmpl(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmpl(void *p);
   static void deleteArray_geniecLcLRSHelicityAmpl(void *p);
   static void destruct_geniecLcLRSHelicityAmpl(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmpl*)
   {
      ::genie::RSHelicityAmpl *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmpl));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmpl", "RSHelicityAmpl.h", 40,
                  typeid(::genie::RSHelicityAmpl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmpl_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmpl) );
      instance.SetNew(&new_geniecLcLRSHelicityAmpl);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmpl);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmpl);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmpl);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmpl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmpl*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSHelicityAmpl*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmpl*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmpl_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmpl*>(nullptr))->GetClass();
      geniecLcLRSHelicityAmpl_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmpl_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelI_Dictionary();
   static void geniecLcLRSHelicityAmplModelI_TClassManip(TClass*);
   static void delete_geniecLcLRSHelicityAmplModelI(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelI(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelI*)
   {
      ::genie::RSHelicityAmplModelI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelI", "RSHelicityAmplModelI.h", 27,
                  typeid(::genie::RSHelicityAmplModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelI) );
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelI);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSHelicityAmplModelI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelI*>(nullptr))->GetClass();
      geniecLcLRSHelicityAmplModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLMKSPPPXSec2020_Dictionary();
   static void geniecLcLMKSPPPXSec2020_TClassManip(TClass*);
   static void *new_geniecLcLMKSPPPXSec2020(void *p = nullptr);
   static void *newArray_geniecLcLMKSPPPXSec2020(Long_t size, void *p);
   static void delete_geniecLcLMKSPPPXSec2020(void *p);
   static void deleteArray_geniecLcLMKSPPPXSec2020(void *p);
   static void destruct_geniecLcLMKSPPPXSec2020(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::MKSPPPXSec2020*)
   {
      ::genie::MKSPPPXSec2020 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::MKSPPPXSec2020));
      static ::ROOT::TGenericClassInfo 
         instance("genie::MKSPPPXSec2020", "", 685,
                  typeid(::genie::MKSPPPXSec2020), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMKSPPPXSec2020_Dictionary, isa_proxy, 0,
                  sizeof(::genie::MKSPPPXSec2020) );
      instance.SetNew(&new_geniecLcLMKSPPPXSec2020);
      instance.SetNewArray(&newArray_geniecLcLMKSPPPXSec2020);
      instance.SetDelete(&delete_geniecLcLMKSPPPXSec2020);
      instance.SetDeleteArray(&deleteArray_geniecLcLMKSPPPXSec2020);
      instance.SetDestructor(&destruct_geniecLcLMKSPPPXSec2020);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::MKSPPPXSec2020*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::MKSPPPXSec2020*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::MKSPPPXSec2020*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMKSPPPXSec2020_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::MKSPPPXSec2020*>(nullptr))->GetClass();
      geniecLcLMKSPPPXSec2020_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMKSPPPXSec2020_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLP33PaschosLalakulichPXSec_Dictionary();
   static void geniecLcLP33PaschosLalakulichPXSec_TClassManip(TClass*);
   static void *new_geniecLcLP33PaschosLalakulichPXSec(void *p = nullptr);
   static void *newArray_geniecLcLP33PaschosLalakulichPXSec(Long_t size, void *p);
   static void delete_geniecLcLP33PaschosLalakulichPXSec(void *p);
   static void deleteArray_geniecLcLP33PaschosLalakulichPXSec(void *p);
   static void destruct_geniecLcLP33PaschosLalakulichPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::P33PaschosLalakulichPXSec*)
   {
      ::genie::P33PaschosLalakulichPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::P33PaschosLalakulichPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::P33PaschosLalakulichPXSec", "", 1048,
                  typeid(::genie::P33PaschosLalakulichPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLP33PaschosLalakulichPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::P33PaschosLalakulichPXSec) );
      instance.SetNew(&new_geniecLcLP33PaschosLalakulichPXSec);
      instance.SetNewArray(&newArray_geniecLcLP33PaschosLalakulichPXSec);
      instance.SetDelete(&delete_geniecLcLP33PaschosLalakulichPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLP33PaschosLalakulichPXSec);
      instance.SetDestructor(&destruct_geniecLcLP33PaschosLalakulichPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::P33PaschosLalakulichPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::P33PaschosLalakulichPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::P33PaschosLalakulichPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLP33PaschosLalakulichPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::P33PaschosLalakulichPXSec*>(nullptr))->GetClass();
      geniecLcLP33PaschosLalakulichPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLP33PaschosLalakulichPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRESXSec_Dictionary();
   static void geniecLcLRESXSec_TClassManip(TClass*);
   static void *new_geniecLcLRESXSec(void *p = nullptr);
   static void *newArray_geniecLcLRESXSec(Long_t size, void *p);
   static void delete_geniecLcLRESXSec(void *p);
   static void deleteArray_geniecLcLRESXSec(void *p);
   static void destruct_geniecLcLRESXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESXSec*)
   {
      ::genie::RESXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESXSec", "", 1111,
                  typeid(::genie::RESXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESXSec) );
      instance.SetNew(&new_geniecLcLRESXSec);
      instance.SetNewArray(&newArray_geniecLcLRESXSec);
      instance.SetDelete(&delete_geniecLcLRESXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESXSec);
      instance.SetDestructor(&destruct_geniecLcLRESXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RESXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RESXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RESXSec*>(nullptr))->GetClass();
      geniecLcLRESXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelCC_Dictionary();
   static void geniecLcLRSHelicityAmplModelCC_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelCC(void *p = nullptr);
   static void *newArray_geniecLcLRSHelicityAmplModelCC(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelCC(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelCC(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelCC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelCC*)
   {
      ::genie::RSHelicityAmplModelCC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelCC));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelCC", "", 1249,
                  typeid(::genie::RSHelicityAmplModelCC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelCC_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelCC) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelCC);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelCC);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelCC);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelCC);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelCC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelCC*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSHelicityAmplModelCC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelCC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelCC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelCC*>(nullptr))->GetClass();
      geniecLcLRSHelicityAmplModelCC_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelCC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelEMn_Dictionary();
   static void geniecLcLRSHelicityAmplModelEMn_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelEMn(void *p = nullptr);
   static void *newArray_geniecLcLRSHelicityAmplModelEMn(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelEMn(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelEMn(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelEMn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelEMn*)
   {
      ::genie::RSHelicityAmplModelEMn *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelEMn));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelEMn", "", 1294,
                  typeid(::genie::RSHelicityAmplModelEMn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelEMn_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelEMn) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelEMn);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelEMn);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelEMn);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelEMn);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelEMn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelEMn*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSHelicityAmplModelEMn*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelEMn*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelEMn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelEMn*>(nullptr))->GetClass();
      geniecLcLRSHelicityAmplModelEMn_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelEMn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelEMp_Dictionary();
   static void geniecLcLRSHelicityAmplModelEMp_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelEMp(void *p = nullptr);
   static void *newArray_geniecLcLRSHelicityAmplModelEMp(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelEMp(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelEMp(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelEMp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelEMp*)
   {
      ::genie::RSHelicityAmplModelEMp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelEMp));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelEMp", "", 1339,
                  typeid(::genie::RSHelicityAmplModelEMp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelEMp_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelEMp) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelEMp);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelEMp);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelEMp);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelEMp);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelEMp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelEMp*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSHelicityAmplModelEMp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelEMp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelEMp_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelEMp*>(nullptr))->GetClass();
      geniecLcLRSHelicityAmplModelEMp_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelEMp_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelNCn_Dictionary();
   static void geniecLcLRSHelicityAmplModelNCn_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelNCn(void *p = nullptr);
   static void *newArray_geniecLcLRSHelicityAmplModelNCn(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelNCn(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelNCn(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelNCn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelNCn*)
   {
      ::genie::RSHelicityAmplModelNCn *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelNCn));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelNCn", "", 1427,
                  typeid(::genie::RSHelicityAmplModelNCn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelNCn_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelNCn) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelNCn);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelNCn);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelNCn);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelNCn);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelNCn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelNCn*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSHelicityAmplModelNCn*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelNCn*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelNCn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelNCn*>(nullptr))->GetClass();
      geniecLcLRSHelicityAmplModelNCn_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelNCn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelNCp_Dictionary();
   static void geniecLcLRSHelicityAmplModelNCp_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelNCp(void *p = nullptr);
   static void *newArray_geniecLcLRSHelicityAmplModelNCp(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelNCp(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelNCp(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelNCp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelNCp*)
   {
      ::genie::RSHelicityAmplModelNCp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelNCp));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelNCp", "", 1479,
                  typeid(::genie::RSHelicityAmplModelNCp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelNCp_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelNCp) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelNCp);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelNCp);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelNCp);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelNCp);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelNCp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelNCp*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RSHelicityAmplModelNCp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelNCp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelNCp_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RSHelicityAmplModelNCp*>(nullptr))->GetClass();
      geniecLcLRSHelicityAmplModelNCp_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelNCp_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESPXSec_Dictionary();
   static void geniecLcLReinSehgalRESPXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalRESPXSec(void *p = nullptr);
   static void *newArray_geniecLcLReinSehgalRESPXSec(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalRESPXSec(void *p);
   static void deleteArray_geniecLcLReinSehgalRESPXSec(void *p);
   static void destruct_geniecLcLReinSehgalRESPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESPXSec*)
   {
      ::genie::ReinSehgalRESPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESPXSec", "", 1547,
                  typeid(::genie::ReinSehgalRESPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESPXSec) );
      instance.SetNew(&new_geniecLcLReinSehgalRESPXSec);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalRESPXSec);
      instance.SetDelete(&delete_geniecLcLReinSehgalRESPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalRESPXSec);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalRESPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ReinSehgalRESPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESPXSec*>(nullptr))->GetClass();
      geniecLcLReinSehgalRESPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESXSecWithCache_Dictionary();
   static void geniecLcLReinSehgalRESXSecWithCache_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESXSecWithCache*)
   {
      ::genie::ReinSehgalRESXSecWithCache *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESXSecWithCache));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESXSecWithCache", "ReinSehgalRESXSecWithCache.h", 34,
                  typeid(::genie::ReinSehgalRESXSecWithCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESXSecWithCache_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESXSecWithCache) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESXSecWithCache*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ReinSehgalRESXSecWithCache*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESXSecWithCache*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESXSecWithCache_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESXSecWithCache*>(nullptr))->GetClass();
      geniecLcLReinSehgalRESXSecWithCache_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESXSecWithCache_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESXSec_Dictionary();
   static void geniecLcLReinSehgalRESXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalRESXSec(void *p = nullptr);
   static void *newArray_geniecLcLReinSehgalRESXSec(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalRESXSec(void *p);
   static void deleteArray_geniecLcLReinSehgalRESXSec(void *p);
   static void destruct_geniecLcLReinSehgalRESXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESXSec*)
   {
      ::genie::ReinSehgalRESXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESXSec", "", 1646,
                  typeid(::genie::ReinSehgalRESXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESXSec) );
      instance.SetNew(&new_geniecLcLReinSehgalRESXSec);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalRESXSec);
      instance.SetDelete(&delete_geniecLcLReinSehgalRESXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalRESXSec);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalRESXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ReinSehgalRESXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESXSec*>(nullptr))->GetClass();
      geniecLcLReinSehgalRESXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESXSecWithCacheFast_Dictionary();
   static void geniecLcLReinSehgalRESXSecWithCacheFast_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESXSecWithCacheFast*)
   {
      ::genie::ReinSehgalRESXSecWithCacheFast *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESXSecWithCacheFast));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESXSecWithCacheFast", "ReinSehgalRESXSecWithCacheFast.h", 43,
                  typeid(::genie::ReinSehgalRESXSecWithCacheFast), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESXSecWithCacheFast_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESXSecWithCacheFast) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESXSecWithCacheFast*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ReinSehgalRESXSecWithCacheFast*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESXSecWithCacheFast*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESXSecWithCacheFast_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESXSecWithCacheFast*>(nullptr))->GetClass();
      geniecLcLReinSehgalRESXSecWithCacheFast_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESXSecWithCacheFast_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSecRESFast_dWQ2_E*)
   {
      ::genie::utils::gsl::d2XSecRESFast_dWQ2_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSecRESFast_dWQ2_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSecRESFast_dWQ2_E", "ReinSehgalRESXSecWithCacheFast.h", 78,
                  typeid(::genie::utils::gsl::d2XSecRESFast_dWQ2_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSecRESFast_dWQ2_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSecRESFast_dWQ2_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d2XSecRESFast_dWQ2_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSecRESFast_dWQ2_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d2XSecRESFast_dWQ2_E*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESXSecFast_Dictionary();
   static void geniecLcLReinSehgalRESXSecFast_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalRESXSecFast(void *p = nullptr);
   static void *newArray_geniecLcLReinSehgalRESXSecFast(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalRESXSecFast(void *p);
   static void deleteArray_geniecLcLReinSehgalRESXSecFast(void *p);
   static void destruct_geniecLcLReinSehgalRESXSecFast(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESXSecFast*)
   {
      ::genie::ReinSehgalRESXSecFast *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESXSecFast));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESXSecFast", "", 1716,
                  typeid(::genie::ReinSehgalRESXSecFast), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESXSecFast_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESXSecFast) );
      instance.SetNew(&new_geniecLcLReinSehgalRESXSecFast);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalRESXSecFast);
      instance.SetDelete(&delete_geniecLcLReinSehgalRESXSecFast);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalRESXSecFast);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalRESXSecFast);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESXSecFast*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ReinSehgalRESXSecFast*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESXSecFast*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESXSecFast_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalRESXSecFast*>(nullptr))->GetClass();
      geniecLcLReinSehgalRESXSecFast_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESXSecFast_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalSPPPXSec_Dictionary();
   static void geniecLcLReinSehgalSPPPXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalSPPPXSec(void *p = nullptr);
   static void *newArray_geniecLcLReinSehgalSPPPXSec(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalSPPPXSec(void *p);
   static void deleteArray_geniecLcLReinSehgalSPPPXSec(void *p);
   static void destruct_geniecLcLReinSehgalSPPPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalSPPPXSec*)
   {
      ::genie::ReinSehgalSPPPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalSPPPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalSPPPXSec", "", 1954,
                  typeid(::genie::ReinSehgalSPPPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalSPPPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalSPPPXSec) );
      instance.SetNew(&new_geniecLcLReinSehgalSPPPXSec);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalSPPPXSec);
      instance.SetDelete(&delete_geniecLcLReinSehgalSPPPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalSPPPXSec);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalSPPPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalSPPPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ReinSehgalSPPPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalSPPPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalSPPPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalSPPPXSec*>(nullptr))->GetClass();
      geniecLcLReinSehgalSPPPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalSPPPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalSPPXSec_Dictionary();
   static void geniecLcLReinSehgalSPPXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalSPPXSec(void *p = nullptr);
   static void *newArray_geniecLcLReinSehgalSPPXSec(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalSPPXSec(void *p);
   static void deleteArray_geniecLcLReinSehgalSPPXSec(void *p);
   static void destruct_geniecLcLReinSehgalSPPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalSPPXSec*)
   {
      ::genie::ReinSehgalSPPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalSPPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalSPPXSec", "", 2032,
                  typeid(::genie::ReinSehgalSPPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalSPPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalSPPXSec) );
      instance.SetNew(&new_geniecLcLReinSehgalSPPXSec);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalSPPXSec);
      instance.SetDelete(&delete_geniecLcLReinSehgalSPPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalSPPXSec);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalSPPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalSPPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ReinSehgalSPPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalSPPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalSPPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalSPPXSec*>(nullptr))->GetClass();
      geniecLcLReinSehgalSPPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalSPPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSPPXSecWithCache_Dictionary();
   static void geniecLcLSPPXSecWithCache_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SPPXSecWithCache*)
   {
      ::genie::SPPXSecWithCache *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SPPXSecWithCache));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SPPXSecWithCache", "SPPXSecWithCache.h", 43,
                  typeid(::genie::SPPXSecWithCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSPPXSecWithCache_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SPPXSecWithCache) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SPPXSecWithCache*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SPPXSecWithCache*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SPPXSecWithCache*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSPPXSecWithCache_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SPPXSecWithCache*>(nullptr))->GetClass();
      geniecLcLSPPXSecWithCache_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSPPXSecWithCache_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E*)
   {
      ::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E", "SPPXSecWithCache.h", 78,
                  typeid(::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSPPXSec_Dictionary();
   static void geniecLcLSPPXSec_TClassManip(TClass*);
   static void *new_geniecLcLSPPXSec(void *p = nullptr);
   static void *newArray_geniecLcLSPPXSec(Long_t size, void *p);
   static void delete_geniecLcLSPPXSec(void *p);
   static void deleteArray_geniecLcLSPPXSec(void *p);
   static void destruct_geniecLcLSPPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SPPXSec*)
   {
      ::genie::SPPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SPPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SPPXSec", "", 2090,
                  typeid(::genie::SPPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSPPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SPPXSec) );
      instance.SetNew(&new_geniecLcLSPPXSec);
      instance.SetNewArray(&newArray_geniecLcLSPPXSec);
      instance.SetDelete(&delete_geniecLcLSPPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLSPPXSec);
      instance.SetDestructor(&destruct_geniecLcLSPPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SPPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SPPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SPPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSPPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SPPXSec*>(nullptr))->GetClass();
      geniecLcLSPPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSPPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLBSKLNBaseRESPXSec2014(void *p) {
      delete (static_cast<::genie::BSKLNBaseRESPXSec2014*>(p));
   }
   static void deleteArray_geniecLcLBSKLNBaseRESPXSec2014(void *p) {
      delete [] (static_cast<::genie::BSKLNBaseRESPXSec2014*>(p));
   }
   static void destruct_geniecLcLBSKLNBaseRESPXSec2014(void *p) {
      typedef ::genie::BSKLNBaseRESPXSec2014 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::BSKLNBaseRESPXSec2014

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBergerSehgalRESPXSec2014(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BergerSehgalRESPXSec2014 : new ::genie::BergerSehgalRESPXSec2014;
   }
   static void *newArray_geniecLcLBergerSehgalRESPXSec2014(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BergerSehgalRESPXSec2014[nElements] : new ::genie::BergerSehgalRESPXSec2014[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBergerSehgalRESPXSec2014(void *p) {
      delete (static_cast<::genie::BergerSehgalRESPXSec2014*>(p));
   }
   static void deleteArray_geniecLcLBergerSehgalRESPXSec2014(void *p) {
      delete [] (static_cast<::genie::BergerSehgalRESPXSec2014*>(p));
   }
   static void destruct_geniecLcLBergerSehgalRESPXSec2014(void *p) {
      typedef ::genie::BergerSehgalRESPXSec2014 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::BergerSehgalRESPXSec2014

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBostedChristyEMPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BostedChristyEMPXSec : new ::genie::BostedChristyEMPXSec;
   }
   static void *newArray_geniecLcLBostedChristyEMPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BostedChristyEMPXSec[nElements] : new ::genie::BostedChristyEMPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBostedChristyEMPXSec(void *p) {
      delete (static_cast<::genie::BostedChristyEMPXSec*>(p));
   }
   static void deleteArray_geniecLcLBostedChristyEMPXSec(void *p) {
      delete [] (static_cast<::genie::BostedChristyEMPXSec*>(p));
   }
   static void destruct_geniecLcLBostedChristyEMPXSec(void *p) {
      typedef ::genie::BostedChristyEMPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::BostedChristyEMPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::KuzminLyubushkinNaumovRESPXSec2014 : new ::genie::KuzminLyubushkinNaumovRESPXSec2014;
   }
   static void *newArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::KuzminLyubushkinNaumovRESPXSec2014[nElements] : new ::genie::KuzminLyubushkinNaumovRESPXSec2014[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p) {
      delete (static_cast<::genie::KuzminLyubushkinNaumovRESPXSec2014*>(p));
   }
   static void deleteArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p) {
      delete [] (static_cast<::genie::KuzminLyubushkinNaumovRESPXSec2014*>(p));
   }
   static void destruct_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p) {
      typedef ::genie::KuzminLyubushkinNaumovRESPXSec2014 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::KuzminLyubushkinNaumovRESPXSec2014

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmpl(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmpl : new ::genie::RSHelicityAmpl;
   }
   static void *newArray_geniecLcLRSHelicityAmpl(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmpl[nElements] : new ::genie::RSHelicityAmpl[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmpl(void *p) {
      delete (static_cast<::genie::RSHelicityAmpl*>(p));
   }
   static void deleteArray_geniecLcLRSHelicityAmpl(void *p) {
      delete [] (static_cast<::genie::RSHelicityAmpl*>(p));
   }
   static void destruct_geniecLcLRSHelicityAmpl(void *p) {
      typedef ::genie::RSHelicityAmpl current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmpl

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelI(void *p) {
      delete (static_cast<::genie::RSHelicityAmplModelI*>(p));
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelI(void *p) {
      delete [] (static_cast<::genie::RSHelicityAmplModelI*>(p));
   }
   static void destruct_geniecLcLRSHelicityAmplModelI(void *p) {
      typedef ::genie::RSHelicityAmplModelI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLMKSPPPXSec2020(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MKSPPPXSec2020 : new ::genie::MKSPPPXSec2020;
   }
   static void *newArray_geniecLcLMKSPPPXSec2020(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::MKSPPPXSec2020[nElements] : new ::genie::MKSPPPXSec2020[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLMKSPPPXSec2020(void *p) {
      delete (static_cast<::genie::MKSPPPXSec2020*>(p));
   }
   static void deleteArray_geniecLcLMKSPPPXSec2020(void *p) {
      delete [] (static_cast<::genie::MKSPPPXSec2020*>(p));
   }
   static void destruct_geniecLcLMKSPPPXSec2020(void *p) {
      typedef ::genie::MKSPPPXSec2020 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::MKSPPPXSec2020

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLP33PaschosLalakulichPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::P33PaschosLalakulichPXSec : new ::genie::P33PaschosLalakulichPXSec;
   }
   static void *newArray_geniecLcLP33PaschosLalakulichPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::P33PaschosLalakulichPXSec[nElements] : new ::genie::P33PaschosLalakulichPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLP33PaschosLalakulichPXSec(void *p) {
      delete (static_cast<::genie::P33PaschosLalakulichPXSec*>(p));
   }
   static void deleteArray_geniecLcLP33PaschosLalakulichPXSec(void *p) {
      delete [] (static_cast<::genie::P33PaschosLalakulichPXSec*>(p));
   }
   static void destruct_geniecLcLP33PaschosLalakulichPXSec(void *p) {
      typedef ::genie::P33PaschosLalakulichPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::P33PaschosLalakulichPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESXSec : new ::genie::RESXSec;
   }
   static void *newArray_geniecLcLRESXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RESXSec[nElements] : new ::genie::RESXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESXSec(void *p) {
      delete (static_cast<::genie::RESXSec*>(p));
   }
   static void deleteArray_geniecLcLRESXSec(void *p) {
      delete [] (static_cast<::genie::RESXSec*>(p));
   }
   static void destruct_geniecLcLRESXSec(void *p) {
      typedef ::genie::RESXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelCC(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelCC : new ::genie::RSHelicityAmplModelCC;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelCC(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelCC[nElements] : new ::genie::RSHelicityAmplModelCC[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelCC(void *p) {
      delete (static_cast<::genie::RSHelicityAmplModelCC*>(p));
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelCC(void *p) {
      delete [] (static_cast<::genie::RSHelicityAmplModelCC*>(p));
   }
   static void destruct_geniecLcLRSHelicityAmplModelCC(void *p) {
      typedef ::genie::RSHelicityAmplModelCC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelCC

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelEMn(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelEMn : new ::genie::RSHelicityAmplModelEMn;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelEMn(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelEMn[nElements] : new ::genie::RSHelicityAmplModelEMn[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelEMn(void *p) {
      delete (static_cast<::genie::RSHelicityAmplModelEMn*>(p));
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelEMn(void *p) {
      delete [] (static_cast<::genie::RSHelicityAmplModelEMn*>(p));
   }
   static void destruct_geniecLcLRSHelicityAmplModelEMn(void *p) {
      typedef ::genie::RSHelicityAmplModelEMn current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelEMn

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelEMp(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelEMp : new ::genie::RSHelicityAmplModelEMp;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelEMp(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelEMp[nElements] : new ::genie::RSHelicityAmplModelEMp[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelEMp(void *p) {
      delete (static_cast<::genie::RSHelicityAmplModelEMp*>(p));
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelEMp(void *p) {
      delete [] (static_cast<::genie::RSHelicityAmplModelEMp*>(p));
   }
   static void destruct_geniecLcLRSHelicityAmplModelEMp(void *p) {
      typedef ::genie::RSHelicityAmplModelEMp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelEMp

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelNCn(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelNCn : new ::genie::RSHelicityAmplModelNCn;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelNCn(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelNCn[nElements] : new ::genie::RSHelicityAmplModelNCn[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelNCn(void *p) {
      delete (static_cast<::genie::RSHelicityAmplModelNCn*>(p));
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelNCn(void *p) {
      delete [] (static_cast<::genie::RSHelicityAmplModelNCn*>(p));
   }
   static void destruct_geniecLcLRSHelicityAmplModelNCn(void *p) {
      typedef ::genie::RSHelicityAmplModelNCn current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelNCn

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelNCp(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelNCp : new ::genie::RSHelicityAmplModelNCp;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelNCp(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RSHelicityAmplModelNCp[nElements] : new ::genie::RSHelicityAmplModelNCp[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelNCp(void *p) {
      delete (static_cast<::genie::RSHelicityAmplModelNCp*>(p));
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelNCp(void *p) {
      delete [] (static_cast<::genie::RSHelicityAmplModelNCp*>(p));
   }
   static void destruct_geniecLcLRSHelicityAmplModelNCp(void *p) {
      typedef ::genie::RSHelicityAmplModelNCp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelNCp

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalRESPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalRESPXSec : new ::genie::ReinSehgalRESPXSec;
   }
   static void *newArray_geniecLcLReinSehgalRESPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalRESPXSec[nElements] : new ::genie::ReinSehgalRESPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalRESPXSec(void *p) {
      delete (static_cast<::genie::ReinSehgalRESPXSec*>(p));
   }
   static void deleteArray_geniecLcLReinSehgalRESPXSec(void *p) {
      delete [] (static_cast<::genie::ReinSehgalRESPXSec*>(p));
   }
   static void destruct_geniecLcLReinSehgalRESPXSec(void *p) {
      typedef ::genie::ReinSehgalRESPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalRESPXSec

namespace ROOT {
} // end of namespace ROOT for class ::genie::ReinSehgalRESXSecWithCache

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalRESXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalRESXSec : new ::genie::ReinSehgalRESXSec;
   }
   static void *newArray_geniecLcLReinSehgalRESXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalRESXSec[nElements] : new ::genie::ReinSehgalRESXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalRESXSec(void *p) {
      delete (static_cast<::genie::ReinSehgalRESXSec*>(p));
   }
   static void deleteArray_geniecLcLReinSehgalRESXSec(void *p) {
      delete [] (static_cast<::genie::ReinSehgalRESXSec*>(p));
   }
   static void destruct_geniecLcLReinSehgalRESXSec(void *p) {
      typedef ::genie::ReinSehgalRESXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalRESXSec

namespace ROOT {
} // end of namespace ROOT for class ::genie::ReinSehgalRESXSecWithCacheFast

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p) {
      delete (static_cast<::genie::utils::gsl::d2XSecRESFast_dWQ2_E*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d2XSecRESFast_dWQ2_E*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p) {
      typedef ::genie::utils::gsl::d2XSecRESFast_dWQ2_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSecRESFast_dWQ2_E

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalRESXSecFast(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalRESXSecFast : new ::genie::ReinSehgalRESXSecFast;
   }
   static void *newArray_geniecLcLReinSehgalRESXSecFast(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalRESXSecFast[nElements] : new ::genie::ReinSehgalRESXSecFast[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalRESXSecFast(void *p) {
      delete (static_cast<::genie::ReinSehgalRESXSecFast*>(p));
   }
   static void deleteArray_geniecLcLReinSehgalRESXSecFast(void *p) {
      delete [] (static_cast<::genie::ReinSehgalRESXSecFast*>(p));
   }
   static void destruct_geniecLcLReinSehgalRESXSecFast(void *p) {
      typedef ::genie::ReinSehgalRESXSecFast current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalRESXSecFast

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalSPPPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalSPPPXSec : new ::genie::ReinSehgalSPPPXSec;
   }
   static void *newArray_geniecLcLReinSehgalSPPPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalSPPPXSec[nElements] : new ::genie::ReinSehgalSPPPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalSPPPXSec(void *p) {
      delete (static_cast<::genie::ReinSehgalSPPPXSec*>(p));
   }
   static void deleteArray_geniecLcLReinSehgalSPPPXSec(void *p) {
      delete [] (static_cast<::genie::ReinSehgalSPPPXSec*>(p));
   }
   static void destruct_geniecLcLReinSehgalSPPPXSec(void *p) {
      typedef ::genie::ReinSehgalSPPPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalSPPPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalSPPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalSPPXSec : new ::genie::ReinSehgalSPPXSec;
   }
   static void *newArray_geniecLcLReinSehgalSPPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalSPPXSec[nElements] : new ::genie::ReinSehgalSPPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalSPPXSec(void *p) {
      delete (static_cast<::genie::ReinSehgalSPPXSec*>(p));
   }
   static void deleteArray_geniecLcLReinSehgalSPPXSec(void *p) {
      delete [] (static_cast<::genie::ReinSehgalSPPXSec*>(p));
   }
   static void destruct_geniecLcLReinSehgalSPPXSec(void *p) {
      typedef ::genie::ReinSehgalSPPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalSPPXSec

namespace ROOT {
} // end of namespace ROOT for class ::genie::SPPXSecWithCache

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E(void *p) {
      delete (static_cast<::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd3XSecMK_dWQ2CosTheta_E(void *p) {
      typedef ::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSPPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SPPXSec : new ::genie::SPPXSec;
   }
   static void *newArray_geniecLcLSPPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SPPXSec[nElements] : new ::genie::SPPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSPPXSec(void *p) {
      delete (static_cast<::genie::SPPXSec*>(p));
   }
   static void deleteArray_geniecLcLSPPXSec(void *p) {
      delete [] (static_cast<::genie::SPPXSec*>(p));
   }
   static void destruct_geniecLcLSPPXSec(void *p) {
      typedef ::genie::SPPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SPPXSec

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhResXS() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhResXS) = RecordReadRules_libGPhResXS();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhResXS));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhResXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Resonance/XSection",
"GENIE",
"GENIE/Physics/Resonance/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Resonance/XSection",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Resonance/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhResXS dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  BSKLNBaseRESPXSec2014;}
namespace genie{class  BergerSehgalRESPXSec2014;}
namespace genie{class  BostedChristyEMPXSec;}
namespace genie{class  KuzminLyubushkinNaumovRESPXSec2014;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/RSHelicityAmpl.h")))  __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/RSHelicityAmplModelI.h")))  RSHelicityAmpl;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/RSHelicityAmplModelI.h")))  RSHelicityAmplModelI;}
namespace genie{class  MKSPPPXSec2020;}
namespace genie{class  P33PaschosLalakulichPXSec;}
namespace genie{class  RESXSec;}
namespace genie{class  RSHelicityAmplModelCC;}
namespace genie{class  RSHelicityAmplModelEMn;}
namespace genie{class  RSHelicityAmplModelEMp;}
namespace genie{class  RSHelicityAmplModelNCn;}
namespace genie{class  RSHelicityAmplModelNCp;}
namespace genie{class  ReinSehgalRESPXSec;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/ReinSehgalRESXSecWithCache.h")))  ReinSehgalRESXSecWithCache;}
namespace genie{class  ReinSehgalRESXSec;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/ReinSehgalRESXSecWithCacheFast.h")))  ReinSehgalRESXSecWithCacheFast;}
namespace genie{namespace utils{namespace gsl{class  __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/ReinSehgalRESXSecWithCacheFast.h")))  d2XSecRESFast_dWQ2_E;}}}
namespace genie{class  ReinSehgalRESXSecFast;}
namespace genie{class  ReinSehgalSPPPXSec;}
namespace genie{class  ReinSehgalSPPXSec;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/SPPXSecWithCache.h")))  SPPXSecWithCache;}
namespace genie{namespace utils{namespace gsl{class  __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/SPPXSecWithCache.h")))  d3XSecMK_dWQ2CosTheta_E;}}}
namespace genie{class  SPPXSec;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhResXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::BSKLNBaseRESPXSec2014

\brief    Base class for the Berger-Sehgal and the Kuzmin, Lyubushkin, Naumov
          resonance models, implemented as modifications to the Rein-Sehgal model.

\ref      Berger, Sehgal Phys. Rev. D76, 113004 (2007) \n
          Kuzmin, Lyubushkin, Naumov Mod. Phys. Lett. A19 (2004) 2815 \n

          D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances

          and Single Pion Production, Ann.Phys.133, 79 (1981) \n

          
          K. M. Graczyk* and J. T. Sobczyk,PHYSICAL REVIEW D 77, 053001 (2008) for vector and axial current calculation \n

          Modifications based on a MiniBooNE tune courtesy of J. Nowak, S.Dytman

\author   Steve Dytman
          University of Pittsburgh

          Jarek Nowak
          University of Lancaster

          Gabe Perdue
          Fermilab
          
          Igor Kakorin <kakorin@inr.ru>
          Joint Institute for Nuclear Research 
          

          Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Sep 15, 2015

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _BSKLN_BASE_RES_PXSEC_2014_H_
#define _BSKLN_BASE_RES_PXSEC_2014_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Physics/Resonance/XSection/FKR.h"

namespace genie {

  class RSHelicityAmplModelI;
  class XSecIntegratorI;

  class BSKLNBaseRESPXSec2014: public XSecAlgorithmI {

    public:
      virtual ~BSKLNBaseRESPXSec2014();

      // implement the XSecAlgorithmI interface
      double XSec         (const Interaction * i, KinePhaseSpace_t k) const;
      double Integral     (const Interaction * i) const;
      bool   ValidProcess (const Interaction * i) const;

      // overload the Algorithm::Configure() methods to load private data
      // members from configuration options
      void Configure(const Registry & config);
      void Configure(string config);

    protected:

      BSKLNBaseRESPXSec2014(string name);
      BSKLNBaseRESPXSec2014(string name, string config);

      void LoadConfig (void);

      mutable FKR fFKR;

      const RSHelicityAmplModelI * fHAmplModelCC;
      const RSHelicityAmplModelI * fHAmplModelNCp;
      const RSHelicityAmplModelI * fHAmplModelNCn;
      const RSHelicityAmplModelI * fHAmplModelEMp;
      const RSHelicityAmplModelI * fHAmplModelEMn;

      double fFermiConstant2 ;
      double fFineStructure2 ;

      // configuration data
      bool     fWghtBW;            ///< weight with resonance breit-wigner?
      bool     fNormBW;            ///< normalize resonance breit-wigner to 1?
      double   fZeta;              ///< FKR parameter Zeta
      double   fOmega;             ///< FKR parameter Omega
      double   fCa50;              ///< CA5_0
      double   fMa2;               ///< (axial mass)^2
      double   fMv2;               ///< (vector mass)^2
      double   fVud2;              ///< |Vud|^2(square of magnitude ud-element of CKM-matrix)
      bool     fUsingDisResJoin;   ///< use a DIS/RES joining scheme?
      double   fWcut;              ///< apply DIS/RES joining scheme < Wcut
      double   fN2ResMaxNWidths;   ///< limits allowed phase space for n=2 res
      double   fN0ResMaxNWidths;   ///< limits allowed phase space for n=0 res
      double   fGnResMaxNWidths;   ///< limits allowed phase space for other res
      string fKFTable;             ///< table of Fermi momentum (kF) constants for various nuclei
      bool fUseRFGParametrization; ///< use parametrization for fermi momentum insted of table?
      bool fUsePauliBlocking;      ///< account for Pauli blocking?

      double   fXSecScaleCC;       ///< external CC xsec scaling factor
      double   fXSecScaleNC;       ///< external NC xsec scaling factor
      double   fXSecScaleEM;       ///< external EM xsec scaling factor

      bool fKLN;
      bool fBRS;

      // Use tuned axial, vector form factors by MiniBooNE
      // Tuned to ANL BNL data
      bool fGAMiniBooNE;
      bool fGVMiniBooNE;

      // GV calculation coeff
      double fCv3;
      double fCv4;
      double fCv51;
      double fCv52;

      // Sarita-Schwinger prenscription parameters from PhysRevD.77.053001
      bool   fGASaritaSchwinger ; 
      bool   fGVSaritaSchwinger ; 
      double fcII ; 
      double fMb2 ; 

      const XSecIntegratorI * fXSecIntegrator;
  };

}       // genie namespace

#endif  // _BSKLN_BASE_RES_PXSEC_2014_H_
//____________________________________________________________________________
/*!

\class    genie::BergerSehgalRESPXSec2014

\brief    Computes the double differential cross section for resonance
          electro- or neutrino-production according to the Berger Sehgal model.

          The computed cross section is the d^2 xsec/ dQ^2 dW \n
          where \n
            \li \c Q^2 : momentum transfer ^ 2
            \li \c W   : invariant mass of the final state hadronic system

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      Berger, Sehgal Phys. Rev. D76, 113004 (2007)

          Modifications within original format of
	  D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

          Modifications based on a MiniBooNE tune courtesy of J. Nowak
          and S. Dytman.

\author   Steve Dytman
          University of Pittsburgh

          Jarek Nowak
          University of Lancaster

	        Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Sep 15, 2015

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _BERGER_SEHGAL_RES_PXSEC_2014_H_
#define _BERGER_SEHGAL_RES_PXSEC_2014_H_

#include "Physics/Resonance/XSection/BSKLNBaseRESPXSec2014.h"

namespace genie {

 class BergerSehgalRESPXSec2014: public BSKLNBaseRESPXSec2014
 {
   public:
     BergerSehgalRESPXSec2014();
     BergerSehgalRESPXSec2014(string config);
     virtual ~BergerSehgalRESPXSec2014();
 };

}       // genie namespace

#endif  // _BERGER_SEHGAL_RES_PXSEC_2014_H_
//____________________________________________________________________________
/*!

\class    genie::BostedChristyEMPXSec

\brief     Fit to inelastic cross sections for A(e,e')X
           valid for all W<3 GeV and all Q2<10 GeV2
          
\author   Igor Kakorin <kakorin@jinr.ru> Joint Institute for Nuclear Research
          based on fortran code provided on Peter Bosted's site: 
          https://userweb.jlab.org/~bosted/fits.html

\ref      1. M.E. Christy, P.E.Bosted, "Empirical fit to precision inclusive 
          electron-proton cross sections in the resonance region", PRC 81 (2010) 055213
          2. P.E.Bosted, M.E.Christy,  "Empirical fit to inelastic electron-deuteron 
          and electron-neutron resonance region transverse cross", PRC 77 (2008) 065206
          3. C. Maieron, T. W. Donnelly, and I. Sick, "Extended superscaling of electron 
          scattering from nuclei", PRC 65 (2001) 025502 


\created  April 3, 2021

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________
#ifndef _BOOSTED_CHRISTY_EM_PXSEC_H_
#define _BOOSTED_CHRISTY_EM_PXSEC_H_

#include <array>
#include <map>

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/NuclearState/FermiMomentumTable.h"

class XSecIntegratorI;

namespace genie {

class BostedChristyEMPXSec : public XSecAlgorithmI {

public:
  BostedChristyEMPXSec();
  BostedChristyEMPXSec(string config);
  virtual ~BostedChristyEMPXSec();

  // implement the XSecAlgorithmI interface
  double XSec           (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral       (const Interaction * i) const;
  bool   ValidProcess   (const Interaction * i) const;
  bool   ValidKinematics(const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig (void);
  double sigmaR(int, double, double, bool) const;
  double sigmaNR(int, double, double, bool) const;
  void BranchingRatios(int, double&, double&) const;
  void FermiSmearingD(double, double, double&, double&, double&, double&, bool) const;
  void FermiSmearingA(double, double, double, double, double&, double&, double&, double&) const;
  double FitEMC(double, int) const;
  double MEC2009(int, double, double) const;

  bool   fUseMEC;                                      ///< account for MEC contribution?
  double fPM;                                          ///< mass parameter
  double fMP;                                          ///< mass parameter
  double fAM;                                          ///< mass parameter
  double fMD;                                          ///< deuterium mass
  double fMpi0;                                        ///< pion mass
  double fMeta;                                        ///< eta mass
  double fWmin;                                        ///< minimal W
  double fWmax;                                        ///< maximal W
  double fQ2min;                                       ///< minimal Q2
  double fQ2max;                                       ///< maximal Q2
  
  std::array<std::array<double, 3>, 7> fBRp;           ///< branching ratios of resonances for proton fit
  std::array<std::array<double, 3>, 7> fBRD;           ///< branching ratios of resonances for deterium fit
  
  std::array<int, 7> fAngRes;                          ///< resonance angular momentum
  
  std::array<double, 7> fMassRes;                      ///< resonance mass
  
  std::array<double, 7> fWidthRes;                     ///< resonance width
  
  std::array<std::array<double, 4>, 7> fRescoefTp;     ///< tunable parameters from Ref.1, Table III for resonance \sigma_T
  std::array<std::array<double, 4>, 7> fRescoefTD;     ///< tunable parameters from Ref.2, Table III for resonance \sigma_T
  std::array<std::array<double, 3>, 7> fRescoefL;      ///< tunable parameters from Ref.1, Table III for resonance \sigma_L
  
  std::array<std::array<double, 5>, 2> fNRcoefTp;      ///< tunable parameters from Ref.1, Table III for nonres bkg \sigma_T
  std::array<std::array<double, 5>, 2> fNRcoefTD;      ///< tunable parameters from Ref.1, Table IV  for nonres bkg \sigma_T
  std::array<double, 6>  fNRcoefL;                     ///< tunable parameters from Ref.1, Table III for nonres bkg \sigma_L
  std::array<double, 6>  fMECcoef;                     ///< tunable parameters for Eqs.(20), (21) Ref.2
  std::array<double, 8>  fMEC2009coef;                 ///< tunable parameters for MEC2009 function
  std::array<double, 13> fAfitcoef;                    ///< tunable parameters for nuclei fit
  
  std::array<double, 9> fEMCalpha;                    ///< tunable parameters for EMC fit
  std::array<double, 3> fEMCc;                        ///< tunable parameters for EMC fit
  
  map<int, double> fMEC2009p18;                            
  map<int, double> fKFTable; 
  map<int, double> fNucRmvE;

  const XSecIntegratorI * fXSecIntegrator;
};

}       // genie namespace




#endif  // _BOOSTED_CHRISTY_EM_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::FKR

\brief    Simple struct-like class holding the Feynmann-Kislinger-Ravndall
          (FKR) baryon excitation model parameters.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _FKR_H_
#define _FKR_H_

#include <iostream>

using std::ostream;

namespace genie {

class FKR;
ostream & operator<< (ostream & stream, const FKR & parameters);

class FKR {

public:

  friend ostream & operator<< (ostream & stream, const FKR & parameters);

  double Lamda;
  double Tv;
  double Rv;
  double S;
  double Ta;
  double Ra;
  double B;
  double C;
  double R;
  double T;
  double Tplus;
  double Tminus;
  double Rplus;
  double Rminus;

  void Reset (void);
  void Print (ostream & stream) const;

  FKR();
  ~FKR();
};

}        // genie namespace

#endif   // _FKR_H_
//____________________________________________________________________________
/*!

\class    genie::GiBUURESFormFactor

\brief    Singleton to load and serve data tables provided by the GiBUU group

\ref      http://gibuu.physik.uni-giessen.de/GiBUU
          Specific references for each piece of data included in given below.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 30, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _GIBUU_RES_FORM_FACTOR_H_
#define _GIBUU_RES_FORM_FACTOR_H_

#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/Interaction/InteractionType.h"

namespace genie {

class Spline;

class GiBUURESFormFactor
{
public:

  class FormFactors;

  // access GiBUURESFormFactor singleton instance
  static GiBUURESFormFactor * Instance (void);

  // access form factor data
  const FormFactors & FF(void) const;

  //
  // Resonance form factors.
  // Details given in Phys. Rev. C 79, 034601 (2009).
  //
  class FormFactors {

   public:

     FormFactors();
    ~FormFactors();

     // the following is non-zero for I=1/2 (N) resonances
     double C3V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double C4V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double C5V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double C6V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double C3A (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double C4A (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double C5A (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double C6A (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;

     // the following is non-zero for I=3/2 (Delta) resonances
     double F1V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double F2V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double FA  (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double FP  (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;

     double Q2min (void) const { return fMinQ2; }
     double Q2max (void) const { return fMaxQ2; }

   private:

     static double fMinQ2; ///< min Q2 for which resonance f/f data are given
     static double fMaxQ2; ///< max Q2 for which resonance f/f data are given

     // The first array index is the resonance id.
     // Tina provided GiBUU form factor data for 13 resonances given below along with
     // the corresponding GENIE resonance ids
     //                 GENIE Resonance_t   as integer
     //   P33(1232) ->  kP33_1232            0
     //   S11(1535) ->  kS11_1535            1
     //   D13(1520) ->  kD13_1520            2
     //   S11(1650) ->  kS11_1650            3
     //   D15(1675) ->  kD15_1675            5
     //   S31(1620) ->  kS31_1620            6
     //   D33(1700) ->  kD33_1700            7
     //   P11(1440) ->  kP11_1440            8
     //   P13(1720) ->  kP13_1720           10
     //   F15(1680) ->  kF15_1680           11
     //   P31(1910) ->  kP31_1910           12
     //   F35(1905) ->  kF35_1905           14
     //   F37(1950) ->  kF37_1950           15
     // The remaining 3 array indices are:
     //     0  1  2  0 1    0   1  2  3   4   5   6   7   8   9  10  11
     //   [CC,NC,EM][n,p][F1V,F2V,FA,FP,C3V,C4V,C5V,C6V,C3A,C4A,C5A,C6A]
     //                  |-------------|                                  for I=1/2 resonances
     //                                |-------------------------------|  for I=3/2 resonances

     static const int kNRes    = 18;
     static const int kNCurr   =  3;
     static const int kNHitNuc =  2;
     static const int kNFFRes  = 12;

     //! actual form factor data = f(Q2)
     Spline * fFFRes [kNRes][kNCurr][kNHitNuc][kNFFRes];

     //! func to retrieve interpolated form factor values
     double FFRes (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it, int ffid) const;

     //! load all form factor data tables
     void LoadTables(void);

     friend class GiBUURESFormFactor;

  }; // FormFactors nested class

private:
  GiBUURESFormFactor();
  GiBUURESFormFactor(const GiBUURESFormFactor & gibuu_data);
 ~GiBUURESFormFactor();

  // load all data tables
  void LoadTables(void);

  // singleton 'self'
  static GiBUURESFormFactor * fInstance;

  // form factor data
  FormFactors * fFormFactors;

  // singleton cleaner
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (GiBUURESFormFactor::fInstance !=0) {
            delete GiBUURESFormFactor::fInstance;
            GiBUURESFormFactor::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;

}; // GiBUURESFormFactor class

}      // genie namespace

#endif // _GIBUU_RES_FORM_FACTOR_H_
//____________________________________________________________________________
/*!

\class    genie::KuzminLyubushkinNaumovRESPXSec2014

\brief    Computes the double differential cross section for resonance
          electro- or neutrino-production according to the Berger Sehgal model.

          The computed cross section is the d^2 xsec/ dQ^2 dW \n
          where \n
            \li \c Q^2 : momentum transfer ^ 2
            \li \c W   : invariant mass of the final state hadronic system

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      Kuzmin, Lyubushkin, Naumov Mod. Phys. Lett. A19 (2004) 2815

          Modifications within original format of
          D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

          Modifications based on a MiniBooNE tune courtesy of J. Nowak
          and S. Dytman.
\author   Steve Dytman
          University of Pittsburgh

          Jarek Nowak
          University of Lancaster

	        Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Sep 15, 2015

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _KUZMIN_LYUBUSHKIN_NAUMOV_RES_PXSEC_2014_H_
#define _KUZMIN_LYUBUSHKIN_NAUMOV_RES_PXSEC_2014_H_

#include "Physics/Resonance/XSection/BSKLNBaseRESPXSec2014.h"

namespace genie {

 class KuzminLyubushkinNaumovRESPXSec2014: public BSKLNBaseRESPXSec2014
 {
   public:
     KuzminLyubushkinNaumovRESPXSec2014();
     KuzminLyubushkinNaumovRESPXSec2014(string config);
     virtual ~KuzminLyubushkinNaumovRESPXSec2014();
 };

}       // genie namespace

#endif  // _KUZMIN_LYUBUSHKIN_NAUMOV_RES_PXSEC_2014_H_
//____________________________________________________________________________
/*!

\class    genie::MKSPPPXSec2020

\brief    
Class calculate differental cross-sections  
\f[
\frac{d^4\sigma}{dQ^2dWd\cos\theta_\pi d\phi_\pi}
\f]
or
\f[
\frac{d^3\sigma}{dQ^2dWd\cos\theta_\pi}
\f]
for specific neutrino energy (in lab frame), where:

Variable             | Description
---------------------|-----------------------------------------------------
\f$W\f$              | Invariant mass
\f$Q^2\f$            | Sqaured 4-momentum transfer
\f$\cos\theta_\pi\f$ | Cosine of pion polar angle in \f$\pi\f$N rest frame
\f$\phi_\pi\f$       | Pion azimuthal angle in \f$\pi\f$N rest frame
for the following channels:
-#  \f$\nu            + p \to \ell^-          + p + \pi^+\f$
-#  \f$\nu            + n \to \ell^-          + p + \pi^0\f$
-#  \f$\nu            + n \to \ell^-          + n + \pi^+\f$
-#  \f$\overline{\nu} + n \to \ell^+          + n + \pi^-\f$
-#  \f$\overline{\nu} + p \to \ell^+          + n + \pi^0\f$
-#  \f$\overline{\nu} + p \to \ell^+          + p + \pi^-\f$
-#  \f$\nu            + p \to \nu             + p + \pi^0\f$
-#  \f$\nu            + p \to \nu             + n + \pi^+\f$
-#  \f$\nu            + n \to \nu             + n + \pi^0\f$
-#  \f$\nu            + n \to \nu             + p + \pi^-\f$
-#  \f$\overline{\nu} + p \to \overline{\nu}  + p + \pi^0\f$
-#  \f$\overline{\nu} + p \to \overline{\nu}  + n + \pi^+\f$
-#  \f$\overline{\nu} + n \to \overline{\nu}  + n + \pi^0\f$
-#  \f$\overline{\nu} + n \to \overline{\nu}  + p + \pi^-\f$
                                                          
\ref      
          1.  Kabirnezhad M., Phys.Rev.D 97 (2018) 013002 (Erratim: arXiv:1711.02403)
          2.  Kabirnezhad M., Ph. D. Thesis (https://www.ncbj.gov.pl/sites/default/files/m.kabirnezhad_thesis_0.pdf , 
                                        https://www.ncbj.gov.pl/sites/default/files/m.kabirnezhad-thesis_final_0.pdf) 
          3.  Rein D., Sehgal L., Ann. of Phys. 133 (1981) 79-153
          4.  Rein D., Z.Phys.C 35 (1987) 43-64
          5.  Adler S.L., Ann. Phys. 50 (1968) 189
          6.  Graczyk K., Sobczyk J., Phys.Rev.D 77 (2008) 053001 [Erratum: ibid.D 79 (2009) 079903]
          7.  Jacob M., Wick G.C., Ann. of Phys. 7 (1959) 404-428
          8.  Hernandez E., Nieves J., Valverde M., Phys.Rev.D 76 (2007) 033005
          9.  Adler S.L., Nussinov S., Paschos E.A., Phys. Rev. D 9 (1974) 2125-2143 [Erratum: ibid D 10 (1974) 1669]
          10. Paschos E.A., Yu J.Y., Sakuda M., Phys. Rev. D 69 (2004) 014013 [arXiv: hep-ph/0308130] 
          11. Yu J.Y., "Neutrino interactions and  nuclear  effects in oscillation experiments and the 
              nonperturbative dispersive  sector in strong (quasi-)abelian  fields", Ph. D.Thesis, Dortmund U., Dortmund, 2002 (unpublished)
          12. Kakorin I., Kuzmin K., Naumov V. "Report on implementation of the MK-model for resonance single-pion production into GENIE"
                                               (https://genie-docdb.pp.rl.ac.uk/cgi-bin/private/ShowDocument?docid=181, 
                                                http://theor.jinr.ru/NeutrinoOscillations/Papers/Report_MK_implementation_GENIE.pdf)              

\authors  Igor Kakorin <kakorin@jinr.ru>, Joint Institute for Nuclear Research \n
          Vadim Naumov <vnaumov@theor.jinr.ru>,  Joint Institute for Nuclear Research \n
          adapted from code provided by \n
          Minoo Kabirnezhad <minoo.kabirnezhad@physics.ox.ac.uk>
          University of Oxford, Department of Physics \n
          based on code of \n
          Costas Andreopoulos <c.andreopoulos@cern.ch>
          University of Liverpool

\created  Nov 12, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MK_SPP_PXSEC2020_H_
#define _MK_SPP_PXSEC2020_H_

#include <vector>
#include <complex>
#include <functional>
#include <algorithm>
#include <type_traits>

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/ParticleData/BaryonResList.h"
#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"
#include "Physics/Resonance/XSection/RSHelicityAmpl.h"
#include "Physics/Resonance/XSection/FKR.h"
#include "Physics/QuasiElastic/XSection/ELFormFactorsModelI.h"
#include "Physics/QuasiElastic/XSection/QELFormFactorsModelI.h"
#include "Physics/QuasiElastic/XSection/ELFormFactors.h"
#include "Physics/QuasiElastic/XSection/QELFormFactors.h"

namespace genie {

  
  class XSecIntegratorI;

  class MKSPPPXSec2020: public XSecAlgorithmI {

    
    public:
      MKSPPPXSec2020();
      MKSPPPXSec2020(string config);
      virtual ~MKSPPPXSec2020();

      // implement the XSecAlgorithmI interface 
      double XSec         (const Interaction * i, KinePhaseSpace_t k) const;
      double Integral     (const Interaction * i) const;
      bool   ValidProcess (const Interaction * i) const;
      bool   ValidKinematics(const Interaction * interaction) const;

      // overload the Algorithm::Configure() methods to load private data
      // members from configuration options
      void Configure(const Registry & config);
      void Configure(string config);

    private:
      
      // Helicities \~{F}^{\lambda_k}_{\lambda_2 \lambda_1} or \~{G}^{\lambda_k}_{\lambda_2 \lambda_1} 
      // Definition are given in eq. 16 from ref. 1
      // The structure:
      // Number of resonance
      // F(Vector) or G(Axial)
      // \lambda_k (boson polarization eL(M), eR(P), e-(OM), e+(OP))
      // \lambda_2 (final nucleon polarization -1/2(M), +1/2(P)
      // \lambda_1 (initial nucleon polarization -1/2(M), +1/2(P)
      enum Current { VECTOR, AXIAL };
      enum BosonPolarization   { LEFT, RIGHT, MINUS0, PLUS0 };
      enum NucleonPolarization { MINUS, PLUS };
      
      //#ifndef DOXYGEN_SHOULD_SKIP_THIS
      template < typename C, C beginVal, C endVal>
      class Iterator {
        typedef typename std::underlying_type<C>::type val_t;
        int val;
      public:
        Iterator(const C & f) : val(static_cast<val_t>(f)) {}
        Iterator() : val(static_cast<val_t>(beginVal)) {}
        Iterator operator++() {
          ++val;
          return *this;
        }
        C operator*() { return static_cast<C>(val); }
        Iterator begin() { return *this; } //default ctor is good
        Iterator end() {
            static const Iterator endIter=++Iterator(endVal); // cache it
            return endIter;
        }
        bool operator!=(const Iterator& i) { return val != i.val; }
      };
      
      using  CurrentIterator             = Iterator<Current,             Current::VECTOR,            Current::AXIAL>            ;
      using  BosonPolarizationIterator   = Iterator<BosonPolarization,   BosonPolarization::LEFT,    BosonPolarization::PLUS0>   ;
      using  NucleonPolarizationIterator = Iterator<NucleonPolarization, NucleonPolarization::MINUS, NucleonPolarization::PLUS> ;
       
      template<typename T> 
      struct is_complex : std::false_type {};

      template<typename T> 
      struct is_complex<std::complex<T>> : std::true_type {};

      template<bool C, typename T = void>
      using enable_if_t = typename std::enable_if<C, T>::type;
      
      template <typename T>
      class HelicityBkgAmp {
              
        public:

          HelicityBkgAmp() : array(32) {}
          HelicityBkgAmp(const HelicityBkgAmp& ha)
          {
            array = ha.array;
          }
          ~HelicityBkgAmp(){}
          T& operator() (Current hatype, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1)
          {
            int indx = 2*(2*(4*hatype+lambda_k)+lambda_2)+lambda_1;
            return array[indx];
          }
          template<typename S = T, enable_if_t<is_complex<S>{}>* = nullptr>
          auto Re(Current hatype, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> typename S::value_type
          {
            return this->operator()(hatype, lambda_k, lambda_2, lambda_1).real();
          }
          template<typename S = T, enable_if_t<is_complex<S>{}>* = nullptr>
          auto Im(Current hatype, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> typename S::value_type
          {
            return this->operator()(hatype, lambda_k, lambda_2, lambda_1).imag();
          }
          template<typename S = T, enable_if_t<!is_complex<S>{}>* = nullptr>
          auto Re(Current hatype, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> S
          {
            return this->operator()(hatype, lambda_k, lambda_2, lambda_1);
          }
          template<typename S = T, enable_if_t<!is_complex<S>{}>* = nullptr>
          auto Im(Current hatype, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> S
          {
            return 0;
          }
          HelicityBkgAmp& operator*= (double factor)
          {
            std::transform(array.begin(), array.end(), array.begin(), std::bind(std::multiplies<T>(), std::placeholders::_1, factor));
            return *this;
          }
          
          HelicityBkgAmp& operator/= (double factor)
          {
            std::transform(array.begin(), array.end(), array.begin(), std::bind(std::multiplies<T>(), std::placeholders::_1, 1./factor));
            return *this;
          }
    
          HelicityBkgAmp& operator+= (const HelicityBkgAmp& ha)
          {
            std::transform(ha.array.begin(), ha.array.end(), array.begin(), array.begin(), std::bind(std::plus<T>(), std::placeholders::_1, std::placeholders::_2));
            return *this;
          }
          
          HelicityBkgAmp& operator-= (const HelicityBkgAmp& ha)
          {
            std::transform(ha.array.begin(), ha.array.end(), array.begin(), array.begin(), std::bind(std::minus<T>(), std::placeholders::_2, std::placeholders::_1));
            return *this;
          }
    
          HelicityBkgAmp& operator= (const HelicityBkgAmp& ha)
          {
            if (this != &ha)
              array = ha.array;
            return *this;
          }
          
          friend HelicityBkgAmp operator+(HelicityBkgAmp lhs, const HelicityBkgAmp& rhs)
          {
             lhs += rhs;
             return lhs;
          }
          
          friend HelicityBkgAmp operator-(HelicityBkgAmp lhs, const HelicityBkgAmp& rhs)
          {
             lhs -= rhs;
             return lhs;
          }
          
          friend HelicityBkgAmp operator*(HelicityBkgAmp ha, double factor)
          {
             ha *= factor;
             return ha;
          }
          
          friend HelicityBkgAmp operator*(double factor, HelicityBkgAmp ha)
          {
             ha *= factor;
             return ha;
          }
          
          friend HelicityBkgAmp operator/(HelicityBkgAmp ha, double factor)
          {
             ha /= factor;
             return ha;
          }
          
          friend HelicityBkgAmp operator/(double factor, HelicityBkgAmp ha)
          {
             ha /= factor;
             return ha;
          }
          
        private:
          std::vector<T> array; //2*4*2*2; 
      
      };
      
      template <typename T>
      class HelicityAmpVminusARes {
      
        public:

          HelicityAmpVminusARes() : array(1)
          {
            array.reserve(288);
          }
          ~HelicityAmpVminusARes(){}
          T& operator() (Resonance_t res, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1)
          {
            if (res == kNoResonance)
            {
              // meaningless to return anything
              gAbortingInErr = true;
              LOG("MKSPPPXSec2020", pFATAL) << "Unknown resonance " << res;
              exit(1);
            }
            int indx = 2*(2*(4*res+lambda_k)+lambda_2)+lambda_1;
            return array[indx];
          }
          
          template<typename S = T, enable_if_t<is_complex<S>{}>* = nullptr>
          auto Re(Resonance_t res, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> typename S::value_type
          {
            return this->operator()(res, lambda_k, lambda_2, lambda_1).real();
          }
          template<typename S = T, enable_if_t<is_complex<S>{}>* = nullptr>
          auto Im(Resonance_t res, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> typename S::value_type
          {
            return this->operator()(res, lambda_k, lambda_2, lambda_1).imag();
          }
          template<typename S = T, enable_if_t<!is_complex<S>{}>* = nullptr>
          auto Re(Resonance_t res, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> S
          {
            return this->operator()(res, lambda_k, lambda_2, lambda_1);
          }
          template<typename S = T, enable_if_t<!is_complex<S>{}>* = nullptr>
          auto Im(Resonance_t res, BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> S
          {
            return 0;
          }
          
        private:
          std::vector<T> array; //nres*4*2*2, nres=18
      
      };
      
      template <typename T>
      class SumHelicityAmpVminusARes {
      
        public:

          SumHelicityAmpVminusARes() : array(16){}
          ~SumHelicityAmpVminusARes(){}
          T& operator() (BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1)
          {
            int indx = 2*(2*lambda_k+lambda_2)+lambda_1;
            return array[indx];
          }
          
          template<typename S = T, enable_if_t<is_complex<S>{}>* = nullptr>
          auto Re(BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> typename S::value_type
          {
            return this->operator()(lambda_k, lambda_2, lambda_1).real();
          }
          template<typename S = T, enable_if_t<is_complex<S>{}>* = nullptr>
          auto Im(BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> typename S::value_type
          {
            return this->operator()(lambda_k, lambda_2, lambda_1).imag();
          }
          template<typename S = T, enable_if_t<!is_complex<S>{}>* = nullptr>
          auto Re(BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> S
          {
            return this->operator()(lambda_k, lambda_2, lambda_1);
          }
          template<typename S = T, enable_if_t<!is_complex<S>{}>* = nullptr>
          auto Im(BosonPolarization lambda_k, NucleonPolarization lambda_2, NucleonPolarization lambda_1) -> S
          {
            return 0;
          }
          
        private:
          std::vector<T> array; //4*2*2
      
      };
        
      //#endif
      int Lambda (NucleonPolarization l) const;
      int Lambda (BosonPolarization l) const;
      int PhaseFactor(BosonPolarization lk, NucleonPolarization l1, NucleonPolarization l2) const;
      
      void LoadConfig (void);
      mutable FKR fFKR;
      const RSHelicityAmplModelI * fHAmplModelCC;
      const RSHelicityAmplModelI * fHAmplModelNCp;
      const RSHelicityAmplModelI * fHAmplModelNCn;


      // configuration data
      double   fFermiConstant ;
      double   fCA50;              ///< FKR parameter Zeta
      double   fOmega;             ///< FKR parameter Omega
      double   fMa2;               ///< (axial mass)^2
      double   fMv2;               ///< (vector mass)^2
      double fCv3;                 ///< GV calculation coeffs
      double fCv4;
      double fCv51;
      double fCv52;
      double   fSin2Wein;          ///< sin^2(Weingberg angle)
      double   fVud;               ///< |Vud| (magnitude ud-element of CKM-matrix)
      double   fXSecScaleCC;       ///< External CC xsec scaling factor
      double   fXSecScaleNC;       ///< External NC xsec scaling factor
      const ELFormFactorsModelI  * fElFFModel;          ///< Elastic form facors model for background contribution
      const QELFormFactorsModelI * fFormFactorsModel;   ///< Quasielastic form facors model for background contribution
      const QELFormFactorsModelI * fEMFormFactorsModel; ///< Electromagnetic form factors model for background contribution
      
      string fKFTable;             ///< Table of Fermi momentum (kF) constants for various nuclei
      bool fUseRFGParametrization; ///< Use parametrization for fermi momentum insted of table?
      bool fUsePauliBlocking;      ///< Account for Pauli blocking?

      mutable QELFormFactors  fFormFactors;      ///<  Quasielastic form facors for background contribution
      mutable QELFormFactors  fEMFormFactors;    ///<  Electromagnetic form facors for background contribution
      double  f_pi;                              ///<  Constant for pion-nucleon interaction
      double  FA0;                               ///<  Axial coupling (value of axial form factor at Q2=0)
      double  Frho0;                             ///<  Value of form factor F_rho at t=0 
      /// Parameters for vector virtual form factor
      /// for background contribution, which equal to:  
      /// 1,                                              W<VWmin   
      /// V3*W^3+V2*W^2+V1*W+V0                     VWmin<W<VWmax
      /// 0                                               W>VWmax
      double fBkgVWmin;
      double fBkgVWmax; 
      double fBkgV3;  
      double fBkgV2;   
      double fBkgV1;   
      double fBkgV0;   
      double fRho770Mass;                        ///< Mass of rho(770) meson
      double fWmax;                              ///< The value above which the partial cross section is set to zero (if negative then not appliciable)
      
      bool fUseAuthorCode;                       ///< Use author code?
      
      const XSecIntegratorI * fXSecIntegrator;
      
      BaryonResList  fResList;
                 
  };
  
  
}       // genie namespace

#endif  // _MK_SPP_PXSEC2020_H_
//____________________________________________________________________________
/*!

\class    genie::P33PaschosLalakulichPXSec

\brief    Double differential resonance cross section for P33 according to the
          Paschos, Lalakulich model.

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      O.Lalakulich and E.A.Paschos, Resonance Production by Neutrinos:
          I. J=3/2 Resonances, hep-ph/0501109

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

          based on code written by the model authors (Olga Lalakulich).

\created  February 22, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _P33_PASCHOS_LALAKULICH_PARTIAL_XSEC_H_
#define _P33_PASCHOS_LALAKULICH_PARTIAL_XSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class P33PaschosLalakulichPXSec : public XSecAlgorithmI {

public:
  P33PaschosLalakulichPXSec();
  P33PaschosLalakulichPXSec(string name);
  virtual ~P33PaschosLalakulichPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);

  double Pauli   (double Q2, double W, double MN) const; ///< Pauli suppression for D2
  double Nu      (double Q2, double W, double MN) const; ///< kinematic variables
  double NuStar  (double Q2, double W, double MN) const; ///< ...
  double PPiStar (double W, double MN) const; ///< ...

  const XSecIntegratorI *   fXSecIntegrator;

  double fFermiConstant2 ;
  double fMa;
  double fMv;
  double fCos28c;
  
  bool   fTurnOnPauliCorrection;
};

}       // genie namespace
#endif  // _P33_PASCHOS_LALAKULICH_PARTIAL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::RESXSec

\brief    Computes the RES Cross Section.\n
          Is a concrete implementation of the XSecIntegratorI interface.\n

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 04, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RES_XSEC_H_
#define _RES_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class RESXSec : public XSecIntegratorI {

public:
  RESXSec();
  RESXSec(string param_set);
  virtual ~RESXSec();

  //! XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  //! Overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);
};

}       // genie namespace
#endif  // _RES_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmpl

\brief    A class holding the Rein-Sehgal's helicity amplitudes.

          This class is using the \b Strategy Pattern. \n
          It can accept requests to calculate itself, for a given interaction,
          that it then delegates to the algorithmic object, implementing the
          RSHelicityAmplModelI interface, that it finds attached to itself.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RS_HELICITY_AMPL_H_
#define _RS_HELICITY_AMPL_H_

#include <iostream>

#include <TMath.h>

#include "Framework/Interaction/Interaction.h"
#include "Physics/Resonance/XSection/FKR.h"

using std::ostream;

namespace genie {

class RSHelicityAmpl;
ostream & operator<< (ostream & stream, const RSHelicityAmpl & hamp);

class RSHelicityAmpl {

friend class RSHelicityAmplModelCC;
friend class RSHelicityAmplModelNCp;
friend class RSHelicityAmplModelNCn;
friend class RSHelicityAmplModelEMp;
friend class RSHelicityAmplModelEMn;

public:

  RSHelicityAmpl();
  RSHelicityAmpl(const RSHelicityAmpl & hamp);
  ~RSHelicityAmpl() { }

  //! return helicity amplitude
  double AmpMinus1 (void) const  { return fMinus1; } /* f(-1) */
  double AmpPlus1  (void) const  { return fPlus1;  } /* f(+1) */
  double AmpMinus3 (void) const  { return fMinus3; } /* f(-3) */
  double AmpPlus3  (void) const  { return fPlus3;  } /* f(+3) */
  double Amp0Minus (void) const  { return f0Minus; } /* f(0-) */
  double Amp0Plus  (void) const  { return f0Plus;  } /* f(0+) */

  //! return |helicity amplitude|^2
  double Amp2Minus1 (void) const { return TMath::Power(fMinus1, 2.); } /* |f(-1)|^2 */
  double Amp2Plus1  (void) const { return TMath::Power(fPlus1,  2.); } /* |f(+1)|^2 */
  double Amp2Minus3 (void) const { return TMath::Power(fMinus3, 2.); } /* |f(-3)|^2 */
  double Amp2Plus3  (void) const { return TMath::Power(fPlus3,  2.); } /* |f(+3)|^2 */
  double Amp20Minus (void) const { return TMath::Power(f0Minus, 2.); } /* |f(0-)|^2 */
  double Amp20Plus  (void) const { return TMath::Power(f0Plus,  2.); } /* |f(0+)|^2 */

  friend ostream & operator<< (ostream & stream, const RSHelicityAmpl & hamp);

  void Print(ostream & stream) const;

private:

  void   Init(void);

  double fMinus1;
  double fPlus1;
  double fMinus3;
  double fPlus3;
  double f0Minus;
  double f0Plus;
};

}        // genie namespace

#endif   // _RS_HELICITY_AMPL_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelCC

\brief    The Helicity Amplitudes, for all baryon resonances, for CC neutrino
          interactions on free nucleons, as computed in the Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_CC_H_
#define _HELICITY_AMPL_MODEL_CC_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelCC : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelCC();
  RSHelicityAmplModelCC(string config);
  virtual ~RSHelicityAmplModelCC();

  // RSHelicityAmplModelI interface implementation
 const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

private:
  mutable RSHelicityAmpl fAmpl;
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_CC_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelEMn

\brief    The Helicity Amplitudes, for all baryon resonances, for Electro-
          Magnetic (EM) interactions on free neutrons, as computed in the
          Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 30, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_EM_N_H_
#define _HELICITY_AMPL_MODEL_EM_N_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelEMn : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelEMn();
  RSHelicityAmplModelEMn(string config);
  virtual ~RSHelicityAmplModelEMn();

  // RSHelicityAmplModelI interface implementation
  const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

private:
  mutable RSHelicityAmpl fAmpl;
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_EM_N_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelEMp

\brief    The Helicity Amplitudes, for all baryon resonances, for Electro-
          Magnetic (EM) interactions on free protons, as computed in the
          Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 30, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_EM_P_H_
#define _HELICITY_AMPL_MODEL_EM_P_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelEMp : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelEMp();
  RSHelicityAmplModelEMp(string config);
  virtual ~RSHelicityAmplModelEMp();

  // RSHelicityAmplModelI interface implementation
  const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

private:
  mutable RSHelicityAmpl fAmpl;
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_EM_N_H_
//____________________________________________________________________________
/*!
\class    genie::RSHelicityAmplModelI

\brief    Pure abstract base class. Defines the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 10, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_HELICITY_AMPL_MODEL_I_H_
#define _REIN_SEHGAL_HELICITY_AMPL_MODEL_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Physics/Resonance/XSection/FKR.h"
#include "Physics/Resonance/XSection/RSHelicityAmpl.h"

namespace genie {

class RSHelicityAmplModelI : public Algorithm
{
public:
  virtual ~RSHelicityAmplModelI();

  // define the RSHelicityAmplModelI interface
  virtual const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const = 0;

protected:
  RSHelicityAmplModelI();
  RSHelicityAmplModelI(string name);
  RSHelicityAmplModelI(string name, string config);
};

}        // namespace

#endif   // _REIN_SEHGAL_HELICITY_AMPL_MODEL_I_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelNCn

\brief    The Helicity Amplitudes, for all baryon resonances, for NC neutrino
          interactions on free neutrons, as computed in the Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_NC_N_H_
#define _HELICITY_AMPL_MODEL_NC_N_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelNCn : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelNCn();
  RSHelicityAmplModelNCn(string config);
  virtual ~RSHelicityAmplModelNCn();

  // RSHelicityAmplModelI interface implementation
  const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);

  mutable RSHelicityAmpl fAmpl;
  double fSin28w;
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_NC_N_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelNCp

\brief    The Helicity Amplitudes, for all baryon resonances, for NC neutrino
          interactions on free protons, as computed in the Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_NC_P_H_
#define _HELICITY_AMPL_MODEL_NC_P_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelNCp : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelNCp();
  RSHelicityAmplModelNCp(string config);
  virtual ~RSHelicityAmplModelNCp();

  // RSHelicityAmplModelI interface implementation
  const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);

  mutable RSHelicityAmpl fAmpl;

  double fSin28w;
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_NC_P_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESPXSec

\brief    Computes the double differential cross section for resonance
          electro- or neutrino-production according to the Rein-Sehgal model.

          The computed cross section is the d^2 xsec/ dQ^2 dW \n

          where \n
            \li \c Q^2 : momentum transfer ^ 2
            \li \c W   : invariant mass of the final state hadronic system

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 05, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_PXSEC_H_
#define _REIN_SEHGAL_RES_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Physics/Resonance/XSection/FKR.h"

namespace genie {

class RSHelicityAmplModelI;
class Spline;
class XSecIntegratorI;

class ReinSehgalRESPXSec : public XSecAlgorithmI {

public:
  ReinSehgalRESPXSec();
  ReinSehgalRESPXSec(string config);
  virtual ~ReinSehgalRESPXSec();

  // implement the XSecAlgorithmI interface
  double XSec         (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral     (const Interaction * i) const;
  bool   ValidProcess (const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig (void);

  mutable FKR fFKR;

  const RSHelicityAmplModelI * fHAmplModelCC;
  const RSHelicityAmplModelI * fHAmplModelNCp;
  const RSHelicityAmplModelI * fHAmplModelNCn;
  const RSHelicityAmplModelI * fHAmplModelEMp;
  const RSHelicityAmplModelI * fHAmplModelEMn;

  // configuration data
  bool     fWghtBW;            ///< weight with resonance breit-wigner?
  bool     fNormBW;            ///< normalize resonance breit-wigner to 1?
  double   fZeta;              ///< FKR parameter Zeta
  double   fOmega;             ///< FKR parameter Omega
  double   fMa2;               ///< (axial mass)^2
  double   fMv2;               ///< (vector mass)^2
  double   fSin48w;            ///< sin^4(Weingberg angle)
  double   fVud2;              ///< |Vud|^2(square of magnitude ud-element of CKM-matrix)
  bool     fUsingDisResJoin;   ///< use a DIS/RES joining scheme?
  bool     fUsingNuTauScaling; ///< use NeuGEN nutau xsec reduction factors?
  double   fWcut;              ///< apply DIS/RES joining scheme < Wcut
  double   fN2ResMaxNWidths;   ///< limits allowed phase space for n=2 res
  double   fN0ResMaxNWidths;   ///< limits allowed phase space for n=0 res
  double   fGnResMaxNWidths;   ///< limits allowed phase space for other res
  string fKFTable;             ///< table of Fermi momentum (kF) constants for various nuclei
  bool fUseRFGParametrization; ///< use parametrization for fermi momentum insted of table?
  bool fUsePauliBlocking;      ///< account for Pauli blocking?
  Spline * fNuTauRdSpl;        ///< xsec reduction spline for nu_tau
  Spline * fNuTauBarRdSpl;     ///< xsec reduction spline for nu_tau_bar
  double   fXSecScaleCC;       ///< external CC xsec scaling factor
  double   fXSecScaleNC;       ///< external NC xsec scaling factor
  double   fXSecScaleEM;       ///< external EM xsec scaling factor

  const XSecIntegratorI * fXSecIntegrator;
};

}       // genie namespace

#endif  // _REIN_SEHGAL_RES_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESXSec

\brief    Computes the cross section for an exclusive 1pi reaction through
          resonance neutrinoproduction according to the Rein-Sehgal model.

          This algorithm produces in principle what you could also get from
          the genie::RESXSec algorithm (RES cross section integrator) by
          specifying the genie::ReinSehgalRESPXSec as the differential
          cross section model. However, ReinSehgalRESXSec offers a faster
          alternative. Before computing any RES cross section this algorithm
          computes and caches splines for resonance neutrino-production cross
          sections. This improves the speed of the GENIE spline construction
          phase if splines for multiple nuclear targets are to be computed.

          Is a concrete implementation of the XSecAlgorithmI interface.\n

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 09, 2006

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org                                    
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_XSEC_H_
#define _REIN_SEHGAL_RES_XSEC_H_

#include "Physics/Resonance/XSection/ReinSehgalRESXSecWithCache.h"

namespace genie {

class ReinSehgalRESXSec : public ReinSehgalRESXSecWithCache {

public:
  ReinSehgalRESXSec();
  ReinSehgalRESXSec(string param_set);
  virtual ~ReinSehgalRESXSec();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);

  bool fUsePauliBlocking;      ///< account for Pauli blocking?
};

}       // genie namespace
#endif  // _REIN_SEHGAL_RES_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESXSecFast

\brief    Computes the cross section for an exclusive 1pi reaction through
          resonance neutrinoproduction according to the Rein-Sehgal model.

          This algorithm produces in principle what you could also get from
          the genie::RESXSec algorithm (RES cross section integrator) by
          specifying the genie::ReinSehgalRESPXSec as the differential
          cross section model. However, ReinSehgalRESXSecFast offers a faster
          alternative. Before computing any RES cross section this algorithm
          computes and caches splines for resonance neutrino-production cross
          sections. This improves the speed of the GENIE spline construction
          phase if splines for multiple nuclear targets are to be computed.
          Also this class integrates cross sections faster, than
          ReinSehgalRESXSec because of integration area transformation.

          Is a concrete implementation of the XSecAlgorithmI interface.\n

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research

          based on code of
          Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 01, 2017

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org

*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_XSEC_FAST_H_
#define _REIN_SEHGAL_RES_XSEC_FAST_H_

#include "Physics/Resonance/XSection/ReinSehgalRESXSecWithCacheFast.h"

namespace genie {

class ReinSehgalRESXSecFast : public ReinSehgalRESXSecWithCacheFast {

public:
  ReinSehgalRESXSecFast();
  ReinSehgalRESXSecFast(string param_set);
  virtual ~ReinSehgalRESXSecFast();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);

  bool fUsePauliBlocking;      ///< account for Pauli blocking?
};

}       // genie namespace
#endif  // _REIN_SEHGAL_RES_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESXSecWithCache

\brief    An ABC that caches resonance neutrinoproduction cross sections on free
          nucleons according to the Rein-Sehgal model. This significantly speeds
          the cross section calculation for multiple nuclear targets (eg at the
          spline construction phase)

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 09, 2006

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_XSEC_WITH_CACHE_H_
#define _REIN_SEHGAL_RES_XSEC_WITH_CACHE_H_

#include "Framework/ParticleData/BaryonResList.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/Utils/Range1.h"
#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class ReinSehgalRESXSecWithCache : public XSecIntegratorI {

protected:
  ReinSehgalRESXSecWithCache();
  ReinSehgalRESXSecWithCache(string name);
  ReinSehgalRESXSecWithCache(string name, string config);
  virtual ~ReinSehgalRESXSecWithCache();

  // Don't implement the XSecIntegratorI interface - leave it for the concrete
  // subclasses. Just define utility methods and data
  void   CacheResExcitationXSec (const Interaction * interaction) const;
  string CacheBranchName(Resonance_t r, InteractionType_t it, int nu, int nuc) const;

  bool   fUsingDisResJoin;
  double fWcut;
  double fEMax;

  mutable const XSecAlgorithmI * fSingleResXSecModel;
  BaryonResList fResList;
};

}       // genie namespace
#endif  // _REIN_SEHGAL_RES_XSEC_WITH_CACHE_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESXSecWithCacheFast

\brief    Class that caches resonance neutrinoproduction cross sections on free
          nucleons according to the Rein-Sehgal model. This significantly speeds
          the cross section calculation for multiple nuclear targets (eg at the
          spline construction phase). This class integrates cross sections faster,
          than ReinSehgalRESXSecWithCache because of integration area transformation.

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research

          based on code of
          Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 01, 2017

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_XSEC_WITH_CACHE_FAST_H_
#define _REIN_SEHGAL_RES_XSEC_WITH_CACHE_FAST_H_

#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>

#include "Physics/XSectionIntegration/XSecIntegratorI.h"
#include "Framework/ParticleData//BaryonResList.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/Utils/Range1.h"
#include "Framework/Interaction/KPhaseSpace.h"

namespace genie {

class ReinSehgalRESXSecWithCacheFast : public XSecIntegratorI {

protected:
  ReinSehgalRESXSecWithCacheFast();
  ReinSehgalRESXSecWithCacheFast(string name);
  ReinSehgalRESXSecWithCacheFast(string name, string config);
  virtual ~ReinSehgalRESXSecWithCacheFast();

  // Don't implement the XSecIntegratorI interface - leave it for the concrete
  // subclasses. Just define utility methods and data
  void   CacheResExcitationXSec (const Interaction * interaction) const;
  string CacheBranchName(Resonance_t r, InteractionType_t it, int nu, int nuc) const;

  bool   fUsingDisResJoin;
  double fWcut;
  double fEMax;

  mutable const XSecAlgorithmI * fSingleResXSecModel;
  BaryonResList fResList;
};


class XSecAlgorithmI;
class Interaction;

namespace utils {
namespace gsl   {



//.....................................................................................
//
// genie::utils::gsl::d2XSecRESFast_dWQ2_E
// A 2-D cross section function: d2xsec/dWdQ2 = f(W,Q2)|(fixed E)
//
class d2XSecRESFast_dWQ2_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSecRESFast_dWQ2_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSecRESFast_dWQ2_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double fWmin;
  double fWmax;
  bool isfWcutLessfWmin;
  KPhaseSpace * kps;
};

} // gsl   namespace
} // utils namespace
} // genie namespace

#endif  // _REIN_SEHGAL_RES_XSEC_WITH_CACHE_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalSPPPXSec

\brief    Computes the differential cross section for an exclusive 1-pion
          reaction through resonance neutrinoproduction according to the
          Rein-Sehgal model.

          The cross section is computed for an input list of resonances
          as the sum of the Rein-Sehgal single resonance cross sections
          weighted:

          \li With the value of their Breit-Wigner distributions at the given
              W,Q^2 (The code for BW weighting is included in the single
              resonance cross section algorithm. The user needs to make sure
              that he does not run the single resonance cross section code with
              a configuration that inhibits weighting).

          \li With the isospin Glebsch-Gordon coefficient determining the
              contribution of each resonance to the exclusive final state.

          \li With the BR for the produced resonance to decay into the given
              exclusive final state.

          In this algorithm we follow the non-coherent approach: we sum
          the weighted resonance production cross sections rather than the
          resonance production amplitudes.

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 22, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_EXCLUSIVE_SPP_PXSEC_H_
#define _REIN_SEHGAL_EXCLUSIVE_SPP_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/ParticleData/BaryonResList.h"

namespace genie {

class XSecIntegratorI;

class ReinSehgalSPPPXSec : public XSecAlgorithmI {

public:
  ReinSehgalSPPPXSec();
  ReinSehgalSPPPXSec(string config);
  virtual ~ReinSehgalSPPPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  //-- load algorithm configuration when Algorithm::Configure()
  void LoadConfig (void);

  double XSecNRES(const Interaction * i, KinePhaseSpace_t k) const;
  double XSec1RES(const Interaction * i, KinePhaseSpace_t k) const;

  //-- private data members
  BaryonResList           fResList;
  const XSecAlgorithmI *  fSingleResXSecModel;
  const XSecIntegratorI * fXSecIntegrator;
};

}       // genie namespace
#endif  // _REIN_SEHGAL_EXCLUSIVE_SPP_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalSPPXSec

\brief    Computes the cross section for an exclusive 1pi reaction through
          resonance neutrinoproduction according to the Rein-Sehgal model.

          This algorithm produces in principle what you could also get from
          the genie::RESXSec algorithm (RES cross section integrator) by
          specifying the genie::ReinSehgalSPPPXSec as the differential
          cross section model. However, ReinSehgalSPPXSec offers a faster
          alternative. Before computing any SPP cross section this algorithm
          computes and caches splines for resonance neutrino-production cross
          sections. This improves the speed since it is reducing the number of
          calculations (the generic algorithm needs to recompute resonance
          production xsec for every exclusive channel).

          In this algorithm we follow the non-coherent approach: we sum
          the weighted resonance production cross sections rather than the
          resonance production amplitudes.

          Is a concrete implementation of the XSecAlgorithmI interface.\n

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 09, 2006

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_SPP_XSEC_H_
#define _REIN_SEHGAL_SPP_XSEC_H_

#include "Physics/Resonance/XSection/ReinSehgalRESXSecWithCache.h"

namespace genie {

class ReinSehgalSPPXSec : public ReinSehgalRESXSecWithCache {

public:
  ReinSehgalSPPXSec();
  ReinSehgalSPPXSec(string param_set);
  virtual ~ReinSehgalSPPXSec();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);
};

}       // genie namespace
#endif  // _REIN_SEHGAL_SPP_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::SPPXSec

\brief    Computes the cross section for an neutrino resonance SPP reaction.

          Before computing any SPP cross section this algorithm 
          computes and caches splines for neutrino resonance SPP  cross 
          sections. This improves the speed of the GENIE spline construction 
          phase if splines for multiple nuclear targets are to be computed
          (for case without Pauli-blocking).

          Is a concrete implementation of the XSecAlgorithmI interface.\n


\authors  Igor Kakorin <kakorin@jinr.ru>, Joint Institute for Nuclear Research \n
          Vadim Naumov <vnaumov@theor.jinr.ru >,  Joint Institute for Nuclear Research \n
          based on code of Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 12, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration   
          For the full text of the license visit http://copyright.genie-mc.org                         
          or see $GENIE/LICENSE 
*/
//____________________________________________________________________________

#ifndef _SPP_XSEC_H_
#define _SPP_XSEC_H_

#include "Physics/Resonance/XSection/SPPXSecWithCache.h"

namespace genie {

class SPPXSec : public SPPXSecWithCache {

public:
  SPPXSec();
  SPPXSec(string param_set);
  virtual ~SPPXSec();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);
  
  bool fUsePauliBlocking;      ///< account for Pauli blocking?
};

}       // genie namespace
#endif  // _SPP_XSEC_H_

//____________________________________________________________________________
/*!

\class    genie::SPPXSecWithCache

\brief    Class that caches neutrino resonance SPP cross sections on free 
          nucleons. This significantly speeds 
          the cross section calculation for multiple nuclear targets (eg at the
          spline construction phase, but only for case without Pauli-blocking). 
          This class integrates cross sections faster,
           
Computes the cross section for an neutrino resonance SPP reaction.


\authors  Igor Kakorin <kakorin@jinr.ru>, Joint Institute for Nuclear Research \n
          Vadim Naumov <vnaumov@theor.jinr.ru >,  Joint Institute for Nuclear Research \n
          based on code of Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 12, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SPP_XSEC_WITH_CACHE_H_
#define _SPP_XSEC_WITH_CACHE_H_

#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>

#include "Physics/XSectionIntegration/XSecIntegratorI.h"
#include "Framework/ParticleData//BaryonResList.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/Utils/Range1.h"
#include "Framework/Interaction/KPhaseSpace.h"
#include "Framework/Interaction/SppChannel.h"

namespace genie {

class SPPXSecWithCache : public XSecIntegratorI {

protected:
  SPPXSecWithCache();
  SPPXSecWithCache(string name);
  SPPXSecWithCache(string name, string config);
  virtual ~SPPXSecWithCache();

  // Don't implement the XSecIntegratorI interface - leave it for the concrete
  // subclasses. Just define utility methods and data
  void   CacheResExcitationXSec (const Interaction * interaction) const;
  string CacheBranchName(SppChannel_t spp_channel, InteractionType_t it, int nu) const;

  bool   fUsingDisResJoin;
  double fWcut;
  double fEMax;

  mutable const XSecAlgorithmI * fSinglePionProductionXSecModel;
  BaryonResList fResList;
};


class XSecAlgorithmI;
class Interaction;

namespace utils {
namespace gsl   {



//.....................................................................................
//
// genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E
// A 3-D cross section function: d3xsec/dWdQ2dCosTheta = f(W, Q2, CosTheta)|(fixed E)
//
class d3XSecMK_dWQ2CosTheta_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d3XSecMK_dWQ2CosTheta_E(const XSecAlgorithmI * m, const Interaction * i, double wcut);
 ~d3XSecMK_dWQ2CosTheta_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  Interaction *    fInteraction;
  Range1D_t Wl;
  bool isZero;
  KPhaseSpace * kps;
  double fWcut;
};

} // gsl   namespace
} // utils namespace
} // genie namespace

#endif  // _SPP_XSEC_WITH_H_




#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::BSKLNBaseRESPXSec2014", payloadCode, "@",
"genie::BergerSehgalRESPXSec2014", payloadCode, "@",
"genie::BostedChristyEMPXSec", payloadCode, "@",
"genie::KuzminLyubushkinNaumovRESPXSec2014", payloadCode, "@",
"genie::MKSPPPXSec2020", payloadCode, "@",
"genie::P33PaschosLalakulichPXSec", payloadCode, "@",
"genie::RESXSec", payloadCode, "@",
"genie::RSHelicityAmpl", payloadCode, "@",
"genie::RSHelicityAmplModelCC", payloadCode, "@",
"genie::RSHelicityAmplModelEMn", payloadCode, "@",
"genie::RSHelicityAmplModelEMp", payloadCode, "@",
"genie::RSHelicityAmplModelI", payloadCode, "@",
"genie::RSHelicityAmplModelNCn", payloadCode, "@",
"genie::RSHelicityAmplModelNCp", payloadCode, "@",
"genie::ReinSehgalRESPXSec", payloadCode, "@",
"genie::ReinSehgalRESXSec", payloadCode, "@",
"genie::ReinSehgalRESXSecFast", payloadCode, "@",
"genie::ReinSehgalRESXSecWithCache", payloadCode, "@",
"genie::ReinSehgalRESXSecWithCacheFast", payloadCode, "@",
"genie::ReinSehgalSPPPXSec", payloadCode, "@",
"genie::ReinSehgalSPPXSec", payloadCode, "@",
"genie::SPPXSec", payloadCode, "@",
"genie::SPPXSecWithCache", payloadCode, "@",
"genie::utils::gsl::d2XSecRESFast_dWQ2_E", payloadCode, "@",
"genie::utils::gsl::d3XSecMK_dWQ2CosTheta_E", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhResXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhResXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhResXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhResXS() {
  TriggerDictionaryInitialization_libGPhResXS_Impl();
}
