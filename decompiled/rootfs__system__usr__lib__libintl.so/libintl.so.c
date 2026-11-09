// libintl.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011194 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::stpcpy @ 000111b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_stpcpy_0002700c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::tsearch @ 000111c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * tsearch(void *__key,void **__rootp,__compar_fn_t __compar)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_tsearch_00027010)(__key);
  return pvVar1;
}



/* ===== <EXTERNAL>::strcpy @ 000111d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00027014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::getgid @ 000111dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_00027018)();
  return _Var1;
}



/* ===== <EXTERNAL>::__fsetlocking @ 000111e8 size=12 ===== */

void __fsetlocking(void)

{
  (*(code *)PTR___fsetlocking_0002701c)();
  return;
}



/* ===== libintl_bindtextdomain @ 000111f4 size=12 ===== */

void libintl_bindtextdomain(void)

{
  (*(code *)PTR_libintl_bindtextdomain_00027020)();
  return;
}



/* ===== <EXTERNAL>::pthread_rwlock_rdlock @ 00011200 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00027024)(__rwlock);
  return iVar1;
}



/* ===== <EXTERNAL>::geteuid @ 0001120c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_00027028)();
  return _Var1;
}



/* ===== <EXTERNAL>::pthread_rwlock_init @ 00011218 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_init(pthread_rwlock_t *__rwlock,pthread_rwlockattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_init_0002702c)(__rwlock);
  return iVar1;
}



/* ===== <EXTERNAL>::munmap @ 00011224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00027030)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00011230 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00027034)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::getegid @ 0001123c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_00027038)();
  return _Var1;
}



/* ===== <EXTERNAL>::bsearch @ 00011248 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_bsearch_0002703c)(__key);
  return pvVar1;
}



/* ===== <EXTERNAL>::qsort @ 00011254 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00027040)(__base);
  return;
}



/* ===== _nl_expand_alias @ 00011260 size=12 ===== */

void _nl_expand_alias(void)

{
  (*(code *)PTR__nl_expand_alias_00027044)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 0001126c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00027048)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_mutexattr_destroy @ 00011278 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_destroy_0002704c)(__attr);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011284 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00027050)();
  return;
}



/* ===== <EXTERNAL>::getuid @ 00011290 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_00027054)();
  return _Var1;
}



/* ===== <EXTERNAL>::malloc @ 0001129c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00027058)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_rwlock_destroy @ 000112a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_destroy(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_destroy_0002705c)(__rwlock);
  return iVar1;
}



/* ===== libintl_ngettext @ 000112b4 size=12 ===== */

void libintl_ngettext(void)

{
  (*(code *)PTR_libintl_ngettext_00027060)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 000112c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00027064)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::pthread_rwlock_unlock @ 000112cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00027068)(__rwlock);
  return iVar1;
}



/* ===== <EXTERNAL>::mempcpy @ 000112d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mempcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mempcpy_0002706c)(__dest);
  return pvVar1;
}



/* ===== libintl_dgettext @ 000112f0 size=12 ===== */

void libintl_dgettext(void)

{
  (*(code *)PTR_libintl_dgettext_00027074)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000112fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00027078)();
  return;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00011308 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0002707c)();
  return;
}



/* ===== <EXTERNAL>::libiconv_open @ 00011314 size=12 ===== */

void libiconv_open(void)

{
  (*(code *)PTR_libiconv_open_00027080)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 00011320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_00027084)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 0001132c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00027088)(__nmemb);
  return pvVar1;
}



/* ===== libintl_gettext @ 00011338 size=12 ===== */

void libintl_gettext(void)

{
  (*(code *)PTR_libintl_gettext_0002708c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011344 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00027090)();
  return;
}



/* ===== <EXTERNAL>::nl_langinfo @ 00011350 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * nl_langinfo(nl_item __item)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_nl_langinfo_00027094)(__item);
  return pcVar1;
}



/* ===== libintl_bind_textdomain_codeset @ 0001135c size=12 ===== */

void libintl_bind_textdomain_codeset(void)

{
  (*(code *)PTR_libintl_bind_textdomain_codeset_00027098)();
  return;
}



/* ===== <EXTERNAL>::tfind @ 00011368 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * tfind(void *__key,void **__rootp,__compar_fn_t __compar)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_tfind_0002709c)(__key);
  return pvVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011374 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000270a0)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 00011380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_000270a4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001138c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000270a8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_rwlock_wrlock @ 00011398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_000270ac)(__rwlock);
  return iVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 000113a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_000270b0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 000113b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000270b4)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::strdup @ 000113bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_000270b8)(__s);
  return pcVar1;
}



/* ===== libintl_dcgettext @ 000113c8 size=12 ===== */

void libintl_dcgettext(void)

{
  (*(code *)PTR_libintl_dcgettext_000270bc)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 000113d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000270c0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 000113e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_000270c4)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutexattr_settype @ 000113ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_settype(pthread_mutexattr_t *__attr,int __kind)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_settype_000270c8)(__attr);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000113f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000270cc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00011404 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000270d0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::getcwd @ 00011410 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_000270d4)(__buf);
  return pcVar1;
}



/* ===== libintl_dcngettext @ 0001141c size=12 ===== */

void libintl_dcngettext(void)

{
  (*(code *)PTR_libintl_dcngettext_000270d8)();
  return;
}



/* ===== <EXTERNAL>::strcspn @ 00011428 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_000270dc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 00011434 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_000270e0)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::fputc @ 00011440 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000270e4)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutexattr_init @ 0001144c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_init_000270e8)(__attr);
  return iVar1;
}



/* ===== <EXTERNAL>::libiconv @ 00011458 size=12 ===== */

void libiconv(void)

{
  (*(code *)PTR_libiconv_000270ec)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00011464 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_000270f0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011470 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000270f4)();
  return piVar1;
}



/* ===== libintl_dngettext @ 0001147c size=12 ===== */

void libintl_dngettext(void)

{
  (*(code *)PTR_libintl_dngettext_000270f8)();
  return;
}



/* ===== <EXTERNAL>::fgets_unlocked @ 00011488 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets_unlocked(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_unlocked_000270fc)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00011494 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00027100)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 000114a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00027104)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 000114ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00027108)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 000114b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002710c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000114c4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00027110)();
  return;
}



/* ===== <EXTERNAL>::close @ 000114d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00027114)(__fd);
  return iVar1;
}



/* ===== libintl_textdomain @ 000114dc size=12 ===== */

void libintl_textdomain(void)

{
  (*(code *)PTR_libintl_textdomain_00027118)();
  return;
}



/* ===== <EXTERNAL>::raise @ 000114e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002711c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000114f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00027120)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011500 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00027124)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 0001150c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00027128)(__filename);
  return pFVar1;
}



/* ===== entry @ 00011518 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011564 + 0x11530 == DAT_00011560 + 0x11528) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011568 + 0x11538 + DAT_0001156c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000115d4 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00011648 + 0x115f0;
  if (*(char *)(DAT_00011644 + 0x115e4) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001164c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011650 + 0x11610));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00011654) != 0) {
    __deregister_frame_info(DAT_00011658 + 0x11630);
  }
  *(undefined1 *)(DAT_0001165c + 0x11640) = 1;
  return;
}



/* ===== _INIT_0 @ 00011660 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011698 + 0x11670 + DAT_0001169c) != 0) {
    __register_frame_info(DAT_000116a4 + 0x11690,DAT_000116a0 + 0x1168c);
  }
  if (((DAT_000115c8 + 0x11588) - (DAT_000115c4 + 0x11580) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000115cc + 0x11590 + DAT_000115d0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000116a8 @ 000116a8 size=820 ===== */

void FUN_000116a8(char *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  size_t sVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *__s2;
  char *pcVar9;
  char *pcVar10;
  
  iVar7 = DAT_000119dc + 0x116c8;
  puVar5 = *(undefined4 **)(iVar7 + DAT_000119e0);
  puVar8 = (undefined4 *)*puVar5;
  for (puVar3 = puVar8; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
    iVar6 = strcmp(param_1,(char *)(puVar3 + 3));
    if (iVar6 == 0) {
      if (param_2 == (int *)0x0) {
LAB_000119b0:
        if (param_3 == (int *)0x0) goto LAB_00011840;
        bVar1 = false;
LAB_000119bc:
        pcVar4 = (char *)*param_3;
        pcVar10 = (char *)puVar3[2];
        if ((pcVar4 != (char *)0x0) &&
           ((pcVar10 == (char *)0x0 || (iVar6 = strcmp(pcVar4,pcVar10), iVar6 != 0)))) {
          pcVar4 = strdup(pcVar4);
          if (pcVar4 != (char *)0x0) {
            free(pcVar10);
            puVar3[2] = pcVar4;
            *param_3 = (int)pcVar4;
            goto LAB_000117dc;
          }
          pcVar10 = (char *)0x0;
        }
        *param_3 = (int)pcVar10;
      }
      else {
        pcVar10 = (char *)*param_2;
        pcVar4 = (char *)puVar3[1];
        if (pcVar10 == (char *)0x0) {
          *param_2 = (int)pcVar4;
          goto LAB_000119b0;
        }
        iVar6 = strcmp(pcVar10,pcVar4);
        if (iVar6 == 0) {
          bVar1 = false;
          pcVar9 = pcVar4;
        }
        else {
          __s2 = *(char **)(iVar7 + DAT_000119e4);
          iVar6 = strcmp(pcVar10,__s2);
          pcVar9 = __s2;
          if ((iVar6 == 0) || (pcVar9 = strdup(pcVar10), pcVar9 != (char *)0x0)) {
            if (pcVar4 != __s2) {
              free(pcVar4);
            }
            puVar3[1] = pcVar9;
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        *param_2 = (int)pcVar9;
        if (param_3 != (int *)0x0) goto LAB_000119bc;
      }
      if (!bVar1) goto LAB_00011840;
      goto LAB_000117dc;
    }
    if (iVar6 < 0) break;
  }
  if (param_2 == (int *)0x0) {
    if (param_3 == (int *)0x0) goto LAB_00011840;
LAB_00011810:
    if (*param_3 != 0) {
LAB_00011870:
      sVar2 = strlen(param_1);
      puVar3 = malloc(sVar2 + 0xd);
      if (puVar3 != (void *)0x0) {
        memcpy(puVar3 + 3,param_1,sVar2 + 1);
        pcVar10 = *(char **)(iVar7 + DAT_000119e4);
        if (param_2 == (int *)0x0) {
          puVar3[1] = pcVar10;
LAB_00011900:
          if (param_3 == (int *)0x0) {
            puVar3[2] = 0;
          }
          else {
            pcVar4 = (char *)0x0;
            if (((char *)*param_3 != (char *)0x0) &&
               (pcVar4 = strdup((char *)*param_3), pcVar4 == (char *)0x0)) {
              if ((char *)puVar3[1] != pcVar10) {
                free((char *)puVar3[1]);
              }
              goto LAB_000118dc;
            }
            *param_3 = (int)pcVar4;
            puVar3[2] = pcVar4;
          }
          if ((puVar8 == (undefined4 *)0x0) ||
             (iVar6 = strcmp(param_1,(char *)(puVar8 + 3)), iVar6 < 0)) {
            *puVar3 = puVar8;
            *puVar5 = puVar3;
          }
          else {
            do {
              puVar5 = puVar8;
              puVar8 = (undefined4 *)*puVar5;
              if (puVar8 == (undefined4 *)0x0) break;
              iVar6 = strcmp(param_1,(char *)(puVar8 + 3));
            } while (0 < iVar6);
            *puVar3 = puVar8;
            *puVar5 = puVar3;
          }
LAB_000117dc:
          **(int **)(iVar7 + DAT_000119e8) = **(int **)(iVar7 + DAT_000119e8) + 1;
          goto LAB_00011840;
        }
        pcVar9 = (char *)*param_2;
        pcVar4 = pcVar10;
        if (((pcVar9 == (char *)0x0) || (iVar6 = strcmp(pcVar9,pcVar10), iVar6 == 0)) ||
           (pcVar4 = strdup(pcVar9), pcVar4 != (char *)0x0)) {
          *param_2 = (int)pcVar4;
          puVar3[1] = pcVar4;
          goto LAB_00011900;
        }
LAB_000118dc:
        free(puVar3);
      }
      if (param_2 != (int *)0x0) {
        iVar6 = 0;
        goto LAB_0001182c;
      }
      goto LAB_00011830;
    }
    if (param_2 != (int *)0x0) goto LAB_00011824;
  }
  else {
    if (*param_2 != 0) goto LAB_00011870;
    if (param_3 != (int *)0x0) goto LAB_00011810;
LAB_00011824:
    iVar6 = *(int *)(iVar7 + DAT_000119e4);
LAB_0001182c:
    *param_2 = iVar6;
LAB_00011830:
    if (param_3 == (int *)0x0) goto LAB_00011840;
  }
  *param_3 = 0;
LAB_00011840:
  if ((*(int *)(iVar7 + DAT_000119ec) != 0) &&
     (iVar7 = pthread_rwlock_unlock(*(pthread_rwlock_t **)(iVar7 + DAT_000119f0)), iVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



/* ===== libintl_bindtextdomain @ 000119f4 size=124 ===== */

undefined4 libintl_bindtextdomain(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    local_c = 0;
  }
  else {
    local_c = param_2;
    if (*(int *)(DAT_00011a70 + 0x11a0c + DAT_00011a74) != 0) {
      iVar1 = pthread_rwlock_wrlock(*(pthread_rwlock_t **)(DAT_00011a70 + 0x11a0c + DAT_00011a78));
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    FUN_000116a8(param_1,&local_c,0);
  }
  return local_c;
}



/* ===== libintl_bind_textdomain_codeset @ 00011a7c size=124 ===== */

undefined4 libintl_bind_textdomain_codeset(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    local_c = 0;
  }
  else {
    local_c = param_2;
    if (*(int *)(DAT_00011af8 + 0x11a94 + DAT_00011afc) != 0) {
      iVar1 = pthread_rwlock_wrlock(*(pthread_rwlock_t **)(DAT_00011af8 + 0x11a94 + DAT_00011b00));
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    FUN_000116a8(param_1,0,&local_c);
  }
  return local_c;
}



/* ===== libintl_dcgettext @ 00011b04 size=32 ===== */

void libintl_dcgettext(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00014d8c(param_1,param_2,0,0,0,param_3,param_3);
  return;
}



/* ===== libintl_dgettext @ 00011b24 size=8 ===== */

void libintl_dgettext(undefined4 param_1,undefined4 param_2)

{
  libintl_dcgettext(param_1,param_2,5);
  return;
}



/* ===== libintl_gettext @ 00011b2c size=16 ===== */

void libintl_gettext(undefined4 param_1)

{
  libintl_dcgettext(0,param_1,5);
  return;
}



/* ===== FUN_00011b3c @ 00011b3c size=688 ===== */

void FUN_00011b3c(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  char *__s;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_30;
  int local_2c;
  
  piVar5 = *(int **)(DAT_00011dec + 0x11b5c + DAT_00011df0);
  local_2c = *piVar5;
  iVar7 = *(int *)(DAT_00011dec + 0x11b5c + DAT_00011df4);
  if ((iVar7 == 0) ||
     (iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(DAT_00011df8 + 0x11b8c)), iVar1 == 0)) {
    iVar1 = DAT_00011dfc;
    sVar2 = strlen(param_1);
    iVar3 = FUN_00013b64(iVar1 + 0x11bcc,param_1,sVar2 + 1,0,param_2,0,0,0,0,param_3,0);
    if ((iVar7 == 0) ||
       (iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(iVar1 + 0x11bac)), iVar1 == 0)) {
      if (iVar3 == 0) {
        __s = (char *)_nl_expand_alias(param_2);
        if (((__s == (char *)0x0) || (param_2 = strdup(__s), param_2 != (char *)0x0)) &&
           (uVar4 = FUN_0001409c(param_2,&local_40,&local_3c,&local_38,&local_34,&local_30),
           uVar4 != 0xffffffff)) {
          if ((iVar7 == 0) ||
             (iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(DAT_00011e00 + 0x11cd8)),
             iVar1 == 0)) {
            iVar1 = DAT_00011e04;
            sVar2 = strlen(param_1);
            iVar3 = FUN_00013b64(iVar1 + 0x11d14,param_1,sVar2 + 1,uVar4,local_40,local_38,local_34,
                                 local_30,local_3c,param_3,1);
            if ((iVar7 == 0) ||
               (iVar7 = pthread_rwlock_unlock((pthread_rwlock_t *)(iVar1 + 0x11cf4)), iVar7 == 0)) {
              if (iVar3 != 0) {
                if (*(int *)(iVar3 + 4) < 1) {
                  FUN_00011e38(iVar3,param_4);
                }
                if (*(int *)(iVar3 + 8) == 0) {
                  piVar6 = (int *)(iVar3 + 0x10);
                  do {
                    iVar7 = *piVar6;
                    if (iVar7 == 0) break;
                    if (*(int *)(iVar7 + 4) < 1) {
                      FUN_00011e38(iVar7,param_4);
                    }
                    iVar7 = *piVar6;
                    piVar6 = piVar6 + 1;
                  } while (*(int *)(iVar7 + 8) == 0);
                }
                if (__s != (char *)0x0) {
                  free(param_2);
                }
              }
              if ((uVar4 & 1) != 0) {
                free(local_30);
              }
              goto LAB_00011c24;
            }
          }
          goto LAB_00011b94;
        }
      }
      else {
        if (*(int *)(iVar3 + 4) < 1) {
          FUN_00011e38(iVar3,param_4);
        }
        if (*(int *)(iVar3 + 8) == 0) {
          piVar6 = (int *)(iVar3 + 0x10);
          do {
            iVar7 = *piVar6;
            if (iVar7 == 0) break;
            if (*(int *)(iVar7 + 4) < 1) {
              FUN_00011e38(iVar7,param_4);
            }
            iVar7 = *piVar6;
            piVar6 = piVar6 + 1;
          } while (*(int *)(iVar7 + 8) == 0);
        }
      }
LAB_00011c24:
      if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar3);
      }
      return;
    }
  }
LAB_00011b94:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== FUN_00011e08 @ 00011e08 size=40 ===== */

void FUN_00011e08(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + -1);
  uVar1 = 0;
  while( true ) {
    pbVar2 = pbVar2 + 1;
    if (*pbVar2 == 0) break;
    uVar1 = (uint)*pbVar2 + uVar1 * 0x10;
    if ((uVar1 & 0xf0000000) != 0) {
      uVar1 = uVar1 & 0xfffffff ^ (uVar1 & 0xf0000000) >> 0x18;
    }
  }
  return;
}



