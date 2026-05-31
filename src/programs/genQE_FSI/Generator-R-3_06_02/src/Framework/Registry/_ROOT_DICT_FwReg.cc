// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_FwReg
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
#include "Registry.h"
#include "RegistryItem.h"
#include "RegistryItemTypeDef.h"

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
            instance("genie", 0 /*version*/, "RegistryItemTypeId.h", 25,
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
   static TClass *geniecLcLRegistryItemI_Dictionary();
   static void geniecLcLRegistryItemI_TClassManip(TClass*);
   static void delete_geniecLcLRegistryItemI(void *p);
   static void deleteArray_geniecLcLRegistryItemI(void *p);
   static void destruct_geniecLcLRegistryItemI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RegistryItemI*)
   {
      ::genie::RegistryItemI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RegistryItemI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RegistryItemI", "RegistryItemI.h", 29,
                  typeid(::genie::RegistryItemI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistryItemI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RegistryItemI) );
      instance.SetDelete(&delete_geniecLcLRegistryItemI);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistryItemI);
      instance.SetDestructor(&destruct_geniecLcLRegistryItemI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RegistryItemI*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RegistryItemI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItemI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistryItemI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItemI*>(nullptr))->GetClass();
      geniecLcLRegistryItemI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistryItemI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RgAlg_Dictionary();
   static void RgAlg_TClassManip(TClass*);
   static void *new_RgAlg(void *p = nullptr);
   static void *newArray_RgAlg(Long_t size, void *p);
   static void delete_RgAlg(void *p);
   static void deleteArray_RgAlg(void *p);
   static void destruct_RgAlg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RgAlg*)
   {
      ::RgAlg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RgAlg));
      static ::ROOT::TGenericClassInfo 
         instance("RgAlg", "RegistryItemTypeDef.h", 43,
                  typeid(::RgAlg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RgAlg_Dictionary, isa_proxy, 4,
                  sizeof(::RgAlg) );
      instance.SetNew(&new_RgAlg);
      instance.SetNewArray(&newArray_RgAlg);
      instance.SetDelete(&delete_RgAlg);
      instance.SetDeleteArray(&deleteArray_RgAlg);
      instance.SetDestructor(&destruct_RgAlg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RgAlg*)
   {
      return GenerateInitInstanceLocal(static_cast<::RgAlg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RgAlg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RgAlg_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RgAlg*>(nullptr))->GetClass();
      RgAlg_TClassManip(theClass);
   return theClass;
   }

   static void RgAlg_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRegistryItemlETTreemUgR_Dictionary();
   static void geniecLcLRegistryItemlETTreemUgR_TClassManip(TClass*);
   static void *new_geniecLcLRegistryItemlETTreemUgR(void *p = nullptr);
   static void *newArray_geniecLcLRegistryItemlETTreemUgR(Long_t size, void *p);
   static void delete_geniecLcLRegistryItemlETTreemUgR(void *p);
   static void deleteArray_geniecLcLRegistryItemlETTreemUgR(void *p);
   static void destruct_geniecLcLRegistryItemlETTreemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RegistryItem<TTree*>*)
   {
      ::genie::RegistryItem<TTree*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RegistryItem<TTree*>));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RegistryItem<TTree*>", "RegistryItem.h", 36,
                  typeid(::genie::RegistryItem<TTree*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistryItemlETTreemUgR_Dictionary, isa_proxy, 4,
                  sizeof(::genie::RegistryItem<TTree*>) );
      instance.SetNew(&new_geniecLcLRegistryItemlETTreemUgR);
      instance.SetNewArray(&newArray_geniecLcLRegistryItemlETTreemUgR);
      instance.SetDelete(&delete_geniecLcLRegistryItemlETTreemUgR);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistryItemlETTreemUgR);
      instance.SetDestructor(&destruct_geniecLcLRegistryItemlETTreemUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("genie::RegistryItem<TTree*>","genie::RegistryItem<RgTree>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RegistryItem<TTree*>*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RegistryItem<TTree*>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<TTree*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistryItemlETTreemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<TTree*>*>(nullptr))->GetClass();
      geniecLcLRegistryItemlETTreemUgR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistryItemlETTreemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRegistryItemlETH2FmUgR_Dictionary();
   static void geniecLcLRegistryItemlETH2FmUgR_TClassManip(TClass*);
   static void *new_geniecLcLRegistryItemlETH2FmUgR(void *p = nullptr);
   static void *newArray_geniecLcLRegistryItemlETH2FmUgR(Long_t size, void *p);
   static void delete_geniecLcLRegistryItemlETH2FmUgR(void *p);
   static void deleteArray_geniecLcLRegistryItemlETH2FmUgR(void *p);
   static void destruct_geniecLcLRegistryItemlETH2FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RegistryItem<TH2F*>*)
   {
      ::genie::RegistryItem<TH2F*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RegistryItem<TH2F*>));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RegistryItem<TH2F*>", "RegistryItem.h", 36,
                  typeid(::genie::RegistryItem<TH2F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistryItemlETH2FmUgR_Dictionary, isa_proxy, 4,
                  sizeof(::genie::RegistryItem<TH2F*>) );
      instance.SetNew(&new_geniecLcLRegistryItemlETH2FmUgR);
      instance.SetNewArray(&newArray_geniecLcLRegistryItemlETH2FmUgR);
      instance.SetDelete(&delete_geniecLcLRegistryItemlETH2FmUgR);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistryItemlETH2FmUgR);
      instance.SetDestructor(&destruct_geniecLcLRegistryItemlETH2FmUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("genie::RegistryItem<TH2F*>","genie::RegistryItem<RgH2F>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RegistryItem<TH2F*>*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RegistryItem<TH2F*>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<TH2F*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistryItemlETH2FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<TH2F*>*>(nullptr))->GetClass();
      geniecLcLRegistryItemlETH2FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistryItemlETH2FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRegistryItemlETH1FmUgR_Dictionary();
   static void geniecLcLRegistryItemlETH1FmUgR_TClassManip(TClass*);
   static void *new_geniecLcLRegistryItemlETH1FmUgR(void *p = nullptr);
   static void *newArray_geniecLcLRegistryItemlETH1FmUgR(Long_t size, void *p);
   static void delete_geniecLcLRegistryItemlETH1FmUgR(void *p);
   static void deleteArray_geniecLcLRegistryItemlETH1FmUgR(void *p);
   static void destruct_geniecLcLRegistryItemlETH1FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RegistryItem<TH1F*>*)
   {
      ::genie::RegistryItem<TH1F*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RegistryItem<TH1F*>));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RegistryItem<TH1F*>", "RegistryItem.h", 36,
                  typeid(::genie::RegistryItem<TH1F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistryItemlETH1FmUgR_Dictionary, isa_proxy, 4,
                  sizeof(::genie::RegistryItem<TH1F*>) );
      instance.SetNew(&new_geniecLcLRegistryItemlETH1FmUgR);
      instance.SetNewArray(&newArray_geniecLcLRegistryItemlETH1FmUgR);
      instance.SetDelete(&delete_geniecLcLRegistryItemlETH1FmUgR);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistryItemlETH1FmUgR);
      instance.SetDestructor(&destruct_geniecLcLRegistryItemlETH1FmUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("genie::RegistryItem<TH1F*>","genie::RegistryItem<RgH1F>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RegistryItem<TH1F*>*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RegistryItem<TH1F*>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<TH1F*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistryItemlETH1FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<TH1F*>*>(nullptr))->GetClass();
      geniecLcLRegistryItemlETH1FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistryItemlETH1FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRegistryItemlERgAlggR_Dictionary();
   static void geniecLcLRegistryItemlERgAlggR_TClassManip(TClass*);
   static void *new_geniecLcLRegistryItemlERgAlggR(void *p = nullptr);
   static void *newArray_geniecLcLRegistryItemlERgAlggR(Long_t size, void *p);
   static void delete_geniecLcLRegistryItemlERgAlggR(void *p);
   static void deleteArray_geniecLcLRegistryItemlERgAlggR(void *p);
   static void destruct_geniecLcLRegistryItemlERgAlggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RegistryItem<RgAlg>*)
   {
      ::genie::RegistryItem<RgAlg> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RegistryItem<RgAlg>));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RegistryItem<RgAlg>", "RegistryItem.h", 36,
                  typeid(::genie::RegistryItem<RgAlg>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistryItemlERgAlggR_Dictionary, isa_proxy, 4,
                  sizeof(::genie::RegistryItem<RgAlg>) );
      instance.SetNew(&new_geniecLcLRegistryItemlERgAlggR);
      instance.SetNewArray(&newArray_geniecLcLRegistryItemlERgAlggR);
      instance.SetDelete(&delete_geniecLcLRegistryItemlERgAlggR);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistryItemlERgAlggR);
      instance.SetDestructor(&destruct_geniecLcLRegistryItemlERgAlggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RegistryItem<RgAlg>*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RegistryItem<RgAlg>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<RgAlg>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistryItemlERgAlggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<RgAlg>*>(nullptr))->GetClass();
      geniecLcLRegistryItemlERgAlggR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistryItemlERgAlggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRegistryItemlEstringgR_Dictionary();
   static void geniecLcLRegistryItemlEstringgR_TClassManip(TClass*);
   static void *new_geniecLcLRegistryItemlEstringgR(void *p = nullptr);
   static void *newArray_geniecLcLRegistryItemlEstringgR(Long_t size, void *p);
   static void delete_geniecLcLRegistryItemlEstringgR(void *p);
   static void deleteArray_geniecLcLRegistryItemlEstringgR(void *p);
   static void destruct_geniecLcLRegistryItemlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RegistryItem<string>*)
   {
      ::genie::RegistryItem<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RegistryItem<string>));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RegistryItem<string>", "RegistryItem.h", 36,
                  typeid(::genie::RegistryItem<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistryItemlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(::genie::RegistryItem<string>) );
      instance.SetNew(&new_geniecLcLRegistryItemlEstringgR);
      instance.SetNewArray(&newArray_geniecLcLRegistryItemlEstringgR);
      instance.SetDelete(&delete_geniecLcLRegistryItemlEstringgR);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistryItemlEstringgR);
      instance.SetDestructor(&destruct_geniecLcLRegistryItemlEstringgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("genie::RegistryItem<string>","genie::RegistryItem<RgStr>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("genie::RegistryItem<string>","genie::RegistryItem<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RegistryItem<string>*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RegistryItem<string>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistryItemlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<string>*>(nullptr))->GetClass();
      geniecLcLRegistryItemlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistryItemlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRegistryItemlEdoublegR_Dictionary();
   static void geniecLcLRegistryItemlEdoublegR_TClassManip(TClass*);
   static void *new_geniecLcLRegistryItemlEdoublegR(void *p = nullptr);
   static void *newArray_geniecLcLRegistryItemlEdoublegR(Long_t size, void *p);
   static void delete_geniecLcLRegistryItemlEdoublegR(void *p);
   static void deleteArray_geniecLcLRegistryItemlEdoublegR(void *p);
   static void destruct_geniecLcLRegistryItemlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RegistryItem<double>*)
   {
      ::genie::RegistryItem<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RegistryItem<double>));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RegistryItem<double>", "RegistryItem.h", 36,
                  typeid(::genie::RegistryItem<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistryItemlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::genie::RegistryItem<double>) );
      instance.SetNew(&new_geniecLcLRegistryItemlEdoublegR);
      instance.SetNewArray(&newArray_geniecLcLRegistryItemlEdoublegR);
      instance.SetDelete(&delete_geniecLcLRegistryItemlEdoublegR);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistryItemlEdoublegR);
      instance.SetDestructor(&destruct_geniecLcLRegistryItemlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("genie::RegistryItem<double>","genie::RegistryItem<RgDbl>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RegistryItem<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RegistryItem<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistryItemlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<double>*>(nullptr))->GetClass();
      geniecLcLRegistryItemlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistryItemlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRegistryItemlEintgR_Dictionary();
   static void geniecLcLRegistryItemlEintgR_TClassManip(TClass*);
   static void *new_geniecLcLRegistryItemlEintgR(void *p = nullptr);
   static void *newArray_geniecLcLRegistryItemlEintgR(Long_t size, void *p);
   static void delete_geniecLcLRegistryItemlEintgR(void *p);
   static void deleteArray_geniecLcLRegistryItemlEintgR(void *p);
   static void destruct_geniecLcLRegistryItemlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RegistryItem<int>*)
   {
      ::genie::RegistryItem<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RegistryItem<int>));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RegistryItem<int>", "RegistryItem.h", 36,
                  typeid(::genie::RegistryItem<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistryItemlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::genie::RegistryItem<int>) );
      instance.SetNew(&new_geniecLcLRegistryItemlEintgR);
      instance.SetNewArray(&newArray_geniecLcLRegistryItemlEintgR);
      instance.SetDelete(&delete_geniecLcLRegistryItemlEintgR);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistryItemlEintgR);
      instance.SetDestructor(&destruct_geniecLcLRegistryItemlEintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("genie::RegistryItem<int>","genie::RegistryItem<RgInt>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RegistryItem<int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RegistryItem<int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistryItemlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<int>*>(nullptr))->GetClass();
      geniecLcLRegistryItemlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistryItemlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRegistryItemlEboolgR_Dictionary();
   static void geniecLcLRegistryItemlEboolgR_TClassManip(TClass*);
   static void *new_geniecLcLRegistryItemlEboolgR(void *p = nullptr);
   static void *newArray_geniecLcLRegistryItemlEboolgR(Long_t size, void *p);
   static void delete_geniecLcLRegistryItemlEboolgR(void *p);
   static void deleteArray_geniecLcLRegistryItemlEboolgR(void *p);
   static void destruct_geniecLcLRegistryItemlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RegistryItem<bool>*)
   {
      ::genie::RegistryItem<bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RegistryItem<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RegistryItem<bool>", "RegistryItem.h", 36,
                  typeid(::genie::RegistryItem<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistryItemlEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::genie::RegistryItem<bool>) );
      instance.SetNew(&new_geniecLcLRegistryItemlEboolgR);
      instance.SetNewArray(&newArray_geniecLcLRegistryItemlEboolgR);
      instance.SetDelete(&delete_geniecLcLRegistryItemlEboolgR);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistryItemlEboolgR);
      instance.SetDestructor(&destruct_geniecLcLRegistryItemlEboolgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("genie::RegistryItem<bool>","genie::RegistryItem<RgBool>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RegistryItem<bool>*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RegistryItem<bool>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistryItemlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RegistryItem<bool>*>(nullptr))->GetClass();
      geniecLcLRegistryItemlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistryItemlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRegistry_Dictionary();
   static void geniecLcLRegistry_TClassManip(TClass*);
   static void *new_geniecLcLRegistry(void *p = nullptr);
   static void *newArray_geniecLcLRegistry(Long_t size, void *p);
   static void delete_geniecLcLRegistry(void *p);
   static void deleteArray_geniecLcLRegistry(void *p);
   static void destruct_geniecLcLRegistry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Registry*)
   {
      ::genie::Registry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Registry));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Registry", "", 67,
                  typeid(::genie::Registry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRegistry_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Registry) );
      instance.SetNew(&new_geniecLcLRegistry);
      instance.SetNewArray(&newArray_geniecLcLRegistry);
      instance.SetDelete(&delete_geniecLcLRegistry);
      instance.SetDeleteArray(&deleteArray_geniecLcLRegistry);
      instance.SetDestructor(&destruct_geniecLcLRegistry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Registry*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Registry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Registry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRegistry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Registry*>(nullptr))->GetClass();
      geniecLcLRegistry_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRegistry_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLRegistryItemI(void *p) {
      delete (static_cast<::genie::RegistryItemI*>(p));
   }
   static void deleteArray_geniecLcLRegistryItemI(void *p) {
      delete [] (static_cast<::genie::RegistryItemI*>(p));
   }
   static void destruct_geniecLcLRegistryItemI(void *p) {
      typedef ::genie::RegistryItemI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RegistryItemI

namespace ROOT {
   // Wrappers around operator new
   static void *new_RgAlg(void *p) {
      return  p ? new(p) ::RgAlg : new ::RgAlg;
   }
   static void *newArray_RgAlg(Long_t nElements, void *p) {
      return p ? new(p) ::RgAlg[nElements] : new ::RgAlg[nElements];
   }
   // Wrapper around operator delete
   static void delete_RgAlg(void *p) {
      delete (static_cast<::RgAlg*>(p));
   }
   static void deleteArray_RgAlg(void *p) {
      delete [] (static_cast<::RgAlg*>(p));
   }
   static void destruct_RgAlg(void *p) {
      typedef ::RgAlg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RgAlg

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRegistryItemlETTreemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<TTree*> : new ::genie::RegistryItem<TTree*>;
   }
   static void *newArray_geniecLcLRegistryItemlETTreemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<TTree*>[nElements] : new ::genie::RegistryItem<TTree*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRegistryItemlETTreemUgR(void *p) {
      delete (static_cast<::genie::RegistryItem<TTree*>*>(p));
   }
   static void deleteArray_geniecLcLRegistryItemlETTreemUgR(void *p) {
      delete [] (static_cast<::genie::RegistryItem<TTree*>*>(p));
   }
   static void destruct_geniecLcLRegistryItemlETTreemUgR(void *p) {
      typedef ::genie::RegistryItem<TTree*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RegistryItem<TTree*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRegistryItemlETH2FmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<TH2F*> : new ::genie::RegistryItem<TH2F*>;
   }
   static void *newArray_geniecLcLRegistryItemlETH2FmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<TH2F*>[nElements] : new ::genie::RegistryItem<TH2F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRegistryItemlETH2FmUgR(void *p) {
      delete (static_cast<::genie::RegistryItem<TH2F*>*>(p));
   }
   static void deleteArray_geniecLcLRegistryItemlETH2FmUgR(void *p) {
      delete [] (static_cast<::genie::RegistryItem<TH2F*>*>(p));
   }
   static void destruct_geniecLcLRegistryItemlETH2FmUgR(void *p) {
      typedef ::genie::RegistryItem<TH2F*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RegistryItem<TH2F*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRegistryItemlETH1FmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<TH1F*> : new ::genie::RegistryItem<TH1F*>;
   }
   static void *newArray_geniecLcLRegistryItemlETH1FmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<TH1F*>[nElements] : new ::genie::RegistryItem<TH1F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRegistryItemlETH1FmUgR(void *p) {
      delete (static_cast<::genie::RegistryItem<TH1F*>*>(p));
   }
   static void deleteArray_geniecLcLRegistryItemlETH1FmUgR(void *p) {
      delete [] (static_cast<::genie::RegistryItem<TH1F*>*>(p));
   }
   static void destruct_geniecLcLRegistryItemlETH1FmUgR(void *p) {
      typedef ::genie::RegistryItem<TH1F*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RegistryItem<TH1F*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRegistryItemlERgAlggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<RgAlg> : new ::genie::RegistryItem<RgAlg>;
   }
   static void *newArray_geniecLcLRegistryItemlERgAlggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<RgAlg>[nElements] : new ::genie::RegistryItem<RgAlg>[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRegistryItemlERgAlggR(void *p) {
      delete (static_cast<::genie::RegistryItem<RgAlg>*>(p));
   }
   static void deleteArray_geniecLcLRegistryItemlERgAlggR(void *p) {
      delete [] (static_cast<::genie::RegistryItem<RgAlg>*>(p));
   }
   static void destruct_geniecLcLRegistryItemlERgAlggR(void *p) {
      typedef ::genie::RegistryItem<RgAlg> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RegistryItem<RgAlg>

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRegistryItemlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<string> : new ::genie::RegistryItem<string>;
   }
   static void *newArray_geniecLcLRegistryItemlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<string>[nElements] : new ::genie::RegistryItem<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRegistryItemlEstringgR(void *p) {
      delete (static_cast<::genie::RegistryItem<string>*>(p));
   }
   static void deleteArray_geniecLcLRegistryItemlEstringgR(void *p) {
      delete [] (static_cast<::genie::RegistryItem<string>*>(p));
   }
   static void destruct_geniecLcLRegistryItemlEstringgR(void *p) {
      typedef ::genie::RegistryItem<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RegistryItem<string>

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRegistryItemlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<double> : new ::genie::RegistryItem<double>;
   }
   static void *newArray_geniecLcLRegistryItemlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<double>[nElements] : new ::genie::RegistryItem<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRegistryItemlEdoublegR(void *p) {
      delete (static_cast<::genie::RegistryItem<double>*>(p));
   }
   static void deleteArray_geniecLcLRegistryItemlEdoublegR(void *p) {
      delete [] (static_cast<::genie::RegistryItem<double>*>(p));
   }
   static void destruct_geniecLcLRegistryItemlEdoublegR(void *p) {
      typedef ::genie::RegistryItem<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RegistryItem<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRegistryItemlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<int> : new ::genie::RegistryItem<int>;
   }
   static void *newArray_geniecLcLRegistryItemlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<int>[nElements] : new ::genie::RegistryItem<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRegistryItemlEintgR(void *p) {
      delete (static_cast<::genie::RegistryItem<int>*>(p));
   }
   static void deleteArray_geniecLcLRegistryItemlEintgR(void *p) {
      delete [] (static_cast<::genie::RegistryItem<int>*>(p));
   }
   static void destruct_geniecLcLRegistryItemlEintgR(void *p) {
      typedef ::genie::RegistryItem<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RegistryItem<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRegistryItemlEboolgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<bool> : new ::genie::RegistryItem<bool>;
   }
   static void *newArray_geniecLcLRegistryItemlEboolgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::RegistryItem<bool>[nElements] : new ::genie::RegistryItem<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRegistryItemlEboolgR(void *p) {
      delete (static_cast<::genie::RegistryItem<bool>*>(p));
   }
   static void deleteArray_geniecLcLRegistryItemlEboolgR(void *p) {
      delete [] (static_cast<::genie::RegistryItem<bool>*>(p));
   }
   static void destruct_geniecLcLRegistryItemlEboolgR(void *p) {
      typedef ::genie::RegistryItem<bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::RegistryItem<bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRegistry(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Registry : new ::genie::Registry;
   }
   static void *newArray_geniecLcLRegistry(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::Registry[nElements] : new ::genie::Registry[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRegistry(void *p) {
      delete (static_cast<::genie::Registry*>(p));
   }
   static void deleteArray_geniecLcLRegistry(void *p) {
      delete [] (static_cast<::genie::Registry*>(p));
   }
   static void destruct_geniecLcLRegistry(void *p) {
      typedef ::genie::Registry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Registry

namespace ROOT {
   static TClass *vectorlEgeniecLcLRegistrygR_Dictionary();
   static void vectorlEgeniecLcLRegistrygR_TClassManip(TClass*);
   static void *new_vectorlEgeniecLcLRegistrygR(void *p = nullptr);
   static void *newArray_vectorlEgeniecLcLRegistrygR(Long_t size, void *p);
   static void delete_vectorlEgeniecLcLRegistrygR(void *p);
   static void deleteArray_vectorlEgeniecLcLRegistrygR(void *p);
   static void destruct_vectorlEgeniecLcLRegistrygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<genie::Registry>*)
   {
      vector<genie::Registry> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<genie::Registry>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<genie::Registry>", -2, "vector", 383,
                  typeid(vector<genie::Registry>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgeniecLcLRegistrygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<genie::Registry>) );
      instance.SetNew(&new_vectorlEgeniecLcLRegistrygR);
      instance.SetNewArray(&newArray_vectorlEgeniecLcLRegistrygR);
      instance.SetDelete(&delete_vectorlEgeniecLcLRegistrygR);
      instance.SetDeleteArray(&deleteArray_vectorlEgeniecLcLRegistrygR);
      instance.SetDestructor(&destruct_vectorlEgeniecLcLRegistrygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<genie::Registry> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<genie::Registry>","std::__1::vector<genie::Registry, std::__1::allocator<genie::Registry>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<genie::Registry>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgeniecLcLRegistrygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<genie::Registry>*>(nullptr))->GetClass();
      vectorlEgeniecLcLRegistrygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgeniecLcLRegistrygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgeniecLcLRegistrygR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<genie::Registry> : new vector<genie::Registry>;
   }
   static void *newArray_vectorlEgeniecLcLRegistrygR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<genie::Registry>[nElements] : new vector<genie::Registry>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgeniecLcLRegistrygR(void *p) {
      delete (static_cast<vector<genie::Registry>*>(p));
   }
   static void deleteArray_vectorlEgeniecLcLRegistrygR(void *p) {
      delete [] (static_cast<vector<genie::Registry>*>(p));
   }
   static void destruct_vectorlEgeniecLcLRegistrygR(void *p) {
      typedef vector<genie::Registry> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<genie::Registry>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGFwReg() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGFwReg) = RecordReadRules_libGFwReg();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGFwReg));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGFwReg_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Framework/Registry",
"GENIE",
"GENIE/Framework/Registry",
"../include",
"../include/GENIE",
"../include/GENIE/Framework/Registry",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Framework/Registry/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGFwReg dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  Registry;}
namespace std{inline namespace __1{template <class _Tp> class  __attribute__((annotate("$clingAutoload$__fwd/string.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}}
namespace genie{class  __attribute__((annotate("$clingAutoload$Framework/Registry/RegistryItemI.h")))  __attribute__((annotate("$clingAutoload$Framework/Registry/RegistryItem.h")))  RegistryItemI;}
class  __attribute__((annotate("$clingAutoload$Framework/Registry/RegistryItemTypeDef.h")))  __attribute__((annotate("$clingAutoload$Framework/Registry/RegistryItem.h")))  RgAlg;
class  __attribute__((annotate("$clingAutoload$TTree.h")))  __attribute__((annotate("$clingAutoload$Framework/Registry/RegistryItem.h")))  TTree;
namespace genie{template <typename T> class  __attribute__((annotate("$clingAutoload$Framework/Registry/RegistryItem.h")))  RegistryItem;
}
class  __attribute__((annotate("$clingAutoload$TH2.h")))  __attribute__((annotate("$clingAutoload$Framework/Registry/RegistryItem.h")))  TH2F;
class  __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$Framework/Registry/RegistryItem.h")))  TH1F;
namespace std{inline namespace __1{template <class _CharT> struct  __attribute__((annotate("$clingAutoload$__string/char_traits.h")))  __attribute__((annotate("$clingAutoload$string")))  char_traits;
}}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGFwReg dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::Registry

\brief    A registry. Provides the container for algorithm configuration
          parameters.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 04, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _REGISTRY_H_
#define _REGISTRY_H_

#include <map>
#include <vector>
#include <string>
#include <iostream>

#include "Framework/Registry/RegistryItem.h"
#include "Framework/Registry/RegistryItemTypeDef.h"

class TH1F;
class TH2F;
class TTree;
class TFolder;

using std::map;
using std::vector;
using std::pair;
using std::string;
using std::ostream;

namespace genie {

// Type definitions
//
typedef map <RgKey, RegistryItemI *>                 RgIMap;
typedef pair<RgKey, RegistryItemI *>                 RgIMapPair;
typedef map <RgKey, RegistryItemI *>::size_type      RgIMapSizeType;
typedef map <RgKey, RegistryItemI *>::iterator       RgIMapIter;
typedef map <RgKey, RegistryItemI *>::const_iterator RgIMapConstIter;
typedef vector<RgKey>                                RgKeyList;

// Templated utility methods to set/get registry items
//
class Registry;
template<class T>
  void SetRegistryItem(Registry * r, RgKey key, T item);
template<class T>
  T GetValueOrUseDefault(
     Registry * r, RgKey key, T def, bool set_def=true);

//
//
ostream & operator << (ostream & stream, const Registry & registry);

class Registry {

public:
  // Ctor's & dtor
  //
  Registry();
  Registry(string name, bool isReadOnly = true);
  Registry(const Registry &);
  virtual ~Registry();

  // Overloaded registry operators (<<, (), = , +=)
  //
  friend ostream & operator << (ostream & stream, const Registry & registry);

  Registry & operator =  (const Registry & reg);
  Registry & operator += (const Registry & reg);

  void operator () (RgKey key,  int          item);
  void operator () (RgKey key,  bool         item);
  void operator () (RgKey key,  double       item);
  void operator () (RgKey key,  const char * item);
  void operator () (RgKey key,  string       item);

  // Registry & registry item locks
  //
  void   Lock                (void);            ///< locks the registry
  void   UnLock              (void);            ///< unlocks the registry (doesn't unlock items)
  bool   IsLocked            (void) const;      ///< checks registry lock
  void   InhibitItemLocks    (void);            ///< override individual item locks
  void   RestoreItemLocks    (void);            ///< restore individual item locks
  bool   ItemLocksAreActive  (void) const;      ///< check if item locks are active
  void   LockItem            (RgKey key);       ///< locks the registry item
  void   UnLockItem          (RgKey key);       ///< unlocks the registry item
  bool   ItemIsLocked        (RgKey key) const; ///< check item lock
  bool   ItemIsLocal         (RgKey key) const; ///< local or global?
  void   OverrideGlobalDef   (RgKey key);       ///< let item override global default   (i.e. a 'local'  item)
  void   LinkToGlobalDef     (RgKey key);       ///< link its value to a global default (i.e. a 'global' item)

  // Methods to set/retrieve Registry values
  //
  void   Set (RgIMapPair entry);
  void   Set (RgKey key, RgBool  item);
  void   Set (RgKey key, RgInt   item);
  void   Set (RgKey key, RgDbl   item);
  void   Set (RgKey key, RgStr   item);
  void   Set (RgKey key, RgAlg   item);
  void   Set (RgKey key, RgCChAr item);
  void   Set (RgKey key, RgH1F   item);
  void   Set (RgKey key, RgH2F   item);
  void   Set (RgKey key, RgTree  item);

  void   Get (RgKey key, const RegistryItemI * & item) const;
  void   Get (RgKey key, RgBool & item) const;
  void   Get (RgKey key, RgInt &  item) const;
  void   Get (RgKey key, RgDbl &  item) const;
  void   Get (RgKey key, RgStr &  item) const;
  void   Get (RgKey key, RgAlg &  item) const;
  void   Get (RgKey key, RgH1F &  item) const;
  void   Get (RgKey key, RgH2F &  item) const;
  void   Get (RgKey key, RgTree & item) const;

  RgBool GetBool      (RgKey key) const;
  RgInt  GetInt       (RgKey key) const;
  RgDbl  GetDouble    (RgKey key) const;
  RgStr  GetString    (RgKey key) const;
  RgAlg  GetAlg       (RgKey key) const;
  RgH1F  GetH1F       (RgKey key) const;
  RgH2F  GetH2F       (RgKey key) const;
  RgTree GetTree      (RgKey key) const;

  RgBool GetBoolDef   (RgKey key, RgBool def_opt, bool set_def=true);
  RgInt  GetIntDef    (RgKey key, RgInt  def_opt, bool set_def=true);
  RgDbl  GetDoubleDef (RgKey key, RgDbl  def_opt, bool set_def=true);
  RgStr  GetStringDef (RgKey key, RgStr  def_opt, bool set_def=true);
  RgAlg  GetAlgDef    (RgKey key, RgAlg  def_opt, bool set_def=true);

  RgIMapConstIter SafeFind  (RgKey key) const;

  int    NEntries     (void) const;                     ///< get number of items
  bool   Exists       (RgKey key) const;                ///< item with input key exists?
  bool   CanSetItem   (RgKey key) const;                ///< can I set the specifed item?
  bool   DeleteEntry  (RgKey key);                      ///< delete the spcified item
  void   SetName      (string name);                    ///< set the registry name
  string Name         (void) const;                     ///< get the registry name
  void   Print        (ostream & stream) const;         ///< print the registry to stream
  void   Copy         (const Registry &);               ///< copy the input registry
  void   Append       (const Registry &, RgKey pfx=""); ///< append the input registry. Entries already in the registry are not updated
  void   Merge        (const Registry &, RgKey pfx=""); ///< append the input registry. Entries already in the registry are updated
  void   Clear        (bool force = false);             ///< clear the registry
  void   Init         (void);                           ///< initialize the registry

  RgType_t  ItemType (RgKey key)      const;  ///< return item type
  RgKeyList FindKeys (RgKey key_part) const;  ///< create list with all keys containing 'key_part'

  // Access key->item map
  //
  const RgIMap & GetItemMap(void) const { return fRegistry; }

  // Convert to TFolder (this is the primary mechanism for saving the
  // GENIE configuration in a ROOT file, along with its generated events)
  //
  void CopyToFolder (TFolder * folder) const;

  // Assert the existence or registry items
  //
  void AssertExistence (RgKey key0) const;
  void AssertExistence (RgKey key0, RgKey key1) const;
  void AssertExistence (RgKey key0, RgKey key1, RgKey key2) const;

private:

  RegistryItemI * CloneRegistryItem( const RgKey & key ) const ;   ///< Properly clone a registry Item according to its type

  // Registry's private data members
  //
  string fName;              ///< registry's name
  bool   fIsReadOnly;        ///< is read only?
  bool   fInhibitItemLocks;  ///<
  RgIMap fRegistry;          ///< 'key' -> 'value' map
};

}        // genie namespace

#endif   // _REGISTRY_H_
//____________________________________________________________________________
/*!

\class    genie::RegistryItem

\brief    A templated concrete implementation of the RegistryItemI interface.
          Provides an arbitrary basic type (bool, int, double, string) value
          for RegistryI-type containers.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 06, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _REGISTRY_ITEM_H_
#define _REGISTRY_ITEM_H_

#include <map>
#include <string>
#include <ostream>

#include "Framework/Registry/RegistryItemI.h"
#include "Framework/Registry/RegistryItemTypeDef.h"

namespace genie {

template<typename T> class RegistryItem;
template<typename T>
  ostream & operator << (ostream & stream, const RegistryItem<T> & rec);

template<typename T> class RegistryItem : public RegistryItemI {

public:
  RegistryItem() { };
  RegistryItem(T item, bool locked=false, bool local=true);
  RegistryItem(const RegistryItem * ri);
  ~RegistryItem();

  RegistryItemI * Clone    (void) const;
  RgType_t        TypeInfo (void) const;
  const T &       Data     (void) const {  return fItem;       }
  bool            IsLocked (void) const {  return fIsLocked;   }
  void            Lock     (void)       {  fIsLocked = true;   }
  void            UnLock   (void)       {  fIsLocked = false;  }
  bool            IsLocal  (void) const {  return fIsLocal;    }
  void            SetLocal (bool isloc) {  fIsLocal  = isloc;  }

  void Print(ostream& stream) const;

  friend ostream & operator <<
              <T>(ostream & stream, const RegistryItem<T> & rec);

private:

  T    fItem;
  bool fIsLocked;
  bool fIsLocal;
};

}      // genie namespace

#endif // _REGISTRY_ITEM_H_
//____________________________________________________________________________
/*!

\class    genie::RegistryItemTypeDef

\brief    Definition of Registry item types

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  October 20, 2006

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _REGISTRY_ITEM_TYPE_DEF_H_
#define _REGISTRY_ITEM_TYPE_DEF_H_

#include <map>
#include <string>
#include <ostream>

#include <TH1F.h>
#include <TH2F.h>
#include <TTree.h>

using std::pair;
using std::string;
using std::ostream;

typedef string       RgKey;
typedef int          RgInt;
typedef bool         RgBool;
typedef double       RgDbl;
typedef string       RgStr;
typedef const char * RgCChAr;
typedef TH1F *       RgH1F;
typedef TH2F *       RgH2F;
typedef TTree *      RgTree;

class RgAlg {
public:
  RgAlg();
  RgAlg(string n, string c);
 ~RgAlg();
  friend ostream & operator << (ostream & stream, const RgAlg & alg);
  RgAlg &          operator =  (const RgAlg & alg);
  string  name;
  string  config;
};

#endif // _REGISTRY_ITEM_TYPE_DEF_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RgAlg", payloadCode, "@",
"genie::Registry", payloadCode, "@",
"genie::RegistryItem<RgAlg>", payloadCode, "@",
"genie::RegistryItem<RgBool>", payloadCode, "@",
"genie::RegistryItem<RgDbl>", payloadCode, "@",
"genie::RegistryItem<RgH1F>", payloadCode, "@",
"genie::RegistryItem<RgH2F>", payloadCode, "@",
"genie::RegistryItem<RgInt>", payloadCode, "@",
"genie::RegistryItem<RgStr>", payloadCode, "@",
"genie::RegistryItem<RgTree>", payloadCode, "@",
"genie::RegistryItem<TH1F*>", payloadCode, "@",
"genie::RegistryItem<TH2F*>", payloadCode, "@",
"genie::RegistryItem<TTree*>", payloadCode, "@",
"genie::RegistryItem<bool>", payloadCode, "@",
"genie::RegistryItem<double>", payloadCode, "@",
"genie::RegistryItem<int>", payloadCode, "@",
"genie::RegistryItem<string>", payloadCode, "@",
"genie::RegistryItemI", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGFwReg",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGFwReg_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGFwReg_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGFwReg() {
  TriggerDictionaryInitialization_libGFwReg_Impl();
}
