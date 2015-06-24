#ifndef __PYX_HAVE__variant
#define __PYX_HAVE__variant


#ifndef __PYX_HAVE_API__variant

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C DL_IMPORT(int) PLATYPUS_VAR;
__PYX_EXTERN_C DL_IMPORT(int) FILE_VAR;
__PYX_EXTERN_C DL_IMPORT(int) ASSEMBLER_VAR;

#endif /* !__PYX_HAVE_API__variant */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initvariant(void);
#else
PyMODINIT_FUNC PyInit_variant(void);
#endif

#endif /* !__PYX_HAVE__variant */