/* ===== FUN_00011e30 @ 00011e30 size=8 ===== */

uint FUN_00011e30(uint param_1)

{
  return param_1 << 0x18 | (param_1 >> 8 & 0xff) << 0x10 | (param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}



/* ===== FUN_00011e38 @ 00011e38 size=5288 ===== */

void FUN_00011e38(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *__ptr;
  undefined4 *__ptr_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  size_t sVar11;
  ssize_t sVar12;
  uint uVar13;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint extraout_r3_03;
  int iVar14;
  int extraout_r3_04;
  int extraout_r3_05;
  undefined4 uVar15;
  undefined4 extraout_r3_06;
  int extraout_r3_07;
  int extraout_r3_08;
  int extraout_r3_09;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  void *__dest;
  void *__dest_00;
  int *piVar19;
  int *piVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  char *local_100;
  undefined4 local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  int *local_ec;
  int *local_e8;
  int local_e4;
  int local_e0;
  int *local_dc;
  int *local_d8;
  uint local_d4;
  int local_d0;
  int *local_cc;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  int *local_b8;
  undefined4 *local_b4;
  size_t local_b0;
  int iStack_ac;
  undefined1 auStack_a4 [4];
  stat64 sStack_a0;
  int local_34;
  int iStack_30;
  int local_2c;
  
  local_f8 = *(int **)(DAT_00012df4 + 0x11e4c + DAT_00012df8);
  local_2c = *local_f8;
  local_e4 = *(int *)(DAT_00012df4 + 0x11e4c + DAT_00012dfc);
  local_fc = param_2;
  local_b4 = param_1;
  if ((local_e4 != 0) &&
     (iVar5 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00012e00 + 0x11e88)), iVar5 != 0))
  goto LAB_00011e90;
  if (local_b4[1] == 0) {
    local_b4[1] = 0xffffffff;
    local_b4[2] = 0;
    if (((char *)*local_b4 != (char *)0x0) && (iVar5 = open64((char *)*local_b4,0), iVar5 != -1)) {
      iVar6 = fstat64(iVar5,&sStack_a0);
      if (iVar6 == 0) {
        local_b0 = (uint)sStack_a0.st_size;
        iStack_ac = sStack_a0.st_size._4_4_;
        if (0x2f < (uint)sStack_a0.st_size && sStack_a0.st_size._4_4_ == 0) {
          __ptr = mmap64((void *)0x0,(uint)sStack_a0.st_size,1,2,iVar5,0);
          if (__ptr != (int *)0xffffffff) {
            close(iVar5);
            local_d0 = 1;
LAB_00011f4c:
            iVar5 = DAT_00012e04;
            iVar6 = *__ptr;
            uVar13 = (uint)(iVar6 != DAT_00012e04);
            uVar7 = uVar13;
            if (iVar6 == DAT_00012e08) {
              uVar7 = 0;
            }
            if ((uVar7 != 0) || (__ptr_00 = malloc(0x68), __ptr_00 == (undefined4 *)0x0)) {
              if (local_d0 == 0) {
                free(__ptr);
              }
              else {
                munmap(__ptr,local_b0);
              }
              goto LAB_00011f90;
            }
            local_b4[2] = __ptr_00;
            *__ptr_00 = __ptr;
            __ptr_00[1] = local_d0;
            __ptr_00[3] = uVar13;
            __ptr_00[2] = local_b0;
            __ptr_00[4] = 0;
            uVar7 = __ptr[1];
            if (iVar6 != iVar5) {
              uVar7 = FUN_00011e30();
            }
            if (uVar7 < 0x20000) {
              iVar8 = __ptr[2];
              if (iVar6 != iVar5) {
                iVar8 = FUN_00011e30();
                uVar7 = extraout_r3;
              }
              __ptr_00[5] = iVar8;
              iVar8 = __ptr[3];
              if (iVar6 != iVar5) {
                iVar8 = FUN_00011e30();
                uVar7 = extraout_r3_00;
              }
              __ptr_00[6] = (int)__ptr + iVar8;
              iVar8 = __ptr[4];
              if (iVar6 != iVar5) {
                iVar8 = FUN_00011e30();
                uVar7 = extraout_r3_01;
              }
              __ptr_00[7] = (int)__ptr + iVar8;
              uVar16 = __ptr[5];
              if (iVar6 != iVar5) {
                uVar16 = FUN_00011e30(uVar16);
                uVar7 = extraout_r3_02;
              }
              __ptr_00[0xb] = uVar16;
              if (uVar16 < 3) {
                iVar8 = 0;
              }
              else {
                iVar8 = __ptr[6];
                if (iVar6 != iVar5) {
                  iVar8 = FUN_00011e30();
                  uVar7 = extraout_r3_03;
                }
                iVar8 = (int)__ptr + iVar8;
              }
              __ptr_00[0xc] = iVar8;
              __ptr_00[0xd] = uVar13;
              if ((uVar7 & 0xffff) == 0) {
                __ptr_00[8] = 0;
                __ptr_00[9] = 0;
                __ptr_00[10] = 0;
                piVar19 = (int *)&stack0xfffffef0;
                goto LAB_000131bc;
              }
              if (iVar8 != 0) {
                local_c4 = (int *)__ptr[9];
                if (iVar6 == iVar5) {
                  if (local_c4 != (int *)0x0) {
                    local_d4 = __ptr[7];
                    iVar8 = __ptr[8];
                    goto LAB_0001215c;
                  }
                }
                else {
                  local_c4 = (int *)FUN_00011e30(local_c4);
                  if (local_c4 != (int *)0x0) {
                    local_d4 = FUN_00011e30(__ptr[7]);
                    iVar8 = FUN_00011e30(__ptr[8]);
LAB_0001215c:
                    local_b8 = (int *)((int)__ptr + iVar8);
                    iVar8 = -(local_d4 * 4 + 7 & 0xfffffff8);
                    piVar19 = (int *)(&stack0xfffffef0 + iVar8);
                    local_e0 = (int)&local_100 + iVar8;
                    local_bc = (int *)(DAT_00012e10 + 0x12190);
                    local_c0 = (int *)(DAT_00012e14 + 0x1219c);
                    local_c8 = (int *)(DAT_00012e18 + 0x121a8);
                    local_cc = (int *)(DAT_00012e1c + 0x121b4);
                    local_d8 = (int *)(DAT_00012e20 + 0x121c0);
                    local_dc = (int *)(DAT_00012e24 + 0x121cc);
                    local_e8 = (int *)(DAT_00012e28 + 0x121d8);
                    local_ec = (int *)(DAT_00012e2c + 0x121e4);
                    local_f0 = (int *)(DAT_00012e30 + 0x121f0);
                    for (uVar7 = 0; uVar7 != local_d4; uVar7 = uVar7 + 1) {
                      iVar9 = local_b8[uVar7 * 2 + 1];
                      if (iVar6 != iVar5) {
                        iVar9 = FUN_00011e30();
                      }
                      uVar26 = CONCAT44((int)__ptr + iVar9,local_b8[uVar7 * 2]);
                      if (iVar6 != iVar5) {
                        uVar26 = FUN_00011e30();
                      }
                      pcVar10 = (char *)((ulonglong)uVar26 >> 0x20);
                      if (((int)uVar26 == 0) || (pcVar10[(int)uVar26 + -1] != '\0'))
                      goto LAB_00013228;
                      piVar20 = (int *)0x0;
                      if (*pcVar10 == 'P') {
                        if ((pcVar10[1] == 'R') && (pcVar10[2] == 'I')) {
                          bVar1 = pcVar10[3];
                          bVar21 = bVar1 == 0x69;
                          bVar22 = bVar1 == 100;
                          bVar3 = bVar21 || bVar22;
                          bVar23 = bVar1 == 0x6f;
                          bVar24 = bVar1 == 0x75;
                          bVar4 = bVar23 || bVar24;
                          if ((bVar1 & 0xdf) == 0x58 || ((bVar21 || bVar22) || (bVar23 || bVar24)))
                          {
                            cVar2 = pcVar10[4];
                            if (cVar2 == '8') {
                              if (pcVar10[5] == '\0') {
                                if (bVar1 == 100) {
                                  piVar20 = (int *)(DAT_00012e68 + 0x129e4);
                                }
                                else if (bVar3) {
                                  piVar20 = (int *)(DAT_00012e6c + 0x129f0);
                                }
                                else if (bVar1 == 0x6f) {
                                  piVar20 = (int *)(DAT_00012e70 + 0x129fc);
                                }
                                else if (bVar4) {
                                  piVar20 = (int *)(DAT_00012e74 + 0x12a08);
                                }
                                else if (bVar1 == 0x78) {
                                  piVar20 = (int *)(DAT_00012e78 + 0x12a14);
                                }
                                else {
                                  if (bVar1 != 0x58) goto LAB_00011e90;
                                  piVar20 = (int *)(DAT_00012e34 + 0x12440);
                                }
                              }
                            }
                            else if (cVar2 == '1') {
                              if (pcVar10[5] == '6') {
                                if (pcVar10[6] == '\0') {
                                  if (bVar1 == 100) {
                                    piVar20 = (int *)(DAT_00012e7c + 0x12a28);
                                  }
                                  else if (bVar3) {
                                    piVar20 = (int *)(DAT_00012e80 + 0x12a34);
                                  }
                                  else if (bVar1 == 0x6f) {
                                    piVar20 = (int *)(DAT_00012e84 + 0x12a40);
                                  }
                                  else if (bVar4) {
                                    piVar20 = (int *)(DAT_00012e88 + 0x12a4c);
                                  }
                                  else if (bVar1 == 0x78) {
                                    piVar20 = (int *)(DAT_00012e8c + 0x12a58);
                                  }
                                  else {
                                    if (bVar1 != 0x58) goto LAB_00011e90;
                                    piVar20 = (int *)(DAT_00012e38 + 0x1249c);
                                  }
                                }
                                else {
                                  piVar20 = (int *)0x0;
                                }
                              }
                            }
                            else if (cVar2 == '3') {
                              if (pcVar10[5] == '2') {
                                if (pcVar10[6] == '\0') {
                                  if (bVar1 == 100) {
                                    piVar20 = (int *)(DAT_00012e90 + 0x12a6c);
                                  }
                                  else if (bVar3) {
                                    piVar20 = (int *)(DAT_00012e94 + 0x12a78);
                                  }
                                  else if (bVar1 == 0x6f) {
                                    piVar20 = (int *)(DAT_00012e98 + 0x12a84);
                                  }
                                  else if (bVar4) {
                                    piVar20 = (int *)(DAT_00012e9c + 0x12a90);
                                  }
                                  else if (bVar1 == 0x78) {
                                    piVar20 = (int *)(DAT_00012ea0 + 0x12a9c);
                                  }
                                  else {
                                    if (bVar1 != 0x58) goto LAB_00011e90;
                                    piVar20 = (int *)(DAT_00012e3c + 0x124fc);
                                  }
                                }
                                else {
                                  piVar20 = (int *)0x0;
                                }
                              }
                              else {
                                piVar20 = (int *)0x0;
                              }
                            }
                            else if (cVar2 == '6') {
                              if (pcVar10[5] == '4') {
                                if (pcVar10[6] == '\0') {
                                  if (bVar1 == 100) {
                                    piVar20 = (int *)(DAT_00012ea4 + 0x12ab0);
                                  }
                                  else if (bVar3) {
                                    piVar20 = (int *)(DAT_00012ea8 + 0x12abc);
                                  }
                                  else if (bVar1 == 0x6f) {
                                    piVar20 = (int *)(DAT_00012eac + 0x12ac8);
                                  }
                                  else if (bVar4) {
                                    piVar20 = (int *)(DAT_00012eb0 + 0x12ad4);
                                  }
                                  else if (bVar1 == 0x78) {
                                    piVar20 = (int *)(DAT_00012eb4 + 0x12ae0);
                                  }
                                  else {
                                    if (bVar1 != 0x58) goto LAB_00011e90;
                                    piVar20 = (int *)(DAT_00012e40 + 0x1255c);
                                  }
                                }
                                else {
                                  piVar20 = (int *)0x0;
                                }
                              }
                              else {
                                piVar20 = (int *)0x0;
                              }
                            }
                            else if (cVar2 == 'L') {
                              if (pcVar10[5] == 'E') {
                                if (pcVar10[6] == 'A') {
                                  if (pcVar10[7] == 'S') {
                                    if (pcVar10[8] == 'T') {
                                      cVar2 = pcVar10[9];
                                      if (cVar2 == '8') {
                                        if (pcVar10[10] == '\0') {
                                          if (bVar1 == 100) {
                                            piVar20 = (int *)(DAT_00012eb8 + 0x12af4);
                                          }
                                          else if (bVar3) {
                                            piVar20 = (int *)(DAT_00012ebc + 0x12b00);
                                          }
                                          else if (bVar1 == 0x6f) {
                                            piVar20 = (int *)(DAT_00012ec0 + 0x12b0c);
                                          }
                                          else if (bVar4) {
                                            piVar20 = (int *)(DAT_00012ec4 + 0x12b18);
                                          }
                                          else if (bVar1 == 0x78) {
                                            piVar20 = (int *)(DAT_00012ec8 + 0x12b24);
                                          }
                                          else {
                                            if (bVar1 != 0x58) goto LAB_00011e90;
                                            piVar20 = (int *)(DAT_00012e44 + 0x125f8);
                                          }
                                        }
                                        else {
                                          piVar20 = (int *)0x0;
                                        }
                                      }
                                      else if (cVar2 == '1') {
                                        if (pcVar10[10] == '6') {
                                          if (pcVar10[0xb] == '\0') {
                                            if (bVar1 == 100) {
                                              piVar20 = (int *)(DAT_00012ecc + 0x12b38);
                                            }
                                            else if (bVar3) {
                                              piVar20 = (int *)(DAT_00012ed0 + 0x12b44);
                                            }
                                            else if (bVar1 == 0x6f) {
                                              piVar20 = (int *)(DAT_00012ed4 + 0x12b50);
                                            }
                                            else if (bVar4) {
                                              piVar20 = (int *)(DAT_00012ed8 + 0x12b5c);
                                            }
                                            else if (bVar1 == 0x78) {
                                              piVar20 = (int *)(DAT_00012edc + 0x12b68);
                                            }
                                            else {
                                              if (bVar1 != 0x58) goto LAB_00011e90;
                                              piVar20 = (int *)(DAT_00012e48 + 0x12658);
                                            }
                                          }
                                          else {
                                            piVar20 = (int *)0x0;
                                          }
                                        }
                                        else {
                                          piVar20 = (int *)0x0;
                                        }
                                      }
                                      else if (cVar2 == '3') {
                                        if (pcVar10[10] == '2') {
                                          if (pcVar10[0xb] == '\0') {
                                            if (bVar1 == 100) {
                                              piVar20 = (int *)(DAT_00012ee0 + 0x12b7c);
                                            }
                                            else if (bVar3) {
                                              piVar20 = (int *)(DAT_00012ee4 + 0x12b88);
                                            }
                                            else if (bVar1 == 0x6f) {
                                              piVar20 = (int *)(DAT_00012ee8 + 0x12b94);
                                            }
                                            else if (bVar4) {
                                              piVar20 = (int *)(DAT_00012eec + 0x12ba0);
                                            }
                                            else if (bVar1 == 0x78) {
                                              piVar20 = (int *)(DAT_00012ef0 + 0x12bac);
                                            }
                                            else {
                                              if (bVar1 != 0x58) goto LAB_00011e90;
                                              piVar20 = (int *)(DAT_00012e4c + 0x126b8);
                                            }
                                          }
                                          else {
                                            piVar20 = (int *)0x0;
                                          }
                                        }
                                        else {
                                          piVar20 = (int *)0x0;
                                        }
                                      }
                                      else if (cVar2 == '6') {
                                        if (pcVar10[10] == '4') {
                                          if (pcVar10[0xb] == '\0') {
                                            if (bVar1 == 100) {
                                              piVar20 = (int *)(DAT_00012ef4 + 0x12bc0);
                                            }
                                            else if (bVar3) {
                                              piVar20 = (int *)(DAT_00012ef8 + 0x12bcc);
                                            }
                                            else if (bVar1 == 0x6f) {
                                              piVar20 = (int *)(DAT_00012efc + 0x12bd8);
                                            }
                                            else if (bVar4) {
                                              piVar20 = (int *)(DAT_00012f00 + 0x12be4);
                                            }
                                            else if (bVar1 == 0x78) {
                                              piVar20 = (int *)(DAT_00012f04 + 0x12bf0);
                                            }
                                            else {
                                              if (bVar1 != 0x58) goto LAB_00011e90;
                                              piVar20 = (int *)(DAT_00012e50 + 0x1271c);
                                            }
                                          }
                                          else {
                                            piVar20 = (int *)0x0;
                                          }
                                        }
                                        else {
                                          piVar20 = (int *)0x0;
                                        }
                                      }
                                      else {
                                        piVar20 = (int *)0x0;
                                      }
                                    }
                                    else {
                                      piVar20 = (int *)0x0;
                                    }
                                  }
                                  else {
                                    piVar20 = (int *)0x0;
                                  }
                                }
                                else {
                                  piVar20 = (int *)0x0;
                                }
                              }
                              else {
                                piVar20 = (int *)0x0;
                              }
                            }
                            else if (cVar2 == 'F') {
                              if (pcVar10[5] == 'A') {
                                if (pcVar10[6] == 'S') {
                                  if (pcVar10[7] == 'T') {
                                    cVar2 = pcVar10[8];
                                    if (cVar2 == '8') {
                                      if (pcVar10[9] == '\0') {
                                        if (bVar1 == 100) {
                                          piVar20 = (int *)(DAT_00012f08 + 0x12c04);
                                        }
                                        else if (bVar3) {
                                          piVar20 = (int *)(DAT_00012f0c + 0x12c10);
                                        }
                                        else if (bVar1 == 0x6f) {
                                          piVar20 = (int *)(DAT_00012f10 + 0x12c1c);
                                        }
                                        else if (bVar4) {
                                          piVar20 = (int *)(DAT_00012f14 + 0x12c28);
                                        }
                                        else if (bVar1 == 0x78) {
                                          piVar20 = (int *)(DAT_00012f18 + 0x12c34);
                                        }
                                        else {
                                          if (bVar1 != 0x58) goto LAB_00011e90;
                                          piVar20 = (int *)(DAT_00012e54 + 0x127a8);
                                        }
                                      }
                                      else {
                                        piVar20 = (int *)0x0;
                                      }
                                    }
                                    else if (cVar2 == '1') {
                                      if (pcVar10[9] == '6') {
                                        if (pcVar10[10] == '\0') {
                                          if (bVar1 == 100) {
                                            piVar20 = (int *)(DAT_00012f1c + 0x12c48);
                                          }
                                          else if (bVar3) {
                                            piVar20 = (int *)(DAT_00012f20 + 0x12c54);
                                          }
                                          else if (bVar1 == 0x6f) {
                                            piVar20 = (int *)(DAT_00012f24 + 0x12c60);
                                          }
                                          else if (bVar4) {
                                            piVar20 = (int *)(DAT_00012f28 + 0x12c6c);
                                          }
                                          else if (bVar1 == 0x78) {
                                            piVar20 = (int *)(DAT_00012f2c + 0x12c78);
                                          }
                                          else {
                                            if (bVar1 != 0x58) goto LAB_00011e90;
                                            piVar20 = (int *)(DAT_00012e58 + 0x12808);
                                          }
                                        }
                                        else {
                                          piVar20 = (int *)0x0;
                                        }
                                      }
                                      else {
                                        piVar20 = (int *)0x0;
                                      }
                                    }
                                    else if (cVar2 == '3') {
                                      if (pcVar10[9] == '2') {
                                        if (pcVar10[10] == '\0') {
                                          if (bVar1 == 100) {
                                            piVar20 = (int *)(DAT_00012f30 + 0x12c8c);
                                          }
                                          else if (bVar3) {
                                            piVar20 = (int *)(DAT_00012f34 + 0x12c98);
                                          }
                                          else if (bVar1 == 0x6f) {
                                            piVar20 = (int *)(DAT_00012f38 + 0x12ca4);
                                          }
                                          else if (bVar4) {
                                            piVar20 = (int *)(DAT_00012f3c + 0x12cb0);
                                          }
                                          else if (bVar1 == 0x78) {
                                            piVar20 = (int *)(DAT_00012f40 + 0x12cbc);
                                          }
                                          else {
                                            if (bVar1 != 0x58) goto LAB_00011e90;
                                            piVar20 = (int *)(DAT_00012e5c + 0x12868);
                                          }
                                        }
                                        else {
                                          piVar20 = (int *)0x0;
                                        }
                                      }
                                      else {
                                        piVar20 = (int *)0x0;
                                      }
                                    }
                                    else if (cVar2 == '6') {
                                      if (pcVar10[9] == '4') {
                                        if (pcVar10[10] == '\0') {
                                          if (bVar1 == 100) {
                                            piVar20 = (int *)(DAT_00012f44 + 0x12cd0);
                                          }
                                          else if (bVar3) {
                                            piVar20 = (int *)(DAT_00012f48 + 0x12cdc);
                                          }
                                          else if (bVar1 == 0x6f) {
                                            piVar20 = (int *)(DAT_00012f4c + 0x12ce8);
                                          }
                                          else if (bVar4) {
                                            piVar20 = (int *)(DAT_00012f50 + 0x12cf4);
                                          }
                                          else if (bVar1 == 0x78) {
                                            piVar20 = (int *)(DAT_00012f54 + 0x12d00);
                                          }
                                          else {
                                            if (bVar1 != 0x58) goto LAB_00011e90;
                                            piVar20 = (int *)(DAT_00012e60 + 0x128cc);
                                          }
                                        }
                                        else {
                                          piVar20 = (int *)0x0;
                                        }
                                      }
                                      else {
                                        piVar20 = (int *)0x0;
                                      }
                                    }
                                    else {
                                      piVar20 = (int *)0x0;
                                    }
                                  }
                                  else {
                                    piVar20 = (int *)0x0;
                                  }
                                }
                                else {
                                  piVar20 = (int *)0x0;
                                }
                              }
                              else {
                                piVar20 = (int *)0x0;
                              }
                            }
                            else if (cVar2 == 'M') {
                              if (pcVar10[5] == 'A') {
                                if (pcVar10[6] == 'X') {
                                  if (pcVar10[7] == '\0') {
                                    piVar20 = local_ec;
                                    if ((bVar1 != 100) && (piVar20 = local_f0, !bVar21 && !bVar22))
                                    {
                                      if (bVar1 == 0x6f) {
                                        piVar20 = (int *)(DAT_00012f58 + 0x12d24);
                                      }
                                      else if (bVar4) {
                                        piVar20 = (int *)(DAT_00012f5c + 0x12d30);
                                      }
                                      else if (bVar1 == 0x78) {
                                        piVar20 = (int *)(DAT_00012f60 + 0x12d3c);
                                      }
                                      else {
                                        if (bVar1 != 0x58) goto LAB_00011e90;
                                        piVar20 = (int *)(DAT_00012e64 + 0x1293c);
                                      }
                                    }
                                  }
                                  else {
                                    piVar20 = (int *)0x0;
                                  }
                                }
                                else {
                                  piVar20 = (int *)0x0;
                                }
                              }
                              else {
                                piVar20 = (int *)0x0;
                              }
                            }
                            else if (cVar2 == 'P') {
                              if (pcVar10[5] == 'T') {
                                if (pcVar10[6] == 'R') {
                                  if (pcVar10[7] == '\0') {
                                    piVar20 = local_c0;
                                    if (((((bVar1 != 100) &&
                                          (piVar20 = local_c8, !bVar21 && !bVar22)) &&
                                         (piVar20 = local_cc, bVar1 != 0x6f)) &&
                                        ((piVar20 = local_d8, !bVar23 && !bVar24 &&
                                         (piVar20 = local_dc, bVar1 != 0x78)))) &&
                                       (piVar20 = local_e8, bVar1 != 0x58)) goto LAB_00011e90;
                                  }
                                  else {
                                    piVar20 = (int *)0x0;
                                  }
                                }
                                else {
                                  piVar20 = (int *)0x0;
                                }
                              }
                              else {
                                piVar20 = (int *)0x0;
                              }
                            }
                            else {
                              piVar20 = (int *)0x0;
                            }
                          }
                          else {
                            piVar20 = (int *)0x0;
                          }
                        }
                      }
                      else if ((*pcVar10 == 'I') && (pcVar10[1] == '\0')) {
                        piVar20 = local_bc;
                      }
                      *(int **)(local_e0 + uVar7 * 4) = piVar20;
                    }
                    iVar9 = __ptr[10];
                    if (iVar6 != iVar5) {
                      iVar9 = FUN_00011e30();
                    }
                    local_bc = (int *)((int)__ptr + iVar9);
                    iVar9 = __ptr[0xb];
                    if (iVar6 != iVar5) {
                      iVar9 = FUN_00011e30();
                    }
                    local_c0 = (int *)((int)__ptr + iVar9);
                    local_e8 = (int *)(uVar16 << 2);
                    local_b8 = (int *)0x0;
                    piVar20 = (int *)0x0;
                    local_ec = &local_34;
                    local_d8 = local_e8;
                    do {
                      local_c8 = (int *)0x0;
                      while( true ) {
                        if (iVar6 == iVar5) {
                          piVar18 = local_bc;
                          if (local_c8 != (int *)0x0) {
                            piVar18 = local_c0;
                          }
                          iVar9 = piVar18[(int)local_b8];
                        }
                        else {
                          piVar18 = local_bc;
                          if (local_c8 != (int *)0x0) {
                            piVar18 = local_c0;
                          }
                          iVar9 = FUN_00011e30(piVar18[(int)local_b8]);
                        }
                        iVar14 = (int)__ptr + iVar9;
                        iVar9 = *(int *)((int)__ptr + iVar9);
                        if (iVar6 != iVar5) {
                          iVar9 = FUN_00011e30();
                          iVar14 = extraout_r3_04;
                        }
                        piVar18 = (int *)(iVar14 + 4);
                        local_dc = (int *)((int)__ptr + iVar9);
                        iVar9 = *(int *)(iVar14 + 8);
                        if (iVar6 != iVar5) {
                          iVar9 = FUN_00011e30();
                        }
                        if (iVar9 == -1) {
                          local_cc = (int *)0x1;
                          iVar9 = 0;
                        }
                        else {
                          iVar9 = 0;
                          local_cc = (int *)0x1;
                          while( true ) {
                            iVar14 = *piVar18;
                            if (iVar6 != iVar5) {
                              iVar14 = FUN_00011e30(iVar14);
                            }
                            iVar9 = iVar9 + iVar14;
                            uVar7 = piVar18[1];
                            if (iVar6 != iVar5) {
                              uVar7 = FUN_00011e30();
                              iVar14 = extraout_r3_05;
                            }
                            if (uVar7 == 0xffffffff) break;
                            local_dc = (int *)((int)local_dc + iVar14);
                            if (local_d4 <= uVar7) goto LAB_00013228;
                            piVar18 = piVar18 + 2;
                            pcVar10 = *(char **)(local_e0 + uVar7 * 4);
                            if (pcVar10 == (char *)0x0) {
                              local_cc = (int *)0x0;
                            }
                            sVar11 = strlen(pcVar10);
                            iVar9 = sVar11 + iVar9;
                          }
                        }
                        iVar14 = *piVar18;
                        if (iVar6 != iVar5) {
                          iVar14 = FUN_00011e30();
                        }
                        if ((iVar14 == 0) || (*(char *)((int)local_dc + iVar14 + -1) != '\0'))
                        goto LAB_00013228;
                        local_ec[(int)local_c8] = iVar9;
                        if (local_cc == (int *)0x0) goto LAB_000132f8;
                        if (local_c8 == (int *)0x1) break;
                        local_c8 = (int *)0x1;
                      }
                      piVar20 = (int *)((int)piVar20 + 1);
                      local_d8 = (int *)((int)local_d8 + iStack_30 + local_34);
LAB_000132f8:
                      local_b8 = (int *)((int)local_b8 + 1);
                    } while (local_b8 != local_c4);
                    if (piVar20 == (int *)0x0) {
                      __ptr_00[8] = 0;
                      __ptr_00[9] = 0;
                      __ptr_00[10] = 0;
                      piVar19 = (int *)(&stack0xfffffef0 + iVar8);
                      goto LAB_000131bc;
                    }
                    local_b8 = malloc((size_t)(local_d8 + (int)piVar20 * 4));
                    if (local_b8 != (int *)0x0) {
                      __ptr_00[4] = local_b8;
                      local_f4 = local_b8 + (int)piVar20 * 2;
                      local_c8 = local_b8 + (int)piVar20 * 4;
                      __dest_00 = (void *)((int)local_c8 + (int)local_e8);
                      local_d8 = (int *)0x0;
                      piVar18 = (int *)0x0;
LAB_00013364:
                      iVar6 = __ptr_00[3];
                      iVar5 = 0;
                      while( true ) {
                        if (iVar6 == 0) {
                          piVar17 = local_bc;
                          if (iVar5 != 0) {
                            piVar17 = local_c0;
                          }
                          uVar25 = (ulonglong)(uint)piVar17[(int)piVar18];
                        }
                        else {
                          piVar17 = local_bc;
                          if (iVar5 != 0) {
                            piVar17 = local_c0;
                          }
                          uVar25 = FUN_00011e30(piVar17[(int)piVar18]);
                          iVar5 = extraout_r2_00;
                        }
                        iVar6 = (int)(uVar25 >> 0x20);
                        iVar8 = (int)__ptr + (int)uVar25;
                        uVar26 = CONCAT44(iVar6,*(undefined4 *)(iVar8 + 8));
                        if (iVar6 != 0) {
                          uVar26 = FUN_00011e30();
                          iVar5 = extraout_r2_01;
                          iVar8 = extraout_r3_08;
                        }
                        iVar6 = (int)((ulonglong)uVar26 >> 0x20);
                        if ((int)uVar26 != -1) {
                          iVar8 = iVar8 + 4;
                          while( true ) {
                            uVar26 = CONCAT44(iVar6,*(undefined4 *)(iVar8 + 4));
                            if (iVar6 != 0) {
                              uVar26 = FUN_00011e30();
                              iVar5 = extraout_r2_02;
                              iVar8 = extraout_r3_09;
                            }
                            iVar6 = (int)((ulonglong)uVar26 >> 0x20);
                            if ((int)uVar26 == -1) break;
                            if (*(int *)(local_e0 + (int)uVar26 * 4) == 0) goto LAB_00013108;
                            iVar8 = iVar8 + 8;
                          }
                        }
                        if (iVar5 == 1) break;
                        iVar5 = 1;
                      }
                      local_e8 = (int *)((int)local_d8 << 3);
                      local_cc = (int *)0x0;
                      do {
                        local_d4 = __ptr_00[3];
                        if (local_d4 == 0) {
                          piVar17 = local_bc;
                          if (local_cc != (int *)0x0) {
                            piVar17 = local_c0;
                          }
                          iVar5 = piVar17[(int)piVar18];
                        }
                        else {
                          piVar17 = local_bc;
                          if (local_cc != (int *)0x0) {
                            piVar17 = local_c0;
                          }
                          iVar5 = FUN_00011e30(piVar17[(int)piVar18]);
                        }
                        iVar6 = *(int *)((int)__ptr + iVar5);
                        if (local_d4 != 0) {
                          iVar6 = FUN_00011e30();
                        }
                        local_dc = (int *)((int)__ptr + iVar6);
                        local_ec = local_b8;
                        if (local_cc != (int *)0x0) {
                          local_ec = local_f4;
                        }
                        local_f0 = (int *)((int)local_ec + (int)local_e8);
                        uVar15 = *(undefined4 *)((int)__ptr + iVar5 + 4);
                        if (local_d4 == 0) {
                          if (*(int *)((int)__ptr + iVar5 + 8) != -1) goto LAB_00013008;
LAB_000130d8:
                          *(undefined4 *)((int)local_ec + (int)local_e8) = uVar15;
                          local_f0[1] = (int)local_dc;
                        }
                        else {
                          iVar6 = FUN_00011e30();
                          if (iVar6 == -1) {
                            uVar15 = FUN_00011e30(extraout_r3_06);
                            goto LAB_000130d8;
                          }
LAB_00013008:
                          iVar5 = (int)__ptr + iVar5 + 0xc;
                          local_f0[1] = (int)__dest_00;
                          while( true ) {
                            sVar11 = *(size_t *)(iVar5 + -8);
                            pcVar10 = *(char **)(iVar5 + -4);
                            if (local_d4 != 0) {
                              local_100 = pcVar10;
                              sVar11 = FUN_00011e30(sVar11);
                              pcVar10 = (char *)FUN_00011e30(local_100);
                            }
                            __dest = __dest_00;
                            if (sVar11 != 0) {
                              __dest = (void *)((int)__dest_00 + sVar11);
                              local_100 = pcVar10;
                              memcpy(__dest_00,local_dc,sVar11);
                              local_dc = (int *)((int)local_dc + sVar11);
                              pcVar10 = local_100;
                            }
                            iVar5 = iVar5 + 8;
                            if (pcVar10 == (char *)0xffffffff) break;
                            local_100 = *(char **)(local_e0 + (int)pcVar10 * 4);
                            sVar11 = strlen(local_100);
                            __dest_00 = (void *)((int)__dest + sVar11);
                            memcpy(__dest,local_100,sVar11);
                          }
                          *(int *)((int)local_ec + (int)local_e8) = (int)__dest - local_f0[1];
                          __dest_00 = __dest;
                        }
                        if (local_cc == (int *)0x1) goto code_r0x000130fc;
                        local_cc = (int *)0x1;
                      } while( true );
                    }
                    goto LAB_00013228;
                  }
                }
                __ptr_00[8] = 0;
                __ptr_00[9] = 0;
                __ptr_00[10] = 0;
                piVar19 = (int *)&stack0xfffffef0;
                goto LAB_000131bc;
              }
            }
            goto LAB_00013228;
          }
          __ptr = malloc(local_b0);
          sVar11 = local_b0;
          piVar19 = __ptr;
          if (__ptr != (int *)0x0) {
            do {
              while (sVar12 = read(iVar5,piVar19,sVar11), 0 < sVar12) {
                sVar11 = sVar11 - sVar12;
                piVar19 = (int *)((int)piVar19 + sVar12);
                if (sVar11 == 0) {
                  close(iVar5);
                  local_d0 = 0;
                  goto LAB_00011f4c;
                }
              }
            } while ((sVar12 == -1) && (piVar20 = __errno_location(), *piVar20 == 4));
            free(__ptr);
          }
        }
      }
      close(iVar5);
    }
    goto LAB_00011f90;
  }
