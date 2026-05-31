// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhChmXS
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
#include "AivazisCharmPXSecLO.h"
#include "KovalenkoQELCharmPXSec.h"
#include "SlowRsclCharmDISPXSecLO.h"

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
   static TClass *geniecLcLAivazisCharmPXSecLO_Dictionary();
   static void geniecLcLAivazisCharmPXSecLO_TClassManip(TClass*);
   static void *new_geniecLcLAivazisCharmPXSecLO(void *p = nullptr);
   static void *newArray_geniecLcLAivazisCharmPXSecLO(Long_t size, void *p);
   static void delete_geniecLcLAivazisCharmPXSecLO(void *p);
   static void deleteArray_geniecLcLAivazisCharmPXSecLO(void *p);
   static void destruct_geniecLcLAivazisCharmPXSecLO(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AivazisCharmPXSecLO*)
   {
      ::genie::AivazisCharmPXSecLO *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AivazisCharmPXSecLO));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AivazisCharmPXSecLO", "", 35,
                  typeid(::genie::AivazisCharmPXSecLO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAivazisCharmPXSecLO_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AivazisCharmPXSecLO) );
      instance.SetNew(&new_geniecLcLAivazisCharmPXSecLO);
      instance.SetNewArray(&newArray_geniecLcLAivazisCharmPXSecLO);
      instance.SetDelete(&delete_geniecLcLAivazisCharmPXSecLO);
      instance.SetDeleteArray(&deleteArray_geniecLcLAivazisCharmPXSecLO);
      instance.SetDestructor(&destruct_geniecLcLAivazisCharmPXSecLO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AivazisCharmPXSecLO*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::AivazisCharmPXSecLO*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::AivazisCharmPXSecLO*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAivazisCharmPXSecLO_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::AivazisCharmPXSecLO*>(nullptr))->GetClass();
      geniecLcLAivazisCharmPXSecLO_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAivazisCharmPXSecLO_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLKovalenkoQELCharmPXSec_Dictionary();
   static void geniecLcLKovalenkoQELCharmPXSec_TClassManip(TClass*);
   static void *new_geniecLcLKovalenkoQELCharmPXSec(void *p = nullptr);
   static void *newArray_geniecLcLKovalenkoQELCharmPXSec(Long_t size, void *p);
   static void delete_geniecLcLKovalenkoQELCharmPXSec(void *p);
   static void deleteArray_geniecLcLKovalenkoQELCharmPXSec(void *p);
   static void destruct_geniecLcLKovalenkoQELCharmPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::KovalenkoQELCharmPXSec*)
   {
      ::genie::KovalenkoQELCharmPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::KovalenkoQELCharmPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::KovalenkoQELCharmPXSec", "", 119,
                  typeid(::genie::KovalenkoQELCharmPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLKovalenkoQELCharmPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::KovalenkoQELCharmPXSec) );
      instance.SetNew(&new_geniecLcLKovalenkoQELCharmPXSec);
      instance.SetNewArray(&newArray_geniecLcLKovalenkoQELCharmPXSec);
      instance.SetDelete(&delete_geniecLcLKovalenkoQELCharmPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLKovalenkoQELCharmPXSec);
      instance.SetDestructor(&destruct_geniecLcLKovalenkoQELCharmPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::KovalenkoQELCharmPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::KovalenkoQELCharmPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::KovalenkoQELCharmPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLKovalenkoQELCharmPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::KovalenkoQELCharmPXSec*>(nullptr))->GetClass();
      geniecLcLKovalenkoQELCharmPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLKovalenkoQELCharmPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSlowRsclCharmDISPXSecLO_Dictionary();
   static void geniecLcLSlowRsclCharmDISPXSecLO_TClassManip(TClass*);
   static void *new_geniecLcLSlowRsclCharmDISPXSecLO(void *p = nullptr);
   static void *newArray_geniecLcLSlowRsclCharmDISPXSecLO(Long_t size, void *p);
   static void delete_geniecLcLSlowRsclCharmDISPXSecLO(void *p);
   static void deleteArray_geniecLcLSlowRsclCharmDISPXSecLO(void *p);
   static void destruct_geniecLcLSlowRsclCharmDISPXSecLO(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SlowRsclCharmDISPXSecLO*)
   {
      ::genie::SlowRsclCharmDISPXSecLO *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SlowRsclCharmDISPXSecLO));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SlowRsclCharmDISPXSecLO", "", 230,
                  typeid(::genie::SlowRsclCharmDISPXSecLO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSlowRsclCharmDISPXSecLO_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SlowRsclCharmDISPXSecLO) );
      instance.SetNew(&new_geniecLcLSlowRsclCharmDISPXSecLO);
      instance.SetNewArray(&newArray_geniecLcLSlowRsclCharmDISPXSecLO);
      instance.SetDelete(&delete_geniecLcLSlowRsclCharmDISPXSecLO);
      instance.SetDeleteArray(&deleteArray_geniecLcLSlowRsclCharmDISPXSecLO);
      instance.SetDestructor(&destruct_geniecLcLSlowRsclCharmDISPXSecLO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SlowRsclCharmDISPXSecLO*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::SlowRsclCharmDISPXSecLO*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::SlowRsclCharmDISPXSecLO*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSlowRsclCharmDISPXSecLO_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::SlowRsclCharmDISPXSecLO*>(nullptr))->GetClass();
      geniecLcLSlowRsclCharmDISPXSecLO_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSlowRsclCharmDISPXSecLO_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAivazisCharmPXSecLO(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AivazisCharmPXSecLO : new ::genie::AivazisCharmPXSecLO;
   }
   static void *newArray_geniecLcLAivazisCharmPXSecLO(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::AivazisCharmPXSecLO[nElements] : new ::genie::AivazisCharmPXSecLO[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAivazisCharmPXSecLO(void *p) {
      delete (static_cast<::genie::AivazisCharmPXSecLO*>(p));
   }
   static void deleteArray_geniecLcLAivazisCharmPXSecLO(void *p) {
      delete [] (static_cast<::genie::AivazisCharmPXSecLO*>(p));
   }
   static void destruct_geniecLcLAivazisCharmPXSecLO(void *p) {
      typedef ::genie::AivazisCharmPXSecLO current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::AivazisCharmPXSecLO

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLKovalenkoQELCharmPXSec(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::KovalenkoQELCharmPXSec : new ::genie::KovalenkoQELCharmPXSec;
   }
   static void *newArray_geniecLcLKovalenkoQELCharmPXSec(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::KovalenkoQELCharmPXSec[nElements] : new ::genie::KovalenkoQELCharmPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLKovalenkoQELCharmPXSec(void *p) {
      delete (static_cast<::genie::KovalenkoQELCharmPXSec*>(p));
   }
   static void deleteArray_geniecLcLKovalenkoQELCharmPXSec(void *p) {
      delete [] (static_cast<::genie::KovalenkoQELCharmPXSec*>(p));
   }
   static void destruct_geniecLcLKovalenkoQELCharmPXSec(void *p) {
      typedef ::genie::KovalenkoQELCharmPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::KovalenkoQELCharmPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSlowRsclCharmDISPXSecLO(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SlowRsclCharmDISPXSecLO : new ::genie::SlowRsclCharmDISPXSecLO;
   }
   static void *newArray_geniecLcLSlowRsclCharmDISPXSecLO(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::SlowRsclCharmDISPXSecLO[nElements] : new ::genie::SlowRsclCharmDISPXSecLO[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSlowRsclCharmDISPXSecLO(void *p) {
      delete (static_cast<::genie::SlowRsclCharmDISPXSecLO*>(p));
   }
   static void deleteArray_geniecLcLSlowRsclCharmDISPXSecLO(void *p) {
      delete [] (static_cast<::genie::SlowRsclCharmDISPXSecLO*>(p));
   }
   static void destruct_geniecLcLSlowRsclCharmDISPXSecLO(void *p) {
      typedef ::genie::SlowRsclCharmDISPXSecLO current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::SlowRsclCharmDISPXSecLO

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGPhChmXS() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGPhChmXS) = RecordReadRules_libGPhChmXS();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGPhChmXS));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGPhChmXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/Charm/XSection",
"GENIE",
"GENIE/Physics/Charm/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Charm/XSection",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Physics/Charm/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhChmXS dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  AivazisCharmPXSecLO;}
namespace genie{class  KovalenkoQELCharmPXSec;}
namespace genie{class  SlowRsclCharmDISPXSecLO;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhChmXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::AivazisCharmPXSecLO

\brief    Computes, at Leading Order (LO), the differential cross section for
          neutrino charm production using the \b Aivazis,Olness,Tung model.
          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      M.A.G.Aivazis, F.I.Olness and W.K.Tung
          Phys.Rev.D50, 3085-3101 (1994)

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  June 10, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _AIVAZIS_CHARM_PARTIAL_XSEC_LO_H_
#define _AIVAZIS_CHARM_PARTIAL_XSEC_LO_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class PDFModelI;
class XSecIntegratorI;

class AivazisCharmPXSecLO : public XSecAlgorithmI {

public:
  AivazisCharmPXSecLO();
  AivazisCharmPXSecLO(string config);
  virtual ~AivazisCharmPXSecLO();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  void LoadConfig(void);

  const PDFModelI *       fPDFModel;
  const XSecIntegratorI * fXSecIntegrator;

  //bool   fDContributes;
  //bool   fSContributes;
  double fMc;
  double fVcd;
  double fVcs;
  double fMc2;
  double fVcd2;
  double fVcs2;
};

}       // genie namespace
#endif  // _AIVAZIS_CHARM_PARTIAL_XSEC_LO_H_
//____________________________________________________________________________
/*!

\class    genie::KovalenkoQELCharmPXSec

\brief    Computes the QEL Charm Production Differential Cross Section
          using \b Kovalenko's duality model approach.
          It models the differential cross sections for: \n
             \li v + n \rightarrow mu- + Lambda_{c}^{+} (2285)
             \li v + n \rightarrow mu- + Sigma_{c}^{+}  (2455)
             \li v + p \rightarrow mu- + Sigma_{c}^{++} (2455)
          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      S.G.Kovalenko, Sov.J.Nucl.Phys.52:934 (1990)

          Rather than using Kovalenko's expression for the ZR scaling factor,
          I apply an ad-hoc scaling factor maintaining the relative strength
          of the QELC channels but lowering their sum to be consistent with
          recent NOMAD measurement. The default value of M0 has been changed
          from 0.1 to sqrt(0.1) as in M.Bischofberger's (ETHZ)PhD thesis
          (DISS.ETH NO 16034). For more details see GENIE-PUB/2007/006.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  June 10, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _KOVALENKO_QEL_CHARM_PARTIAL_XSEC_H_
#define _KOVALENKO_QEL_CHARM_PARTIAL_XSEC_H_

#include <Math/IFunction.h>

#include "Framework/EventGen/XSecAlgorithmI.h"
//#include "Numerical/GSFunc.h"

namespace genie {

class PDF;
class PDFModelI;
class IntegratorI;
class XSecIntegratorI;

class KovalenkoQELCharmPXSec : public XSecAlgorithmI {

public:
  KovalenkoQELCharmPXSec();
  KovalenkoQELCharmPXSec(string config);
  virtual ~KovalenkoQELCharmPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
  bool   ValidKinematics (const Interaction * i) const;

  // Override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  void  LoadConfig (void);

  double ZR    (const Interaction * interaction)  const;
  double DR    (const Interaction * interaction)  const;
  double MRes  (const Interaction * interaction)  const;
  double ResDM (const Interaction * interaction)  const;
  double xiBar (double Q2, double Mnuc, double v) const;

  const PDFModelI *       fPDFModel;
///  const IntegratorI *     fIntegrator;
  const XSecIntegratorI * fXSecIntegrator;

  double fMo;
  double fScLambdaP;
  double fScSigmaP;
  double fScSigmaPP;
  double fResDMLambda;
  double fResDMSigma;
};

} // genie namespace

//____________________________________________________________________________
/*!
\class    genie::utils::gsl::wrap::KovQELCharmIntegrand

\brief    Auxiliary scalar function for the internal integration in Kovalenko
          QEL charm production cross section algorithm

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  February 20, 2006
*/
//____________________________________________________________________________

namespace genie {
 namespace utils {
  namespace gsl   {
   namespace wrap   {

    class KovQELCharmIntegrand : public ROOT::Math::IBaseFunctionOneDim
    {
     public:
       KovQELCharmIntegrand(PDF * pdf, double Q2, int nucleon_pdgc);
      ~KovQELCharmIntegrand();
       // ROOT::Math::IBaseFunctionOneDim interface
       unsigned int                      NDim   (void)       const;
       double                            DoEval (double xin) const;
       ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
     private:
       PDF *  fPDF;
       double fQ2;
       int    fPdgC;
    };

   } // wrap namespace
  } // gsl namespace
 } // utils namespace
} // genie namespace

#endif  // _KOVALENKO_QEL_CHARM_PARTIAL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::SlowRsclCharmDISPXSecLO

\brief    Computes, at Leading Order (LO), the differential cross section for
          neutrino charm production using a slow rescaling model.
          Is a concrete implementation of the XSecAlgorithmI interface.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  March 17, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _SLOW_RESCALING_CHARM_DIS_PARTIAL_XSEC_LO_H_
#define _SLOW_RESCALING_CHARM_DIS_PARTIAL_XSEC_LO_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class PDFModelI;
class XSecIntegratorI;

class SlowRsclCharmDISPXSecLO : public XSecAlgorithmI {

public:
  SlowRsclCharmDISPXSecLO();
  SlowRsclCharmDISPXSecLO(string config);
  virtual ~SlowRsclCharmDISPXSecLO();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  //-- override the Algorithm::Configure methods to load configuration
  //   data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  void LoadConfig (void);

  const PDFModelI *       fPDFModel;
  const XSecIntegratorI * fXSecIntegrator;

//bool   fDContributes;
//bool   fSContributes;
  double fMc;
  double fVcd;
  double fVcs;
  double fMc2;
  double fVcd2;
  double fVcs2;
};

}       // genie namespace
#endif  // _SLOW_RESCALING_CHARM_DIS_PARTIAL_XSEC_LO_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::AivazisCharmPXSecLO", payloadCode, "@",
"genie::KovalenkoQELCharmPXSec", payloadCode, "@",
"genie::SlowRsclCharmDISPXSecLO", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhChmXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhChmXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhChmXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhChmXS() {
  TriggerDictionaryInitialization_libGPhChmXS_Impl();
}
