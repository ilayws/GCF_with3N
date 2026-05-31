// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_FwNum
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
#include "BLI2D.h"
#include "GSLUtils.h"
#include "IntegrationTools.h"
#include "Interpolator2D.h"
#include "MathUtils.h"
#include "RandomGen.h"
#include "Spline.h"

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
            instance("genie", 0 /*version*/, "", 25,
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
            instance("genie::utils::gsl", 0 /*version*/, "", 153,
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

namespace genie {
   namespace utils {
      namespace math {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLmath_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::math", 0 /*version*/, "", 306,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLmath_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLmath_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static void delete_geniecLcLBLI2DGrid(void *p);
   static void deleteArray_geniecLcLBLI2DGrid(void *p);
   static void destruct_geniecLcLBLI2DGrid(void *p);
   static void streamer_geniecLcLBLI2DGrid(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BLI2DGrid*)
   {
      ::genie::BLI2DGrid *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::BLI2DGrid >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::BLI2DGrid", ::genie::BLI2DGrid::Class_Version(), "", 27,
                  typeid(::genie::BLI2DGrid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::BLI2DGrid::Dictionary, isa_proxy, 16,
                  sizeof(::genie::BLI2DGrid) );
      instance.SetDelete(&delete_geniecLcLBLI2DGrid);
      instance.SetDeleteArray(&deleteArray_geniecLcLBLI2DGrid);
      instance.SetDestructor(&destruct_geniecLcLBLI2DGrid);
      instance.SetStreamerFunc(&streamer_geniecLcLBLI2DGrid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BLI2DGrid*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BLI2DGrid*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BLI2DGrid*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLBLI2DUnifGrid(void *p = nullptr);
   static void *newArray_geniecLcLBLI2DUnifGrid(Long_t size, void *p);
   static void delete_geniecLcLBLI2DUnifGrid(void *p);
   static void deleteArray_geniecLcLBLI2DUnifGrid(void *p);
   static void destruct_geniecLcLBLI2DUnifGrid(void *p);
   static void streamer_geniecLcLBLI2DUnifGrid(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BLI2DUnifGrid*)
   {
      ::genie::BLI2DUnifGrid *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::BLI2DUnifGrid >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::BLI2DUnifGrid", ::genie::BLI2DUnifGrid::Class_Version(), "", 77,
                  typeid(::genie::BLI2DUnifGrid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::BLI2DUnifGrid::Dictionary, isa_proxy, 16,
                  sizeof(::genie::BLI2DUnifGrid) );
      instance.SetNew(&new_geniecLcLBLI2DUnifGrid);
      instance.SetNewArray(&newArray_geniecLcLBLI2DUnifGrid);
      instance.SetDelete(&delete_geniecLcLBLI2DUnifGrid);
      instance.SetDeleteArray(&deleteArray_geniecLcLBLI2DUnifGrid);
      instance.SetDestructor(&destruct_geniecLcLBLI2DUnifGrid);
      instance.SetStreamerFunc(&streamer_geniecLcLBLI2DUnifGrid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BLI2DUnifGrid*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BLI2DUnifGrid*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BLI2DUnifGrid*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLBLI2DNonUnifGrid(void *p = nullptr);
   static void *newArray_geniecLcLBLI2DNonUnifGrid(Long_t size, void *p);
   static void delete_geniecLcLBLI2DNonUnifGrid(void *p);
   static void deleteArray_geniecLcLBLI2DNonUnifGrid(void *p);
   static void destruct_geniecLcLBLI2DNonUnifGrid(void *p);
   static void streamer_geniecLcLBLI2DNonUnifGrid(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BLI2DNonUnifGrid*)
   {
      ::genie::BLI2DNonUnifGrid *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::BLI2DNonUnifGrid >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::BLI2DNonUnifGrid", ::genie::BLI2DNonUnifGrid::Class_Version(), "", 101,
                  typeid(::genie::BLI2DNonUnifGrid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::BLI2DNonUnifGrid::Dictionary, isa_proxy, 16,
                  sizeof(::genie::BLI2DNonUnifGrid) );
      instance.SetNew(&new_geniecLcLBLI2DNonUnifGrid);
      instance.SetNewArray(&newArray_geniecLcLBLI2DNonUnifGrid);
      instance.SetDelete(&delete_geniecLcLBLI2DNonUnifGrid);
      instance.SetDeleteArray(&deleteArray_geniecLcLBLI2DNonUnifGrid);
      instance.SetDestructor(&destruct_geniecLcLBLI2DNonUnifGrid);
      instance.SetStreamerFunc(&streamer_geniecLcLBLI2DNonUnifGrid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BLI2DNonUnifGrid*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BLI2DNonUnifGrid*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BLI2DNonUnifGrid*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLInterpolator2D_Dictionary();
   static void geniecLcLInterpolator2D_TClassManip(TClass*);
   static void delete_geniecLcLInterpolator2D(void *p);
   static void deleteArray_geniecLcLInterpolator2D(void *p);
   static void destruct_geniecLcLInterpolator2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Interpolator2D*)
   {
      ::genie::Interpolator2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Interpolator2D));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Interpolator2D", "", 244,
                  typeid(::genie::Interpolator2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLInterpolator2D_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Interpolator2D) );
      instance.SetDelete(&delete_geniecLcLInterpolator2D);
      instance.SetDeleteArray(&deleteArray_geniecLcLInterpolator2D);
      instance.SetDestructor(&destruct_geniecLcLInterpolator2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Interpolator2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Interpolator2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Interpolator2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLInterpolator2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::Interpolator2D*>(nullptr))->GetClass();
      geniecLcLInterpolator2D_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLInterpolator2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRandomGen_Dictionary();
   static void geniecLcLRandomGen_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RandomGen*)
   {
      ::genie::RandomGen *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RandomGen));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RandomGen", "", 438,
                  typeid(::genie::RandomGen), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRandomGen_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RandomGen) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RandomGen*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::RandomGen*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::RandomGen*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRandomGen_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::RandomGen*>(nullptr))->GetClass();
      geniecLcLRandomGen_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRandomGen_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLSpline(void *p = nullptr);
   static void *newArray_geniecLcLSpline(Long_t size, void *p);
   static void delete_geniecLcLSpline(void *p);
   static void deleteArray_geniecLcLSpline(void *p);
   static void destruct_geniecLcLSpline(void *p);
   static void streamer_geniecLcLSpline(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Spline*)
   {
      ::genie::Spline *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::Spline >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("genie::Spline", ::genie::Spline::Class_Version(), "", 582,
                  typeid(::genie::Spline), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::Spline::Dictionary, isa_proxy, 16,
                  sizeof(::genie::Spline) );
      instance.SetNew(&new_geniecLcLSpline);
      instance.SetNewArray(&newArray_geniecLcLSpline);
      instance.SetDelete(&delete_geniecLcLSpline);
      instance.SetDeleteArray(&deleteArray_geniecLcLSpline);
      instance.SetDestructor(&destruct_geniecLcLSpline);
      instance.SetStreamerFunc(&streamer_geniecLcLSpline);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Spline*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::Spline*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::Spline*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr BLI2DGrid::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BLI2DGrid::Class_Name()
{
   return "genie::BLI2DGrid";
}

//______________________________________________________________________________
const char *BLI2DGrid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DGrid*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BLI2DGrid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DGrid*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BLI2DGrid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DGrid*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BLI2DGrid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DGrid*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr BLI2DUnifGrid::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BLI2DUnifGrid::Class_Name()
{
   return "genie::BLI2DUnifGrid";
}

//______________________________________________________________________________
const char *BLI2DUnifGrid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DUnifGrid*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BLI2DUnifGrid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DUnifGrid*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BLI2DUnifGrid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DUnifGrid*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BLI2DUnifGrid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DUnifGrid*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr BLI2DNonUnifGrid::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BLI2DNonUnifGrid::Class_Name()
{
   return "genie::BLI2DNonUnifGrid";
}

//______________________________________________________________________________
const char *BLI2DNonUnifGrid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DNonUnifGrid*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BLI2DNonUnifGrid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DNonUnifGrid*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BLI2DNonUnifGrid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DNonUnifGrid*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BLI2DNonUnifGrid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::BLI2DNonUnifGrid*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr Spline::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Spline::Class_Name()
{
   return "genie::Spline";
}

//______________________________________________________________________________
const char *Spline::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::Spline*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Spline::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::Spline*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Spline::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::Spline*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Spline::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::Spline*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
void BLI2DGrid::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::BLI2DGrid.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::BLI2DGrid thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fNX;
      R__b >> fNY;
      R__b >> fNZ;
      delete [] fX;
      fX = new double[fNX];
      R__b.ReadFastArray(fX,fNX);
      delete [] fY;
      fY = new double[fNY];
      R__b.ReadFastArray(fY,fNY);
      delete [] fZ;
      fZ = new double[fNZ];
      R__b.ReadFastArray(fZ,fNZ);
      R__b >> fDX;
      R__b >> fDY;
      R__b >> fXmin;
      R__b >> fXmax;
      R__b >> fYmin;
      R__b >> fYmax;
      R__b >> fZmin;
      R__b >> fZmax;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fNX;
      R__b << fNY;
      R__b << fNZ;
      R__b.WriteFastArray(fX,fNX);
      R__b.WriteFastArray(fY,fNY);
      R__b.WriteFastArray(fZ,fNZ);
      R__b << fDX;
      R__b << fDY;
      R__b << fXmin;
      R__b << fXmax;
      R__b << fYmin;
      R__b << fYmax;
      R__b << fZmin;
      R__b << fZmax;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLBLI2DGrid(void *p) {
      delete (static_cast<::genie::BLI2DGrid*>(p));
   }
   static void deleteArray_geniecLcLBLI2DGrid(void *p) {
      delete [] (static_cast<::genie::BLI2DGrid*>(p));
   }
   static void destruct_geniecLcLBLI2DGrid(void *p) {
      typedef ::genie::BLI2DGrid current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLBLI2DGrid(TBuffer &buf, void *obj) {
      ((::genie::BLI2DGrid*)obj)->::genie::BLI2DGrid::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::BLI2DGrid

namespace genie {
//______________________________________________________________________________
void BLI2DUnifGrid::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::BLI2DUnifGrid.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::BLI2DUnifGrid thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::BLI2DGrid baseClass0;
      baseClass0::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::BLI2DGrid baseClass0;
      baseClass0::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBLI2DUnifGrid(void *p) {
      return  p ? new(p) ::genie::BLI2DUnifGrid : new ::genie::BLI2DUnifGrid;
   }
   static void *newArray_geniecLcLBLI2DUnifGrid(Long_t nElements, void *p) {
      return p ? new(p) ::genie::BLI2DUnifGrid[nElements] : new ::genie::BLI2DUnifGrid[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBLI2DUnifGrid(void *p) {
      delete (static_cast<::genie::BLI2DUnifGrid*>(p));
   }
   static void deleteArray_geniecLcLBLI2DUnifGrid(void *p) {
      delete [] (static_cast<::genie::BLI2DUnifGrid*>(p));
   }
   static void destruct_geniecLcLBLI2DUnifGrid(void *p) {
      typedef ::genie::BLI2DUnifGrid current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLBLI2DUnifGrid(TBuffer &buf, void *obj) {
      ((::genie::BLI2DUnifGrid*)obj)->::genie::BLI2DUnifGrid::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::BLI2DUnifGrid

namespace genie {
//______________________________________________________________________________
void BLI2DNonUnifGrid::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::BLI2DNonUnifGrid.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::BLI2DNonUnifGrid thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::BLI2DGrid baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> fNFillX;
      R__b >> fNFillY;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::BLI2DGrid baseClass0;
      baseClass0::Streamer(R__b);
      R__b << fNFillX;
      R__b << fNFillY;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBLI2DNonUnifGrid(void *p) {
      return  p ? new(p) ::genie::BLI2DNonUnifGrid : new ::genie::BLI2DNonUnifGrid;
   }
   static void *newArray_geniecLcLBLI2DNonUnifGrid(Long_t nElements, void *p) {
      return p ? new(p) ::genie::BLI2DNonUnifGrid[nElements] : new ::genie::BLI2DNonUnifGrid[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBLI2DNonUnifGrid(void *p) {
      delete (static_cast<::genie::BLI2DNonUnifGrid*>(p));
   }
   static void deleteArray_geniecLcLBLI2DNonUnifGrid(void *p) {
      delete [] (static_cast<::genie::BLI2DNonUnifGrid*>(p));
   }
   static void destruct_geniecLcLBLI2DNonUnifGrid(void *p) {
      typedef ::genie::BLI2DNonUnifGrid current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLBLI2DNonUnifGrid(TBuffer &buf, void *obj) {
      ((::genie::BLI2DNonUnifGrid*)obj)->::genie::BLI2DNonUnifGrid::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::BLI2DNonUnifGrid

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLInterpolator2D(void *p) {
      delete (static_cast<::genie::Interpolator2D*>(p));
   }
   static void deleteArray_geniecLcLInterpolator2D(void *p) {
      delete [] (static_cast<::genie::Interpolator2D*>(p));
   }
   static void destruct_geniecLcLInterpolator2D(void *p) {
      typedef ::genie::Interpolator2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::Interpolator2D

namespace ROOT {
} // end of namespace ROOT for class ::genie::RandomGen

namespace genie {
//______________________________________________________________________________
void Spline::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::Spline.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::Spline thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      { TString R__str; R__str.Streamer(R__b); fName = R__str.Data(); }
      R__b >> fNKnots;
      R__b >> fXMin;
      R__b >> fXMax;
      R__b >> fYMax;
      R__b >> fInterpolator;
      R__b >> fYCanBeNegative;
      R__b >> fInterpolator5;
      R__b >> fGSLInterpolator;
      { TString R__str; R__str.Streamer(R__b); fInterpolatorType = R__str.Data(); }
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TObject::Streamer(R__b);
      { TString R__str = fName.c_str(); R__str.Streamer(R__b);}
      R__b << fNKnots;
      R__b << fXMin;
      R__b << fXMax;
      R__b << fYMax;
      R__b << fInterpolator;
      R__b << fYCanBeNegative;
      R__b << fInterpolator5;
      R__b << fGSLInterpolator;
      { TString R__str = fInterpolatorType.c_str(); R__str.Streamer(R__b);}
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSpline(void *p) {
      return  p ? new(p) ::genie::Spline : new ::genie::Spline;
   }
   static void *newArray_geniecLcLSpline(Long_t nElements, void *p) {
      return p ? new(p) ::genie::Spline[nElements] : new ::genie::Spline[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSpline(void *p) {
      delete (static_cast<::genie::Spline*>(p));
   }
   static void deleteArray_geniecLcLSpline(void *p) {
      delete [] (static_cast<::genie::Spline*>(p));
   }
   static void destruct_geniecLcLSpline(void *p) {
      typedef ::genie::Spline current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLSpline(TBuffer &buf, void *obj) {
      ((::genie::Spline*)obj)->::genie::Spline::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::Spline

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGFwNum() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGFwNum) = RecordReadRules_libGFwNum();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGFwNum));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGFwNum_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Framework/Numerical",
"GENIE",
"GENIE/Framework/Numerical",
"../include",
"../include/GENIE",
"../include/GENIE/Framework/Numerical",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Framework/Numerical/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGFwNum dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  BLI2DGrid;}
namespace genie{class  BLI2DUnifGrid;}
namespace genie{class  BLI2DNonUnifGrid;}
namespace genie{class  Interpolator2D;}
namespace genie{class  RandomGen;}
namespace genie{class  Spline;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGFwNum dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::BLI2DUnifGrid

\brief    Bilinear interpolation of 2D functions on a regular grid.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 30, 2009

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _BILLINEAR_INTERPOLATION_2D_GRID_H_
#define _BILLINEAR_INTERPOLATION_2D_GRID_H_

#include <TObject.h>

namespace genie {

class BLI2DGrid : public TObject {

public:
  //-- ctors & dtor
  BLI2DGrid();
  //BLI2DGrid(int nx, double xmin, double xmax, int ny, double ymin, double ymax);
  //BLI2DGrid(int nx, int ny, double *x, double *y, double **z);
  virtual ~BLI2DGrid();

  //-- add another point in the grid
  virtual bool AddPoint(double x, double y, double z) =0;

  //-- evaluate the function at the input position
  virtual double Evaluate (double x, double y) const =0;

  // report min/max values
  double XMin (void) const { return fXmin; }
  double XMax (void) const { return fXmax; }
  double YMin (void) const { return fYmin; }
  double YMax (void) const { return fYmax; }
  double ZMin (void) const { return fZmin; }
  double ZMax (void) const { return fZmax; }

protected:

  virtual void Init (int nx, double xmin, double xmax, int ny, double ymin, double ymax) =0;
  int  IdxZ (int ix, int iy) const;

  //-- private data members
  int      fNX;
  int      fNY;
  int      fNZ;
  double * fX;  //[fNX]
  double * fY;  //[fNY]
  double * fZ;  //[fNZ]
  double   fDX;
  double   fDY;
  double   fXmin;
  double   fXmax;
  double   fYmin;
  double   fYmax;
  double   fZmin;
  double   fZmax;

  ClassDef(BLI2DGrid, 1)
  };

//____________________________________________________________________________
//____________________________________________________________________________

class BLI2DUnifGrid : public BLI2DGrid {

public:
  //-- ctors & dtor
  BLI2DUnifGrid();
  BLI2DUnifGrid(int nx, double xmin, double xmax, int ny, double ymin, double ymax);
  BLI2DUnifGrid(int nx, int ny, double *x, double *y, double *z);

  //-- add another point in the grid
  bool AddPoint(double x, double y, double z);

  //-- evaluate the function at the input position
  double Evaluate (double x, double y) const;

private:

  void Init (int nx=0, double xmin=0, double xmax=0, int ny=0, double ymin=0, double ymax=0);

  ClassDef(BLI2DUnifGrid, 1)
  };

//____________________________________________________________________________
//____________________________________________________________________________

class BLI2DNonUnifGrid : public BLI2DGrid {

public:
  //-- ctors & dtor
  BLI2DNonUnifGrid();
  BLI2DNonUnifGrid(int nx, double xmin, double xmax, int ny, double ymin, double ymax);
  BLI2DNonUnifGrid(int nx, int ny, double *x, double *y, double *z);

  //-- add another point in the grid
  bool AddPoint(double x, double y, double z);

  //-- evaluate the function at the input position
  double Evaluate (double x, double y) const;

private:

  void Init (int nx=0, double xmin=0, double xmax=0, int ny=0, double ymin=0, double ymax=0);
  int      fNFillX;
  int      fNFillY;

  ClassDef(BLI2DNonUnifGrid, 1)
  };

}
#endif
//____________________________________________________________________________
/*!

\namespace  genie::utils::gsl

\brief      Simple utilities for integrating GSL in the GENIE framework

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    May 06, 2004

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _GSL_UTILS_H_
#define _GSL_UTILS_H_

#include <Math/AllIntegrationTypes.h>
#include <string>
using std::string;

namespace genie {
namespace utils {
namespace gsl   {

  ROOT::Math::IntegrationOneDim::Type
       Integration1DimTypeFromString (string type);

  ROOT::Math::IntegrationMultiDim::Type
       IntegrationNDimTypeFromString (string type);

} // namespace gsl
} // namespace utils
} // namespace genie

#endif // _GSL_UTILS_H_
//____________________________________________________________________________
/*!

\namespace  genie::alvarezruso::integrationTools

\brief      Some fast integration tools

\author     Steve Boyd < s.b.boyd \at warwick.ac.uk >
            University of Warwick

\created    Oct 24th, 2013

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _AR_INT_TOOLS_H_
#define _AR_INT_TOOLS_H_

#include <vector>
#include <complex>

namespace genie {
namespace alvarezruso {
namespace integrationtools
{
  void SG20R(const double a, const double b, const unsigned int n, const unsigned int nsamp, double* x, unsigned int& np, double* w);
  std::complex<double>  RG201D(const double A, const double B, const unsigned int N, const unsigned int nsamp, const std::complex<double>  CF[]);
  void RG202D(const double a, const double b, unsigned int n, unsigned int l,
              unsigned int m, std::vector< std::vector<std::complex<double> > >& cf,
              const unsigned int nsamp, std::vector<std::complex<double> >& cres);

  void SG48R(const double a, const double b, const unsigned int n, const unsigned int nsamp, double* x, unsigned int& np, double* w);
  std::complex<double>  RG481D(const double A, const double B, const unsigned int N, const unsigned int nsamp, const std::complex<double>  CF[]);
  void RG482D(const double a, const double b, unsigned int n, unsigned int l,
              unsigned int m, std::vector< std::vector<std::complex<double> > >& cf,
              const unsigned int nsamp, std::vector<std::complex<double> >& cres);

  void SGNR (const double a, const double b, const unsigned int n, const unsigned int nsamp, double* x, unsigned int& np, double* w);
  std::complex<double>  RGN1D (const double A, const double B, const unsigned int N, const unsigned int nsamp, const std::complex<double>  CF[]);
  void RGN2D (const double a, const double b, unsigned int n, unsigned int l,
              unsigned int m, std::vector< std::vector<std::complex<double> > >& cf,
              const unsigned int nsamp, std::vector<std::complex<double> >& cres);

} // IntegrationTools namespace
} // alvarezruso namespace
} // genie namespace

#endif // AR_INT_TOOLS_H_
//____________________________________________________________________________
/*!

\class    genie::Interpolator2D

\brief    A 2D interpolator using the GSL spline type
          If GSL version is not sufficient, does an inefficient version
          using TGraph2D.

\author   Steve Dennis <s.r.dennis \at liverpool.ac.uk>
          University of Liverpool

\created  November, 2017

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#include <cstdlib>

#ifndef GENIE_INTERPOLATOR2D_H_
#define GENIE_INTERPOLATOR2D_H_

namespace genie {

class Interpolator2D
{
  public:
    Interpolator2D(const size_t & size_x, const double * grid_x,
                   const size_t & size_y, const double * grid_y,
                   const double * knots);
    ~Interpolator2D();

    double Eval    (const double & x, const double & y) const;
    double DerivX  (const double & x, const double & y) const;
    double DerivY  (const double & x, const double & y) const;
    double DerivXX (const double & x, const double & y) const;
    double DerivXY (const double & x, const double & y) const;
    double DerivYY (const double & x, const double & y) const;

  private:
    // Done using PIMPL to avoid GSL vs ROOT mess in libraries
    // Struct type declarations will be done in object code
    struct spline2d_container    ; // stores type gsl_spline2d
    struct interp_accel_container; // stores type gsl_interp_accel
    // And these are our actual members
    spline2d_container             * fSpline;
    mutable interp_accel_container * fAcc_x;
    mutable interp_accel_container * fAcc_y;
};

} // namespace genie

#endif //GENIE_INTERPOLATOR2D_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::math

\brief      Simple mathematical utilities not found in ROOT's TMath

\author     Costas Andreopoulos <c.andreopoulos \at cern.ch>
            University of Liverpool

\created    May 06, 2004

\cpright    Copyright (c) 2003-2025, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org            
*/
//____________________________________________________________________________

#ifndef _MATH_UTILS_H_
#define _MATH_UTILS_H_

#include <vector>
#include <TMatrixD.h>
#include <TVectorD.h>
#include <TLorentzVector.h>
#include "Framework/Utils/Range1.h"
#include "cmath"

using std::vector;

namespace genie {
namespace utils {

namespace math
{

  // This class has been created to perform several operations with long 
  // doubles. It is needed in HEDIS because the kinematics of the outgoing
  // particles can be so large that the on-shell feature is not fulfilled 
  // many times due to the precission of double. 
  class LongLorentzVector {

    public :
      LongLorentzVector(double px, double py, double pz, double e) {
        fPx = (long double) px;
        fPy = (long double) py;
        fPz = (long double) pz;
        fE  = (long double) e;
      }
      LongLorentzVector(const TLorentzVector & p4) { 
        fPx = (long double) p4.Px();  
        fPy = (long double) p4.Py();  
        fPz = (long double) p4.Pz();  
        fE  = (long double) p4.E();  
      }
     ~LongLorentzVector() {}

      long double Px (void) { return fPx; }
      long double Py (void) { return fPy; }
      long double Pz (void) { return fPz; }
      long double E  (void) { return fE;  }
      long double P  (void) { return sqrtl(fPx*fPx+fPy*fPy+fPz*fPz);     }
      long double M  (void) { return sqrtl(fE*fE-fPx*fPx-fPy*fPy-fPz*fPz); }
      long double M2 (void) { return fE*fE-fPx*fPx-fPy*fPy-fPz*fPz; }
      long double Dx (void) { return fPx/sqrtl(fPx*fPx+fPy*fPy+fPz*fPz); }
      long double Dy (void) { return fPy/sqrtl(fPx*fPx+fPy*fPy+fPz*fPz); }
      long double Dz (void) { return fPz/sqrtl(fPx*fPx+fPy*fPy+fPz*fPz); }

      void Rotate    (LongLorentzVector axis) {
        long double up = axis.Dx()*axis.Dx() + axis.Dy()*axis.Dy();
        if (up) {
          up = sqrtl(up);
          long double pxaux = fPx,  pyaux = fPy,  pzaux = fPz;
          fPx = (axis.Dx()*axis.Dz()*pxaux - axis.Dy()*pyaux + axis.Dx()*up*pzaux)/up;
          fPy = (axis.Dy()*axis.Dz()*pxaux + axis.Dx()*pyaux + axis.Dy()*up*pzaux)/up;
          fPz = (axis.Dz()*axis.Dz()*pxaux -           pxaux + axis.Dz()*up*pzaux)/up;
        } 
        else if (axis.Dz() < 0.) { // phi=0  teta=pi
          fPx = -fPx; 
          fPz = -fPz; 
        }
      }    

    void BoostZ    (long double bz) {
      long double b2 = bz*bz;
      long double gamma = 1.0 / sqrtl(1.0 - b2);
      long double bp = bz*fPz;
      long double gamma2 = b2 > 0 ? (gamma - 1.0)/b2 : 0.0;
      fPz = fPz + gamma2*bp*bz + gamma*bz*fE;
      fE  = gamma*(fE + bp);    
    }    

    void BoostY    (long double by) {
      long double b2 = by*by;
      long double gamma = 1.0 / sqrtl(1.0 - b2);
      long double bp = by*fPy;
      long double gamma2 = b2 > 0 ? (gamma - 1.0)/b2 : 0.0;
      fPy = fPy + gamma2*bp*by + gamma*by*fE;
      fE  = gamma*(fE + bp);    
    }
    
    private :

      long double fPx;
      long double fPy;
      long double fPz;
      long double fE;
  };

  // Cholesky decomposition. Returns lower triangular matrix.
  TMatrixD CholeskyDecomposition (const TMatrixD& cov);
  // Generates a vector of correlated parameters.
  TVectorD CholeskyGenerateCorrelatedParams (const TMatrixD& Lch, TVectorD& mean);
  TVectorD CholeskyGenerateCorrelatedParams (const TMatrixD& Lch, TVectorD& mean, TVectorD& g_uncorrelated);
  // Generates a vector of correlated parameter variations.
  TVectorD CholeskyGenerateCorrelatedParamVariations (const TMatrixD& Lch);
  TVectorD CholeskyCalculateCorrelatedParamVariations(const TMatrixD& Lch, TVectorD& g_uncorrelated);

  double KahanSummation (double x[], unsigned int n);
  double KahanSummation (const vector<double> & x);

  bool   AreEqual       (double x1, double x2);
  bool   AreEqual       (float  x1, float  x2);

  bool   IsWithinLimits (double x, Range1D_t range);
  bool   IsWithinLimits (float  x, Range1F_t range);
  bool   IsWithinLimits (int    i, Range1I_t range);

  double NonNegative    (double x);
  double NonNegative    (float  x);

} // math  namespace
} // utils namespace
} // genie namespace

#endif // _MATH_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::RandomGen

\brief    A singleton holding random number generator classes. All random
          number generation in GENIE should take place through this class.
          Ensures that the random number generator seed is set consistently
          to all GENIE modules and that all modules use the preferred rndm
          number generator.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  September 22, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _RANDOM_GEN_H_
#define _RANDOM_GEN_H_

#include <TRandom3.h>

namespace genie {

class RandomGen {

public:

  //! Access instance
  static RandomGen * Instance();

  //! Random number generators used by various GENIE modules.
  //! (See note at http://root.cern.ch/root/html//TRandom.html
  //!  on using several TRandom objects each with each own
  //!  "independent" run sequence).

  //! At this point, since the actual random number generator
  //! periodicity is very high, all the generators are in fact one!
  //! However, the option to use many generators is reserved.

  //! Currently, the preferred generator is the "Mersenne Twister"
  //! with a periodicity of 10**6000
  //! See: http://root.cern.ch/root/html/TRandom3.html

  //! rnd number generator used by kinematics generators
  TRandom3 & RndKine (void) const { return *fRandom3; }

  //! rnd number generator used by hadronization models
  TRandom3 & RndHadro (void) const { return *fRandom3; }

  //! rnd number generator used by decay models
  TRandom3 & RndDec (void) const { return *fRandom3; }

  //! rnd number generator used by intranuclear cascade monte carlos
  TRandom3 & RndFsi (void) const { return *fRandom3; }

  //! rnd number generator used by final state primary lepton generators
  TRandom3 & RndLep (void) const { return *fRandom3; }

  //! rnd number generator used by interaction selectors
  TRandom3 & RndISel (void) const { return *fRandom3; }

  //! rnd number generator used by geometry drivers
  TRandom3 & RndGeom (void) const { return *fRandom3; }

  //! rnd number generator used by flux drivers
  TRandom3 & RndFlux (void) const { return *fRandom3; }

  //! rnd number generator used by the event generation drivers
  TRandom3 & RndEvg (void) const { return *fRandom3; }

  //! rnd number generator used by MC integrators & other numerical methods
  TRandom3 & RndNum (void) const { return *fRandom3; }

  //! rnd number generator for generic usage
  TRandom3 & RndGen  (void) const { return *fRandom3; }

  long int GetSeed (void)         const { return fCurrSeed; }
  void     SetSeed (long int seed);

private:

  RandomGen();
  RandomGen(const RandomGen & rgen);
  virtual ~RandomGen();

  static RandomGen * fInstance;

  TRandom3 * fRandom3;    ///< Mersenne Twistor
  long int   fCurrSeed;   ///< random number generator seed number
  bool       fInitalized; ///< done initializing singleton?

  void InitRandomGenerators(long int seed);

  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (RandomGen::fInstance !=0) {
            delete RandomGen::fInstance;
            RandomGen::fInstance = 0;
         }
      }
  };

  friend struct Cleaner;
};

}      // genie namespace

#endif // _RANDOM_GEN_H_
//____________________________________________________________________________
/*!

\class    genie::Spline

\brief    A numeric analysis tool class for interpolating 1-D functions.

          Uses ROOT's TSpline3 for the actual interpolation and can retrieve
          function (x,y(x)) pairs from an XML file, a flat ascii file, a
          TNtuple, a TTree or an SQL database.\n
          
          Update May 15, 2022 IK: 
          Adding as extra interpolators TSpline5 and 
          ROOT::Math::GSLInterpolator (LINEAR, POLYNOMIAL, CSPLINE, CSPLINE_PERIODIC,
          AKIMA, AKIMA_PERIODIC)
          
          
\ref      [1] GENIE docdb 297

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool \n
          Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research

\created  May 04, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _SPLINE_H_
#define _SPLINE_H_

#include <vector>
#include <string>
#include <fstream>
#include <ostream>

#include <TObject.h>
#include <TSpline.h>
#include <Math/Interpolator.h>

class TNtupleD;
class TTree;
class TSQLServer;
class TGraph;

using std::string;
using std::ostream;
using std::ofstream;

namespace genie {

class Spline;
ostream & operator << (ostream & stream, const Spline & spl);

class Spline : public TObject {

public:
  using TObject::Print; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings

  // ctors & dtor
  Spline();
  Spline(string filename, string xtag="", string ytag="", bool is_xml = false);
  Spline(TNtupleD * ntuple, string xy, string cut="");
  Spline(TTree * tree,     string xy, string cut="");
  Spline(TSQLServer * db, string query);
  Spline(int nentries, double x[], double y[]);
  Spline(int nentries, float  x[], float  y[]);
  Spline(const Spline & spline);
  Spline(const TSpline3 & spline, int nknots);
  virtual ~Spline();

  // Load the Spline from XML, flat ASCII, ROOT ntuple/tree/tspline3, or SQL DB
  bool   LoadFromXmlFile    (string filename, string xtag, string ytag);
  bool   LoadFromAsciiFile  (string filename);
  bool   LoadFromNtuple     (TNtupleD * nt, string xy, string cut = "");
  bool   LoadFromTree       (TTree *    tr, string xy, string cut = "");
  bool   LoadFromDBase      (TSQLServer * db,  string query);
  bool   LoadFromTSpline3   (const TSpline3 & spline, int nknots);

  // Get xmin,xmax,nknots, check x variable against valid range and evaluate spline
  int    NKnots             (void) const {return fNKnots;}
  void   GetKnot            (int iknot, double & x, double & y) const;
  double GetKnotX           (int iknot) const;
  double GetKnotY           (int iknot) const;
  double XMin               (void) const {return fXMin;  }
  double XMax               (void) const {return fXMax;  }
  double YMax               (void) const {return fYMax;  }
  double Evaluate           (double x) const;
  bool   IsWithinValidRange (double x) const;

  void   SetName (string name) { fName = name; }
  string Name (void) const     { return fName; }

  void   YCanBeNegative(bool tf) { fYCanBeNegative = tf; }

  // Save the Spline in XML, flat ASCII or ROOT format
  void   SaveAsXml (string filename, string xtag, string ytag, string name="") const;
  void   SaveAsXml (ofstream & str,  string xtag, string ytag, string name="") const;
  void   SaveAsText(string filename, string format="%10.6f\t%10.6f") const;
  void   SaveAsROOT(string filename, string name="", bool recreate=false) const;

  // Export Spline as TGraph or TSpline3
  TGraph *   GetAsTGraph  (int np = 500, bool xscaling = false,
                           bool inlog=false, double fx=1., double fy=1.) const;
  TSpline3 * GetAsTSpline (void) const { return fInterpolator; }

  // Knot manipulation methods in additions to the TSpline3 ones
  void FindClosestKnot(double x, double & xknot, double & yknot, Option_t * opt="-+") const;
  bool ClosestKnotValueIsZero(double x, Option_t * opt="-+") const;

  // Common mathematical operations applied simultaneously on all spline knots
  void Add      (const Spline & spl, double c=1);
  void Multiply (const Spline & spl, double c=1);
  void Divide   (const Spline & spl, double c=1);
  void Add      (double a);
  void Multiply (double a);
  void Divide   (double a);
  void SetType  (string type);
  string GetType  (void) { return fInterpolatorType; }

  // Print knots
  void Print(ostream & stream) const;

  // Overloaded operators
  friend ostream & operator << (ostream & stream, const Spline & spl);

private:

  // Initialize and build spline
  void InitSpline  (void);
  void ResetSpline (void);
  void BuildSpline (int nentries, double x[], double y[]);

  // Private data members
  string     fName;
  int        fNKnots;
  double     fXMin;
  double     fXMax;
  double     fYMax;
  TSpline3 * fInterpolator;
  bool       fYCanBeNegative;
  TSpline5 * fInterpolator5;
  ROOT::Math::Interpolator * fGSLInterpolator;
  string     fInterpolatorType;

ClassDef(Spline,2)
};

}

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::BLI2DGrid", payloadCode, "@",
"genie::BLI2DNonUnifGrid", payloadCode, "@",
"genie::BLI2DUnifGrid", payloadCode, "@",
"genie::Interpolator2D", payloadCode, "@",
"genie::RandomGen", payloadCode, "@",
"genie::Spline", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGFwNum",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGFwNum_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGFwNum_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGFwNum() {
  TriggerDictionaryInitialization_libGFwNum_Impl();
}