LAB_00011f9c:
  if ((local_e4 == 0) ||
     (iVar5 = pthread_mutex_unlock((pthread_mutex_t *)(DAT_00012e0c + 0x11fb4)), iVar5 == 0)) {
    if (local_2c == *local_f8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00011e90:
                    /* WARNING: Subroutine does not return */
  abort();
code_r0x000130fc:
  local_d8 = (int *)((int)local_d8 + 1);
LAB_00013108:
  piVar18 = (int *)((int)piVar18 + 1);
  if (piVar18 == local_c4) goto code_r0x00013118;
  goto LAB_00013364;
code_r0x00013118:
  if (piVar20 != local_d8) goto LAB_00011e90;
  iVar5 = __ptr_00[0xb];
  for (iVar6 = 0; piVar18 = local_b8, iVar5 != iVar6; iVar6 = iVar6 + 1) {
    iVar8 = *(int *)(__ptr_00[0xc] + iVar6 * 4);
    if (__ptr_00[0xd] != 0) {
      iVar8 = FUN_00011e30();
      iVar5 = extraout_r2;
      iVar6 = extraout_r3_07;
    }
    local_c8[iVar6] = iVar8;
  }
  piVar17 = (int *)0x0;
  do {
    uVar7 = FUN_00011e08(piVar18[(int)piVar17 * 2 + 1]);
    uVar13 = __ptr_00[0xb];
    iVar5 = (uVar7 - (uVar13 - 2) * (uVar7 / (uVar13 - 2))) + 1;
    for (uVar7 = uVar7 - uVar13 * (uVar7 / uVar13); local_c8[uVar7] != 0; uVar7 = uVar7 + iVar6) {
      iVar6 = iVar5 - uVar13;
      if (uVar7 < uVar13 - iVar5) {
        iVar6 = iVar5;
      }
    }
    iVar5 = __ptr_00[5] + 1 + (int)piVar17;
    piVar17 = (int *)((int)piVar17 + 1);
    local_c8[uVar7] = iVar5;
  } while (piVar20 != piVar17);
  __ptr_00[8] = piVar20;
  __ptr_00[9] = local_b8;
  __ptr_00[0xd] = 0;
  __ptr_00[10] = local_f4;
  __ptr_00[0xc] = local_c8;
LAB_000131bc:
  __ptr_00[0xe] = 0;
  __ptr_00[0xf] = 0;
  if ((local_e4 != 0) &&
     (iVar5 = pthread_rwlock_init((pthread_rwlock_t *)(__ptr_00 + 0x10),(pthread_rwlockattr_t *)0x0)
     , iVar5 != 0)) goto LAB_00011e90;
  *piVar19 = (int)auStack_a4;
  iVar5 = FUN_000144f4(local_b4,local_fc,DAT_00012f64 + 0x131fc,0);
  if (iVar5 == -1) {
    if ((local_e4 != 0) &&
       (iVar5 = pthread_rwlock_destroy((pthread_rwlock_t *)(__ptr_00 + 0x10)), iVar5 != 0))
    goto LAB_00011e90;
LAB_00013228:
    free((void *)__ptr_00[4]);
    if (local_d0 == 0) {
      free(__ptr);
    }
    else {
      munmap(__ptr,local_b0);
    }
    free(__ptr_00);
    local_b4[2] = 0;
  }
  else {
    FUN_00015e30(iVar5,__ptr_00 + 0x18,__ptr_00 + 0x19);
  }
LAB_00011f90:
  local_b4[1] = 1;
  goto LAB_00011f9c;
}



/* ===== FUN_00013460 @ 00013460 size=996 ===== */

void FUN_00013460(void *param_1,size_t param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  FILE *__stream;
  void *pvVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  size_t sVar14;
  int *piVar15;
  byte *__s;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  size_t sVar20;
  undefined1 auStack_1f0 [4];
  size_t local_1ec;
  char *local_1e8;
  uint *local_1e4;
  int *local_1e0;
  uint local_1dc;
  size_t local_1d8;
  int local_1d4;
  int local_1d0;
  size_t local_1cc;
  int *local_1c8;
  int local_1c4;
  void *local_1c0;
  byte local_1bc [400];
  int local_2c;
  undefined4 *puVar10;
  
  local_1d0 = DAT_00013844 + 0x13478;
  local_1e0 = *(int **)(local_1d0 + DAT_00013848);
  local_2c = *local_1e0;
  iVar17 = -(param_2 + 0x15 & 0xfffffff8);
  puVar2 = mempcpy(auStack_1f0 + iVar17,param_1,param_2);
  puVar7 = (undefined4 *)(DAT_0001384c + 0x134c8);
  puVar9 = (undefined4 *)(DAT_0001384c + 0x134bc);
  do {
    puVar10 = puVar9 + 1;
    puVar3 = puVar2 + 1;
    *puVar2 = *puVar9;
    puVar2 = puVar3;
    puVar9 = puVar10;
  } while (puVar10 != puVar7);
  *(undefined2 *)puVar3 = *(undefined2 *)puVar10;
  pcVar4 = (char *)FUN_000161c4(auStack_1f0 + iVar17,&local_1c0);
  __stream = fopen64(pcVar4,(char *)(DAT_00013850 + 0x134ec));
  free(local_1c0);
  if (__stream == (FILE *)0x0) {
    iVar17 = 0;
  }
  else {
    iVar17 = 0;
    __fsetlocking(__stream,2);
    local_1e4 = (uint *)(DAT_00013854 + 0x13520);
    local_1c4 = DAT_00013858 + 0x1352c;
    local_1c8 = (int *)(DAT_0001385c + 0x13538);
LAB_00013538:
    if ((__stream->_flags & 4) == 0) {
      pcVar4 = fgets_unlocked((char *)local_1bc,400,__stream);
      if (pcVar4 == (char *)0x0) goto LAB_00013544;
      local_1e8 = strchr((char *)local_1bc,10);
      iVar19 = DAT_0001386c;
      iVar8 = **(int **)(local_1d0 + DAT_00013868);
      pbVar12 = local_1bc;
      do {
        __s = pbVar12;
        uVar11 = (uint)*__s;
        pbVar12 = __s + 1;
      } while ((*(ushort *)(iVar8 + uVar11 * 2) & 0x20) != 0);
      if (uVar11 != 0 && uVar11 != 0x23) {
        do {
          pbVar16 = pbVar12;
          if (*pbVar16 == 0) goto LAB_00013628;
          pbVar12 = pbVar16 + 1;
        } while ((*(ushort *)(iVar8 + (uint)*pbVar16 * 2) & 0x20) == 0);
        *pbVar16 = 0;
        pbVar16 = pbVar16 + 1;
LAB_00013628:
        do {
          pbVar12 = pbVar16;
          pbVar16 = pbVar12 + 1;
        } while ((*(ushort *)(iVar8 + (uint)*pbVar12 * 2) & 0x20) != 0);
        if (*pbVar12 != 0) {
          do {
            pbVar13 = pbVar16;
            bVar1 = *pbVar13;
            uVar11 = (uint)bVar1;
            if (uVar11 == 0) goto LAB_00013680;
            pbVar16 = pbVar13 + 1;
          } while ((*(ushort *)(iVar8 + uVar11 * 2) & 0x20) == 0);
          if (uVar11 == 10) {
            *pbVar13 = 0;
            pbVar13[1] = bVar1;
          }
          else {
            *pbVar13 = 0;
          }
LAB_00013680:
          uVar11 = *local_1e4;
          uVar18 = local_1e4[1];
          if (uVar18 <= uVar11) {
            if (uVar18 == 0) {
              iVar8 = 100;
            }
            else {
              iVar8 = uVar18 << 1;
            }
            pvVar5 = realloc(*(void **)(DAT_0001386c + 0x136b0),iVar8 << 3);
            if (pvVar5 == (void *)0x0) goto LAB_00013544;
            *(void **)(iVar19 + 0x136b0) = pvVar5;
            *(int *)(iVar19 + 0x136ac) = iVar8;
          }
          local_1d8 = strlen((char *)__s);
          local_1d8 = local_1d8 + 1;
          local_1cc = strlen((char *)pbVar12);
          local_1cc = local_1cc + 1;
          local_1d4 = *(int *)(local_1c4 + 0xc);
          sVar14 = local_1d4 + local_1d8;
          local_1dc = sVar14 + local_1cc;
          uVar18 = *(uint *)(local_1c4 + 0x10);
          sVar20 = local_1d8;
          if (uVar18 < local_1dc) {
            local_1ec = local_1d8;
            pvVar5 = *(void **)(local_1c4 + 0x14);
            if (local_1d8 + local_1cc < 0x400) {
              sVar20 = uVar18 + 0x400;
            }
            else {
              sVar20 = uVar18 + local_1d8 + local_1cc;
            }
            local_1d8 = sVar14;
            pvVar6 = realloc(pvVar5,sVar20);
            if (pvVar6 == (void *)0x0) goto LAB_00013544;
            if (pvVar5 != pvVar6) {
              piVar15 = *(int **)(local_1c4 + 8);
              for (uVar18 = 0; uVar11 != uVar18; uVar18 = uVar18 + 1) {
                *piVar15 = (int)pvVar6 + (*piVar15 - (int)pvVar5);
                piVar15[1] = (int)pvVar6 + (piVar15[1] - (int)pvVar5);
                piVar15 = piVar15 + 2;
              }
            }
            iVar19 = DAT_00013870;
            *(void **)(DAT_00013870 + 0x13790) = pvVar6;
            *(size_t *)(iVar19 + 0x1378c) = sVar20;
            sVar20 = local_1ec;
            sVar14 = local_1d8;
          }
          local_1d8 = sVar14;
          iVar17 = iVar17 + 1;
          iVar8 = local_1c8[2];
          iVar19 = local_1c8[5];
          local_1ec = iVar8 + uVar11 * 8;
          pvVar5 = memcpy((void *)(iVar19 + local_1d4),__s,sVar20);
          *(void **)(iVar8 + uVar11 * 8) = pvVar5;
          pvVar5 = memcpy((void *)(iVar19 + local_1d8),pbVar12,local_1cc);
          *(void **)(local_1ec + 4) = pvVar5;
          local_1c8[3] = local_1dc;
          *local_1c8 = uVar11 + 1;
        }
      }
      if (local_1e8 == (char *)0x0) {
        do {
          pcVar4 = fgets_unlocked((char *)local_1bc,400,__stream);
          if (pcVar4 == (char *)0x0) break;
          pcVar4 = strchr((char *)local_1bc,10);
        } while (pcVar4 == (char *)0x0);
      }
      goto LAB_00013538;
    }
LAB_00013544:
    fclose(__stream);
    if (iVar17 != 0) {
      qsort(*(void **)(DAT_00013860 + 0x13570),*(size_t *)(DAT_00013860 + 0x13568),8,
            (__compar_fn_t)(DAT_00013864 + 0x1356c));
    }
  }
  if (local_2c == *local_1e0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar17);
}



/* ===== _nl_expand_alias @ 00013874 size=412 ===== */

void _nl_expand_alias(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 local_24 [2];
  int local_1c;
  
  piVar10 = *(int **)(DAT_00013a10 + 0x13884 + DAT_00013a14);
  local_1c = *piVar10;
  iVar11 = *(int *)(DAT_00013a10 + 0x13884 + DAT_00013a18);
  if ((iVar11 == 0) ||
     (iVar5 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00013a1c + 0x138cc)), iVar5 == 0)) {
    if (*(int *)(DAT_00013a20 + 0x13900) == 0) {
      *(int *)(DAT_00013a20 + 0x13900) = DAT_00013a24 + 0x138e0;
    }
    while ((local_24[0] = param_1, iVar5 = DAT_00013a2c, *(size_t *)(DAT_00013a28 + 0x138f0) == 0 ||
           (pvVar6 = bsearch(local_24,*(void **)(DAT_00013a28 + 0x138f8),
                             *(size_t *)(DAT_00013a28 + 0x138f0),8,
                             (__compar_fn_t)(DAT_00013a30 + 0x1392c)), iVar5 = DAT_00013a2c,
           pvVar6 == (void *)0x0))) {
      do {
        pcVar8 = *(char **)(iVar5 + 0x13934);
        bVar2 = false;
        do {
          pcVar9 = pcVar8;
          if (*pcVar8 == '\0') {
            if (bVar2) {
              *(char **)((int)&DAT_00013a30 + DAT_00013a3c) = pcVar8;
            }
            uVar12 = 0;
            goto LAB_00013944;
          }
          while (pcVar3 = pcVar9, bVar4 = bVar2, *pcVar9 == ':') {
            bVar2 = true;
            pcVar9 = pcVar9 + 1;
          }
          do {
            bVar2 = bVar4;
            pcVar8 = pcVar3;
            cVar1 = *pcVar8;
            pcVar3 = pcVar8 + 1;
            bVar4 = cVar1 != '\0' && cVar1 != ':';
          } while (cVar1 != '\0' && cVar1 != ':');
        } while (pcVar8 <= pcVar9);
        if (bVar2) {
          *(char **)(DAT_00013a38 + 0x13a04) = pcVar8;
        }
        iVar7 = FUN_00013460(pcVar9,(int)pcVar8 - (int)pcVar9);
      } while (iVar7 == 0);
    }
    uVar12 = *(undefined4 *)((int)pvVar6 + 4);
LAB_00013944:
    if ((iVar11 == 0) ||
       (iVar11 = pthread_mutex_unlock((pthread_mutex_t *)(DAT_00013a34 + 0x13970)), iVar11 == 0)) {
      if (local_1c == *piVar10) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar12);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== libintl_textdomain @ 00013a40 size=268 ===== */

char * libintl_textdomain(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *__s2;
  char *__s2_00;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = DAT_00013b4c + 0x13a58;
  puVar4 = *(undefined4 **)(iVar3 + DAT_00013b50);
  if (param_1 == (char *)0x0) {
    return (char *)*puVar4;
  }
  iVar5 = *(int *)(iVar3 + DAT_00013b54);
  if ((iVar5 != 0) &&
     (iVar1 = pthread_rwlock_wrlock(*(pthread_rwlock_t **)(iVar3 + DAT_00013b58)), iVar1 != 0))
  goto LAB_00013a8c;
  __s2 = (char *)*puVar4;
  __s2_00 = *(char **)(iVar3 + DAT_00013b5c);
  if ((*param_1 == '\0') || (iVar1 = strcmp(param_1,__s2_00), iVar1 == 0)) {
    *puVar4 = __s2_00;
    pcVar2 = __s2_00;
LAB_00013ac4:
    **(int **)(iVar3 + DAT_00013b60) = **(int **)(iVar3 + DAT_00013b60) + 1;
    if (__s2 != __s2_00 && __s2 != pcVar2) {
      free(__s2);
    }
  }
  else {
    iVar1 = strcmp(param_1,__s2);
    pcVar2 = __s2;
    if (iVar1 == 0) goto LAB_00013ac4;
    pcVar2 = strdup(param_1);
    if (pcVar2 != (char *)0x0) {
      *puVar4 = pcVar2;
      goto LAB_00013ac4;
    }
  }
  if ((iVar5 == 0) ||
     (iVar3 = pthread_rwlock_unlock(*(pthread_rwlock_t **)(iVar3 + DAT_00013b58)), iVar3 == 0)) {
    return pcVar2;
  }
LAB_00013a8c:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== FUN_00013b64 @ 00013b64 size=1100 ===== */

undefined4 *
FUN_00013b64(undefined4 *param_1,char *param_2,size_t param_3,uint param_4,char *param_5,
            char *param_6,char *param_7,char *param_8,char *param_9,char *param_10,int param_11)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  
  if (*param_5 == '/') {
    param_3 = 0;
  }
  sVar1 = strlen(param_5);
  if ((param_4 & 4) == 0) {
    iVar12 = 0;
  }
  else {
    sVar2 = strlen(param_6);
    iVar12 = sVar2 + 1;
  }
  if ((param_4 & 2) == 0) {
    iVar15 = 0;
  }
  else {
    sVar2 = strlen(param_7);
    iVar15 = sVar2 + 1;
  }
  if ((param_4 & 1) == 0) {
    iVar13 = 0;
  }
  else {
    sVar2 = strlen(param_8);
    iVar13 = sVar2 + 1;
  }
  if ((param_4 & 8) == 0) {
    iVar7 = 0;
  }
  else {
    sVar2 = strlen(param_9);
    iVar7 = sVar2 + 1;
  }
  sVar2 = strlen(param_10);
  pcVar3 = malloc(iVar15 + iVar12 + sVar1 + param_3 + 2 + iVar13 + iVar7 + sVar2);
  if (pcVar3 == (char *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    pcVar9 = pcVar3;
    if (param_3 != 0) {
      memcpy(pcVar3,param_2,param_3);
      sVar1 = param_3;
      while( true ) {
        sVar2 = strlen(pcVar9);
        sVar1 = sVar1 + ~sVar2;
        if (sVar1 == 0) break;
        pcVar8 = pcVar9 + sVar2;
        pcVar9 = pcVar8 + 1;
        *pcVar8 = ':';
      }
      (pcVar3 + param_3)[-1] = '/';
      pcVar9 = pcVar3 + param_3;
    }
    pcVar9 = stpcpy(pcVar9,param_5);
    if ((param_4 & 4) != 0) {
      *pcVar9 = '_';
      pcVar9 = stpcpy(pcVar9 + 1,param_6);
    }
    if ((param_4 & 2) != 0) {
      *pcVar9 = '.';
      pcVar9 = stpcpy(pcVar9 + 1,param_7);
    }
    if ((param_4 & 1) != 0) {
      *pcVar9 = '.';
      pcVar9 = stpcpy(pcVar9 + 1,param_8);
    }
    if ((param_4 & 8) != 0) {
      *pcVar9 = '@';
      pcVar9 = stpcpy(pcVar9 + 1,param_9);
    }
    *pcVar9 = '/';
    strcpy(pcVar9 + 1,param_10);
    puVar14 = param_1;
    for (puVar10 = (undefined4 *)*param_1; puVar10 != (undefined4 *)0x0;
        puVar10 = (undefined4 *)puVar10[3]) {
      if ((char *)*puVar10 != (char *)0x0) {
        iVar12 = strcmp((char *)*puVar10,pcVar3);
        if (iVar12 == 0) break;
        if (iVar12 < 0) {
          puVar10 = (undefined4 *)0x0;
          break;
        }
        puVar14 = puVar10 + 3;
      }
    }
    if (puVar10 == (undefined4 *)0x0 && param_11 != 0) {
      if (param_3 == 0) {
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
        sVar1 = param_3;
        pcVar9 = param_2;
        do {
          uVar11 = uVar11 + 1;
          sVar2 = strlen(pcVar9);
          sVar1 = sVar1 + ~sVar2;
          pcVar9 = pcVar9 + sVar2 + 1;
        } while (sVar1 != 0);
      }
      uVar6 = (DAT_00013fb0 & (int)param_4 >> 1) + (param_4 & 0x5555);
      iVar12 = (DAT_00013fb4 & (int)uVar6 >> 2) + (uVar6 & 0x3333);
      uVar6 = iVar12 + (iVar12 >> 4) & 0xf0f;
      iVar12 = uVar11 << (uVar6 + (uVar6 >> 8) & 0xff);
      iVar15 = iVar12 + 5;
      if (1 < uVar11) {
        iVar15 = iVar12 + 6;
      }
      puVar4 = malloc(iVar15 << 2);
      puVar10 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = pcVar3;
        if (uVar11 < 2) {
          uVar6 = (uint)((param_4 & 3) == 3);
        }
        else {
          uVar6 = 1;
        }
        puVar4[1] = uVar6;
        puVar4[2] = 0;
        puVar4[3] = *puVar14;
        *puVar14 = puVar4;
        uVar6 = param_4;
        if (uVar11 < 2) {
          uVar6 = param_4 - 1;
        }
        iVar12 = 0;
        do {
          if ((int)uVar6 < 0) {
            puVar4[iVar12 + 4] = 0;
            return puVar4;
          }
          iVar15 = iVar12;
          if (((~param_4 & uVar6) == 0) && ((uVar6 & 3) != 3)) {
            if (1 < uVar11) {
              pcVar3 = (char *)0x0;
              do {
                if (pcVar3 == (char *)0x0) {
                  pcVar3 = param_2;
                  if (param_3 == 0) goto LAB_00013e6c;
                }
                else {
                  if (param_2 + param_3 <= pcVar3) goto LAB_00013e6c;
                  sVar1 = strlen(pcVar3);
                  pcVar3 = pcVar3 + sVar1 + 1;
                  if (param_2 + param_3 <= pcVar3) goto LAB_00013e6c;
                }
                if (pcVar3 == (char *)0x0) goto LAB_00013e6c;
                sVar1 = strlen(pcVar3);
                uVar5 = FUN_00013b64(param_1,pcVar3,sVar1 + 1,uVar6,param_5,param_6,param_7,param_8,
                                     param_9,param_10,1);
                puVar4[iVar15 + 4] = uVar5;
                iVar15 = iVar15 + 1;
              } while( true );
            }
            iVar15 = iVar12 + 1;
            uVar5 = FUN_00013b64(param_1,param_2,param_3,uVar6,param_5,param_6,param_7,param_8,
                                 param_9,param_10,1);
            puVar4[iVar12 + 4] = uVar5;
          }
LAB_00013e6c:
          uVar6 = uVar6 - 1;
          iVar12 = iVar15;
        } while( true );
      }
    }
    free(pcVar3);
  }
  return puVar10;
}



/* ===== FUN_00013fb8 @ 00013fb8 size=212 ===== */

void FUN_00013fb8(byte *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = DAT_0001408c + 0x13fd8;
  bVar2 = true;
  iVar10 = **(int **)(iVar9 + DAT_00014090);
  iVar3 = 0;
  pbVar8 = param_1;
  while (iVar6 = iVar3 + 1, param_1 + param_2 != pbVar8) {
    pbVar4 = pbVar8 + 1;
    uVar1 = *(ushort *)(iVar10 + (uint)*pbVar8 * 2);
    pbVar8 = pbVar4;
    if (((uVar1 & 0x800) != 0) && (iVar3 = iVar6, (uVar1 & 4) != 0)) {
      bVar2 = false;
    }
  }
  if (bVar2) {
    iVar3 = 3;
  }
  else {
    iVar3 = 0;
  }
  pbVar4 = malloc(iVar3 + iVar6);
  if (pbVar4 == (byte *)0x0) {
    return;
  }
  pbVar7 = pbVar4;
  if (bVar2) {
    pbVar7 = pbVar4 + 3;
    *(undefined4 *)pbVar4 = DAT_00014094;
  }
  iVar3 = **(int **)(iVar9 + DAT_00014098);
LAB_00014028:
  if (param_1 == pbVar8) {
    *pbVar7 = 0;
    return;
  }
  pbVar4 = param_1 + 1;
  bVar5 = *param_1;
  uVar1 = *(ushort *)(iVar10 + (uint)bVar5 * 2);
  param_1 = pbVar4;
  if ((uVar1 & 4) == 0) goto code_r0x0001407c;
  bVar5 = (byte)*(undefined2 *)(iVar3 + (uint)bVar5 * 2);
  goto LAB_00014084;
code_r0x0001407c:
  if ((uVar1 & 8) != 0) {
LAB_00014084:
    *pbVar7 = bVar5;
    pbVar7 = pbVar7 + 1;
  }
  goto LAB_00014028;
}



/* ===== FUN_0001409c @ 0001409c size=444 ===== */

uint FUN_0001409c(byte *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  char *__s2;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_2 = param_1;
  pbVar9 = param_1;
  do {
    pbVar5 = pbVar9;
    bVar1 = *pbVar5;
    if (bVar1 == 0 || bVar1 == 0x5f) {
      if (param_1 == pbVar5) goto LAB_0001411c;
      uVar8 = 0;
      if (bVar1 == 0x5f) {
        *pbVar5 = 0;
        *param_4 = pbVar5 + 1;
        pbVar9 = pbVar5 + 1;
        do {
          pbVar5 = pbVar9;
          pbVar9 = pbVar5 + 1;
        } while (*pbVar5 != 0x2e && (*pbVar5 & 0xbf) != 0);
        uVar8 = 4;
      }
      goto LAB_000141c0;
    }
    pbVar9 = pbVar5 + 1;
  } while (bVar1 != 0x40 && bVar1 != 0x2e);
  uVar8 = 0;
  if (param_1 == pbVar5) {
LAB_0001411c:
    sVar2 = strlen((char *)param_1);
    uVar7 = 0;
    pbVar9 = param_1 + sVar2;
  }
  else {
LAB_000141c0:
    uVar7 = uVar8;
    pbVar9 = pbVar5;
    if (*pbVar5 == 0x2e) {
      pbVar3 = pbVar5 + 1;
      *pbVar5 = 0;
      *param_5 = pbVar3;
      pbVar9 = pbVar3;
      do {
        pbVar6 = pbVar9;
        pbVar9 = pbVar6 + 1;
      } while ((*pbVar6 & 0xbf) != 0);
      uVar7 = uVar8 | 2;
      pbVar9 = pbVar3;
      if ((pbVar6 != pbVar3) && (pbVar9 = pbVar6, pbVar5[1] != 0)) {
        __s2 = (char *)FUN_00013fb8(pbVar3,(int)pbVar6 - (int)pbVar3,pbVar5,pbVar5[1],param_4);
        *param_6 = __s2;
        if (__s2 == (char *)0x0) {
          return 0xffffffff;
        }
        iVar4 = strcmp((char *)*param_5,__s2);
        if (iVar4 == 0) {
          free(__s2);
        }
        else {
          uVar7 = uVar8 | 3;
        }
      }
    }
  }
  if (*pbVar9 == 0x40) {
    *pbVar9 = 0;
    *param_3 = pbVar9 + 1;
    if (pbVar9[1] != 0) {
      uVar7 = uVar7 | 8;
    }
  }
  if (((char *)*param_4 != (char *)0x0) && (*(char *)*param_4 == '\0')) {
    uVar7 = uVar7 & 0xfffffffb;
  }
  if (((char *)*param_5 != (char *)0x0) && (*(char *)*param_5 == '\0')) {
    uVar7 = uVar7 & 0xfffffffd;
  }
  return uVar7;
}



/* ===== FUN_00014258 @ 00014258 size=8 ===== */

uint FUN_00014258(uint param_1)

{
  return param_1 << 0x18 | (param_1 >> 8 & 0xff) << 0x10 | (param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}



/* ===== FUN_00014260 @ 00014260 size=468 ===== */

uint FUN_00014260(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  do {
    switch(*param_1) {
    case 0:
      if (param_1[1] != 0) {
        if (param_1[1] == 1) {
          param_2 = param_1[2];
        }
        else {
switchD_00014274_default:
          param_2 = 0;
        }
      }
      return param_2;
    case 1:
      iVar3 = FUN_00014260(param_1[2],param_2);
      return (uint)(iVar3 == 0);
    case 2:
      uVar1 = FUN_00014260(param_1[2],param_2);
      if (param_1[1] == 0xf) {
        if (uVar1 != 0) {
          return 1;
        }
      }
      else {
        if (param_1[1] != 0xe) {
          uVar2 = FUN_00014260(param_1[3],param_2);
          switch(param_1[1]) {
          case 3:
            return uVar2 * uVar1;
          case 4:
            if (uVar2 == 0) {
              raise(8);
            }
            return uVar1 / uVar2;
          case 5:
            if (uVar2 == 0) {
              raise(8);
            }
            return uVar1 - uVar2 * (uVar1 / uVar2);
          case 6:
            return uVar1 + uVar2;
          case 7:
            return uVar1 - uVar2;
          case 8:
            return (uint)(uVar1 < uVar2);
          case 9:
            return (uint)(uVar2 < uVar1);
          case 10:
            return (uint)(uVar1 <= uVar2);
          case 0xb:
            return (uint)(uVar2 <= uVar1);
          case 0xc:
            return (uint)(uVar1 == uVar2);
          case 0xd:
            return (uint)(uVar1 != uVar2);
          }
          goto switchD_00014274_default;
        }
        if (uVar1 == 0) goto switchD_00014274_default;
      }
      iVar3 = FUN_00014260(param_1[3],param_2);
      return (uint)(iVar3 != 0);
    case 3:
      iVar3 = FUN_00014260(param_1[2],param_2);
      if (iVar3 == 0) {
        iVar3 = 4;
      }
      else {
        iVar3 = 3;
      }
      param_1 = (undefined4 *)param_1[iVar3];
      break;
    default:
      goto switchD_00014274_default;
    }
  } while( true );
}



/* ===== FUN_0001448c @ 0001448c size=104 ===== */

char * FUN_0001448c(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  uint uVar1;
  size_t sVar2;
  char *__s;
  
  uVar1 = FUN_00014260(*(undefined4 *)(param_1 + 0x60));
  if (uVar1 < *(uint *)(param_1 + 100)) {
    __s = param_3;
    do {
      if (uVar1 == 0) {
        return __s;
      }
      uVar1 = uVar1 - 1;
      sVar2 = strlen(__s);
      __s = __s + sVar2 + 1;
    } while (__s < param_3 + param_4);
  }
  return param_3;
}



/* ===== FUN_000144f4 @ 000144f4 size=2120 ===== */

void FUN_000144f4(void *param_1,int param_2,char *param_3,uint param_4,int *param_5)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar14;
  int iVar15;
  void *__ptr;
  int iVar16;
  void *pvVar17;
  uint uVar18;
  int **ppiVar19;
  int **ppiVar20;
  undefined8 uVar21;
  int *local_70 [2];
  int local_68;
  undefined4 local_64;
  int *local_60;
  int *local_5c;
  uint local_58;
  int local_54;
  void *local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  ppiVar19 = local_70;
  ppiVar20 = local_70;
  iVar15 = DAT_00014d3c + 0x14518;
  local_60 = param_5;
  local_5c = *(int **)(iVar15 + DAT_00014d40);
  local_2c = *local_5c;
  local_58 = param_4;
  local_54 = param_2;
  local_50 = param_1;
  if (*(int *)((int)param_1 + 4) < 1) {
    FUN_00011e38();
  }
  piVar14 = *(int **)((int)local_50 + 8);
  if (piVar14 != (int *)0x0) {
    local_48 = piVar14[5];
    if (piVar14[0xc] != 0) {
      sVar3 = strlen(param_3);
      uVar4 = FUN_00011e08(param_3);
      uVar18 = piVar14[0xb];
      local_44 = (int *)piVar14[0xd];
      iVar16 = (uVar4 - (uVar18 - 2) * (uVar4 / (uVar18 - 2))) + 1;
      local_4c = piVar14[0xc];
      uVar4 = uVar4 - uVar18 * (uVar4 / uVar18);
      local_64 = uVar18 - iVar16;
      local_68 = iVar16 - uVar18;
      do {
        iVar5 = *(int *)(local_4c + uVar4 * 4);
        if (local_44 != (int *)0x0) {
          iVar5 = FUN_00014258();
        }
        if (iVar5 == 0) goto LAB_00014554;
        uVar18 = iVar5 - 1;
        if (uVar18 < local_48) {
          iVar13 = piVar14[6] + uVar18 * 8;
          uVar6 = *(uint *)(piVar14[6] + uVar18 * 8);
          iVar5 = 0;
          if (piVar14[3] != 0) {
            uVar6 = FUN_00014258();
            iVar13 = extraout_r2;
            iVar5 = extraout_r3;
          }
          if (sVar3 <= uVar6) {
            uVar21 = CONCAT44(*piVar14,*(undefined4 *)(iVar13 + 4));
            if (iVar5 != 0) {
              uVar21 = FUN_00014258();
            }
            pcVar12 = (char *)((int)((ulonglong)uVar21 >> 0x20) + (int)uVar21);
            goto LAB_0001462c;
          }
LAB_0001467c:
          bVar2 = false;
        }
        else {
          if (*(uint *)(piVar14[9] + (uVar18 - local_48) * 8) <= sVar3) goto LAB_0001467c;
          pcVar12 = *(char **)(piVar14[9] + (uVar18 - local_48) * 8 + 4);
LAB_0001462c:
          iVar5 = strcmp(param_3,pcVar12);
          bVar2 = iVar5 == 0;
        }
        if (bVar2) goto LAB_000146e4;
        iVar5 = iVar16;
        if (local_64 <= uVar4) {
          iVar5 = local_68;
        }
        uVar4 = uVar4 + iVar5;
      } while( true );
    }
    uVar4 = 0;
    uVar18 = local_48;
    while (uVar6 = uVar18, uVar4 < uVar6) {
      uVar18 = uVar6 + uVar4 >> 1;
      uVar21 = CONCAT44(*piVar14,*(undefined4 *)(piVar14[6] + uVar18 * 8 + 4));
      if (piVar14[3] != 0) {
        uVar21 = FUN_00014258();
      }
      iVar16 = strcmp(param_3,(char *)((int)((ulonglong)uVar21 >> 0x20) + (int)uVar21));
      if (-1 < iVar16) {
        if (iVar16 == 0) goto LAB_000146e4;
        uVar4 = uVar18 + 1;
        uVar18 = uVar6;
      }
    }
  }
LAB_00014554:
  local_44 = (int *)0x0;
  goto LAB_000148fc;
LAB_000146e4:
  if (uVar18 < local_48) {
    iVar16 = uVar18 * 8;
    iVar13 = *piVar14;
    uVar21 = CONCAT44(piVar14[7],*(undefined4 *)(piVar14[7] + iVar16 + 4));
    iVar5 = 0;
    if (piVar14[3] != 0) {
      uVar21 = FUN_00014258();
      iVar16 = extraout_r2_00;
      iVar5 = extraout_r3_00;
    }
    local_44 = (int *)(iVar13 + (int)uVar21);
    iVar16 = *(int *)((int)((ulonglong)uVar21 >> 0x20) + iVar16);
    if (iVar5 != 0) {
      iVar16 = FUN_00014258();
    }
    local_4c = iVar16 + 1;
  }
  else {
    local_4c = *(int *)(piVar14[10] + (uVar18 - local_48) * 8);
    local_44 = *(int **)(piVar14[10] + (uVar18 - local_48) * 8 + 4);
  }
  if (local_58 != 0) {
    if ((local_54 == 0) || (pcVar12 = *(char **)(local_54 + 8), pcVar12 == (char *)0x0)) {
      if (*(int *)(DAT_00014d44 + 0x14764) == 0) {
        pcVar12 = getenv((char *)(DAT_00014d48 + 0x14778));
        if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
          sVar3 = strlen(pcVar12);
          pvVar7 = malloc(sVar3 + 1);
          if (pvVar7 != (void *)0x0) {
            memcpy(pvVar7,pcVar12,sVar3 + 1);
          }
          *(void **)(DAT_00014d4c + 0x147c0) = pvVar7;
        }
        *(undefined4 *)(DAT_00014d50 + 0x147cc) = 1;
      }
      pcVar12 = *(char **)(DAT_00014d54 + 0x147dc);
      if (pcVar12 == (char *)0x0) {
        pcVar12 = (char *)FUN_00015f50();
      }
    }
    iVar15 = *(int *)(iVar15 + DAT_00014d58);
    if ((iVar15 != 0) &&
       (iVar16 = pthread_rwlock_rdlock((pthread_rwlock_t *)(piVar14 + 0x10)), iVar16 != 0))
    goto LAB_00014808;
    iVar16 = piVar14[0xf];
    do {
      if (iVar16 == 0) {
        if (iVar15 == 0) goto LAB_000148ac;
        pvVar7 = (void *)0x0;
        goto LAB_00014878;
      }
      iVar16 = iVar16 + -1;
      pvVar7 = (void *)(piVar14[0xe] + iVar16 * 0xc);
      iVar5 = strcmp(*(char **)(piVar14[0xe] + iVar16 * 0xc),pcVar12);
    } while (iVar5 != 0);
    if (iVar15 != 0) {
LAB_00014878:
      iVar16 = pthread_rwlock_unlock((pthread_rwlock_t *)(piVar14 + 0x10));
      if (iVar16 != 0) goto LAB_00014808;
      ppiVar19 = local_70;
      if (pvVar7 == (void *)0x0) {
        if ((iVar15 != 0) &&
           (iVar16 = pthread_rwlock_wrlock((pthread_rwlock_t *)(piVar14 + 0x10)), iVar16 != 0))
        goto LAB_00014808;
LAB_000148ac:
        local_58 = piVar14[0xf];
        pvVar17 = (void *)piVar14[0xe];
        uVar4 = local_58;
        do {
          if (uVar4 == 0) {
            iVar16 = local_58 * 0xc;
            if (pvVar17 == (void *)0x0) {
              pvVar17 = malloc(iVar16 + 0xcU);
            }
            else {
              pvVar17 = realloc(pvVar17,iVar16 + 0xcU);
            }
            if (pvVar17 != (void *)0x0) {
              piVar14[0xe] = (int)pvVar17;
              pcVar12 = strdup(pcVar12);
              iVar5 = DAT_00014d5c;
              if (pcVar12 != (char *)0x0) {
                pvVar7 = (void *)((int)pvVar17 + iVar16);
                *(char **)((int)pvVar17 + iVar16) = pcVar12;
                *(undefined4 *)((int)pvVar7 + 4) = 0xffffffff;
                local_70[0] = &local_30;
                pcVar8 = (char *)FUN_000144f4(local_50,local_54,iVar5 + 0x14a04,0);
                if (pcVar8 != (char *)0xffffffff) {
                  ppiVar20 = local_70;
                  if ((pcVar8 != (char *)0x0) &&
                     (pcVar8 = strstr(pcVar8,(char *)(DAT_00014d60 + 0x14a34)), ppiVar20 = local_70,
                     pcVar8 != (char *)0x0)) {
                    sVar3 = strcspn(pcVar8 + 8,(char *)(DAT_00014d64 + 0x14a50));
                    iVar16 = -(sVar3 + 8 & 0xfffffff8);
                    ppiVar20 = (int **)((int)local_70 + iVar16);
                    local_50 = (void *)((int)&local_68 + iVar16);
                    puVar9 = mempcpy(local_50,pcVar8 + 8,sVar3);
                    *puVar9 = 0;
                    pcVar8 = strchr(pcVar12,0x2f);
                    if (pcVar8 == (char *)0x0) {
                      sVar3 = strlen(pcVar12);
                      iVar5 = -(sVar3 + 0x12 & 0xfffffff8);
                      ppiVar20 = (int **)((int)local_70 + iVar5 + iVar16);
                      uVar4 = (uint)((int)&local_64 + iVar5 + iVar16 + 3) >> 3;
                      pcVar12 = memcpy((void *)(uVar4 << 3),pcVar12,sVar3);
                      iVar16 = DAT_00014d68;
                      *(undefined4 *)(sVar3 + uVar4 * 8) = *(undefined4 *)(DAT_00014d68 + 0x14ae0);
                      *(undefined4 *)(pcVar12 + sVar3 + 4) = *(undefined4 *)(iVar16 + 0x14ae4);
                      cVar1 = *(char *)(iVar16 + 0x14aea);
                      *(undefined2 *)(pcVar12 + sVar3 + 8) = *(undefined2 *)(iVar16 + 0x14ae8);
                      pcVar12[sVar3 + 10] = cVar1;
                    }
                    uVar10 = libiconv_open(pcVar12,local_50);
                    *(undefined4 *)((int)pvVar7 + 4) = uVar10;
                  }
                  *(undefined4 *)((int)pvVar7 + 8) = 0;
                  piVar14[0xf] = piVar14[0xf] + 1;
                  break;
                }
                free(pcVar12);
              }
            }
            if (iVar15 == 0) goto LAB_000148f4;
            iVar15 = pthread_rwlock_unlock((pthread_rwlock_t *)(piVar14 + 0x10));
            goto LAB_000149b8;
          }
          local_64 = uVar4 - 1;
          pvVar7 = (void *)((int)pvVar17 + local_64 * 0xc);
          iVar16 = strcmp(*(char **)((int)pvVar17 + local_64 * 0xc),pcVar12);
          uVar4 = local_64;
        } while (iVar16 != 0);
        ppiVar19 = ppiVar20;
        if ((iVar15 != 0) &&
           (iVar16 = pthread_rwlock_unlock((pthread_rwlock_t *)(piVar14 + 0x10)), iVar16 != 0))
        goto LAB_00014808;
      }
    }
    if (*(int *)((int)pvVar7 + 4) != -1) {
      if (*(int *)((int)pvVar7 + 8) == 0) {
        if (iVar15 != 0) {
          iVar16 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00014d6c + 0x14b38));
          if (iVar16 != 0) goto LAB_00014808;
          if (*(int *)((int)pvVar7 + 8) == 0) goto LAB_00014978;
LAB_00014b48:
          if ((iVar15 != 0) &&
             (iVar16 = pthread_mutex_unlock((pthread_mutex_t *)(DAT_00014d70 + 0x14b64)),
             iVar16 != 0)) goto LAB_00014808;
          goto LAB_00014b68;
        }
LAB_00014978:
        pvVar17 = calloc(local_48 + piVar14[8],4);
        if (pvVar17 == (void *)0x0) {
          *(undefined4 *)((int)pvVar7 + 8) = 0xffffffff;
          goto LAB_00014b48;
        }
        *(void **)((int)pvVar7 + 8) = pvVar17;
LAB_00014ba0:
        iVar5 = DAT_00014d7c;
        iVar16 = DAT_00014d78;
        __ptr = (void *)0x0;
        iVar13 = 0;
        local_48 = DAT_00014d80 + 0x14bc8;
        pvVar17 = *(void **)(DAT_00014d78 + 0x14bd8);
        while( true ) {
          local_34 = (int)pvVar17 + 4;
          local_3c = local_44;
          local_38 = local_4c;
          if (3 < *(uint *)(iVar16 + 0x14bdc)) {
            local_30 = *(uint *)(iVar16 + 0x14bdc) - 4;
            *ppiVar19 = &local_30;
            iVar11 = libiconv(*(undefined4 *)((int)pvVar7 + 4),&local_3c,&local_38,&local_34);
            if (iVar11 != -1) {
              piVar14 = *(int **)(iVar16 + 0x14bd8);
              *piVar14 = (local_34 - (int)piVar14) + -4;
              *(int **)(*(int *)((int)pvVar7 + 8) + uVar18 * 4) = piVar14;
              uVar4 = *(int *)(iVar16 + 0x14bdc) - (local_34 - (int)piVar14);
              *(uint *)(iVar16 + 0x14bd8) = local_34 + (uVar4 & 3);
              *(uint *)(iVar16 + 0x14bdc) = uVar4 & 0xfffffffc;
              if ((iVar15 == 0) ||
                 (iVar15 = pthread_mutex_unlock((pthread_mutex_t *)(iVar16 + 0x14bc0)), iVar15 == 0)
                 ) goto LAB_00014c54;
              goto LAB_00014808;
            }
            piVar14 = __errno_location();
            if (*piVar14 != 7) {
              if ((iVar15 == 0) ||
                 (iVar15 = pthread_mutex_unlock((pthread_mutex_t *)(iVar16 + 0x14bc0)), iVar15 == 0)
                 ) goto LAB_00014554;
              goto LAB_00014808;
            }
          }
          if (iVar13 == 0) {
            *(undefined4 *)(iVar5 + 0x14be8) = 0xff0;
            __ptr = malloc(0xff0);
            iVar13 = 1;
          }
          else {
            iVar13 = iVar13 + 1;
            *(int *)(local_48 + 0x24) = iVar13 * 0xff0;
            __ptr = realloc(__ptr,iVar13 * 0xff0);
          }
          iVar11 = DAT_00014d84;
          if (__ptr == (void *)0x0) break;
          *(void **)(DAT_00014d88 + 0x14d38) = __ptr;
          pvVar17 = __ptr;
        }
        *(undefined4 *)(DAT_00014d84 + 0x14d04) = 0;
        *(undefined4 *)(iVar11 + 0x14d08) = 0;
        if (iVar15 != 0) {
          iVar15 = pthread_mutex_unlock((pthread_mutex_t *)(iVar11 + 0x14cec));
LAB_000149b8:
          if (iVar15 != 0) {
LAB_00014808:
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
      }
      else {
LAB_00014b68:
        if (*(int *)((int)pvVar7 + 8) != -1) {
          if (*(int *)(*(int *)((int)pvVar7 + 8) + uVar18 * 4) != 0) {
LAB_00014c54:
            piVar14 = *(int **)(*(int *)((int)pvVar7 + 8) + uVar18 * 4);
            local_44 = piVar14 + 1;
            local_4c = *piVar14;
            goto LAB_00014c68;
          }
          if ((iVar15 != 0) &&
             (iVar16 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00014d74 + 0x14b9c)), iVar16 != 0)
             ) goto LAB_00014808;
          goto LAB_00014ba0;
        }
      }
LAB_000148f4:
      local_44 = (int *)0xffffffff;
      goto LAB_000148fc;
    }
  }
