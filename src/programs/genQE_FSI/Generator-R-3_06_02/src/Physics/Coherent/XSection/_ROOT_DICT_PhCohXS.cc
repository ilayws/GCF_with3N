// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhCohXS
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
#include "ARConstants.h"
#include "AREikonalSolution.h"
#include "ARSampledNucleus.h"
#include "ARWFSolution.h"
#include "ARWavefunction.h"
#include "AlvarezRusoCOHPiPDXSec.h"
#include "AlvarezRusoCOHPiPXSec.h"
#include "BergerSehgalCOHPiPXSec2015.h"
#include "BergerSehgalFMCOHPiPXSec2015.h"
#include "CEvNSXSec.h"
#include "COHXSec.h"
#include "COHXSecAR.h"
#include "NuclDensityMomentIntegrand.h"
#include "PattonCEvNSPXSec.h"
#include "ReinSehgalCOHPiPXSec.h"

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
            instance("genie", 0 /*version*/, "Framework/Registry/RegistryItemTypeId.h", 25,
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
   namespace alvarezruso {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLalvarezruso_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::alvarezruso", 0 /*version*/, "", 28,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLalvarezruso_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLalvarezruso_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *geniecLcLalvarezrusocLcLARConstants_Dictionary();
   static void geniecLcLalvarezrusocLcLARConstants_TClassManip(TClass*);
   static void *new_geniecLcLalvarezrusocLcLARConstants(void *p = nullptr);
   static void *newArray_geniecLcLalvarezrusocLcLARConstants(Long_t size, void *p);
   static void delete_geniecLcLalvarezrusocLcLARConstants(void *p);
   static void deleteArray_geniecLcLalvarezrusocLcLARConstants(void *p);
   static void destruct_geniecLcLalvarezrusocLcLARConstants(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::alvarezruso::ARConstants*)
   {
      ::genie::alvarezruso::ARConstants *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::alvarezruso::ARConstants));
      static ::ROOT::TGenericClassInfo 
         instance("genie::alvarezruso::ARConstants", "", 30,
                  typeid(::genie::alvarezruso::ARConstants), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLalvarezrusocLcLARConstants_Dictionary, isa_proxy, 0,
                  sizeof(::genie::alvarezruso::ARConstants) );
      instance.SetNew(&new_geniecLcLalvarezrusocLcLARConstants);
      instance.SetNewArray(&newArray_geniecLcLalvarezrusocLcLARConstants);
      instance.SetDelete(&delete_geniecLcLalvarezrusocLcLARConstants);
      instance.SetDeleteArray(&deleteArray_geniecLcLalvarezrusocLcLARConstants);
      instance.SetDestructor(&destruct_geniecLcLalvarezrusocLcLARConstants);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::alvarezruso::ARConstants*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::alvarezruso::ARConstants*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::alvarezruso::ARConstants*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLalvarezrusocLcLARConstants_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::alvarezruso::ARConstants*>(nullptr))->GetClass();
      geniecLcLalvarezrusocLcLARConstants_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLalvarezrusocLcLARConstants_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLalvarezrusocLcLARSampledNucleus_Dictionary();
   static void geniecLcLalvarezrusocLcLARSampledNucleus_TClassManip(TClass*);
   static void delete_geniecLcLalvarezrusocLcLARSampledNucleus(void *p);
   static void deleteArray_geniecLcLalvarezrusocLcLARSampledNucleus(void *p);
   static void destruct_geniecLcLalvarezrusocLcLARSampledNucleus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::alvarezruso::ARSampledNucleus*)
   {
      ::genie::alvarezruso::ARSampledNucleus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::alvarezruso::ARSampledNucleus));
      static ::ROOT::TGenericClassInfo 
         instance("genie::alvarezruso::ARSampledNucleus", "ARSampledNucleus.h", 30,
                  typeid(::genie::alvarezruso::ARSampledNucleus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLalvarezrusocLcLARSampledNucleus_Dictionary, isa_proxy, 0,
                  sizeof(::genie::alvarezruso::ARSampledNucleus) );
      instance.SetDelete(&delete_geniecLcLalvarezrusocLcLARSampledNucleus);
      instance.SetDeleteArray(&deleteArray_geniecLcLalvarezrusocLcLARSampledNucleus);
      instance.SetDestructor(&destruct_geniecLcLalvarezrusocLcLARSampledNucleus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::alvarezruso::ARSampledNucleus*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::alvarezruso::ARSampledNucleus*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::alvarezruso::ARSampledNucleus*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLalvarezrusocLcLARSampledNucleus_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::alvarezruso::ARSampledNucleus*>(nullptr))->GetClass();
      geniecLcLalvarezrusocLcLARSampledNucleus_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLalvarezrusocLcLARSampledNucleus_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec_Dictionary();
   static void geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec_TClassManip(TClass*);
   static void delete_geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec(void *p);
   static void deleteArray_geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec(void *p);
   static void destruct_geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::alvarezruso::AlvarezRusoCOHPiPDXSec*)
   {
      ::genie::alvarezruso::AlvarezRusoCOHPiPDXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::alvarezruso::AlvarezRusoCOHPiPDXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::alvarezruso::AlvarezRusoCOHPiPDXSec", "AlvarezRusoCOHPiPDXSec.h", 46,
                  typeid(::genie::alvarezruso::AlvarezRusoCOHPiPDXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::alvarezruso::AlvarezRusoCOHPiPDXSec) );
      instance.SetDelete(&delete_geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec);
      instance.SetDestructor(&destruct_geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::alvarezruso::AlvarezRusoCOHPiPDXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::alvarezruso::AlvarezRusoCOHPiPDXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::alvarezruso::AlvarezRusoCOHPiPDXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::alvarezruso::AlvarezRusoCOHPiPDXSec*>(nullptr))->GetClass();
      geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAlvarezRusoCOHPiPXSec_Dictionary();
   static void geniecLcLAlvarezRusoCOHPiPXSec_TClassManip(TClass*);
   static void *new_geniecLcLAlvarezRusoCOHPiPXSec(void *p = nullptr);
   static void *newArray_geniecLcLAlvarezRusoCOHPiPXSec(Long_t size, void *p);
   static void delete_geniecLcLAlvarezRusoCOHPiPXSec(void *p);
   static void deleteArray_geniecLcLAlvarezRusoCOHPiPXSec(void *p);
   static void destruct_geniecLcLAlvarezRusoCOHPiPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AlvarezRusoCOHPiPXSec*)
   {
      ::genie::AlvarezRusoCOHPiPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AlvarezRusoCOHPiPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AlvarezRusoCOHPiPXSec", "", 611,
                  typeid(::genie::AlvarezRusoCOHPiPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAlvarezRusoCOHPiPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AlvarezRusoCOHPiPXSec) );
      instance.SetNew(&new_geniecLcLAlvarezRusoCOHPiPXSec);
      instance.SetNewArray(&newArray_geniecLcLAlvarezRusoCOHPiPXSec);
      instance.SetDelete(&delete_geniecLcLAlvarezRusoCOHPiPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLAlvarezRusoCOHPiPXSec);
      instance.SetDestructor(&destruct_geniecLcLAlvarezRusoCOHPiPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AlvarezRusoCOHPiPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AlvarezRusoCOHPiPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AlvarezRusoCOHPiPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAlvarezRusoCOHPiPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AlvarezRusoCOHPiPXSec*>(nullptr))->GetClass();
      geniecLcLAlvarezRusoCOHPiPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAlvarezRusoCOHPiPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBergerSehgalCOHPiPXSec2015_Dictionary();
   static void geniecLcLBergerSehgalCOHPiPXSec2015_TClassManip(TClass*);
   static void *new_geniecLcLBergerSehgalCOHPiPXSec2015(void *p = nullptr);
   static void *newArray_geniecLcLBergerSehgalCOHPiPXSec2015(Long_t size, void *p);
   static void delete_geniecLcLBergerSehgalCOHPiPXSec2015(void *p);
   static void deleteArray_geniecLcLBergerSehgalCOHPiPXSec2015(void *p);
   static void destruct_geniecLcLBergerSehgalCOHPiPXSec2015(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BergerSehgalCOHPiPXSec2015*)
   {
      ::genie::BergerSehgalCOHPiPXSec2015 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BergerSehgalCOHPiPXSec2015));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BergerSehgalCOHPiPXSec2015", "", 687,
                  typeid(::genie::BergerSehgalCOHPiPXSec2015), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBergerSehgalCOHPiPXSec2015_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BergerSehgalCOHPiPXSec2015) );
      instance.SetNew(&new_geniecLcLBergerSehgalCOHPiPXSec2015);
      instance.SetNewArray(&newArray_geniecLcLBergerSehgalCOHPiPXSec2015);
      instance.SetDelete(&delete_geniecLcLBergerSehgalCOHPiPXSec2015);
      instance.SetDeleteArray(&deleteArray_geniecLcLBergerSehgalCOHPiPXSec2015);
      instance.SetDestructor(&destruct_geniecLcLBergerSehgalCOHPiPXSec2015);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BergerSehgalCOHPiPXSec2015*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BergerSehgalCOHPiPXSec2015*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BergerSehgalCOHPiPXSec2015*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBergerSehgalCOHPiPXSec2015_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::BergerSehgalCOHPiPXSec2015*>(nullptr))->GetClass();
      geniecLcLBergerSehgalCOHPiPXSec2015_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBergerSehgalCOHPiPXSec2015_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBergerSehgalFMCOHPiPXSec2015_Dictionary();
   static void geniecLcLBergerSehgalFMCOHPiPXSec2015_TClassManip(TClass*);
   static void *new_geniecLcLBergerSehgalFMCOHPiPXSec2015(void *p = nullptr);
   static void *newArray_geniecLcLBergerSehgalFMCOHPiPXSec2015(Long_t size, void *p);
   static void delete_geniecLcLBergerSehgalFMCOHPiPXSec2015(void *p);
   static void deleteArray_geniecLcLBergerSehgalFMCOHPiPXSec2015(void *p);
   static void destruct_geniecLcLBergerSehgalFMCOHPiPXSec2015(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BergerSehgalFMCOHPiPXSec2015*)
   {
      ::genie::BergerSehgalFMCOHPiPXSec2015 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BergerSehgalFMCOHPiPXSec2015));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BergerSehgalFMCOHPiPXSec2015", "", 755,
                  typeid(::genie::BergerSehgalFMCOHPiPXSec2015), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBergerSehgalFMCOHPiPXSec2015_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BergerSehgalFMCOHPiPXSec2015) );
      instance.SetNew(&new_geniecLcLBergerSehgalFMCOHPiPXSec2015);
      instance.SetNewArray(&newArray_geniecLcLBergerSehgalFMCOHPiPXSec2015);
      instance.SetDelete(&delete_geniecLcLBergerSehgalFMCOHPiPXSec2015);
      instance.SetDeleteArray(&deleteArray_geniecLcLBergerSehgalFMCOHPiPXSec2015);
      instance.SetDestructor(&destruct_geniecLcLBergerSehgalFMCOHPiPXSec2015);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BergerSehgalFMCOHPiPXSec2015*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BergerSehgalFMCOHPiPXSec2015*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BergerSehgalFMCOHPiPXSec2015*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBergerSehgalFMCOHPiPXSec2015_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::BergerSehgalFMCOHPiPXSec2015*>(nullptr))->GetClass();
      geniecLcLBergerSehgalFMCOHPiPXSec2015_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBergerSehgalFMCOHPiPXSec2015_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCEvNSXSec_Dictionary();
   static void geniecLcLCEvNSXSec_TClassManip(TClass*);
   static void *new_geniecLcLCEvNSXSec(void *p = nullptr);
   static void *newArray_geniecLcLCEvNSXSec(Long_t size, void *p);
   static void delete_geniecLcLCEvNSXSec(void *p);
   static void deleteArray_geniecLcLCEvNSXSec(void *p);
   static void destruct_geniecLcLCEvNSXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CEvNSXSec*)
   {
      ::genie::CEvNSXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::CEvNSXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::CEvNSXSec", "", 816,
                  typeid(::genie::CEvNSXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCEvNSXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::CEvNSXSec) );
      instance.SetNew(&new_geniecLcLCEvNSXSec);
      instance.SetNewArray(&newArray_geniecLcLCEvNSXSec);
      instance.SetDelete(&delete_geniecLcLCEvNSXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLCEvNSXSec);
      instance.SetDestructor(&destruct_geniecLcLCEvNSXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CEvNSXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::CEvNSXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::CEvNSXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCEvNSXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::CEvNSXSec*>(nullptr))->GetClass();
      geniecLcLCEvNSXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCEvNSXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHXSec_Dictionary();
   static void geniecLcLCOHXSec_TClassManip(TClass*);
   static void *new_geniecLcLCOHXSec(void *p = nullptr);
   static void *newArray_geniecLcLCOHXSec(Long_t size, void *p);
   static void delete_geniecLcLCOHXSec(void *p);
   static void deleteArray_geniecLcLCOHXSec(void *p);
   static void destruct_geniecLcLCOHXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHXSec*)
   {
      ::genie::COHXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHXSec", "", 865,
                  typeid(::genie::COHXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHXSec) );
      instance.SetNew(&new_geniecLcLCOHXSec);
      instance.SetNewArray(&newArray_geniecLcLCOHXSec);
      instance.SetDelete(&delete_geniecLcLCOHXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHXSec);
      instance.SetDestructor(&destruct_geniecLcLCOHXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::COHXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::COHXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::COHXSec*>(nullptr))->GetClass();
      geniecLcLCOHXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHXSecAR_Dictionary();
   static void geniecLcLCOHXSecAR_TClassManip(TClass*);
   static void *new_geniecLcLCOHXSecAR(void *p = nullptr);
   static void *newArray_geniecLcLCOHXSecAR(Long_t size, void *p);
   static void delete_geniecLcLCOHXSecAR(void *p);
   static void deleteArray_geniecLcLCOHXSecAR(void *p);
   static void destruct_geniecLcLCOHXSecAR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHXSecAR*)
   {
      ::genie::COHXSecAR *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHXSecAR));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHXSecAR", "", 916,
                  typeid(::genie::COHXSecAR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHXSecAR_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHXSecAR) );
      instance.SetNew(&new_geniecLcLCOHXSecAR);
      instance.SetNewArray(&newArray_geniecLcLCOHXSecAR);
      instance.SetDelete(&delete_geniecLcLCOHXSecAR);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHXSecAR);
      instance.SetDestructor(&destruct_geniecLcLCOHXSecAR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHXSecAR*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::COHXSecAR*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::COHXSecAR*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHXSecAR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::COHXSecAR*>(nullptr))->GetClass();
      geniecLcLCOHXSecAR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHXSecAR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand_Dictionary();
   static void geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::wrap::NuclDensityMomentIntegrand*)
   {
      ::genie::utils::gsl::wrap::NuclDensityMomentIntegrand *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::wrap::NuclDensityMomentIntegrand));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::wrap::NuclDensityMomentIntegrand", "", 969,
                  typeid(::genie::utils::gsl::wrap::NuclDensityMomentIntegrand), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::wrap::NuclDensityMomentIntegrand) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::wrap::NuclDensityMomentIntegrand*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::wrap::NuclDensityMomentIntegrand*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::wrap::NuclDensityMomentIntegrand*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::wrap::NuclDensityMomentIntegrand*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPattonCEvNSPXSec_Dictionary();
   static void geniecLcLPattonCEvNSPXSec_TClassManip(TClass*);
   static void *new_geniecLcLPattonCEvNSPXSec(void *p = nullptr);
   static void *newArray_geniecLcLPattonCEvNSPXSec(Long_t size, void *p);
   static void delete_geniecLcLPattonCEvNSPXSec(void *p);
   static void deleteArray_geniecLcLPattonCEvNSPXSec(void *p);
   static void destruct_geniecLcLPattonCEvNSPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PattonCEvNSPXSec*)
   {
      ::genie::PattonCEvNSPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PattonCEvNSPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PattonCEvNSPXSec", "", 1020,
                  typeid(::genie::PattonCEvNSPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPattonCEvNSPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PattonCEvNSPXSec) );
      instance.SetNew(&new_geniecLcLPattonCEvNSPXSec);
      instance.SetNewArray(&newArray_geniecLcLPattonCEvNSPXSec);
      instance.SetDelete(&delete_geniecLcLPattonCEvNSPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLPattonCEvNSPXSec);
      instance.SetDestructor(&destruct_geniecLcLPattonCEvNSPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PattonCEvNSPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PattonCEvNSPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PattonCEvNSPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPattonCEvNSPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PattonCEvNSPXSec*>(nullptr))->GetClass();
      geniecLcLPattonCEvNSPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPattonCEvNSPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalCOHPiPXSec_Dictionary();
   static void geniecLcLReinSehgalCOHPiPXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalCOHPiPXSec(void *p = nullptr);
   static void *newArray_geniecLcLReinSehgalCOHPiPXSec(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalCOHPiPXSec(void *p);
   static void deleteArray_geniecLcLReinSehgalCOHPiPXSec(void *p);
   static void destruct_geniecLcLReinSehgalCOHPiPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalCOHPiPXSec*)
   {
      ::genie::ReinSehgalCOHPiPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalCOHPiPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalCOHPiPXSec", "", 1098,
                  typeid(::genie::ReinSehgalCOHPiPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalCOHPiPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalCOHPiPXSec) );
      instance.SetNew(&new_geniecLcLReinSehgalCOHPiPXSec);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalCOHPiPXSec);
      instance.SetDelete(&delete_geniecLcLReinSehgalCOHPiPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalCOHPiPXSec);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalCOHPiPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalCOHPiPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ReinSehgalCOHPiPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalCOHPiPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalCOHPiPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ReinSehgalCOHPiPXSec*>(nullptr))->GetClass();
      geniecLcLReinSehgalCOHPiPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalCOHPiPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLalvarezrusocLcLARConstants(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::alvarezruso::ARConstants : new ::genie::alvarezruso::ARConstants;
   }
   static void *newArray_geniecLcLalvarezrusocLcLARConstants(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::alvarezruso::ARConstants[nElements] : new ::genie::alvarezruso::ARConstants[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLalvarezrusocLcLARConstants(void *p) {
      delete (static_cast<::genie::alvarezruso::ARConstants*>(p));
   }
   static void deleteArray_geniecLcLalvarezrusocLcLARConstants(void *p) {
      delete [] (static_cast<::genie::alvarezruso::ARConstants*>(p));
   }
   static void destruct_geniecLcLalvarezrusocLcLARConstants(void *p) {
      typedef ::genie::alvarezruso::ARConstants current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::alvarezruso::ARConstants

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLalvarezrusocLcLARSampledNucleus(void *p) {
      delete (static_cast<::genie::alvarezruso::ARSampledNucleus*>(p));
   }
   static void deleteArray_geniecLcLalvarezrusocLcLARSampledNucleus(void *p) {
      delete [] (static_cast<::genie::alvarezruso::ARSampledNucleus*>(p));
   }
   static void destruct_geniecLcLalvarezrusocLcLARSampledNucleus(void *p) {
      typedef ::genie::alvarezruso::ARSampledNucleus current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::alvarezruso::ARSampledNucleus

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec(void *p) {
      delete (static_cast<::genie::alvarezruso::AlvarezRusoCOHPiPDXSec*>(p));
   }
   static void deleteArray_geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec(void *p) {
      delete [] (static_cast<::genie::alvarezruso::AlvarezRusoCOHPiPDXSec*>(p));
   }
   static void destruct_geniecLcLalvarezrusocLcLAlvarezRusoCOHPiPDXSec(void *p) {
      typedef ::genie::alvarezruso::AlvarezRusoCOHPiPDXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::alvarezruso::AlvarezRusoCOHPiPDXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAlvarezRusoCOHPiPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlvarezRusoCOHPiPXSec : new ::genie::AlvarezRusoCOHPiPXSec;
   }
   static void *newArray_geniecLcLAlvarezRusoCOHPiPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlvarezRusoCOHPiPXSec[nElements] : new ::genie::AlvarezRusoCOHPiPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAlvarezRusoCOHPiPXSec(void *p) {
      delete (static_cast<::genie::AlvarezRusoCOHPiPXSec*>(p));
   }
   static void deleteArray_geniecLcLAlvarezRusoCOHPiPXSec(void *p) {
      delete [] (static_cast<::genie::AlvarezRusoCOHPiPXSec*>(p));
   }
   static void destruct_geniecLcLAlvarezRusoCOHPiPXSec(void *p) {
      typedef ::genie::AlvarezRusoCOHPiPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AlvarezRusoCOHPiPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBergerSehgalCOHPiPXSec2015(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BergerSehgalCOHPiPXSec2015 : new ::genie::BergerSehgalCOHPiPXSec2015;
   }
   static void *newArray_geniecLcLBergerSehgalCOHPiPXSec2015(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BergerSehgalCOHPiPXSec2015[nElements] : new ::genie::BergerSehgalCOHPiPXSec2015[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBergerSehgalCOHPiPXSec2015(void *p) {
      delete (static_cast<::genie::BergerSehgalCOHPiPXSec2015*>(p));
   }
   static void deleteArray_geniecLcLBergerSehgalCOHPiPXSec2015(void *p) {
      delete [] (static_cast<::genie::BergerSehgalCOHPiPXSec2015*>(p));
   }
   static void destruct_geniecLcLBergerSehgalCOHPiPXSec2015(void *p) {
      typedef ::genie::BergerSehgalCOHPiPXSec2015 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::BergerSehgalCOHPiPXSec2015

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBergerSehgalFMCOHPiPXSec2015(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BergerSehgalFMCOHPiPXSec2015 : new ::genie::BergerSehgalFMCOHPiPXSec2015;
   }
   static void *newArray_geniecLcLBergerSehgalFMCOHPiPXSec2015(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BergerSehgalFMCOHPiPXSec2015[nElements] : new ::genie::BergerSehgalFMCOHPiPXSec2015[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBergerSehgalFMCOHPiPXSec2015(void *p) {
      delete (static_cast<::genie::BergerSehgalFMCOHPiPXSec2015*>(p));
   }
   static void deleteArray_geniecLcLBergerSehgalFMCOHPiPXSec2015(void *p) {
      delete [] (static_cast<::genie::BergerSehgalFMCOHPiPXSec2015*>(p));
   }
   static void destruct_geniecLcLBergerSehgalFMCOHPiPXSec2015(void *p) {
      typedef ::genie::BergerSehgalFMCOHPiPXSec2015 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::BergerSehgalFMCOHPiPXSec2015

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCEvNSXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CEvNSXSec : new ::genie::CEvNSXSec;
   }
   static void *newArray_geniecLcLCEvNSXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::CEvNSXSec[nElements] : new ::genie::CEvNSXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCEvNSXSec(void *p) {
      delete (static_cast<::genie::CEvNSXSec*>(p));
   }
   static void deleteArray_geniecLcLCEvNSXSec(void *p) {
      delete [] (static_cast<::genie::CEvNSXSec*>(p));
   }
   static void destruct_geniecLcLCEvNSXSec(void *p) {
      typedef ::genie::CEvNSXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::CEvNSXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHXSec : new ::genie::COHXSec;
   }
   static void *newArray_geniecLcLCOHXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHXSec[nElements] : new ::genie::COHXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHXSec(void *p) {
      delete (static_cast<::genie::COHXSec*>(p));
   }
   static void deleteArray_geniecLcLCOHXSec(void *p) {
      delete [] (static_cast<::genie::COHXSec*>(p));
   }
   static void destruct_geniecLcLCOHXSec(void *p) {
      typedef ::genie::COHXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHXSecAR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHXSecAR : new ::genie::COHXSecAR;
   }
   static void *newArray_geniecLcLCOHXSecAR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::COHXSecAR[nElements] : new ::genie::COHXSecAR[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHXSecAR(void *p) {
      delete (static_cast<::genie::COHXSecAR*>(p));
   }
   static void deleteArray_geniecLcLCOHXSecAR(void *p) {
      delete [] (static_cast<::genie::COHXSecAR*>(p));
   }
   static void destruct_geniecLcLCOHXSecAR(void *p) {
      typedef ::genie::COHXSecAR current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHXSecAR

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand(void *p) {
      delete (static_cast<::genie::utils::gsl::wrap::NuclDensityMomentIntegrand*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand(void *p) {
      delete [] (static_cast<::genie::utils::gsl::wrap::NuclDensityMomentIntegrand*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLwrapcLcLNuclDensityMomentIntegrand(void *p) {
      typedef ::genie::utils::gsl::wrap::NuclDensityMomentIntegrand current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::wrap::NuclDensityMomentIntegrand

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPattonCEvNSPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PattonCEvNSPXSec : new ::genie::PattonCEvNSPXSec;
   }
   static void *newArray_geniecLcLPattonCEvNSPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PattonCEvNSPXSec[nElements] : new ::genie::PattonCEvNSPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPattonCEvNSPXSec(void *p) {
      delete (static_cast<::genie::PattonCEvNSPXSec*>(p));
   }
   static void deleteArray_geniecLcLPattonCEvNSPXSec(void *p) {
      delete [] (static_cast<::genie::PattonCEvNSPXSec*>(p));
   }
   static void destruct_geniecLcLPattonCEvNSPXSec(void *p) {
      typedef ::genie::PattonCEvNSPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PattonCEvNSPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalCOHPiPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalCOHPiPXSec : new ::genie::ReinSehgalCOHPiPXSec;
   }
   static void *newArray_geniecLcLReinSehgalCOHPiPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ReinSehgalCOHPiPXSec[nElements] : new ::genie::ReinSehgalCOHPiPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalCOHPiPXSec(void *p) {
      delete (static_cast<::genie::ReinSehgalCOHPiPXSec*>(p));
   }
   static void deleteArray_geniecLcLReinSehgalCOHPiPXSec(void *p) {
      delete [] (static_cast<::genie::ReinSehgalCOHPiPXSec*>(p));
   }
   static void destruct_geniecLcLReinSehgalCOHPiPXSec(void *p) {
      typedef ::genie::ReinSehgalCOHPiPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalCOHPiPXSec

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhCohXS() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhCohXS) = RecordReadRules_libGPhCohXS();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhCohXS));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhCohXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Coherent/XSection",
"GENIE",
"GENIE/Physics/Coherent/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Coherent/XSection",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Coherent/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhCohXS dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{namespace alvarezruso{class  ARConstants;}}
namespace genie{namespace alvarezruso{class  __attribute__((annotate("$clingAutoload$Physics/Coherent/XSection/ARSampledNucleus.h")))  __attribute__((annotate("$clingAutoload$Physics/Coherent/XSection/AlvarezRusoCOHPiPDXSec.h")))  ARSampledNucleus;}}
namespace genie{namespace alvarezruso{class  __attribute__((annotate("$clingAutoload$Physics/Coherent/XSection/AlvarezRusoCOHPiPDXSec.h")))  AlvarezRusoCOHPiPDXSec;}}
namespace genie{class  AlvarezRusoCOHPiPXSec;}
namespace genie{class  BergerSehgalCOHPiPXSec2015;}
namespace genie{class  BergerSehgalFMCOHPiPXSec2015;}
namespace genie{class  CEvNSXSec;}
namespace genie{class  COHXSec;}
namespace genie{class  COHXSecAR;}
namespace genie{namespace utils{namespace gsl{namespace wrap{class  NuclDensityMomentIntegrand;}}}}
namespace genie{class  PattonCEvNSPXSec;}
namespace genie{class  ReinSehgalCOHPiPXSec;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhCohXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::alvarezruso::Constants

\brief    Class containing constants for AlvarezRuso coherent pion production xsec

\ref

\author   Steve Dennis
          University of Warwick, Rutherford Appleton Laboratory

\created  05/12/2013

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________
#ifndef AR_CONSTANTS_H
#define AR_CONSTANTS_H

#include "Framework/Registry/Registry.h"
#include "Framework/Conventions/Constants.h"

namespace genie {
namespace alvarezruso {

class ARConstants
{
  public:

    ARConstants();
    ~ARConstants();

    double HBar();
    double Ma_Nucleon();
    double Mv_Nucleon();
    double Ma_Delta();
    double Mv_Delta();
    double GAxial();
    double Rho0();
    double CA4_A();
    double CA5_A();
    double CA4_B();
    double CA5_B();
    double PiDecayConst();
    double DeltaNCoupling();
    double CosCabibboAngle();
    double SinWeinbergAngle();
    double GFermi();
    double ElectronMass();
    double MuonMass();
    double TauMass();
    double ProtonMass();
    double NeutronMass();
    double NucleonMass();
    double NucleonMassSq();
    double DeltaPMass();
    double Delta0Mass();
    double PiPMass();
    double Pi0Mass();
    double cm38Conversion();

    double NCFactor();

  private:
    // unused // const genie::Registry *reg;

    double COHAR_Ma_Nuc      ;
    double COHAR_Mv_Nuc      ;
    double COHAR_Ma_Delta    ;
    double COHAR_Mv_Delta    ;
    double COHAR_GA0         ;
    double COHAR_Rho0        ;
    double COHAR_a4          ;
    double COHAR_a5          ;
    double COHAR_b4          ;
    double COHAR_b5          ;
    double COHAR_fPi_byHbar  ;
    double COHAR_fStar       ;
    double fCosCabibboAngle  ;
    double fSinWeinbergAngle ;

    double massElectron      ;
    double massMuon          ;
    double massTau           ;
    double massProton        ;
    double massNeutron       ;
    double massNucleon       ;
    double massNucleon2      ;
    double massDeltaP        ;
    double massDelta0        ;
    double massPiP           ;
    double massPi0           ;

    double ncFactor;

};

} //namespace alvarezruso

} //namespace genie
#endif
//____________________________________________________________________________
/*!

\class    genie::alvarezruso::AREikonalSolution

\brief    Eikonal wavefunction solution for Alvarez-Ruso Coherent Pion Production xsec

\ref

\author   Steve Dennis
          University of Warwick, Rutherford Appleton Laboratory

\created  05/12/2013

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________
#ifndef _AR_EIKONAL_SOLUTION_H_
#define _AR_EIKONAL_SOLUTION_H_

#include <complex>

#include "Physics/Coherent/XSection/AlvarezRusoCOHPiPDXSec.h"
#include "Physics/Coherent/XSection/ARSampledNucleus.h"
#include "Physics/Coherent/XSection/ARConstants.h"
#include "Physics/Coherent/XSection/ARWFSolution.h"

namespace genie
{
namespace alvarezruso
{

class AREikonalSolution: public ARWFSolution
{
  public:

    AREikonalSolution(bool debug, AlvarezRusoCOHPiPDXSec* parent);
    AREikonalSolution(bool debug, ARSampledNucleus* nucl);

    virtual ~AREikonalSolution();
    virtual std::complex<double>  Element(const double radius, const double cosine_rz,
                 const double e_pion);
    void Solve();

  private:

    AlvarezRusoCOHPiPDXSec* Parent() { return this->parent_; }
    ARSampledNucleus* Nucleus() { return fNucleus; }
    ARConstants* Con() { return this->constants_; }

    std::complex<double>  PionSelfEnergy(const double rhop_cent, const double rhon_cent,
                const double omepi, const double ppim);
    void Deltamed(const double sdel, const double pf, const double rat, double& gamdpb,
            double& imsig, const double ppim, const double omepi);
    double Cc(const double a, const double b, const double c, const double ome);
    double Gamd(const double s);
    double Qcm(const double s);

    AlvarezRusoCOHPiPDXSec* parent_;
    ARSampledNucleus* fNucleus;
    ARConstants* constants_;

    bool owns_constants;

};


} //namespace alvarezruso
} //namespace genie

#endif
//____________________________________________________________________________
/*!

\class    genie::alvarezruso::ARSampledNucleus

\brief    Nucleus class for Alvarez-Ruso Coherent Pion Production xsec

\ref

\author   Steve Dennis
          University of Warwick, Rutherford Appleton Laboratory

\created  05/12/2013

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _AR_NUCLEUS_H_
#define _AR_NUCLEUS_H_

#include <TF1.h>

namespace genie
{
namespace alvarezruso
{

class ARSampledNucleus
{
  public:

    ARSampledNucleus(unsigned int ZNumber, unsigned int ANumber, unsigned int sampling = 20);

    ~ARSampledNucleus();

    unsigned int A() const  {  return fA;  }

    unsigned int Z() const  {  return fZ;  }

    unsigned int N() const  {  return (fA-fZ);  }

    double Density         (const int i, const int j) const;
    double DensityOfCentres(const int i, const int j) const;
    double Radius          (const int i, const int j) const;

    double RadiusMax() const
    {
      return fR_max;
    }
    double SamplePoint1(const unsigned int i) const // absib in original fortran
    {
      return fSample_points_1[i];
    }
    double SamplePoint2(const unsigned int i) const // absiz in original fortran
    {
      return fSample_points_2[i];
    }
    //~ double SampleWeight1(const unsigned int i) const
    //~ {
      //~ return fSample_weights_1[i];
    //~ }
    //~ double SampleWeight2(const unsigned int i) const
    //~ {
      //~ return fSample_weights_2[i];
    //~ }

    unsigned int GetSampling  (void) const;
    unsigned int GetNDensities(void) const;

    double CalcMatterDensity(double r) const;
    double CalcNumberDensity(double r) const;

  private:

    void Fill();
    void FillSamplePoints();
    void FillDensities();
    // Members

    const unsigned int fZ;
    const unsigned int fA;
    unsigned int fSampling;

    unsigned int fNDensities;

    double fR_max;
    double** fRadii;
    double** fDensities;
    double** fDensitiesOfCentres;
    double* fSample_points_1;  // absib: 0 < r < r_max
    double* fSample_points_2;  // absiz: -r_max < r < r_max
    double* fSample_weights_1;
    double* fSample_weights_2;

    double fDiffuseness;
    double fNucRadius;
    double fNucRadiusSq;
    double fDiffusenessCentres;
    double fRadiusCentres;
  //double fRadiusCentresSq;
    double fUseHarmonicOscillator;

    double CalcDensity(double radius, double nuc_rad, double nuc_diff) const;

    // warning: in-class initializer for static data member of type 'const double' is a GNU extension [-Wgnu-static-float-init]
    // static const double mean_radius_squared = 0.69; // in fermi
    static double mean_radius_squared;

    double Density0(unsigned int number, double diffuseness, double radius) const;
    TF1* Density0Function() const;
    static Double_t Density0FunctionFermiLiquid(Double_t* r, Double_t* parameters);

};

} //namespace alvarezruso
} //namespace genie

#endif
//____________________________________________________________________________
/*!

\class    genie::alvarezruso::ARWFSolution

\brief    Abstract base class for Alvarez-Ruso wavefunction solution.

\ref

\author   Steve Dennis
          University of Warwick, Rutherford Appleton Laboratory

\created  05/12/2013

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _AR_WF_SOLUTION_H_
#define _AR_WF_SOLUTION_H_

#include <complex>

namespace genie
{
namespace alvarezruso
{

enum pUnits_t{ kInMeV=0, kInNatural };

class ARWFSolution
{
  public:

    ARWFSolution(bool debug = false);
    virtual ~ARWFSolution();
    virtual std::complex<double>  Element(const double radius, const double cosine_rz, const double e_pion) = 0;
    virtual void Solve() = 0;
    bool debug_;
};

} //namespace alvarezruso
} //namespace genie

#endif
//____________________________________________________________________________
/*!

\class    genie::alvarezruso::ARWavefunction

\brief    Wave function class for AlvarezRuso Coherent pion production xsec

\ref

\author   Steve Dennis
          University of Warwick, Rutherford Appleton Laboratory

\created  05/12/2013

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________
#ifndef _AR_WAVEFUNCTION_H_
#define _AR_WAVEFUNCTION_H_

#include <string>
#include <complex>

namespace genie
{
namespace alvarezruso
{

class ARWavefunction
{
  public:

    ARWavefunction(unsigned int sampling_in, bool debug = false);

    ~ARWavefunction();

    std::string print() const;

    const std::vector<std::complex<double> >& operator[] (unsigned int i) const;

    const std::complex<double> & operator() (unsigned int i, unsigned int j) const;

    std::complex<double>  get(unsigned int i, unsigned int j) const;

    void set(unsigned int i, unsigned int j, const std::complex<double> & value);

    unsigned int sampling() const;

    private:

      bool debug_;
      unsigned int sampling_;
      std::vector< std::vector<std::complex<double> > > wavefunction_;
}; // class ARWavefunction

} //namespace alvarezruso
} //namespace genie

#endif
//____________________________________________________________________________
/*!

\class    genie::alvarezruso::AlvarezRusoCOHPiPDXsec

\brief    5d differential cross section for Alvarez-Ruso Coherent Pion Production xsec

\ref

\author   Steve Dennis
          University of Warwick, Rutherford Appleton Laboratory

\created  05/12/2013

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________
#ifndef _AR_COH_MULTIDIFF_H_
#define _AR_COH_MULTIDIFF_H_

#include <TMath.h>
#include <Math/SMatrix.h>
#include <Math/SVector.h>
#include <Math/LorentzVector.h>

#include "Physics/Coherent/XSection/ARSampledNucleus.h"
#include "Physics/Coherent/XSection/ARConstants.h"
#include "Physics/Coherent/XSection/ARWavefunction.h"
#include "Physics/NuclearState/NuclearUtils.h"

#include <complex>

namespace genie
{
namespace alvarezruso
{

class ARWFSolution;

enum current_t{kCC, kNC};
enum flavour_t{kE, kMu, kTau};
enum nutype_t{kNu,kAntiNu};
enum formfactors_t{kNieves, kGarcia};

class AlvarezRusoCOHPiPDXSec
{
  public:

    AlvarezRusoCOHPiPDXSec(unsigned int Z_, unsigned int A_, const current_t current_,
          const flavour_t flavour_ = kE, const nutype_t nutype = kNu,
          const formfactors_t ff_ = kNieves);
    ~AlvarezRusoCOHPiPDXSec();

    // 5d cross section per nucleon
    double DXSec(const double E_nu_, const double E_l_, const double theta_l_,
           const double phi_l_, const double theta_pi_, const double phi_pi_);

    void SetDebug(bool debug)  {  debug_ = debug;  };

    ARConstants      & GetConstants(void);
    ARSampledNucleus & GetNucleus  (void);

    int GetSampling() const {
      return fSampling;
    }

    double GetPiMass() const {
      return fM_pi;
    }
    double GetLeptonMass() const {
      return fM_l;
    }

    private:
        // Fill the ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >s based on the values from the kinematics
        void SetKinematics();

        // Fill values based on the flavour
        void SetFlavour();

        // Fill values based on the current
        void SetCurrent();

        std::complex<double> DeltaCouplingInMed(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > delta_momentum,
             ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > pion_momentum, double density_cent);
        double PiDecayVertex(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > pion_momentum, double mass);
        std::complex<double>  DeltaPropagatorInMed(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > delta_momentum);
        double DeltaWidthPauliBlocked(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > delta_momentum, double density);
        double DeltaWidthFree(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > delta_momentum);
        std::complex<double> H(unsigned int i, unsigned int j) const;
        double DifferentialCrossSection();
        double PionMomentumCM(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > delta_momentum);
        double PNVertexFactor(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > momentum, double mass);
        double DeltaSelfEnergyRe(double density);
        double DeltaSelfEnergyIm(double density);
        double DeltaSelfEnergyConstant(double a, double b, double c, double E);
        std::complex<double> NucleonPropagator(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > nucleon_momentum);

        void NuclearCurrent(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > q, ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > pdir, ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > pcrs, ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > ppi, std::complex<double>  *jPtr);

        // Fill the wavefunctions
        void SolveWavefunctions();

        //______________________________________________________________
        // Properties

        bool debug_;
        // Nucleus
        unsigned int fZ;
        unsigned int fA;
        unsigned int fSampling;
        // Choice of current
        current_t current;
        // Choice of neutrino flavour
        flavour_t flavour;
        // Chocie of initial neutrino type
        nutype_t nutype;
        // Choice of form-factor approximation
        formfactors_t formfactors;
        // Constants
        ARConstants * fConstants;
        // Nuclear values
        ARSampledNucleus * fNucleus;
        // Wavefunction calculator
        ARWFSolution* fWfsolution;

        // Kinematics of the event
        double fE_nu;     // initial neutrino energy [GeV]
        double fE_l;      // scattered lepton energy [GeV]
        double fTheta_l;  // scattered lepton angle
        double fTheta_pi; // pion angle
        double fPhi;      // angle between lepton and pion

        double fLastE_pi;

        // Four-momenta of particles and transfers involved
        ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > fQ;    // momentum-transfer
        ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > fP_nu;    // incoming neutrino
        ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > fP_l;    // outgoing lepton/neutrino
        ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > fP_pi;    // outgoing pion
        ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > fP_n_i;    // incoming (stationary) nucleon
        ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > fP_n_o;    // outgoing nucleon
        ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > fP_direct;  // intermediary particle (Delta/nucleon) in direct diagrams
        ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > fP_cross;    // intermediary particle (Delta/nucleon) in crossed diagrams

        // Values and constants which will be used during the running
        // Get set to one of the mass values above in the constructor
        double fM_pi;      // mass of the pion
        double fM_l;       // mass of the lepton
        double fg_factor;  // Current factor. if(NC) = 1/2 G^2. if(CC) = 1/2 G^2 cos^2(theta_c)

        // Form factors for PiNDelta decay vertex
        double fF_direct_delta;
        double fF_direct_nucleon;
        double fF_cross_delta;
        double fF_cross_nucleon;

        // Wavefunction
        ARWavefunction* fUwave;
        ARWavefunction* fUwaveDr;
        ARWavefunction* fUwaveDtheta;

        std::complex<double>  fJ_hadronic[4];
};

} //namespace alvarezruso
} //namespace genie
#endif
//____________________________________________________________________________
/*!

\class    genie::AlvarezRusoCOHPiPXSec

\brief    Implementation of the Alvarez-Ruso coherent pion production model

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref

\author   Steve Dennis
          University of Warwick, Rutherford Appleton Laboratory

\created  October 5, 2012

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _ALVAREZ_RUSO_COH_XSEC_H_
#define _ALVAREZ_RUSO_COH_XSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/Coherent/XSection/AlvarezRusoCOHPiPDXSec.h"

namespace genie {

class XSecIntegratorI;
class Interaction;

class AlvarezRusoCOHPiPXSec : public XSecAlgorithmI {

public:
  AlvarezRusoCOHPiPXSec();
  AlvarezRusoCOHPiPXSec(string config);
  virtual ~AlvarezRusoCOHPiPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);

  //-- private data members loaded from config Registry or set to defaults

  const XSecIntegratorI * fXSecIntegrator;

  mutable alvarezruso::AlvarezRusoCOHPiPDXSec * fMultidiff;
  mutable const Interaction * fLastInteraction;
  //Parameters
  //bool fUseLookupTable;
  //double fa4;
  //double fa5;
  //double fb4;
  //double fb5;
  //double ffPi;
  //double ffStar;
  //double fMa;
  //double fRo;
};

}      // genie namespace

#endif  // _REIN_SEGHAL_COHPI_PXSEC_H_
//____________________________________________________________________________
/*!

\class   genie::BergerSehgalCOHPiPXSec2015

\brief   Computes the double differential cross section for CC & NC coherent
         pion production according to the \b Berger-Sehgal model.
         v(vbar)A->v(vbar)Api0, vA->l-Api+, vbarA->l+Api-

         The t-dependence of the triple differential cross (d^3xsec/dxdydt)
         is integrated out.

         Is a concrete implementation of the XSecAlgorithmI interface.

\ref     PRD 79, 053003 (2009) by Berger and Sehgal

\author  G. Perdue, H. Gallagher, D. Cherdack

\created 2014

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _BERGER_SEHGAL_COHPI_PXSEC_2015_H_
#define _BERGER_SEHGAL_COHPI_PXSEC_2015_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

  class XSecIntegratorI;

  class BergerSehgalCOHPiPXSec2015 : public XSecAlgorithmI {

    public:
      BergerSehgalCOHPiPXSec2015();
      BergerSehgalCOHPiPXSec2015(string config);
      virtual ~BergerSehgalCOHPiPXSec2015();

      //-- XSecAlgorithmI interface implementation
      double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
      double Integral        (const Interaction * i) const;
      bool   ValidProcess    (const Interaction * i) const;

      //-- overload the Algorithm::Configure() methods to load private data
      //   members from configuration options
      void Configure(const Registry & config);
      void Configure(string config);

    private:
      void LoadConfig(void);

      double ExactKinematicTerm(const Interaction * i) const;
      double PionCOMAbsMomentum(const Interaction * i) const;

      //-- private data members loaded from config Registry or set to defaults
      double fMa;          ///< axial mass
      double fRo;          ///< nuclear size scale parameter
      double fCos8c2;      ///< cos^2(Cabibbo angle)
      bool fRSPionXSec;    ///< Use Rein-Sehgal "style" pion-nucleon xsecs

      const XSecIntegratorI * fXSecIntegrator;
  };

}       // genie namespace

#endif  // _BERGER_SEHGAL_COHPI_PXSEC_2015_H_
//____________________________________________________________________________
/*!

\class    genie::BergerSehgalFMCOHPiPXSec2015

\brief    Computes the triple differential cross section for CC & NC coherent
          pion production according to the \b Berger-Sehgal model.
          v(vbar)A->v(vbar)Api0, vA->l-Api+, vbarA->l+Api-

         Is a concrete implementation of the XSecAlgorithmI interface.

\ref     PRD 79, 053003 (2009) by Berger and Sehgal

\author  G. Perdue, H. Gallagher, D. Cherdack

\created 2014

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _BERGER_SEHGAL_FM_COHPI_PXSEC_2015_H_
#define _BERGER_SEHGAL_FM_COHPI_PXSEC_2015_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

  class XSecIntegratorI;

  // this class should probably inherit from the infinite mass target version
  class BergerSehgalFMCOHPiPXSec2015 : public XSecAlgorithmI {

    public:
      BergerSehgalFMCOHPiPXSec2015();
      BergerSehgalFMCOHPiPXSec2015(string config);
      virtual ~BergerSehgalFMCOHPiPXSec2015();

      //-- XSecAlgorithmI interface implementation
      double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
      double Integral        (const Interaction * i) const;
      bool   ValidProcess    (const Interaction * i) const;

      //-- overload the Algorithm::Configure() methods to load private data
      //   members from configuration options
      void Configure(const Registry & config);
      void Configure(string config);

    private:
      void LoadConfig(void);

      double ExactKinematicTerm(const Interaction * i) const;
      double PionCOMAbsMomentum(const Interaction * i) const;

      //-- private data members loaded from config Registry or set to defaults
      double fMa;          ///< axial mass
      double fRo;          ///< nuclear size scale parameter
      double fCos8c2;      ///< cos^2(Cabibbo angle)
      bool fRSPionXSec;    ///< Use Rein-Sehgal "style" pion-nucleon xsecs

      const XSecIntegratorI * fXSecIntegrator;
  };

}       // genie namespace

#endif  // _BERGER_SEHGAL_FM_COHPI_PXSEC_2015_H_
//____________________________________________________________________________
/*!

\class    genie::CEvNSXSec

\brief    Computes the cross section for coherent elastic scattering.\n
          Is a concrete implementation of the XSecIntegratorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 12, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _COHERENT_ELASTIC_XSEC_H_
#define _COHERENT_ELASTIC_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class CEvNSXSec : public XSecIntegratorI {

public:
  CEvNSXSec();
  CEvNSXSec(string config);
  virtual ~CEvNSXSec();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

 private:

   void LoadConfig (void);
};

}       // genie namespace

#endif  // _COHERENT_ELASTIC_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::COHXSec

\brief    Computes the cross section for COH neutrino-nucleus pi production.\n
          Is a concrete implementation of the XSecIntegratorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 04, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _COH_XSEC_H_
#define _COH_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

  class COHXSec : public XSecIntegratorI {

    public:
      COHXSec();
      COHXSec(string config);
      virtual ~COHXSec();

      // XSecIntegratorI interface implementation
      double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

      // Overload the Algorithm::Configure() methods to load private data
      // members from configuration options
      void Configure(const Registry & config);
      void Configure(string config);

    private:
      void LoadConfig (void);

      double fQ2Min;  ///< lower bound of integration for Q^2 in Berger-Sehgal Model
      double fQ2Max;  ///< upper bound of integration for Q^2 in Berger-Sehgal Model
      double fTMax;   ///< upper bound for t = (q - p_pi)^2
  };

}       // genie namespace
#endif  // _COH_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::COHXSecAR

\brief    Computes the cross section for COH neutrino-nucleus pi production.\n
          Is a concrete implementation of the XSecIntegratorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 04, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _COH_XSEC_AR_H_
#define _COH_XSEC_AR_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class COHXSecAR : public XSecIntegratorI {
public:
  COHXSecAR();
  COHXSecAR(string config);
  virtual ~COHXSecAR();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

protected:
  bool fSplitIntegral;

private:
  void LoadConfig (void);
};

}       // genie namespace
#endif  // _COH_XSEC_H_
//____________________________________________________________________________
/*!
\class    genie::utils::gsl::wrap::NuclDensityMomentIntegrand

\brief    Integrand for the calculation of the k^th nuclear density moment:
	        \int_{0}^{\infinity} \rho_{A}(r) r^k d^{3}r
          where \rho_{A}(r) is the nuclear density for a nucleus with atomic
          mass number A.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 12, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _NUCL_DENSITY_MOMENT_INTEGRAND_H_
#define _NUCL_DENSITY_MOMENT_INTEGRAND_H_

#include <Math/IFunction.h>

namespace genie {
 namespace utils {
  namespace gsl   {
   namespace wrap   {

    class NuclDensityMomentIntegrand : public ROOT::Math::IBaseFunctionOneDim
    {
     public:
       NuclDensityMomentIntegrand(int A, int k /*, would be good to have options on \rho */);
      ~NuclDensityMomentIntegrand();
       // ROOT::Math::IBaseFunctionOneDim interface
       unsigned int                      NDim   (void)       const;
       double                            DoEval (double xin) const;
       ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
     private:
       int fA; // atomic mass
       int fK; // which nuclear density moment
    };

   } // wrap namespace
  } // gsl namespace
 } // utils namespace
} // genie namespace


#endif  // _NUCL_DENSITY_MOMENT_INTEGRAND_H_
//____________________________________________________________________________
/*!

\class    genie::PattonCEvNSPXSec

\brief    Differential cross section for v+As coherent elastic scattering.
          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      K.Patton, J.Engel, G.McLaughlin, and N.Schunck, arXiv:1207.0693v1

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 12, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _PATTON_ET_AL_COHERENT_ELASTIC_PXSEC_H_
#define _PATTON_ET_AL_COHERENT_ELASTIC_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class PattonCEvNSPXSec : public XSecAlgorithmI {

public:
  PattonCEvNSPXSec();
  PattonCEvNSPXSec(string config);
  virtual ~PattonCEvNSPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // Override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  void LoadConfig(void);

  // Calculate nuclear density moments
  double NuclearDensityMoment(int A, int k) const;

  const XSecIntegratorI * fXSecIntegrator;  ///< cross section integrator
  double fSin2thw;                          ///< sin^2(weinberg angle)

  // Parameters used for the numerical integration yielding nuclear density moments
  double fNuclDensMomentCalc_UpperIntegrationLimit; // upper integration limit (in units of nuclear radii R0*A^1/3)
  double fNuclDensMomentCalc_RelativeTolerance;     // relative tolerance for numerical integrator
  double fNuclDensMomentCalc_AbsoluteTolerance;     // absolute tolerance for numerical integrator
  int    fNuclDensMomentCalc_MaxNumOfEvaluations;   // maximum number of integran evaluations in numerical integration

};

}       // genie namespace

#endif  // _PATTON_ET_AL_COHERENT_ELASTIC_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalCOHPiPXSec

\brief    Computes the double differential cross section for CC & NC coherent
          pion production according to the \b Rein-Sehgal model.
          v(vbar)A->v(vbar)Api0, vA->l-Api+, vbarA->l+Api-

          The t-dependence of the triple differential cross (d^3xsec/dxdydt)
          is analytically integrated out.

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      D.Rein and L.M.Sehgal, Coherent pi0 production in neutrino
          reactions, Nucl.Phys.B223:29-144 (1983)

          D.Rein and L.M.Sehgal, PCAC and the Deficit of Forward Muons in pi+
          Production by Neutrinos, hep-ph/0606185

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 11, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_COHPI_PXSEC_H_
#define _REIN_SEHGAL_COHPI_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class ReinSehgalCOHPiPXSec : public XSecAlgorithmI {

public:
  ReinSehgalCOHPiPXSec();
  ReinSehgalCOHPiPXSec(string config);
  virtual ~ReinSehgalCOHPiPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);

  //-- private data members loaded from config Registry or set to defaults
  double fMa;      ///< axial mass
  double fReIm;    ///< Re/Im {forward pion scattering amplitude}
  double fRo;      ///< nuclear size scale parameter
  bool   fModPCAC; ///< use modified PCAC (including f/s lepton mass)

  const XSecIntegratorI * fXSecIntegrator;
};

}       // genie namespace

#endif  // _REIN_SEHGAL_COHPI_PXSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::AlvarezRusoCOHPiPXSec", payloadCode, "@",
"genie::BergerSehgalCOHPiPXSec2015", payloadCode, "@",
"genie::BergerSehgalFMCOHPiPXSec2015", payloadCode, "@",
"genie::CEvNSXSec", payloadCode, "@",
"genie::COHXSec", payloadCode, "@",
"genie::COHXSecAR", payloadCode, "@",
"genie::PattonCEvNSPXSec", payloadCode, "@",
"genie::ReinSehgalCOHPiPXSec", payloadCode, "@",
"genie::alvarezruso::ARConstants", payloadCode, "@",
"genie::alvarezruso::ARSampledNucleus", payloadCode, "@",
"genie::alvarezruso::AlvarezRusoCOHPiPDXSec", payloadCode, "@",
"genie::utils::gsl::wrap::NuclDensityMomentIntegrand", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhCohXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhCohXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhCohXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhCohXS() {
  TriggerDictionaryInitialization_libGPhCohXS_Impl();
}
