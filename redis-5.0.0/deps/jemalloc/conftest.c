/* confdefs.h */
#define PACKAGE_NAME ""
#define PACKAGE_TARNAME ""
#define PACKAGE_VERSION ""
#define PACKAGE_STRING ""
#define PACKAGE_BUGREPORT ""
#define PACKAGE_URL ""
#define JEMALLOC_HAS_RESTRICT 1
#define HAVE_CXX14 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define SIZEOF_VOID_P 8
#define LG_SIZEOF_PTR 3
#define SIZEOF_INT 4
#define LG_SIZEOF_INT 2
#define SIZEOF_LONG 8
#define LG_SIZEOF_LONG 3
#define SIZEOF_LONG_LONG 8
#define LG_SIZEOF_LONG_LONG 3
#define SIZEOF_INTMAX_T 8
#define LG_SIZEOF_INTMAX_T 3
#define HAVE_CPU_SPINWAIT 1
#define CPU_SPINWAIT __asm__ volatile("pause")
#define LG_VADDR 48
#define LG_VADDR 48
#define JEMALLOC_PURGE_MADVISE_DONTNEED_ZEROS  
#define JEMALLOC_HAS_ALLOCA_H 1
#define JEMALLOC_PROC_SYS_VM_OVERCOMMIT_MEMORY  
#define JEMALLOC_THREADED_INIT  
#define JEMALLOC_USE_CXX_THROW  
#define HAVE_MALLOC_H 1
#define JEMALLOC_USABLE_SIZE_CONST 
#define JEMALLOC_HAVE_ATTR  
#define JEMALLOC_HAVE_ATTR_ALLOC_SIZE  
#define JEMALLOC_HAVE_ATTR_FORMAT_GNU_PRINTF  
#define JEMALLOC_HAVE_ATTR_FORMAT_PRINTF  
#define JEMALLOC_PREFIX "je_"
#define JEMALLOC_CPREFIX "JE_"
#define JEMALLOC_OVERRIDE_MEMALIGN  
#define JEMALLOC_OVERRIDE_VALLOC  
#define JEMALLOC_PRIVATE_NAMESPACE je_
#define JEMALLOC_CONFIG_MALLOC_CONF ""
#define JEMALLOC_STATS  
#define JEMALLOC_MAPS_COALESCE  
#define JEMALLOC_RETAIN  
#define JEMALLOC_DSS  
#define JEMALLOC_FILL  
#define JEMALLOC_CACHE_OBLIVIOUS  
#define JEMALLOC_INTERNAL_UNREACHABLE __builtin_unreachable
#define JEMALLOC_INTERNAL_FFSLL __builtin_ffsll
#define JEMALLOC_INTERNAL_FFSL __builtin_ffsl
#define JEMALLOC_INTERNAL_FFS __builtin_ffs
#define LG_QUANTUM 3
#define LG_PAGE 12
#define LG_HUGEPAGE 21
#define JEMALLOC_HAVE_PTHREAD  
#define HAVE_PTHREAD_H 1
#define HAVE_DLFCN_H 1
#define JEMALLOC_HAVE_DLSYM  
#define JEMALLOC_HAVE_PTHREAD_ATFORK  
#define JEMALLOC_HAVE_PTHREAD_SETNAME_NP  
#define JEMALLOC_HAVE_CLOCK_MONOTONIC_COARSE 1
#define JEMALLOC_HAVE_CLOCK_MONOTONIC 1
#define JEMALLOC_USE_SYSCALL  
#define JEMALLOC_HAVE_SECURE_GETENV  
#define JEMALLOC_HAVE_SCHED_GETCPU  
/* end confdefs.h.  */
/* Define sched_setaffinity to an innocuous variant, in case <limits.h> declares sched_setaffinity.
   For example, HP-UX 11i <limits.h> declares gettimeofday.  */
#define sched_setaffinity innocuous_sched_setaffinity

/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char sched_setaffinity (); below.
    Prefer <limits.h> to <assert.h> if __STDC__ is defined, since
    <limits.h> exists even on freestanding compilers.  */

#ifdef __STDC__
# include <limits.h>
#else
# include <assert.h>
#endif

#undef sched_setaffinity

/* Override any GCC internal prototype to avoid an error.
   Use char because int might match the return type of a GCC
   builtin and then its argument prototype would still apply.  */
#ifdef __cplusplus
extern "C"
#endif
char sched_setaffinity ();
/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined __stub_sched_setaffinity || defined __stub___sched_setaffinity
choke me
#endif

int
main ()
{
return sched_setaffinity ();
  ;
  return 0;
}