LAB_00014c68:
  *local_60 = local_4c;
LAB_000148fc:
  if (local_2c != *local_5c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_44);
  }
  return;
}



/* ===== FUN_00014d8c @ 00014d8c size=2052 ===== */

void FUN_00014d8c(char *param_1,char *param_2,char *param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  char cVar1;
  int iVar2;
  __uid_t _Var3;
  __uid_t _Var4;
  __gid_t _Var5;
  __gid_t _Var6;
  char *pcVar7;
  char *__s;
  char *pcVar8;
  size_t sVar9;
  int iVar10;
  int iVar11;
  undefined4 *__key;
  void *pvVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint __size;
  char *pcVar16;
  int *piVar17;
  int iVar18;
  undefined1 *puVar19;
  int *piVar20;
  bool bVar21;
  undefined1 auStack_a0 [12];
  int local_94;
  char *local_90;
  char *local_8c;
  undefined4 *local_88;
  int *local_84;
  char *local_80;
  int *local_7c;
  char *local_78;
  int local_74;
  int local_70;
  int local_6c;
  size_t local_68;
  int *local_64;
  char *local_60;
  int *local_5c;
  char *local_58;
  int local_54;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  undefined4 local_3c;
  char *local_30;
  int local_2c;
  
  puVar19 = auStack_a0;
  iVar18 = DAT_00015590 + 0x14da8;
  local_84 = *(int **)(iVar18 + DAT_00015594);
  local_2c = *local_84;
  local_80 = param_3;
  local_6c = param_4;
  if (param_2 == (char *)0x0) goto LAB_00014f10;
  local_5c = __errno_location();
  local_74 = *local_5c;
  local_54 = *(int *)(iVar18 + DAT_00015598);
  if ((local_54 != 0) &&
     (iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t *)(DAT_0001559c + 0x14e20)), iVar2 != 0)) {
LAB_00014e04:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1 == (char *)0x0) {
    param_1 = *(char **)(DAT_000155a0 + 0x14e18);
  }
  local_3c = 0;
  local_44 = param_6;
  local_48 = param_1;
  local_30 = param_2;
  if (((local_54 != 0) &&
      (iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t *)(DAT_000155a4 + 0x14e8c)), iVar2 != 0)) ||
     ((iVar2 = DAT_000155a8,
      local_64 = tfind(&local_48,(void **)(DAT_000155a8 + 0x14ecc),
                       (__compar_fn_t)(DAT_000155ac + 0x14e68)), local_54 != 0 &&
      (iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(iVar2 + 0x14eac)), iVar2 != 0))))
  goto LAB_00014e04;
  iVar2 = DAT_000155b8;
  if ((local_64 != (int *)0x0) &&
     (iVar13 = *local_64, *(int *)(iVar13 + 8) == **(int **)(iVar18 + DAT_000155b0))) {
    param_2 = *(char **)(iVar13 + 0x10);
    if (local_6c != 0) {
      param_2 = (char *)FUN_0001448c(*(undefined4 *)(*(int *)(iVar13 + 0xc) + 8),param_5,param_2,
                                     *(undefined4 *)(iVar13 + 0x14));
    }
    if ((local_54 == 0) ||
       (iVar18 = pthread_rwlock_unlock((pthread_rwlock_t *)(DAT_000155b4 + 0x14f20)), iVar18 == 0))
    {
      *local_5c = local_74;
      goto LAB_00014f10;
    }
    goto LAB_00014e04;
  }
  if (*(int *)(DAT_000155b8 + 0x14fa4) == 0) {
    _Var3 = getuid();
    _Var4 = geteuid();
    if (_Var3 == _Var4) {
      _Var5 = getgid();
      _Var6 = getegid();
      if (_Var5 == _Var6) {
        *(undefined4 *)(iVar2 + 0x14fa4) = 0xffffffff;
        goto LAB_00014f64;
      }
    }
    *(undefined4 *)(DAT_000155bc + 0x14fd0) = 1;
  }
