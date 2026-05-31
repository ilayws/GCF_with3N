// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_FwParDat
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
#include "BaryonResList.h"
#include "BaryonResUtils.h"
#include "NaturalIsotopes.h"
#include "PDGCodeList.h"
#include "PDGLibrary.h"
#include "PDGUtils.h"

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
            instance("genie", 0 /*version*/, "BaryonResonance.h", 22,
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
      namespace res {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLres_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::res", 0 /*version*/, "", 116,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLutilscLcLres_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLres_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace pdg {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLpdg_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::pdg", 0 /*version*/, "", 412,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &geniecLcLpdg_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLpdg_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *geniecLcLBaryonResList_Dictionary();
   static void geniecLcLBaryonResList_TClassManip(TClass*);
   static void *new_geniecLcLBaryonResList(void *p = nullptr);
   static void *newArray_geniecLcLBaryonResList(Long_t size, void *p);
   static void delete_geniecLcLBaryonResList(void *p);
   static void deleteArray_geniecLcLBaryonResList(void *p);
   static void destruct_geniecLcLBaryonResList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BaryonResList*)
   {
      ::genie::BaryonResList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BaryonResList));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BaryonResList", "", 39,
                  typeid(::genie::BaryonResList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBaryonResList_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BaryonResList) );
      instance.SetNew(&new_geniecLcLBaryonResList);
      instance.SetNewArray(&newArray_geniecLcLBaryonResList);
      instance.SetDelete(&delete_geniecLcLBaryonResList);
      instance.SetDeleteArray(&deleteArray_geniecLcLBaryonResList);
      instance.SetDestructor(&destruct_geniecLcLBaryonResList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BaryonResList*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::BaryonResList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::BaryonResList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBaryonResList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::BaryonResList*>(nullptr))->GetClass();
      geniecLcLBaryonResList_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBaryonResList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNaturalIsotopes_Dictionary();
   static void geniecLcLNaturalIsotopes_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NaturalIsotopes*)
   {
      ::genie::NaturalIsotopes *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NaturalIsotopes));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NaturalIsotopes", "", 185,
                  typeid(::genie::NaturalIsotopes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNaturalIsotopes_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NaturalIsotopes) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NaturalIsotopes*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NaturalIsotopes*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NaturalIsotopes*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNaturalIsotopes_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NaturalIsotopes*>(nullptr))->GetClass();
      geniecLcLNaturalIsotopes_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNaturalIsotopes_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNaturalIsotopeElementData_Dictionary();
   static void geniecLcLNaturalIsotopeElementData_TClassManip(TClass*);
   static void *new_geniecLcLNaturalIsotopeElementData(void *p = nullptr);
   static void *newArray_geniecLcLNaturalIsotopeElementData(Long_t size, void *p);
   static void delete_geniecLcLNaturalIsotopeElementData(void *p);
   static void deleteArray_geniecLcLNaturalIsotopeElementData(void *p);
   static void destruct_geniecLcLNaturalIsotopeElementData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NaturalIsotopeElementData*)
   {
      ::genie::NaturalIsotopeElementData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NaturalIsotopeElementData));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NaturalIsotopeElementData", "", 217,
                  typeid(::genie::NaturalIsotopeElementData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNaturalIsotopeElementData_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NaturalIsotopeElementData) );
      instance.SetNew(&new_geniecLcLNaturalIsotopeElementData);
      instance.SetNewArray(&newArray_geniecLcLNaturalIsotopeElementData);
      instance.SetDelete(&delete_geniecLcLNaturalIsotopeElementData);
      instance.SetDeleteArray(&deleteArray_geniecLcLNaturalIsotopeElementData);
      instance.SetDestructor(&destruct_geniecLcLNaturalIsotopeElementData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NaturalIsotopeElementData*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::NaturalIsotopeElementData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::NaturalIsotopeElementData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNaturalIsotopeElementData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::NaturalIsotopeElementData*>(nullptr))->GetClass();
      geniecLcLNaturalIsotopeElementData_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNaturalIsotopeElementData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPDGCodeList_Dictionary();
   static void geniecLcLPDGCodeList_TClassManip(TClass*);
   static void *new_geniecLcLPDGCodeList(void *p = nullptr);
   static void *newArray_geniecLcLPDGCodeList(Long_t size, void *p);
   static void delete_geniecLcLPDGCodeList(void *p);
   static void deleteArray_geniecLcLPDGCodeList(void *p);
   static void destruct_geniecLcLPDGCodeList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PDGCodeList*)
   {
      ::genie::PDGCodeList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PDGCodeList));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PDGCodeList", "", 267,
                  typeid(::genie::PDGCodeList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPDGCodeList_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PDGCodeList) );
      instance.SetNew(&new_geniecLcLPDGCodeList);
      instance.SetNewArray(&newArray_geniecLcLPDGCodeList);
      instance.SetDelete(&delete_geniecLcLPDGCodeList);
      instance.SetDeleteArray(&deleteArray_geniecLcLPDGCodeList);
      instance.SetDestructor(&destruct_geniecLcLPDGCodeList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PDGCodeList*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PDGCodeList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PDGCodeList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPDGCodeList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PDGCodeList*>(nullptr))->GetClass();
      geniecLcLPDGCodeList_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPDGCodeList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPDGLibrary_Dictionary();
   static void geniecLcLPDGLibrary_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PDGLibrary*)
   {
      ::genie::PDGLibrary *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PDGLibrary));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PDGLibrary", "", 340,
                  typeid(::genie::PDGLibrary), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPDGLibrary_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PDGLibrary) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PDGLibrary*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::PDGLibrary*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::PDGLibrary*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPDGLibrary_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::PDGLibrary*>(nullptr))->GetClass();
      geniecLcLPDGLibrary_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPDGLibrary_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBaryonResList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BaryonResList : new ::genie::BaryonResList;
   }
   static void *newArray_geniecLcLBaryonResList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::BaryonResList[nElements] : new ::genie::BaryonResList[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBaryonResList(void *p) {
      delete (static_cast<::genie::BaryonResList*>(p));
   }
   static void deleteArray_geniecLcLBaryonResList(void *p) {
      delete [] (static_cast<::genie::BaryonResList*>(p));
   }
   static void destruct_geniecLcLBaryonResList(void *p) {
      typedef ::genie::BaryonResList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::BaryonResList

namespace ROOT {
} // end of namespace ROOT for class ::genie::NaturalIsotopes

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNaturalIsotopeElementData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NaturalIsotopeElementData : new ::genie::NaturalIsotopeElementData;
   }
   static void *newArray_geniecLcLNaturalIsotopeElementData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::NaturalIsotopeElementData[nElements] : new ::genie::NaturalIsotopeElementData[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNaturalIsotopeElementData(void *p) {
      delete (static_cast<::genie::NaturalIsotopeElementData*>(p));
   }
   static void deleteArray_geniecLcLNaturalIsotopeElementData(void *p) {
      delete [] (static_cast<::genie::NaturalIsotopeElementData*>(p));
   }
   static void destruct_geniecLcLNaturalIsotopeElementData(void *p) {
      typedef ::genie::NaturalIsotopeElementData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::NaturalIsotopeElementData

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPDGCodeList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PDGCodeList : new ::genie::PDGCodeList;
   }
   static void *newArray_geniecLcLPDGCodeList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::genie::PDGCodeList[nElements] : new ::genie::PDGCodeList[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPDGCodeList(void *p) {
      delete (static_cast<::genie::PDGCodeList*>(p));
   }
   static void deleteArray_geniecLcLPDGCodeList(void *p) {
      delete [] (static_cast<::genie::PDGCodeList*>(p));
   }
   static void destruct_geniecLcLPDGCodeList(void *p) {
      typedef ::genie::PDGCodeList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::PDGCodeList

namespace ROOT {
} // end of namespace ROOT for class ::genie::PDGLibrary

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGFwParDat() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGFwParDat) = RecordReadRules_libGFwParDat();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGFwParDat));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGFwParDat_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Framework/ParticleData",
"GENIE",
"GENIE/Framework/ParticleData",
"../include",
"../include/GENIE",
"../include/GENIE/Framework/ParticleData",
"/opt/homebrew/opt/libxml2/include/libxml2",
"/opt/homebrew/opt/log4cpp/include",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/",
"/opt/homebrew/Cellar/root/6.38.00/include/root",
"/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs/genQE_FSI/Generator-R-3_06_02/src/Framework/ParticleData/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGFwParDat dictionary forward declarations' payload"

#pragma diagnostic push
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class  BaryonResList;}
namespace genie{class  NaturalIsotopes;}
namespace genie{class  NaturalIsotopeElementData;}
namespace genie{class  PDGCodeList;}
namespace genie{class  PDGLibrary;}
#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGFwParDat dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::BaryonResList

