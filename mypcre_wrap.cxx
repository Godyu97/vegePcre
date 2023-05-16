/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.1.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

// source: mypcre.i



#define SWIG_VERSION 0x040101
#define SWIGGO
#define SWIGMODULE vegePcre
/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef long long intgo;
typedef unsigned long long uintgo;


# if !defined(__clang__) && (defined(__i386__) || defined(__x86_64__))
#   define SWIGSTRUCTPACKED __attribute__((__packed__, __gcc_struct__))
# else
#   define SWIGSTRUCTPACKED __attribute__((__packed__))
# endif



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;



static _gostring_ Swig_AllocateString(const char *p, size_t l) {
  _gostring_ ret;
  ret.p = (char*)malloc(l);
  memcpy(ret.p, p, l);
  ret.n = l;
  return ret;
}


#ifdef __cplusplus
#include <utility>
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigSmartPointer {
    T *ptr;
    SwigSmartPointer(T *p) : ptr(p) { }
    ~SwigSmartPointer() { delete ptr; }
    SwigSmartPointer& operator=(SwigSmartPointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
    void reset(T *p) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = p; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigSmartPointer tmp(new T(t)); pointer = tmp; return *this; }
#if __cplusplus >=201103L
  SwigValueWrapper& operator=(T&& t) { SwigSmartPointer tmp(new T(std::move(t))); pointer = tmp; return *this; }
  operator T&&() const { return std::move(*pointer.ptr); }
#else
  operator T&() const { return *pointer.ptr; }
#endif
  T *operator&() const { return pointer.ptr; }
  static void reset(SwigValueWrapper& t, T *p) { t.pointer.reset(p); }
};

/*
 * SwigValueInit() is a generic initialisation solution as the following approach:
 * 
 *       T c_result = T();
 * 
 * doesn't compile for all types for example:
 * 
 *       unsigned int c_result = unsigned int();
 */
template <typename T> T SwigValueInit() {
  return T();
}

#if __cplusplus >=201103L
# define SWIG_STD_MOVE(OBJ) std::move(OBJ)
#else
# define SWIG_STD_MOVE(OBJ) OBJ
#endif

#endif


static void Swig_free(void* p) {
  free(p);
}

static void* Swig_malloc(int c) {
  return malloc(c);
}


    #include "mypcre.h"

#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_vegePcre_44c91aeb9b22adeb(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  Swig_free(arg1);
  
}


void *_wrap_Swig_malloc_vegePcre_44c91aeb9b22adeb(intgo _swig_go_0) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


_gostring_ _wrap_Pcrecpp_Replace_vegePcre_44c91aeb9b22adeb(_gostring_ _swig_go_0, _gostring_ _swig_go_1, _gostring_ _swig_go_2, _gostring_ _swig_go_3) {
  char *arg1 = (char *) 0 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  char *arg4 = (char *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  arg2 = (char *)malloc(_swig_go_1.n + 1);
  memcpy(arg2, _swig_go_1.p, _swig_go_1.n);
  arg2[_swig_go_1.n] = '\0';
  
  
  arg3 = (char *)malloc(_swig_go_2.n + 1);
  memcpy(arg3, _swig_go_2.p, _swig_go_2.n);
  arg3[_swig_go_2.n] = '\0';
  
  
  arg4 = (char *)malloc(_swig_go_3.n + 1);
  memcpy(arg4, _swig_go_3.p, _swig_go_3.n);
  arg4[_swig_go_3.n] = '\0';
  
  
  result = (char *)Pcrecpp_Replace(arg1,arg2,arg3,arg4);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  free(arg1); 
  free(arg2); 
  free(arg3); 
  free(arg4); 
  return _swig_go_result;
}


_gostring_ _wrap_Pcrecpp_MatchFirst_vegePcre_44c91aeb9b22adeb(_gostring_ _swig_go_0, _gostring_ _swig_go_1, _gostring_ _swig_go_2) {
  char *arg1 = (char *) 0 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  arg2 = (char *)malloc(_swig_go_1.n + 1);
  memcpy(arg2, _swig_go_1.p, _swig_go_1.n);
  arg2[_swig_go_1.n] = '\0';
  
  
  arg3 = (char *)malloc(_swig_go_2.n + 1);
  memcpy(arg3, _swig_go_2.p, _swig_go_2.n);
  arg3[_swig_go_2.n] = '\0';
  
  
  result = (char *)Pcrecpp_MatchFirst(arg1,arg2,arg3);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  free(arg1); 
  free(arg2); 
  free(arg3); 
  return _swig_go_result;
}


#ifdef __cplusplus
}
#endif