LAB_00014f64:
  for (piVar17 = (int *)**(int **)(iVar18 + DAT_000155c0); piVar17 != (int *)0x0;
      piVar17 = (int *)*piVar17) {
    iVar2 = strcmp(param_1,(char *)(piVar17 + 3));
    if (iVar2 == 0) {
      local_58 = (char *)piVar17[1];
      puVar19 = auStack_a0;
      if (*local_58 == '/') goto LAB_00014f84;
      __size = 0x1002;
      sVar9 = strlen(local_58);
      local_60 = (char *)(sVar9 + 1);
      puVar19 = auStack_a0;
      goto LAB_00015494;
    }
    if (iVar2 < 0) {
      piVar17 = (int *)0x0;
      local_58 = (char *)(DAT_000155c8 + 0x14ffc);
      goto LAB_00014f84;
    }
  }
  local_58 = (char *)(DAT_000155c4 + 0x14f84);
  puVar19 = auStack_a0;
LAB_00014f84:
  switch(param_6) {
  case 0:
    pcVar16 = (char *)(DAT_000155cc + 0x15008);
    break;
  case 1:
    pcVar16 = (char *)(DAT_00015600 + 0x153bc);
    break;
  case 2:
    pcVar16 = (char *)(DAT_000155fc + 0x153b0);
    break;
  case 3:
    pcVar16 = (char *)(DAT_00015604 + 0x153c8);
    break;
  case 4:
    pcVar16 = (char *)(DAT_00015614 + 0x153f8);
    break;
  case 5:
    pcVar16 = (char *)(DAT_00015608 + 0x153d4);
    break;
  case 6:
    pcVar16 = (char *)(DAT_0001560c + 0x153e0);
    break;
  default:
    pcVar16 = (char *)(DAT_00015610 + 0x153ec);
  }
  pcVar7 = (char *)thunk_FUN_00016200(param_6,pcVar16);
  bVar21 = pcVar7 == (char *)0x0;
  if (bVar21) {
    pcVar7 = (char *)FUN_00016274();
  }
  iVar2 = strcmp(pcVar7,(char *)(DAT_000155d0 + 0x15038));
  __s = pcVar7;
  if (((iVar2 != 0) &&
      (((__s = getenv((char *)(DAT_000155d4 + 0x1504c)), __s == (char *)0x0 || (*__s == '\0')) &&
       (__s = pcVar7, bVar21)))) && (pcVar8 = (char *)FUN_000161e8(), pcVar8 != (char *)0x0)) {
    __s = pcVar8;
  }
  local_68 = strlen(param_1);
  sVar9 = strlen(pcVar16);
  iVar2 = -(sVar9 + local_68 + 0xc & 0xfffffff8);
  local_78 = puVar19 + iVar2 + 8;
  pcVar16 = stpcpy(local_78,pcVar16);
  *(undefined2 *)pcVar16 = *(undefined2 *)(DAT_000155d8 + 0x150c8);
  pcVar16 = mempcpy(pcVar16 + 1,param_1,local_68);
  strcpy(pcVar16,(char *)(DAT_000155dc + 0x150dc));
  sVar9 = strlen(__s);
  iVar13 = -(sVar9 + 8 & 0xfffffff8);
  local_60 = puVar19 + iVar13 + iVar2 + 8;
  local_8c = (char *)(DAT_000155e0 + 0x15104);
  local_90 = (char *)(DAT_000155e4 + 0x15110);
  local_94 = DAT_000155e8 + 0x1511c;