\brief    Encapsulates a list of baryon resonances.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

\created  May 03, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _BARYON_RES_LIST_H_
#define _BARYON_RES_LIST_H_

#include <vector>
#include <iostream>
#include <string>
#include <iterator>

#include "Framework/ParticleData/BaryonResonance.h"

using std::vector;
using std::ostream;
using std::string;

namespace genie {

class BaryonResList;
ostream & operator << (ostream & stream, const BaryonResList & rl);

class BaryonResList
{
public:

  BaryonResList();
  BaryonResList(const BaryonResList & rl);
  virtual ~BaryonResList();

  void DecodeFromNameList (string list, string delimiter = ",");

  unsigned int NResonances        (void)              const;
  string       ResonanceName      (unsigned int ires) const;
  Resonance_t  ResonanceId        (unsigned int ires) const;
  int          ResonancePdgCode   (unsigned int ires) const;
  bool         Find               (Resonance_t res)   const;

  void Clear (void);
  void Copy  (const BaryonResList & rl);
  void Print (ostream & stream) const;

  friend ostream & operator << (ostream & stream, const BaryonResList & rl);
  auto begin() noexcept -> typename vector<Resonance_t>::iterator;
  auto end()  noexcept -> typename vector<Resonance_t>::iterator;
  auto begin() const noexcept -> typename vector<Resonance_t>::const_iterator;
  auto end() const noexcept -> typename vector<Resonance_t>::const_iterator;
  auto cbegin() const noexcept -> typename vector<Resonance_t>::const_iterator;
  auto cend() const noexcept -> typename vector<Resonance_t>::const_iterator;

private:

