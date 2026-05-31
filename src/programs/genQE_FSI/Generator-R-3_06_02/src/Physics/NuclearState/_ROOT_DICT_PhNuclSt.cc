// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhNuclSt
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
#include "EffectiveSF.h"
#include "FGMBodekRitchie.h"
#include "FermiMomentumTable.h"
#include "FermiMomentumTablePool.h"
#include "FermiMover.h"
#include "LocalFGM.h"
#include "NuclearData.h"
#include "NuclearModelI.h"
#include "NuclearModelMap.h"
#include "NuclearUtils.h"
#include "PauliBlocker.h"
#include "SRCNuclearRecoil.h"
#include "SecondNucleonEmissionI.h"
#include "SpectralFunc.h"
#include "SpectralFunc1d.h"
#include "SpectralFunction2p2h.h"

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
            instance("genie", 0 /*version*/, "NuclearModel.h", 26,
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
      namespace nuclear {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLnuclear_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::nuclear", 0 /*version*/, "", 777,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLnuclear_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLnuclear_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLNuclearModel_Dictionary();
   static void geniecLcLNuclearModel_TClassManip(TClass*);
   static void *new_geniecLcLNuclearModel(void *p = nullptr);
   static void *newArray_geniecLcLNuclearModel(Long_t size, void *p);
   static void delete_geniecLcLNuclearModel(void *p);
   static void deleteArray_geniecLcLNuclearModel(void *p);
   static void destruct_geniecLcLNuclearModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuclearModel*)
   {
      ::genie::NuclearModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuclearModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuclearModel", "NuclearModel.h", 45,
                  typeid(::genie::NuclearModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuclearModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuclearModel) );
      instance.SetNew(&new_geniecLcLNuclearModel);
      instance.SetNewArray(&newArray_geniecLcLNuclearModel);
      instance.SetDelete(&delete_geniecLcLNuclearModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuclearModel);
      instance.SetDestructor(&destruct_geniecLcLNuclearModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuclearModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NuclearModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NuclearModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuclearModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NuclearModel*>(nullptr))->GetClass();
      geniecLcLNuclearModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuclearModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLFermiMomentumTable_Dictionary();
   static void geniecLcLFermiMomentumTable_TClassManip(TClass*);
   static void *new_geniecLcLFermiMomentumTable(void *p = nullptr);
   static void *newArray_geniecLcLFermiMomentumTable(Long_t size, void *p);
   static void delete_geniecLcLFermiMomentumTable(void *p);
   static void deleteArray_geniecLcLFermiMomentumTable(void *p);
   static void destruct_geniecLcLFermiMomentumTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::FermiMomentumTable*)
   {
      ::genie::FermiMomentumTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::FermiMomentumTable));
      static ::ROOT::TGenericClassInfo 
         instance("genie::FermiMomentumTable", "FermiMomentumTable.h", 33,
                  typeid(::genie::FermiMomentumTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLFermiMomentumTable_Dictionary, isa_proxy, 0,
                  sizeof(::genie::FermiMomentumTable) );
      instance.SetNew(&new_geniecLcLFermiMomentumTable);
      instance.SetNewArray(&newArray_geniecLcLFermiMomentumTable);
      instance.SetDelete(&delete_geniecLcLFermiMomentumTable);
      instance.SetDeleteArray(&deleteArray_geniecLcLFermiMomentumTable);
      instance.SetDestructor(&destruct_geniecLcLFermiMomentumTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::FermiMomentumTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::FermiMomentumTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::FermiMomentumTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLFermiMomentumTable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::FermiMomentumTable*>(nullptr))->GetClass();
      geniecLcLFermiMomentumTable_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLFermiMomentumTable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuclearModelI_Dictionary();
   static void geniecLcLNuclearModelI_TClassManip(TClass*);
   static void delete_geniecLcLNuclearModelI(void *p);
   static void deleteArray_geniecLcLNuclearModelI(void *p);
   static void destruct_geniecLcLNuclearModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuclearModelI*)
   {
      ::genie::NuclearModelI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuclearModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuclearModelI", "NuclearModelI.h", 46,
                  typeid(::genie::NuclearModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuclearModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuclearModelI) );
      instance.SetDelete(&delete_geniecLcLNuclearModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuclearModelI);
      instance.SetDestructor(&destruct_geniecLcLNuclearModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuclearModelI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NuclearModelI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NuclearModelI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuclearModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NuclearModelI*>(nullptr))->GetClass();
      geniecLcLNuclearModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuclearModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLEffectiveSF_Dictionary();
   static void geniecLcLEffectiveSF_TClassManip(TClass*);
   static void *new_geniecLcLEffectiveSF(void *p = nullptr);
   static void *newArray_geniecLcLEffectiveSF(Long_t size, void *p);
   static void delete_geniecLcLEffectiveSF(void *p);
   static void deleteArray_geniecLcLEffectiveSF(void *p);
   static void destruct_geniecLcLEffectiveSF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::EffectiveSF*)
   {
      ::genie::EffectiveSF *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::EffectiveSF));
      static ::ROOT::TGenericClassInfo 
         instance("genie::EffectiveSF", "", 36,
                  typeid(::genie::EffectiveSF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLEffectiveSF_Dictionary, isa_proxy, 0,
                  sizeof(::genie::EffectiveSF) );
      instance.SetNew(&new_geniecLcLEffectiveSF);
      instance.SetNewArray(&newArray_geniecLcLEffectiveSF);
      instance.SetDelete(&delete_geniecLcLEffectiveSF);
      instance.SetDeleteArray(&deleteArray_geniecLcLEffectiveSF);
      instance.SetDestructor(&destruct_geniecLcLEffectiveSF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::EffectiveSF*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::EffectiveSF*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::EffectiveSF*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLEffectiveSF_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::EffectiveSF*>(nullptr))->GetClass();
      geniecLcLEffectiveSF_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLEffectiveSF_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLFGMBodekRitchie_Dictionary();
   static void geniecLcLFGMBodekRitchie_TClassManip(TClass*);
   static void *new_geniecLcLFGMBodekRitchie(void *p = nullptr);
   static void *newArray_geniecLcLFGMBodekRitchie(Long_t size, void *p);
   static void delete_geniecLcLFGMBodekRitchie(void *p);
   static void deleteArray_geniecLcLFGMBodekRitchie(void *p);
   static void destruct_geniecLcLFGMBodekRitchie(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::FGMBodekRitchie*)
   {
      ::genie::FGMBodekRitchie *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::FGMBodekRitchie));
      static ::ROOT::TGenericClassInfo 
         instance("genie::FGMBodekRitchie", "", 131,
                  typeid(::genie::FGMBodekRitchie), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLFGMBodekRitchie_Dictionary, isa_proxy, 0,
                  sizeof(::genie::FGMBodekRitchie) );
      instance.SetNew(&new_geniecLcLFGMBodekRitchie);
      instance.SetNewArray(&newArray_geniecLcLFGMBodekRitchie);
      instance.SetDelete(&delete_geniecLcLFGMBodekRitchie);
      instance.SetDeleteArray(&deleteArray_geniecLcLFGMBodekRitchie);
      instance.SetDestructor(&destruct_geniecLcLFGMBodekRitchie);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::FGMBodekRitchie*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::FGMBodekRitchie*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::FGMBodekRitchie*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLFGMBodekRitchie_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::FGMBodekRitchie*>(nullptr))->GetClass();
      geniecLcLFGMBodekRitchie_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLFGMBodekRitchie_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLFermiMomentumTablePool_Dictionary();
   static void geniecLcLFermiMomentumTablePool_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::FermiMomentumTablePool*)
   {
      ::genie::FermiMomentumTablePool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::FermiMomentumTablePool));
      static ::ROOT::TGenericClassInfo 
         instance("genie::FermiMomentumTablePool", "", 260,
                  typeid(::genie::FermiMomentumTablePool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLFermiMomentumTablePool_Dictionary, isa_proxy, 0,
                  sizeof(::genie::FermiMomentumTablePool) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::FermiMomentumTablePool*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::FermiMomentumTablePool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::FermiMomentumTablePool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLFermiMomentumTablePool_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::FermiMomentumTablePool*>(nullptr))->GetClass();
      geniecLcLFermiMomentumTablePool_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLFermiMomentumTablePool_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSecondNucleonEmissionI_Dictionary();
   static void geniecLcLSecondNucleonEmissionI_TClassManip(TClass*);
   static void delete_geniecLcLSecondNucleonEmissionI(void *p);
   static void deleteArray_geniecLcLSecondNucleonEmissionI(void *p);
   static void destruct_geniecLcLSecondNucleonEmissionI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SecondNucleonEmissionI*)
   {
      ::genie::SecondNucleonEmissionI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SecondNucleonEmissionI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SecondNucleonEmissionI", "SecondNucleonEmissionI.h", 33,
                  typeid(::genie::SecondNucleonEmissionI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSecondNucleonEmissionI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SecondNucleonEmissionI) );
      instance.SetDelete(&delete_geniecLcLSecondNucleonEmissionI);
      instance.SetDeleteArray(&deleteArray_geniecLcLSecondNucleonEmissionI);
      instance.SetDestructor(&destruct_geniecLcLSecondNucleonEmissionI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SecondNucleonEmissionI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SecondNucleonEmissionI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SecondNucleonEmissionI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSecondNucleonEmissionI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SecondNucleonEmissionI*>(nullptr))->GetClass();
      geniecLcLSecondNucleonEmissionI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSecondNucleonEmissionI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSRCNuclearRecoil_Dictionary();
   static void geniecLcLSRCNuclearRecoil_TClassManip(TClass*);
   static void *new_geniecLcLSRCNuclearRecoil(void *p = nullptr);
   static void *newArray_geniecLcLSRCNuclearRecoil(Long_t size, void *p);
   static void delete_geniecLcLSRCNuclearRecoil(void *p);
   static void deleteArray_geniecLcLSRCNuclearRecoil(void *p);
   static void destruct_geniecLcLSRCNuclearRecoil(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SRCNuclearRecoil*)
   {
      ::genie::SRCNuclearRecoil *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SRCNuclearRecoil));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SRCNuclearRecoil", "SRCNuclearRecoil.h", 31,
                  typeid(::genie::SRCNuclearRecoil), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSRCNuclearRecoil_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SRCNuclearRecoil) );
      instance.SetNew(&new_geniecLcLSRCNuclearRecoil);
      instance.SetNewArray(&newArray_geniecLcLSRCNuclearRecoil);
      instance.SetDelete(&delete_geniecLcLSRCNuclearRecoil);
      instance.SetDeleteArray(&deleteArray_geniecLcLSRCNuclearRecoil);
      instance.SetDestructor(&destruct_geniecLcLSRCNuclearRecoil);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SRCNuclearRecoil*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SRCNuclearRecoil*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SRCNuclearRecoil*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSRCNuclearRecoil_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SRCNuclearRecoil*>(nullptr))->GetClass();
      geniecLcLSRCNuclearRecoil_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSRCNuclearRecoil_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLFermiMover_Dictionary();
   static void geniecLcLFermiMover_TClassManip(TClass*);
   static void *new_geniecLcLFermiMover(void *p = nullptr);
   static void *newArray_geniecLcLFermiMover(Long_t size, void *p);
   static void delete_geniecLcLFermiMover(void *p);
   static void deleteArray_geniecLcLFermiMover(void *p);
   static void destruct_geniecLcLFermiMover(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::FermiMover*)
   {
      ::genie::FermiMover *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::FermiMover));
      static ::ROOT::TGenericClassInfo 
         instance("genie::FermiMover", "", 329,
                  typeid(::genie::FermiMover), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLFermiMover_Dictionary, isa_proxy, 0,
                  sizeof(::genie::FermiMover) );
      instance.SetNew(&new_geniecLcLFermiMover);
      instance.SetNewArray(&newArray_geniecLcLFermiMover);
      instance.SetDelete(&delete_geniecLcLFermiMover);
      instance.SetDeleteArray(&deleteArray_geniecLcLFermiMover);
      instance.SetDestructor(&destruct_geniecLcLFermiMover);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::FermiMover*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::FermiMover*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::FermiMover*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLFermiMover_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::FermiMover*>(nullptr))->GetClass();
      geniecLcLFermiMover_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLFermiMover_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLocalFGM_Dictionary();
   static void geniecLcLLocalFGM_TClassManip(TClass*);
   static void *new_geniecLcLLocalFGM(void *p = nullptr);
   static void *newArray_geniecLcLLocalFGM(Long_t size, void *p);
   static void delete_geniecLcLLocalFGM(void *p);
   static void deleteArray_geniecLcLLocalFGM(void *p);
   static void destruct_geniecLcLLocalFGM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LocalFGM*)
   {
      ::genie::LocalFGM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LocalFGM));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LocalFGM", "", 396,
                  typeid(::genie::LocalFGM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLocalFGM_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LocalFGM) );
      instance.SetNew(&new_geniecLcLLocalFGM);
      instance.SetNewArray(&newArray_geniecLcLLocalFGM);
      instance.SetDelete(&delete_geniecLcLLocalFGM);
      instance.SetDeleteArray(&deleteArray_geniecLcLLocalFGM);
      instance.SetDestructor(&destruct_geniecLcLLocalFGM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LocalFGM*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::LocalFGM*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::LocalFGM*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLocalFGM_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::LocalFGM*>(nullptr))->GetClass();
      geniecLcLLocalFGM_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLocalFGM_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNuclearModelMap_Dictionary();
   static void geniecLcLNuclearModelMap_TClassManip(TClass*);
   static void *new_geniecLcLNuclearModelMap(void *p = nullptr);
   static void *newArray_geniecLcLNuclearModelMap(Long_t size, void *p);
   static void delete_geniecLcLNuclearModelMap(void *p);
   static void deleteArray_geniecLcLNuclearModelMap(void *p);
   static void destruct_geniecLcLNuclearModelMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NuclearModelMap*)
   {
      ::genie::NuclearModelMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NuclearModelMap));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NuclearModelMap", "", 697,
                  typeid(::genie::NuclearModelMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNuclearModelMap_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NuclearModelMap) );
      instance.SetNew(&new_geniecLcLNuclearModelMap);
      instance.SetNewArray(&newArray_geniecLcLNuclearModelMap);
      instance.SetDelete(&delete_geniecLcLNuclearModelMap);
      instance.SetDeleteArray(&deleteArray_geniecLcLNuclearModelMap);
      instance.SetDestructor(&destruct_geniecLcLNuclearModelMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NuclearModelMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NuclearModelMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NuclearModelMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNuclearModelMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NuclearModelMap*>(nullptr))->GetClass();
      geniecLcLNuclearModelMap_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNuclearModelMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPauliBlocker_Dictionary();
   static void geniecLcLPauliBlocker_TClassManip(TClass*);
   static void *new_geniecLcLPauliBlocker(void *p = nullptr);
   static void *newArray_geniecLcLPauliBlocker(Long_t size, void *p);
   static void delete_geniecLcLPauliBlocker(void *p);
   static void deleteArray_geniecLcLPauliBlocker(void *p);
   static void destruct_geniecLcLPauliBlocker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PauliBlocker*)
   {
      ::genie::PauliBlocker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PauliBlocker));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PauliBlocker", "", 847,
                  typeid(::genie::PauliBlocker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPauliBlocker_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PauliBlocker) );
      instance.SetNew(&new_geniecLcLPauliBlocker);
      instance.SetNewArray(&newArray_geniecLcLPauliBlocker);
      instance.SetDelete(&delete_geniecLcLPauliBlocker);
      instance.SetDeleteArray(&deleteArray_geniecLcLPauliBlocker);
      instance.SetDestructor(&destruct_geniecLcLPauliBlocker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PauliBlocker*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PauliBlocker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PauliBlocker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPauliBlocker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PauliBlocker*>(nullptr))->GetClass();
      geniecLcLPauliBlocker_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPauliBlocker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSpectralFunc_Dictionary();
   static void geniecLcLSpectralFunc_TClassManip(TClass*);
   static void *new_geniecLcLSpectralFunc(void *p = nullptr);
   static void *newArray_geniecLcLSpectralFunc(Long_t size, void *p);
   static void delete_geniecLcLSpectralFunc(void *p);
   static void deleteArray_geniecLcLSpectralFunc(void *p);
   static void destruct_geniecLcLSpectralFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SpectralFunc*)
   {
      ::genie::SpectralFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SpectralFunc));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SpectralFunc", "", 1024,
                  typeid(::genie::SpectralFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSpectralFunc_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SpectralFunc) );
      instance.SetNew(&new_geniecLcLSpectralFunc);
      instance.SetNewArray(&newArray_geniecLcLSpectralFunc);
      instance.SetDelete(&delete_geniecLcLSpectralFunc);
      instance.SetDeleteArray(&deleteArray_geniecLcLSpectralFunc);
      instance.SetDestructor(&destruct_geniecLcLSpectralFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SpectralFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SpectralFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SpectralFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSpectralFunc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SpectralFunc*>(nullptr))->GetClass();
      geniecLcLSpectralFunc_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSpectralFunc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSpectralFunc1d_Dictionary();
   static void geniecLcLSpectralFunc1d_TClassManip(TClass*);
   static void *new_geniecLcLSpectralFunc1d(void *p = nullptr);
   static void *newArray_geniecLcLSpectralFunc1d(Long_t size, void *p);
   static void delete_geniecLcLSpectralFunc1d(void *p);
   static void deleteArray_geniecLcLSpectralFunc1d(void *p);
   static void destruct_geniecLcLSpectralFunc1d(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SpectralFunc1d*)
   {
      ::genie::SpectralFunc1d *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SpectralFunc1d));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SpectralFunc1d", "", 1096,
                  typeid(::genie::SpectralFunc1d), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSpectralFunc1d_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SpectralFunc1d) );
      instance.SetNew(&new_geniecLcLSpectralFunc1d);
      instance.SetNewArray(&newArray_geniecLcLSpectralFunc1d);
      instance.SetDelete(&delete_geniecLcLSpectralFunc1d);
      instance.SetDeleteArray(&deleteArray_geniecLcLSpectralFunc1d);
      instance.SetDestructor(&destruct_geniecLcLSpectralFunc1d);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SpectralFunc1d*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SpectralFunc1d*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SpectralFunc1d*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSpectralFunc1d_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SpectralFunc1d*>(nullptr))->GetClass();
      geniecLcLSpectralFunc1d_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSpectralFunc1d_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSpectralFunction2p2h_Dictionary();
   static void geniecLcLSpectralFunction2p2h_TClassManip(TClass*);
   static void *new_geniecLcLSpectralFunction2p2h(void *p = nullptr);
   static void *newArray_geniecLcLSpectralFunction2p2h(Long_t size, void *p);
   static void delete_geniecLcLSpectralFunction2p2h(void *p);
   static void deleteArray_geniecLcLSpectralFunction2p2h(void *p);
   static void destruct_geniecLcLSpectralFunction2p2h(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SpectralFunction2p2h*)
   {
      ::genie::SpectralFunction2p2h *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SpectralFunction2p2h));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SpectralFunction2p2h", "", 1177,
                  typeid(::genie::SpectralFunction2p2h), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSpectralFunction2p2h_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SpectralFunction2p2h) );
      instance.SetNew(&new_geniecLcLSpectralFunction2p2h);
      instance.SetNewArray(&newArray_geniecLcLSpectralFunction2p2h);
      instance.SetDelete(&delete_geniecLcLSpectralFunction2p2h);
      instance.SetDeleteArray(&deleteArray_geniecLcLSpectralFunction2p2h);
      instance.SetDestructor(&destruct_geniecLcLSpectralFunction2p2h);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SpectralFunction2p2h*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SpectralFunction2p2h*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SpectralFunction2p2h*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSpectralFunction2p2h_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SpectralFunction2p2h*>(nullptr))->GetClass();
      geniecLcLSpectralFunction2p2h_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSpectralFunction2p2h_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuclearModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuclearModel : new ::genie::NuclearModel;
   }
   static void *newArray_geniecLcLNuclearModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuclearModel[nElements] : new ::genie::NuclearModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuclearModel(void *p) {
      delete (static_cast<::genie::NuclearModel*>(p));
   }
   static void deleteArray_geniecLcLNuclearModel(void *p) {
      delete [] (static_cast<::genie::NuclearModel*>(p));
   }
   static void destruct_geniecLcLNuclearModel(void *p) {
      typedef ::genie::NuclearModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuclearModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLFermiMomentumTable(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::FermiMomentumTable : new ::genie::FermiMomentumTable;
   }
   static void *newArray_geniecLcLFermiMomentumTable(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::FermiMomentumTable[nElements] : new ::genie::FermiMomentumTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLFermiMomentumTable(void *p) {
      delete (static_cast<::genie::FermiMomentumTable*>(p));
   }
   static void deleteArray_geniecLcLFermiMomentumTable(void *p) {
      delete [] (static_cast<::genie::FermiMomentumTable*>(p));
   }
   static void destruct_geniecLcLFermiMomentumTable(void *p) {
      typedef ::genie::FermiMomentumTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::FermiMomentumTable

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLNuclearModelI(void *p) {
      delete (static_cast<::genie::NuclearModelI*>(p));
   }
   static void deleteArray_geniecLcLNuclearModelI(void *p) {
      delete [] (static_cast<::genie::NuclearModelI*>(p));
   }
   static void destruct_geniecLcLNuclearModelI(void *p) {
      typedef ::genie::NuclearModelI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuclearModelI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLEffectiveSF(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EffectiveSF : new ::genie::EffectiveSF;
   }
   static void *newArray_geniecLcLEffectiveSF(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EffectiveSF[nElements] : new ::genie::EffectiveSF[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLEffectiveSF(void *p) {
      delete (static_cast<::genie::EffectiveSF*>(p));
   }
   static void deleteArray_geniecLcLEffectiveSF(void *p) {
      delete [] (static_cast<::genie::EffectiveSF*>(p));
   }
   static void destruct_geniecLcLEffectiveSF(void *p) {
      typedef ::genie::EffectiveSF current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::EffectiveSF

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLFGMBodekRitchie(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::FGMBodekRitchie : new ::genie::FGMBodekRitchie;
   }
   static void *newArray_geniecLcLFGMBodekRitchie(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::FGMBodekRitchie[nElements] : new ::genie::FGMBodekRitchie[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLFGMBodekRitchie(void *p) {
      delete (static_cast<::genie::FGMBodekRitchie*>(p));
   }
   static void deleteArray_geniecLcLFGMBodekRitchie(void *p) {
      delete [] (static_cast<::genie::FGMBodekRitchie*>(p));
   }
   static void destruct_geniecLcLFGMBodekRitchie(void *p) {
      typedef ::genie::FGMBodekRitchie current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::FGMBodekRitchie

namespace ROOT {
} // end of namespace ROOT for class ::genie::FermiMomentumTablePool

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLSecondNucleonEmissionI(void *p) {
      delete (static_cast<::genie::SecondNucleonEmissionI*>(p));
   }
   static void deleteArray_geniecLcLSecondNucleonEmissionI(void *p) {
      delete [] (static_cast<::genie::SecondNucleonEmissionI*>(p));
   }
   static void destruct_geniecLcLSecondNucleonEmissionI(void *p) {
      typedef ::genie::SecondNucleonEmissionI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SecondNucleonEmissionI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSRCNuclearRecoil(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SRCNuclearRecoil : new ::genie::SRCNuclearRecoil;
   }
   static void *newArray_geniecLcLSRCNuclearRecoil(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SRCNuclearRecoil[nElements] : new ::genie::SRCNuclearRecoil[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSRCNuclearRecoil(void *p) {
      delete (static_cast<::genie::SRCNuclearRecoil*>(p));
   }
   static void deleteArray_geniecLcLSRCNuclearRecoil(void *p) {
      delete [] (static_cast<::genie::SRCNuclearRecoil*>(p));
   }
   static void destruct_geniecLcLSRCNuclearRecoil(void *p) {
      typedef ::genie::SRCNuclearRecoil current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SRCNuclearRecoil

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLFermiMover(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::FermiMover : new ::genie::FermiMover;
   }
   static void *newArray_geniecLcLFermiMover(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::FermiMover[nElements] : new ::genie::FermiMover[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLFermiMover(void *p) {
      delete (static_cast<::genie::FermiMover*>(p));
   }
   static void deleteArray_geniecLcLFermiMover(void *p) {
      delete [] (static_cast<::genie::FermiMover*>(p));
   }
   static void destruct_geniecLcLFermiMover(void *p) {
      typedef ::genie::FermiMover current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::FermiMover

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLLocalFGM(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::LocalFGM : new ::genie::LocalFGM;
   }
   static void *newArray_geniecLcLLocalFGM(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::LocalFGM[nElements] : new ::genie::LocalFGM[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLLocalFGM(void *p) {
      delete (static_cast<::genie::LocalFGM*>(p));
   }
   static void deleteArray_geniecLcLLocalFGM(void *p) {
      delete [] (static_cast<::genie::LocalFGM*>(p));
   }
   static void destruct_geniecLcLLocalFGM(void *p) {
      typedef ::genie::LocalFGM current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::LocalFGM

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNuclearModelMap(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuclearModelMap : new ::genie::NuclearModelMap;
   }
   static void *newArray_geniecLcLNuclearModelMap(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NuclearModelMap[nElements] : new ::genie::NuclearModelMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNuclearModelMap(void *p) {
      delete (static_cast<::genie::NuclearModelMap*>(p));
   }
   static void deleteArray_geniecLcLNuclearModelMap(void *p) {
      delete [] (static_cast<::genie::NuclearModelMap*>(p));
   }
   static void destruct_geniecLcLNuclearModelMap(void *p) {
      typedef ::genie::NuclearModelMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NuclearModelMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPauliBlocker(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PauliBlocker : new ::genie::PauliBlocker;
   }
   static void *newArray_geniecLcLPauliBlocker(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PauliBlocker[nElements] : new ::genie::PauliBlocker[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPauliBlocker(void *p) {
      delete (static_cast<::genie::PauliBlocker*>(p));
   }
   static void deleteArray_geniecLcLPauliBlocker(void *p) {
      delete [] (static_cast<::genie::PauliBlocker*>(p));
   }
   static void destruct_geniecLcLPauliBlocker(void *p) {
      typedef ::genie::PauliBlocker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PauliBlocker

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSpectralFunc(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SpectralFunc : new ::genie::SpectralFunc;
   }
   static void *newArray_geniecLcLSpectralFunc(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SpectralFunc[nElements] : new ::genie::SpectralFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSpectralFunc(void *p) {
      delete (static_cast<::genie::SpectralFunc*>(p));
   }
   static void deleteArray_geniecLcLSpectralFunc(void *p) {
      delete [] (static_cast<::genie::SpectralFunc*>(p));
   }
   static void destruct_geniecLcLSpectralFunc(void *p) {
      typedef ::genie::SpectralFunc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SpectralFunc

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSpectralFunc1d(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SpectralFunc1d : new ::genie::SpectralFunc1d;
   }
   static void *newArray_geniecLcLSpectralFunc1d(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SpectralFunc1d[nElements] : new ::genie::SpectralFunc1d[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSpectralFunc1d(void *p) {
      delete (static_cast<::genie::SpectralFunc1d*>(p));
   }
   static void deleteArray_geniecLcLSpectralFunc1d(void *p) {
      delete [] (static_cast<::genie::SpectralFunc1d*>(p));
   }
   static void destruct_geniecLcLSpectralFunc1d(void *p) {
      typedef ::genie::SpectralFunc1d current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SpectralFunc1d

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSpectralFunction2p2h(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SpectralFunction2p2h : new ::genie::SpectralFunction2p2h;
   }
   static void *newArray_geniecLcLSpectralFunction2p2h(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SpectralFunction2p2h[nElements] : new ::genie::SpectralFunction2p2h[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSpectralFunction2p2h(void *p) {
      delete (static_cast<::genie::SpectralFunction2p2h*>(p));
   }
   static void deleteArray_geniecLcLSpectralFunction2p2h(void *p) {
      delete [] (static_cast<::genie::SpectralFunction2p2h*>(p));
   }
   static void destruct_geniecLcLSpectralFunction2p2h(void *p) {
      typedef ::genie::SpectralFunction2p2h current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SpectralFunction2p2h

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhNuclSt() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhNuclSt) = RecordReadRules_libGPhNuclSt();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhNuclSt));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhNuclSt_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/NuclearState",
"GENIE",
"GENIE/Physics/NuclearState",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/NuclearState",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/NuclearState/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhNuclSt dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/NuclearState/NuclearModel.h")))  __attribute__((annotate("$clingAutoload$Physics/NuclearState/NuclearModelI.h")))  NuclearModel;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/NuclearState/FermiMomentumTable.h")))  __attribute__((annotate("$clingAutoload$Physics/NuclearState/NuclearModelI.h")))  FermiMomentumTable;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/NuclearState/NuclearModelI.h")))  NuclearModelI;}
namespace genie{class  EffectiveSF;}
namespace genie{class  FGMBodekRitchie;}
namespace genie{class  FermiMomentumTablePool;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/NuclearState/SecondNucleonEmissionI.h")))  __attribute__((annotate("$clingAutoload$Physics/NuclearState/SRCNuclearRecoil.h")))  SecondNucleonEmissionI;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Physics/NuclearState/SRCNuclearRecoil.h")))  SRCNuclearRecoil;}
namespace genie{class  FermiMover;}
namespace genie{class  LocalFGM;}
namespace genie{class  NuclearModelMap;}
namespace genie{class  PauliBlocker;}
namespace genie{class  SpectralFunc;}
namespace genie{class  SpectralFunc1d;}
namespace genie{class  SpectralFunction2p2h;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhNuclSt dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::EffectiveSF

\brief    An effective spectral function to match psi' superscaling.
          Implements the NuclearModelI interface.

\ref      http://arxiv.org/abs/1405.0583

\author   Brian Coopersmith, University of Rochester

\created  April 02, 2014

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _EFFECTIVE_SF_H_
#define _EFFECTIVE_SF_H_

#include <map>

#include <TH1D.h>

#include "Physics/NuclearState/NuclearModelI.h"

using std::map;

namespace genie {

class EffectiveSF : public NuclearModelI {

public:
  EffectiveSF();
  EffectiveSF(string config);
  virtual ~EffectiveSF();

  using NuclearModelI::GenerateNucleon;  // inherit versions not overridden here
  using NuclearModelI::Prob;

  //-- implement the NuclearModelI interface
  bool           GenerateNucleon (const Target & t) const;
  double         Prob            (double mom, double w, const Target & t) const;
  NuclearModel_t ModelType       (const Target &) const
  {
    return kNucmEffSpectralFunc;
  }

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  TH1D * ProbDistro (const Target & t) const;

  TH1D * MakeEffectiveSF(const Target & target) const;

  TH1D * MakeEffectiveSF(double bs, double bp, double alpha, double beta,
                         double c1, double c2, double c3,
                         const Target & target) const;

  double ReturnBindingEnergy(const Target & target) const;
  double GetTransEnh1p1hMod(const Target& target) const;

  double Returnf1p1h(const Target & target) const;
  void   LoadConfig (void);

  mutable map<string, TH1D *> fProbDistroMap;
  double fPMax;
  double fPCutOff;
  bool   fEjectSecondNucleon2p2h;
  bool   fUseElFFTransEnh;

  // Map from PDG code to spectral function parameters
  map<int, double> fNucRmvE;
  map<int, double> f1p1hMap;
  map<int, std::vector<double> > fProbDistParams;
  map<int, double> fTransEnh1p1hMods;

  // Map from range of A (pair<lowA, highA> inclusive> to spectral
  // function parameters.
  map<pair<int, int>, double> fRangeNucRmvE;
  map<pair<int, int>, double> fRange1p1hMap;
  map<pair<int, int>, std::vector<double> > fRangeProbDistParams;
  map<pair<int, int>, double> fRangeTransEnh1p1hMods;
};

}         // genie namespace
#endif    // _EFFECTIVE_SF_H_
//____________________________________________________________________________
/*!

\class    genie::FGMBodekRitchie

\brief    The Bodek Richie Fermi Gass model. Implements the NuclearModelI 
          interface.

\ref      

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 09, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _FGM_BODEK_RITCHIE_H_
#define _FGM_BODEK_RITCHIE_H_

#include <map>

#include <TH1D.h>

#include "Physics/NuclearState/NuclearModelI.h"

using std::map;

namespace genie {

class FGMBodekRitchie : public NuclearModelI {

public:
  FGMBodekRitchie();
  FGMBodekRitchie(string config);
  virtual ~FGMBodekRitchie();

  using NuclearModelI::GenerateNucleon;  // inherit versions not overridden here
  using NuclearModelI::Prob;

  //-- implement the NuclearModelI interface
  bool           GenerateNucleon (const Target & t) const;
  double         Prob            (double mom, double w, const Target & t) const;
  NuclearModel_t ModelType       (const Target &) const 
  { 
    return kNucmFermiGas; 
  }

  virtual double         FermiMomentum( const Target & t, int nucleon_pdg ) const ;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

 protected:
  void   LoadConfig (void);
  
private:

  TH1D * ProbDistro (const Target & t) const;

  mutable map<string, TH1D *> fProbDistroMap;

  map<int, double> fNucRmvE;

  double fPMax;
  double fPCutOff;
  bool fUseParametrization;

};

}         // genie namespace
#endif    // _FGM_BODEK_RITCHIE_H_

//____________________________________________________________________________
/*!

\class    genie::FermiMomentumTable

\brief    A table of Fermi momentum constants

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  August 18, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _FERMI_MOMENTUM_TABLE_H_
#define _FERMI_MOMENTUM_TABLE_H_

#include <map>

using std::map;

namespace genie {

typedef struct EKF_t {
  double p; // Fermi momentum for proton
  double n; // Fermi momentum for neutron
} KF_t;

class FermiMomentumTable
{
public:
  FermiMomentumTable();
  FermiMomentumTable(const FermiMomentumTable & fmt);
  virtual ~FermiMomentumTable();

  double FindClosestKF (int target_pdgc, int nucleon_pdgc) const;
  void   AddTableEntry (int target_pdgc, KF_t kf);

private:
  map<int, KF_t> fKFSets; // the actual Fermi momenta table
};

}      // genie namespace

#endif // _FERMI_MOMENTUM_TABLE_H_
//____________________________________________________________________________
/*!

\class    genie::FermiMomentumTablePool

\brief    Singleton class to load & serve tables of Fermi momentum constants

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  August 18, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _FERMI_MOMENTUM_TABLE_POOL_H_
#define _FERMI_MOMENTUM_TABLE_POOL_H_

#include <map>
#include <string>

#include "Framework/Conventions/XmlParserStatus.h"

using std::map;
using std::string;

namespace genie {

class FermiMomentumTable;

class FermiMomentumTablePool
{
public:
  static FermiMomentumTablePool * Instance (void);

  const FermiMomentumTable * GetTable (string name);

private:
  FermiMomentumTablePool();
  FermiMomentumTablePool(const FermiMomentumTablePool & fmc);
  virtual ~FermiMomentumTablePool();

  bool LoadTables (void);
  XmlParserStatus_t ParseXMLTables (string filename);

  static FermiMomentumTablePool * fInstance;

  map<string, FermiMomentumTable *> fKFSets; // kf tables

  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (FermiMomentumTablePool::fInstance !=0) {
            delete FermiMomentumTablePool::fInstance;
            FermiMomentumTablePool::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace

#endif // _FERMI_MOMENTUM_TABLE_POOL_H_
//____________________________________________________________________________
/*!

\class    genie::FermiMover

\brief    It visits the event record & computes a Fermi motion momentum for
          initial state nucleons bound in nuclei.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 08, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _FERMI_MOVER_H_
#define _FERMI_MOVER_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Physics/NuclearState/FermiMomentumTable.h"
#include "Framework/Interaction/Target.h"
#include "Physics/NuclearState/SRCNuclearRecoil.h"
#include "Physics/NuclearState/SecondNucleonEmissionI.h"

namespace genie {

class NuclearModelI;

class FermiMover : public EventRecordVisitorI {

public :
  FermiMover();
  FermiMover(string config);
 ~FermiMover();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void KickHitNucleon          (GHepRecord * evrec) const; ///< give hit nucleon a momentum

  void AddTargetNucleusRemnant (GHepRecord * evrec) const; ///< add a recoiled nucleus remnant

  void LoadConfig (void);

  bool  fKeepNuclOnMassShell;          ///< keep hit bound nucleon on the mass shell?
  bool  fMomDepErmv;                   ///< use momentum dependent calculation of Ermv
  const NuclearModelI *  fNuclModel;   ///< nuclear model

  const SecondNucleonEmissionI *  fSecondEmitter ; 

};

}      // genie namespace
#endif // _FERMI_MOVER_H_
//____________________________________________________________________________
/*!

\class    genie::LocalFGM

\brief    local Fermi gas model. Implements the NuclearModelI
          interface.

\ref

\author   Joe Johnston, Steven Dytman

\created  December 2015

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org

*/
//____________________________________________________________________________

#ifndef _LOCAL_FGM_H_
#define _LOCAL_FGM_H_

#include <map>

#include <TH1D.h>

#include "Physics/NuclearState/NuclearModelI.h"

using std::map;

namespace genie {

class LocalFGM : public NuclearModelI {

public:
  LocalFGM();
  LocalFGM(string config);
  virtual ~LocalFGM();

  using NuclearModelI::GenerateNucleon;  // inherit versions not overridden here
  using NuclearModelI::Prob;

  //-- allow methods to be called with a radius
  bool   GenerateNucleon (const Target & t, double hitNucleonRadius) const;
  double Prob            (double p, double w, const Target & t,
			  double hitNucleonRadius) const;

  //-- implement the NuclearModelI interface
  bool GenerateNucleon (const Target & t) const {
    return GenerateNucleon(t,0.0);
  }
  double Prob (double p, double w, const Target & t) const {
    return Prob(p,w,t,0.0);
  }
  NuclearModel_t ModelType       (const Target &) const
  {
    return kNucmLocalFermiGas;
  }

  virtual double LocalFermiMomentum( const Target & t, int nucleon_pdg, double radius ) const ;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set) ;

 protected:
  void   LoadConfig (void);


private:
  TH1D * ProbDistro (const Target & t, double r) const;

  /// Throw a value from the Maxwell-Boltzmann distribution with the configured
  /// parameters
  double MaxwellBoltzmannRemovalE(const Target & t, double Ermv_min,
    double Ermv_max) const;

  map<int, double> fNucRmvE;

  double fPMax;
  bool fMomDepErmv;
  bool fForcePositiveErmv;
  bool fUseMBDist;

  // options related to SRC pairs
  double fSRC_Fraction;
  double fPCutOff;

  /// Center of Maxwell-Boltmann distribution used for SRC removal energy
  /// distribution, GeV
  double fSRC_Ermv_C;

  /// Sigma of Maxwell-Boltmann distribution used for SRC removal energy
  /// distribution, GeV
  double fSRC_Ermv_sigma;
};

}         // genie namespace
#endif    // _LOCAL_FGM_H_

//____________________________________________________________________________
/*!

\class    genie::NuclearData

\brief    

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  Nov 20, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _NUCLEAR_DATA_H_
#define _NUCLEAR_DATA_H_

namespace genie {

class Spline;

class NuclearData
{
public:
  static NuclearData * Instance (void);

  double DeuteriumSuppressionFactor(double Q2);

private:
  NuclearData();
  NuclearData(const NuclearData & nd);
 ~NuclearData();

  void Load(void); 

  static NuclearData * fInstance;

  // Loaded data
  Spline * fNuclSupprD2;

  // Sinleton cleaner
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (NuclearData::fInstance !=0) {
            delete NuclearData::fInstance;
            NuclearData::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace
#endif //_NUCLEAR_DATA_H_

//____________________________________________________________________________
/*!

\class    genie::NuclearModelI

\brief    Pure abstract base class.
          Defines the NuclearModelI interface to be implemented by any physics
          model describing the distribution of nucleons within a nuclei

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 09, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          

 Important revisions after version 2.0.0 :
 @ Mar 18, 2016 - JJ (SD)
   Added option for GenerateNucleon() to be called with a target and a radius
   as the arguments. Currently used by LocalFGM. Calls
   GenerateNucleon() with the radius set to 0 for all other NuclearModelI
   implementations.

 @ Jul 2020 - Marco Roda
   Added fooks for FermiMomentum and LocalFermiMomentum

*/
//____________________________________________________________________________

#ifndef _NUCLEAR_MODEL_I_H_
#define _NUCLEAR_MODEL_I_H_

#include <string>

#include <TVector3.h>

#include "Physics/NuclearState/NuclearModel.h"
#include "Physics/NuclearState/FermiMomentumTable.h"
#include "Framework/Algorithm/Algorithm.h"
#include "Framework/Interaction/Target.h"

namespace genie {

class NuclearModelI : public Algorithm {

public:
  virtual ~NuclearModelI() {};

  virtual bool           GenerateNucleon (const Target &) const = 0;
  virtual bool           GenerateNucleon (const Target & tgt,
                                          double hitNucleonRadius) const;

  virtual double         Prob            (double p, double w, const Target &) const = 0;
  virtual double         Prob            (double p, double w, const Target & tgt,
                                          double hitNucleonRadius) const;

  virtual NuclearModel_t ModelType       (const Target &) const = 0;

  virtual double         FermiMomentum( const Target &, int nucleon_pdg ) const ;
  virtual double         LocalFermiMomentum( const Target &, int nucleon_pdg, double radius ) const ; 
 

  inline double          RemovalEnergy   (void)           const
  {
    return fCurrRemovalEnergy;
  }

  inline double         Momentum        (void)           const
  {
    return fCurrMomentum.Mag();
  }

  inline const TVector3& Momentum3      (void)           const
  {
    return fCurrMomentum;
  }

  inline FermiMoverInteractionType_t GetFermiMoverInteractionType(void) const
  {
    return fFermiMoverInteractionType;
  }

  // These setters have to be const. I hate it. We should really update this class interface
  inline void SetMomentum3(const TVector3 & mom) const
  {
    fCurrMomentum = mom;
  };
  inline void SetRemovalEnergy(double E) const
  {
    fCurrRemovalEnergy = E;
  }

protected:
  NuclearModelI()
    : Algorithm()
    , fCurrRemovalEnergy(0)
    , fCurrMomentum(0,0,0)
    , fFermiMoverInteractionType(kFermiMoveDefault)
    , fKFTable(nullptr)
    , fKFTableName("Unspecified")
    {};
  NuclearModelI(std::string name)
    : Algorithm(name)
    , fCurrRemovalEnergy(0)
    , fCurrMomentum(0,0,0)
    , fFermiMoverInteractionType(kFermiMoveDefault)
    , fKFTable(nullptr)
    , fKFTableName("Unspecified")
    {};
  NuclearModelI(std::string name, std::string config)
    : Algorithm(name, config)
    , fCurrRemovalEnergy(0)
    , fCurrMomentum(0,0,0)
    , fFermiMoverInteractionType(kFermiMoveDefault)
    , fKFTable(nullptr)
    , fKFTableName("Unspecified")
    {};

  virtual void LoadConfig() ;

  const string & FermiMomentumTableName() const { return fKFTableName; }
  const genie::FermiMomentumTable & FermiMomentumTable() const { return *fKFTable ; }

  mutable double   fCurrRemovalEnergy;
  mutable TVector3 fCurrMomentum;
  mutable FermiMoverInteractionType_t fFermiMoverInteractionType;


 private:

  const genie::FermiMomentumTable * fKFTable; 
  string fKFTableName;

};

}         // genie namespace
#endif    // _NUCLEAR_MODEL_I_H_
//____________________________________________________________________________
/*!

\class    genie::NuclearModelMap

\brief    This class is a hook for  nuclear models and allows associating each
          one of them with specific nuclei.
          Is a concrete implementation of the NuclearModelI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 07, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _NUCLEAR_MODEL_MAP_H_
#define _NUCLEAR_MODEL_MAP_H_

#include <map>
#include "Physics/NuclearState/NuclearModelI.h"

using std::map;

namespace genie {

class NuclearModelMap : public NuclearModelI {

public:
  NuclearModelMap();
  NuclearModelMap(string config);
  virtual ~NuclearModelMap();

  using NuclearModelI::GenerateNucleon;  // inherit versions not overridden here
  using NuclearModelI::Prob;

  //-- Allow GenerateNucleon to be called with a radius
  virtual bool   GenerateNucleon (const Target & t,
                                  double hitNucleonRadius) const;
  virtual double  Prob           (double p, double w, const Target & t,
                                  double hitNucleonRadius) const;

  //-- implement the NuclearModelI interface
  bool GenerateNucleon (const Target & t) const {
    return GenerateNucleon(t,0.0);
  }
  double Prob (double p, double w, const Target & t) const {
    return Prob(p,w,t,0.0);
  }
  NuclearModel_t ModelType       (const Target & t) const;

  virtual double FermiMomentum( const Target & t, int nucleon_pdg ) const ;
  virtual double LocalFermiMomentum( const Target & t, int nucleon_pdg, double radius ) const ;


  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

private:
  void LoadConfig(void);
  const NuclearModelI * SelectModel(const Target & t) const;

  const NuclearModelI * fDefGlobModel;            ///< default basic model (should work for all nuclei)
  map<int, const NuclearModelI *> fRefinedModels; ///< refinements for specific elements
};

}      // genie namespace
#endif // _NUCLEAR_MODEL_MAP_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::nuclear

\brief      Simple nuclear physics empirical formulas (densities, radii, ...)
            and empirical nuclear corrections

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    May 06, 2004

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org
            
*/
//____________________________________________________________________________

#ifndef _NUCLEAR_UTILS_H_
#define _NUCLEAR_UTILS_H_

#include <string>

#include "Framework/Conventions/Constants.h"

using std::string;

namespace genie {

class Target;
class Interaction;

namespace utils {

namespace nuclear
{
  double BindEnergy             (const Target & target);
  double BindEnergy             (int nucA, int nucZ);
  double BindEnergyPerNucleon   (const Target & target);
  double BindEnergyLastNucleon  (const Target & target);
  double Radius                 (int A, double Ro=constants::kNucRo);

  double NuclQELXSecSuppression (string kftable, double pmax, const Interaction * in);

  double RQEFG_generic (
            double q2, double Mn, double kFi, double kFf, double pmax);

  double FmI1   (double alpha, double beta,
                  double a, double b,  double kFi, double kFf, double q);
  double FmI2   (double alpha, double beta,
                  double a, double b,  double kFi, double kFf, double q);
  double FmArea (double alpha, double beta, double kf, double pmax);

  double DISNuclFactor (double x, int A);

  double Density           (double r, int A, double ring=0.);
  double DensityGaus       (double r, double ap, double alf, double ring=0.);
  double DensityWoodsSaxon (double r, double c, double z, double ring=0.);

  double BindEnergyPerNucleonParametrization(const Target & target);
  double FermiMomentumForIsoscalarNucleonParametrization(const Target & target);


} // nuclear namespace
} // utils   namespace
} // genie   namespace

#endif // _NUCL_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::PauliBlocker

\brief    Examines whether the generated event should be Pauli blocked.
          Is a concerete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

          Changes required to implement the GENIE Boosted Dark Matter module
          were installed by Josh Berger (Univ. of Wisconsin)

          Other code improvements, additions, fixes were installed by
          Joe Johnston (Univ of Pittsburgh)

\created  October 08, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _PAULI_BLOCKER_H_
#define _PAULI_BLOCKER_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/Interaction/Target.h"

namespace genie {

class FermiMomentumTable;

class PauliBlocker : public EventRecordVisitorI {

public :
  PauliBlocker();
  PauliBlocker(string config);
 ~PauliBlocker();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

  /// Get the Fermi momentum needed to check Pauli blocking
  double GetFermiMomentum(const Target& tgt, int pdg_Nf,
    double radius = 0.0) const;

private:
   void LoadModelType(void);

   bool fLFG;
   const FermiMomentumTable * fKFTable;
   string fKFTableName;
};

}      // genie namespace

#endif // _PAULI_BLOCKER_H_
//____________________________________________________________________________
/*!

\class    genie::SRCNuclearRecoil

\brief       Created this new module that controls the addition of the recoil nucleon in the event record 
             and extracts its kinematics

\author   Afroditi Papadopoulou <apapadop \at mit.edu>
          Massachusetts Institute of Technology - October 04, 2019

\created  October 04, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SRC_NUCLEAR_RECOIL_H_
#define _SRC_NUCLEAR_RECOIL_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Physics/NuclearState/FermiMomentumTable.h"
#include "Framework/Interaction/Target.h"
#include "Physics/NuclearState/SecondNucleonEmissionI.h"

namespace genie {

class SRCNuclearRecoil : public SecondNucleonEmissionI {

public :
  SRCNuclearRecoil();
  SRCNuclearRecoil(string config);
 ~SRCNuclearRecoil();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);


 protected:
  void LoadConfig (void);  
  
  int SRCRecoilPDG( const GHepParticle & nucleon, const Target & tgt) const; // determine the PDG code of the SRC pair

private:


  double fPPPairPercentage;
  double fPNPairPercentage;

};

}      // genie namespace
#endif // _SRC_NUCLEAR_RECOIL_H_
//____________________________________________________________________________
/*!

\class    genie::SecondNucleonEmissionI

\brief    Interface to drive the a second nucleon emission from a nucleus
          Specfic impelmentations will have different physics

\author   Afroditi Papadopoulou <apapadop \at mit.edu>
          Massachusetts Institute of Technology - October 04, 2019
          Marco Roda <mroda \at liverpool.ac.uk>
          University of Liverpool

\created  October 04, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SECOND_NUCLEON_EMISSION_H_
#define _SECOND_NUCLEON_EMISSION_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/Interaction/Target.h"

namespace genie {

class NuclearModelI;

class SecondNucleonEmissionI : public EventRecordVisitorI {

public :

  virtual ~SecondNucleonEmissionI();

protected:

  virtual bool EmitSecondNucleon( GHepRecord * evrec, const int eject_nucleon_pdg ) const ;

  const NuclearModelI *  fNuclModel;   ///< nuclear model
  
  SecondNucleonEmissionI( string name ) ;
  SecondNucleonEmissionI( string name, string config );

  void LoadConfig (void);

};

}      // genie namespace
#endif // _SRC_NUCLEAR_RECOIL_H_
//____________________________________________________________________________
/*!

\class    genie::SpectralFunc

\brief    A realistic spectral function - based nuclear model.
          Is a concrete implementation of the NuclearModelI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 07, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          

*/
//____________________________________________________________________________

#ifndef _SPECTRAL_FUNCTION_H_
#define _SPECTRAL_FUNCTION_H_

#include "Physics/NuclearState/NuclearModelI.h"

class TNtupleD;
class TGraph2D;

namespace genie {

class SpectralFunc : public NuclearModelI {

public:
  SpectralFunc();
  SpectralFunc(string config);
  virtual ~SpectralFunc();

  using NuclearModelI::GenerateNucleon;  // inherit versions not overridden here
  using NuclearModelI::Prob;

  //-- implement the NuclearModelI interface
  bool           GenerateNucleon (const Target & t) const;
  double         Prob            (double p, double w, const Target & t) const;
  NuclearModel_t ModelType       (const Target &) const 
  {
    return kNucmSpectralFunc;
  }

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

 protected:
  void       LoadConfig             (void);

private:
  
  TGraph2D * Convert2Graph          (TNtupleD & data) const;
  TGraph2D * SelectSpectralFunction (const Target & target) const; 

  TGraph2D * fSfFe56;   ///< Benhar's Fe56 SF
  TGraph2D * fSfC12;    ///< Benhar's C12 SF
};

}      // genie namespace
#endif // _SPECTRAL_FUNCTION_H_
//____________________________________________________________________________
/*!

\class    genie::SpectralFunc1d

\brief    Simpler approach to using spectral functions.
	  A beta version.
          Implements the NuclearModelI interface.

\ref      

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 09, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          
*/
//____________________________________________________________________________

#ifndef _SPECTRAL_FUNCTION_1D_H_
#define _SPECTRAL_FUNCTION_1D_H_

#include <map>

#include "Physics/NuclearState/NuclearModelI.h"

using std::map;

namespace genie {

class Spline;
class SpectralFunc1d : public NuclearModelI {

public:
  SpectralFunc1d();
  SpectralFunc1d(string config);
  virtual ~SpectralFunc1d();

  using NuclearModelI::GenerateNucleon;  // inherit versions not overridden here
  using NuclearModelI::Prob;

  //-- implement the NuclearModelI interface
  bool           GenerateNucleon (const Target & t) const;
  double         Prob            (double p, double w, const Target & t) const;
  NuclearModel_t ModelType       (const Target &) const
  {
    return kNucmFermiGas; /// is not really a spectral func model, just a FG model with different momentum distribution
  }

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

 protected:
  void LoadConfig (void);

private:
  
  void CleanUp    (void);
  
  // Spectral function data
  // Hopefully, analytical expressions for spectral functions will become available soon.
  //
  bool   fUseRFGRemovalE;
  bool   fUseRFGMomentumCutoff ;
  double fPCutOff;
  map<int, Spline *> fSFk;     ///< All available spectral funcs integrated over removal energy
  map<int, Spline *> fSFw;     ///< Average nucleon removal as a function of pF - computed from the spectral function
  map<int, double>   fNucRmvE; ///< Removal energies as used in FG model
  map<int, double>   fMaxProb; ///< Max SF(k) probability used in rejection method
};

}         // genie namespace
#endif    // _SPECTRAL_FUNCTION_1D_H_

//____________________________________________________________________________
/*!

\class    genie::SpectralFunction2p2h

\brief    Speficif implementation of SecondNucleonEmissionI
          to emit the second nulceon coming from a 2p2h pair
          When GENIE is operating in with EffectiveSF

\author   Afroditi Papadopoulou <apapadop \at mit.edu>
          Massachusetts Institute of Technology - October 04, 2019
          Marco Roda <mroda@liverpool.ac.uk>
          University of Liverpool

\created  October, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SPECTRAL_FUNCTION_2P2H_H_
#define _SPECTRAL_FUNCTION_2P2H_H_

#include "Framework/GHEP/GHepParticle.h"

#include "Framework/Interaction/Target.h"
#include "Physics/NuclearState/SecondNucleonEmissionI.h"


namespace genie {

class NuclearModelI;

class SpectralFunction2p2h : public SecondNucleonEmissionI {

public :
  SpectralFunction2p2h();
  SpectralFunction2p2h(string config);
 ~SpectralFunction2p2h();
  void LoadConfig (void);

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

};

}      // genie namespace
#endif // _SRC_NUCLEAR_RECOIL_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::EffectiveSF", payloadCode, "@",
"genie::FGMBodekRitchie", payloadCode, "@",
"genie::FermiMomentumTable", payloadCode, "@",
"genie::FermiMomentumTablePool", payloadCode, "@",
"genie::FermiMover", payloadCode, "@",
"genie::LocalFGM", payloadCode, "@",
"genie::NuclearModel", payloadCode, "@",
"genie::NuclearModelI", payloadCode, "@",
"genie::NuclearModelMap", payloadCode, "@",
"genie::PauliBlocker", payloadCode, "@",
"genie::SRCNuclearRecoil", payloadCode, "@",
"genie::SecondNucleonEmissionI", payloadCode, "@",
"genie::SpectralFunc", payloadCode, "@",
"genie::SpectralFunc1d", payloadCode, "@",
"genie::SpectralFunction2p2h", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhNuclSt",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhNuclSt_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhNuclSt_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhNuclSt() {
  TriggerDictionaryInitialization_libGPhNuclSt_Impl();
}