LAB_0001511c:
  for (; *__s == ':'; __s = __s + 1) {
  }
  pcVar16 = local_60;
  if (*__s != '\0') goto LAB_00015144;
  pcVar16[0] = 'C';
  pcVar16[1] = '\0';
  goto LAB_00015190;
LAB_00015494:
  iVar2 = -((uint)(local_60 + __size + 7) & 0xfffffff8);
  piVar20 = (int *)(puVar19 + iVar2);
  pcVar7 = puVar19 + iVar2 + 8;
  *local_5c = 0;
  pcVar16 = getcwd(pcVar7,__size);
  if (pcVar16 != (char *)0x0) goto LAB_00015440;
  if (*local_5c != 0x22) goto LAB_000154f0;
  __size = __size + (__size >> 1) + 0x20;
  puVar19 = puVar19 + iVar2;
  goto LAB_00015494;
LAB_00015440:
  sVar9 = strlen(pcVar7);
  pcVar16 = local_58;
  *(undefined2 *)(pcVar7 + sVar9) = *(undefined2 *)(DAT_00015618 + 0x15458);
  strcpy(pcVar7 + sVar9 + 1,pcVar16);
  puVar19 = puVar19 + iVar2;
  local_58 = pcVar7;
  goto LAB_00014f84;
LAB_00015144:
  while( true ) {
    cVar1 = *__s;
    if (cVar1 == '\0' || cVar1 == ':') break;
    *pcVar16 = cVar1;
    __s = __s + 1;
    pcVar16 = pcVar16 + 1;
  }
  *pcVar16 = '\0';
  if ((*(int *)(local_94 + 0x6c) == 1) && (pcVar16 = strchr(local_60,0x2f), pcVar16 != (char *)0x0))
  goto LAB_0001511c;
