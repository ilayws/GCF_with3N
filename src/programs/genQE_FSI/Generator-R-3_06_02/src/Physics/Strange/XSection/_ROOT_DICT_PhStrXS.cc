// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhStrXS
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
#include "AlamSimoAtharVacasSKPXSec2014.h"
#include "AlamSimoAtharVacasSKXSec.h"
#include "PaisQELLambdaPXSec.h"

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

namespace ROOT {
   static TClass *geniecLcLAlamSimoAtharVacasSKPXSec2014_Dictionary();
   static void geniecLcLAlamSimoAtharVacasSKPXSec2014_TClassManip(TClass*);
   static void *new_geniecLcLAlamSimoAtharVacasSKPXSec2014(void *p = nullptr);
   static void *newArray_geniecLcLAlamSimoAtharVacasSKPXSec2014(Long_t size, void *p);
   static void delete_geniecLcLAlamSimoAtharVacasSKPXSec2014(void *p);
   static void deleteArray_geniecLcLAlamSimoAtharVacasSKPXSec2014(void *p);
   static void destruct_geniecLcLAlamSimoAtharVacasSKPXSec2014(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AlamSimoAtharVacasSKPXSec2014*)
   {
      ::genie::AlamSimoAtharVacasSKPXSec2014 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AlamSimoAtharVacasSKPXSec2014));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AlamSimoAtharVacasSKPXSec2014", "", 33,
                  typeid(::genie::AlamSimoAtharVacasSKPXSec2014), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAlamSimoAtharVacasSKPXSec2014_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AlamSimoAtharVacasSKPXSec2014) );
      instance.SetNew(&new_geniecLcLAlamSimoAtharVacasSKPXSec2014);
      instance.SetNewArray(&newArray_geniecLcLAlamSimoAtharVacasSKPXSec2014);
      instance.SetDelete(&delete_geniecLcLAlamSimoAtharVacasSKPXSec2014);
      instance.SetDeleteArray(&deleteArray_geniecLcLAlamSimoAtharVacasSKPXSec2014);
      instance.SetDestructor(&destruct_geniecLcLAlamSimoAtharVacasSKPXSec2014);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AlamSimoAtharVacasSKPXSec2014*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AlamSimoAtharVacasSKPXSec2014*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AlamSimoAtharVacasSKPXSec2014*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAlamSimoAtharVacasSKPXSec2014_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AlamSimoAtharVacasSKPXSec2014*>(nullptr))->GetClass();
      geniecLcLAlamSimoAtharVacasSKPXSec2014_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAlamSimoAtharVacasSKPXSec2014_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAlamSimoAtharVacasSKXSec_Dictionary();
   static void geniecLcLAlamSimoAtharVacasSKXSec_TClassManip(TClass*);
   static void *new_geniecLcLAlamSimoAtharVacasSKXSec(void *p = nullptr);
   static void *newArray_geniecLcLAlamSimoAtharVacasSKXSec(Long_t size, void *p);
   static void delete_geniecLcLAlamSimoAtharVacasSKXSec(void *p);
   static void deleteArray_geniecLcLAlamSimoAtharVacasSKXSec(void *p);
   static void destruct_geniecLcLAlamSimoAtharVacasSKXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AlamSimoAtharVacasSKXSec*)
   {
      ::genie::AlamSimoAtharVacasSKXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AlamSimoAtharVacasSKXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AlamSimoAtharVacasSKXSec", "", 119,
                  typeid(::genie::AlamSimoAtharVacasSKXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAlamSimoAtharVacasSKXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AlamSimoAtharVacasSKXSec) );
      instance.SetNew(&new_geniecLcLAlamSimoAtharVacasSKXSec);
      instance.SetNewArray(&newArray_geniecLcLAlamSimoAtharVacasSKXSec);
      instance.SetDelete(&delete_geniecLcLAlamSimoAtharVacasSKXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLAlamSimoAtharVacasSKXSec);
      instance.SetDestructor(&destruct_geniecLcLAlamSimoAtharVacasSKXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AlamSimoAtharVacasSKXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AlamSimoAtharVacasSKXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AlamSimoAtharVacasSKXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAlamSimoAtharVacasSKXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AlamSimoAtharVacasSKXSec*>(nullptr))->GetClass();
      geniecLcLAlamSimoAtharVacasSKXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAlamSimoAtharVacasSKXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d3Xsec_dTldTkdCosThetal*)
   {
      ::genie::utils::gsl::d3Xsec_dTldTkdCosThetal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d3Xsec_dTldTkdCosThetal));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d3Xsec_dTldTkdCosThetal", "", 149,
                  typeid(::genie::utils::gsl::d3Xsec_dTldTkdCosThetal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d3Xsec_dTldTkdCosThetal) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d3Xsec_dTldTkdCosThetal*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::utils::gsl::d3Xsec_dTldTkdCosThetal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d3Xsec_dTldTkdCosThetal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::utils::gsl::d3Xsec_dTldTkdCosThetal*>(nullptr))->GetClass();
      geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPaisQELLambdaPXSec_Dictionary();
   static void geniecLcLPaisQELLambdaPXSec_TClassManip(TClass*);
   static void *new_geniecLcLPaisQELLambdaPXSec(void *p = nullptr);
   static void *newArray_geniecLcLPaisQELLambdaPXSec(Long_t size, void *p);
   static void delete_geniecLcLPaisQELLambdaPXSec(void *p);
   static void deleteArray_geniecLcLPaisQELLambdaPXSec(void *p);
   static void destruct_geniecLcLPaisQELLambdaPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PaisQELLambdaPXSec*)
   {
      ::genie::PaisQELLambdaPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PaisQELLambdaPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PaisQELLambdaPXSec", "", 208,
                  typeid(::genie::PaisQELLambdaPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPaisQELLambdaPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PaisQELLambdaPXSec) );
      instance.SetNew(&new_geniecLcLPaisQELLambdaPXSec);
      instance.SetNewArray(&newArray_geniecLcLPaisQELLambdaPXSec);
      instance.SetDelete(&delete_geniecLcLPaisQELLambdaPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLPaisQELLambdaPXSec);
      instance.SetDestructor(&destruct_geniecLcLPaisQELLambdaPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PaisQELLambdaPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PaisQELLambdaPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PaisQELLambdaPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPaisQELLambdaPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PaisQELLambdaPXSec*>(nullptr))->GetClass();
      geniecLcLPaisQELLambdaPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPaisQELLambdaPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAlamSimoAtharVacasSKPXSec2014(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlamSimoAtharVacasSKPXSec2014 : new ::genie::AlamSimoAtharVacasSKPXSec2014;
   }
   static void *newArray_geniecLcLAlamSimoAtharVacasSKPXSec2014(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlamSimoAtharVacasSKPXSec2014[nElements] : new ::genie::AlamSimoAtharVacasSKPXSec2014[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAlamSimoAtharVacasSKPXSec2014(void *p) {
      delete (static_cast<::genie::AlamSimoAtharVacasSKPXSec2014*>(p));
   }
   static void deleteArray_geniecLcLAlamSimoAtharVacasSKPXSec2014(void *p) {
      delete [] (static_cast<::genie::AlamSimoAtharVacasSKPXSec2014*>(p));
   }
   static void destruct_geniecLcLAlamSimoAtharVacasSKPXSec2014(void *p) {
      typedef ::genie::AlamSimoAtharVacasSKPXSec2014 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AlamSimoAtharVacasSKPXSec2014

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAlamSimoAtharVacasSKXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlamSimoAtharVacasSKXSec : new ::genie::AlamSimoAtharVacasSKXSec;
   }
   static void *newArray_geniecLcLAlamSimoAtharVacasSKXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AlamSimoAtharVacasSKXSec[nElements] : new ::genie::AlamSimoAtharVacasSKXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAlamSimoAtharVacasSKXSec(void *p) {
      delete (static_cast<::genie::AlamSimoAtharVacasSKXSec*>(p));
   }
   static void deleteArray_geniecLcLAlamSimoAtharVacasSKXSec(void *p) {
      delete [] (static_cast<::genie::AlamSimoAtharVacasSKXSec*>(p));
   }
   static void destruct_geniecLcLAlamSimoAtharVacasSKXSec(void *p) {
      typedef ::genie::AlamSimoAtharVacasSKXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AlamSimoAtharVacasSKXSec

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal(void *p) {
      delete (static_cast<::genie::utils::gsl::d3Xsec_dTldTkdCosThetal*>(p));
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal(void *p) {
      delete [] (static_cast<::genie::utils::gsl::d3Xsec_dTldTkdCosThetal*>(p));
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd3Xsec_dTldTkdCosThetal(void *p) {
      typedef ::genie::utils::gsl::d3Xsec_dTldTkdCosThetal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d3Xsec_dTldTkdCosThetal

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPaisQELLambdaPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PaisQELLambdaPXSec : new ::genie::PaisQELLambdaPXSec;
   }
   static void *newArray_geniecLcLPaisQELLambdaPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PaisQELLambdaPXSec[nElements] : new ::genie::PaisQELLambdaPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPaisQELLambdaPXSec(void *p) {
      delete (static_cast<::genie::PaisQELLambdaPXSec*>(p));
   }
   static void deleteArray_geniecLcLPaisQELLambdaPXSec(void *p) {
      delete [] (static_cast<::genie::PaisQELLambdaPXSec*>(p));
   }
   static void destruct_geniecLcLPaisQELLambdaPXSec(void *p) {
      typedef ::genie::PaisQELLambdaPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PaisQELLambdaPXSec

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhStrXS() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhStrXS) = RecordReadRules_libGPhStrXS();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhStrXS));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhStrXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Strange/XSection",
"GENIE",
"GENIE/Physics/Strange/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Strange/XSection",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Strange/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhStrXS dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  AlamSimoAtharVacasSKPXSec2014;}
namespace genie{class  AlamSimoAtharVacasSKXSec;}
namespace genie{namespace utils{namespace gsl{class  d3Xsec_dTldTkdCosThetal;}}}
namespace genie{class  PaisQELLambdaPXSec;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhStrXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::AlamSimoAtharVacasSKPXSec2014

\brief    Differential cross section model for single kaon production.

\ref      Weak Kaon Production off the Nucleon
          M. Rafi Alam, I. Ruiz Simo, M. Sajjad Athar and M.J. Vicente Vacas
          Physical Review D82 (2010) 033001; arXiv:1004.5484 [hep-ph]

\author   Chris Marshall and Martti Nirkko
          based on fortran code provided by M. Sajjad Athar

\created  2014-02-14

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _ALAM_SIMO_ATHAR_VACAS_SINGLE_KAON_PXSEC_2014_H_
#define _ALAM_SIMO_ATHAR_VACAS_SINGLE_KAON_PXSEC_2014_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class AlamSimoAtharVacasSKPXSec2014 : public XSecAlgorithmI {

public:
  AlamSimoAtharVacasSKPXSec2014();
  AlamSimoAtharVacasSKPXSec2014(string config);
  virtual ~AlamSimoAtharVacasSKPXSec2014();

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

  const XSecIntegratorI * fXSecIntegrator;  ///< cross section integrator

  // Calculate matrix elements
  double Amatrix_NN(double theta, double phikq) const;
  double Amatrix_NP(double theta, double phikq) const;
  double Amatrix_PP(double theta, double phikq) const;

  // Physics parameters set globally
  // The names of these parameters in the code match the convention in the original FORTRAN code
  // They are used in the matrix element calculations which are thousands of lines long
  // We try to change as little as possible, so keep these names
  double amLam, amEta, Vus, fpi, d, f, g, amup, amun, Fm1, Fm2;

  // Interaction parameters set locally
  // These are set event-by-event, and used in the matrix element calculation which is thousands
  // of lines long. The names are kept from the original FORTRAN code
  // They are mutable because the XSec routine must be const in GENIE, but they are needed in the
  // matrix element calculations which are separate functions
  mutable int leptonPDG, reactionType;
  mutable double aml, amSig, amk, ampi, am;
  mutable double Enu, Ekaon, pkvec;

  // Output calculated by cross-section function
  // essentially returned by reference by the matrix element calculations
  // mutable because XSec routine must be const in GENIE
  mutable double Elep, alepvec, aqvec, angkq, aq0;

};

}       // genie namespace
#endif  // _ALAM_SIMO_ATHAR_VACAS_SINGLE_KAON_PXSEC_2014_H_
//____________________________________________________________________________
/*!

\class    genie::AlamSimoAtharVacasSKXSec

\brief    A cross-section integrator and GSL interface for the
          M. Rafi Alam, I. Ruiz Simo, M. Sajjad Athar and M.J. Vicente Vacas
          single-Kaon production model.
          Is a concrete implementation of the XSecIntegratorI interface.

\author   Chris Marshall and Martti Nirkko

\created  March 20, 2014

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _ALAM_SIMO_ATHAR_VACAS_SINGLE_KAON_XSEC_H_
#define _ALAM_SIMO_ATHAR_VACAS_SINGLE_KAON_XSEC_H_

#include <Math/Integrator.h>
#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class XSecAlgorithmI;
class Interaction;

class AlamSimoAtharVacasSKXSec : public XSecIntegratorI {
public:
  AlamSimoAtharVacasSKXSec();
  AlamSimoAtharVacasSKXSec(string config);
  virtual ~AlamSimoAtharVacasSKXSec();

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
};

//_____________________________________________________________________________________
//
// GSL wrappers
//
//_____________________________________________________________________________________

 namespace utils {
  namespace gsl   {

   class d3Xsec_dTldTkdCosThetal: public ROOT::Math::IBaseFunctionMultiDim
   {
    public:
      d3Xsec_dTldTkdCosThetal(const XSecAlgorithmI * m, const Interaction * i);
     ~d3Xsec_dTldTkdCosThetal();
      // ROOT::Math::IBaseFunctionMultiDim interface
      unsigned int                        NDim   (void)               const;
      double                              DoEval (const double * xin) const;
      ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
    private:
      const XSecAlgorithmI * fModel;
      const Interaction *    fInteraction;
   };

  } // gsl   namespace
 } // utils namespace

} // genie namespace

#endif  // _ALAM_SIMO_ATHAR_VACAS_SINGLE_KAON_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::PaisQELLambdaPXSec

\brief    Implementation of the quasi-elastic scattering formula for
          production of particles with different masses than the target.

\ref      Weak Interactions at High Energies
          A. Pais, Annals of Physics 63, 361-392 (1971)
          Implemented here is equation 2.34 of the Pais paper, but ignoring
          lepton mass terms.  This equation is given also as Equation 3.37 in
          the Llewellyn-Smith paper, though this paper uses slightly
          different notation than that used in the Pais paper, and introduces
          a small error in the kinematic coefficient of the w2 term.  The
          notation here by and large follows that of the Llewelyn-Smith paper.

\author   Hugh Gallagher
          Tufts University

\created  June 10, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org        
*/
//____________________________________________________________________________

#ifndef _PAIS_QEL_LAMBDA_PARTIAL_XSEC_H_
#define _PAIS_QEL_LAMBDA_PARTIAL_XSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/QuasiElastic/XSection/QELFormFactors.h"

namespace genie {

class QELFormFactorsModelI;
class XSecIntegratorI;

class PaisQELLambdaPXSec : public XSecAlgorithmI {

public:
  PaisQELLambdaPXSec();
  PaisQELLambdaPXSec(string config);
  virtual ~PaisQELLambdaPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
  bool   ValidKinematics (const Interaction * i) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  void  LoadConfig (void);
  double MHyperon(const Interaction * interaction) const;

  mutable QELFormFactors          fFormFactors;
  const   QELFormFactorsModelI *  fFormFactorsModel;
  const   XSecIntegratorI *       fXSecIntegrator;
  double                          fSin8c2;

};

} // genie namespace
#endif  // _PAIS_QEL_LAMBDA_PARTIAL_XSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::AlamSimoAtharVacasSKPXSec2014", payloadCode, "@",
"genie::AlamSimoAtharVacasSKXSec", payloadCode, "@",
"genie::PaisQELLambdaPXSec", payloadCode, "@",
"genie::utils::gsl::d3Xsec_dTldTkdCosThetal", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhStrXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhStrXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhStrXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhStrXS() {
  TriggerDictionaryInitialization_libGPhStrXS_Impl();
}
