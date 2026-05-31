// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_FwUtl
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
#include "AppInit.h"
#include "BWFunc.h"
#include "Cache.h"
#include "CacheBranchFx.h"
#include "CacheBranchNtp.h"
#include "CmdLnArgParser.h"
#include "ConfigIsotopeMapUtils.h"
#include "GSimFiles.h"
#include "GUIUtils.h"
#include "HadXSUtils.h"
#include "KineUtils.h"
#include "PREM.h"
#include "PhysUtils.h"
#include "PrintUtils.h"
#include "Pythia8Singleton.h"
#include "Range1.h"
#include "RunOpt.h"
#include "StringUtils.h"
#include "Style.h"
#include "SystemUtils.h"
#include "T2KEvGenMetaData.h"
#include "TuneId.h"
#include "UnitUtils.h"
#include "XSecSplineList.h"
#include "XmlParserUtils.h"

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
            instance("genie", 0 /*version*/, "", 28,
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
            instance("genie::utils", 0 /*version*/, "", 29,
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
      namespace app_init {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLapp_init_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::app_init", 0 /*version*/, "", 31,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLapp_init_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLapp_init_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace bwfunc {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLbwfunc_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::bwfunc", 0 /*version*/, "", 66,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLbwfunc_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLbwfunc_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace gui {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLgui_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::gui", 0 /*version*/, "", 578,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLgui_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLgui_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace hadxs {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLhadxs_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::hadxs", 0 /*version*/, "", 625,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLhadxs_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLhadxs_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace kinematics {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLkinematics_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::kinematics", 0 /*version*/, "", 732,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLkinematics_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLkinematics_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace prem {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLprem_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::prem", 0 /*version*/, "", 845,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLprem_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLprem_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace phys {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLphys_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::phys", 0 /*version*/, "", 886,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLphys_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLphys_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace print {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLprint_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::print", 0 /*version*/, "", 940,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLprint_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLprint_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace str {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLstr_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::str", 0 /*version*/, "", 1247,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLstr_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLstr_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace style {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLstyle_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::style", 0 /*version*/, "", 1298,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLstyle_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLstyle_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace system {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLsystem_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::system", 0 /*version*/, "", 1343,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLsystem_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLsystem_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace units {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLunits_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::units", 0 /*version*/, "", 1587,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLunits_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLunits_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace xml {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLxml_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::xml", 0 /*version*/, "", 1772,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLxml_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLxml_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLCache_Dictionary();
   static void geniecLcLCache_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Cache*)
   {
      ::genie::Cache *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Cache));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Cache", "", 123,
                  typeid(::genie::Cache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCache_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Cache) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Cache*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Cache*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Cache*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCache_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Cache*>(nullptr))->GetClass();
      geniecLcLCache_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCache_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_geniecLcLCacheBranchI(void *p);
   static void deleteArray_geniecLcLCacheBranchI(void *p);
   static void destruct_geniecLcLCacheBranchI(void *p);
   static void streamer_geniecLcLCacheBranchI(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CacheBranchI*)
   {
      ::genie::CacheBranchI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::CacheBranchI >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::CacheBranchI", ::genie::CacheBranchI::Class_Version(), "CacheBranchI.h", 25,
                  typeid(::genie::CacheBranchI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::CacheBranchI::Dictionary, isa_proxy, 16,
                  sizeof(::genie::CacheBranchI) );
      instance.SetDelete(&delete_geniecLcLCacheBranchI);
      instance.SetDeleteArray(&deleteArray_geniecLcLCacheBranchI);
      instance.SetDestructor(&destruct_geniecLcLCacheBranchI);
      instance.SetStreamerFunc(&streamer_geniecLcLCacheBranchI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CacheBranchI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::CacheBranchI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::CacheBranchI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLCacheBranchFx(void *p = nullptr);
   static void *newArray_geniecLcLCacheBranchFx(Long_t size, void *p);
   static void delete_geniecLcLCacheBranchFx(void *p);
   static void deleteArray_geniecLcLCacheBranchFx(void *p);
   static void destruct_geniecLcLCacheBranchFx(void *p);
   static void streamer_geniecLcLCacheBranchFx(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CacheBranchFx*)
   {
      ::genie::CacheBranchFx *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::CacheBranchFx >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::CacheBranchFx", ::genie::CacheBranchFx::Class_Version(), "", 228,
                  typeid(::genie::CacheBranchFx), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::CacheBranchFx::Dictionary, isa_proxy, 16,
                  sizeof(::genie::CacheBranchFx) );
      instance.SetNew(&new_geniecLcLCacheBranchFx);
      instance.SetNewArray(&newArray_geniecLcLCacheBranchFx);
      instance.SetDelete(&delete_geniecLcLCacheBranchFx);
      instance.SetDeleteArray(&deleteArray_geniecLcLCacheBranchFx);
      instance.SetDestructor(&destruct_geniecLcLCacheBranchFx);
      instance.SetStreamerFunc(&streamer_geniecLcLCacheBranchFx);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CacheBranchFx*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::CacheBranchFx*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::CacheBranchFx*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLCacheBranchNtp(void *p = nullptr);
   static void *newArray_geniecLcLCacheBranchNtp(Long_t size, void *p);
   static void delete_geniecLcLCacheBranchNtp(void *p);
   static void deleteArray_geniecLcLCacheBranchNtp(void *p);
   static void destruct_geniecLcLCacheBranchNtp(void *p);
   static void streamer_geniecLcLCacheBranchNtp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CacheBranchNtp*)
   {
      ::genie::CacheBranchNtp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::CacheBranchNtp >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::CacheBranchNtp", ::genie::CacheBranchNtp::Class_Version(), "", 297,
                  typeid(::genie::CacheBranchNtp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::CacheBranchNtp::Dictionary, isa_proxy, 16,
                  sizeof(::genie::CacheBranchNtp) );
      instance.SetNew(&new_geniecLcLCacheBranchNtp);
      instance.SetNewArray(&newArray_geniecLcLCacheBranchNtp);
      instance.SetDelete(&delete_geniecLcLCacheBranchNtp);
      instance.SetDeleteArray(&deleteArray_geniecLcLCacheBranchNtp);
      instance.SetDestructor(&destruct_geniecLcLCacheBranchNtp);
      instance.SetStreamerFunc(&streamer_geniecLcLCacheBranchNtp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CacheBranchNtp*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::CacheBranchNtp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::CacheBranchNtp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCmdLnArgParser_Dictionary();
   static void geniecLcLCmdLnArgParser_TClassManip(TClass*);
   static void delete_geniecLcLCmdLnArgParser(void *p);
   static void deleteArray_geniecLcLCmdLnArgParser(void *p);
   static void destruct_geniecLcLCmdLnArgParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CmdLnArgParser*)
   {
      ::genie::CmdLnArgParser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::CmdLnArgParser));
      static ::ROOT::TGenericClassInfo 
         instance("genie::CmdLnArgParser", "", 356,
                  typeid(::genie::CmdLnArgParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCmdLnArgParser_Dictionary, isa_proxy, 0,
                  sizeof(::genie::CmdLnArgParser) );
      instance.SetDelete(&delete_geniecLcLCmdLnArgParser);
      instance.SetDeleteArray(&deleteArray_geniecLcLCmdLnArgParser);
      instance.SetDestructor(&destruct_geniecLcLCmdLnArgParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CmdLnArgParser*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::CmdLnArgParser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::CmdLnArgParser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCmdLnArgParser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::CmdLnArgParser*>(nullptr))->GetClass();
      geniecLcLCmdLnArgParser_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCmdLnArgParser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGSimFiles_Dictionary();
   static void geniecLcLGSimFiles_TClassManip(TClass*);
   static void *new_geniecLcLGSimFiles(void *p = nullptr);
   static void *newArray_geniecLcLGSimFiles(Long_t size, void *p);
   static void delete_geniecLcLGSimFiles(void *p);
   static void deleteArray_geniecLcLGSimFiles(void *p);
   static void destruct_geniecLcLGSimFiles(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GSimFiles*)
   {
      ::genie::GSimFiles *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GSimFiles));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GSimFiles", "", 509,
                  typeid(::genie::GSimFiles), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGSimFiles_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GSimFiles) );
      instance.SetNew(&new_geniecLcLGSimFiles);
      instance.SetNewArray(&newArray_geniecLcLGSimFiles);
      instance.SetDelete(&delete_geniecLcLGSimFiles);
      instance.SetDeleteArray(&deleteArray_geniecLcLGSimFiles);
      instance.SetDestructor(&destruct_geniecLcLGSimFiles);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GSimFiles*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GSimFiles*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GSimFiles*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGSimFiles_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GSimFiles*>(nullptr))->GetClass();
      geniecLcLGSimFiles_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGSimFiles_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRange1F_t_Dictionary();
   static void geniecLcLRange1F_t_TClassManip(TClass*);
   static void *new_geniecLcLRange1F_t(void *p = nullptr);
   static void *newArray_geniecLcLRange1F_t(Long_t size, void *p);
   static void delete_geniecLcLRange1F_t(void *p);
   static void deleteArray_geniecLcLRange1F_t(void *p);
   static void destruct_geniecLcLRange1F_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Range1F_t*)
   {
      ::genie::Range1F_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Range1F_t));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Range1F_t", "Range1.h", 28,
                  typeid(::genie::Range1F_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRange1F_t_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Range1F_t) );
      instance.SetNew(&new_geniecLcLRange1F_t);
      instance.SetNewArray(&newArray_geniecLcLRange1F_t);
      instance.SetDelete(&delete_geniecLcLRange1F_t);
      instance.SetDeleteArray(&deleteArray_geniecLcLRange1F_t);
      instance.SetDestructor(&destruct_geniecLcLRange1F_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Range1F_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Range1F_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Range1F_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRange1F_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Range1F_t*>(nullptr))->GetClass();
      geniecLcLRange1F_t_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRange1F_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRange1D_t_Dictionary();
   static void geniecLcLRange1D_t_TClassManip(TClass*);
   static void *new_geniecLcLRange1D_t(void *p = nullptr);
   static void *newArray_geniecLcLRange1D_t(Long_t size, void *p);
   static void delete_geniecLcLRange1D_t(void *p);
   static void deleteArray_geniecLcLRange1D_t(void *p);
   static void destruct_geniecLcLRange1D_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Range1D_t*)
   {
      ::genie::Range1D_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Range1D_t));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Range1D_t", "Range1.h", 42,
                  typeid(::genie::Range1D_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRange1D_t_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Range1D_t) );
      instance.SetNew(&new_geniecLcLRange1D_t);
      instance.SetNewArray(&newArray_geniecLcLRange1D_t);
      instance.SetDelete(&delete_geniecLcLRange1D_t);
      instance.SetDeleteArray(&deleteArray_geniecLcLRange1D_t);
      instance.SetDestructor(&destruct_geniecLcLRange1D_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Range1D_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Range1D_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Range1D_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRange1D_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Range1D_t*>(nullptr))->GetClass();
      geniecLcLRange1D_t_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRange1D_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRange1I_t_Dictionary();
   static void geniecLcLRange1I_t_TClassManip(TClass*);
   static void *new_geniecLcLRange1I_t(void *p = nullptr);
   static void *newArray_geniecLcLRange1I_t(Long_t size, void *p);
   static void delete_geniecLcLRange1I_t(void *p);
   static void deleteArray_geniecLcLRange1I_t(void *p);
   static void destruct_geniecLcLRange1I_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Range1I_t*)
   {
      ::genie::Range1I_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Range1I_t));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Range1I_t", "Range1.h", 56,
                  typeid(::genie::Range1I_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRange1I_t_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Range1I_t) );
      instance.SetNew(&new_geniecLcLRange1I_t);
      instance.SetNewArray(&newArray_geniecLcLRange1I_t);
      instance.SetDelete(&delete_geniecLcLRange1I_t);
      instance.SetDeleteArray(&deleteArray_geniecLcLRange1I_t);
      instance.SetDestructor(&destruct_geniecLcLRange1I_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Range1I_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Range1I_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Range1I_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRange1I_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Range1I_t*>(nullptr))->GetClass();
      geniecLcLRange1I_t_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRange1I_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLTuneId_Dictionary();
   static void geniecLcLTuneId_TClassManip(TClass*);
   static void delete_geniecLcLTuneId(void *p);
   static void deleteArray_geniecLcLTuneId(void *p);
   static void destruct_geniecLcLTuneId(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::TuneId*)
   {
      ::genie::TuneId *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::TuneId));
      static ::ROOT::TGenericClassInfo 
         instance("genie::TuneId", "TuneId.h", 37,
                  typeid(::genie::TuneId), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLTuneId_Dictionary, isa_proxy, 0,
                  sizeof(::genie::TuneId) );
      instance.SetDelete(&delete_geniecLcLTuneId);
      instance.SetDeleteArray(&deleteArray_geniecLcLTuneId);
      instance.SetDestructor(&destruct_geniecLcLTuneId);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::TuneId*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::TuneId*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::TuneId*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLTuneId_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::TuneId*>(nullptr))->GetClass();
      geniecLcLTuneId_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLTuneId_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRunOpt_Dictionary();
   static void geniecLcLRunOpt_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RunOpt*)
   {
      ::genie::RunOpt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RunOpt));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RunOpt", "", 1145,
                  typeid(::genie::RunOpt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRunOpt_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RunOpt) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RunOpt*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RunOpt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RunOpt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRunOpt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RunOpt*>(nullptr))->GetClass();
      geniecLcLRunOpt_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRunOpt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLutilscLcLT2KEvGenMetaData(void *p = nullptr);
   static void *newArray_geniecLcLutilscLcLT2KEvGenMetaData(Long_t size, void *p);
   static void delete_geniecLcLutilscLcLT2KEvGenMetaData(void *p);
   static void deleteArray_geniecLcLutilscLcLT2KEvGenMetaData(void *p);
   static void destruct_geniecLcLutilscLcLT2KEvGenMetaData(void *p);
   static void streamer_geniecLcLutilscLcLT2KEvGenMetaData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::T2KEvGenMetaData*)
   {
      ::genie::utils::T2KEvGenMetaData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::utils::T2KEvGenMetaData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::T2KEvGenMetaData", ::genie::utils::T2KEvGenMetaData::Class_Version(), "", 1400,
                  typeid(::genie::utils::T2KEvGenMetaData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::utils::T2KEvGenMetaData::Dictionary, isa_proxy, 16,
                  sizeof(::genie::utils::T2KEvGenMetaData) );
      instance.SetNew(&new_geniecLcLutilscLcLT2KEvGenMetaData);
      instance.SetNewArray(&newArray_geniecLcLutilscLcLT2KEvGenMetaData);
      instance.SetDelete(&delete_geniecLcLutilscLcLT2KEvGenMetaData);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLT2KEvGenMetaData);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLT2KEvGenMetaData);
      instance.SetStreamerFunc(&streamer_geniecLcLutilscLcLT2KEvGenMetaData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::T2KEvGenMetaData*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::T2KEvGenMetaData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::T2KEvGenMetaData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLXSecSplineList_Dictionary();
   static void geniecLcLXSecSplineList_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::XSecSplineList*)
   {
      ::genie::XSecSplineList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::XSecSplineList));
      static ::ROOT::TGenericClassInfo 
         instance("genie::XSecSplineList", "", 1641,
                  typeid(::genie::XSecSplineList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLXSecSplineList_Dictionary, isa_proxy, 0,
                  sizeof(::genie::XSecSplineList) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::XSecSplineList*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::XSecSplineList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::XSecSplineList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLXSecSplineList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::XSecSplineList*>(nullptr))->GetClass();
      geniecLcLXSecSplineList_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLXSecSplineList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr CacheBranchI::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CacheBranchI::Class_Name()
{
   return "genie::CacheBranchI";
}

//______________________________________________________________________________
const char *CacheBranchI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchI*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CacheBranchI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchI*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CacheBranchI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchI*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CacheBranchI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchI*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr CacheBranchFx::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CacheBranchFx::Class_Name()
{
   return "genie::CacheBranchFx";
}

//______________________________________________________________________________
const char *CacheBranchFx::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchFx*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CacheBranchFx::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchFx*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CacheBranchFx::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchFx*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CacheBranchFx::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchFx*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr CacheBranchNtp::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CacheBranchNtp::Class_Name()
{
   return "genie::CacheBranchNtp";
}

//______________________________________________________________________________
const char *CacheBranchNtp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchNtp*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CacheBranchNtp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchNtp*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CacheBranchNtp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchNtp*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CacheBranchNtp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::CacheBranchNtp*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
   namespace utils {
//______________________________________________________________________________
atomic_TClass_ptr T2KEvGenMetaData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *T2KEvGenMetaData::Class_Name()
{
   return "genie::utils::T2KEvGenMetaData";
}

//______________________________________________________________________________
const char *T2KEvGenMetaData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::utils::T2KEvGenMetaData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int T2KEvGenMetaData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::utils::T2KEvGenMetaData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *T2KEvGenMetaData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::utils::T2KEvGenMetaData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *T2KEvGenMetaData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::utils::T2KEvGenMetaData*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie::utils
} // namespace genie::utils
namespace ROOT {
} // end of namespace ROOT for class ::genie::Cache

namespace genie {
//______________________________________________________________________________
void CacheBranchI::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::CacheBranchI.

   TObject::Streamer(R__b);
}

} // namespace genie
namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLCacheBranchI(void *p) {
      delete (static_cast<::genie::CacheBranchI*>(p));
   }
   static void deleteArray_geniecLcLCacheBranchI(void *p) {
      delete [] (static_cast<::genie::CacheBranchI*>(p));
   }
   static void destruct_geniecLcLCacheBranchI(void *p) {
      typedef ::genie::CacheBranchI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLCacheBranchI(TBuffer &buf, void *obj) {
      ((::genie::CacheBranchI*)obj)->::genie::CacheBranchI::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::CacheBranchI

namespace genie {
//______________________________________________________________________________
void CacheBranchFx::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::CacheBranchFx.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::CacheBranchFx thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::CacheBranchI baseClass0;
      baseClass0::Streamer(R__b);
      { TString R__str; R__str.Streamer(R__b); fName = R__str.Data(); }
      {
         map<double,double> &R__stl =  fFx;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef double Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      R__b >> fSpline;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::CacheBranchI baseClass0;
      baseClass0::Streamer(R__b);
      { TString R__str = fName.c_str(); R__str.Streamer(R__b);}
      {
         map<double,double> &R__stl =  fFx;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<double,double>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      R__b << fSpline;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCacheBranchFx(void *p) {
      return  p ? new(p) ::genie::CacheBranchFx : new ::genie::CacheBranchFx;
   }
   static void *newArray_geniecLcLCacheBranchFx(Long_t nElements, void *p) {
      return p ? new(p) ::genie::CacheBranchFx[nElements] : new ::genie::CacheBranchFx[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCacheBranchFx(void *p) {
      delete (static_cast<::genie::CacheBranchFx*>(p));
   }
   static void deleteArray_geniecLcLCacheBranchFx(void *p) {
      delete [] (static_cast<::genie::CacheBranchFx*>(p));
   }
   static void destruct_geniecLcLCacheBranchFx(void *p) {
      typedef ::genie::CacheBranchFx current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLCacheBranchFx(TBuffer &buf, void *obj) {
      ((::genie::CacheBranchFx*)obj)->::genie::CacheBranchFx::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::CacheBranchFx

namespace genie {
//______________________________________________________________________________
void CacheBranchNtp::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::CacheBranchNtp.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::CacheBranchNtp thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::CacheBranchI baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> fNtp;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::CacheBranchI baseClass0;
      baseClass0::Streamer(R__b);
      R__b << fNtp;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCacheBranchNtp(void *p) {
      return  p ? new(p) ::genie::CacheBranchNtp : new ::genie::CacheBranchNtp;
   }
   static void *newArray_geniecLcLCacheBranchNtp(Long_t nElements, void *p) {
      return p ? new(p) ::genie::CacheBranchNtp[nElements] : new ::genie::CacheBranchNtp[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCacheBranchNtp(void *p) {
      delete (static_cast<::genie::CacheBranchNtp*>(p));
   }
   static void deleteArray_geniecLcLCacheBranchNtp(void *p) {
      delete [] (static_cast<::genie::CacheBranchNtp*>(p));
   }
   static void destruct_geniecLcLCacheBranchNtp(void *p) {
      typedef ::genie::CacheBranchNtp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLCacheBranchNtp(TBuffer &buf, void *obj) {
      ((::genie::CacheBranchNtp*)obj)->::genie::CacheBranchNtp::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::CacheBranchNtp

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLCmdLnArgParser(void *p) {
      delete (static_cast<::genie::CmdLnArgParser*>(p));
   }
   static void deleteArray_geniecLcLCmdLnArgParser(void *p) {
      delete [] (static_cast<::genie::CmdLnArgParser*>(p));
   }
   static void destruct_geniecLcLCmdLnArgParser(void *p) {
      typedef ::genie::CmdLnArgParser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::CmdLnArgParser

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGSimFiles(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GSimFiles : new ::genie::GSimFiles;
   }
   static void *newArray_geniecLcLGSimFiles(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GSimFiles[nElements] : new ::genie::GSimFiles[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGSimFiles(void *p) {
      delete (static_cast<::genie::GSimFiles*>(p));
   }
   static void deleteArray_geniecLcLGSimFiles(void *p) {
      delete [] (static_cast<::genie::GSimFiles*>(p));
   }
   static void destruct_geniecLcLGSimFiles(void *p) {
      typedef ::genie::GSimFiles current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GSimFiles

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRange1F_t(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Range1F_t : new ::genie::Range1F_t;
   }
   static void *newArray_geniecLcLRange1F_t(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Range1F_t[nElements] : new ::genie::Range1F_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRange1F_t(void *p) {
      delete (static_cast<::genie::Range1F_t*>(p));
   }
   static void deleteArray_geniecLcLRange1F_t(void *p) {
      delete [] (static_cast<::genie::Range1F_t*>(p));
   }
   static void destruct_geniecLcLRange1F_t(void *p) {
      typedef ::genie::Range1F_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Range1F_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRange1D_t(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Range1D_t : new ::genie::Range1D_t;
   }
   static void *newArray_geniecLcLRange1D_t(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Range1D_t[nElements] : new ::genie::Range1D_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRange1D_t(void *p) {
      delete (static_cast<::genie::Range1D_t*>(p));
   }
   static void deleteArray_geniecLcLRange1D_t(void *p) {
      delete [] (static_cast<::genie::Range1D_t*>(p));
   }
   static void destruct_geniecLcLRange1D_t(void *p) {
      typedef ::genie::Range1D_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Range1D_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRange1I_t(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Range1I_t : new ::genie::Range1I_t;
   }
   static void *newArray_geniecLcLRange1I_t(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Range1I_t[nElements] : new ::genie::Range1I_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRange1I_t(void *p) {
      delete (static_cast<::genie::Range1I_t*>(p));
   }
   static void deleteArray_geniecLcLRange1I_t(void *p) {
      delete [] (static_cast<::genie::Range1I_t*>(p));
   }
   static void destruct_geniecLcLRange1I_t(void *p) {
      typedef ::genie::Range1I_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Range1I_t

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLTuneId(void *p) {
      delete (static_cast<::genie::TuneId*>(p));
   }
   static void deleteArray_geniecLcLTuneId(void *p) {
      delete [] (static_cast<::genie::TuneId*>(p));
   }
   static void destruct_geniecLcLTuneId(void *p) {
      typedef ::genie::TuneId current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::TuneId

namespace ROOT {
} // end of namespace ROOT for class ::genie::RunOpt

namespace genie {
   namespace utils {
//______________________________________________________________________________
void T2KEvGenMetaData::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::utils::T2KEvGenMetaData.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::utils::T2KEvGenMetaData thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      { TString R__str; R__str.Streamer(R__b); jnubeam_version = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); jnubeam_file = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); detector_location = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); geom_file = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); geom_top_volume = R__str.Data(); }
      R__b >> geom_length_units;
      R__b >> geom_density_units;
      R__b >> using_root_geom;
      R__b >> using_hist_flux;
      {
         map<int,double> &R__stl =  target_mix;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef int Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<int,TH1D*> &R__stl =  flux_hists;
         R__stl.clear();
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class TH1D *));
         if (R__tcl2==0) {
            Error("flux_hists streamer","Missing the TClass object for class TH1D *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            TH1D* R__t2;
            R__t2 = (TH1D*)R__b.ReadObjectAny(R__tcl2);
            typedef int Value_t;
            std::pair<Value_t const, class TH1D * > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TObject::Streamer(R__b);
      { TString R__str = jnubeam_version.c_str(); R__str.Streamer(R__b);}
      { TString R__str = jnubeam_file.c_str(); R__str.Streamer(R__b);}
      { TString R__str = detector_location.c_str(); R__str.Streamer(R__b);}
      { TString R__str = geom_file.c_str(); R__str.Streamer(R__b);}
      { TString R__str = geom_top_volume.c_str(); R__str.Streamer(R__b);}
      R__b << geom_length_units;
      R__b << geom_density_units;
      R__b << using_root_geom;
      R__b << using_hist_flux;
      {
         map<int,double> &R__stl =  target_mix;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<int,double>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      {
         map<int,TH1D*> &R__stl =  flux_hists;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<int,TH1D*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie::utils
} // namespace genie::utils
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLutilscLcLT2KEvGenMetaData(void *p) {
      return  p ? new(p) ::genie::utils::T2KEvGenMetaData : new ::genie::utils::T2KEvGenMetaData;
   }
   static void *newArray_geniecLcLutilscLcLT2KEvGenMetaData(Long_t nElements, void *p) {
      return p ? new(p) ::genie::utils::T2KEvGenMetaData[nElements] : new ::genie::utils::T2KEvGenMetaData[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLT2KEvGenMetaData(void *p) {
      delete (static_cast<::genie::utils::T2KEvGenMetaData*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLT2KEvGenMetaData(void *p) {
      delete [] (static_cast<::genie::utils::T2KEvGenMetaData*>(p));
   }
   static void destruct_geniecLcLutilscLcLT2KEvGenMetaData(void *p) {
      typedef ::genie::utils::T2KEvGenMetaData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLutilscLcLT2KEvGenMetaData(TBuffer &buf, void *obj) {
      ((::genie::utils::T2KEvGenMetaData*)obj)->::genie::utils::T2KEvGenMetaData::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::utils::T2KEvGenMetaData

namespace ROOT {
} // end of namespace ROOT for class ::genie::XSecSplineList

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = nullptr);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 1018,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,double>","std::__1::map<int, double, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,double>*>(nullptr))->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete (static_cast<map<int,double>*>(p));
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] (static_cast<map<int,double>*>(p));
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace ROOT {
   static TClass *maplEintcOTH1DmUgR_Dictionary();
   static void maplEintcOTH1DmUgR_TClassManip(TClass*);
   static void *new_maplEintcOTH1DmUgR(void *p = nullptr);
   static void *newArray_maplEintcOTH1DmUgR(Long_t size, void *p);
   static void delete_maplEintcOTH1DmUgR(void *p);
   static void deleteArray_maplEintcOTH1DmUgR(void *p);
   static void destruct_maplEintcOTH1DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TH1D*>*)
   {
      map<int,TH1D*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TH1D*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TH1D*>", -2, "map", 1018,
                  typeid(map<int,TH1D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTH1DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TH1D*>) );
      instance.SetNew(&new_maplEintcOTH1DmUgR);
      instance.SetNewArray(&newArray_maplEintcOTH1DmUgR);
      instance.SetDelete(&delete_maplEintcOTH1DmUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTH1DmUgR);
      instance.SetDestructor(&destruct_maplEintcOTH1DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TH1D*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,TH1D*>","std::__1::map<int, TH1D*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, TH1D*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,TH1D*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTH1DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,TH1D*>*>(nullptr))->GetClass();
      maplEintcOTH1DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTH1DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTH1DmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,TH1D*> : new map<int,TH1D*>;
   }
   static void *newArray_maplEintcOTH1DmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,TH1D*>[nElements] : new map<int,TH1D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTH1DmUgR(void *p) {
      delete (static_cast<map<int,TH1D*>*>(p));
   }
   static void deleteArray_maplEintcOTH1DmUgR(void *p) {
      delete [] (static_cast<map<int,TH1D*>*>(p));
   }
   static void destruct_maplEintcOTH1DmUgR(void *p) {
      typedef map<int,TH1D*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,TH1D*>

namespace ROOT {
   static TClass *maplEdoublecOdoublegR_Dictionary();
   static void maplEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_maplEdoublecOdoublegR(void *p = nullptr);
   static void *newArray_maplEdoublecOdoublegR(Long_t size, void *p);
   static void delete_maplEdoublecOdoublegR(void *p);
   static void deleteArray_maplEdoublecOdoublegR(void *p);
   static void destruct_maplEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,double>*)
   {
      map<double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,double>", -2, "map", 1018,
                  typeid(map<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<double,double>) );
      instance.SetNew(&new_maplEdoublecOdoublegR);
      instance.SetNewArray(&newArray_maplEdoublecOdoublegR);
      instance.SetDelete(&delete_maplEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOdoublegR);
      instance.SetDestructor(&destruct_maplEdoublecOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<double,double>","std::__1::map<double, double, std::__1::less<double>, std::__1::allocator<std::__1::pair<double const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<double,double>*>(nullptr))->GetClass();
      maplEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<double,double> : new map<double,double>;
   }
   static void *newArray_maplEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<double,double>[nElements] : new map<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOdoublegR(void *p) {
      delete (static_cast<map<double,double>*>(p));
   }
   static void deleteArray_maplEdoublecOdoublegR(void *p) {
      delete [] (static_cast<map<double,double>*>(p));
   }
   static void destruct_maplEdoublecOdoublegR(void *p) {
      typedef map<double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<double,double>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGFwUtl() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGFwUtl) = RecordReadRules_libGFwUtl();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGFwUtl));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGFwUtl_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Framework/Utils",
"GENIE",
"GENIE/Framework/Utils",
"../include",
"../include/GENIE",
"../include/GENIE/Framework/Utils",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Framework/Utils/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGFwUtl dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  Cache;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Utils/CacheBranchI.h")))  CacheBranchI;}
namespace genie{class  CacheBranchFx;}
namespace genie{class  CacheBranchNtp;}
namespace genie{class  CmdLnArgParser;}
namespace genie{class  GSimFiles;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Utils/Range1.h")))  __attribute__((annotate("$clingAutoload$Framework/Interaction/Interaction.h")))  Range1F_t;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Utils/Range1.h")))  __attribute__((annotate("$clingAutoload$Framework/Interaction/Interaction.h")))  Range1D_t;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Utils/Range1.h")))  __attribute__((annotate("$clingAutoload$Framework/Interaction/Interaction.h")))  Range1I_t;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Utils/TuneId.h")))  TuneId;}
namespace genie{class  RunOpt;}
namespace genie{namespace utils{class  T2KEvGenMetaData;}}
namespace genie{class  XSecSplineList;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGFwUtl dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\namespace  genie::utils::app_init

\brief      Initialization code commonly occuring in GENIE apps,
            factored out from existing apps for convenience.
            Not generic GENIE initialization code.

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    January 31, 2013

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _APP_INIT_UTILS_H_
#define _APP_INIT_UTILS_H_

#include <string>
using std::string;

namespace genie {
namespace utils {

namespace app_init
{
  void RandGen        (long int seed);
  void XSecTable      (string inpfile, bool require_table);
  void MesgThresholds (string inpfile);
  void CacheFile      (string inpfile);

} // app_init namespace
} // utils namespace
} // genie namespace

#endif // _APP_INIT_UTILS_H_
//____________________________________________________________________________
/*!

\namespace genie::utils::bwfunc

\brief     Breit Wigner functions

\author    Costas Andreopoulos <c.andreopoulos \at cern.ch>
           University of Liverpool

\created   November 22, 2004

\cpright   Copyright (c) 2003-2025, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org           
*/
//____________________________________________________________________________

#ifndef _BREIT_WIGNER_UTILS_H_
#define _BREIT_WIGNER_UTILS_H_

namespace genie  {
namespace utils  {
namespace bwfunc {
  //-- A realistic Breit-Wigner distribution with L-dependent and Wlimit
  double BreitWignerLGamma(
             double W, int L, double mass, double width0, double norm);



  //-- A realistic Breit-Wigner distribution with L-dependent width.
  double BreitWignerL(
             double W, int L, double mass, double width0, double norm);

  //-- A simple Breit-Wigner distribution.
  double BreitWigner(double W, double mass, double width, double norm);

} // bwfunc namespace
} // utils  namespace
} // genie  namespace

#endif   // _BREIT_WIGNER_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::Cache

\brief    GENIE Cache Memory

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 26, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _CACHE_H_
#define _CACHE_H_

#include <map>
#include <string>
#include <ostream>

#include <TFile.h>

using std::map;
using std::string;
using std::ostream;

namespace genie {

class Cache;
class CacheBranchI;

ostream & operator << (ostream & stream, const Cache & cache);

class Cache
{
public:

  static Cache * Instance(void);

  //! cache file
  void OpenCacheFile (string filename);

  //! finding/adding cache branches
  CacheBranchI * FindCacheBranch (string key);
  void           AddCacheBranch  (string key, CacheBranchI * branch);
  string         CacheBranchKey  (string k0, string k1="", string k2="") const;

  //! removing cache branches
  void RmCacheBranch         (string key);
  void RmAllCacheBranches    (void);
  void RmMatchedCacheBranches(string key_substring);

  //! print cache buffers
  void   Print (ostream & stream) const;
  friend ostream & operator << (ostream & stream, const Cache & cache);

private:

  //! load/save
  void Load (void);
  void Save (void);

  //! singleton instance
  static Cache * fInstance;

  //! map of cache buffers & cache file
  map<string, CacheBranchI * > * fCacheMap;
  TFile *                        fCacheFile;

  //! singleton class: constructors are private
  Cache();
  Cache(const Cache & cache);
  virtual ~Cache();

  //! proper de-allocation of the singleton object
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (Cache::fInstance !=0) {
            delete Cache::fInstance;
            Cache::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace
#endif // _CACHE_H_
//____________________________________________________________________________
/*!

\class    genie::CacheBranchFx

\brief    A simple cache branch storing the cached data in a TNtuple

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool
          
          Update May 15, 2022 IK: 
          Now type of spline can be:  TSpline3, TSpline5 and 
          ROOT::Math::GSLInterpolator (LINEAR, POLYNOMIAL, CSPLINE, CSPLINE_PERIODIC,
          AKIMA, AKIMA_PERIODIC)
          
\ref      [1] GENIE docdb 297

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool \n
          Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research

\created  November 26, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _CACHE_BRANCH_FUNC_X_H_
#define _CACHE_BRANCH_FUNC_X_H_

#include <iostream>
#include <string>
#include <map>

#include "Framework/Numerical/Spline.h"
#include "Framework/Utils/CacheBranchI.h"

using std::string;
using std::ostream;
using std::map;

namespace genie {

class CacheBranchFx;
ostream & operator << (ostream & stream, const CacheBranchFx & cbntp);

class CacheBranchFx : public CacheBranchI
{
public:
  using TObject::Print; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings

  CacheBranchFx();
  CacheBranchFx(string name);
  ~CacheBranchFx();

  const map<double,double> & Map (void) const { return fFx;     }
  Spline *                   Spl (void) const { return fSpline; }

  void CreateSpline(string type = "TSpline3");
  void AddValues(double x, double y);

  void Reset (void);
  void Print (ostream & stream) const;

  double operator () (double x) const;
  friend ostream & operator << (ostream & stream, const CacheBranchFx & cbntp);

private:
  void Init    (void);
  void CleanUp (void);

  string             fName;   ///< cache branch name
  map<double,double> fFx;     ///< x->y map
  Spline *           fSpline; ///< spline y = f(x)

ClassDef(CacheBranchFx,1)
};

}      // genie namespace
#endif // _CACHE_BRANCH_FUNC_X_H_
//____________________________________________________________________________
/*!

\class    genie::CacheBranchNtp

\brief    A simple cache branch storing the cached data in a TNtuple

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  November 26, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _CACHE_BRANCH_NTP_H_
#define _CACHE_BRANCH_NTP_H_

#include <iostream>
#include <string>
#include <TNtupleD.h>

#include "Framework/Utils/CacheBranchI.h"

using std::string;
using std::ostream;

namespace genie {

class CacheBranchNtp;
ostream & operator << (ostream & stream, const CacheBranchNtp & cbntp);

class CacheBranchNtp : public CacheBranchI
{
public:
  using TObject::Print; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings

  CacheBranchNtp();
  CacheBranchNtp(string name, string brdef);
  ~CacheBranchNtp();

  inline TNtupleD * Ntuple (void) const { return fNtp; }

  void CreateNtuple(string name, string branch_def);

  void Reset (void);
  void Print (ostream & stream) const;

  TNtupleD *       operator () (void) const;
  friend ostream & operator << (ostream & stream, const CacheBranchNtp & cbntp);

private:
  void Init    (void);
  void CleanUp (void);

  TNtupleD * fNtp;

ClassDef(CacheBranchNtp,1)
};

}      // genie namespace
#endif // _CACHE_BRANCH_NTP_H_
//____________________________________________________________________________
/*!

\class      genie::CmdLnArgParser

\brief      Command line argument parser

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    July 23, 2010

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _CMD_LINE_ARG_PARSER_H_
#define _CMD_LINE_ARG_PARSER_H_

#include <string>
#include <vector>

using std::string;
using std::vector;

namespace genie {

class CmdLnArgParser {

public:
  CmdLnArgParser(int argc, char **argv);
 ~CmdLnArgParser();

  // Methods to check the existence of single character switches (eg -f, -s)
  // and retrieve the command-line argument following the switch

  bool    OptionExists (char opt);   ///< was option set?
  char *  Arg          (char opt);   ///< return argument following -`opt'

  string         ArgAsString       (char opt);
  vector<string> ArgAsStringTokens (char opt, string delimeter);
  double         ArgAsDouble       (char opt);
  vector<double> ArgAsDoubleTokens (char opt, string delimeter);
  int            ArgAsInt          (char opt);
  vector<int>    ArgAsIntTokens    (char opt, string delimeter);
  long           ArgAsLong         (char opt);
  vector<long>   ArgAsLongTokens   (char opt, string delimeter);

  // As above, but supporting multi-character switches (eg --with-x-file )

  bool    OptionExists (string opt); ///< was option set?
  char *  Arg          (string opt); ///< return argument following --`opt'

  string         ArgAsString       (string opt);
  double         ArgAsDouble       (string opt);
  int            ArgAsInt          (string opt);
  long           ArgAsLong         (string opt);

private:

  int    fArgc;
  char **fArgv;

};

}      // genie namespace

#endif // _CMD_LINE_ARG_PARSER_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::config

\brief      Simple functions for loading and reading nucleus dependent keys
            from config files.

\author     Brian Coopersmith, University of Rochester

\created    October 23, 2014

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________
#ifndef _CONFIG_UTILS_H
#define _CONFIG_UTILS_H

#include <map>
#include "Framework/Interaction/Target.h"

namespace genie {
class Registry;

namespace utils {
namespace config {
bool GetValueFromNuclearMaps(
    const Target& target, const std::map<int, double>& nuc_to_val,
    const std::map<std::pair<int, int>, double>& nucA_range_to_val,
    double* val);
void LoadAllNucARangesForKey(const char* key_name, const char* log_tool_name,
                             Registry* config,
                             std::map<std::pair<int, int>, double>* nuc_rangeA_to_val);
void LoadAllIsotopesForKey(const char* key_name, const char* log_tool_name,
                           Registry* config, std::map<int, double>* nuc_to_val);

bool GetDoubleKeyPDG(const char* valName, const int pdgc,
                     Registry* config, double* val);
bool GetDoubleKeyRangeNucA(const char* valName, const int lowA,
                           const int highA, Registry* config, double* val);

}  // namespace config
}  // namespace utils
}  // namespace genie

#endif  // _CONFIG_UTILS_H
//__________________________________________________________________________
/*!

\class    GSimFiles

\brief    Holds GENIE simulation outputs (cross-section ROOT files, simulated
          event samples in GHEP, GST or other format) typically used as inputs
          in physics validation / tuning apps.

          The file lists are stored in XML format as shown below.

          Simulation results from multiple version of the code or from multiple
          physics models can be stored.

          <?xml version="1.0" encoding="ISO-8859-1"?>
          <genie_simulation_outputs>
            <model name="a_model_name">
               <xsec_file>             /path/model_1/xsec.root     </xsec_file>
               <evt_file format="gst"> /path/model_1/evtfile0.root </evt_file>
               <evt_file format="gst"> /path/model_1/evtfile1.root </evt_file>
               <evt_file format="gst"> /path/model_1/evtfile2.root </evt_file>
               ...
            </model>
            <model name="another_model_name">
               <xsec_file>             /path/model_2/xsec.root     </xsec_file>
               <evt_file format="gst"> /path/model_2/evtfile0.root </evt_file>
               <evt_file format="gst"> /path/model_2/evtfile1.root </evt_file>
               <evt_file format="gst"> /path/model_2/evtfile2.root </evt_file>
               ...
             </model>
             ...
          </genie_simulation_outputs>

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Oct 12, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//__________________________________________________________________________

#ifndef _GSIM_FILES_H_
#define _GSIM_FILES_H_

#include <iostream>
#include <string>
#include <vector>

#include <TChain.h>
#include <TTree.h>
#include <TFile.h>

using std::ostream;
using std::string;
using std::vector;

namespace genie {

class GSimFiles;
ostream & operator << (ostream & stream, const GSimFiles & gsimf);

class GSimFiles
{
public:
  GSimFiles(bool chain=true, const int nmaxmodels=10);
 ~GSimFiles(void);

  int              NModels       (void)             const;
  int              FindModelID   (string tag)       const;
  string           ModelTag      (int imodel)       const;
  TFile *          XSecFile      (int imodel)       const;
  string           XSecFileName  (int imodel)       const;
  TChain *         EvtChain      (int imodel)       const;
  vector<string> & EvtFileNames  (int imodel)       const;
  const string   & PathToXMLFile(void)              const;
  void             Print         (ostream & stream) const;
  bool             LoadFromFile  (string xmlfile);

  friend ostream & operator << (ostream & stream, const GSimFiles & gsimf);

private:

  void Init    (const int nmaxmodels);
  void CleanUp (void);

  bool                      fDoChain;
  int                       fNModels;
  vector<string>          * fModelTag;
  vector<TFile*>          * fXSecFile;
  vector<string>          * fXSecFileName;
  vector<TChain*>         * fEvtChain;
  vector<vector<string> > * fEvtFileNames;
  string                    fPath2XMLFile;
};

}      // genie namespace

#endif // _GSIM_FILES_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::gui

\brief      Simple utilities for GENIE Graphical User Interface widgets

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    January 12, 2004

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _GUI_UTILS_H_
#define _GUI_UTILS_H_

#include <vector>
#include <string>

#include <TGListBox.h>
#include <TGComboBox.h>

using std::vector;
using std::string;

namespace genie {
namespace utils {
namespace gui
{
  //-- ListBox methods

  void   FillListBox               (TGListBox * lb, const char * lbitems[]);
  void   FillListBox               (TGListBox * lb, const vector<string> * lbitems);
  void   SelectAllListBoxEntries   (TGListBox * lb);
  void   ResetAllListBoxSelections (TGListBox * lb);
  string ListBoxSelectionAsString  (TGListBox * lb, const char * lbitems[]);
  int    ListBoxSelectionId        (const char * lbitems[], const char * sel);

  //-- ComboBox methods

  void   FillComboBox              (TGComboBox * cb, const char * cbitems[]);
  void   FillComboBox              (TGComboBox * cb, const vector<string> * cbitems);
  string ComboBoxSelectionAsString (TGComboBox * cb, const char * cbitems[]);
  int    ComboBoxSelectionId       (const char * cbitems[], const char * sel);

}      // gui   namespace
}      // utils namespace
}      // genie namespace

#endif // _GUI_UTILS_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::hadxs

\brief      Simple functions and data for computing hadron interaction xsecs

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    March 11, 2004

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _HADXS_UTILS_H_
#define _HADXS_UTILS_H_

namespace genie {
namespace utils {

namespace hadxs
{
  // The inelastic pion-nucleon cross section used in Rein-Sehgal coherent pi0
  // production xsec: D.Rein and L.M.Sehgal,Nucl.Phys.B223:29-144 (1983).
  // The data used here are coming from CERN-HERA 79-01, 1979, 'Compilation of
  // cross sections I - pi- and pi+ induced reactions'. Also, look at the
  // Fig.3 in Rein-Sehgal's paper.
  // However, the actual values I am using are copied from Hugh Gallagher's
  // NeuGEN inel() function which is adapted here.
  static const int    kInelNDataPoints = 60;
  static const double kInelMinLog10P   = -0.975;
  static const double kIneldLog10P     =  0.05;
  static const double kInelSig[kInelNDataPoints] = {
         1.596,   3.192,   5.692,   5.596,   3.788,   6.528,
        22.931,  43.462,  55.580,  36.761,  19.754,  12.588,
        12.914,  12.500,  13.707,  15.082,  19.671,  16.860,
        21.708,  29.128,  21.752,  22.444,  23.698,  23.847,
        23.067,  25.336,  25.366,  25.273,  24.646,  24.003,
        23.636,  23.615,  23.029,  22.667,  22.434,  21.901,
        21.763,  22.235,  20.177,  21.707,  20.827,  21.102,
        21.028,  21.155,  20.932,  20.577,  20.865,  21.122,
        21.193,  21.081,  20.611,  20.788,  20.591,  20.514,
        20.796,  20.813,  20.425,  20.460,  20.495,  20.530
  };

  // Total pion nucleon cross section data
  // Data from Hugh Gallagher's NeuGEN total() function.
  static const int    kTotNDataPoints = 60;
  static const double kTotMinLog10P   = -0.975;
  static const double kTotdLog10P     =  0.05;
  static const double kTotSig[kTotNDataPoints] = {
         3.252,   6.504,  12.316,  18.314,  22.600,  31.435,
        53.933,  84.872, 102.626,  87.084,  60.234,  39.922,
        32.804,  28.935,  27.952,  29.439,  36.824,  31.814,
        35.152,  50.062,  39.079,  35.741,  37.390,  35.575,
        34.043,  34.363,  34.171,  32.990,  32.110,  31.316,
        30.621,  29.918,  29.134,  28.461,  27.985,  27.208,
        26.749,  27.111,  25.047,  26.357,  25.393,  25.777,
        25.467,  25.305,  25.008,  24.814,  24.662,  24.481,
        24.453,  24.336,  24.099,  24.098,  24.010,  23.908,
        23.992,  24.058,  23.805,  23.808,  23.811,  23.815
  };

  // Previous (2.8) default has been to treat pions as charged for purposes of mass.
  double InelasticPionNucleonXSec (double Epion, bool isChargedPion=true);
  double TotalPionNucleonXSec     (double Epion, bool isChargedPion=true);


  // Pion-Nucleon cross-sections as implemented by C. Berger for re-implementation
  // of the Rein-Sehgal coherent pion production model, and provided to D. Cherdack.
  //
  // C. Berger & L. Sehgal
  // "PCAC and coherent pion production by low energy neutrinos"
  // http://arxiv.org/abs/0812.2653
  namespace berger
  {
    double InelasticPionNucleonXSec (double Epion, bool isChargedPion=true);
    double TotalPionNucleonXSec     (double Epion, bool isChargedPion=true);
    double PionNucleonXSec     (double Epion, bool get_total, bool isChargedPion=true);
    //Pion-Nucleus xsec extrapolated from pion-Carbon data
    int    PionNucleusXSec(double tpi, double ppistar, double t_new, double A, double &tpilow, double &siglow, double &tpihigh, double &sighigh);
                           //Input: the pion kinetic energy,
                           //       the pion CMS momentum,
                           //       the square if the 4-p transfer from the pion to the nucleus, and
                           //       the number of nucleons in teh target nucleus
                           //Also pass pointers to varaibles which store the output:
                           //       the data points (xsec -vs- tpi) above and below the input tpi
                           //       an interpolation algorithm must be used to determine the xsec from this information
  }
}      // hadxs namespace
}      // utils namespace
}      // genie namespace

#endif // _HADXS_UTILS_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::kinematics

\brief      Kinematical utilities

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

            Changes required to implement the GENIE Boosted Dark Matter module
            were installed by Josh Berger (Univ. of Wisconsin)

\created    November 26, 2004

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _KINE_UTILS_H_
#define _KINE_UTILS_H_

#include "Framework/Conventions/KineVar.h"
#include "Framework/Conventions/Controls.h"
#include "Framework/Conventions/KinePhaseSpace.h"
#include "Framework/Interaction/Interaction.h"
#include "Framework/Utils/Range1.h"

namespace genie {
namespace utils {

namespace kinematics
{
  //-- methods used for computing phase space volumes
  double PhaseSpaceVolume (const Interaction * const i, KinePhaseSpace_t ps);

  //-- methods used for computing the Jacobians associated with phase space transformations
  double Jacobian (const Interaction * const i, KinePhaseSpace_t f, KinePhaseSpace_t t);
  bool   TransformMatched (KinePhaseSpace_t ia, KinePhaseSpace_t ib,
                                    KinePhaseSpace_t a, KinePhaseSpace_t b, bool & fwd);

  //-- kinematical limits
  Range1D_t  InelWLim    (double Ev, double M, double ml);
  Range1D_t  InelQ2Lim_W (double Ev, double M, double ml, double W, double Q2min_cut =    controls::kMinQ2Limit);
  Range1D_t  Inelq2Lim_W (double Ev, double M, double ml, double W, double q2min_cut = -1*controls::kMinQ2Limit);
  Range1D_t  InelQ2Lim   (double Ev, double M, double ml, double Q2min_cut =    controls::kMinQ2Limit);
  Range1D_t  Inelq2Lim   (double Ev, double M, double ml, double q2min_cut = -1*controls::kMinQ2Limit);
  Range1D_t  InelXLim    (double Ev, double M, double ml);
  Range1D_t  InelYLim    (double Ev, double M, double ml);
  Range1D_t  InelYLim_X  (double Ev, double M, double ml, double x);
  Range1D_t  CohW2Lim    (double Mn, double m_produced, double mlep, double Ev, double Q2);
  Range1D_t  CohNuLim    (double W2min, double W2max, double Q2, double Mn, double xsi);
  Range1D_t  CohYLim     (double Mn, double m_produced, double mlep, double Ev, double Q2, double xsi);
  Range1D_t  CohYLim     (double EvL, double ml);
  Range1D_t  CohXLim     (void);
  Range1D_t  CohQ2Lim    (double Mn, double m_produced, double mlep, double Ev);
  Range1D_t  Cohq2Lim    (double Mn, double m_produced, double mlep, double Ev);
  Range1D_t  CEvNSQ2Lim  (double Ev);
  Range1D_t  DarkWLim    (double Ev, double M, double ml);
  Range1D_t  DarkQ2Lim_W (double Ev, double M, double ml, double W, double Q2min_cut =    controls::kMinQ2Limit);
  Range1D_t  Darkq2Lim_W (double Ev, double M, double ml, double W, double q2min_cut = -1*controls::kMinQ2Limit);
  Range1D_t  DarkQ2Lim   (double Ev, double M, double ml, double Q2min_cut =    controls::kMinQ2Limit);
  Range1D_t  Darkq2Lim   (double Ev, double M, double ml, double q2min_cut = -1*controls::kMinQ2Limit);
  Range1D_t  DarkXLim    (double Ev, double M, double ml);
  Range1D_t  DarkYLim    (double Ev, double M, double ml);
  Range1D_t  DarkYLim_X  (double Ev, double M, double ml, double x);

  //-- helpers for kinematic limits
  double CohW2Min(double Mn, double m_produced);

  //-- kinematical variable transforms
  double QD2toQ2 (double QD2);
  double Q2toQD2 (double Q2);
  void   WQ2toXY (double Ev, double M, double W, double Q2, double & x, double & y);
  void   XYtoWQ2 (double Ev, double M, double & W, double & Q2, double x, double y);
  void   XQ2toWY (double Ev, double M, double & W, double Q2, double x, double & y);
  double XYtoW   (double Ev, double M, double x, double y);
  double XYtoQ2  (double Ev, double M, double x, double y);
  double Q2YtoX  (double Ev, double M, double Q2, double y);

  void  UpdateWQ2FromXY(const Interaction * in);
  void  UpdateXYFromWQ2(const Interaction * in);
  void  UpdateWYFromXQ2(const Interaction * in);
  void  UpdateXFromQ2Y(const Interaction * in);

  //-- methods used to apply cuts to kinematical limits
  void ApplyCutsToKineLimits (Range1D_t & r, double min, double max);

  double Q2 (const Interaction * const i);
  double W  (const Interaction * const i);

  //-- charm threshold and slow rescaling variable
  bool   IsAboveCharmThreshold (double x, double Q2, double M, double mc);
  double SlowRescalingVar      (double x, double Q2, double M, double mc);

  //-- Functions used to define differential cross section distribution envelopes 
  //-- for importance sampling in kinematical selection modules
  double RESImportanceSamplingEnvelope(double * x, double * par);
  double DISImportanceSamplingEnvelope(double * x, double * par);
  double COHImportanceSamplingEnvelope(double * x, double * par);

  namespace electromagnetic
  {
   Range1D_t  InelWLim    (double El, double ml, double M);
   Range1D_t  InelQ2Lim_W (double El, double ml, double M, double W);
   Range1D_t  Inelq2Lim_W (double El, double ml, double M, double W);
   Range1D_t  InelQ2Lim   (double El, double ml, double M);
   Range1D_t  Inelq2Lim   (double El, double ml, double M);
   Range1D_t  InelXLim    (double El, double ml, double M);
   Range1D_t  InelYLim    (double El, double ml, double M);
   Range1D_t  InelYLim_X  (double El, double ml, double M, double x);

   static const double kMinQ2Limit   = 0.02;  // GeV^2 // Q2 threshold relevant for em scattering events
  }

} // kinematics namespace
} // utils namespace
} // genie namespace

#endif // _KINE_UTILS_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::prem

\brief      Preliminary Earth Model

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    August 07, 2009

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _PREM_H_
#define _PREM_H_

namespace genie {
namespace utils {

namespace prem
{
  //
  // the earth density profile as given by the Preliminary Earth Model
  // by Adam Dziewonski, Earth Structure, Global,
  // in The Encyclopedia of Solid Earth Geophysics, David E. James ed.
  // (Van Nostrand Reinhold, New York, 1989) p 331.
  //
  double Density(double r);

} // prem  namespace
} // utils namespace
} // genie namespace

#endif // _PREM_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::phys

\brief      Various physics formulas & utilities

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    January 22, 2008

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _PHYS_UTILS_H_
#define _PHYS_UTILS_H_

#include <TLorentzVector.h>

namespace genie {
namespace utils {

namespace phys
{
  // Formation zone in fm
  double FormationZone(
     double m, const TLorentzVector & p, const TVector3 & p3hadr, double ct0 /*in fm*/, double K);

  // Longitudinal to transverse cross section ratio (R) parametrizations
  double R99118   (double x, double Q2); ///< PRL 98, 142301, 2007
  double RWhitlow (double x, double Q2);

  // Extract F1, F2, xF3 from a three d^2sigma/dxdy cross section values
  // evaluated at different (E,y) for fixed (x,Q2)
  // See H.Gallagher, Nucl.Phys.Proc.Suppl.159:229-234,2006
/*
  void ExtractStructFunc (
    double x, double Q2, double dxs[3], double& F1, double& F2, double& xF3);
*/

} // phys  namespace
} // utils namespace
} // genie namespace

#endif // _PHYS_UTILS_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::print

\brief      Simple printing utilities

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    May 06, 2004

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _PRINT_UTILS_H_
#define _PRINT_UTILS_H_

#include <string>

#include <TVector3.h>
#include <TLorentzVector.h>

using std::string;

namespace genie {
namespace utils {

namespace print
{
  string P4AsString      (const TLorentzVector * p);
  string P4AsShortString (const TLorentzVector * p);
  string X4AsString      (const TLorentzVector * x);
  string P3AsString      (const TVector3 * vec);
  string Vec3AsString    (const TVector3 * vec);
  string BoolAsString    (bool b);
  string BoolAsTFString  (bool b);
  string BoolAsIOString  (bool b);
  string BoolAsYNString  (bool b);
  void   PrintBanner     (void);
  void   PrintBanner     (string filename, UInt_t wait_msec);
  string PrintFramedMesg (string mesg, unsigned int nl=1, const char f='*');

}      // print namespace
}      // utils namespace
}      // genie namespace

#endif // _PRINT_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::Pythia8Singleton

\brief    Manage a single instance of pythia8

\author   Robert Hatcher <rhatcher \at fnal.gov>
          Fermilab

\created  May 15, 2024

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _PYTHIA8SINGLETON_H_
#define _PYTHIA8SINGLETON_H_

#ifdef __GENIE_PYTHIA8_ENABLED__
#include "Pythia8/Pythia.h"
#endif // __GENIE_PYTHIA8_ENABLED__

namespace genie {

class Pythia8Singleton;

//ostream & operator << (ostream & stream, const Pythia8Singleton & pythia8_1);

class Pythia8Singleton
{
public:

  static Pythia8Singleton * Instance(void);

#ifdef __GENIE_PYTHIA8_ENABLED__
  Pythia8::Pythia * Pythia8() { return fPythia; }
#endif // __GENIE_PYTHIA8_ENABLED__

  //! print
  //void   Print (ostream & stream) const;
  //friend ostream & operator << (ostream & stream, const Pythia8Singleton & pythia8_1);

private:

  //! singleton instance
  static Pythia8Singleton * fInstance;

#ifdef __GENIE_PYTHIA8_ENABLED__
  mutable Pythia8::Pythia * fPythia; ///< actual Pythia8 instance
#endif // __GENIE_PYTHIA8_ENABLED__

  //! singleton class: constructors are private
  Pythia8Singleton();
  Pythia8Singleton(const Pythia8Singleton & cache);
  virtual ~Pythia8Singleton();

  //! proper de-allocation of the singleton object
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (Pythia8Singleton::fInstance !=0) {
            delete Pythia8Singleton::fInstance;
            Pythia8Singleton::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace

#endif // _PYTHIA8SINGLETON_H_
//__________________________________________________________________________
/*!

\class    genie::Range1F_t
\brief    A simple [min,max] interval for floats.

\class    genie::Range1D_t
\brief    A simple [min,max] interval for doubles.

\class    genie::Range1I_t
\brief    A simple [min,max] interval for integers.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 06, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//__________________________________________________________________________

#ifndef _RANGE_1_T_H_
#define _RANGE_1_T_H_

namespace genie {

class Range1F_t
{
public:
  Range1F_t  (void);
  Range1F_t  (float _min, float _max);
  Range1F_t  (const Range1F_t & r);
  ~Range1F_t (void);

  void Copy  (const Range1F_t & r);

  float min;
  float max;
};

class Range1D_t
{
public:
  Range1D_t  (void);
  Range1D_t  (double _min, double _max);
  Range1D_t  (const Range1D_t & r);
  ~Range1D_t (void);

  void Copy  (const Range1D_t & r);

  double min;
  double max;
};

class Range1I_t
{
public:
  Range1I_t  (void);
  Range1I_t  (int _min, int _max);
  Range1I_t  (const Range1I_t & r);
  ~Range1I_t (void);

  void Copy  (const Range1I_t & r);

  int min;
  int max;
};



}      // genie namespace

#endif // _RANGE_1_T_H_
//____________________________________________________________________________
/*!

\class    genie::RunOpt

\brief    Some common run-time GENIE options.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  January 29, 2013

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RUN_OPT_H_
#define _RUN_OPT_H_

#include <iostream>
#include <string>

#include "Framework/Utils/TuneId.h"

class TBits;

using std::ostream;

namespace genie {

class RunOpt;
ostream & operator << (ostream & stream, const RunOpt & opt);

class RunOpt
{
public:
  static RunOpt * Instance(void);

  // Read options from the command line. Call from all GENIE command-line apps.
  void ReadFromCommandLine(int argc, char ** argv);
  // Centralized printout of what ReadFromCommandLine() will look for
  static std::string RunOptSyntaxString(bool include_generator_specific);

  // Get options set.
  TuneId * Tune                 (void) const { return fTune;                   }
  string EventGeneratorList     (void) const { return fEventGeneratorList;     }
  string CacheFile              (void) const { return fCacheFile;              }
  string MesgThresholdFiles     (void) const { return fMesgThresholds;         }
  TBits* UnphysEventMask        (void) const { return fUnphysEventMask;        }
  int    EventRecordPrintLevel  (void) const { return fEventRecordPrintLevel;  }
  int    MCJobStatusRefreshRate (void) const { return fMCJobStatusRefreshRate; }
  bool   BareXSecPreCalc        (void) const { return fEnableBareXSecPreCalc;  }
  string XMLPath                (void) const { return fXMLPath;  }

  // If a user accesses the GENIE objects directly, then most of the options above
  // can be set directly to the relevant objects (Messenger, Cache, etc).
  //
  void SetTuneName(string tuneName="Default");
  void BuildTune(); ///< build tune and inform XSecSplineList
  void SetEventGeneratorList(string evgenlist) { fEventGeneratorList = evgenlist; }
  void EnableBareXSecPreCalc(bool flag)        { fEnableBareXSecPreCalc = flag; }

  // Print
  void   Print (ostream & stream) const;
  friend ostream & operator << (ostream & stream, const RunOpt & opt);

private:

  void Init (void);

  // options
  TuneId * fTune;                    ///< GENIE comprehensive neutrino interaction model tune.
  string fEventGeneratorList;        ///< Name of event generator list to be loaded by the event generation drivers.
  string fCacheFile;                 ///< Name of cache file, is cache is to be re-used.
  string fMesgThresholds;            ///< List of files (delimited with : if more than one) with custom mesg stream thresholds.
  TBits* fUnphysEventMask;           ///< Unphysical event mask.
  int    fEventRecordPrintLevel;     ///< GHEP event r ecord print level.
  int    fMCJobStatusRefreshRate;    ///< MC job status file refresh rate.
  bool   fEnableBareXSecPreCalc;     ///< Cache calcs relevant to free-nucleon xsecs before any nuclear xsec computation?
                                     ///< The option switches on/off cacheing calculations which interfere with event reweighting.
  string fXMLPath;                   ///< An path to look for XML in. Higher priority than GXMLPATH

  // Self
  static RunOpt * fInstance;

  // Singleton class: constructors are private
  RunOpt();
  RunOpt(const RunOpt & opt);
  virtual ~RunOpt();

  // Clean-up
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (RunOpt::fInstance !=0) {
            delete RunOpt::fInstance;
            RunOpt::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace
#endif // _RUN_OPT_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::str

\brief      Utilities for string manipulation

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    January 12, 2004

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _STRING_UTILS_H_
#define _STRING_UTILS_H_

#include <string>
#include <vector>

using std::string;
using std::vector;

namespace genie {
namespace utils {

namespace str
{
  string         TrimSpaces             (string input);
  string         IntAsString            (int i);
  vector<string> Split                  (string input, string delim);
  string         RemoveSuccessiveSpaces (string input);
  void           ReplaceStringInPlace   (string& subject, const string& search, const string& replace);
  string         FilterString           (string filt, string input);
  string         ToUpper                (string input);
  string         ToLower                (string input);

  template<class T>
    bool Convert( const vector<std::string> & input, std::vector<T> & v ) ;


} // str    namespace
} // utils  namespace
} // genie  namespace

#ifndef __CINT__  // don't even try for ROOT 5
#include "Framework/Utils/StringUtils.icc"
#endif

#endif // _STRING_UTILS_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::style

\brief      GENIE style!

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    July 29, 2010

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _STYLE_UTILS_H_
#define _STYLE_UTILS_H_

class TGraph;
class TH1;

namespace genie {
namespace utils {

namespace style
{

  void SetDefaultStyle(bool black_n_white=false);

  void Format(TGraph* gr,
        int lcol, int lsty, int lwid, int mcol, int msty, double msiz);
  void Format(TH1* hst,
        int lcol, int lsty, int lwid, int mcol, int msty, double msiz);

} // style namespace
} // utils namespace
} // genie namespace

#endif // _SYST_UTILS_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::system

\brief      System utilities

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    Oct 08, 2009

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _SYST_UTILS_H_
#define _SYST_UTILS_H_

#include <vector>
#include <string>

using std::vector;
using std::string;

namespace genie {
namespace utils {

namespace system
{

  vector<string> GetAllFilesInPath  (string path, string extension="");

  int GenieMajorVrsNum (string tag);
  int GenieMinorVrsNum (string tag);
  int GenieRevisVrsNum (string tag);

  bool FileExists(string filename);
  bool DirectoryExists( const char * path ) ;

  string LocalTimeAsString(string format);

} // system namespace
} // utils  namespace
} // genie  namespace

#endif // _SYST_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::utils::T2KEvGenMetaData

\brief    Utility class to store MC job meta-data

\author   Jim Dobson
          Imperial College London

\created  Mar 04, 2010

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _T2KEVGEN_METADATA_H_
#define _T2KEVGEN_METADATA_H_

#include <iostream>
#include <string>
#include <map>

#include <TObject.h>
#include <TH1D.h>

using std::ostream;
using std::string;
using std::map;

namespace genie {
namespace utils {

class T2KEvGenMetaData;
ostream & operator << (ostream & stream, const T2KEvGenMetaData & md);

class T2KEvGenMetaData: public TObject
{
public:
  using TObject::Print; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings

  T2KEvGenMetaData() :
      jnubeam_version(""),
      jnubeam_file(""),
      detector_location(""),
      geom_file(""),
      geom_top_volume(""),
      geom_length_units(1.),
      geom_density_units(1.),
      using_root_geom(false),
      using_hist_flux(false)
  {
  }

  ~T2KEvGenMetaData()
  {
  }

  void Print(ostream & stream) const;

  friend ostream & operator << (ostream & stream, const T2KEvGenMetaData & md);

  string           jnubeam_version;
  string           jnubeam_file;
  string           detector_location;
  string           geom_file;
  string           geom_top_volume;
  double           geom_length_units;
  double           geom_density_units;
  bool             using_root_geom;
  bool             using_hist_flux;
  map<int, double> target_mix;
  map<int, TH1D*>  flux_hists;

  ClassDef(T2KEvGenMetaData,1)

};


} // utils namespace
} // genie namespace

#endif // _T2KEVGEN_METADATA_H_
//____________________________________________________________________________
/*!

\class    genie::TuneId

\brief    GENIE tune ID

\author   Marco Roda <Marco.Roda \at liverpool.ac.uk>
          University of Liverpool

          Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  April 19, 2018

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _TUNE_ID_H_
#define _TUNE_ID_H_

#include <string>
#include <iostream>

using std::string;
using std::ostream;

namespace genie {

class TuneId;
ostream & operator << (ostream & stream, const TuneId & id);
bool      operator == (const TuneId & id1, const TuneId & id2);
bool      operator != (const TuneId & id1, const TuneId & id2);

class TuneId  {

public:

  TuneId(const string & id_str, bool failOnInvalid=true);
  TuneId(const TuneId & id);
  ~TuneId() {;}

  // The typical tune name in neutrino mode is : Gdd_MMv_PP_xxx
  string Name            (void) const { return fName;                         } // Gdd_MMv_PP_xxx
  string Prefix          (void) const { return fPrefix;                       } // G
  string Year            (void) const { return fYear;                         } // dd
  string ModelId         (void) const { return fMajorModelId + fMinorModelId; } // MMv
  string MajorModelId    (void) const { return fMajorModelId;                 } // MM
  string MinorModelId    (void) const { return fMinorModelId;                 } // v
  string TunedParamSetId (void) const { return fTunedParamSetId;              } // PP
  string FitDataSetId    (void) const { return fFitDataSetId;                 } // xxx

  bool   IsConfigured    (void) const { return fIsConfigured;                 }
  // this is true if the name of the tune (correctly) has been decoded into its parts
  // must match pattern:  "([A-Za-z]+)(\\d{2})_(\\d{2})([a-z])_([a-z0-9]{2})_([a-z0-9]{3})"

  bool   IsValidated     (void) const { return fIsValidated;                  }
  // this is true if the existence of the tune directory in the system has been checked

  bool   IsCustom        (void) const { return fCustomSource.size() > 0 ;     }
  // this check if the configuration had a GXMLPATH configuration that took priority
  // over the standard $GXMLPATH
  // This boolean is reliable only if IsValidated() is true

  // A tune can be a simple configuration of models or the ouput of a complete tuning procedure
  // This changes the position the tune files are stored so we need a quick way to know this
  bool   OnlyConfiguration()   const  { return (TunedParamSetId() == "00") ; }

  // Methods related to config directory
  string CMC             (void) const ;   // Comprehensive Model Confguration
  string Tail            (void) const ;
  string CMCDirectory    (void) const ;
  string TuneDirectory   (void) const ;
  string BaseDirectory   (void) const { return fBaseDirectory; }
  string CustomSource    (void) const { return fCustomSource;  }

  void   Build   (const string & name = "" ) ;
  void   Decode  (string id_str);
  void   Copy    (const TuneId & id);
  bool   Compare (const TuneId & id) const;
  void   Print   (ostream & stream) const;

  friend ostream & operator << (ostream & stream, const TuneId & id);

private:

  TuneId() {;}

  bool CheckDirectory() ;

  string fName;

  string fPrefix;
  string fYear;
  string fModelId;
  string fMajorModelId;
  string fMinorModelId;
  string fTunedParamSetId;
  string fFitDataSetId;

  string fBaseDirectory ;
  string fCustomSource  ;

  bool   fIsConfigured;
  bool   fIsValidated;
};

}       // genie namespace

#endif  // _TUNE_ID_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::units

\brief      Simple unit system utilities

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    May 06, 2004

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _UNIT_UTILS_H_
#define _UNIT_UTILS_H_

#include <string>
using std::string;

namespace genie {
namespace utils {

namespace units {

  double UnitFromString(string u);

} // namespace units
} // namespace utils
} // namespace genie

#endif // _UNIT_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::XSecSplineList

\brief    List of cross section vs energy splines

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 12, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _XSEC_SPLINE_LIST_H_
#define _XSEC_SPLINE_LIST_H_

#include <ostream>
#include <map>
#include <set>
#include <vector>
#include <string>

#include "Framework/Conventions/XmlParserStatus.h"

using std::map;
using std::set;
using std::pair;
using std::vector;
using std::string;
using std::ostream;

namespace genie {

class XSecAlgorithmI;
class Interaction;
class Spline;

class XSecSplineList;
ostream & operator << (ostream & stream, const XSecSplineList & xsl);

class XSecSplineList {

public:

  static XSecSplineList * Instance();

  // Save/load to/from XML file
  void               SaveAsXml   (const string & filename, bool save_init = true) const;
  XmlParserStatus_t  LoadFromXml (const string & filename, bool keep = false);

  // Print available splines
  void   Print (ostream & stream) const;
  friend ostream & operator << (ostream & stream, const XSecSplineList & xsl);

  // Set and query current tune.
  // An XSecSplineList can keep splines for numerous tunes and pick the appropriate
  // one for each process, as instructed.
  void   SetCurrentTune (const string & tune) { fCurrentTune = tune; }
  string CurrentTune    (void) const  { return fCurrentTune; }
  bool   HasSplineFromTune( const string & tune ) const { return fSplineMap.count(tune) > 0 ; }

  // Query the existence, access or create a spline
  // The results of the following methods depend on the current tune setting
  bool           SplineExists (const XSecAlgorithmI * alg, const Interaction * i) const;
  bool           SplineExists (string spline_key) const;
  const Spline * GetSpline    (const XSecAlgorithmI * alg, const Interaction * i) const;
  const Spline * GetSpline    (string spline_key) const;
  void           CreateSpline (const XSecAlgorithmI * alg, const Interaction * i,
                               int nknots = -1, double e_min = -1, double e_max = -1);
  int  NSplines (void) const;
  bool IsEmpty  (void) const;

  // Methods for building / getting keys
  // The results of the following methods depend on the current tune setting
  string BuildSplineKey(const XSecAlgorithmI * alg, const Interaction * i) const;
  const vector<string> * GetSplineKeys(void) const;


  // XSecSplineList options
  void   SetLogE   (bool   on); ///< set opt to build splines as f(E) or as f(logE)
  void   SetNKnots (int    nk); ///< set default number of knots for building the spline
  void   SetMinE   (double Ev); ///< set default minimum energy for xsec splines
  void   SetMaxE   (double Ev); ///< set default maximum energy for xsec splines
  bool   UseLogE   (void) const { return fUseLogE;  }
  int    NKnots    (void) const { return fNKnots;   }
  double Emin      (void) const { return fEmin;     }
  double Emax      (void) const { return fEmax;     }

private:

  XSecSplineList();
  XSecSplineList(const XSecSplineList & spline_list);
  virtual ~XSecSplineList();

  static XSecSplineList * fInstance;

  bool   fUseLogE;
  int    fNKnots;
  double fEmin;
  double fEmax;

  string fCurrentTune; ///< The `active' tune, out the many that can co-exist

  map<string, map<string, Spline *> > fSplineMap;       ///< tune -> { xsec_alg/xsec_config/interaction -> Spline }
  map<string, set<string>           > fLoadedSplineSet; ///< tune -> { set of initialy loaded splines             }

  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (XSecSplineList::fInstance !=0) {
            delete XSecSplineList::fInstance;
            XSecSplineList::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace

#endif // _XSEC_SPLINE_LIST_H_
//____________________________________________________________________________
/*!

\  genie::utils::xml

\brief      XML utilities

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    May 04, 2004
 
\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org
            
*/
//____________________________________________________________________________

#ifndef _XML_UTILS_H_
#define _XML_UTILS_H_

#include <string>
#include <vector>
#include <cstdlib>


#if !defined(__CINT__) && !defined(__MAKECINT__)
#include "libxml/parser.h"
#include "libxml/xmlmemory.h"
#endif

#include <TSystem.h>
#include <TVectorT.h>

#include "Framework/Utils/StringUtils.h"
#include "Framework/Utils/RunOpt.h"


class TFile;
class TH1F;
class TH1D;
class TH2D;
class TSpline3;

using std::string;
using std::vector;

namespace genie {
namespace utils {
namespace xml   {

#if !defined(__CINT__) && !defined(__MAKECINT__)

  string TrimSpaces(xmlChar * xmls) ;
  string TrimSpacesClean(xmlChar * xmls) ;
  // trim the leading/trailing spaces from an parsed xml string like in:
  //
  // "      I am a string with lots of spaces      " ---->
  //                                  "I am a string with lots of spaces"
  //
  // In this method, "\n" is treated as 'empty space' so as to trim not only
  // empty spaces in the line that contains the string but also all leading
  // and trailing empty lines
  
  //_________________________________________________________________________

  string GetAttribute(xmlNodePtr xml_cur, string attr_name) ;
#endif

  //_________________________________________________________________________
  string GetXMLPathList( bool add_tune = true ) ;
  // Get a colon separated list of potential locations for xml files
  // e.g. ".:$MYSITEXML:/path/to/exp/version:$GALGCONF:$GENIE/config"
  // user additions should be in $GXMLPATH

  //_________________________________________________________________________
  inline string GetXMLDefaultPath() { return "$GENIE/config" ; }
  //standard path in case no env variable are set

  //_________________________________________________________________________
  string GetXMLFilePath(string basename) ;
  // return a full path to a real XML file
  // e.g. passing in "GNuMIFlux.xml"
  //   will return   "/blah/GENIE/HEAD/config/GNuMIFlux.xml"
  // allow ::colon:: ::semicolon:: and ::comma:: as path item separators
  //_________________________________________________________________________

#if !defined(__CINT__) && !defined(__MAKECINT__)

  // Find a particular node witin the input XML document.
  // The node is specified using the input path.
  // For example, to retrieve node <superk_energy_scale_err>
  // in XML doc below
  // <t2k>
  //   <systematics>
  //      <superk_energy_scale_err>
  //          0.015
  //      </superk_energy_scale_err>
  //   </systematics>
  // </t2k>
  // specify the path "t2k/systematics/superk_energy_scale_err"
  //
  xmlNodePtr FindNode(xmlDocPtr xml_doc, string node_path);

  //
  // Retrieve XML file data in various formats.
  // To retrieve a ROOT object from within a ROOT file, the following XML scheme is used
  // <some_node>
  //      <another_node>
  //            <filename> blah </filename>
  //            <objname>  blah </objname>
  //            <objtype>  blah </objtype>
  //      </another_node>
  // </some_node>
  //
  bool           GetBool        (xmlDocPtr xml_doc, string node_path);       
  int            GetInt         (xmlDocPtr xml_doc, string node_path);
  vector<int>    GetIntArray    (xmlDocPtr xml_doc, string node_path); // comma-separated values in XML file
  double         GetDouble      (xmlDocPtr xml_doc, string node_path);
  vector<double> GetDoubleArray (xmlDocPtr xml_doc, string node_path); // comma-separated values in XML file
  string         GetString      (xmlDocPtr xml_doc, string node_path);
  string         GetROOTFileName(xmlDocPtr xml_doc, string node_path);
  string         GetROOTObjName (xmlDocPtr xml_doc, string node_path);
  string         GetROOTObjType (xmlDocPtr xml_doc, string node_path);
  TFile *        GetTFile       (xmlDocPtr xml_doc, string node_path, string base_dir = "<env>");
  TH1F *         GetTH1F        (xmlDocPtr xml_doc, string node_path, string base_dir = "<env>");  
  TH1D *         GetTH1D        (xmlDocPtr xml_doc, string node_path, string base_dir = "<env>");  
  TH2D *         GetTH2D        (xmlDocPtr xml_doc, string node_path, string base_dir = "<env>");  
  TVectorD *     GetTVectorD    (xmlDocPtr xml_doc, string node_path, string base_dir = "<env>");  
/*
  TMatrixDSym *  GetTMatrixDSym (xmlDocPtr xml_doc, string node_path, string base_dir = "<env>");  
  TMatrixD *     GetTMatrixD    (xmlDocPtr xml_doc, string node_path, string base_dir = "<env>");  
  TSpline3 *     GetTSpline3    (xmlDocPtr xml_doc, string node_path, string base_dir = "<env>");
*/
#endif

}         // xml   namespace
}         // utils namespace
}         // genie namespace

#endif    // _XML_UTILS_H_


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::Cache", payloadCode, "@",
"genie::CacheBranchFx", payloadCode, "@",
"genie::CacheBranchI", payloadCode, "@",
"genie::CacheBranchNtp", payloadCode, "@",
"genie::CmdLnArgParser", payloadCode, "@",
"genie::GSimFiles", payloadCode, "@",
"genie::Range1D_t", payloadCode, "@",
"genie::Range1F_t", payloadCode, "@",
"genie::Range1I_t", payloadCode, "@",
"genie::RunOpt", payloadCode, "@",
"genie::TuneId", payloadCode, "@",
"genie::XSecSplineList", payloadCode, "@",
"genie::utils::T2KEvGenMetaData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGFwUtl",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGFwUtl_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGFwUtl_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGFwUtl() {
  TriggerDictionaryInitialization_libGFwUtl_Impl();
}