LAB_00015190:
  iVar10 = strcmp(local_60,local_8c);
  piVar20 = (int *)(puVar19 + iVar13 + iVar2);
  if ((iVar10 == 0) ||
     (iVar10 = strcmp(local_60,local_90), piVar20 = (int *)(puVar19 + iVar13 + iVar2), iVar10 == 0))
  goto LAB_000154f0;
  iVar10 = FUN_00011b3c(local_58,local_60,local_78,piVar17);
  if (iVar10 == 0) goto LAB_0001511c;
  local_88 = &local_4c;
  *(undefined4 **)(puVar19 + iVar13 + iVar2) = local_88;
  pcVar16 = (char *)FUN_000144f4(iVar10,piVar17,param_2,1);
  if (pcVar16 == (char *)0x0) {
    local_7c = (int *)(iVar10 + 0x10);
    local_70 = 0;
    while( true ) {
      piVar20 = local_7c + 1;
      iVar11 = *local_7c;
      local_7c = piVar20;
      if (iVar11 == 0) break;
      *(undefined4 **)(puVar19 + iVar13 + iVar2) = local_88;
      pcVar16 = (char *)FUN_000144f4(iVar11,piVar17,param_2,1);
      piVar20 = (int *)(puVar19 + iVar13 + iVar2);
      if (pcVar16 == (char *)0xffffffff) goto LAB_000154f0;
      if (pcVar16 != (char *)0x0) {
        iVar10 = *(int *)(iVar10 + (local_70 + 4) * 4);
        goto LAB_00015250;
      }
      local_70 = local_70 + 1;
    }
    goto LAB_0001511c;
  }
  piVar20 = (int *)(puVar19 + iVar13 + iVar2);
  if (pcVar16 != (char *)0xffffffff) {
LAB_00015250:
    if (local_64 == (int *)0x0) {
      sVar9 = strlen(param_2);
      __key = malloc(local_68 + 0x19 + sVar9 + 1);
      if (__key != (undefined4 *)0x0) {
        pvVar12 = mempcpy(__key + 6,param_2,sVar9 + 1);
        pvVar12 = memcpy(pvVar12,param_1,local_68 + 1);
        *__key = pvVar12;
        __key[1] = param_6;
        puVar14 = *(undefined4 **)(iVar18 + DAT_000155b0);
        __key[3] = iVar10;
        uVar15 = *puVar14;
        __key[4] = pcVar16;
        __key[2] = uVar15;
        __key[5] = local_4c;
        if (((local_54 != 0) &&
            (iVar18 = pthread_rwlock_wrlock((pthread_rwlock_t *)(DAT_000155ec + 0x1532c)),
            iVar18 != 0)) ||
           ((iVar18 = DAT_000155f0,
            puVar14 = tsearch(__key,(void **)(DAT_000155f0 + 0x1536c),
                              (__compar_fn_t)(DAT_000155f4 + 0x15308)), local_54 != 0 &&
            (iVar18 = pthread_rwlock_unlock((pthread_rwlock_t *)(iVar18 + 0x1534c)), iVar18 != 0))))
        goto LAB_00014e04;
        if ((puVar14 == (undefined4 *)0x0) || ((undefined4 *)*puVar14 != __key)) {
          free(__key);
        }
      }
    }
    else {
      iVar2 = *local_64;
      uVar15 = **(undefined4 **)(iVar18 + DAT_000155b0);
      *(int *)(iVar2 + 0xc) = iVar10;
      *(undefined4 *)(iVar2 + 8) = uVar15;
      *(char **)(iVar2 + 0x10) = pcVar16;
      *(undefined4 *)(iVar2 + 0x14) = local_4c;
    }
    *local_5c = local_74;
    if (local_6c != 0) {
      pcVar16 = (char *)FUN_0001448c(*(undefined4 *)(iVar10 + 8),param_5,pcVar16,local_4c);
    }
    param_2 = pcVar16;
    if ((local_54 != 0) &&
       (iVar18 = pthread_rwlock_unlock((pthread_rwlock_t *)(DAT_000155f8 + 0x153bc)), iVar18 != 0))
    goto LAB_00014e04;
    goto LAB_00014f10;
  }
LAB_000154f0:
  if ((local_54 != 0) &&
     (iVar18 = pthread_rwlock_unlock((pthread_rwlock_t *)(DAT_0001561c + 0x15530)), iVar18 != 0))
  goto LAB_00014e04;
  if (((*(int *)(DAT_00015620 + 0x1558c) != 1) &&
      (pcVar16 = getenv((char *)(DAT_00015624 + 0x15534)), pcVar16 != (char *)0x0)) &&
     (*pcVar16 != '\0')) {
    *piVar20 = local_6c;
    FUN_00016444(pcVar16,param_1,param_2,local_80);
  }
  *local_5c = local_74;
  if (param_5 != 1 && local_6c != 0) {
    param_2 = local_80;
  }
LAB_00014f10:
  if (local_2c == *local_84) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}



/* ===== libintl_dcngettext @ 00015628 size=28 ===== */

void libintl_dcngettext(void)

{
  FUN_00014d8c();
  return;
}



/* ===== libintl_dngettext @ 00015644 size=24 ===== */

void libintl_dngettext(void)

{
  libintl_dcngettext();
  return;
}



/* ===== libintl_ngettext @ 0001565c size=40 ===== */

void libintl_ngettext(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  libintl_dcngettext(0,param_1,param_2,param_3,5,param_2,param_3);
  return;
}



/* ===== FUN_00015684 @ 00015684 size=80 ===== */

void FUN_00015684(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  if (iVar1 == 2) {
LAB_000156c8:
    FUN_00015684(param_1[3]);
  }
  else {
    if (iVar1 == 3) {
      FUN_00015684(param_1[4]);
      goto LAB_000156c8;
    }
    if (iVar1 != 1) goto LAB_000156b4;
  }
  FUN_00015684(param_1[2]);
LAB_000156b4:
  free(param_1);
  return;
}



/* ===== FUN_000156d4 @ 000156d4 size=124 ===== */

int * FUN_000156d4(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_3 + param_1;
  piVar1 = piVar2;
  do {
    if (piVar1 == param_3) {
      piVar1 = malloc(0x14);
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_1;
        piVar1[1] = param_2;
        piVar3 = piVar1 + param_1 + 1;
        while (piVar2 != param_3) {
          piVar2 = piVar2 + -1;
          *piVar3 = *piVar2;
          piVar3 = piVar3 + -1;
        }
        return piVar1;
      }
      break;
    }
    piVar1 = piVar1 + -1;
  } while (*piVar1 != 0);
  while (piVar2 != param_3) {
    piVar2 = piVar2 + -1;
    FUN_00015684(*piVar2);
  }
  return (int *)0x0;
}



/* ===== FUN_00015750 @ 00015750 size=76 ===== */

void FUN_00015750(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  piVar1 = *(int **)(DAT_0001579c + 0x15764 + DAT_000157a0);
  local_c = *piVar1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_000156d4(2,param_1,&uStack_14,local_c,param_1);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_000157a4 @ 000157a4 size=1636 ===== */

void FUN_000157a4(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  short *__dest;
  int iVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  short *psVar17;
  int unaff_r7;
  uint uVar18;
  int iVar19;
  uint uVar20;
  short *__src;
  int iVar21;
  bool bVar22;
  uint local_50c;
  int *local_500;
  int local_4e8;
  int local_4e4;
  int iStack_4e0;
  short local_4dc [200];
  int aiStack_34c [200];
  int local_2c;
  
  iVar2 = DAT_00015e14;
  iVar21 = 0;
  piVar11 = *(int **)(DAT_00015e08 + 0x157b8 + DAT_00015e0c);
  uVar18 = 0;
  uVar16 = 0xfffffffe;
  local_500 = aiStack_34c;
  local_2c = *piVar11;
  local_50c = 200;
  iVar12 = DAT_00015e10 + 0x15804;
  iVar13 = DAT_00015e18 + 0x1581c;
  piVar14 = local_500;
  psVar17 = local_4dc;
  __src = local_4dc;
  do {
    *psVar17 = (short)uVar18;
    __dest = __src;
    if (__src + local_50c + 0x7fffffff <= psVar17) {
      iVar3 = (int)psVar17 - (int)__src >> 1;
      if (local_50c < 10000) {
        local_50c = (local_50c + 0x7fffffff) * 2 + 2;
        if (9999 < local_50c) {
          local_50c = 10000;
        }
        __dest = malloc(local_50c * 6 + 3);
        if (__dest != (short *)0x0) {
          memcpy(__dest,__src,(iVar3 + 1) * 2);
          local_500 = memcpy(__dest + local_50c,local_500,(iVar3 + 1) * 4);
          if (__src != local_4dc) {
            free(__src);
          }
          psVar17 = __dest + iVar3;
          piVar14 = local_500 + iVar3;
          if (psVar17 < __dest + (local_50c - 1)) goto LAB_00015904;
          uVar15 = 1;
          goto LAB_00015df0;
        }
      }
      uVar15 = 2;
      __dest = __src;
      goto LAB_00015db8;
    }
LAB_00015904:
    if (uVar18 == 9) {
      uVar15 = 0;
      goto LAB_00015db8;
    }
    iVar3 = (int)*(char *)(iVar12 + uVar18);
    if (iVar3 != -10) {
      if (uVar16 == 0xfffffffe) {
        pbVar7 = (byte *)*param_1;
        do {
          pbVar6 = pbVar7;
          pbVar7 = pbVar6 + 1;
          uVar16 = (uint)*pbVar6;
          if (uVar16 == 0) {
            *param_1 = pbVar6;
            uVar20 = 0;
            goto LAB_00015948;
          }
        } while (uVar16 == 0x20 || uVar16 == 9);
        if (uVar16 == 0x2f) {
          unaff_r7 = 4;
LAB_00015b7c:
          uVar16 = 0x105;
        }
        else if (uVar16 < 0x30) {
          if (uVar16 == 0x26) {
LAB_00015ad0:
            if (pbVar6[1] != uVar16) goto LAB_00015ab8;
            pbVar7 = pbVar6 + 2;
          }
          else if (uVar16 < 0x27) {
            if (uVar16 == 10) {
LAB_00015a90:
              uVar16 = 0;
              pbVar7 = pbVar6;
            }
            else if (uVar16 < 0xb) {
              if (uVar16 == 0) {
                uVar16 = 0;
                pbVar7 = pbVar6;
              }
              else {
                uVar16 = 0x100;
              }
            }
            else if (uVar16 == 0x21) {
              if (pbVar6[1] == 0x3d) {
                unaff_r7 = 0xd;
LAB_00015b20:
                uVar16 = 0x102;
                pbVar7 = pbVar6 + 2;
              }
              else {
                uVar16 = 0x21;
              }
            }
            else {
              bVar22 = uVar16 == 0x25;
              uVar16 = 0x105;
              if (bVar22) {
                unaff_r7 = 5;
              }
              else {
                uVar16 = 0x100;
              }
            }
          }
          else {
            if (uVar16 == 0x2a) {
              unaff_r7 = 3;
              goto LAB_00015b7c;
            }
            if (uVar16 < 0x2b) {
              if (uVar16 < 0x28) {
                uVar16 = 0x100;
              }
            }
            else if (uVar16 == 0x2b) {
              unaff_r7 = 6;
              uVar16 = 0x104;
            }
            else if (uVar16 == 0x2d) {
              uVar16 = 0x104;
              unaff_r7 = 7;
            }
            else {
              uVar16 = 0x100;
            }
          }
        }
        else if (uVar16 == 0x3c) {
          if (pbVar6[1] == 0x3d) {
            pbVar7 = pbVar6 + 2;
            unaff_r7 = 10;
          }
          else {
            unaff_r7 = 8;
          }
LAB_00015b58:
          uVar16 = 0x103;
        }
        else if (uVar16 < 0x3d) {
          if (uVar16 != 0x3a) {
            if (0x3a < uVar16) goto LAB_00015a90;
            while( true ) {
              unaff_r7 = uVar16 - 0x30;
              if (9 < *pbVar7 - 0x30) break;
              uVar16 = unaff_r7 * 10 + (uint)*pbVar7;
              pbVar7 = pbVar7 + 1;
            }
            uVar16 = 0x106;
          }
        }
        else if (uVar16 != 0x3f) {
          if (uVar16 < 0x40) {
            if (uVar16 == 0x3d) {
              if (pbVar6[1] == 0x3d) {
                unaff_r7 = 0xc;
                goto LAB_00015b20;
              }
            }
            else if (uVar16 == 0x3e) {
              if (pbVar6[1] == 0x3d) {
                pbVar7 = pbVar6 + 2;
                unaff_r7 = 0xb;
              }
              else {
                unaff_r7 = 9;
              }
              goto LAB_00015b58;
            }
          }
          else {
            if (uVar16 == 0x6e) goto LAB_000159e4;
            if (uVar16 == 0x7c) goto LAB_00015ad0;
          }
LAB_00015ab8:
          uVar16 = 0x100;
        }
LAB_000159e4:
        *param_1 = pbVar7;
      }
      if ((int)uVar16 < 1) {
        uVar20 = 0;
        uVar16 = uVar20;
      }
      else {
        uVar20 = (uint)*(byte *)(DAT_00015e20 + uVar16 + 0x15a23);
      }
LAB_00015948:
      uVar4 = uVar20 + iVar3;
      if ((0x36 < uVar4) ||
         (iVar3 = DAT_00015e1c + 0x15960 + uVar4, (int)*(char *)(iVar3 + 0x122) != uVar20))
      goto LAB_00015b8c;
      uVar18 = (uint)*(byte *)(iVar3 + 0x159);
      uVar20 = 0;
      if (uVar18 == 0) goto LAB_00015c00;
      piVar14[1] = unaff_r7;
      if (iVar21 != 0) {
        iVar21 = iVar21 + -1;
      }
      piVar5 = piVar14 + 1;
      uVar16 = 0xfffffffe;
      goto LAB_00015990;
    }
LAB_00015b8c:
    uVar20 = (uint)*(byte *)(DAT_00015e24 + uVar18 + 0x15d28);
    if (uVar20 == 0) {
      if (iVar21 == 3) {
        if ((int)uVar16 < 1) {
          if (uVar16 == 0) {
LAB_00015d94:
            uVar15 = 1;
LAB_00015db8:
            if (__dest != local_4dc) {
LAB_00015df0:
              free(__dest);
            }
            if (local_2c != *piVar11) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(uVar15);
            }
            return;
          }
        }
        else {
          uVar16 = 0xfffffffe;
        }
      }
      while ((((iVar21 = (int)*(char *)(DAT_00015e28 + 0x15bbc + uVar18), iVar21 == -10 ||
               (uVar18 = iVar21 + 1, 0x36 < uVar18)) ||
              (iVar21 = DAT_00015e28 + 0x15bbc + uVar18, *(char *)(iVar21 + 0x122) != '\x01')) ||
             (uVar18 = (uint)*(byte *)(iVar21 + 0x159), uVar18 == 0))) {
        if (__dest == psVar17) goto LAB_00015d94;
        psVar17 = psVar17 + -1;
        uVar18 = (uint)*psVar17;
        piVar14 = piVar14 + -1;
      }
      piVar14[1] = unaff_r7;
      iVar21 = 3;
      piVar5 = piVar14 + 1;
      goto LAB_00015990;
    }
LAB_00015c00:
    bVar1 = *(byte *)(iVar2 + uVar20 + 0x159bb);
    iVar3 = piVar14[1 - (uint)bVar1];
    switch(uVar20) {
    case 2:
      if (*piVar14 == 0) goto LAB_00015d94;
      param_1[1] = *piVar14;
      break;
    case 3:
      local_4e4 = piVar14[-2];
      piVar10 = (int *)0x3;
      local_4e8 = piVar14[-4];
      iStack_4e0 = *piVar14;
      piVar5 = (int *)0x10;
      piVar8 = &local_4e8;
      goto LAB_00015cfc;
    case 4:
      iVar9 = *piVar14;
      iVar3 = 0xf;
      iVar19 = piVar14[-2];
      goto LAB_00015d10;
    case 5:
      iVar9 = *piVar14;
      iVar3 = 0xe;
      iVar19 = piVar14[-2];
      goto LAB_00015d10;
    case 6:
      goto LAB_00015d28;
    case 7:
      goto LAB_00015d28;
    case 8:
      goto LAB_00015d28;
    case 9:
LAB_00015d28:
      iVar9 = *piVar14;
      iVar19 = piVar14[-2];
      iVar3 = piVar14[-1];
LAB_00015d10:
      iVar3 = FUN_00015750(iVar3,iVar19,iVar9);
      break;
    case 10:
      local_4e8 = *piVar14;
      piVar8 = &local_4e8;
      piVar5 = (int *)0x2;
      piVar10 = (int *)0x1;
      goto LAB_00015cfc;
    case 0xb:
      piVar10 = (int *)0x0;
      piVar5 = piVar10;
      piVar8 = piVar10;
LAB_00015cfc:
      iVar3 = FUN_000156d4(piVar10,piVar5,piVar8);
      break;
    case 0xc:
      iVar3 = FUN_000156d4(0,1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 8) = *piVar14;
      }
      break;
    case 0xd:
      iVar3 = piVar14[-1];
    }
    iVar19 = (int)(short)(ushort)bVar1;
    psVar17 = psVar17 + -iVar19;
    piVar5 = piVar14 + (1 - iVar19);
    piVar14[1 - iVar19] = iVar3;
    iVar3 = *(byte *)(iVar13 + uVar20 + 0x1b9) - 0x10;
    uVar18 = (int)*(char *)(iVar13 + iVar3 + 0x1c7) + (int)*psVar17;
    if ((uVar18 < 0x37) &&
       (iVar19 = iVar13 + uVar18, (int)*(char *)(iVar19 + 0x122) == (int)*psVar17)) {
      uVar18 = (uint)*(byte *)(iVar19 + 0x159);
    }
    else {
      uVar18 = (uint)*(char *)(DAT_00015e2c + iVar3 + 0x15e9a);
    }
LAB_00015990:
    psVar17 = psVar17 + 1;
    piVar14 = piVar5;
    __src = __dest;
  } while( true );
}



