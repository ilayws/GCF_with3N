// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_FwGHEP
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
#include "GHepParticle.h"
#include "GHepRecord.h"
#include "GHepRecordHistory.h"
#include "GHepUtils.h"
#include "GHepVirtualList.h"
#include "GHepVirtualListFolder.h"

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
            instance("genie", 0 /*version*/, "GHepStatus.h", 25,
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
      namespace ghep {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLghep_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::ghep", 0 /*version*/, "", 497,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLghep_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLghep_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static void *new_geniecLcLGHepParticle(void *p = nullptr);
   static void delete_geniecLcLGHepParticle(void *p);
   static void deleteArray_geniecLcLGHepParticle(void *p);
   static void destruct_geniecLcLGHepParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GHepParticle*)
   {
      ::genie::GHepParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::GHepParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::GHepParticle", ::genie::GHepParticle::Class_Version(), "", 41,
                  typeid(::genie::GHepParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::GHepParticle::Dictionary, isa_proxy, 4,
                  sizeof(::genie::GHepParticle) );
      instance.SetNew(&new_geniecLcLGHepParticle);
      instance.SetDelete(&delete_geniecLcLGHepParticle);
      instance.SetDeleteArray(&deleteArray_geniecLcLGHepParticle);
      instance.SetDestructor(&destruct_geniecLcLGHepParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GHepParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GHepParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GHepParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLGHepRecord(void *p = nullptr);
   static void delete_geniecLcLGHepRecord(void *p);
   static void deleteArray_geniecLcLGHepRecord(void *p);
   static void destruct_geniecLcLGHepRecord(void *p);
   static Long64_t merge_geniecLcLGHepRecord(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GHepRecord*)
   {
      ::genie::GHepRecord *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::GHepRecord >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::GHepRecord", ::genie::GHepRecord::Class_Version(), "", 242,
                  typeid(::genie::GHepRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::GHepRecord::Dictionary, isa_proxy, 4,
                  sizeof(::genie::GHepRecord) );
      instance.SetNew(&new_geniecLcLGHepRecord);
      instance.SetDelete(&delete_geniecLcLGHepRecord);
      instance.SetDeleteArray(&deleteArray_geniecLcLGHepRecord);
      instance.SetDestructor(&destruct_geniecLcLGHepRecord);
      instance.SetMerge(&merge_geniecLcLGHepRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GHepRecord*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GHepRecord*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GHepRecord*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGHepRecordHistory_Dictionary();
   static void geniecLcLGHepRecordHistory_TClassManip(TClass*);
   static void *new_geniecLcLGHepRecordHistory(void *p = nullptr);
   static void *newArray_geniecLcLGHepRecordHistory(Long_t size, void *p);
   static void delete_geniecLcLGHepRecordHistory(void *p);
   static void deleteArray_geniecLcLGHepRecordHistory(void *p);
   static void destruct_geniecLcLGHepRecordHistory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GHepRecordHistory*)
   {
      ::genie::GHepRecordHistory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GHepRecordHistory));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GHepRecordHistory", "", 444,
                  typeid(::genie::GHepRecordHistory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGHepRecordHistory_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GHepRecordHistory) );
      instance.SetNew(&new_geniecLcLGHepRecordHistory);
      instance.SetNewArray(&newArray_geniecLcLGHepRecordHistory);
      instance.SetDelete(&delete_geniecLcLGHepRecordHistory);
      instance.SetDeleteArray(&deleteArray_geniecLcLGHepRecordHistory);
      instance.SetDestructor(&destruct_geniecLcLGHepRecordHistory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GHepRecordHistory*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GHepRecordHistory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GHepRecordHistory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGHepRecordHistory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GHepRecordHistory*>(nullptr))->GetClass();
      geniecLcLGHepRecordHistory_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGHepRecordHistory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLGHepVirtualList(void *p = nullptr);
   static void *newArray_geniecLcLGHepVirtualList(Long_t size, void *p);
   static void delete_geniecLcLGHepVirtualList(void *p);
   static void deleteArray_geniecLcLGHepVirtualList(void *p);
   static void destruct_geniecLcLGHepVirtualList(void *p);
   static void streamer_geniecLcLGHepVirtualList(TBuffer &buf, void *obj);
   static Long64_t merge_geniecLcLGHepVirtualList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GHepVirtualList*)
   {
      ::genie::GHepVirtualList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::GHepVirtualList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::GHepVirtualList", ::genie::GHepVirtualList::Class_Version(), "", 542,
                  typeid(::genie::GHepVirtualList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::GHepVirtualList::Dictionary, isa_proxy, 16,
                  sizeof(::genie::GHepVirtualList) );
      instance.SetNew(&new_geniecLcLGHepVirtualList);
      instance.SetNewArray(&newArray_geniecLcLGHepVirtualList);
      instance.SetDelete(&delete_geniecLcLGHepVirtualList);
      instance.SetDeleteArray(&deleteArray_geniecLcLGHepVirtualList);
      instance.SetDestructor(&destruct_geniecLcLGHepVirtualList);
      instance.SetStreamerFunc(&streamer_geniecLcLGHepVirtualList);
      instance.SetMerge(&merge_geniecLcLGHepVirtualList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GHepVirtualList*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GHepVirtualList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GHepVirtualList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGHepVirtualListFolder_Dictionary();
   static void geniecLcLGHepVirtualListFolder_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GHepVirtualListFolder*)
   {
      ::genie::GHepVirtualListFolder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GHepVirtualListFolder));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GHepVirtualListFolder", "", 592,
                  typeid(::genie::GHepVirtualListFolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGHepVirtualListFolder_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GHepVirtualListFolder) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GHepVirtualListFolder*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::GHepVirtualListFolder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::GHepVirtualListFolder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGHepVirtualListFolder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::GHepVirtualListFolder*>(nullptr))->GetClass();
      geniecLcLGHepVirtualListFolder_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGHepVirtualListFolder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr GHepParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GHepParticle::Class_Name()
{
   return "genie::GHepParticle";
}