  vector<Resonance_t> * fResVec;
};

}       // genie namepace

#endif  // _BARYON_RES_LIST_H_
//____________________________________________________________________________
/*!

\namespace genie::utils::res

\brief     Baryon Resonance utilities.


  \authors    Costas Andreopoulos <c.andreopoulos \at cern.ch>
              University of Liverpool \n
              Updates were made by 
              Igor Kakorin <kakorin@jinr.ru> Joint Institute for Nuclear Research 
  
  \created   November 25, 2004
  
  \update   November 12, 2019
            Added extra functions for MK model. \n
            Updated resonance masses and widths according to PDG-2018. \n
            Added previously missing resonances P33(1600) and F17(1970). \n
            Now mass and widths are taken from PDG table via TDatabasePDG and cached. \n


\cpright   Copyright (c) 2003-2025, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _BARYON_RESONANCE_UTILS_H_
#define _BARYON_RESONANCE_UTILS_H_

#include <string>
#include <map>

#include "Framework/ParticleData/BaryonResonance.h"

using std::string;

namespace genie {

    namespace utils {
        namespace res {

            const char* AsString   (Resonance_t res);  ///< resonance id -> string
            Resonance_t FromString (const char * res); ///< string -> resonance id

            int         PdgCode     (Resonance_t res, int Q); ///< (resonance id, charge) -> PDG code
            Resonance_t FromPdgCode (int pdgc);               ///< PDG code -> resonance id

            bool        IsBaryonResonance (int pdgc);         		 ///< is input a baryon resonance?
            bool        IsDelta           (Resonance_t res);  		 ///< is it a Delta resonance?
            bool        IsN               (Resonance_t res);  		 ///< is it an N resonance?
            double      Mass              (Resonance_t res); 			 ///< resonance mass (GeV)
            double      Width             (Resonance_t res); 			 ///< resonance width (GeV)
            double      BWNorm            (Resonance_t res, 
					   double      N0ResMaxNWidths=6, 
					   double      N2ResMaxNWidths=2, 
					   double      GnResMaxNWidths=4);  ///< breit-wigner normalization factor
            int         OrbitalAngularMom (Resonance_t res);  		///< orbital angular momentum
            int         ResonanceIndex    (Resonance_t res);  		///< resonance idx, quark model / SU(6)
            int         Isospin           (Resonance_t res);
            int         AngularMom        (Resonance_t res);
            int         Cjsgn_plus        (Resonance_t res);
            int         Dsgn              (Resonance_t res);
/*
            // Not used in the latest version
            double      VectorPhase       (Resonance_t res);
            double      AxialPhase        (Resonance_t res);
            double      CV40              (Resonance_t res);
            double      CA50              (Resonance_t res);
*/ 

        }        // res   namespace
    }        // utils namespace
}        // genie namespace

#endif   // _BARYON_RESONANCE_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::NaturalIsotopes

\brief    Singleton class to load & serve tables of natural occurring isotopes

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

	        Jim Dobson <j.dobson07@imperial.ac.uk>
          Imperial College London

\created  May 30, 2008

\cpright   Copyright (c) 2003-2025, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _NATURAL_ISOTOPES_H_
#define _NATURAL_ISOTOPES_H_

#include <map>
#include <vector>

using std::map;
using std::vector;