/* ===== FUN_00015e30 @ 00015e30 size=264 ===== */

void FUN_00015e30(char *param_1,int *param_2,ulong *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  byte *__nptr;
  ulong uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  byte *local_30;
  char *local_2c;
  int local_28;
  int local_24;
  
  iVar7 = DAT_00015f38 + 0x15e50;
  piVar6 = *(int **)(iVar7 + DAT_00015f3c);
  local_24 = *piVar6;
  if (param_1 != (char *)0x0) {
    pcVar2 = strstr(param_1,(char *)(DAT_00015f40 + 0x15e6c));
    pcVar3 = strstr(param_1,(char *)(DAT_00015f44 + 0x15e80));
    if (pcVar3 != (char *)0x0 && pcVar2 != (char *)0x0) {
      pbVar1 = (byte *)(pcVar3 + 9);
      do {
        __nptr = pbVar1;
        uVar5 = (uint)*__nptr;
        if (uVar5 == 0) goto LAB_00015f08;
        pbVar1 = __nptr + 1;
      } while ((*(ushort *)(**(int **)(iVar7 + DAT_00015f48) + uVar5 * 2) & 0x20) != 0);
      if ((uVar5 - 0x30 < 10) &&
         (uVar4 = strtoul((char *)__nptr,(char **)&local_30,10), local_30 != __nptr)) {
        *param_3 = uVar4;
        local_2c = pcVar2 + 7;
        iVar7 = FUN_000157a4(&local_2c);
        if (iVar7 == 0) {
          *param_2 = local_28;
          goto LAB_00015f1c;
        }
      }
    }
  }
LAB_00015f08:
  *param_2 = DAT_00015f4c + 0x15f14;
  *param_3 = 2;
LAB_00015f1c:
  if (local_24 == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00015f50 @ 00015f50 size=56 ===== */

char * FUN_00015f50(void)

{
  char *pcVar1;
  
  pcVar1 = nl_langinfo(10);
  if (pcVar1 == (char *)0x0) {
    return (char *)((int)&DAT_00015f88 + DAT_00015f8c);
  }
  if (*pcVar1 != '\0') {
    return pcVar1;
  }
  return (char *)(DAT_00015f88 + 0x15f7c);
}



/* ===== libintl_set_relocation_prefix @ 00016048 size=192 ===== */

void libintl_set_relocation_prefix(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  void *__dest;
  void *__dest_00;
  
  if ((param_1 != (char *)0x0 && param_2 != (char *)0x0) &&
     (iVar2 = strcmp(param_1,param_2), iVar1 = DAT_000160fc, iVar2 != 0)) {
    sVar3 = strlen(param_1);
    *(size_t *)(iVar1 + 0x16080) = sVar3;
    sVar4 = strlen(param_2);
    *(size_t *)(iVar1 + 0x16084) = sVar4;
    __dest = malloc(sVar3 + sVar4 + 2);
    if (__dest != (void *)0x0) {
      __dest_00 = (void *)((int)__dest + sVar3 + 1);
      memcpy(__dest,param_1,sVar3 + 1);
      *(void **)(iVar1 + 0x16088) = __dest;
      memcpy(__dest_00,param_2,sVar4 + 1);
      *(void **)(iVar1 + 0x1608c) = __dest_00;
      goto LAB_000112e4;
    }
  }
  iVar1 = DAT_00016100;
  *(undefined4 *)((int)&DAT_000160fc + DAT_00016100) = 0;
  *(undefined4 *)((int)&DAT_00016100 + iVar1) = 0;
LAB_000112e4:
  (*(code *)PTR_libiconv_set_relocation_prefix_00027070)(param_1,param_2);
  return;
}



/* ===== FUN_00016104 @ 00016104 size=188 ===== */

char * FUN_00016104(char *param_1)

{
  int iVar1;
  int iVar2;
  char *__dest;
  size_t sVar3;
  char *__dest_00;
  char *__s;
  size_t sVar4;
  size_t __n;
  
  iVar1 = DAT_000161c0;
  if ((*(char **)(DAT_000161c0 + 0x16120) != (char *)0x0) &&
     (__s = *(char **)(DAT_000161c0 + 0x16124), __s != (char *)0x0)) {
    sVar4 = *(size_t *)(DAT_000161c0 + 0x16118);
    iVar2 = strncmp(param_1,*(char **)(DAT_000161c0 + 0x16120),sVar4);
    if (iVar2 == 0) {
      if (param_1[sVar4] == '\0') {
        sVar4 = strlen(__s);
        __dest = malloc(sVar4 + 1);
        __dest_00 = __dest;
        if (__dest == (char *)0x0) {
          return param_1;
        }
      }
      else {
        if (param_1[sVar4] != '/') {
          return param_1;
        }
        sVar3 = strlen(param_1 + sVar4);
        __n = *(size_t *)(iVar1 + 0x1611c);
        __dest_00 = malloc(__n + 1 + sVar3);
        if (__dest_00 == (char *)0x0) {
          return param_1;
        }
        memcpy(__dest_00,__s,__n);
        __dest = __dest_00 + __n;
        __s = param_1 + sVar4;
      }
      strcpy(__dest,__s);
      param_1 = __dest_00;
    }
  }
  return param_1;
}



/* ===== FUN_000161c4 @ 000161c4 size=36 ===== */

void FUN_000161c4(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00016104();
  if (param_1 == iVar1) {
    iVar1 = 0;
  }
  *param_2 = iVar1;
  return;
}



/* ===== FUN_000161e8 @ 000161e8 size=8 ===== */

undefined4 FUN_000161e8(void)

{
  return 0;
}



/* ===== FUN_00016200 @ 00016200 size=104 ===== */

char * FUN_00016200(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = getenv((char *)(DAT_00016268 + 0x16214));
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return pcVar1;
  }
  pcVar1 = getenv(param_2);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return pcVar1;
  }
  pcVar1 = getenv((char *)(DAT_0001626c + 0x16250));
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*pcVar1 == '\0') {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



/* ===== thunk_FUN_00016200 @ 00016270 size=4 ===== */

char * thunk_FUN_00016200(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = getenv((char *)(DAT_00016268 + 0x16214));
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return pcVar1;
  }
  pcVar1 = getenv(param_2);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return pcVar1;
  }
  pcVar1 = getenv((char *)(DAT_0001626c + 0x16250));
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*pcVar1 == '\0') {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



/* ===== FUN_00016274 @ 00016274 size=12 ===== */

int FUN_00016274(void)

{
  return (int)&DAT_00016280 + DAT_00016280;
}



/* ===== FUN_000162a4 @ 000162a4 size=408 ===== */

void FUN_000162a4(FILE *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *__s;
  
  if (param_1->_chain == (_IO_FILE *)0x0) {
    fputc(0x22,param_1);
  }
  else {
    pcVar2 = param_1->_IO_write_base;
    if (pcVar2 < param_1->_IO_buf_base) {
      param_1->_IO_write_base = pcVar2 + 1;
      *pcVar2 = '\"';
    }
    else {
      __fputc_unlocked(0x22,param_1);
    }
  }
  pcVar2 = (char *)(DAT_0001643c + 0x162f4);
  __s = (char *)(DAT_00016440 + 0x162f8);
  while (param_2 != param_3) {
    pbVar5 = param_2 + 1;
    bVar1 = *param_2;
    if (bVar1 == 10) {
      fputs(pcVar2,param_1);
      if (pbVar5 == param_3) {
        return;
      }
      fputs(__s,param_1);
      param_2 = pbVar5;
    }
    else {
      if (bVar1 == 0x5c || bVar1 == 0x22) {
        if (param_1->_chain == (_IO_FILE *)0x0) {
          fputc(0x5c,param_1);
        }
        else {
          pcVar3 = param_1->_IO_write_base;
          if (pcVar3 < param_1->_IO_buf_base) {
            param_1->_IO_write_base = pcVar3 + 1;
            *pcVar3 = '\\';
          }
          else {
            __fputc_unlocked(0x5c,param_1);
          }
        }
      }
      if (param_1->_chain == (_IO_FILE *)0x0) {
        fputc((uint)*param_2,param_1);
        param_2 = pbVar5;
      }
      else {
        pbVar4 = (byte *)param_1->_IO_write_base;
        if (pbVar4 < param_1->_IO_buf_base) {
          param_1->_IO_write_base = (char *)(pbVar4 + 1);
          *pbVar4 = *param_2;
          param_2 = pbVar5;
        }
        else {
          __fputc_unlocked(*param_2,param_1);
          param_2 = pbVar5;
        }
      }
    }
  }
  if (param_1->_chain == (_IO_FILE *)0x0) {
    fputc(0x22,param_1);
    return;
  }
  pcVar2 = param_1->_IO_write_base;
  if (param_1->_IO_buf_base <= pcVar2) {
    __fputc_unlocked(0x22,param_1);
    return;
  }
  param_1->_IO_write_base = pcVar2 + 1;
  *pcVar2 = '\"';
  return;
}



/* ===== FUN_00016444 @ 00016444 size=560 ===== */

void FUN_00016444(char *param_1,char *param_2,char *param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  FILE *pFVar6;
  int iVar7;
  
  iVar7 = *(int *)(DAT_00016674 + 0x16464 + DAT_00016678);
  if ((iVar7 != 0) &&
     (iVar1 = pthread_mutex_lock((pthread_mutex_t *)(DAT_0001667c + 0x1647c)), iVar1 != 0))
  goto LAB_00016484;
  iVar1 = DAT_00016680;
  if (*(char **)(DAT_00016680 + 0x164ac) == (char *)0x0) {
LAB_000165b8:
    iVar1 = DAT_0001669c;
    sVar3 = strlen(param_1);
    pcVar5 = malloc(sVar3 + 1);
    *(char **)(iVar1 + 0x165e4) = pcVar5;
    if (pcVar5 != (char *)0x0) {
      strcpy(pcVar5,param_1);
      pFVar6 = fopen64(param_1,(char *)(DAT_000166a0 + 0x165f4));
      *(FILE **)(iVar1 + 0x165e8) = pFVar6;
      if (pFVar6 != (FILE *)0x0) goto LAB_000164ac;
    }
  }
  else {
    iVar2 = strcmp(param_1,*(char **)(DAT_00016680 + 0x164ac));
    if (iVar2 != 0) {
      pFVar6 = *(FILE **)(iVar1 + 0x164b0);
      if (pFVar6 != (FILE *)0x0) {
        fclose(pFVar6);
        *(undefined4 *)(iVar1 + 0x164b0) = 0;
      }
      free(*(void **)(DAT_00016698 + 0x165cc));
      goto LAB_000165b8;
    }
LAB_000164ac:
    pFVar6 = *(FILE **)(DAT_00016684 + 0x164d8);
    fputs((char *)(DAT_00016688 + 0x164c0),pFVar6);
    sVar3 = strlen(param_2);
    FUN_000162a4(pFVar6,param_2,param_2 + sVar3);
    pcVar4 = strchr(param_3,4);
    pcVar5 = param_3;
    if (pcVar4 != (char *)0x0) {
      fputs((char *)(DAT_000166a8 + 0x16630),pFVar6);
      pcVar5 = pcVar4 + 1;
      FUN_000162a4(pFVar6,param_3,pcVar4);
    }
    fputs((char *)(DAT_0001668c + 0x16504),pFVar6);
    sVar3 = strlen(pcVar5);
    FUN_000162a4(pFVar6,pcVar5,pcVar5 + sVar3);
    if (param_5 == 0) {
      pcVar5 = (char *)(DAT_000166ac + 0x16654);
    }
    else {
      fputs((char *)(DAT_00016690 + 0x16538),pFVar6);
      sVar3 = strlen(param_4);
      FUN_000162a4(pFVar6,param_4,param_4 + sVar3);
      pcVar5 = (char *)(DAT_00016694 + 0x16560);
    }
    fputs(pcVar5,pFVar6);
    if (pFVar6->_chain == (_IO_FILE *)0x0) {
      fputc(10,pFVar6);
    }
    else {
      pcVar5 = pFVar6->_IO_write_base;
      if (pcVar5 < pFVar6->_IO_buf_base) {
        pFVar6->_IO_write_base = pcVar5 + 1;
        *pcVar5 = '\n';
      }
      else {
        __fputc_unlocked(10,pFVar6);
      }
    }
  }
  if (iVar7 == 0) {
    return;
  }
  iVar7 = pthread_mutex_unlock((pthread_mutex_t *)(DAT_000166a4 + 0x16614));
  if (iVar7 == 0) {
    return;
  }
LAB_00016484:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== gettext @ 000166f8 size=4 ===== */

void gettext(void)

{
  (*(code *)PTR_libintl_gettext_0002708c)();
  return;
}



/* ===== dgettext @ 000166fc size=4 ===== */

void dgettext(void)

{
  (*(code *)PTR_libintl_dgettext_00027074)();
  return;
}



/* ===== dcgettext @ 00016700 size=4 ===== */

void dcgettext(void)

{
  (*(code *)PTR_libintl_dcgettext_000270bc)();
  return;
}



/* ===== ngettext @ 00016704 size=4 ===== */

void ngettext(void)

{
  (*(code *)PTR_libintl_ngettext_00027060)();
  return;
}



/* ===== dngettext @ 00016708 size=4 ===== */

void dngettext(void)

{
  (*(code *)PTR_libintl_dngettext_000270f8)();
  return;
}



/* ===== dcngettext @ 0001670c size=4 ===== */

void dcngettext(void)

{
  (*(code *)PTR_libintl_dcngettext_000270d8)();
  return;
}



/* ===== textdomain @ 00016710 size=4 ===== */

void textdomain(void)

{
  (*(code *)PTR_libintl_textdomain_00027118)();
  return;
}



/* ===== bindtextdomain @ 00016714 size=4 ===== */

void bindtextdomain(void)

{
  (*(code *)PTR_libintl_bindtextdomain_00027020)();
  return;
}



/* ===== bind_textdomain_codeset @ 00016718 size=4 ===== */

void bind_textdomain_codeset(void)

{
  (*(code *)PTR_libintl_bind_textdomain_codeset_00027098)();
  return;
}



/* ===== _fini @ 0001671c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::stpcpy @ 00028000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tsearch @ 00028004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * tsearch(void *__key,void **__rootp,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00028008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 0002800c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fsetlocking @ 00028010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fsetlocking(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_gettype @ 00028014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_gettype(pthread_mutexattr_t *__attr,int *__kind)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_rwlock_rdlock @ 00028018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 0002801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_rwlock_init @ 00028020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_init(pthread_rwlock_t *__rwlock,pthread_rwlockattr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 00028024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00028030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 00028034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bsearch @ 00028038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0002803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00028040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_destroy @ 00028044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00028048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0002804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00028050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_rwlock_destroy @ 00028054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_destroy(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00028058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_rwlock_unlock @ 0002805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mempcpy @ 00028060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mempcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::libiconv_set_relocation_prefix @ 00028064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void libiconv_set_relocation_prefix(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00028068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0002806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::libiconv_open @ 00028070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void libiconv_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 00028074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00028078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00028080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nl_langinfo @ 00028084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * nl_langinfo(nl_item __item)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tfind @ 00028088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * tfind(void *__key,void **__rootp,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00028090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00028094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_rwlock_wrlock @ 00028098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 0002809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000280a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 000280a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000280a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000280ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 000280b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_settype @ 000280b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_settype(pthread_mutexattr_t *__attr,int __kind)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000280b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000280bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getcwd @ 000280c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 000280c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 000280c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 000280cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_init @ 000280d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::libiconv @ 000280d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void libiconv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000280d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000280dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets_unlocked @ 000280e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets_unlocked(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000280e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000280e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000280ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000280f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000280f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000280fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00028100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00028104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00028108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