//______________________________________________________________________________
const char *GHepParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GHepParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GHepParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GHepParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr GHepRecord::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GHepRecord::Class_Name()
{
   return "genie::GHepRecord";
}

//______________________________________________________________________________
const char *GHepRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepRecord*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GHepRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepRecord*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GHepRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepRecord*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GHepRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepRecord*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr GHepVirtualList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GHepVirtualList::Class_Name()
{
   return "genie::GHepVirtualList";
}

//______________________________________________________________________________
const char *GHepVirtualList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepVirtualList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GHepVirtualList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepVirtualList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GHepVirtualList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepVirtualList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GHepVirtualList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::GHepVirtualList*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
void GHepParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::GHepParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genie::GHepParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(genie::GHepParticle::Class(),this);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGHepParticle(void *p) {
      return  p ? new(p) ::genie::GHepParticle( (TRootIOCtor *)nullptr ) : new ::genie::GHepParticle( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGHepParticle(void *p) {
      delete (static_cast<::genie::GHepParticle*>(p));
   }
   static void deleteArray_geniecLcLGHepParticle(void *p) {
      delete [] (static_cast<::genie::GHepParticle*>(p));
   }
   static void destruct_geniecLcLGHepParticle(void *p) {
      typedef ::genie::GHepParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GHepParticle

namespace genie {
//______________________________________________________________________________
void GHepRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::GHepRecord.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genie::GHepRecord::Class(),this);
   } else {
      R__b.WriteClassBuffer(genie::GHepRecord::Class(),this);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGHepRecord(void *p) {
      return  p ? new(p) ::genie::GHepRecord( (TRootIOCtor *)nullptr ) : new ::genie::GHepRecord( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGHepRecord(void *p) {
      delete (static_cast<::genie::GHepRecord*>(p));
   }
   static void deleteArray_geniecLcLGHepRecord(void *p) {
      delete [] (static_cast<::genie::GHepRecord*>(p));
   }
   static void destruct_geniecLcLGHepRecord(void *p) {
      typedef ::genie::GHepRecord current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_geniecLcLGHepRecord(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::genie::GHepRecord*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::genie::GHepRecord

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGHepRecordHistory(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GHepRecordHistory : new ::genie::GHepRecordHistory;
   }
   static void *newArray_geniecLcLGHepRecordHistory(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::GHepRecordHistory[nElements] : new ::genie::GHepRecordHistory[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGHepRecordHistory(void *p) {
      delete (static_cast<::genie::GHepRecordHistory*>(p));
   }
   static void deleteArray_geniecLcLGHepRecordHistory(void *p) {
      delete [] (static_cast<::genie::GHepRecordHistory*>(p));
   }
   static void destruct_geniecLcLGHepRecordHistory(void *p) {
      typedef ::genie::GHepRecordHistory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::GHepRecordHistory

namespace genie {
//______________________________________________________________________________
void GHepVirtualList::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::GHepVirtualList.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::GHepVirtualList thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TClonesArray::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TClonesArray::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGHepVirtualList(void *p) {
      return  p ? new(p) ::genie::GHepVirtualList : new ::genie::GHepVirtualList;
   }
   static void *newArray_geniecLcLGHepVirtualList(Long_t nElements, void *p) {
      return p ? new(p) ::genie::GHepVirtualList[nElements] : new ::genie::GHepVirtualList[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGHepVirtualList(void *p) {
      delete (static_cast<::genie::GHepVirtualList*>(p));
   }
   static void deleteArray_geniecLcLGHepVirtualList(void *p) {
      delete [] (static_cast<::genie::GHepVirtualList*>(p));
   }
   static void destruct_geniecLcLGHepVirtualList(void *p) {
      typedef ::genie::GHepVirtualList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLGHepVirtualList(TBuffer &buf, void *obj) {
      ((::genie::GHepVirtualList*)obj)->::genie::GHepVirtualList::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_geniecLcLGHepVirtualList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::genie::GHepVirtualList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::genie::GHepVirtualList

namespace ROOT {
} // end of namespace ROOT for class ::genie::GHepVirtualListFolder

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGFwGHEP() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGFwGHEP) = RecordReadRules_libGFwGHEP();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGFwGHEP));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGFwGHEP_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Framework/GHEP",
"GENIE",
"GENIE/Framework/GHEP",
"../include",
"../include/GENIE",
"../include/GENIE/Framework/GHEP",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Framework/GHEP/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGFwGHEP dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  GHepParticle;}
namespace genie{class  GHepRecord;}
namespace genie{class  GHepRecordHistory;}
namespace genie{class  GHepVirtualList;}
namespace genie{class  GHepVirtualListFolder;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGFwGHEP dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class   genie::GHepParticle

\brief   STDHEP-like event record entry that can fit a particle or a nucleus.

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created November 18, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org    
*/
//____________________________________________________________________________

#ifndef _GHEP_PARTICLE_H_
#define _GHEP_PARTICLE_H_

#include <string>
#include <iostream>

#include <TObject.h>
#include <TLorentzVector.h>

#include "Framework/GHEP/GHepStatus.h"

class TRootIOCtor;

using std::string;
using std::ostream;

namespace genie {

class GHepParticle;
ostream & operator << (ostream & stream, const GHepParticle & p);

class GHepParticle : public TObject {

public :
  using TObject::Copy; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings
  using TObject::Compare;

  GHepParticle();
  GHepParticle(const GHepParticle & particle);

  // TParticle-like constructors for compatibility
  GHepParticle(
      int pdg, GHepStatus_t status,
            int mother1, int mother2, int daughter1, int daughter2,
                        const TLorentzVector & p, const TLorentzVector & v);
  GHepParticle(
       int pdg, GHepStatus_t status,
         int mother1, int mother2, int daughter1, int daughter2,
                           double px, double py, double pz, double E,
                                    double x, double y, double z, double t);

  GHepParticle(TRootIOCtor*);
 ~GHepParticle();

  // Basic properties
  int           Pdg            (void) const { return  fPdgCode;            }
  GHepStatus_t  Status         (void) const { return  fStatus;             }
  int           RescatterCode  (void) const { return  fRescatterCode;      }
  int           FirstMother    (void) const { return  fFirstMother;        }
  int           LastMother     (void) const { return  fLastMother;         }
  int           FirstDaughter  (void) const { return  fFirstDaughter;      }
  int           LastDaughter   (void) const { return  fLastDaughter;       }
  bool          HasDaughters   (void) const { return (fFirstDaughter!=-1); }
  bool          IsBound        (void) const { return  fIsBound;            }

  string Name   (void) const; ///< Name that corresponds to the PDG code
  double Mass   (void) const; ///< Mass that corresponds to the PDG code
  double Charge (void) const; ///< Chrg that corresponds to the PDG code

  // Returns the momentum & position 4-vectors
  const TLorentzVector * P4 (void) const { return fP4; }
  const TLorentzVector * X4 (void) const { return fX4; }
  TLorentzVector * P4 (void) { return fP4; }
  TLorentzVector * X4 (void) { return fX4; }

  // Hand over clones of the momentum & position 4-vectors (+ their ownership)
  TLorentzVector * GetP4 (void) const;
  TLorentzVector * GetX4 (void) const;

  // Returns the momentum & position 4-vectors components
  double Px     (void) const { return (fP4) ? fP4->Px()     : 0; } ///< Get Px
  double Py     (void) const { return (fP4) ? fP4->Py()     : 0; } ///< Get Py
  double Pz     (void) const { return (fP4) ? fP4->Pz()     : 0; } ///< Get Pz
  double E      (void) const { return (fP4) ? fP4->Energy() : 0; } ///< Get energy
  double Energy (void) const { return this->E();                 } ///< Get energy
  double KinE   (bool mass_from_pdg = false) const;                ///< Get kinetic energy
  double Vx     (void) const { return (fX4) ? fX4->X()      : 0; } ///< Get production x
  double Vy     (void) const { return (fX4) ? fX4->Y()      : 0; } ///< Get production y
  double Vz     (void) const { return (fX4) ? fX4->Z()      : 0; } ///< Get production z
  double Vt     (void) const { return (fX4) ? fX4->T()      : 0; } ///< Get production time

  // Return removal energy /set only for bound nucleons/
  double RemovalEnergy (void) const { return fRemovalEnergy; } ///< Get removal energy

  // Compare with another particle
  bool Compare            (const GHepParticle * p) const;
  bool ComparePdgCodes    (const GHepParticle * p) const;
  bool CompareStatusCodes (const GHepParticle * p) const;
  bool CompareFamily      (const GHepParticle * p) const;
  bool CompareMomentum    (const GHepParticle * p) const;

  // On/Off "shellness" if mass from PDG != mass from 4-P
  bool IsOnMassShell  (void) const;
  bool IsOffMassShell (void) const;

  // Relevant if GHEP entry is a nucleus, else=-1 / Decoded from PDG code
  int  Z (void) const;
  int  A (void) const;

  // Get the polarization. Most likely it is only the f/s primary lepton
  // for which this is usefull and might be set during event generation
  double PolzPolarAngle   (void) const { return fPolzTheta; }
  double PolzAzimuthAngle (void) const { return fPolzPhi; }
  bool   PolzIsSet        (void) const;
  void   GetPolarization  (TVector3 & polz);

  // Set pdg code and status codes
  void SetPdgCode  (int c);
  void SetStatus   (GHepStatus_t s) { fStatus = s; }

  // Set the rescattering code
  void SetRescatterCode(int code) { fRescatterCode = code; }

  // Set the mother/daughter links
  void SetFirstMother    (int m)          { fFirstMother   = m; }
  void SetLastMother     (int m)          { fLastMother    = m; }
  void SetFirstDaughter  (int d)          { fFirstDaughter = d; }
  void SetLastDaughter   (int d)          { fLastDaughter  = d; }

  // Set the momentum & position 4-vectors
  void SetMomentum (const TLorentzVector & p4);
  void SetPosition (const TLorentzVector & v4);
  void SetMomentum (double px, double py, double pz, double E);
  void SetPosition (double x,  double y,  double z,  double t);
  void SetEnergy   (double E );
  void SetPx       (double px);
  void SetPy       (double py);
  void SetPz       (double pz);

  // Set the polarization angles
  void SetPolarization(double theta, double phi);
  void SetPolarization(const TVector3 & polz);

  // Set the bould flag & removal energy (bound flag set automatically
  // if a positive removal energy is set)
  void SetBound         (bool bound);
  void SetRemovalEnergy (double Erm);

  // Clean-up, reset, copy, print,...
  void CleanUp (void);
  void Reset   (void);
  void Clear   (Option_t * option);
  void Copy    (const GHepParticle & particle);
  void Print   (ostream & stream) const;
  void Print   (Option_t * opt)   const;

  // Overloaded operators
  bool             operator == (const GHepParticle & p) const;
  GHepParticle &   operator =  (const GHepParticle & p);
  friend ostream & operator << (ostream & stream, const GHepParticle & p);

private:

  void Init(void);
  void AssertIsKnownParticle(void) const;

  int              fPdgCode;        ///< particle PDG code
  GHepStatus_t     fStatus;         ///< particle status
  int              fRescatterCode;  ///< rescattering code
  int              fFirstMother;    ///< first mother idx
  int              fLastMother;     ///< last mother idx
  int              fFirstDaughter;  ///< first daughter idx
  int              fLastDaughter;   ///< last daughter idx
  TLorentzVector * fP4;             ///< momentum 4-vector (GeV)
  TLorentzVector * fX4;             ///< position 4-vector (in the target nucleus coordinate system / x,y,z in fm / t from the moment of the primary interaction in ys(yocto second = 10^-24 s)
  double           fPolzTheta;      ///< polar polarization angle (rad)
  double           fPolzPhi;        ///< azimuthal polarization angle (rad)
  double           fRemovalEnergy;  ///< removal energy for bound nucleons (GeV)
  bool             fIsBound;        ///< 'is it a bound particle?' flag

ClassDef(GHepParticle, 2)

};

}      // genie namespace

#endif // _GHEP_PARTICLE_H_
//____________________________________________________________________________
/*!

\class    genie::GHepRecord

\brief    GENIE's GHEP MC event record.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 1, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _GHEP_RECORD_H_
#define _GHEP_RECORD_H_

#include <ostream>
#include <vector>

#include <TClonesArray.h>
#include <TBits.h>

#include "Framework/Conventions/GMode.h"
#include "Framework/Conventions/KinePhaseSpace.h"
#include "Framework/Interaction/Interaction.h"
#include "Framework/GHEP/GHepStatus.h"

class TRootIOCtor;
class TLorentzVector;

using std::ostream;
using std::vector;

namespace genie {

class GHepRecord;
class GHepParticle;

ostream & operator << (ostream & stream, const GHepRecord & event);

class GHepRecord : public TClonesArray {

public :
  using TClonesArray::Print; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings
  using TClonesArray::Copy;

  GHepRecord();
  GHepRecord(int size);
  GHepRecord(const GHepRecord & record);
  GHepRecord(TRootIOCtor*);
  virtual ~GHepRecord();

  // Methods to attach / get summary information

  virtual Interaction * Summary       (void) const;
  virtual void          AttachSummary (Interaction * interaction);

  // Provide a simplified wrapper of the 'new with placement'
  // TClonesArray object insertion method
  // ALWAYS use these methods to insert new particles as they check
  // for the compactness of the daughter lists.
  // Note that the record might be automatically re-arranged as the
  // result of your GHepParticle insertion

  virtual void AddParticle (const GHepParticle & p);
  virtual void AddParticle (int pdg, GHepStatus_t ist,
                     int mom1, int mom2, int dau1, int dau2,
                        const TLorentzVector & p, const TLorentzVector & v);
  virtual void AddParticle (int pdg, GHepStatus_t ist,
                     int mom1, int mom2, int dau1, int dau2,
                           double px, double py, double pz, double E,
                                    double x, double y, double z, double t);

  // Methods to search the GHEP record

  virtual GHepParticle * Particle     (int position) const;
  virtual GHepParticle * FindParticle (int pdg, GHepStatus_t ist, int start) const;

  virtual int ParticlePosition (int pdg, GHepStatus_t i, int start=0) const;
  virtual int ParticlePosition (GHepParticle * particle, int start=0) const;

  virtual vector<int> * GetStableDescendants(int position) const;

  // Return the mode (lepton+nucleon/nucleus, hadron+nucleon/nucleus, nucleon
  // decay etc...) by looking at the event entries

  GEvGenMode_t EventGenerationMode(void) const;

  // Easy access methods for the most frequently used GHEP entries

  virtual GHepParticle * Probe                            (void) const;
  virtual GHepParticle * TargetNucleus                    (void) const;
  virtual GHepParticle * RemnantNucleus                   (void) const;
  virtual GHepParticle * HitNucleon                       (void) const;
  virtual GHepParticle * HitElectron                      (void) const;
  virtual GHepParticle * FinalStatePrimaryLepton          (void) const;
  virtual GHepParticle * FinalStateHadronicSystem         (void) const;
  virtual int            ProbePosition                    (void) const;
  virtual int            TargetNucleusPosition            (void) const;
  virtual int            RemnantNucleusPosition           (void) const;
  virtual int            HitNucleonPosition               (void) const;
  virtual int            HitElectronPosition              (void) const;
  virtual int            FinalStatePrimaryLeptonPosition  (void) const;
  virtual int            FinalStateHadronicSystemPosition (void) const;

  // Number of GHepParticle occurences in GHEP

  virtual unsigned int NEntries (int pdg, GHepStatus_t ist, int start=0) const;
  virtual unsigned int NEntries (int pdg, int start=0) const;

  // Methods to switch on/off and ask for event record flags

  virtual TBits * EventFlags   (void) const { return fEventFlags; }
  virtual TBits * EventMask    (void) const { return fEventMask; }
  virtual bool    IsUnphysical (void) const { return (fEventFlags->CountBits()>0); }
  virtual bool    Accept       (void) const;

  // Methods to set/get the event weight and cross sections

  virtual double Weight         (void) const  { return fWeight;   }
  virtual double Probability    (void) const  { return fProb;     }
  virtual double XSec           (void) const  { return fXSec;     }
  virtual double DiffXSec       (void) const  { return fDiffXSec; }
  virtual KinePhaseSpace_t DiffXSecVars  (void) const  { return fDiffXSecPhSp; }

  virtual void   SetWeight      (double wght) { fWeight   = (wght>0) ? wght : 0.; }
  virtual void   SetProbability (double prob) { fProb     = (prob>0) ? prob : 0.; }
  virtual void   SetXSec        (double xsec) { fXSec     = (xsec>0) ? xsec : 0.; }
  virtual void   SetDiffXSec    (double xsec, KinePhaseSpace_t ps)
  { fDiffXSecPhSp = ps;
    fDiffXSec = (xsec>0) ? xsec : 0.;
  }

  // Set/get event vertex in detector coordinate system

  virtual TLorentzVector * Vertex (void) const { return fVtx; }

  virtual void SetVertex (double x, double y, double z, double t);
  virtual void SetVertex (const TLorentzVector & vtx);

  // Common event record operations

  virtual void Copy        (const GHepRecord & record);
  virtual void Clear       (Option_t * opt="");
  virtual void ResetRecord (void);
  virtual void CompactifyDaughterLists     (void);
  virtual void RemoveIntermediateParticles (void);

  // Set mask
  void SetUnphysEventMask(const TBits & mask);

  // Set/Get print level
  static void SetPrintLevel(int print_level);
  static int  GetPrintLevel();

  // Methods & operators to print the record

  void Print (ostream & stream) const;
  friend ostream & operator << (ostream & stream, const GHepRecord & event);

protected:

  // Attached interaction
  Interaction * fInteraction; ///< attached summary information

  // Vertex position
  TLorentzVector * fVtx;  ///< vertex in the detector coordinate system

  // Flags (and user-specified mask) for the generated event
  TBits * fEventFlags;    ///< event flags indicating various pathologies or an unphysical event
  TBits * fEventMask;     ///< an input bit-field mask allowing one to ignore bits set in fEventFlags

  // Event weight, probability and cross-sections
  double           fWeight;         ///< event weight
  double           fProb;           ///< event probability (for given flux neutrino and density-weighted path-length for target element)
  double           fXSec;           ///< cross section for selected event
  double           fDiffXSec;       ///< differential cross section for selected event kinematics
  KinePhaseSpace_t fDiffXSecPhSp;   ///< specifies which differential cross-section (dsig/dQ2, dsig/dQ2dW, dsig/dxdy,...)

  // Utility methods
  void InitRecord  (void);
  void CleanRecord (void);

  // Methods used by the daughter list compactifier
  virtual void UpdateDaughterLists    (void);
  virtual bool HasCompactDaughterList (int pos);
  virtual void SwapParticles          (int i, int j);
  virtual void FinalizeDaughterLists  (void);
  virtual int  FirstNonInitStateEntry (void);

  //
  static int fPrintLevel; //! print-level flag, see GHepRecord::Print()

private:

ClassDef(GHepRecord, 2)

};

}      // genie namespace

#endif // _GHEP_RECORD_H_
//____________________________________________________________________________
/*!

\class    genie::GHepRecordHistory

\brief    Holds the history of the GHEP event record as it being modified by
          the processing steps of an event generation thread.
          The event record history can be used to step back in the generation
          sequence if a processing step is to be re-run (this the GENIE event
          generation framework equivalent of an 'Undo')

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  September 23, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org      
*/
//____________________________________________________________________________

#ifndef _GHEP_RECORD_HISTORY_H_
#define _GHEP_RECORD_HISTORY_H_

#include <map>
#include <string>
#include <ostream>

using std::map;
using std::string;
using std::ostream;

namespace genie {

class GHepRecordHistory;
class GHepRecord;

ostream & operator << (ostream & stream, const GHepRecordHistory & history);

class GHepRecordHistory : public map<int, GHepRecord*> {

public :

  GHepRecordHistory();
  GHepRecordHistory(const GHepRecordHistory & history);
  ~GHepRecordHistory();

  void AddSnapshot        (int step, GHepRecord * r);
  void PurgeHistory       (void);
  void PurgeRecentHistory (int start_step);
  void ReadFlags          (void);

  void Copy  (const GHepRecordHistory & history);
  void Print (ostream & stream) const;

  friend ostream & operator << (ostream & stream, const GHepRecordHistory & history);

private:

  bool fEnabledFull;          ///< keep the full GHEP record history
  bool fEnabledBootstrapStep; ///< keep only the record that bootsrapped the generation cycle
};

}      // genie namespace

#endif // _GHEP_RECORD_HISTORY_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::ghep

\brief      GHEP event record utilities

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    Nov 30, 2008

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _GHEP_UTILS_H_
#define _GHEP_UTILS_H_

namespace genie {

class GHepRecord;

namespace utils {
namespace ghep  {

  int NeutReactionCode   (const GHepRecord * evrec);
  int NuanceReactionCode (const GHepRecord * evrec);

} // ghep  namespace
} // utils namespace
} // genie namespace

#endif // _GHEP_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::GHepVirtualList

\brief    A GHepVirtualList is a 'virtual' collection of GHepParticles.
          Is virtual because it does not own but only points to GHepParticles
          owned by the generated GHepRecord.
          Use it if in your event generation algorithm you need to define & use
          a GHepRecord subset (without duplicating the GHepParticle entries)
          All 'named' lists are managed by the GHepVirtualListFolder singleton
          and get cleared after the generation of each event is completed.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 16, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _GHEP_VIRTUAL_LIST_H_
#define _GHEP_VIRTUAL_LIST_H_

#include <TClonesArray.h>

class TLorentzVector;

namespace genie {

class GHepParticle;

class GHepVirtualList : public TClonesArray {

public :

  GHepVirtualList();
  GHepVirtualList(int size);
  GHepVirtualList(const GHepVirtualList & vlist);
  ~GHepVirtualList();

private :

ClassDef(GHepVirtualList, 1)

};

}      // genie namespace

#endif // _GHEP_VIRTUAL_LIST_H_
//____________________________________________________________________________
/*!

\class    genie::GHepVirtualListFolder

\brief    A singleton class to manage all named GHepVirtualLists

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  July 16, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _GHEP_VIRTUAL_LIST_FOLDER_H_
#define _GHEP_VIRTUAL_LIST_FOLDER_H_

#include <map>
#include <string>

using std::map;
using std::string;

namespace genie {

class GHepParticle;
class GHepVirtualList;

class GHepVirtualListFolder
{
public:

  static GHepVirtualListFolder * Instance(void);

  void              AddToVirtualList  (string listname, GHepParticle * p);
  bool              VirtualListExists (string listname);
  void              RemoveList        (string listname);
  void              Clear             (void);
  GHepVirtualList * VirtualList       (string listname);

private:

  GHepVirtualListFolder();
  GHepVirtualListFolder(const GHepVirtualListFolder & config_pool);
  virtual ~GHepVirtualListFolder();

  static GHepVirtualListFolder * fInstance;

  map<string, GHepVirtualList *> fVirtualListMap;

  void AddVirtualList(string listname);

  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (GHepVirtualListFolder::fInstance !=0) {
            delete GHepVirtualListFolder::fInstance;
            GHepVirtualListFolder::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace

#endif // _GHEP_VIRTUAL_LIST_FOLDER_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::GHepParticle", payloadCode, "@",
"genie::GHepRecord", payloadCode, "@",
"genie::GHepRecordHistory", payloadCode, "@",
"genie::GHepVirtualList", payloadCode, "@",
"genie::GHepVirtualListFolder", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGFwGHEP",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGFwGHEP_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGFwGHEP_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGFwGHEP() {
  TriggerDictionaryInitialization_libGFwGHEP_Impl();
}