namespace genie {

class NaturalIsotopeElementData;
class NaturalIsotopes
{
public:
  static NaturalIsotopes * Instance (void);

  int NElements(int Z) const;
  const NaturalIsotopeElementData * ElementData (int Z, int ielement) const;
  const NaturalIsotopeElementData * ElementDataPdg (int Z, int pdgcode) const;

private:
  NaturalIsotopes();
  NaturalIsotopes(const NaturalIsotopes &);
  virtual ~NaturalIsotopes();

  bool LoadTable(void);

  static NaturalIsotopes * fInstance;

  map<int, vector<NaturalIsotopeElementData*> > fNaturalIsotopesTable;

  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (NaturalIsotopes::fInstance !=0) {
            delete NaturalIsotopes::fInstance;
            NaturalIsotopes::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

class NaturalIsotopeElementData {
public:
  NaturalIsotopeElementData()                                              : fPdgCode(0),    fAbundance(0),         fAtomicMass(0)          { }
  NaturalIsotopeElementData(int code, double abundance, double atomicmass) : fPdgCode(code), fAbundance(abundance), fAtomicMass(atomicmass) { }
 ~NaturalIsotopeElementData() { }

  int    PdgCode   (void) const  { return fPdgCode;    }
  double Abundance (void) const  { return fAbundance;  }
  double AtomicMass (void) const { return fAtomicMass; }

private:
  int    fPdgCode;
  double fAbundance;
  double fAtomicMass;
};

}      // genie namespace
#endif // _NATURAL_ISOTOPES_H_
//____________________________________________________________________________
/*!

\class   genie::PDGCodeList

\brief   A list of PDG codes

\author  Costas Andreopoulos <c.andreopoulos \at cern.ch>
 University of Liverpool

\created May 13, 2005

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org          
*/
//____________________________________________________________________________

#ifndef _PDG_CODE_LIST_H_
#define _PDG_CODE_LIST_H_

#include <vector>
#include <ostream>

using std::vector;
using std::ostream;

namespace genie {

class PDGCodeList;
ostream & operator << (ostream & stream, const PDGCodeList & list);

class PDGCodeList : public vector<int> {

public :

  PDGCodeList(bool allowdup=false);
  PDGCodeList(size_type n, bool allowdup=false);
  PDGCodeList(const PDGCodeList & list);
  ~PDGCodeList();

  //! override the vector<int> insertion methods to explicitly check for
  //! PDG code validity and that no PDG code is listed more than once
  void push_back  (int pdg_code);
  void insert     (iterator pos, size_type n, const int& x);

  //! PDG code checks used by PDGCodeList
  bool CheckPDGCode        (int pdg_code) const;
  bool ExistsInPDGLibrary  (int pdg_code) const;
  bool ExistsInPDGCodeList (int pdg_code) const;

  //! copy / print
  void Copy  (const PDGCodeList & list);
  void Print (ostream & stream) const;

  //! check state
  bool DuplEntriesAllowed(void) const { return fAllowDuplicateEntries; }

  //! overloaded operators
  PDGCodeList &    operator =  (const PDGCodeList & list);
  friend ostream & operator << (ostream & stream, const PDGCodeList & list);

private:

  bool fAllowDuplicateEntries; ///< allow duplicate entries in the list?
};

}      // genie namespace

#endif // _PDG_CODE_LIST_H_
//____________________________________________________________________________
/*!

\class    genie::PDGLibrary

\brief    Singleton class to load & serve a TDatabasePDG.

\author   Costas Andreopoulos <c.andreopoulos \at cern.ch>
          University of Liverpool

          Changes required to implement the GENIE Boosted Dark Matter module
          were installed by Josh Berger (Univ. of Wisconsin)

          Changes required to implement the GENIE Dark Neutrino module
          were installed by Iker de Icaza (Univ. of Sussex)

	  Changes required to implement the GENIE BeamHNL module
	  were installed by John Plows (Univ. of Oxford)

\created  May 06, 2004

\cpright  Copyright (c) 2003-2025, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _PDG_LIBRARY_H_
#define _PDG_LIBRARY_H_

#include <TDatabasePDG.h>
#include <TParticlePDG.h>

namespace genie {

class PDGLibrary
{
public:

  static PDGLibrary * Instance(void);

  TDatabasePDG * DBase (void);
  TParticlePDG * Find  (int pdgc, bool must_exist = true );
  void           ReloadDBase (void);

  // Add dark matter and mediator with parameters from Boosted Dark Matter app configuration
  // Ideally, this code should be in the Dark Matter app, not here.
  // But presently there is no way to edit the PDGLibrary after it has been created.
  void AddDarkMatter  (double mass, double med_ratio);

private:

  PDGLibrary();
  PDGLibrary(const PDGLibrary & config_pool);
  virtual ~PDGLibrary();

  bool LoadDBase(void);
  bool AddDarkSector ();
  bool AddHNL  (void);

  static PDGLibrary * fInstance;
  TDatabasePDG      * fDatabasePDG;

  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (PDGLibrary::fInstance !=0) {
            delete PDGLibrary::fInstance;
            PDGLibrary::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace

#endif // _PDG_LIBRARY_H_
//____________________________________________________________________________
/*!

\namespace genie::pdg

\brief     Utilities for improving the code readability when using PDG codes.

\author    Costas Andreopoulos <c.andreopoulos \at cern.ch>
           University of Liverpool

           Changes required to implement the GENIE Boosted Dark Matter module
           were installed by Josh Berger (Univ. of Wisconsin)

	   Changes required to implement the GENIE BeamHNL module
	   were installed by John Plows (Univ. of Oxford)

\created   May 06, 2004

\cpright   Copyright (c) 2003-2025, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _PDG_UTILS_H_
#define _PDG_UTILS_H_

namespace genie {

namespace pdg
{
  bool IsPseudoParticle   (int pdgc);
  bool IsIon              (int pdgc);
  bool IsParticle         (int pdgc); ///< not ion or pseudo-particle

  int  IonPdgCodeToZ      (int pdgc);
  int  IonPdgCodeToA      (int pdgc);
  int  IonPdgCode         (int A, int Z);
  int  IonPdgCode         (int A, int Z, int L, int I);

  bool IsLepton           (int pdgc);
  bool IsNeutralLepton    (int pdgc);
  bool IsChargedLepton    (int pdgc);

  bool IsNeutrino         (int pdgc);
  bool IsAntiNeutrino     (int pdgc);
  bool IsNegChargedLepton (int pdgc);
  bool IsPosChargedLepton (int pdgc);

  bool IsDarkMatter       (int pdgc);
  bool IsAntiDarkMatter   (int pdgc);

  bool IsNuE              (int pdgc);
  bool IsNuMu             (int pdgc);
  bool IsNuTau            (int pdgc);
  bool IsAntiNuE          (int pdgc);
  bool IsAntiNuMu         (int pdgc);
  bool IsAntiNuTau        (int pdgc);

  bool IsElectron         (int pdgc);
  bool IsPositron         (int pdgc);
  bool IsMuon             (int pdgc);
  bool IsAntiMuon         (int pdgc);
  bool IsTau              (int pdgc);
  bool IsAntiTau          (int pdgc);

  bool IsDiQuark          (int pdgc);
  bool IsQuark            (int pdgc);
  bool IsUQuark           (int pdgc);
  bool IsDQuark           (int pdgc);
  bool IsSQuark           (int pdgc);
  bool IsCQuark           (int pdgc);
  bool IsBQuark           (int pdgc);
  bool IsTQuark           (int pdgc);
  bool IsAntiQuark        (int pdgc);
  bool IsAntiUQuark       (int pdgc);
  bool IsAntiDQuark       (int pdgc);
  bool IsAntiSQuark       (int pdgc);
  bool IsAntiCQuark       (int pdgc);
  bool IsAntiBQuark       (int pdgc);
  bool IsAntiTQuark       (int pdgc);
  
  bool IsKaon             (int pdgc);
  bool IsPion             (int pdgc);
  bool IsProton           (int pdgc);
  bool IsNeutron          (int pdgc);
  bool IsNucleon          (int pdgc);
  bool IsNeutronOrProton  (int pdgc);
  bool IsHadron           (int pdgc);
  bool IsBaryonResonance  (int pdgc);
  bool Is2NucleonCluster  (int pdgc);

  bool IsDarkSectorParticle   (int pdgc);
  bool IsHNL              (int pdgc);

  int  SwitchProtonNeutron    (int pdgc);
  int  ModifyNucleonCluster   (int pdgc, int dQ);
  int  Neutrino2ChargedLepton (int pdgc);

  int  GeantToPdg (int geant_code);

}      // pdg namespace
}      // genie namespace

#endif // _PDG_UTILS_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::BaryonResList", payloadCode, "@",
"genie::NaturalIsotopeElementData", payloadCode, "@",
"genie::NaturalIsotopes", payloadCode, "@",
"genie::PDGCodeList", payloadCode, "@",
"genie::PDGLibrary", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGFwParDat",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGFwParDat_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGFwParDat_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGFwParDat() {
  TriggerDictionaryInitialization_libGFwParDat_Impl();
}
