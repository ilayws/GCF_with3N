// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_FwEG
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
#include "EVGThreadException.h"
#include "EventGenerator.h"
#include "EventGeneratorI.h"
#include "EventGeneratorList.h"
#include "EventGeneratorListAssembler.h"
#include "EventRecord.h"
#include "EventRecordVisitorI.h"
#include "GEVGDriver.h"
#include "GEVGPool.h"
#include "GFluxI.h"
#include "GMCJDriver.h"
#include "GMCJMonitor.h"
#include "GVldContext.h"
#include "GeomAnalyzerI.h"
#include "HybridXSecAlgorithm.h"
#include "InteractionGeneratorMap.h"
#include "InteractionList.h"
#include "InteractionListAssembler.h"
#include "InteractionListGeneratorI.h"
#include "InteractionSelectorI.h"
#include "PathLengthList.h"
#include "PhysInteractionSelector.h"
#include "RunningThreadInfo.h"
#include "ToyInteractionSelector.h"
#include "XSecAlgorithmI.h"
#include "XSecAlgorithmMap.h"

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
            instance("genie", 0 /*version*/, "", 32,
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
   static TClass *geniecLcLEventRecordVisitorI_Dictionary();
   static void geniecLcLEventRecordVisitorI_TClassManip(TClass*);
   static void delete_geniecLcLEventRecordVisitorI(void *p);
   static void deleteArray_geniecLcLEventRecordVisitorI(void *p);
   static void destruct_geniecLcLEventRecordVisitorI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::EventRecordVisitorI*)
   {
      ::genie::EventRecordVisitorI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::EventRecordVisitorI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::EventRecordVisitorI", "EventRecordVisitorI.h", 29,
                  typeid(::genie::EventRecordVisitorI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLEventRecordVisitorI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::EventRecordVisitorI) );
      instance.SetDelete(&delete_geniecLcLEventRecordVisitorI);
      instance.SetDeleteArray(&deleteArray_geniecLcLEventRecordVisitorI);
      instance.SetDestructor(&destruct_geniecLcLEventRecordVisitorI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::EventRecordVisitorI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::EventRecordVisitorI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::EventRecordVisitorI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLEventRecordVisitorI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::EventRecordVisitorI*>(nullptr))->GetClass();
      geniecLcLEventRecordVisitorI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLEventRecordVisitorI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGVldContext_Dictionary();
   static void geniecLcLGVldContext_TClassManip(TClass*);
   static void *new_geniecLcLGVldContext(void *p = nullptr);
   static void *newArray_geniecLcLGVldContext(Long_t size, void *p);
   static void delete_geniecLcLGVldContext(void *p);
   static void deleteArray_geniecLcLGVldContext(void *p);
   static void destruct_geniecLcLGVldContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GVldContext*)
   {
      ::genie::GVldContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GVldContext));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GVldContext", "GVldContext.h", 37,
                  typeid(::genie::GVldContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGVldContext_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GVldContext) );
      instance.SetNew(&new_geniecLcLGVldContext);
      instance.SetNewArray(&newArray_geniecLcLGVldContext);
      instance.SetDelete(&delete_geniecLcLGVldContext);
      instance.SetDeleteArray(&deleteArray_geniecLcLGVldContext);
      instance.SetDestructor(&destruct_geniecLcLGVldContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GVldContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GVldContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GVldContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGVldContext_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GVldContext*>(nullptr))->GetClass();
      geniecLcLGVldContext_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGVldContext_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLEventGeneratorI_Dictionary();
   static void geniecLcLEventGeneratorI_TClassManip(TClass*);
   static void delete_geniecLcLEventGeneratorI(void *p);
   static void deleteArray_geniecLcLEventGeneratorI(void *p);
   static void destruct_geniecLcLEventGeneratorI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::EventGeneratorI*)
   {
      ::genie::EventGeneratorI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::EventGeneratorI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::EventGeneratorI", "EventGeneratorI.h", 38,
                  typeid(::genie::EventGeneratorI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLEventGeneratorI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::EventGeneratorI) );
      instance.SetDelete(&delete_geniecLcLEventGeneratorI);
      instance.SetDeleteArray(&deleteArray_geniecLcLEventGeneratorI);
      instance.SetDestructor(&destruct_geniecLcLEventGeneratorI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::EventGeneratorI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::EventGeneratorI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::EventGeneratorI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLEventGeneratorI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::EventGeneratorI*>(nullptr))->GetClass();
      geniecLcLEventGeneratorI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLEventGeneratorI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLEventGenerator_Dictionary();
   static void geniecLcLEventGenerator_TClassManip(TClass*);
   static void *new_geniecLcLEventGenerator(void *p = nullptr);
   static void *newArray_geniecLcLEventGenerator(Long_t size, void *p);
   static void delete_geniecLcLEventGenerator(void *p);
   static void deleteArray_geniecLcLEventGenerator(void *p);
   static void destruct_geniecLcLEventGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::EventGenerator*)
   {
      ::genie::EventGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::EventGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::EventGenerator", "", 112,
                  typeid(::genie::EventGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLEventGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::EventGenerator) );
      instance.SetNew(&new_geniecLcLEventGenerator);
      instance.SetNewArray(&newArray_geniecLcLEventGenerator);
      instance.SetDelete(&delete_geniecLcLEventGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLEventGenerator);
      instance.SetDestructor(&destruct_geniecLcLEventGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::EventGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::EventGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::EventGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLEventGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::EventGenerator*>(nullptr))->GetClass();
      geniecLcLEventGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLEventGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLEventGeneratorList_Dictionary();
   static void geniecLcLEventGeneratorList_TClassManip(TClass*);
   static void *new_geniecLcLEventGeneratorList(void *p = nullptr);
   static void *newArray_geniecLcLEventGeneratorList(Long_t size, void *p);
   static void delete_geniecLcLEventGeneratorList(void *p);
   static void deleteArray_geniecLcLEventGeneratorList(void *p);
   static void destruct_geniecLcLEventGeneratorList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::EventGeneratorList*)
   {
      ::genie::EventGeneratorList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::EventGeneratorList));
      static ::ROOT::TGenericClassInfo 
         instance("genie::EventGeneratorList", "", 245,
                  typeid(::genie::EventGeneratorList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLEventGeneratorList_Dictionary, isa_proxy, 0,
                  sizeof(::genie::EventGeneratorList) );
      instance.SetNew(&new_geniecLcLEventGeneratorList);
      instance.SetNewArray(&newArray_geniecLcLEventGeneratorList);
      instance.SetDelete(&delete_geniecLcLEventGeneratorList);
      instance.SetDeleteArray(&deleteArray_geniecLcLEventGeneratorList);
      instance.SetDestructor(&destruct_geniecLcLEventGeneratorList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::EventGeneratorList*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::EventGeneratorList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::EventGeneratorList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLEventGeneratorList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::EventGeneratorList*>(nullptr))->GetClass();
      geniecLcLEventGeneratorList_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLEventGeneratorList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLEventGeneratorListAssembler_Dictionary();
   static void geniecLcLEventGeneratorListAssembler_TClassManip(TClass*);
   static void *new_geniecLcLEventGeneratorListAssembler(void *p = nullptr);
   static void *newArray_geniecLcLEventGeneratorListAssembler(Long_t size, void *p);
   static void delete_geniecLcLEventGeneratorListAssembler(void *p);
   static void deleteArray_geniecLcLEventGeneratorListAssembler(void *p);
   static void destruct_geniecLcLEventGeneratorListAssembler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::EventGeneratorListAssembler*)
   {
      ::genie::EventGeneratorListAssembler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::EventGeneratorListAssembler));
      static ::ROOT::TGenericClassInfo 
         instance("genie::EventGeneratorListAssembler", "", 291,
                  typeid(::genie::EventGeneratorListAssembler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLEventGeneratorListAssembler_Dictionary, isa_proxy, 0,
                  sizeof(::genie::EventGeneratorListAssembler) );
      instance.SetNew(&new_geniecLcLEventGeneratorListAssembler);
      instance.SetNewArray(&newArray_geniecLcLEventGeneratorListAssembler);
      instance.SetDelete(&delete_geniecLcLEventGeneratorListAssembler);
      instance.SetDeleteArray(&deleteArray_geniecLcLEventGeneratorListAssembler);
      instance.SetDestructor(&destruct_geniecLcLEventGeneratorListAssembler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::EventGeneratorListAssembler*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::EventGeneratorListAssembler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::EventGeneratorListAssembler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLEventGeneratorListAssembler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::EventGeneratorListAssembler*>(nullptr))->GetClass();
      geniecLcLEventGeneratorListAssembler_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLEventGeneratorListAssembler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLEventRecord(void *p = nullptr);
   static void *newArray_geniecLcLEventRecord(Long_t size, void *p);
   static void delete_geniecLcLEventRecord(void *p);
   static void deleteArray_geniecLcLEventRecord(void *p);
   static void destruct_geniecLcLEventRecord(void *p);
   static void streamer_geniecLcLEventRecord(TBuffer &buf, void *obj);
   static Long64_t merge_geniecLcLEventRecord(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::EventRecord*)
   {
      ::genie::EventRecord *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::EventRecord >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::EventRecord", ::genie::EventRecord::Class_Version(), "", 346,
                  typeid(::genie::EventRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::EventRecord::Dictionary, isa_proxy, 16,
                  sizeof(::genie::EventRecord) );
      instance.SetNew(&new_geniecLcLEventRecord);
      instance.SetNewArray(&newArray_geniecLcLEventRecord);
      instance.SetDelete(&delete_geniecLcLEventRecord);
      instance.SetDeleteArray(&deleteArray_geniecLcLEventRecord);
      instance.SetDestructor(&destruct_geniecLcLEventRecord);
      instance.SetStreamerFunc(&streamer_geniecLcLEventRecord);
      instance.SetMerge(&merge_geniecLcLEventRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::EventRecord*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::EventRecord*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::EventRecord*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGEVGDriver_Dictionary();
   static void geniecLcLGEVGDriver_TClassManip(TClass*);
   static void *new_geniecLcLGEVGDriver(void *p = nullptr);
   static void *newArray_geniecLcLGEVGDriver(Long_t size, void *p);
   static void delete_geniecLcLGEVGDriver(void *p);
   static void deleteArray_geniecLcLGEVGDriver(void *p);
   static void destruct_geniecLcLGEVGDriver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GEVGDriver*)
   {
      ::genie::GEVGDriver *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GEVGDriver));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GEVGDriver", "", 475,
                  typeid(::genie::GEVGDriver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGEVGDriver_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GEVGDriver) );
      instance.SetNew(&new_geniecLcLGEVGDriver);
      instance.SetNewArray(&newArray_geniecLcLGEVGDriver);
      instance.SetDelete(&delete_geniecLcLGEVGDriver);
      instance.SetDeleteArray(&deleteArray_geniecLcLGEVGDriver);
      instance.SetDestructor(&destruct_geniecLcLGEVGDriver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GEVGDriver*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GEVGDriver*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GEVGDriver*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGEVGDriver_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GEVGDriver*>(nullptr))->GetClass();
      geniecLcLGEVGDriver_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGEVGDriver_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGEVGPool_Dictionary();
   static void geniecLcLGEVGPool_TClassManip(TClass*);
   static void *new_geniecLcLGEVGPool(void *p = nullptr);
   static void *newArray_geniecLcLGEVGPool(Long_t size, void *p);
   static void delete_geniecLcLGEVGPool(void *p);
   static void deleteArray_geniecLcLGEVGPool(void *p);
   static void destruct_geniecLcLGEVGPool(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GEVGPool*)
   {
      ::genie::GEVGPool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GEVGPool));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GEVGPool", "", 591,
                  typeid(::genie::GEVGPool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGEVGPool_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GEVGPool) );
      instance.SetNew(&new_geniecLcLGEVGPool);
      instance.SetNewArray(&newArray_geniecLcLGEVGPool);
      instance.SetDelete(&delete_geniecLcLGEVGPool);
      instance.SetDeleteArray(&deleteArray_geniecLcLGEVGPool);
      instance.SetDestructor(&destruct_geniecLcLGEVGPool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GEVGPool*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GEVGPool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GEVGPool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGEVGPool_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GEVGPool*>(nullptr))->GetClass();
      geniecLcLGEVGPool_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGEVGPool_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGFluxI_Dictionary();
   static void geniecLcLGFluxI_TClassManip(TClass*);
   static void delete_geniecLcLGFluxI(void *p);
   static void deleteArray_geniecLcLGFluxI(void *p);
   static void destruct_geniecLcLGFluxI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GFluxI*)
   {
      ::genie::GFluxI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GFluxI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GFluxI", "", 638,
                  typeid(::genie::GFluxI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGFluxI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GFluxI) );
      instance.SetDelete(&delete_geniecLcLGFluxI);
      instance.SetDeleteArray(&deleteArray_geniecLcLGFluxI);
      instance.SetDestructor(&destruct_geniecLcLGFluxI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GFluxI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GFluxI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GFluxI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGFluxI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GFluxI*>(nullptr))->GetClass();
      geniecLcLGFluxI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGFluxI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPathLengthList_Dictionary();
   static void geniecLcLPathLengthList_TClassManip(TClass*);
   static void *new_geniecLcLPathLengthList(void *p = nullptr);
   static void *newArray_geniecLcLPathLengthList(Long_t size, void *p);
   static void delete_geniecLcLPathLengthList(void *p);
   static void deleteArray_geniecLcLPathLengthList(void *p);
   static void destruct_geniecLcLPathLengthList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PathLengthList*)
   {
      ::genie::PathLengthList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PathLengthList));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PathLengthList", "PathLengthList.h", 42,
                  typeid(::genie::PathLengthList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPathLengthList_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PathLengthList) );
      instance.SetNew(&new_geniecLcLPathLengthList);
      instance.SetNewArray(&newArray_geniecLcLPathLengthList);
      instance.SetDelete(&delete_geniecLcLPathLengthList);
      instance.SetDeleteArray(&deleteArray_geniecLcLPathLengthList);
      instance.SetDestructor(&destruct_geniecLcLPathLengthList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PathLengthList*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PathLengthList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PathLengthList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPathLengthList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PathLengthList*>(nullptr))->GetClass();
      geniecLcLPathLengthList_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPathLengthList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGMCJDriver_Dictionary();
   static void geniecLcLGMCJDriver_TClassManip(TClass*);
   static void *new_geniecLcLGMCJDriver(void *p = nullptr);
   static void *newArray_geniecLcLGMCJDriver(Long_t size, void *p);
   static void delete_geniecLcLGMCJDriver(void *p);
   static void deleteArray_geniecLcLGMCJDriver(void *p);
   static void destruct_geniecLcLGMCJDriver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GMCJDriver*)
   {
      ::genie::GMCJDriver *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GMCJDriver));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GMCJDriver", "", 710,
                  typeid(::genie::GMCJDriver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGMCJDriver_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GMCJDriver) );
      instance.SetNew(&new_geniecLcLGMCJDriver);
      instance.SetNewArray(&newArray_geniecLcLGMCJDriver);
      instance.SetDelete(&delete_geniecLcLGMCJDriver);
      instance.SetDeleteArray(&deleteArray_geniecLcLGMCJDriver);
      instance.SetDestructor(&destruct_geniecLcLGMCJDriver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GMCJDriver*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GMCJDriver*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GMCJDriver*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGMCJDriver_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GMCJDriver*>(nullptr))->GetClass();
      geniecLcLGMCJDriver_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGMCJDriver_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGMCJMonitor_Dictionary();
   static void geniecLcLGMCJMonitor_TClassManip(TClass*);
   static void delete_geniecLcLGMCJMonitor(void *p);
   static void deleteArray_geniecLcLGMCJMonitor(void *p);
   static void destruct_geniecLcLGMCJMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GMCJMonitor*)
   {
      ::genie::GMCJMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GMCJMonitor));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GMCJMonitor", "", 848,
                  typeid(::genie::GMCJMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGMCJMonitor_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GMCJMonitor) );
      instance.SetDelete(&delete_geniecLcLGMCJMonitor);
      instance.SetDeleteArray(&deleteArray_geniecLcLGMCJMonitor);
      instance.SetDestructor(&destruct_geniecLcLGMCJMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GMCJMonitor*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GMCJMonitor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GMCJMonitor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGMCJMonitor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GMCJMonitor*>(nullptr))->GetClass();
      geniecLcLGMCJMonitor_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGMCJMonitor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGeomAnalyzerI_Dictionary();
   static void geniecLcLGeomAnalyzerI_TClassManip(TClass*);
   static void delete_geniecLcLGeomAnalyzerI(void *p);
   static void deleteArray_geniecLcLGeomAnalyzerI(void *p);
   static void destruct_geniecLcLGeomAnalyzerI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GeomAnalyzerI*)
   {
      ::genie::GeomAnalyzerI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GeomAnalyzerI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GeomAnalyzerI", "", 966,
                  typeid(::genie::GeomAnalyzerI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGeomAnalyzerI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GeomAnalyzerI) );
      instance.SetDelete(&delete_geniecLcLGeomAnalyzerI);
      instance.SetDeleteArray(&deleteArray_geniecLcLGeomAnalyzerI);
      instance.SetDestructor(&destruct_geniecLcLGeomAnalyzerI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GeomAnalyzerI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GeomAnalyzerI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GeomAnalyzerI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGeomAnalyzerI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GeomAnalyzerI*>(nullptr))->GetClass();
      geniecLcLGeomAnalyzerI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGeomAnalyzerI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLXSecAlgorithmI_Dictionary();
   static void geniecLcLXSecAlgorithmI_TClassManip(TClass*);
   static void delete_geniecLcLXSecAlgorithmI(void *p);
   static void deleteArray_geniecLcLXSecAlgorithmI(void *p);
   static void destruct_geniecLcLXSecAlgorithmI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::XSecAlgorithmI*)
   {
      ::genie::XSecAlgorithmI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::XSecAlgorithmI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::XSecAlgorithmI", "XSecAlgorithmI.h", 27,
                  typeid(::genie::XSecAlgorithmI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLXSecAlgorithmI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::XSecAlgorithmI) );
      instance.SetDelete(&delete_geniecLcLXSecAlgorithmI);
      instance.SetDeleteArray(&deleteArray_geniecLcLXSecAlgorithmI);
      instance.SetDestructor(&destruct_geniecLcLXSecAlgorithmI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::XSecAlgorithmI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::XSecAlgorithmI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::XSecAlgorithmI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLXSecAlgorithmI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::XSecAlgorithmI*>(nullptr))->GetClass();
      geniecLcLXSecAlgorithmI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLXSecAlgorithmI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHybridXSecAlgorithm_Dictionary();
   static void geniecLcLHybridXSecAlgorithm_TClassManip(TClass*);
   static void *new_geniecLcLHybridXSecAlgorithm(void *p = nullptr);
   static void *newArray_geniecLcLHybridXSecAlgorithm(Long_t size, void *p);
   static void delete_geniecLcLHybridXSecAlgorithm(void *p);
   static void deleteArray_geniecLcLHybridXSecAlgorithm(void *p);
   static void destruct_geniecLcLHybridXSecAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HybridXSecAlgorithm*)
   {
      ::genie::HybridXSecAlgorithm *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HybridXSecAlgorithm));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HybridXSecAlgorithm", "", 1029,
                  typeid(::genie::HybridXSecAlgorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHybridXSecAlgorithm_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HybridXSecAlgorithm) );
      instance.SetNew(&new_geniecLcLHybridXSecAlgorithm);
      instance.SetNewArray(&newArray_geniecLcLHybridXSecAlgorithm);
      instance.SetDelete(&delete_geniecLcLHybridXSecAlgorithm);
      instance.SetDeleteArray(&deleteArray_geniecLcLHybridXSecAlgorithm);
      instance.SetDestructor(&destruct_geniecLcLHybridXSecAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HybridXSecAlgorithm*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HybridXSecAlgorithm*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HybridXSecAlgorithm*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHybridXSecAlgorithm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HybridXSecAlgorithm*>(nullptr))->GetClass();
      geniecLcLHybridXSecAlgorithm_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHybridXSecAlgorithm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLInteractionGeneratorMap_Dictionary();
   static void geniecLcLInteractionGeneratorMap_TClassManip(TClass*);
   static void *new_geniecLcLInteractionGeneratorMap(void *p = nullptr);
   static void *newArray_geniecLcLInteractionGeneratorMap(Long_t size, void *p);
   static void delete_geniecLcLInteractionGeneratorMap(void *p);
   static void deleteArray_geniecLcLInteractionGeneratorMap(void *p);
   static void destruct_geniecLcLInteractionGeneratorMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::InteractionGeneratorMap*)
   {
      ::genie::InteractionGeneratorMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::InteractionGeneratorMap));
      static ::ROOT::TGenericClassInfo 
         instance("genie::InteractionGeneratorMap", "", 1113,
                  typeid(::genie::InteractionGeneratorMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLInteractionGeneratorMap_Dictionary, isa_proxy, 0,
                  sizeof(::genie::InteractionGeneratorMap) );
      instance.SetNew(&new_geniecLcLInteractionGeneratorMap);
      instance.SetNewArray(&newArray_geniecLcLInteractionGeneratorMap);
      instance.SetDelete(&delete_geniecLcLInteractionGeneratorMap);
      instance.SetDeleteArray(&deleteArray_geniecLcLInteractionGeneratorMap);
      instance.SetDestructor(&destruct_geniecLcLInteractionGeneratorMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::InteractionGeneratorMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::InteractionGeneratorMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::InteractionGeneratorMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLInteractionGeneratorMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::InteractionGeneratorMap*>(nullptr))->GetClass();
      geniecLcLInteractionGeneratorMap_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLInteractionGeneratorMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLInteractionList_Dictionary();
   static void geniecLcLInteractionList_TClassManip(TClass*);
   static void *new_geniecLcLInteractionList(void *p = nullptr);
   static void *newArray_geniecLcLInteractionList(Long_t size, void *p);
   static void delete_geniecLcLInteractionList(void *p);
   static void deleteArray_geniecLcLInteractionList(void *p);
   static void destruct_geniecLcLInteractionList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::InteractionList*)
   {
      ::genie::InteractionList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::InteractionList));
      static ::ROOT::TGenericClassInfo 
         instance("genie::InteractionList", "", 1181,
                  typeid(::genie::InteractionList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLInteractionList_Dictionary, isa_proxy, 0,
                  sizeof(::genie::InteractionList) );
      instance.SetNew(&new_geniecLcLInteractionList);
      instance.SetNewArray(&newArray_geniecLcLInteractionList);
      instance.SetDelete(&delete_geniecLcLInteractionList);
      instance.SetDeleteArray(&deleteArray_geniecLcLInteractionList);
      instance.SetDestructor(&destruct_geniecLcLInteractionList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::InteractionList*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::InteractionList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::InteractionList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLInteractionList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::InteractionList*>(nullptr))->GetClass();
      geniecLcLInteractionList_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLInteractionList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLInteractionListAssembler_Dictionary();
   static void geniecLcLInteractionListAssembler_TClassManip(TClass*);
   static void *new_geniecLcLInteractionListAssembler(void *p = nullptr);
   static void *newArray_geniecLcLInteractionListAssembler(Long_t size, void *p);
   static void delete_geniecLcLInteractionListAssembler(void *p);
   static void deleteArray_geniecLcLInteractionListAssembler(void *p);
   static void destruct_geniecLcLInteractionListAssembler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::InteractionListAssembler*)
   {
      ::genie::InteractionListAssembler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::InteractionListAssembler));
      static ::ROOT::TGenericClassInfo 
         instance("genie::InteractionListAssembler", "", 1231,
                  typeid(::genie::InteractionListAssembler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLInteractionListAssembler_Dictionary, isa_proxy, 0,
                  sizeof(::genie::InteractionListAssembler) );
      instance.SetNew(&new_geniecLcLInteractionListAssembler);
      instance.SetNewArray(&newArray_geniecLcLInteractionListAssembler);
      instance.SetDelete(&delete_geniecLcLInteractionListAssembler);
      instance.SetDeleteArray(&deleteArray_geniecLcLInteractionListAssembler);
      instance.SetDestructor(&destruct_geniecLcLInteractionListAssembler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::InteractionListAssembler*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::InteractionListAssembler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::InteractionListAssembler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLInteractionListAssembler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::InteractionListAssembler*>(nullptr))->GetClass();
      geniecLcLInteractionListAssembler_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLInteractionListAssembler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLInteractionListGeneratorI_Dictionary();
   static void geniecLcLInteractionListGeneratorI_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::InteractionListGeneratorI*)
   {
      ::genie::InteractionListGeneratorI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::InteractionListGeneratorI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::InteractionListGeneratorI", "", 1281,
                  typeid(::genie::InteractionListGeneratorI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLInteractionListGeneratorI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::InteractionListGeneratorI) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::InteractionListGeneratorI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::InteractionListGeneratorI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::InteractionListGeneratorI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLInteractionListGeneratorI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::InteractionListGeneratorI*>(nullptr))->GetClass();
      geniecLcLInteractionListGeneratorI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLInteractionListGeneratorI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLInteractionSelectorI_Dictionary();
   static void geniecLcLInteractionSelectorI_TClassManip(TClass*);
   static void delete_geniecLcLInteractionSelectorI(void *p);
   static void deleteArray_geniecLcLInteractionSelectorI(void *p);
   static void destruct_geniecLcLInteractionSelectorI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::InteractionSelectorI*)
   {
      ::genie::InteractionSelectorI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::InteractionSelectorI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::InteractionSelectorI", "", 1332,
                  typeid(::genie::InteractionSelectorI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLInteractionSelectorI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::InteractionSelectorI) );
      instance.SetDelete(&delete_geniecLcLInteractionSelectorI);
      instance.SetDeleteArray(&deleteArray_geniecLcLInteractionSelectorI);
      instance.SetDestructor(&destruct_geniecLcLInteractionSelectorI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::InteractionSelectorI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::InteractionSelectorI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::InteractionSelectorI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLInteractionSelectorI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::InteractionSelectorI*>(nullptr))->GetClass();
      geniecLcLInteractionSelectorI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLInteractionSelectorI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPhysInteractionSelector_Dictionary();
   static void geniecLcLPhysInteractionSelector_TClassManip(TClass*);
   static void *new_geniecLcLPhysInteractionSelector(void *p = nullptr);
   static void *newArray_geniecLcLPhysInteractionSelector(Long_t size, void *p);
   static void delete_geniecLcLPhysInteractionSelector(void *p);
   static void deleteArray_geniecLcLPhysInteractionSelector(void *p);
   static void destruct_geniecLcLPhysInteractionSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PhysInteractionSelector*)
   {
      ::genie::PhysInteractionSelector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PhysInteractionSelector));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PhysInteractionSelector", "", 1448,
                  typeid(::genie::PhysInteractionSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPhysInteractionSelector_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PhysInteractionSelector) );
      instance.SetNew(&new_geniecLcLPhysInteractionSelector);
      instance.SetNewArray(&newArray_geniecLcLPhysInteractionSelector);
      instance.SetDelete(&delete_geniecLcLPhysInteractionSelector);
      instance.SetDeleteArray(&deleteArray_geniecLcLPhysInteractionSelector);
      instance.SetDestructor(&destruct_geniecLcLPhysInteractionSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PhysInteractionSelector*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PhysInteractionSelector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PhysInteractionSelector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPhysInteractionSelector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PhysInteractionSelector*>(nullptr))->GetClass();
      geniecLcLPhysInteractionSelector_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPhysInteractionSelector_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRunningThreadInfo_Dictionary();
   static void geniecLcLRunningThreadInfo_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RunningThreadInfo*)
   {
      ::genie::RunningThreadInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RunningThreadInfo));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RunningThreadInfo", "", 1502,
                  typeid(::genie::RunningThreadInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRunningThreadInfo_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RunningThreadInfo) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RunningThreadInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RunningThreadInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RunningThreadInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRunningThreadInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RunningThreadInfo*>(nullptr))->GetClass();
      geniecLcLRunningThreadInfo_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRunningThreadInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLToyInteractionSelector_Dictionary();
   static void geniecLcLToyInteractionSelector_TClassManip(TClass*);
   static void *new_geniecLcLToyInteractionSelector(void *p = nullptr);
   static void *newArray_geniecLcLToyInteractionSelector(Long_t size, void *p);
   static void delete_geniecLcLToyInteractionSelector(void *p);
   static void deleteArray_geniecLcLToyInteractionSelector(void *p);
   static void destruct_geniecLcLToyInteractionSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ToyInteractionSelector*)
   {
      ::genie::ToyInteractionSelector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ToyInteractionSelector));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ToyInteractionSelector", "", 1574,
                  typeid(::genie::ToyInteractionSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLToyInteractionSelector_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ToyInteractionSelector) );
      instance.SetNew(&new_geniecLcLToyInteractionSelector);
      instance.SetNewArray(&newArray_geniecLcLToyInteractionSelector);
      instance.SetDelete(&delete_geniecLcLToyInteractionSelector);
      instance.SetDeleteArray(&deleteArray_geniecLcLToyInteractionSelector);
      instance.SetDestructor(&destruct_geniecLcLToyInteractionSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ToyInteractionSelector*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::ToyInteractionSelector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::ToyInteractionSelector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLToyInteractionSelector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::ToyInteractionSelector*>(nullptr))->GetClass();
      geniecLcLToyInteractionSelector_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLToyInteractionSelector_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLXSecAlgorithmMap_Dictionary();
   static void geniecLcLXSecAlgorithmMap_TClassManip(TClass*);
   static void *new_geniecLcLXSecAlgorithmMap(void *p = nullptr);
   static void *newArray_geniecLcLXSecAlgorithmMap(Long_t size, void *p);
   static void delete_geniecLcLXSecAlgorithmMap(void *p);
   static void deleteArray_geniecLcLXSecAlgorithmMap(void *p);
   static void destruct_geniecLcLXSecAlgorithmMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::XSecAlgorithmMap*)
   {
      ::genie::XSecAlgorithmMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::XSecAlgorithmMap));
      static ::ROOT::TGenericClassInfo 
         instance("genie::XSecAlgorithmMap", "", 1684,
                  typeid(::genie::XSecAlgorithmMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLXSecAlgorithmMap_Dictionary, isa_proxy, 0,
                  sizeof(::genie::XSecAlgorithmMap) );
      instance.SetNew(&new_geniecLcLXSecAlgorithmMap);
      instance.SetNewArray(&newArray_geniecLcLXSecAlgorithmMap);
      instance.SetDelete(&delete_geniecLcLXSecAlgorithmMap);
      instance.SetDeleteArray(&deleteArray_geniecLcLXSecAlgorithmMap);
      instance.SetDestructor(&destruct_geniecLcLXSecAlgorithmMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::XSecAlgorithmMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::XSecAlgorithmMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::XSecAlgorithmMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLXSecAlgorithmMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::XSecAlgorithmMap*>(nullptr))->GetClass();
      geniecLcLXSecAlgorithmMap_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLXSecAlgorithmMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr EventRecord::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EventRecord::Class_Name()
{
   return "genie::EventRecord";
}

//______________________________________________________________________________
const char *EventRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::EventRecord*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EventRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::EventRecord*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::EventRecord*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::EventRecord*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLEventRecordVisitorI(void *p) {
      delete (static_cast<::genie::EventRecordVisitorI*>(p));
   }
   static void deleteArray_geniecLcLEventRecordVisitorI(void *p) {
      delete [] (static_cast<::genie::EventRecordVisitorI*>(p));
   }
   static void destruct_geniecLcLEventRecordVisitorI(void *p) {
      typedef ::genie::EventRecordVisitorI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::EventRecordVisitorI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGVldContext(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GVldContext : new ::genie::GVldContext;
   }
   static void *newArray_geniecLcLGVldContext(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GVldContext[nElements] : new ::genie::GVldContext[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGVldContext(void *p) {
      delete (static_cast<::genie::GVldContext*>(p));
   }
   static void deleteArray_geniecLcLGVldContext(void *p) {
      delete [] (static_cast<::genie::GVldContext*>(p));
   }
   static void destruct_geniecLcLGVldContext(void *p) {
      typedef ::genie::GVldContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GVldContext

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLEventGeneratorI(void *p) {
      delete (static_cast<::genie::EventGeneratorI*>(p));
   }
   static void deleteArray_geniecLcLEventGeneratorI(void *p) {
      delete [] (static_cast<::genie::EventGeneratorI*>(p));
   }
   static void destruct_geniecLcLEventGeneratorI(void *p) {
      typedef ::genie::EventGeneratorI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::EventGeneratorI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLEventGenerator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EventGenerator : new ::genie::EventGenerator;
   }
   static void *newArray_geniecLcLEventGenerator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EventGenerator[nElements] : new ::genie::EventGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLEventGenerator(void *p) {
      delete (static_cast<::genie::EventGenerator*>(p));
   }
   static void deleteArray_geniecLcLEventGenerator(void *p) {
      delete [] (static_cast<::genie::EventGenerator*>(p));
   }
   static void destruct_geniecLcLEventGenerator(void *p) {
      typedef ::genie::EventGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::EventGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLEventGeneratorList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EventGeneratorList : new ::genie::EventGeneratorList;
   }
   static void *newArray_geniecLcLEventGeneratorList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EventGeneratorList[nElements] : new ::genie::EventGeneratorList[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLEventGeneratorList(void *p) {
      delete (static_cast<::genie::EventGeneratorList*>(p));
   }
   static void deleteArray_geniecLcLEventGeneratorList(void *p) {
      delete [] (static_cast<::genie::EventGeneratorList*>(p));
   }
   static void destruct_geniecLcLEventGeneratorList(void *p) {
      typedef ::genie::EventGeneratorList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::EventGeneratorList

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLEventGeneratorListAssembler(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EventGeneratorListAssembler : new ::genie::EventGeneratorListAssembler;
   }
   static void *newArray_geniecLcLEventGeneratorListAssembler(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::EventGeneratorListAssembler[nElements] : new ::genie::EventGeneratorListAssembler[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLEventGeneratorListAssembler(void *p) {
      delete (static_cast<::genie::EventGeneratorListAssembler*>(p));
   }
   static void deleteArray_geniecLcLEventGeneratorListAssembler(void *p) {
      delete [] (static_cast<::genie::EventGeneratorListAssembler*>(p));
   }
   static void destruct_geniecLcLEventGeneratorListAssembler(void *p) {
      typedef ::genie::EventGeneratorListAssembler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::EventGeneratorListAssembler

namespace genie {
//______________________________________________________________________________
void EventRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::EventRecord.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::EventRecord thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::GHepRecord baseClass0;
      baseClass0::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::GHepRecord baseClass0;
      baseClass0::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLEventRecord(void *p) {
      return  p ? new(p) ::genie::EventRecord : new ::genie::EventRecord;
   }
   static void *newArray_geniecLcLEventRecord(Long_t nElements, void *p) {
      return p ? new(p) ::genie::EventRecord[nElements] : new ::genie::EventRecord[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLEventRecord(void *p) {
      delete (static_cast<::genie::EventRecord*>(p));
   }
   static void deleteArray_geniecLcLEventRecord(void *p) {
      delete [] (static_cast<::genie::EventRecord*>(p));
   }
   static void destruct_geniecLcLEventRecord(void *p) {
      typedef ::genie::EventRecord current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLEventRecord(TBuffer &buf, void *obj) {
      ((::genie::EventRecord*)obj)->::genie::EventRecord::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_geniecLcLEventRecord(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::genie::EventRecord*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::genie::EventRecord

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGEVGDriver(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GEVGDriver : new ::genie::GEVGDriver;
   }
   static void *newArray_geniecLcLGEVGDriver(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GEVGDriver[nElements] : new ::genie::GEVGDriver[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGEVGDriver(void *p) {
      delete (static_cast<::genie::GEVGDriver*>(p));
   }
   static void deleteArray_geniecLcLGEVGDriver(void *p) {
      delete [] (static_cast<::genie::GEVGDriver*>(p));
   }
   static void destruct_geniecLcLGEVGDriver(void *p) {
      typedef ::genie::GEVGDriver current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GEVGDriver

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGEVGPool(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GEVGPool : new ::genie::GEVGPool;
   }
   static void *newArray_geniecLcLGEVGPool(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GEVGPool[nElements] : new ::genie::GEVGPool[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGEVGPool(void *p) {
      delete (static_cast<::genie::GEVGPool*>(p));
   }
   static void deleteArray_geniecLcLGEVGPool(void *p) {
      delete [] (static_cast<::genie::GEVGPool*>(p));
   }
   static void destruct_geniecLcLGEVGPool(void *p) {
      typedef ::genie::GEVGPool current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GEVGPool

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLGFluxI(void *p) {
      delete (static_cast<::genie::GFluxI*>(p));
   }
   static void deleteArray_geniecLcLGFluxI(void *p) {
      delete [] (static_cast<::genie::GFluxI*>(p));
   }
   static void destruct_geniecLcLGFluxI(void *p) {
      typedef ::genie::GFluxI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GFluxI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPathLengthList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PathLengthList : new ::genie::PathLengthList;
   }
   static void *newArray_geniecLcLPathLengthList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PathLengthList[nElements] : new ::genie::PathLengthList[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPathLengthList(void *p) {
      delete (static_cast<::genie::PathLengthList*>(p));
   }
   static void deleteArray_geniecLcLPathLengthList(void *p) {
      delete [] (static_cast<::genie::PathLengthList*>(p));
   }
   static void destruct_geniecLcLPathLengthList(void *p) {
      typedef ::genie::PathLengthList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PathLengthList

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGMCJDriver(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GMCJDriver : new ::genie::GMCJDriver;
   }
   static void *newArray_geniecLcLGMCJDriver(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GMCJDriver[nElements] : new ::genie::GMCJDriver[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGMCJDriver(void *p) {
      delete (static_cast<::genie::GMCJDriver*>(p));
   }
   static void deleteArray_geniecLcLGMCJDriver(void *p) {
      delete [] (static_cast<::genie::GMCJDriver*>(p));
   }
   static void destruct_geniecLcLGMCJDriver(void *p) {
      typedef ::genie::GMCJDriver current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GMCJDriver

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLGMCJMonitor(void *p) {
      delete (static_cast<::genie::GMCJMonitor*>(p));
   }
   static void deleteArray_geniecLcLGMCJMonitor(void *p) {
      delete [] (static_cast<::genie::GMCJMonitor*>(p));
   }
   static void destruct_geniecLcLGMCJMonitor(void *p) {
      typedef ::genie::GMCJMonitor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GMCJMonitor

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLGeomAnalyzerI(void *p) {
      delete (static_cast<::genie::GeomAnalyzerI*>(p));
   }
   static void deleteArray_geniecLcLGeomAnalyzerI(void *p) {
      delete [] (static_cast<::genie::GeomAnalyzerI*>(p));
   }
   static void destruct_geniecLcLGeomAnalyzerI(void *p) {
      typedef ::genie::GeomAnalyzerI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GeomAnalyzerI

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLXSecAlgorithmI(void *p) {
      delete (static_cast<::genie::XSecAlgorithmI*>(p));
   }
   static void deleteArray_geniecLcLXSecAlgorithmI(void *p) {
      delete [] (static_cast<::genie::XSecAlgorithmI*>(p));
   }
   static void destruct_geniecLcLXSecAlgorithmI(void *p) {
      typedef ::genie::XSecAlgorithmI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::XSecAlgorithmI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHybridXSecAlgorithm(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HybridXSecAlgorithm : new ::genie::HybridXSecAlgorithm;
   }
   static void *newArray_geniecLcLHybridXSecAlgorithm(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::HybridXSecAlgorithm[nElements] : new ::genie::HybridXSecAlgorithm[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHybridXSecAlgorithm(void *p) {
      delete (static_cast<::genie::HybridXSecAlgorithm*>(p));
   }
   static void deleteArray_geniecLcLHybridXSecAlgorithm(void *p) {
      delete [] (static_cast<::genie::HybridXSecAlgorithm*>(p));
   }
   static void destruct_geniecLcLHybridXSecAlgorithm(void *p) {
      typedef ::genie::HybridXSecAlgorithm current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HybridXSecAlgorithm

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLInteractionGeneratorMap(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::InteractionGeneratorMap : new ::genie::InteractionGeneratorMap;
   }
   static void *newArray_geniecLcLInteractionGeneratorMap(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::InteractionGeneratorMap[nElements] : new ::genie::InteractionGeneratorMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLInteractionGeneratorMap(void *p) {
      delete (static_cast<::genie::InteractionGeneratorMap*>(p));
   }
   static void deleteArray_geniecLcLInteractionGeneratorMap(void *p) {
      delete [] (static_cast<::genie::InteractionGeneratorMap*>(p));
   }
   static void destruct_geniecLcLInteractionGeneratorMap(void *p) {
      typedef ::genie::InteractionGeneratorMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::InteractionGeneratorMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLInteractionList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::InteractionList : new ::genie::InteractionList;
   }
   static void *newArray_geniecLcLInteractionList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::InteractionList[nElements] : new ::genie::InteractionList[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLInteractionList(void *p) {
      delete (static_cast<::genie::InteractionList*>(p));
   }
   static void deleteArray_geniecLcLInteractionList(void *p) {
      delete [] (static_cast<::genie::InteractionList*>(p));
   }
   static void destruct_geniecLcLInteractionList(void *p) {
      typedef ::genie::InteractionList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::InteractionList

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLInteractionListAssembler(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::InteractionListAssembler : new ::genie::InteractionListAssembler;
   }
   static void *newArray_geniecLcLInteractionListAssembler(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::InteractionListAssembler[nElements] : new ::genie::InteractionListAssembler[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLInteractionListAssembler(void *p) {
      delete (static_cast<::genie::InteractionListAssembler*>(p));
   }
   static void deleteArray_geniecLcLInteractionListAssembler(void *p) {
      delete [] (static_cast<::genie::InteractionListAssembler*>(p));
   }
   static void destruct_geniecLcLInteractionListAssembler(void *p) {
      typedef ::genie::InteractionListAssembler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::InteractionListAssembler

namespace ROOT {
} // end of namespace ROOT for class ::genie::InteractionListGeneratorI

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLInteractionSelectorI(void *p) {
      delete (static_cast<::genie::InteractionSelectorI*>(p));
   }
   static void deleteArray_geniecLcLInteractionSelectorI(void *p) {
      delete [] (static_cast<::genie::InteractionSelectorI*>(p));
   }
   static void destruct_geniecLcLInteractionSelectorI(void *p) {
      typedef ::genie::InteractionSelectorI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::InteractionSelectorI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPhysInteractionSelector(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhysInteractionSelector : new ::genie::PhysInteractionSelector;
   }
   static void *newArray_geniecLcLPhysInteractionSelector(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PhysInteractionSelector[nElements] : new ::genie::PhysInteractionSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPhysInteractionSelector(void *p) {
      delete (static_cast<::genie::PhysInteractionSelector*>(p));
   }
   static void deleteArray_geniecLcLPhysInteractionSelector(void *p) {
      delete [] (static_cast<::genie::PhysInteractionSelector*>(p));
   }
   static void destruct_geniecLcLPhysInteractionSelector(void *p) {
      typedef ::genie::PhysInteractionSelector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PhysInteractionSelector

namespace ROOT {
} // end of namespace ROOT for class ::genie::RunningThreadInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLToyInteractionSelector(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ToyInteractionSelector : new ::genie::ToyInteractionSelector;
   }
   static void *newArray_geniecLcLToyInteractionSelector(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::ToyInteractionSelector[nElements] : new ::genie::ToyInteractionSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLToyInteractionSelector(void *p) {
      delete (static_cast<::genie::ToyInteractionSelector*>(p));
   }
   static void deleteArray_geniecLcLToyInteractionSelector(void *p) {
      delete [] (static_cast<::genie::ToyInteractionSelector*>(p));
   }
   static void destruct_geniecLcLToyInteractionSelector(void *p) {
      typedef ::genie::ToyInteractionSelector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::ToyInteractionSelector

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLXSecAlgorithmMap(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::XSecAlgorithmMap : new ::genie::XSecAlgorithmMap;
   }
   static void *newArray_geniecLcLXSecAlgorithmMap(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::XSecAlgorithmMap[nElements] : new ::genie::XSecAlgorithmMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLXSecAlgorithmMap(void *p) {
      delete (static_cast<::genie::XSecAlgorithmMap*>(p));
   }
   static void deleteArray_geniecLcLXSecAlgorithmMap(void *p) {
      delete [] (static_cast<::genie::XSecAlgorithmMap*>(p));
   }
   static void destruct_geniecLcLXSecAlgorithmMap(void *p) {
      typedef ::genie::XSecAlgorithmMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::XSecAlgorithmMap

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGFwEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGFwEG) = RecordReadRules_libGFwEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGFwEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGFwEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Framework/EventGen",
"GENIE",
"GENIE/Framework/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Framework/EventGen",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Framework/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGFwEG dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/EventGen/EventRecordVisitorI.h")))  __attribute__((annotate("$clingAutoload$Framework/EventGen/EventGeneratorI.h")))  EventRecordVisitorI;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/EventGen/GVldContext.h")))  __attribute__((annotate("$clingAutoload$Framework/EventGen/EventGeneratorI.h")))  GVldContext;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/EventGen/EventGeneratorI.h")))  EventGeneratorI;}
namespace genie{class  EventGenerator;}
namespace genie{class  EventGeneratorList;}
namespace genie{class  EventGeneratorListAssembler;}
namespace genie{class  EventRecord;}
namespace genie{class  GEVGDriver;}
namespace genie{class  GEVGPool;}
namespace genie{class  GFluxI;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/EventGen/PathLengthList.h")))  PathLengthList;}
namespace genie{class  GMCJDriver;}
namespace genie{class  GMCJMonitor;}
namespace genie{class  GeomAnalyzerI;}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/EventGen/XSecAlgorithmI.h")))  XSecAlgorithmI;}
namespace genie{class  HybridXSecAlgorithm;}
namespace genie{class  InteractionGeneratorMap;}
namespace genie{class  InteractionList;}
namespace genie{class  InteractionListAssembler;}
namespace genie{class  InteractionListGeneratorI;}
namespace genie{class  InteractionSelectorI;}
namespace genie{class  PhysInteractionSelector;}
namespace genie{class  RunningThreadInfo;}
namespace genie{class  ToyInteractionSelector;}
namespace genie{class  XSecAlgorithmMap;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGFwEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class   genie::exceptions::EVGThreadException

\brief   An exception thrown by EventRecordVisitorI when the normal processing
         sequence has to be disrupted (fast-fwd at the end or step-back)

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created September 27, 2005

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org   
*/
//____________________________________________________________________________

#ifndef _EVG_THREAD_EXCEPTION_H_
#define _EVG_THREAD_EXCEPTION_H_

#include <string>
#include <ostream>

#include <TMath.h>

using std::string;
using std::ostream;

namespace genie {
namespace exceptions {

class Interaction;

class EVGThreadException {

public :

  EVGThreadException();
  EVGThreadException(const EVGThreadException & exception);
  ~EVGThreadException();

  void   SetReason  (string reason) { fReason     = reason;          }
  void   SwitchOnFastForward (void) { fFastFwd    = true;            }
  void   SwitchOnStepBack    (void) { fStepBack   = true;            }
  void   SetReturnStep (int s)      { fReturnStep = TMath::Max(0,s); }

  string ShowReason  (void) const { return fReason;     }
  bool   FastForward (void) const { return fFastFwd;    }
  bool   StepBack    (void) const { return fStepBack;   }
  int    ReturnStep  (void) const { return fReturnStep; }

  void Init  (void);
  void Copy  (const EVGThreadException & exception);
  void Print (ostream & stream) const;

  friend ostream & operator << (
             ostream & stream, const EVGThreadException & exception);

private:

  bool   fFastFwd;
  bool   fStepBack;
  int    fReturnStep;
  string fReason;
};

}      // exceptions namespace
}      // genie namespace

#endif // _EVG_THREAD_EXCEPTION_H_
//____________________________________________________________________________
/*!

\class   genie::EventGenerator

\brief   Encapsulates a full ordered list of (is the aggregate of) concrete
         EventGeneratorI implementations that must act on the EventRecord
         to generate an event. Each of these implementations corresponds to
         a single processing step.

         Is a concrete implementation of the EventGeneratorI interface.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created October 03, 2004

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org         
*/
//____________________________________________________________________________

#ifndef _EVENT_GENERATOR_H_
#define _EVENT_GENERATOR_H_

#include <vector>

#include "Framework/EventGen/EventGeneratorI.h"
#include "Framework/GHEP/GHepRecordHistory.h"

class TStopwatch;
class TBits;

using std::vector;

namespace genie {

class EventGenerator: public EventGeneratorI {

public :
  EventGenerator();
  EventGenerator(string config);
  ~EventGenerator();

  //-- implement the original EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- implement the extensions to the EventRecordVisitorI interface
  const GVldContext &               ValidityContext  (void) const;
  const InteractionListGeneratorI * IntListGenerator (void) const;
  const XSecAlgorithmI *            CrossSectionAlg  (void) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  void Init       (void);
  void LoadConfig (void);

  //-- private data members
  vector<const EventRecordVisitorI *> * fEVGModuleVec;   ///< list of modules
  vector<double> *                      fEVGTime;        ///< module timing info
  const XSecAlgorithmI *                fXSecModel;      ///< xsec model for events handled by thread
  const InteractionListGeneratorI *     fIntListGen;     ///< generates list of handled interactions
  GVldContext *                         fVldContext;     ///< validity context
  TStopwatch *                          fWatch;          ///< stopwatch for module timing
  TBits *                               fFiltUnphysMask; ///< mask for allowing unphysical events to pass through (if requested)
  mutable GHepRecordHistory             fRecHistory;     ///< event record history
};

}      // genie namespace

#endif // _EVENT_GENERATOR_H_
//____________________________________________________________________________
/*!

\class   genie::EventGeneratorI

\brief   Defines the EventGeneratorI interface.

         The concrete implementations of this interface are Event Record
         Visitors (subclasses of the EventRecordVisitorI pABC) that,
         additionally, declare a 'Validity Context'. \n

         The declared validity context is used for selecting the appropriate
         concrete EventGeneratorI to generate the interacion at hand using
         the 'chain-of-responsibility' design pattern.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created November 22, 2004

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org         
*/
//____________________________________________________________________________


#ifndef _EVENT_GENERATOR_I_H_
#define _EVENT_GENERATOR_I_H_

#include "Framework/EventGen/EventRecordVisitorI.h"
#include "Framework/EventGen/GVldContext.h"

namespace genie {

class InteractionListGeneratorI;
class XSecAlgorithmI;

class EventGeneratorI: public EventRecordVisitorI {

public :

  virtual ~EventGeneratorI();

  //-- define an extension to the public EventRecordVisitorI interface
  virtual const GVldContext &               ValidityContext  (void) const = 0;
  virtual const InteractionListGeneratorI * IntListGenerator (void) const = 0;
  virtual const XSecAlgorithmI *            CrossSectionAlg  (void) const = 0;

protected:

  //-- dummy ctors & dtor
  EventGeneratorI();
  EventGeneratorI(string name);
  EventGeneratorI(string name, string config);
};

}      // genie namespace

#endif // _EVENT_GENERATOR_I_H_
//____________________________________________________________________________
/*!

\class   genie::EventGeneratorList

\brief   A vector of EventGeneratorI objects

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created January 25, 2004

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org         
*/
//____________________________________________________________________________

#ifndef _EVENT_GENERATOR_LIST_H_
#define _EVENT_GENERATOR_LIST_H_

#include <vector>
#include <ostream>

using std::vector;
using std::ostream;

namespace genie {

class EventGeneratorList;
class EventGeneratorI;

ostream & operator << (ostream & stream, const EventGeneratorList & evgl);

class EventGeneratorList : public vector<const EventGeneratorI *> {

public :

  EventGeneratorList();
  ~EventGeneratorList();

  void Print(ostream & stream) const;

  friend ostream & operator << (ostream & stream, const EventGeneratorList & evgl);
};

}      // genie namespace

#endif // _EVENT_GENERATOR_LIST_H_
//____________________________________________________________________________
/*!

\class   genie::EventGeneratorListAssembler

\brief   Assembles a list of all the EventGeneratorI subclasses that can be
         employed during a neutrino event generation job.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created January 25, 2004

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org         
*/
//____________________________________________________________________________

#ifndef _EVENT_GENERATOR_LIST_ASSEMBLER_H_
#define _EVENT_GENERATOR_LIST_ASSEMBLER_H_

#include "Framework/Algorithm/Algorithm.h"
#include <string>
using std::string;

namespace genie {

class EventGeneratorList;
class EventGeneratorI;

class EventGeneratorListAssembler : public Algorithm {

public :

  EventGeneratorListAssembler();
  EventGeneratorListAssembler(string config);
  ~EventGeneratorListAssembler();

  EventGeneratorList * AssembleGeneratorList();

private:

  const EventGeneratorI * LoadGenerator(int ip);
};

}      // genie namespace

#endif // _EVENT_GENERATOR_LIST_ASSEMBLER_H_
//____________________________________________________________________________
/*!

\class   genie::EventRecord

\brief   Generated Event Record. It is a GHepRecord object that can accept /
         be visited by EventRecordVisitorI objects (event generation modules).
         All the other important container manipulation methods are defined
         at the base GHepRecord record.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created October 1, 2004

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org         
*/
//____________________________________________________________________________

#ifndef _EVENT_RECORD_H_
#define _EVENT_RECORD_H_

#include <ostream>

#include "Framework/GHEP/GHepRecord.h"

using std::ostream;

namespace genie {

class EventRecord;
class EventRecordVisitorI;

ostream & operator<< (ostream& stream, const EventRecord & event);

class EventRecord : public GHepRecord {

public :
  using GHepRecord::Copy;  // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings
  using GHepRecord::Print;

  EventRecord();
  EventRecord(int size);
  EventRecord(const EventRecord & record);
  ~EventRecord();

  void AcceptVisitor (EventRecordVisitorI * visitor);
  virtual void Copy          (const EventRecord & record);
  virtual void Print         (ostream & stream) const;

  friend ostream & operator<< (ostream& stream, const EventRecord & event);

private:

ClassDef(EventRecord, 1)

};

}      // genie namespace

#endif // _EVENT_RECORD_H_
//____________________________________________________________________________
/*!

\class   genie::EventRecordVisitorI

\brief   Defines the EventRecordVisitorI interface.
         Concrete implementations of this interface use the 'Visitor' Design
         Pattern to perform an operation on an EventRecord.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created October 04, 2004

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org       
*/
//____________________________________________________________________________

#ifndef _EVENT_RECORD_VISITOR_I_H_
#define _EVENT_RECORD_VISITOR_I_H_

#include "Framework/Algorithm/Algorithm.h"

namespace genie {

class GHepRecord;

class EventRecordVisitorI : public Algorithm {

public :

  virtual ~EventRecordVisitorI();

  //-- define the EventRecordVisitorI interface

  virtual void ProcessEventRecord(GHepRecord * event_rec) const = 0;

protected :

  EventRecordVisitorI();
  EventRecordVisitorI(string name);
  EventRecordVisitorI(string name, string config);
};

}      // genie namespace

#endif // _EVENT_RECORD_VISITOR_I_H_
//____________________________________________________________________________
/*!

\class   genie::GEVGDriver

\brief   GENIE Event Generation Driver.
         A minimalist user interface object for generating neutrino interactions.
         Each such object is configured for a given initial state and it drives all
         relevant GENIE neutrino interaction physics simulation code for that state.
         To set-up MC jobs involving a multitude of possible initial states,
         including arbitrarily complex neutrino flux and detector geometry
         descriptions, see the GMCJDriver object.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created August 06, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _GEVG_DRIVER_H_
#define _GEVG_DRIVER_H_

#include <ostream>
#include <string>

#include <TLorentzVector.h>
#include <TBits.h>

#include "Framework/Utils/Range1.h"

using std::ostream;
using std::string;

namespace genie {

class GEVGDriver;
class EventRecord;
class EventGeneratorList;
class EventGeneratorI;
class InteractionSelectorI;
class InteractionGeneratorMap;
class InteractionList;
class Interaction;
class InitialState;
class Target;
class Spline;

ostream & operator << (ostream & stream, const GEVGDriver & driver);

class GEVGDriver {

public :
  GEVGDriver();
 ~GEVGDriver();

  // Driver options:
  // - Set before calling Configure()
  void UseSplines (void);
  void SetEventGeneratorList(string listname);
  // - Set before GenerateEvent()
  void SetUnphysEventMask(const TBits & mask);

  // Configure the driver
  void Configure (int nu_pdgc, int Z, int A);
  void Configure (const InitialState & init_state);

  // Generate single event
  EventRecord * GenerateEvent (const TLorentzVector & nu4p);

  // Get the list of all interactions that can be simulated for the specified
  // initial state (depends on which event generation threads were loaded into
  // the event generation driver driver)
  const InteractionList * Interactions(void) const;

  // Get event generator thread list
  const EventGeneratorList * EventGenerators (void) const { return fEvGenList; }

  // Get the event generator that is responsible for generating the input event
  const EventGeneratorI * FindGenerator(const Interaction * interaction) const;

  // Cross section splines for input interaction and for the sum of all
  // simulated interactions for the specified initial state
  const Spline * XSecSumSpline       (void) const { return fXSecSumSpl; }
  const Spline * XSecSpline          (const Interaction * interaction) const;

  // Instruct the driver to create all the splines it needs
  void CreateSplines (int nknots=-1, double emax=-1, bool inLogE=true);

  // Methods used for building the 'total' cross section spline
  double XSecSum             (const TLorentzVector & nup4);
  void   CreateXSecSumSpline (int nk, double Emin, double Emax, bool inlogE=true);

  // Get validity range (combined validity range of loaded evg threads)
  Range1D_t ValidEnergyRange (void) const;

  // Reset, Print etc
  void Reset (void);
  void Print (ostream & stream) const;

  friend ostream & operator << (ostream & stream, const GEVGDriver & driver);

private:

  // Private initialization, configuration & input validation methods
  void Init                         (void);
  void CleanUp                      (void);
  void BuildInitialState            (const InitialState & init_state);
  void BuildGeneratorList           (void);
  void BuildInteractionGeneratorMap (void);
  void BuildInteractionSelector     (void);
  void AssertIsValidInitState       (void) const;

  // Private data members
  InitialState *            fInitState;       ///< initial state information for driver instance
  EventRecord *             fCurrentRecord;   ///< ptr to the event record being processed
  EventGeneratorList *      fEvGenList;       ///< all Event Generators available at this job
  InteractionSelectorI *    fIntSelector;     ///< interaction selector
  InteractionGeneratorMap * fIntGenMap;       ///< interaction -> generator assosiative container
  TBits *                   fUnphysEventMask; ///< controls whether unphysical events are returned
  bool                      fUseSplines;      ///< controls whether xsecs are computed or interpolated
  Spline *                  fXSecSumSpl;      ///< sum{xsec(all interactions | this init state)}
  unsigned int              fNRecLevel;       ///< recursive mode depth counter
  string                    fEventGenList;    ///< list of event generators loaded by this driver (what used to be the $GEVGL setting)
};

}      // genie namespace

#endif // _GENIE_H_
//____________________________________________________________________________
/*!

\class   genie::GEVGPool

\brief   A pool of GEVGDriver objects with an initial state key

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created May 24, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org    
*/
//____________________________________________________________________________

#ifndef _GEVG_DRIVER_POOL_H_
#define _GEVG_DRIVER_POOL_H_

#include <map>
#include <string>
#include <ostream>

using std::map;
using std::string;
using std::ostream;

namespace genie {

class GEVGPool;
class GEVGDriver;
class InitialState;

ostream & operator << (ostream & stream, const GEVGPool & pool);

class GEVGPool : public map<string, GEVGDriver *> {

public :

  GEVGPool();
  ~GEVGPool();

  GEVGDriver * FindDriver (const InitialState & init) const;
  GEVGDriver * FindDriver (string init)               const;

  void Print (ostream & stream) const;

  friend ostream & operator << (ostream & stream, const GEVGPool & pool);
};

}      // genie namespace

#endif // _GEVG_DRIVER_POOL_H_
//____________________________________________________________________________
/*!

\class    genie::GFluxI

\brief    GENIE Interface for user-defined flux classes

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 25, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _G_FLUX_I_H_
#define _G_FLUX_I_H_

#include <TObject.h>

class TLorentzVector;

namespace genie {

class PDGCodeList;

class GFluxI {

public :
  virtual ~GFluxI();

  //
  // define the GFluxI interface:
  //
  virtual const PDGCodeList &    FluxParticles (void) = 0; ///< declare list of flux neutrinos that can be generated (for init. purposes)
  virtual double                 MaxEnergy     (void) = 0; ///< declare the max flux neutrino energy that can be generated (for init. purposes)
  virtual bool                   GenerateNext  (void) = 0; ///< generate the next flux neutrino (return false in err)
  virtual int                    PdgCode       (void) = 0; ///< returns the flux neutrino pdg code
  virtual double                 Weight        (void) = 0; ///< returns the flux neutrino weight (if any)
  virtual const TLorentzVector & Momentum      (void) = 0; ///< returns the flux neutrino 4-momentum
  virtual const TLorentzVector & Position      (void) = 0; ///< returns the flux neutrino 4-position (note: expect SI rather than physical units)
  virtual bool                   End           (void) = 0; ///< true if no more flux nu's can be thrown (eg reaching end of beam sim ntuples)
  virtual long int               Index         (void) = 0; ///< returns corresponding index for current flux neutrino (e.g. for a flux ntuple returns the current entry number)
  virtual void                   Clear            (Option_t * opt   ) = 0; ///< reset state variables based on opt
  virtual void                   GenerateWeighted (bool gen_weighted) = 0; ///< set whether to generate weighted or unweighted neutrinos

protected:
  GFluxI();
};

}      // genie namespace
#endif // _G_FLUX_I_H_
//____________________________________________________________________________
/*!

\class    genie::GMCJDriver

\brief    A GENIE `MC Job Driver'. Can be used for setting up complicated event
          generation cases involving detailed flux descriptions and detector
          geometry descriptions.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 25, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org    
*/
//____________________________________________________________________________

#ifndef _GENIE_MC_JOB_DRIVER_H_
#define _GENIE_MC_JOB_DRIVER_H_

#include <string>
#include <map>

#include <TH1D.h>
#include <TLorentzVector.h>
#include <TFile.h>
#include <TTree.h>
#include <TBits.h>

#include "Framework/EventGen/PathLengthList.h"
#include "Framework/ParticleData/PDGCodeList.h"

using std::string;
using std::map;

namespace genie {

class EventRecord;
class GFluxI;
class GeomAnalyzerI;
class GENIE;
class GEVGPool;

class GMCJDriver {

public :
  GMCJDriver();
 ~GMCJDriver();

  // configure MC job
  void SetEventGeneratorList       (string listname);
  void SetUnphysEventMask          (const TBits & mask);
  void UseFluxDriver               (GFluxI * flux);
  void UseGeomAnalyzer             (GeomAnalyzerI * geom);
  void UseSplines                  (bool useLogE = true);
  bool UseMaxPathLengths           (string xml_filename);
  void KeepOnThrowingFluxNeutrinos (bool keep_on);
  void SetXSecSplineNbins          (int nbins);
  void SetPmaxLogBinning           (void);
  void SetPmaxNbins                (int nbins);
  void SetPmaxSafetyFactor         (double sf);
  void ForceInteraction            (void);
  void ForceSingleProbScale        (void);
  void PreSelectEvents             (bool preselect = true);
  bool PreCalcFluxProbabilities    (void);
  bool LoadFluxProbabilities       (string filename);
  void SaveFluxProbabilities       (string outfilename);
  void Configure                   (bool calc_prob_scales = true);

  // generate single neutrino event for input flux & geometry
  EventRecord * GenerateEvent (void);

  // info needed for computing the generated sample normalization
  double   GlobProbScale  (void) const { return fGlobPmax;                  }
  long int NFluxNeutrinos (void) const { return (long int) fNFluxNeutrinos; }
  map<int, double> SumFluxIntProbs(void) const { return fSumFluxIntProbs;   }

  // input flux and geometry drivers
  const GFluxI &        FluxDriver      (void) const { return *fFluxDriver;   }
  const GeomAnalyzerI & GeomAnalyzer    (void) const { return *fGeomAnalyzer; }
  GFluxI *              FluxDriverPtr   (void) const { return  fFluxDriver;   }
  GeomAnalyzerI *       GeomAnalyzerPtr (void) const { return  fGeomAnalyzer; }

private:

  // private methods:
  void          InitJob                         (void);
  void          InitEventGeneration             (void);
  void          GetParticleLists                (void);
  void          GetMaxPathLengthList            (void);
  void          GetMaxFluxEnergy                (void);
  void          PopulateEventGenDriverPool      (void);
  void          BootstrapXSecSplines            (void);
  void          BootstrapXSecSplineSummation    (void);
  void          ComputeProbScales               (void);
  EventRecord * GenerateEvent1Try               (void);
  bool          GenerateFluxNeutrino            (void);
  bool          ComputePathLengths              (void);
  double	ComputeInteractionProbabilities (bool use_max_path_length);
  int           SelectTargetMaterial            (double R);
  void          GenerateEventKinematics         (void);
  void          GenerateVertexPosition          (void);
  void          ComputeEventProbability         (void);
  double        InteractionProbability          (double xsec, double pl, int A);
  double        PreGenFluxInteractionProbability(void);

  // private data members:
  GEVGPool *      fGPool;              ///< A pool of GEVGDrivers properly configured event generation drivers / one per init state
  GFluxI *        fFluxDriver;         ///< [input] neutrino flux driver
  GeomAnalyzerI * fGeomAnalyzer;       ///< [input] detector geometry analyzer
  double          fEmax;               ///< [declared by the flux driver] maximum neutrino energy
  PDGCodeList     fNuList;             ///< [declared by the flux driver] list of neutrino codes
  PDGCodeList     fTgtList;            ///< [declared by the geom driver] list of target codes
  PathLengthList  fMaxPathLengths;     ///< [declared by the geom driver] maximum path length list
  PathLengthList  fCurPathLengths;     ///< [current] path length list for current flux neutrino
  TLorentzVector  fCurVtx;             ///< [current] interaction vertex
  EventRecord *   fCurEvt;             ///< [current] generated event
  int             fSelTgtPdg;          ///< [current] selected target material PDG code
  map<int,double> fCurCumulProbMap;    ///< [current] cummulative interaction probabilities
  double          fNFluxNeutrinos;     ///< [current] number of flux nuetrinos fired by the flux driver so far 
  int             fXSecSplineNbins;    ///< [config] number of bins in energy used in the xsec splines
  bool            fPmaxLogBinning;     ///< [config] maximum interaction probability is computed in logarithmic energy bins
  int             fPmaxNbins;          ///< [config] number of bins in energy used in the maximum interaction probability
  double          fPmaxSafetyFactor;   ///< [config] safety factor to compute the maximum interaction probability
  map<int,TH1D*>  fPmax;               ///< [computed at init] interaction probability scale /neutrino /energy for given geometry
  double          fGlobPmax;           ///< [computed at init] global interaction probability scale for given flux & geometry
  string          fEventGenList;       ///< [config] list of event generators loaded by this driver (what used to be the $GEVGL setting)
  TBits *         fUnphysEventMask;    ///< [config] controls whether unphysical events are returned (what used to be the $GUNPHYSMASK setting)
  string          fMaxPlXmlFilename;   ///< [config] input file with max density-weighted path lengths for all materials
  bool            fUseExtMaxPl;        ///< [config] using external max path length estimate?
  bool            fUseSplines;         ///< [config] compute all needed & not-loaded splines at init
  bool            fUseLogE;            ///< [config] build splines = f(logE) (rather than f(E)) ?
  bool            fKeepThrowingFluxNu; ///< [config] keep firing flux neutrinos till one of them interacts
  bool            fGenerateUnweighted; ///< [config] force single probability scale?
  bool            fForceInteraction;   ///< [config] force intearction?
  bool            fPreSelect;          ///< [config] set whether to pre-select events using max interaction paths 
  TFile*          fFluxIntProbFile;    ///< [input] pre-generated flux interaction probability file
  TTree*          fFluxIntTree;        ///< [computed-or-loaded] pre-computed flux interaction probabilities (expected tree name is "gFlxIntProbs")
  double          fBrFluxIntProb;      ///< flux interaction probability (set to branch:"FluxIntProb")
  int             fBrFluxIndex;        ///< corresponding entry in flux input tree (set to address of branch:"FluxEntry")
  double          fBrFluxEnu;          ///< corresponding flux P4 (set to address of branch:"FluxP4")
  double          fBrFluxWeight;       ///< corresponding flux weight (set to address of branch: "FluxWeight")
  int             fBrFluxPDG;          ///< corresponding flux pdg code (set to address of branch: "FluxPDG")
  string          fFluxIntFileName;    ///< whether to save pre-generated flux tree for use in later jobs
  string          fFluxIntTreeName;    ///< name for tree holding flux probabilities
  map<int, double> fSumFluxIntProbs;   ///< map where the key is flux pdg code and the value is sum of fBrFluxWeight * fBrFluxIntProb for all these flux neutrinos
};

}      // genie namespace
#endif // _GENIE_MC_JOB_DRIVER_H_
//____________________________________________________________________________
/*!

\class   genie::GMCJMonitor

\brief   Simple class to create & update MC job status files and env. vars.
         This is used to be able to keep track of an MC job status even when
         all output is suppressed or redirected to /dev/null.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created July 13, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org    
*/
//____________________________________________________________________________

#ifndef _G_MC_JOB_MONITOR_H_
#define _G_MC_JOB_MONITOR_H_

#include <TStopwatch.h>
#include <string>
using std::string;

namespace genie {

class EventRecord;

class GMCJMonitor {

public :
  GMCJMonitor(Long_t runnu);
 ~GMCJMonitor();

  void SetRefreshRate (int rate);
  void Update (int iev, const EventRecord * event);
  void CustomizeFilename(string filename);

private:

  void Init (void);

  Long_t     fRunNu;       ///< run number
  string     fStatusFile;  ///< name of output status file
  TStopwatch fWatch;
  double     fCpuTime;     ///< total cpu time so far
  int        fRefreshRate; ///< update output every so many events
};

}      // genie namespace

#endif // _G_MC_JOB_MONITOR_H_
//____________________________________________________________________________
/*!

\class   genie::GVldContext

\brief   Validity Context for an Event Generator

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created November 20, 2004

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _GENERATOR_VALIDITY_CONTEXT_H_
#define _GENERATOR_VALIDITY_CONTEXT_H_

#include <string>
#include <iostream>

#include "Framework/Interaction/ScatteringType.h"
#include "Framework/Interaction/InteractionType.h"

using std::string;
using std::ostream;

namespace genie {

class GVldContext;
class Interaction;

ostream & operator<< (ostream & stream, const GVldContext & vldc);

class GVldContext {

public :
  GVldContext();
 ~GVldContext();

  void   Decode  (string encoded_values);

  double Emin    (void) const { return fEmin; }
  double Emax    (void) const { return fEmax; }

  void   Print   (ostream & stream) const;

  friend ostream & operator<< (ostream & stream, const GVldContext & vldc);

private:

  void Init(void);

  void DecodeENERGY (string encoded_values);

  double fEmin;  // min probe energy in validity range
  double fEmax;  // max probe energy in validity range
};

}      // genie namespace

#endif // _GENERATOR_VALIDITY_CONTEXT_H_
//____________________________________________________________________________
/*!

\class    genie::GeomAnalyzerI

\brief    Defines the GENIE Geometry Analyzer Interface

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 13, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _GEOMETRY_ANALYZER_I_H_
#define _GEOMETRY_ANALYZER_I_H_

class TLorentzVector;
class TVector3;

namespace genie {

class PDGCodeList;
class PathLengthList;

class GeomAnalyzerI {

public :

  virtual ~GeomAnalyzerI();

  // define the GeomAnalyzerI interface

  virtual const PDGCodeList &
            ListOfTargetNuclei (void) = 0;

  virtual const PathLengthList &
            ComputeMaxPathLengths (void) = 0;
  virtual const PathLengthList &
            ComputePathLengths (
              const TLorentzVector & x, const TLorentzVector & p) = 0;
  virtual const TVector3 &
            GenerateVertex (
              const TLorentzVector & x, const TLorentzVector & p, int tgtpdg) = 0;

protected:

  GeomAnalyzerI();
};

}      // genie namespace

#endif // _GEOMETRY_ANALYZER_I_H_
//____________________________________________________________________________
/*!

\class    genie::HybridXSecAlgorithm

\brief    Defines an XSecAlgorithmI that delegates the actual calculation
          to one or more sub-algorithms (each of which is itself an XSecAlgorithmI)
          based on the input interaction. The choice of sub-algorithms is configurable
          via XML.

          The current use case is to allow GENIE to simultaneously use the
          SuSAv2 quasielastic cross section model for complex targets and the
          Llewellyn-Smith model for free nucleons.

          Is a concrete implementation of the XSecAlgorithmI interface.

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Acclerator Laboratory

\created  November 4, 2019

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HYBRID_XSEC_ALG_H_
#define _HYBRID_XSEC_ALG_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class HybridXSecAlgorithm : public XSecAlgorithmI {

public:

  HybridXSecAlgorithm();
  HybridXSecAlgorithm(string config);
  virtual ~HybridXSecAlgorithm();

  // XSecAlgorithmI interface implementation
  double XSec(const Interaction* i, KinePhaseSpace_t k) const;
  double Integral(const Interaction* i) const;
  bool   ValidProcess(const Interaction* i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string config);

private:

  /// Load algorithm configuration
  void LoadConfig (void);

  /// Retrieve a pointer to the appropriate cross section algorithm
  /// using the map. If no suitable algorithm was found, return a
  /// null pointer.
  const XSecAlgorithmI* ChooseXSecAlg(const Interaction& interaction) const;

  /// Map specifying the managed cross section algorithms. Keys are strings
  /// generated with Interaction::AsString() (identical to those used for
  /// splines). Values are pointers to the corresponding cross section
  /// algorithms.
  mutable std::map<string, const XSecAlgorithmI*> fXSecAlgMap;

  /// Optional XSecAlgorithmI to use by default
  const XSecAlgorithmI* fDefaultXSecAlg;
};

} // genie namespace
#endif // _HYBRID_XSEC_ALG_H_
//____________________________________________________________________________
/*!

\class   genie::InteractionGeneratorMap

\brief   An Interaction -> EventGeneratorI associative container.
         The container is being built for the loaded EventGeneratorList and for
         the input InitialState object and is being used to locate the generator
         that can generate aany given interaction.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created January 23, 2006

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org   
*/
//____________________________________________________________________________

#ifndef _INTERACTION_GENERATOR_MAP_H_
#define _INTERACTION_GENERATOR_MAP_H_

#include <map>
#include <string>
#include <ostream>

#include "Framework/Interaction/Interaction.h"

using std::map;
using std::string;
using std::ostream;

namespace genie {

class InteractionGeneratorMap;
class EventGeneratorI;
class InteractionList;
class InitialState;
class EventGeneratorList;

ostream & operator << (ostream & stream, const InteractionGeneratorMap & xsmap);

class InteractionGeneratorMap : public map<string, const EventGeneratorI *> {

public :
  InteractionGeneratorMap();
  InteractionGeneratorMap(const InteractionGeneratorMap & igmap);
  ~InteractionGeneratorMap();

  void UseGeneratorList (const EventGeneratorList * list);
  void BuildMap         (const InitialState & init_state);

  const EventGeneratorI * FindGenerator      (const Interaction * in) const;
  const InteractionList & GetInteractionList (void) const;

  void Reset (void);
  void Copy  (const InteractionGeneratorMap & xsmap);
  void Print (ostream & stream) const;

  InteractionGeneratorMap & operator =  (const InteractionGeneratorMap & xsmap);
  friend ostream & operator << (ostream & stream, const InteractionGeneratorMap & xsmap);

private:

  void Init    (void);
  void CleanUp (void);

  const EventGeneratorList * fEventGeneratorList;

  InitialState *    fInitState;
  InteractionList * fInteractionList;
};

}      // genie namespace

#endif // _INTERACTION_GENERATOR_MAP_H_
//____________________________________________________________________________
/*!

\class   genie::InteractionList

\brief   A vector of Interaction objects.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created May 13, 2005

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org     
*/
//____________________________________________________________________________

#ifndef _INTERACTION_LIST_H_
#define _INTERACTION_LIST_H_

#include <vector>
#include <ostream>

using std::vector;
using std::ostream;

namespace genie {

class Interaction;
class InteractionList;

ostream & operator << (ostream & stream, const InteractionList & intl);

class InteractionList : public vector<Interaction *> {

public :
  InteractionList();
  InteractionList(const InteractionList & intl);
  ~InteractionList();

  void Reset  (void);
  void Append (const InteractionList & intl);
  void Copy   (const InteractionList & intl);
  void Print  (ostream & stream) const;

  InteractionList & operator =  (const InteractionList & intl);
  friend ostream &  operator << (ostream & stream, const InteractionList & intl);
};

}      // genie namespace

#endif // _INTERACTION_LIST_H_
//____________________________________________________________________________
/*!

\class   genie::InteractionListAssembler

\brief   Assembles a list of all interactions that can be generated during a
         neutrino event generation job by querying each EventGeneratorI
         subclass employed in that job for its interaction list.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created May 16, 2005

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org     
*/
//____________________________________________________________________________

#ifndef _INTERACTION_LIST_ASSEMBLER_H_
#define _INTERACTION_LIST_ASSEMBLER_H_

#include "Framework/Algorithm/Algorithm.h"

namespace genie {

class InteractionList;
class EventGeneratorList;
class InitialState;

class InteractionListAssembler : public Algorithm {

public :

  InteractionListAssembler();
  InteractionListAssembler(string config);
  ~InteractionListAssembler();

  void              SetGeneratorList        (EventGeneratorList * evglist);
  InteractionList * AssembleInteractionList (const InitialState & init) const;

private:

  EventGeneratorList * fEventGeneratorList;
};

}      // genie namespace

#endif // _INTERACTION_LIST_ASSEMBLER_H_
//____________________________________________________________________________
/*!

\class   genie::InteractionListGeneratorI

\brief   Defines the InteractionListGeneratorI interface.
         Concrete implementations of this interface generate a list of all
         Interaction (= event summary) objects that can be generated by
         EventGeneratorI subclasses.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created May 13, 2005

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org     
*/
//____________________________________________________________________________

#ifndef _INTERACTION_LIST_GENERATOR_I_H_
#define _INTERACTION_LIST_GENERATOR_I_H_

#include "Framework/Algorithm/Algorithm.h"

namespace genie {

class InteractionList;
class InitialState;

class InteractionListGeneratorI : public Algorithm {

public :

  //-- define the InteractionListGeneratorI interface

  virtual InteractionList *
                 CreateInteractionList(const InitialState & init) const = 0;

protected :

  InteractionListGeneratorI();
  InteractionListGeneratorI(string name);
  InteractionListGeneratorI(string name, string config);
  ~InteractionListGeneratorI();
};

}      // genie namespace

#endif // _INTERACTION_LIST_GENERATOR_I_H_
//____________________________________________________________________________
/*!

\class   genie::InteractionSelectorI

\brief   Defines the InteractionSelectorI interface to be implemented by
         algorithms selecting interactions to be generated.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created December 05, 2004

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org 
*/
//____________________________________________________________________________

#ifndef _INTERACTION_SELECTOR_I_H_
#define _INTERACTION_SELECTOR_I_H_

#include "Framework/Algorithm/Algorithm.h"

class TLorentzVector;

namespace genie {

class InteractionGeneratorMap;
class EventRecord;

class InteractionSelectorI : public Algorithm {

public :
  virtual ~InteractionSelectorI();

  //!  Define the InteractionSelectorI interface
  virtual EventRecord * SelectInteraction
    (const InteractionGeneratorMap * igmp, const TLorentzVector & p4) const = 0;

protected:
  InteractionSelectorI();
  InteractionSelectorI(string name);
  InteractionSelectorI(string name, string config);
};

}      // genie namespace

#endif // _INTERACTION_SELECTOR_I_H_
//____________________________________________________________________________
/*!

\class   genie::PathLengthList

\brief   Object to be filled with the neutrino path-length, for all detector
         geometry materials, when starting from a position x and travelling
         along the direction of the neutrino 4-momentum.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created May 24, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org      
*/
//____________________________________________________________________________

#ifndef _PATH_LENGTH_LIST_H_
#define _PATH_LENGTH_LIST_H_

#include <map>
#include <ostream>
#include <string>

#include "Framework/Conventions/XmlParserStatus.h"

class TLorentzVector;

using std::map;
using std::ostream;
using std::string;

namespace genie {

class PathLengthList;
class PDGCodeList;

ostream & operator << (ostream & stream, const PathLengthList & list);

class PathLengthList : public map<int, double> {

public :
  PathLengthList();
  PathLengthList(const PDGCodeList & pdglist);
  PathLengthList(const PathLengthList & plist);
  PathLengthList(const map<int,double> & plist);
 ~PathLengthList();

  void   AddPathLength   (int pdgc, double pl); // path-legth(pdgc) += pl
  void   SetPathLength   (int pdgc, double pl); // path-legth(pdgc)  = pl
  void   SetAllToZero    (void);
  bool   AreAllZero      (void) const;
  void   ScalePathLength (int pdgc, double scale);
  double PathLength      (int pdgc) const;

  XmlParserStatus_t LoadFromXml (string filename);
  void              SaveAsXml   (string filename) const;

  void Copy  (const PathLengthList & plist);
  void Print (ostream & stream) const;

  PathLengthList & operator =  (const PathLengthList & list);
  friend ostream & operator << (ostream & stream, const PathLengthList & list);
};

}      // genie namespace

#endif // _PATH_LENGTH_LIST_H_
//____________________________________________________________________________
/*!

\class   genie::PhysInteractionSelector

\brief   Selects interactions to be generated

         Is a concrete implementation of the InteractionSelectorI interface.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created January 25, 2005

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org 
*/
//____________________________________________________________________________

#ifndef _PHYS_INTERACTION_SELECTOR_H_
#define _PHYS_INTERACTION_SELECTOR_H_

#include "Framework/EventGen/InteractionSelectorI.h"

namespace genie {

class PhysInteractionSelector : public InteractionSelectorI {

public :
  PhysInteractionSelector();
  PhysInteractionSelector(string config);
  ~PhysInteractionSelector();

  //! implement the InteractionSelectorI interface
  EventRecord * SelectInteraction
     (const InteractionGeneratorMap * igmp, const TLorentzVector & p4) const;

  //! override the Algorithm::Configure methods to load configuration
  //! data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  void LoadConfigData (void);

  bool fUseSplines;
};

}      // genie namespace

#endif // _PHYS_INTERACTION_SELECTOR_H_
//____________________________________________________________________________
/*!

\class    genie::RunningThreadInfo

\brief    Keep info on the event generation thread currently on charge.
          This is used so that event generation modules invoked by the thread
	  can see the "bigger picture" and access the cross section model for
	  the thread, look-up info for modules that run before or are scheduled
          to run after etc.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 06, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org    
*/
//____________________________________________________________________________

#ifndef _RUNNING_THREAD_INFO_H_
#define _RUNNING_THREAD_INFO_H_

namespace genie {

class EventGeneratorI;

class RunningThreadInfo
{
public:
  static RunningThreadInfo * Instance(void);

  const EventGeneratorI * RunningThread(void)
  {
    return fRunningThread;
  }
  void UpdateRunningThread(const EventGeneratorI * evg)
  {
     fRunningThread = evg;
  }

private:
  RunningThreadInfo();
  RunningThreadInfo(const RunningThreadInfo & info);
  virtual ~RunningThreadInfo();

  //! self
  static RunningThreadInfo * fInstance;

  //! current thread
  const EventGeneratorI * fRunningThread;

  //! clean
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (RunningThreadInfo::fInstance !=0) {
            delete RunningThreadInfo::fInstance;
            RunningThreadInfo::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace

#endif // _RUNNING_THREAD_INFO_H_
//____________________________________________________________________________
/*!

\class   genie::ToyInteractionSelector

\brief   Generates random interactions.

         This is a 'toy' InteractionSelectorI to be used in event generation
         testing / debugging. Not to be used in event generation for physics
         purposes.

         Is a concrete implementation of the InteractionSelectorI interface.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created December 05, 2004

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org     
*/
//____________________________________________________________________________

#ifndef _TOY_INTERACTION_SELECTOR_H_
#define _TOY_INTERACTION_SELECTOR_H_

#include "Framework/EventGen/InteractionSelectorI.h"

namespace genie {

class ToyInteractionSelector : public InteractionSelectorI {

public :
  ToyInteractionSelector();
  ToyInteractionSelector(string config);
  ~ToyInteractionSelector();

  //! implement the InteractionSelectorI interface
  EventRecord * SelectInteraction
    (const InteractionGeneratorMap * igmp, const TLorentzVector & p4) const;
};

}      // genie namespace

#endif // _TOY_INTERACTION_SELECTOR_H_
//____________________________________________________________________________
/*!

\class    genie::XSecAlgorithmI

\brief    Cross Section Calculation Interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _XSEC_ALGORITHM_I_H_
#define _XSEC_ALGORITHM_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/Conventions/KinePhaseSpace.h"
#include "Framework/Interaction/Interaction.h"

namespace genie {

class XSecAlgorithmI : public Algorithm {

public:
  virtual ~XSecAlgorithmI();

  //! Compute the cross section for the input interaction
  virtual double XSec (const Interaction* i, KinePhaseSpace_t k=kPSfE) const = 0;

  //! Integrate the model over the kinematic phase space available to the
  //! input interaction (kinematical cuts can be included)
  virtual double Integral (const Interaction* i) const = 0;

  //! Can this cross section algorithm handle the input process?
  virtual bool ValidProcess    (const Interaction* i) const = 0;

  //! Is the input kinematical point a physically allowed one?
  virtual bool ValidKinematics (const Interaction* i) const;

protected:
  XSecAlgorithmI();
  XSecAlgorithmI(string name);
  XSecAlgorithmI(string name, string config);
};

}       // genie namespace
#endif  // _XSEC_ALGORITHM_I_H_
//____________________________________________________________________________
/*!

\class   genie::XSecAlgorithmMap

\brief   An Interaction -> XSecAlgorithmI associative container. The container
         is being built for the loaded EventGeneratorList and for the input
         InitialState object.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created January 23, 2006

\cpright Copyright (c) 2003-2025, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org   
*/
//____________________________________________________________________________

#ifndef _XSEC_ALGORITHM_MAP_H_
#define _XSEC_ALGORITHM_MAP_H_

#include <map>
#include <string>
#include <ostream>

using std::map;
using std::string;
using std::ostream;

namespace genie {

class XSecAlgorithmMap;
class XSecAlgorithmI;
class Interaction;
class InteractionList;
class InitialState;
class EventGeneratorList;

ostream & operator << (ostream & stream, const XSecAlgorithmMap & xsmap);

class XSecAlgorithmMap : public map<string, const XSecAlgorithmI *> {

public :

  XSecAlgorithmMap();
  XSecAlgorithmMap(const XSecAlgorithmMap & xsmap);
  ~XSecAlgorithmMap();

  void UseGeneratorList (const EventGeneratorList * list);
  void BuildMap         (const InitialState & init_state);

  const XSecAlgorithmI *  FindXSecAlgorithm  (const Interaction * in) const;
  const InteractionList & GetInteractionList (void) const;

  void Reset (void);
  void Copy  (const XSecAlgorithmMap & xsmap);
  void Print (ostream & stream) const;

  XSecAlgorithmMap & operator =  (const XSecAlgorithmMap & xsmap);
  friend ostream &   operator << (ostream & stream, const XSecAlgorithmMap & xsmap);

private:

  void Init    (void);
  void CleanUp (void);

  const EventGeneratorList * fEventGeneratorList;

  InitialState *    fInitState;
  InteractionList * fInteractionList;
};

}      // genie namespace

#endif // _XSEC_ALGORITHM_MAP_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::EventGenerator", payloadCode, "@",
"genie::EventGeneratorI", payloadCode, "@",
"genie::EventGeneratorList", payloadCode, "@",
"genie::EventGeneratorListAssembler", payloadCode, "@",
"genie::EventRecord", payloadCode, "@",
"genie::EventRecordVisitorI", payloadCode, "@",
"genie::GEVGDriver", payloadCode, "@",
"genie::GEVGPool", payloadCode, "@",
"genie::GFluxI", payloadCode, "@",
"genie::GMCJDriver", payloadCode, "@",
"genie::GMCJMonitor", payloadCode, "@",
"genie::GVldContext", payloadCode, "@",
"genie::GeomAnalyzerI", payloadCode, "@",
"genie::HybridXSecAlgorithm", payloadCode, "@",
"genie::InteractionGeneratorMap", payloadCode, "@",
"genie::InteractionList", payloadCode, "@",
"genie::InteractionListAssembler", payloadCode, "@",
"genie::InteractionListGeneratorI", payloadCode, "@",
"genie::InteractionSelectorI", payloadCode, "@",
"genie::PathLengthList", payloadCode, "@",
"genie::PhysInteractionSelector", payloadCode, "@",
"genie::RunningThreadInfo", payloadCode, "@",
"genie::ToyInteractionSelector", payloadCode, "@",
"genie::XSecAlgorithmI", payloadCode, "@",
"genie::XSecAlgorithmMap", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGFwEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGFwEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGFwEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGFwEG() {
  TriggerDictionaryInitialization_libGFwEG_Impl();
}
