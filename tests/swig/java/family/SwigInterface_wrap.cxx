/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.1
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

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


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1,
  SWIG_JavaIOException,
  SWIG_JavaRuntimeException,
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError,
  SWIG_JavaIllegalStateException,
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { SWIG_JavaIllegalStateException, "java/lang/IllegalStateException" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include <string>


#include <typeinfo>
#include <stdexcept>


#include <map>
#include <stdexcept>


#include <vector>
#include <stdexcept>

SWIGINTERN std::map< std::string,std::string,std::less< std::string > >::iterator std_map_Sl_std_string_Sc_std_string_Sg__iterator_getNextUnchecked(std::map< std::string,std::string >::iterator *self){
          std::map< std::string, std::string, std::less< std::string > >::iterator copy = (*self);
          return ++copy;
        }
SWIGINTERN bool std_map_Sl_std_string_Sc_std_string_Sg__iterator_isNot(std::map< std::string,std::string >::iterator const *self,std::map< std::string,std::string >::iterator other){
          return (*self != other);
        }
SWIGINTERN std::string std_map_Sl_std_string_Sc_std_string_Sg__iterator_getKey(std::map< std::string,std::string >::iterator const *self){
          return (*self)->first;
        }
SWIGINTERN std::string std_map_Sl_std_string_Sc_std_string_Sg__iterator_getValue(std::map< std::string,std::string >::iterator const *self){
          return (*self)->second;
        }
SWIGINTERN void std_map_Sl_std_string_Sc_std_string_Sg__iterator_setValue(std::map< std::string,std::string >::iterator *self,std::string const &newValue){
          (*self)->second = newValue;
        }

/* Check for overflow converting to Java int (always signed 32-bit) from (unsigned variable-bit) size_t */
SWIGINTERN jint SWIG_JavaIntFromSize_t(size_t size) {
  static const jint JINT_MAX = 0x7FFFFFFF;
  return (size > (size_t)JINT_MAX) ? -1 : (jint)size;
}


  SWIGINTERN jint SWIG_MapSize(size_t size) {
    jint sz = SWIG_JavaIntFromSize_t(size);
    if (sz == -1) {
      throw std::out_of_range("map size is too large to fit into a Java int");
    }

    return sz;
  }

SWIGINTERN jint std_map_Sl_std_string_Sc_std_string_Sg__sizeImpl(std::map< std::string,std::string > const *self){
        return SWIG_MapSize(self->size());
      }
SWIGINTERN bool std_map_Sl_std_string_Sc_std_string_Sg__containsImpl(std::map< std::string,std::string > *self,std::string const &key){
        return (self->count(key) > 0);
      }
SWIGINTERN void std_map_Sl_std_string_Sc_std_string_Sg__putUnchecked(std::map< std::string,std::string > *self,std::string const &key,std::string const &value){
        (*self)[key] = value;
      }
SWIGINTERN void std_map_Sl_std_string_Sc_std_string_Sg__removeUnchecked(std::map< std::string,std::string > *self,std::map< std::string,std::string,std::less< std::string > >::iterator const itr){
        self->erase(itr);
      }

#include "SwigInterface.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
souffle::SouffleProgram *prog;
souffle::Relation *rel;
souffle::Relation *rel_out; 

void
loadInput(const map<string, string> &val, const string &prog_ins, const string &rel_name, const string &rel_name_out)
{
    prog = souffle::ProgramFactory::newInstance(prog_ins); 
    rel = prog->getRelation(rel_name);

    map<string, string>::const_iterator i = val.begin();
    map<string, string>::const_iterator end = val.end();
    cout << "Input \n";
    while (i != end) {
        cout << i->first << " : " << i->second << endl;
        souffle::tuple t(rel);
        t << i->first << i->second;
        rel->insert(t);      
        ++i;
    }
prog->run();

rel_out = prog->getRelation(rel_name_out);
cout << "Output \n";
            // iterate over output relation 
            for(auto &output : *rel_out ) { 
               std::string src, dest; 

               // retrieve elements from tuple 
               output >> src >> dest;

               // print source and destination node 
               cout << src << " - " << dest << "\n";
            }
 
prog->printAll(".");
}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_SwigInterfaceJNI_new_1map_1string_1string_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::map< std::string,std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::map< std::string,std::string > *)new std::map< std::string,std::string >();
  *(std::map< std::string,std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_SwigInterfaceJNI_new_1map_1string_1string_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::map< std::string,std::string > *arg1 = 0 ;
  std::map< std::string,std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::map< std::string,std::string > const & reference is null");
    return 0;
  } 
  result = (std::map< std::string,std::string > *)new std::map< std::string,std::string >((std::map< std::string,std::string > const &)*arg1);
  *(std::map< std::string,std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_SwigInterfaceJNI_map_1string_1string_1Iterator_1getNextUnchecked(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::map< std::string,std::string >::iterator *arg1 = (std::map< std::string,std::string >::iterator *) 0 ;
  std::map< std::string,std::string,std::less< std::string > >::iterator result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string >::iterator **)&jarg1; 
  result = std_map_Sl_std_string_Sc_std_string_Sg__iterator_getNextUnchecked(arg1);
  *(std::map< std::string,std::string,std::less< std::string > >::iterator **)&jresult = new std::map< std::string,std::string,std::less< std::string > >::iterator((const std::map< std::string,std::string,std::less< std::string > >::iterator &)result); 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_SwigInterfaceJNI_map_1string_1string_1Iterator_1isNot(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jboolean jresult = 0 ;
  std::map< std::string,std::string >::iterator *arg1 = (std::map< std::string,std::string >::iterator *) 0 ;
  std::map< std::string,std::string >::iterator arg2 ;
  std::map< std::string,std::string >::iterator *argp2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(std::map< std::string,std::string >::iterator **)&jarg1; 
  argp2 = *(std::map< std::string,std::string >::iterator **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null std::map< std::string,std::string >::iterator");
    return 0;
  }
  arg2 = *argp2; 
  result = (bool)std_map_Sl_std_string_Sc_std_string_Sg__iterator_isNot((std::map< std::string,std::string >::iterator const *)arg1,arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_SwigInterfaceJNI_map_1string_1string_1Iterator_1getKey(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  std::map< std::string,std::string >::iterator *arg1 = (std::map< std::string,std::string >::iterator *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string >::iterator **)&jarg1; 
  result = std_map_Sl_std_string_Sc_std_string_Sg__iterator_getKey((std::map< std::string,std::string >::iterator const *)arg1);
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_SwigInterfaceJNI_map_1string_1string_1Iterator_1getValue(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  std::map< std::string,std::string >::iterator *arg1 = (std::map< std::string,std::string >::iterator *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string >::iterator **)&jarg1; 
  result = std_map_Sl_std_string_Sc_std_string_Sg__iterator_getValue((std::map< std::string,std::string >::iterator const *)arg1);
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_map_1string_1string_1Iterator_1setValue(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  std::map< std::string,std::string >::iterator *arg1 = (std::map< std::string,std::string >::iterator *) 0 ;
  std::string *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string >::iterator **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  std_map_Sl_std_string_Sc_std_string_Sg__iterator_setValue(arg1,(std::string const &)*arg2);
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_delete_1map_1string_1string_1Iterator(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::map< std::string,std::string >::iterator *arg1 = (std::map< std::string,std::string >::iterator *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::map< std::string,std::string >::iterator **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jboolean JNICALL Java_SwigInterfaceJNI_map_1string_1string_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  result = (bool)((std::map< std::string,std::string > const *)arg1)->empty();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_map_1string_1string_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT jlong JNICALL Java_SwigInterfaceJNI_map_1string_1string_1find(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jlong jresult = 0 ;
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  std::string *arg2 = 0 ;
  std::map< std::string,std::string >::iterator result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (arg1)->find((std::string const &)*arg2);
  *(std::map< std::string,std::string >::iterator **)&jresult = new std::map< std::string,std::string >::iterator((const std::map< std::string,std::string >::iterator &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_SwigInterfaceJNI_map_1string_1string_1begin(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  std::map< std::string,std::string >::iterator result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  result = (arg1)->begin();
  *(std::map< std::string,std::string >::iterator **)&jresult = new std::map< std::string,std::string >::iterator((const std::map< std::string,std::string >::iterator &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_SwigInterfaceJNI_map_1string_1string_1end(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  std::map< std::string,std::string >::iterator result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  result = (arg1)->end();
  *(std::map< std::string,std::string >::iterator **)&jresult = new std::map< std::string,std::string >::iterator((const std::map< std::string,std::string >::iterator &)result); 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_SwigInterfaceJNI_map_1string_1string_1sizeImpl(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  jint result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  try {
    result = std_map_Sl_std_string_Sc_std_string_Sg__sizeImpl((std::map< std::string,std::string > const *)arg1);
  } catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return 0;
  }
  jresult = result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_SwigInterfaceJNI_map_1string_1string_1containsImpl(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (bool)std_map_Sl_std_string_Sc_std_string_Sg__containsImpl(arg1,(std::string const &)*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_map_1string_1string_1putUnchecked(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3) {
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  std::string arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  std_map_Sl_std_string_Sc_std_string_Sg__putUnchecked(arg1,(std::string const &)*arg2,(std::string const &)*arg3);
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_map_1string_1string_1removeUnchecked(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  std::map< std::string,std::string,std::less< std::string > >::iterator arg2 ;
  std::map< std::string,std::string,std::less< std::string > >::iterator const *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  argp2 = *(std::map< std::string,std::string,std::less< std::string > >::iterator **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null std::map< std::string,std::string,std::less< std::string > >::iterator const");
    return ;
  }
  arg2 = *argp2; 
  std_map_Sl_std_string_Sc_std_string_Sg__removeUnchecked(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_delete_1map_1string_1string(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::map< std::string,std::string > *arg1 = (std::map< std::string,std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::map< std::string,std::string > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_loadInput(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3, jstring jarg4) {
  std::map< std::string,std::string,std::less< std::string > > *arg1 = 0 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  std::string *arg4 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::map< std::string,std::string,std::less< std::string > > **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::map< std::string,std::string,std::less< std::string > > const & reference is null");
    return ;
  } 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  std::string arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return ;
  std::string arg4_str(arg4_pstr);
  arg4 = &arg4_str;
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  loadInput((std::map< std::string,std::string,std::less< std::string > > const &)*arg1,(std::string const &)*arg2,(std::string const &)*arg3,(std::string const &)*arg4);
}


SWIGEXPORT jlong JNICALL Java_SwigInterfaceJNI_new_1SWIGSouffleProgram(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  souffle::SouffleProgram *arg1 = (souffle::SouffleProgram *) 0 ;
  SWIGSouffleProgram *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(souffle::SouffleProgram **)&jarg1; 
  result = (SWIGSouffleProgram *)new SWIGSouffleProgram(arg1);
  *(SWIGSouffleProgram **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_delete_1SWIGSouffleProgram(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SWIGSouffleProgram *arg1 = (SWIGSouffleProgram *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SWIGSouffleProgram **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_SWIGSouffleProgram_1run(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  SWIGSouffleProgram *arg1 = (SWIGSouffleProgram *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SWIGSouffleProgram **)&jarg1; 
  (arg1)->run();
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_SWIGSouffleProgram_1runAll(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3) {
  SWIGSouffleProgram *arg1 = (SWIGSouffleProgram *) 0 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SWIGSouffleProgram **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  std::string arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  (arg1)->runAll((std::string const &)*arg2,(std::string const &)*arg3);
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_SWIGSouffleProgram_1loadAll(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  SWIGSouffleProgram *arg1 = (SWIGSouffleProgram *) 0 ;
  std::string *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SWIGSouffleProgram **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->loadAll((std::string const &)*arg2);
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_SWIGSouffleProgram_1printAll(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  SWIGSouffleProgram *arg1 = (SWIGSouffleProgram *) 0 ;
  std::string *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SWIGSouffleProgram **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->printAll((std::string const &)*arg2);
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_SWIGSouffleProgram_1dumpInputs_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  SWIGSouffleProgram *arg1 = (SWIGSouffleProgram *) 0 ;
  std::ostream *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SWIGSouffleProgram **)&jarg1; 
  arg2 = *(std::ostream **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::ostream & reference is null");
    return ;
  } 
  (arg1)->dumpInputs(*arg2);
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_SWIGSouffleProgram_1dumpInputs_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  SWIGSouffleProgram *arg1 = (SWIGSouffleProgram *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SWIGSouffleProgram **)&jarg1; 
  (arg1)->dumpInputs();
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_SWIGSouffleProgram_1dumpOutputs_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  SWIGSouffleProgram *arg1 = (SWIGSouffleProgram *) 0 ;
  std::ostream *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SWIGSouffleProgram **)&jarg1; 
  arg2 = *(std::ostream **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::ostream & reference is null");
    return ;
  } 
  (arg1)->dumpOutputs(*arg2);
}


SWIGEXPORT void JNICALL Java_SwigInterfaceJNI_SWIGSouffleProgram_1dumpOutputs_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  SWIGSouffleProgram *arg1 = (SWIGSouffleProgram *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SWIGSouffleProgram **)&jarg1; 
  (arg1)->dumpOutputs();
}


SWIGEXPORT jlong JNICALL Java_SwigInterfaceJNI_newInstance(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  std::string *arg1 = 0 ;
  SWIGSouffleProgram *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  std::string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  result = (SWIGSouffleProgram *)newInstance((std::string const &)*arg1);
  *(SWIGSouffleProgram **)&jresult = result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

