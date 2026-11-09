// logrotate — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011be8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00011c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0003700c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::secure_getenv @ 00011c18 size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_00037010)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00011c24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00037014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::waitpid @ 00011c30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_00037018)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::getgid @ 00011c3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_0003701c)();
  return _Var1;
}



/* ===== <EXTERNAL>::printf @ 00011c48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00037020)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011c54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00037024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 00011c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_00037028)();
  return _Var1;
}



/* ===== <EXTERNAL>::strndup @ 00011c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_0003702c)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00011c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_00037030)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__xpg_basename @ 00011c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR___xpg_basename_00037034)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::memmove @ 00011c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00037038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::poptReadDefaultConfig @ 00011c9c size=12 ===== */

void poptReadDefaultConfig(void)

{
  (*(code *)PTR_poptReadDefaultConfig_0003703c)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00011ca8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00037040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::munmap @ 00011cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00037044)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::getgrgid @ 00011cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrgid_00037048)(__gid);
  return pgVar1;
}



/* ===== <EXTERNAL>::fchmod @ 00011ccc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchmod_0003704c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getegid @ 00011cd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_00037050)();
  return _Var1;
}



/* ===== <EXTERNAL>::iswblank @ 00011ce4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswblank(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswblank_00037054)(__wc);
  return iVar1;
}



/* ===== <EXTERNAL>::getpid @ 00011cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00037058)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 00011cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0003705c)(__base);
  return;
}



/* ===== <EXTERNAL>::fchown @ 00011d08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchown_00037060)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00011d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00037064)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::dirname @ 00011d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * dirname(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_dirname_00037068)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 00011d2c size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0003706c)();
  return;
}



/* ===== <EXTERNAL>::fchdir @ 00011d38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchdir(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchdir_00037070)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011d44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00037074)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::execl @ 00011d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execl_00037078)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00011d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003707c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dup2 @ 00011d68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup2_00037080)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::mbrtowc @ 00011d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbrtowc_00037084)(__pwc);
  return sVar1;
}



/* ===== <EXTERNAL>::getuid @ 00011d80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_00037088)();
  return _Var1;
}



/* ===== <EXTERNAL>::malloc @ 00011d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003708c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00011d98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00037090)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00037094)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::putenv @ 00011db0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putenv(char *__string)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putenv_00037098)(__string);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00011dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0003709c)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 00011dc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_000370a0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::poptGetNextOpt @ 00011dd4 size=12 ===== */

void poptGetNextOpt(void)

{
  (*(code *)PTR_poptGetNextOpt_000370a4)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00011de0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_000370a8)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::pipe @ 00011dec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_000370ac)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::iswprint @ 00011df8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswprint(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswprint_000370b0)(__wc);
  return iVar1;
}



/* ===== <EXTERNAL>::rename @ 00011e04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_000370b4)(__old);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011e10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_000370b8)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00011e1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_000370bc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::poptBadOption @ 00011e28 size=12 ===== */

void poptBadOption(void)

{
  (*(code *)PTR_poptBadOption_000370c0)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011e34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_000370c4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011e40 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000370c8)();
  return;
}



/* ===== <EXTERNAL>::madvise @ 00011e4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int madvise(void *__addr,size_t __len,int __advice)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_madvise_000370cc)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::poptDupArgv @ 00011e58 size=12 ===== */

void poptDupArgv(void)

{
  (*(code *)PTR_poptDupArgv_000370d0)();
  return;
}



/* ===== <EXTERNAL>::chdir @ 00011e64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chdir_000370d4)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::poptStrerror @ 00011e70 size=12 ===== */

void poptStrerror(void)

{
  (*(code *)PTR_poptStrerror_000370d8)();
  return;
}



/* ===== <EXTERNAL>::wait @ 00011e7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t wait(void *__stat_loc)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_wait_000370dc)(__stat_loc);
  return _Var1;
}



/* ===== <EXTERNAL>::mktime @ 00011e88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_000370e0)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::flock @ 00011e94 size=12 ===== */

void flock(void)

{
  (*(code *)PTR_flock_000370e4)();
  return;
}



/* ===== <EXTERNAL>::setgid @ 00011ea0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgid(__gid_t __gid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setgid_000370e8)(__gid);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00011eac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_000370ec)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::openlog @ 00011eb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
  (*(code *)PTR_openlog_000370f0)(__ident);
  return;
}



/* ===== <EXTERNAL>::strcoll @ 00011ec4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcoll(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcoll_000370f4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::closelog @ 00011ed0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
  (*(code *)PTR_closelog_000370f8)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00011edc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000370fc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011ee8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00037100)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011ef4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_00037104)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011f00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00037108)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 00011f0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_0003710c)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::fdopen @ 00011f18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_00037110)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::fork @ 00011f24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_00037114)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 00011f30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00037118)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::poptGetContext @ 00011f3c size=12 ===== */

void poptGetContext(void)

{
  (*(code *)PTR_poptGetContext_0003711c)();
  return;
}



/* ===== <EXTERNAL>::lstat64 @ 00011f48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat64_00037120)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strncat @ 00011f54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_00037124)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::execlp @ 00011f60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execlp(char *__file,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execlp_00037128)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strdup @ 00011f78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00037130)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strtoull @ 00011f84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_00037134)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::poptSetOtherOptionHelp @ 00011f90 size=12 ===== */

void poptSetOtherOptionHelp(void)

{
  (*(code *)PTR_poptSetOtherOptionHelp_00037138)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00011f9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003713c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fnmatch @ 00011fa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fnmatch_00037140)(__pattern);
  return iVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011fb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00037144)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00011fc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00037148)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 00011fcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0003714c)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 00011fd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00037150)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::seteuid @ 00011fe4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int seteuid(__uid_t __uid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_seteuid_00037154)(__uid);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011ff0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00037158)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getpwuid @ 00011ffc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwuid_0003715c)(__uid);
  return ppVar1;
}



/* ===== <EXTERNAL>::poptPrintUsage @ 00012008 size=12 ===== */

void poptPrintUsage(void)

{
  (*(code *)PTR_poptPrintUsage_00037160)();
  return;
}



/* ===== <EXTERNAL>::getpwnam @ 00012014 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwnam(char *__name)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwnam_00037164)(__name);
  return ppVar1;
}



/* ===== <EXTERNAL>::futimens @ 00012020 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int futimens(int __fd,timespec *__times)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_futimens_00037168)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::asprintf @ 0001202c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_0003716c)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::difftime @ 00012038 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_difftime_00037170)(__time1);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::setlocale @ 00012044 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_setlocale_00037174)(__category);
  return pcVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 00012050 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_00037178)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::fsync @ 0001205c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0003717c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00012068 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00037180)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::localtime_r @ 00012074 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_00037184)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strftime @ 00012080 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_00037188)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::fwrite @ 0001208c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0003718c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 00012098 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00037190)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strptime @ 000120a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strptime(char *__s,char *__fmt,tm *__tp)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strptime_00037194)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000120b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00037198)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000120bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0003719c)(__status);
  return;
}



/* ===== <EXTERNAL>::getgrnam @ 000120c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrnam_000371a0)(__name);
  return pgVar1;
}



/* ===== <EXTERNAL>::globfree64 @ 000120d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void globfree64(glob64_t *__pglob)

{
  (*(code *)PTR_globfree64_000371a4)(__pglob);
  return;
}



/* ===== <EXTERNAL>::vsyslog @ 000120e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vsyslog(int __pri,char *__fmt,__gnuc_va_list __ap)

{
  (*(code *)PTR_vsyslog_000371a8)(__pri);
  return;
}



/* ===== <EXTERNAL>::strlen @ 000120ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000371ac)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 000120f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_000371b0)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::__assert @ 00012104 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_000371b4)(__assertion);
  return;
}



/* ===== <EXTERNAL>::strchr @ 00012110 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000371b8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 0001211c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000371bc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::execvp @ 00012128 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execvp_000371c0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::poptParseArgvString @ 00012134 size=12 ===== */

void poptParseArgvString(void)

{
  (*(code *)PTR_poptParseArgvString_000371c4)();
  return;
}



/* ===== <EXTERNAL>::setegid @ 00012140 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setegid(__gid_t __gid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setegid_000371c8)(__gid);
  return iVar1;
}



/* ===== <EXTERNAL>::poptFreeContext @ 0001214c size=12 ===== */

void poptFreeContext(void)

{
  (*(code *)PTR_poptFreeContext_000371cc)();
  return;
}



/* ===== <EXTERNAL>::closedir @ 00012158 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000371d0)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::poptGetArgs @ 00012164 size=12 ===== */

void poptGetArgs(void)

{
  (*(code *)PTR_poptGetArgs_000371d4)();
  return;
}



/* ===== <EXTERNAL>::tzset @ 00012170 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void tzset(void)

{
  (*(code *)PTR_tzset_000371d8)();
  return;
}



/* ===== <EXTERNAL>::setuid @ 0001217c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setuid(__uid_t __uid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setuid_000371dc)(__uid);
  return iVar1;
}



/* ===== <EXTERNAL>::mkdir @ 00012188 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_000371e0)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012194 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000371e4)();
  return;
}



/* ===== <EXTERNAL>::close @ 000121a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000371e8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::glob64 @ 000121ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int glob64(char *__pattern,int __flags,__errfunc *__errfunc,glob64_t *__pglob)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_glob64_000371ec)(__pattern);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 000121b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_000371f0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 000121c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000371f4)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000121d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000371f8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 000121dc size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_000371fc)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 000121e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00037200)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::ftruncate64 @ 000121f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate64(int __fd,__off64_t __length)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_ftruncate64_00037204)
                    (__fd,in_r1,(int)__length,(int)((ulonglong)__length >> 0x20));
  return iVar1;
}



/* ===== entry @ 00012200 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0003712c)
            (DAT_00012234,param_2,&stack0x00000004,DAT_00012238,DAT_00012230,param_1);
  return;
}



/* ===== FUN_0001223c @ 0001223c size=32 ===== */

void FUN_0001223c(void)

{
  if (DAT_00012260 == DAT_0001225c) {
    return;
  }
  if (DAT_00012264 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012264)();
  return;
}



/* ===== _FINI_0 @ 000122a0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000122dc;
  if (*DAT_000122dc != '\0') {
    return;
  }
  FUN_0001223c();
  if (DAT_000122e0 != 0) {
    __deregister_frame_info(DAT_000122e4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000122e8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001230c != 0) {
    __register_frame_info(DAT_00012314,DAT_00012310);
  }
  if ((DAT_00012298 - DAT_00012294 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001229c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001229c)();
  return;
}



/* ===== FUN_00012318 @ 00012318 size=132 ===== */

void * FUN_00012318(void *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  
  if ((param_3 == 0) || (uVar1 = FUN_000224d8(0xffffffff,param_3), param_2 <= uVar1)) {
    pvVar3 = realloc(param_1,param_3 * param_2);
  }
  else {
    piVar2 = __errno_location();
    *piVar2 = 0xc;
    pvVar3 = (void *)0x0;
  }
  return pvVar3;
}



/* ===== FUN_0001239c @ 0001239c size=436 ===== */

void * FUN_0001239c(undefined4 *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  byte *__src;
  void *__dest;
  byte *pbVar2;
  byte *local_10;
  byte *local_c;
  
  pbVar1 = (byte *)(*param_2 + param_3);
  __src = (byte *)*param_1;
  for (local_c = __src; (local_c < pbVar1 && (*local_c != 10)); local_c = local_c + 1) {
  }
  if (pbVar1 < local_c) {
    __dest = (void *)0x0;
  }
  else {
    pbVar2 = local_c + -1;
    while (((__src <= local_c && (local_c < pbVar1)) &&
           ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
      local_c = local_c + -1;
    }
    local_10 = local_c + (1 - (int)__src);
    if (pbVar1 < __src + (int)local_10) {
      local_10 = pbVar1 + -(int)__src;
    }
    __dest = malloc((size_t)(local_10 + 1));
    if (__dest == (void *)0x0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","isolateLine",0xc5);
      __dest = (void *)0x0;
    }
    else {
      memcpy(__dest,__src,(size_t)local_10);
      *(byte *)((int)__dest + (int)local_10) = 0;
      *param_1 = pbVar2;
    }
  }
  return __dest;
}



/* ===== FUN_00012550 @ 00012550 size=372 ===== */

undefined4
FUN_00012550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int *param_5,int param_6)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *local_c;
  
  local_c = (byte *)*param_4;
  pbVar1 = (byte *)(*param_5 + param_6);
  while ((local_c < pbVar1 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x100) != 0))) {
    local_c = local_c + 1;
  }
  if ((local_c < pbVar1) && (*local_c == 0x3d)) {
    do {
      local_c = local_c + 1;
      if (pbVar1 <= local_c) break;
    } while ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x100) != 0);
  }
  if ((local_c < pbVar1) && (*local_c == 10)) {
    FUN_000192f0(5,"%s:%d argument expected after %s\n",param_1,param_2,param_3);
    uVar2 = 0;
  }
  else {
    *param_4 = local_c;
    uVar2 = FUN_0001239c(param_4,param_5,param_6);
  }
  return uVar2;
}



/* ===== FUN_000126c4 @ 000126c4 size=392 ===== */

void * FUN_000126c4(undefined4 *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  void *__dest;
  size_t __n;
  byte *local_10;
  byte *local_c;
  
  pbVar1 = (byte *)(*param_2 + param_3);
  local_10 = (byte *)*param_1;
  while ((local_10 < pbVar1 && ((*(ushort *)(__ctype_b + (uint)*local_10 * 2) & 0x100) != 0))) {
    local_10 = local_10 + 1;
  }
  local_c = local_10;
  while ((local_c < pbVar1 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 4) != 0))) {
    local_c = local_c + 1;
  }
  if (pbVar1 < local_c) {
    __dest = (void *)0x0;
  }
  else {
    __n = (int)local_c - (int)local_10;
    __dest = malloc(__n + 1);
    if (__dest == (void *)0x0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","isolateWord",0xf8);
      __dest = (void *)0x0;
    }
    else {
      memcpy(__dest,local_10,__n);
      *(undefined1 *)((int)__dest + __n) = 0;
      *param_1 = local_c;
    }
  }
  return __dest;
}



/* ===== FUN_0001284c @ 0001284c size=312 ===== */

char * FUN_0001284c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  size_t __n;
  wchar_t local_18;
  size_t local_14;
  char *local_10;
  char *local_c;
  
  local_10 = (char *)FUN_00012550(param_1,param_2,param_3,param_4,param_5,param_6);
  local_c = local_10;
  if (local_10 != (char *)0x0) {
    for (; *local_c != '\0'; local_c = local_c + local_14) {
      __n = strlen(local_c);
      local_14 = mbrtowc(&local_18,local_c,__n,(mbstate_t *)0x0);
      if (local_14 == 0) {
        return local_10;
      }
      if ((((local_14 == 0xffffffff) || (local_14 == 0xfffffffe)) ||
          (iVar1 = iswprint(local_18), iVar1 == 0)) || (iVar1 = iswblank(local_18), iVar1 != 0)) {
        FUN_000192f0(5,"%s:%d bad %s path %s\n",param_1,param_2,param_3,local_10);
        free(local_10);
        return (char *)0x0;
      }
    }
  }
  return local_10;
}



/* ===== FUN_00012984 @ 00012984 size=192 ===== */

undefined4 FUN_00012984(char *param_1,__uid_t *param_2)

{
  passwd *ppVar1;
  undefined4 uVar2;
  char *local_14;
  __uid_t local_10;
  passwd *local_c;
  
  local_c = getpwnam(param_1);
  if (local_c == (passwd *)0x0) {
    local_10 = strtoul(param_1,&local_14,10);
    if ((((*param_1 == '\0') || (*local_14 != '\0')) || (0x7ffffffe < local_10)) ||
       (ppVar1 = getpwuid(local_10), ppVar1 == (passwd *)0x0)) {
      uVar2 = 0xffffffff;
    }
    else {
      *param_2 = local_10;
      uVar2 = 0;
    }
  }
  else {
    *param_2 = local_c->pw_uid;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00012a44 @ 00012a44 size=192 ===== */

undefined4 FUN_00012a44(char *param_1,__gid_t *param_2)

{
  group *pgVar1;
  undefined4 uVar2;
  char *local_14;
  __gid_t local_10;
  group *local_c;
  
  local_c = getgrnam(param_1);
  if (local_c == (group *)0x0) {
    local_10 = strtoul(param_1,&local_14,10);
    if ((((*param_1 == '\0') || (*local_14 != '\0')) || (0x7ffffffe < local_10)) ||
       (pgVar1 = getgrgid(local_10), pgVar1 == (group *)0x0)) {
      uVar2 = 0xffffffff;
    }
    else {
      *param_2 = local_10;
      uVar2 = 0;
    }
  }
  else {
    *param_2 = local_c->gr_gid;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00012b04 @ 00012b04 size=1300 ===== */

undefined4
FUN_00012b04(undefined4 param_1,undefined4 param_2,byte *param_3,char *param_4,int *param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  char *local_40;
  char *local_3c [3];
  int local_30;
  uint local_2c;
  byte local_25;
  byte *local_24;
  undefined4 local_20;
  uint local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  byte *local_c;
  
  local_3c[0] = (char *)0x0;
  local_3c[1] = (char *)0x0;
  local_3c[2] = (char *)0x0;
  iVar1 = strcmp(param_4,"su");
  local_2c = (uint)(iVar1 == 0);
  local_20 = 0xffffffff;
  local_c = param_3;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    local_c = local_c + 1;
  }
  if (*local_c == 0) {
    return 0;
  }
  for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
    local_24 = local_c;
    local_25 = 0;
    while ((*(ushort *)(__ctype_b + (uint)*local_24 * 2) & 0x20) != 0) {
      local_24 = local_24 + 1;
    }
    if ((*local_24 == 0x27) || (*local_24 == 0x22)) {
      local_25 = *local_24;
      local_24 = local_24 + 1;
    }
    for (local_c = local_24; *local_c != 0; local_c = local_c + 1) {
      if (local_25 == 0) {
        if ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0) break;
      }
      else if (local_25 == *local_c) break;
    }
    if ((local_25 != 0) && (local_25 != *local_c)) {
      FUN_000192f0(5,"%s:%d invalid arguments for %s\n",param_1,param_2,param_4);
      goto LAB_00012fe4;
    }
    pcVar2 = strndup((char *)local_24,(int)local_c - (int)local_24);
    local_3c[local_1c] = pcVar2;
    if (local_3c[local_1c] == (char *)0x0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readModeUidGid",0x17d);
      goto LAB_00012fe4;
    }
    if (local_25 != 0) {
      local_c = local_c + 1;
    }
    if (*local_c == 0) break;
  }
  if ((local_1c < 3) && ((local_1c != 2 || (local_2c == 0)))) {
    if (local_1c == 2) {
      local_10 = local_3c[0];
      local_14 = local_3c[1];
      local_18 = local_3c[2];
    }
    else if (local_1c == 1) {
      local_10 = (char *)0x0;
      local_14 = local_3c[0];
      local_18 = local_3c[1];
    }
    else {
      if (local_2c == 0) {
        local_10 = local_3c[0];
        local_14 = (char *)0x0;
      }
      else {
        local_10 = (char *)0x0;
        local_14 = local_3c[0];
      }
      local_18 = (char *)0x0;
    }
    if ((local_18 == (char *)0x0) || (iVar1 = FUN_00012a44(local_18,param_7), iVar1 == 0)) {
      if ((local_14 == (char *)0x0) || (iVar1 = FUN_00012984(local_14,param_6), iVar1 == 0)) {
        if (local_10 != (char *)0x0) {
          piVar3 = __errno_location();
          *piVar3 = 0;
          local_30 = strtol(local_10,&local_40,8);
          piVar3 = __errno_location();
          if ((((*piVar3 != 0) || (*local_10 == '\0')) || (*local_40 != '\0')) ||
             ((local_30 < 0 || (local_30 == 0x7fffffff)))) {
            FUN_000192f0(5,"%s:%d invalid mode \'%s\'\n",param_1,param_2,local_10);
            goto LAB_00012fe4;
          }
          *param_5 = local_30;
        }
        local_20 = 0;
      }
      else {
        FUN_000192f0(5,"%s:%d unknown user \'%s\'\n",param_1,param_2,local_14);
      }
    }
    else {
      FUN_000192f0(5,"%s:%d unknown group \'%s\'\n",param_1,param_2,local_18);
    }
  }
  else {
    FUN_000192f0(5,"%s:%d extra arguments for %s\n",param_1,param_2,param_4);
  }
LAB_00012fe4:
  free(local_3c[0]);
  free(local_3c[1]);
  free(local_3c[2]);
  return local_20;
}



/* ===== FUN_00013018 @ 00013018 size=264 ===== */

byte * FUN_00013018(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined4 param_5,undefined4 param_6)

{
  byte *__ptr;
  undefined4 uVar1;
  byte *local_c;
  
  uVar1 = *param_4;
  __ptr = (byte *)FUN_00012550(param_1,param_2,param_3,param_4,param_5,param_6);
  local_c = __ptr;
  if (__ptr != (byte *)0x0) {
    for (; ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x40) != 0 && (*local_c != 0x20));
        local_c = local_c + 1) {
    }
    if (*local_c != 0) {
      FUN_000192f0(5,"%s:%d bad %s address %s\n",param_1,param_2,param_3,uVar1);
      free(__ptr);
      __ptr = (byte *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00013120 @ 00013120 size=520 ===== */

undefined4 FUN_00013120(char *param_1,__mode_t param_2,__uid_t param_3,__gid_t param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  stat64 sStack_78;
  int local_c;
  
  iVar1 = mkdir(param_1,param_2);
  if (iVar1 == 0) {
    local_c = open64(param_1,0xc000);
    if (local_c < 0) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      FUN_000192f0(5,"error opening %s after creation: %s\n",param_1,pcVar3);
      uVar4 = 0xffffffff;
    }
    else {
      iVar1 = fchown(local_c,param_3,param_4);
      if (iVar1 == 0) {
        iVar1 = fchmod(local_c,param_2);
        if (iVar1 == 0) {
          close(local_c);
          uVar4 = 0;
        }
        else {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          FUN_000192f0(5,"error setting permissions of %s to 0%o: %s\n",param_1,param_2,pcVar3);
          close(local_c);
          uVar4 = 0xffffffff;
        }
      }
      else {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        FUN_000192f0(5,"error setting owner of %s to uid %u and gid %u: %s\n",param_1,param_3,
                     param_4,pcVar3);
        close(local_c);
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    piVar2 = __errno_location();
    if (*piVar2 == 0x11) {
      iVar1 = stat64(param_1,&sStack_78);
      if ((iVar1 == 0) && ((sStack_78.st_mode & 0xf000) == 0x4000)) {
        uVar4 = 0;
      }
      else {
        FUN_000192f0(5,"path %s already exists, but it is not a directory\n",param_1);
        piVar2 = __errno_location();
        *piVar2 = 0x14;
        uVar4 = 0xffffffff;
      }
    }
    else {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      FUN_000192f0(5,"error creating %s: %s\n",param_1,pcVar3);
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}



/* ===== FUN_00013328 @ 00013328 size=328 ===== */

int FUN_00013328(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *__ptr;
  char *pcVar1;
  int local_10;
  char *local_c;
  
  __ptr = strdup(param_1);
  if (__ptr == (char *)0x0) {
    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","mkpath",0x211);
    local_10 = 1;
  }
  else {
    FUN_000192f0(2,"creating new directory %s mode = 0%o uid = %d gid = %d\n",param_1,param_2,
                 param_3,param_4);
    local_10 = 0;
    local_c = __ptr;
    while (local_10 == 0) {
      pcVar1 = strchr(local_c,0x2f);
      if (pcVar1 == (char *)0x0) break;
      if (pcVar1 != local_c) {
        *pcVar1 = '\0';
        local_10 = FUN_00013120(__ptr,param_2,param_3,param_4);
        *pcVar1 = '/';
      }
      local_c = pcVar1 + 1;
    }
    if (local_10 == 0) {
      local_10 = FUN_00013120(param_1,param_2,param_3,param_4);
    }
    free(__ptr);
  }
  return local_10;
}



/* ===== FUN_00013470 @ 00013470 size=256 ===== */

undefined4 FUN_00013470(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *__pattern;
  uint local_c;
  
  if ((*param_1 == '.') && ((param_1[1] == '\0' || ((param_1[1] == '.' && (param_1[2] == '\0'))))))
  {
    uVar2 = 0;
  }
  else {
    for (local_c = 0; local_c < DAT_000372b0; local_c = local_c + 1) {
      __pattern = *(char **)(DAT_000372ac + local_c * 4);
      iVar1 = fnmatch(__pattern,param_1,4);
      if (iVar1 == 0) {
        FUN_000192f0(2,"Ignoring %s, because of %s pattern match\n",param_1,__pattern);
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00013570 @ 00013570 size=64 ===== */

int FUN_00013570(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = strcoll((char *)*param_1,(char *)*param_2);
  return iVar1;
}



/* ===== FUN_000135b0 @ 000135b0 size=108 ===== */

void FUN_000135b0(void *param_1,uint param_2)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    free(*(void **)((int)param_1 + local_c * 4));
  }
  free(param_1);
  return;
}



/* ===== FUN_0001361c @ 0001361c size=2028 ===== */

int FUN_0001361c(void *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  memset(param_1,0,0xa8);
  if (*(int *)(param_2 + 0xc) == 0) {
    *(undefined4 *)((int)param_1 + 0xc) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0xc));
    *(char **)((int)param_1 + 0xc) = pcVar1;
    if (*(int *)((int)param_1 + 0xc) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x260);
      local_c = 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((int)param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((int)param_1 + 0x1c) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((int)param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((int)param_1 + 0x2c) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((int)param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((int)param_1 + 0x24) = uVar2;
  *(undefined4 *)((int)param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((int)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)((int)param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((int)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  if ((*(int *)(param_2 + 0x40) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x40) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x40));
    *(char **)((int)param_1 + 0x40) = pcVar1;
    if (*(int *)((int)param_1 + 0x40) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x26a);
      local_c = 1;
    }
  }
  if ((*(int *)(param_2 + 0x44) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x44) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x44));
    *(char **)((int)param_1 + 0x44) = pcVar1;
    if (*(int *)((int)param_1 + 0x44) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x26b);
      local_c = 1;
    }
  }
  if ((*(int *)(param_2 + 0x48) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x48) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x48));
    *(char **)((int)param_1 + 0x48) = pcVar1;
    if (*(int *)((int)param_1 + 0x48) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x26c);
      local_c = 1;
    }
  }
  if ((*(int *)(param_2 + 0x4c) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x4c) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x4c));
    *(char **)((int)param_1 + 0x4c) = pcVar1;
    if (*(int *)((int)param_1 + 0x4c) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x26d);
      local_c = 1;
    }
  }
  if ((*(int *)(param_2 + 0x50) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x50) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x50));
    *(char **)((int)param_1 + 0x50) = pcVar1;
    if (*(int *)((int)param_1 + 0x50) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x26e);
      local_c = 1;
    }
  }
  if ((*(int *)(param_2 + 0x54) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x54) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x54));
    *(char **)((int)param_1 + 0x54) = pcVar1;
    if (*(int *)((int)param_1 + 0x54) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x26f);
      local_c = 1;
    }
  }
  if ((*(int *)(param_2 + 0x58) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x58) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x58));
    *(char **)((int)param_1 + 0x58) = pcVar1;
    if (*(int *)((int)param_1 + 0x58) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x270);
      local_c = 1;
    }
  }
  if ((*(int *)(param_2 + 0x60) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x60) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x60));
    *(char **)((int)param_1 + 0x60) = pcVar1;
    if (*(int *)((int)param_1 + 0x60) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x271);
      local_c = 1;
    }
  }
  if ((*(int *)(param_2 + 100) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 100) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 100));
    *(char **)((int)param_1 + 100) = pcVar1;
    if (*(int *)((int)param_1 + 100) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x272);
      local_c = 1;
    }
  }
  if ((*(int *)(param_2 + 0x68) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x68) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x68));
    *(char **)((int)param_1 + 0x68) = pcVar1;
    if (*(int *)((int)param_1 + 0x68) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x273);
      local_c = 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((int)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)((int)param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((int)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)((int)param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((int)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)((int)param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)((int)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)((int)param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((int)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  if ((*(int *)(param_2 + 0x9c) != 0) &&
     (poptDupArgv(*(undefined4 *)(param_2 + 0x9c),*(undefined4 *)(param_2 + 0x98),
                  (int)param_1 + 0x9c,(int)param_1 + 0x98), *(int *)((int)param_1 + 0x98) == 0)) {
    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x283);
    local_c = 1;
  }
  if ((*(int *)(param_2 + 0x6c) == 0) || (local_c != 0)) {
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
  }
  else {
    pcVar1 = strdup(*(char **)(param_2 + 0x6c));
    *(char **)((int)param_1 + 0x6c) = pcVar1;
    if (*(int *)((int)param_1 + 0x6c) == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","copyLogInfo",0x288);
      local_c = 1;
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)((int)param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((int)param_1 + 0xa4) = uVar2;
  return local_c;
}



/* ===== FUN_00013e08 @ 00013e08 size=280 ===== */

void FUN_00013e08(undefined4 *param_1)

{
  free((void *)*param_1);
  FUN_000135b0(param_1[1],param_1[2]);
  free((void *)param_1[3]);
  free((void *)param_1[0x10]);
  free((void *)param_1[0x11]);
  free((void *)param_1[0x12]);
  free((void *)param_1[0x13]);
  free((void *)param_1[0x14]);
  free((void *)param_1[0x15]);
  free((void *)param_1[0x16]);
  free((void *)param_1[0x18]);
  free((void *)param_1[0x19]);
  free((void *)param_1[0x1a]);
  free((void *)param_1[0x26]);
  free((void *)param_1[0x1b]);
  return;
}



/* ===== FUN_00013f20 @ 00013f20 size=244 ===== */

void * FUN_00013f20(undefined4 param_1)

{
  void *__ptr;
  int iVar1;
  
  __ptr = malloc(0xa8);
  if (__ptr == (void *)0x0) {
    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","newLogInfo",0x2a9);
    __ptr = (void *)0x0;
  }
  else {
    iVar1 = FUN_0001361c(__ptr,param_1);
    if (iVar1 == 0) {
      *(undefined4 *)((int)__ptr + 0xa0) = 0;
      *(undefined4 **)((int)__ptr + 0xa4) = DAT_000372f4;
      *DAT_000372f4 = __ptr;
      DAT_000372f4 = (undefined4 *)((int)__ptr + 0xa0);
      DAT_000372c4 = DAT_000372c4 + 1;
    }
    else {
      FUN_00013e08(__ptr);
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00014014 @ 00014014 size=168 ===== */

void FUN_00014014(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00013e08(param_1);
    if (*(int *)((int)param_1 + 0xa0) == 0) {
      DAT_000372f4 = *(undefined4 *)((int)param_1 + 0xa4);
    }
    else {
      *(undefined4 *)(*(int *)((int)param_1 + 0xa0) + 0xa4) = *(undefined4 *)((int)param_1 + 0xa4);
    }
    **(undefined4 **)((int)param_1 + 0xa4) = *(undefined4 *)((int)param_1 + 0xa0);
    free(param_1);
    DAT_000372c4 = DAT_000372c4 + -1;
  }
  return;
}



/* ===== FUN_000140bc @ 000140bc size=100 ===== */

void FUN_000140bc(int param_1)

{
  int local_c;
  
  FUN_000192f0(2,"removing last %d log configs\n",param_1);
  local_c = param_1;
  while( true ) {
    if (local_c == 0) break;
    FUN_00014014(**(undefined4 **)(DAT_000372f4 + 4));
    local_c = local_c + -1;
  }
  return;
}



/* ===== FUN_00014120 @ 00014120 size=128 ===== */

char * FUN_00014120(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = "hourly";
    break;
  case 1:
    pcVar1 = "daily";
    break;
  case 2:
    pcVar1 = "weekly";
    break;
  case 3:
    pcVar1 = "monthly";
    break;
  case 4:
    pcVar1 = "yearly";
    break;
  case 5:
    pcVar1 = "size";
    break;
  default:
    pcVar1 = "XXX";
  }
  return pcVar1;
}



/* ===== FUN_000141b8 @ 000141b8 size=148 ===== */

void FUN_000141b8(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*param_3 != 0) {
    if (param_2 != *param_1) {
      uVar1 = FUN_00014120(param_2);
      uVar2 = FUN_00014120(*param_1);
      FUN_000192f0(2,"note: \'%s\' overrides previously specified \'%s\'\n",uVar1,uVar2);
    }
  }
  *param_1 = param_2;
  *param_3 = 1;
  return;
}



/* ===== FUN_0001424c @ 0001424c size=1452 ===== */

undefined4 FUN_0001424c(char *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 auStack_140 [168];
  stat64 sStack_98;
  void *local_30;
  dirent64 *local_2c;
  DIR *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  void *local_18;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = stat64(param_1,&sStack_98);
  if (iVar1 == 0) {
    if ((sStack_98.st_mode & 0xf000) == 0x4000) {
      local_18 = (void *)0x0;
      local_1c = 0;
      local_24 = open64(".",0x4000);
      if (local_24 == -1) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        FUN_000192f0(5,"cannot open current directory: %s\n",pcVar3);
        local_14 = 1;
      }
      else {
        local_28 = opendir(param_1);
        if (local_28 == (DIR *)0x0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          FUN_000192f0(5,"cannot open directory %s: %s\n",param_1,pcVar3);
          close(local_24);
          local_14 = 1;
        }
        else {
          while (local_2c = readdir64(local_28), local_2c != (dirent64 *)0x0) {
            iVar1 = FUN_00013470(local_2c->d_name);
            if (iVar1 != 0) {
              if (0x3ffffffe < local_1c) {
                FUN_000192f0(5,"too many files in directory %s\n",param_1);
                FUN_000135b0(local_18,local_1c);
                closedir(local_28);
                close(local_24);
                return 1;
              }
              if (local_1c % 10 == 0) {
                local_30 = (void *)FUN_00012318(local_18,local_1c + 10,4);
                if (local_30 == (void *)0x0) {
                  FUN_000135b0(local_18,local_1c);
                  closedir(local_28);
                  close(local_24);
                  FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readConfigPath",0x319);
                  return 1;
                }
                local_18 = local_30;
                memset((void *)((int)local_30 + local_1c * 4),0,0x28);
              }
              puVar4 = (undefined4 *)((int)local_18 + local_1c * 4);
              pcVar3 = strdup(local_2c->d_name);
              *puVar4 = pcVar3;
              if (*(int *)((int)local_18 + local_1c * 4) == 0) {
                FUN_000135b0(local_18,local_1c);
                closedir(local_28);
                close(local_24);
                FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readConfigPath",0x325);
                return 1;
              }
              local_1c = local_1c + 1;
            }
          }
          closedir(local_28);
          if (local_1c == 0) {
            close(local_24);
            local_14 = 0;
          }
          else {
            qsort(local_18,local_1c,4,FUN_00013570);
            iVar1 = chdir(param_1);
            if (iVar1 == 0) {
              for (local_20 = 0; local_20 < local_1c; local_20 = local_20 + 1) {
                if (*(int *)((int)local_18 + local_20 * 4) == 0) {
                  __assert("namelist[i] != ((void *)0)","config.c",0x33c);
                }
                iVar1 = FUN_0001361c(auStack_140,param_2);
                if (iVar1 != 0) {
                  FUN_00013e08(auStack_140);
                  close(local_24);
                  FUN_000135b0(local_18,local_1c);
                  return 1;
                }
                iVar1 = FUN_00014f3c(*(undefined4 *)((int)local_18 + local_20 * 4),param_2);
                if (iVar1 == 0) {
                  FUN_00013e08(auStack_140);
                }
                else {
                  FUN_000192f0(5,"found error in file %s, skipping\n",
                               *(undefined4 *)((int)local_18 + local_20 * 4));
                  FUN_00013e08(param_2);
                  FUN_0001361c(param_2,auStack_140);
                  FUN_00013e08(auStack_140);
                  local_14 = 1;
                }
              }
              iVar1 = fchdir(local_24);
              if (iVar1 < 0) {
                piVar2 = __errno_location();
                pcVar3 = strerror(*piVar2);
                FUN_000192f0(5,"could not change directory to \'.\': %s\n",pcVar3);
              }
              close(local_24);
              FUN_000135b0(local_18,local_1c);
            }
            else {
              piVar2 = __errno_location();
              pcVar3 = strerror(*piVar2);
              FUN_000192f0(5,"error in chdir(\"%s\"): %s\n",param_1,pcVar3);
              close(local_24);
              FUN_000135b0(local_18,local_1c);
              local_14 = 1;
            }
          }
        }
      }
    }
    else {
      iVar1 = FUN_0001361c(auStack_140,param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_00014f3c(param_1,param_2);
        if (iVar1 != 0) {
          FUN_00013e08(param_2);
          FUN_0001361c(param_2,auStack_140);
          local_14 = 1;
        }
        FUN_00013e08(auStack_140);
      }
      else {
        FUN_00013e08(auStack_140);
        local_14 = 1;
      }
    }
  }
  else {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    FUN_000192f0(5,"cannot stat %s: %s\n",param_1,pcVar3);
    local_14 = 1;
  }
  return local_14;
}



/* ===== FUN_000147f8 @ 000147f8 size=612 ===== */

undefined4 FUN_000147f8(int *param_1)

{
  int iVar1;
  char *local_c4;
  undefined1 auStack_c0 [16];
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_84;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_14;
  uint local_10;
  undefined4 local_c;
  
  local_c = 0;
  memset(auStack_c0,0,0xa8);
  local_b0 = 5;
  local_a8 = 0x100000;
  uStack_a4 = 0;
  local_84 = 1;
  local_50 = 4;
  local_48 = 0xffffffff;
  local_44 = 0xffffffff;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  local_38 = 0xffffffff;
  local_34 = 0xffffffff;
  local_30 = 0xffffffff;
  local_2c = 0xffffffff;
  DAT_000372ac = malloc(0x58);
  if (DAT_000372ac == (void *)0x0) {
    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readAllConfigPaths",0x392);
    local_c = 1;
  }
  else {
    for (local_10 = 0; local_14 = param_1, local_10 < 0x16; local_10 = local_10 + 1) {
      local_c4 = (char *)0x0;
      iVar1 = asprintf(&local_c4,"*%s",(&PTR_DAT_000229c8)[local_10]);
      if (iVar1 < 0) {
        FUN_000135b0(DAT_000372ac,DAT_000372b0);
        FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readAllConfigPaths",0x39f);
        return 1;
      }
      *(char **)((int)DAT_000372ac + local_10 * 4) = local_c4;
      DAT_000372b0 = DAT_000372b0 + 1;
    }
    for (; *local_14 != 0; local_14 = local_14 + 1) {
      iVar1 = FUN_0001424c(*local_14,auStack_c0);
      if (iVar1 != 0) {
        local_c = 1;
      }
    }
    FUN_000135b0(DAT_000372ac,DAT_000372b0);
    FUN_00013e08(auStack_c0);
  }
  return local_c;
}



/* ===== FUN_00014a5c @ 00014a5c size=756 ===== */

void * FUN_00014a5c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int *param_5)

{
  void *pvVar1;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  
  local_c = (void *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_1c = 0;
  do {
    if ((param_4 <= (uint)(*param_5 - param_3)) || (*(char *)*param_5 == '\0')) {
      FUN_000192f0(5,"%s:%d missing \'{\' after log files definition\n",param_1,param_2);
      free(local_c);
      return (void *)0x0;
    }
    if (local_1c == 0) {
      if (*(char *)*param_5 == '#') {
        local_1c = 2;
      }
      else if ((*(ushort *)(__ctype_b + (uint)*(byte *)*param_5 * 2) & 0x20) == 0) {
        local_1c = 1;
      }
    }
    else if (*(char *)*param_5 == '\n') {
      local_1c = 0;
    }
    if (local_1c != 2) {
      if (*(char *)*param_5 == '{') {
        if (local_14 <= local_10) {
          __assert("globStringPos < globStringAlloc","config.c",0x3da);
        }
        *(undefined1 *)((int)local_c + local_10) = 0;
        local_18 = local_10;
        while( true ) {
          if (local_18 < 2) {
            return local_c;
          }
          if ((*(ushort *)(__ctype_b + (uint)*(byte *)((int)local_c + (local_18 - 1)) * 2) & 0x20)
              == 0) break;
          *(undefined1 *)((int)local_c + (local_18 - 1)) = 0;
          local_18 = local_18 - 1;
        }
        return local_c;
      }
      if (*(char *)*param_5 == '}') {
        FUN_000192f0(5,"%s:%d unexpected } (missing previous \'{\')\n",param_1,param_2);
        free(local_c);
        return (void *)0x0;
      }
      pvVar1 = local_c;
      if (local_14 < local_10 + 2) {
        local_14 = local_14 + 0x100;
        pvVar1 = realloc(local_c,local_14);
        if (pvVar1 == (void *)0x0) {
          FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","parseGlobString",0x3eb);
          free(local_c);
          return (void *)0x0;
        }
      }
      local_c = pvVar1;
      *(undefined1 *)((int)local_c + local_10) = *(undefined1 *)*param_5;
      local_10 = local_10 + 1;
    }
    *param_5 = *param_5 + 1;
  } while( true );
}



/* ===== FUN_00014db4 @ 00014db4 size=392 ===== */

undefined4 FUN_00014db4(int *param_1)

{
  __uid_t _Var1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_1c;
  passwd *local_18;
  char *local_14;
  
  local_1c = (char *)0x0;
  if (((*param_1 == 0) || (*(char *)*param_1 != '~')) || (*(char *)(*param_1 + 1) != '/')) {
    uVar5 = 0;
  }
  else {
    local_14 = (char *)secure_getenv(&DAT_00022e80);
    if (local_14 == (char *)0x0) {
      FUN_000192f0(2,
                   "cannot get HOME directory from environment to replace ~/, trying password database...\n"
                  );
      _Var1 = getuid();
      local_18 = getpwuid(_Var1);
      if (local_18 == (passwd *)0x0) {
        _Var1 = getuid();
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        FUN_000192f0(5,"cannot get passwd entry for running user %u: %s\n",_Var1,pcVar3);
        return 1;
      }
      local_14 = local_18->pw_dir;
    }
    iVar4 = asprintf(&local_1c,"%s/%s",local_14,*param_1 + 2);
    if (iVar4 < 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","expand_home_relative_path",0x42f);
      uVar5 = 1;
    }
    else {
      FUN_000192f0(2,"replaced \'%s\' with \'%s\'\n",*param_1,local_1c);
      free((void *)*param_1);
      *param_1 = (int)local_1c;
      uVar5 = 0;
    }
  }
  return uVar5;
}



/* ===== FUN_00014f3c @ 00014f3c size=16744 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00014f3c(char *param_1,int *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  __uid_t _Var5;
  byte *******__s1;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  byte *******pppppppbVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 local_248 [104];
  undefined1 local_1e0 [16];
  uint local_1d0;
  byte *******local_178;
  void *local_174;
  int local_170;
  char *local_16c;
  char *local_168;
  undefined1 uStack_161;
  uint local_160;
  byte ******local_15c;
  byte *local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  char *local_138;
  undefined4 local_134;
  stat64 sStack_130;
  byte *******local_c8;
  byte *******local_c4;
  byte *******local_c0;
  byte *******local_bc;
  int local_b8;
  int local_b4;
  byte *******local_b0;
  void *local_ac;
  int local_a8;
  char *local_a4;
  undefined8 local_a0;
  int local_94;
  byte *******local_90;
  void *local_8c;
  char *local_88;
  char *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  byte *******local_60;
  byte *******local_5c;
  byte *******local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  byte *******local_38;
  byte *******local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  byte *******local_24;
  int *local_20;
  int *local_1c;
  byte *******local_18;
  int local_14;
  
  local_c0 = (byte *******)0x0;
  local_14 = 1;
  local_18 = (byte *******)0x0;
  local_1c = (int *)0x0;
  local_24 = (byte *******)0x2;
  local_28 = 0;
  local_134 = 0;
  local_138 = (char *)0x0;
  local_2c = 0;
  uStack_154 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_150 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_158 = (byte *)0x0;
  local_148 = 0;
  local_140 = 0;
  uStack_144 = uStack_154;
  uStack_13c = uStack_154;
  local_20 = param_2;
  local_60 = (byte *******)open64(param_1,0);
  if ((int)local_60 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    FUN_000192f0(5,"failed to open config file %s: %s\n",param_1,pcVar3);
    return 1;
  }
  iVar4 = fcntl64(local_60,0xd,&local_158);
  if (iVar4 == -1) {
    FUN_000192f0(5,"Could not lock file %s for reading\n",param_1);
  }
  iVar4 = fstat64((int)local_60,&sStack_130);
  if (iVar4 != 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    FUN_000192f0(5,"fstat of %s failed: %s\n",param_1,pcVar3);
    close((int)local_60);
    return 1;
  }
  if ((sStack_130.st_mode & 0xf000) != 0x8000) {
    FUN_000192f0(2,"Ignoring %s because it\'s not a regular file.\n",param_1);
    close((int)local_60);
    return 0;
  }
  _Var5 = getuid();
  if (_Var5 == 0) {
    if ((sStack_130.st_mode & 0xf5b) != 0x100) {
      FUN_000192f0(4,"Potentially dangerous mode on %s: 0%o\n",param_1,sStack_130.st_mode & 0xfff);
    }
    if ((sStack_130.st_mode & 0x12) != 0) {
      FUN_000192f0(5,"Ignoring %s because it is writable by group or others.\n",param_1);
      close((int)local_60);
      return 1;
    }
    if (sStack_130.st_uid != 0) {
      FUN_000192f0(5,
                   "Ignoring %s because the file owner is wrong (should be root or user with uid 0).\n"
                   ,param_1);
      close((int)local_60);
      return 1;
    }
  }
  if ((int)-(sStack_130.st_size._4_4_ + (uint)(0xffffff < (uint)sStack_130.st_size)) < 0 !=
      (SBORROW4(0,sStack_130.st_size._4_4_) !=
      SBORROW4(-sStack_130.st_size._4_4_,(uint)(0xffffff < (uint)sStack_130.st_size)))) {
    FUN_000192f0(5,"file %s too large, probably not a config file.\n",param_1);
    close((int)local_60);
    return 1;
  }
  local_64 = (uint)sStack_130.st_size;
  if ((uint)sStack_130.st_size == 0) {
    FUN_000192f0(2,"Ignoring %s because it\'s empty.\n",param_1);
    close((int)local_60);
    return 0;
  }
  pppppppbVar10 = local_60;
  local_bc = mmap64((void *)0x0,(uint)sStack_130.st_size,1,0x8002,(int)local_60,0);
  if (local_bc == (byte *******)0xffffffff) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    FUN_000192f0(5,"Error mapping config file %s: %s\n",param_1,pcVar3);
    close((int)local_60);
    return 1;
  }
  local_68 = madvise(local_bc,local_64,2);
  if (local_68 == -1) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    FUN_000192f0(2,"Failed to advise sequential use of memory: %s\n",pcVar3);
  }
  local_68 = madvise(local_bc,local_64,3);
  if (local_68 == -1) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    FUN_000192f0(2,"Failed to advise willneed use of memory: %s\n",pcVar3);
  }
  FUN_000192f0(2,"reading config file %s\n",param_1);
  local_c4 = local_bc;
LAB_00018f7c:
  if (local_64 <= (uint)((int)local_c4 - (int)local_bc)) {
    if (local_18 == (byte *******)0x0) {
      free(local_c0);
      munmap(local_bc,local_64);
      close((int)local_60);
      free(local_138);
    }
    else {
      FUN_000192f0(5,"%s:prerotate, postrotate or preremove without endscript\n",param_1,local_18,
                   pppppppbVar10);
LAB_00019148:
      if (local_20 != param_2) {
        FUN_000140bc(1);
      }
      free(local_c0);
      munmap(local_bc,local_64);
      close((int)local_60);
      free(local_138);
      local_28 = 1;
    }
    return local_28;
  }
  switch(local_24) {
  case (byte *******)0x2:
    if ((*(ushort *)(__ctype_b + (uint)*(byte *)local_c4 * 2) & 0x100) != 0) goto LAB_00018f70;
    if (*(byte *)local_c4 == 0x23) {
      local_24 = (byte *******)0x4;
      goto LAB_00018f70;
    }
    if ((*(ushort *)(__ctype_b + (uint)*(byte *)local_c4 * 2) & 4) == 0) {
      if ((((*(byte *)local_c4 == 0x2f) || (*(byte *)local_c4 == 0x22)) ||
          (*(byte *)local_c4 == 0x27)) || (*(byte *)local_c4 == 0x7e)) {
        local_2c = 0;
        if (local_20 != param_2) {
          FUN_000192f0(5,"%s:%d unexpected log filename\n",param_1,local_14,pppppppbVar10);
          local_24 = (byte *******)0x40;
          goto LAB_00018f70;
        }
        if (local_20[0x18] == 0) {
          pcVar3 = strdup("/bin/gzip");
          local_20[0x18] = (int)pcVar3;
        }
        if (local_20[0x19] == 0) {
          pcVar3 = strdup("/bin/gunzip");
          local_20[0x19] = (int)pcVar3;
        }
        if (local_20[0x1a] == 0) {
          pcVar3 = strdup(".gz");
          local_20[0x1a] = (int)pcVar3;
        }
        if (((local_20[0x18] == 0) || (local_20[0x19] == 0)) || (local_20[0x1a] == 0)) {
          FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readConfigFile",0x75a);
          goto LAB_00019148;
        }
        local_20 = (int *)FUN_00013f20(param_2);
        if (local_20 == (int *)0x0) goto LAB_00019148;
        pppppppbVar10 = (byte *******)&local_c4;
        local_ac = (void *)FUN_00014a5c(param_1,local_14,local_bc,local_64);
        if (local_ac == (void *)0x0) goto LAB_00019148;
        local_2c = 1;
        iVar4 = poptParseArgvString(local_ac,&local_170,&local_174);
        if (iVar4 != 0) {
          FUN_000192f0(5,"%s:%d error parsing filename\n",param_1,local_14,pppppppbVar10);
          free(local_ac);
          goto LAB_00019148;
        }
        if (local_170 < 1) {
          FUN_000192f0(5,"%s:%d { expected after log file name(s)\n",param_1,local_14,pppppppbVar10)
          ;
          free(local_ac);
          goto LAB_00019148;
        }
        local_20[1] = 0;
        local_20[2] = 0;
        for (local_44 = 0; local_44 < local_170; local_44 = local_44 + 1) {
          local_b0 = (byte *******)strlen(*(char **)((int)local_174 + local_44 * 4));
          if (local_138 != (char *)0x0) {
            free(local_138);
            local_138 = (char *)0x0;
          }
          if (local_b0 < (byte *******)0x801) {
            local_b4 = glob64(*(char **)((int)local_174 + local_44 * 4),0x1010,
                              (__errfunc *)&LAB_00014d50,(glob64_t *)local_248);
            if (local_b4 == 2) {
              if ((local_20[0x1c] & 0x20U) != 0) goto LAB_000184d8;
              pppppppbVar10 = *(byte ********)((int)local_174 + local_44 * 4);
              pcVar3 = strerror(DAT_000372b4);
              local_b4 = asprintf(&local_138,"%s:%d glob failed for %s: %s\n",param_1,local_14,
                                  pppppppbVar10,pcVar3);
              if (local_b4 == -1) {
                FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readConfigFile",0x79a);
                local_138 = (char *)0x0;
              }
              else {
                FUN_000192f0(2,&DAT_0002394c,local_138);
              }
              local_248._0_4_ = 0;
            }
            if (local_248._0_4_ == 0) {
              pppppppbVar10 = *(byte ********)((int)local_174 + local_44 * 4);
              FUN_000192f0(2,"%s:%d no matches for glob \'%s\', skipping\n",param_1,local_14,
                           pppppppbVar10);
              globfree64((glob64_t *)local_248);
            }
            else {
              local_b8 = FUN_00012318(local_20[1],local_20[2] + local_248._0_4_,4);
              if (local_b8 == 0) {
                FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readConfigFile",0x7ac);
                local_28 = 1;
              }
              else {
                local_20[1] = local_b8;
                for (local_40 = 0; local_40 < (uint)local_248._0_4_; local_40 = local_40 + 1) {
                  local_4c = 1;
                  iVar4 = lstat64(*(char **)(local_248._4_4_ + local_40 * 4),(stat64 *)local_1e0);
                  if ((iVar4 != 0) || ((local_1d0 & 0xf000) != 0x4000)) {
                    for (local_48 = DAT_000372f0; local_48 != 0;
                        local_48 = *(int *)(local_48 + 0xa0)) {
                      for (local_50 = 0; local_50 < *(uint *)(local_48 + 8); local_50 = local_50 + 1
                          ) {
                        iVar4 = strcmp(*(char **)(*(int *)(local_48 + 4) + local_50 * 4),
                                       *(char **)(local_248._4_4_ + local_40 * 4));
                        if (iVar4 == 0) {
                          if ((*(uint *)(local_48 + 0x70) & 0x20000) == 0) {
                            pppppppbVar10 = *(byte ********)(local_248._4_4_ + local_40 * 4);
                            FUN_000192f0(5,"%s:%d duplicate log entry for %s\n",param_1,local_14,
                                         pppppppbVar10);
                            local_28 = 1;
                            goto LAB_000184c4;
                          }
                          local_4c = 0;
                          pppppppbVar10 = *(byte ********)(local_248._4_4_ + local_40 * 4);
                          FUN_000192f0(2,"%s:%d ignore duplicate log entry for %s\n",param_1,
                                       local_14,pppppppbVar10);
                        }
                      }
                    }
                    if (local_4c != 0) {
                      iVar4 = local_20[1];
                      iVar11 = local_20[2];
                      pcVar3 = strdup(*(char **)(local_248._4_4_ + local_40 * 4));
                      *(char **)(iVar4 + iVar11 * 4) = pcVar3;
                      if (*(int *)(local_20[1] + local_20[2] * 4) == 0) {
                        FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readConfigFile",0x7da);
                        local_28 = 1;
                        break;
                      }
                      local_20[2] = local_20[2] + 1;
                    }
                  }
                }
              }
LAB_000184c4:
              globfree64((glob64_t *)local_248);
            }
          }
          else {
            pppppppbVar10 = local_b0;
            FUN_000192f0(5,"%s:%d glob too long (%zu > 2048)\n",param_1,local_14,local_b0);
            local_28 = 1;
          }
LAB_000184d8:
        }
        *local_20 = (int)local_ac;
        free(local_174);
      }
      else {
        if (*(byte *)local_c4 != 0x7d) {
          if (*(byte *)local_c4 == 10) break;
          FUN_000192f0(5,
                       "%s:%d lines must begin with a keyword or a filename (possibly in double quotes)\n"
                       ,param_1,local_14,pppppppbVar10);
          if (local_20 != param_2) {
            local_24 = (byte *******)0x40;
            goto LAB_00018f70;
          }
          goto LAB_00019148;
        }
        if (local_20 == param_2) {
          FUN_000192f0(5,"%s:%d unexpected }\n",param_1,local_14,pppppppbVar10);
          goto LAB_00019148;
        }
        if (local_2c == 0) {
          FUN_000192f0(5,"%s:%d unexpected } (missing previous \'{\')\n",param_1,local_14,
                       pppppppbVar10);
          goto LAB_00019148;
        }
        local_2c = 0;
        if (local_138 != (char *)0x0) {
          if ((local_20[0x1c] & 0x20U) == 0) {
            FUN_000192f0(5,&DAT_0002394c,local_138,local_138,pppppppbVar10);
          }
          free(local_138);
          local_138 = (char *)0x0;
          if ((local_20[0x1c] & 0x20U) == 0) goto LAB_00019148;
        }
        if (local_20[3] != 0) {
          for (local_54 = 0; local_54 < (uint)local_20[2]; local_54 = local_54 + 1) {
            local_178 = (byte *******)0x0;
            local_a4 = strdup(*(char **)(local_20[1] + local_54 * 4));
            if (local_a4 == (char *)0x0) {
              FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readConfigFile",0x809);
              goto LAB_00019148;
            }
            local_58 = (byte *******)dirname(local_a4);
            iVar4 = stat64((char *)local_58,(stat64 *)local_248);
            if (iVar4 == 0) {
              if (*(char *)local_20[3] == '/') {
                local_58 = (byte *******)local_20[3];
              }
              else {
                iVar4 = asprintf((char **)&local_178,"%s/%s",local_58,local_20[3]);
                if (iVar4 < 0) {
                  FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readConfigFile",0x825);
                  free(local_a4);
                  goto LAB_00019148;
                }
                local_58 = local_178;
              }
              free(local_a4);
              iVar4 = stat64((char *)local_58,(stat64 *)local_1e0);
              if (iVar4 != 0) {
                piVar2 = __errno_location();
                if ((*piVar2 != 2) || ((local_20[0x1c] & 0x2000U) == 0)) {
                  piVar2 = __errno_location();
                  pcVar3 = strerror(*piVar2);
                  FUN_000192f0(5,"%s:%d error verifying olddir path %s: %s\n",param_1,local_14,
                               local_58,pcVar3);
                  free(local_178);
                  goto LAB_00019148;
                }
                if (((local_20[0x1c] & 0x800U) != 0) &&
                   (iVar4 = FUN_00019634(local_20[0x21],local_20[0x22]), iVar4 != 0)) {
                  free(local_178);
                  goto LAB_00019148;
                }
                local_a8 = FUN_00013328(local_58,local_20[0x23],local_20[0x24],local_20[0x25]);
                if (((local_20[0x1c] & 0x800U) != 0) && (iVar4 = FUN_00019a4c(), iVar4 != 0)) {
                  free(local_178);
                  goto LAB_00019148;
                }
                if (local_a8 != 0) {
                  free(local_178);
                  goto LAB_00019148;
                }
                iVar4 = stat64((char *)local_58,(stat64 *)local_1e0);
                if (iVar4 != 0) {
                  piVar2 = __errno_location();
                  pcVar3 = strerror(*piVar2);
                  FUN_000192f0(5,"%s:%d error verifying created olddir path %s: %s\n",param_1,
                               local_14,local_58,pcVar3);
                  free(local_178);
                  goto LAB_00019148;
                }
              }
              free(local_178);
              if ((local_248._4_4_ != local_1e0._4_4_ || local_248._0_4_ != local_1e0._0_4_) &&
                 ((local_20[0x1c] & 0x4110U) == 0)) {
                FUN_000192f0(5,"%s:%d olddir %s and log file %s are on different devices\n",param_1,
                             local_14,local_20[3],*(undefined4 *)(local_20[1] + local_54 * 4));
                goto LAB_00019148;
              }
            }
            else {
              if ((local_20[0x1c] & 0x20U) == 0) {
                piVar2 = __errno_location();
                pcVar3 = strerror(*piVar2);
                FUN_000192f0(5,"%s:%d error verifying log file path %s: %s\n",param_1,local_14,
                             local_58,pcVar3);
                free(local_a4);
                goto LAB_00019148;
              }
              piVar2 = __errno_location();
              pcVar3 = strerror(*piVar2);
              pppppppbVar10 = local_58;
              FUN_000192f0(2,
                           "%s:%d verifying log file path failed %s: %s, log is probably missing, but missingok is set, so this is not an error.\n"
                           ,param_1,local_14,local_58,pcVar3);
              free(local_a4);
            }
          }
        }
        local_134 = 0;
        local_24 = (byte *******)0x8;
        local_20 = param_2;
      }
    }
    else {
      free(local_c0);
      __s1 = (byte *******)FUN_000126c4(&local_c4,&local_bc,local_64);
      local_c0 = __s1;
      if (__s1 == (byte *******)0x0) {
        FUN_000192f0(5,"%s:%d failed to parse keyword\n",param_1,local_14);
        if (local_20 == param_2) goto LAB_00019148;
        local_24 = (byte *******)0x40;
        goto LAB_00018f70;
      }
      if (((local_c4 < (byte *******)((int)local_bc + local_64)) &&
          ((*(ushort *)(__ctype_b + (uint)*(byte *)local_c4 * 2) & 0x20) == 0)) &&
         (*(byte *)local_c4 != 0x3d)) {
        FUN_000192f0(5,"%s:%d keyword \'%s\' not properly separated, found %#x\n",param_1,local_14,
                     __s1,*(byte *)local_c4);
        if (local_20 != param_2) {
          local_24 = (byte *******)0x40;
          pppppppbVar10 = __s1;
          goto LAB_00018f70;
        }
        goto LAB_00019148;
      }
      iVar4 = strcmp((char *)__s1,"compress");
      if (iVar4 == 0) {
        local_20[0x1c] = local_20[0x1c] | 1;
      }
      else {
        iVar4 = strcmp((char *)local_c0,"nocompress");
        if (iVar4 == 0) {
          local_20[0x1c] = local_20[0x1c] & 0xfffffffe;
        }
        else {
          iVar4 = strcmp((char *)local_c0,"delaycompress");
          if (iVar4 == 0) {
            local_20[0x1c] = local_20[0x1c] | 8;
            break;
          }
          iVar4 = strcmp((char *)local_c0,"nodelaycompress");
          if (iVar4 == 0) {
            local_20[0x1c] = local_20[0x1c] & 0xfffffff7;
          }
          else {
            iVar4 = strcmp((char *)local_c0,"shred");
            if (iVar4 == 0) {
              local_20[0x1c] = local_20[0x1c] | 0x400;
            }
            else {
              iVar4 = strcmp((char *)local_c0,"noshred");
              if (iVar4 == 0) {
                local_20[0x1c] = local_20[0x1c] & 0xfffffbff;
              }
              else {
                iVar4 = strcmp((char *)local_c0,"allowhardlink");
                if (iVar4 == 0) {
                  local_20[0x1c] = local_20[0x1c] | 0x10000;
                }
                else {
                  iVar4 = strcmp((char *)local_c0,"noallowhardlink");
                  if (iVar4 == 0) {
                    local_20[0x1c] = local_20[0x1c] & 0xfffeffff;
                  }
                  else {
                    iVar4 = strcmp((char *)local_c0,"sharedscripts");
                    if (iVar4 == 0) {
                      local_20[0x1c] = local_20[0x1c] | 0x80;
                    }
                    else {
                      iVar4 = strcmp((char *)local_c0,"nosharedscripts");
                      if (iVar4 == 0) {
                        local_20[0x1c] = local_20[0x1c] & 0xffffff7f;
                      }
                      else {
                        iVar4 = strcmp((char *)local_c0,"copytruncate");
                        if (iVar4 == 0) {
                          local_20[0x1c] = local_20[0x1c] | 0x10;
                          local_20[0x1c] = local_20[0x1c] & 0xffffbfff;
                        }
                        else {
                          iVar4 = strcmp((char *)local_c0,"nocopytruncate");
                          if (iVar4 == 0) {
                            local_20[0x1c] = local_20[0x1c] & 0xffffffef;
                          }
                          else {
                            iVar4 = strcmp((char *)local_c0,"renamecopy");
                            if (iVar4 == 0) {
                              local_20[0x1c] = local_20[0x1c] | 0x4000;
                              local_20[0x1c] = local_20[0x1c] & 0xffffffef;
                            }
                            else {
                              iVar4 = strcmp((char *)local_c0,"norenamecopy");
                              if (iVar4 == 0) {
                                local_20[0x1c] = local_20[0x1c] & 0xffffbfff;
                              }
                              else {
                                iVar4 = strcmp((char *)local_c0,"copy");
                                if (iVar4 == 0) {
                                  local_20[0x1c] = local_20[0x1c] | 0x100;
                                }
                                else {
                                  iVar4 = strcmp((char *)local_c0,"nocopy");
                                  if (iVar4 == 0) {
                                    local_20[0x1c] = local_20[0x1c] & 0xfffffeff;
                                  }
                                  else {
                                    iVar4 = strcmp((char *)local_c0,"ifempty");
                                    if (iVar4 == 0) {
                                      local_20[0x1c] = local_20[0x1c] | 4;
                                    }
                                    else {
                                      iVar4 = strcmp((char *)local_c0,"notifempty");
                                      if (iVar4 == 0) {
                                        local_20[0x1c] = local_20[0x1c] & 0xfffffffb;
                                      }
                                      else {
                                        iVar4 = strcmp((char *)local_c0,"dateext");
                                        if (iVar4 == 0) {
                                          local_20[0x1c] = local_20[0x1c] | 0x200;
                                        }
                                        else {
                                          iVar4 = strcmp((char *)local_c0,"nodateext");
                                          if (iVar4 == 0) {
                                            local_20[0x1c] = local_20[0x1c] & 0xfffffdff;
                                          }
                                          else {
                                            iVar4 = strcmp((char *)local_c0,"dateyesterday");
                                            if (iVar4 == 0) {
                                              local_20[0x1c] = local_20[0x1c] | 0x1000;
                                            }
                                            else {
                                              iVar4 = strcmp((char *)local_c0,"datehourago");
                                              if (iVar4 == 0) {
                                                local_20[0x1c] = local_20[0x1c] | 0x8000;
                                              }
                                              else {
                                                iVar4 = strcmp((char *)local_c0,"dateformat");
                                                if (iVar4 == 0) {
                                                  free((void *)local_20[0x1b]);
                                                  local_20[0x1b] = 0;
                                                  pppppppbVar10 = (byte *******)&local_bc;
                                                  iVar4 = FUN_00012550(param_1,local_14,local_c0,
                                                                       &local_c4,pppppppbVar10,
                                                                       local_64);
                                                  local_20[0x1b] = iVar4;
                                                }
                                                else {
                                                  iVar4 = strcmp((char *)local_c0,"noolddir");
                                                  if (iVar4 == 0) {
                                                    free((void *)local_20[3]);
                                                    local_20[3] = 0;
                                                  }
                                                  else {
                                                    iVar4 = strcmp((char *)local_c0,"mailfirst");
                                                    if (iVar4 == 0) {
                                                      local_20[0x1c] = local_20[0x1c] | 0x40;
                                                    }
                                                    else {
                                                      iVar4 = strcmp((char *)local_c0,"maillast");
                                                      if (iVar4 == 0) {
                                                        local_20[0x1c] = local_20[0x1c] & 0xffffffbf
                                                        ;
                                                      }
                                                      else {
                                                        iVar4 = strcmp((char *)local_c0,"su");
                                                        if (iVar4 == 0) {
                                                          local_15c = (byte ******)0xffffffff;
                                                          free(local_c0);
                                                          local_c0 = (byte *******)
                                                                     FUN_0001239c(&local_c4,
                                                                                  &local_bc,local_64
                                                                                 );
                                                          if (local_c0 == (byte *******)0x0) {
                                                            FUN_000192f0(5,
                                                  "%s:%d failed to parse su option value\n",param_1,
                                                  local_14);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  }
                                                  else {
                                                    pppppppbVar10 = &local_15c;
                                                    local_6c = FUN_00012b04(param_1,local_14,
                                                                            local_c0,&DAT_00022a84,
                                                                            pppppppbVar10,
                                                                            local_20 + 0x21,
                                                                            local_20 + 0x22);
                                                    if (local_6c == -1) {
                                                      if (local_20 == param_2) goto LAB_00019148;
                                                      local_24 = (byte *******)0x40;
                                                    }
                                                    else if (local_15c == (byte ******)0xffffffff) {
                                                      if (local_20[0x21] == -1) {
                                                        FUN_000192f0(5,"%s:%d no user for su\n",
                                                                     param_1,local_14);
                                                        if (local_20 == param_2) goto LAB_00019148;
                                                        local_24 = (byte *******)0x40;
                                                      }
                                                      else {
                                                        if (local_20[0x22] != -1) {
                                                          local_20[0x1c] = local_20[0x1c] | 0x800;
                                                          break;
                                                        }
                                                        FUN_000192f0(5,"%s:%d no group for su\n",
                                                                     param_1,local_14);
                                                        if (local_20 == param_2) goto LAB_00019148;
                                                        local_24 = (byte *******)0x40;
                                                      }
                                                    }
                                                    else {
                                                      FUN_000192f0(5,
                                                  "%s:%d extra arguments for su\n",param_1,local_14)
                                                  ;
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  }
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"create");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    local_c0 = (byte *******)
                                                               FUN_0001239c(&local_c4,&local_bc,
                                                                            local_64);
                                                    if (local_c0 != (byte *******)0x0) {
                                                      pppppppbVar10 =
                                                           (byte *******)(local_20 + 0x1e);
                                                      local_70 = FUN_00012b04(param_1,local_14,
                                                                              local_c0,"create",
                                                                              pppppppbVar10,
                                                                              local_20 + 0x1f,
                                                                              local_20 + 0x20);
                                                      if (local_70 != -1) {
                                                        local_20[0x1c] = local_20[0x1c] | 2;
                                                        break;
                                                      }
                                                      if (local_20 == param_2) goto LAB_00019148;
                                                      local_24 = (byte *******)0x40;
                                                    }
                                                    goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"createolddir");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    local_c0 = (byte *******)
                                                               FUN_0001239c(&local_c4,&local_bc,
                                                                            local_64);
                                                    if (local_c0 != (byte *******)0x0) {
                                                      pppppppbVar10 =
                                                           (byte *******)(local_20 + 0x23);
                                                      local_74 = FUN_00012b04(param_1,local_14,
                                                                              local_c0,
                                                  "createolddir",pppppppbVar10,local_20 + 0x24,
                                                  local_20 + 0x25);
                                                  if (local_20[0x23] == -1) {
                                                    local_20[0x23] = 0x1ed;
                                                  }
                                                  if (local_74 != -1) {
                                                    local_20[0x1c] = local_20[0x1c] | 0x2000;
                                                    break;
                                                  }
                                                  if (local_20 != param_2) {
                                                    local_24 = (byte *******)0x40;
                                                    goto LAB_00018f70;
                                                  }
                                                  goto LAB_00019148;
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"nocreateolddir");
                                                  if (iVar4 == 0) {
                                                    local_20[0x1c] = local_20[0x1c] & 0xffffdfff;
                                                  }
                                                  else {
                                                    iVar4 = strcmp((char *)local_c0,"nocreate");
                                                    if (iVar4 == 0) {
                                                      local_20[0x1c] = local_20[0x1c] & 0xfffffffd;
                                                      break;
                                                    }
                                                    iVar4 = strcmp((char *)local_c0,"size");
                                                    if (((iVar4 == 0) ||
                                                        (iVar4 = strcmp((char *)local_c0,"minsize"),
                                                        iVar4 == 0)) ||
                                                       (iVar4 = strcmp((char *)local_c0,"maxsize"),
                                                       iVar4 == 0)) {
                                                      local_90 = local_c0;
                                                      pppppppbVar10 = (byte *******)&local_bc;
                                                      local_c0 = (byte *******)
                                                                 FUN_00012550(param_1,local_14,
                                                                              local_c0,&local_c4,
                                                                              pppppppbVar10,local_64
                                                                             );
                                                      if ((local_c0 == (byte *******)0x0) ||
                                                         (*(byte *)local_c0 == 0)) {
                                                        free(local_90);
                                                      }
                                                      else {
                                                        sVar6 = strlen((char *)local_c0);
                                                        local_94 = sVar6 - 1;
                                                        if ((*(byte *)((int)local_c0 + local_94) ==
                                                             0x6b) ||
                                                           (*(byte *)((int)local_c0 + local_94) ==
                                                            0x4b)) {
                                                          *(byte *)((int)local_c0 + local_94) = 0;
                                                          local_30 = 0x400;
                                                        }
                                                        else if (*(byte *)((int)local_c0 + local_94)
                                                                 == 0x4d) {
                                                          *(byte *)((int)local_c0 + local_94) = 0;
                                                          local_30 = 0x100000;
                                                        }
                                                        else if (*(byte *)((int)local_c0 + local_94)
                                                                 == 0x47) {
                                                          *(byte *)((int)local_c0 + local_94) = 0;
                                                          local_30 = 0x40000000;
                                                        }
                                                        else {
                                                          if ((*(ushort *)
                                                                (__ctype_b +
                                                                (uint)*(byte *)((int)local_c0 +
                                                                               local_94) * 2) & 8)
                                                              == 0) {
                                                            free(local_90);
                                                            pppppppbVar10 =
                                                                 (byte *******)
                                                                 (uint)*(byte *)((int)local_c0 +
                                                                                local_94);
                                                            FUN_000192f0(5,
                                                  "%s:%d unknown unit \'%c\'\n",param_1,local_14,
                                                  pppppppbVar10);
                                                  if (local_20 != param_2) {
                                                    local_24 = (byte *******)0x40;
                                                    goto LAB_00018f70;
                                                  }
                                                  goto LAB_00019148;
                                                  }
                                                  local_30 = 1;
                                                  }
                                                  uVar1 = (ulonglong)local_30;
                                                  uVar12 = strtoull((char *)local_c0,
                                                                    (char **)&local_c8,0);
                                                  local_a0 = uVar12 * uVar1;
                                                  if ((*(byte *)local_c8 == 0) && (-1 < local_a0)) {
                                                    iVar4 = strncmp((char *)local_90,"size",4);
                                                    if (iVar4 == 0) {
                                                      FUN_000141b8(local_20 + 4,5,&local_134);
                                                      local_20[6] = (int)local_a0;
                                                      local_20[7] = local_a0._4_4_;
                                                    }
                                                    else {
                                                      iVar4 = strncmp((char *)local_90,"maxsize",7);
                                                      if (iVar4 == 0) {
                                                        local_20[8] = (int)local_a0;
                                                        local_20[9] = local_a0._4_4_;
                                                      }
                                                      else {
                                                        local_20[10] = (int)local_a0;
                                                        local_20[0xb] = local_a0._4_4_;
                                                      }
                                                    }
                                                    free(local_90);
                                                    break;
                                                  }
                                                  pppppppbVar10 = local_c0;
                                                  FUN_000192f0(5,"%s:%d bad size \'%s\'\n",param_1,
                                                               local_14,local_c0);
                                                  free(local_90);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"shredcycles");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    local_c0 = (byte *******)
                                                               FUN_00012550(param_1,local_14,
                                                                            "shred cycles",&local_c4
                                                                            ,pppppppbVar10,local_64)
                                                    ;
                                                    if (local_c0 != (byte *******)0x0) {
                                                      uVar7 = strtoul((char *)local_c0,
                                                                      (char **)&local_c8,0);
                                                      local_20[0x1d] = uVar7;
                                                      if ((*(byte *)local_c8 == 0) &&
                                                         (-1 < local_20[0x1d])) break;
                                                      pppppppbVar10 = local_c0;
                                                      FUN_000192f0(5,
                                                  "%s:%d bad shred cycles \'%s\'\n",param_1,local_14
                                                  ,local_c0);
                                                  if (local_20 != param_2) {
                                                    local_24 = (byte *******)0x40;
                                                    goto LAB_00018f70;
                                                  }
                                                  goto LAB_00019148;
                                                  }
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"hourly");
                                                  if (iVar4 == 0) {
                                                    FUN_000141b8(local_20 + 4,0,&local_134);
                                                  }
                                                  else {
                                                    iVar4 = strcmp((char *)local_c0,"daily");
                                                    if (iVar4 == 0) {
                                                      FUN_000141b8(local_20 + 4,1,&local_134);
                                                      local_20[6] = 1;
                                                      local_20[7] = 0;
                                                    }
                                                    else {
                                                      iVar4 = strcmp((char *)local_c0,"monthly");
                                                      if (iVar4 == 0) {
                                                        FUN_000141b8(local_20 + 4,3,&local_134);
                                                        break;
                                                      }
                                                      iVar4 = strcmp((char *)local_c0,"weekly");
                                                      if (iVar4 == 0) {
                                                        FUN_000141b8(local_20 + 4,2,&local_134);
                                                        free(local_c0);
                                                        local_c0 = (byte *******)
                                                                   FUN_0001239c(&local_c4,&local_bc,
                                                                                local_64);
                                                        if ((local_c0 == (byte *******)0x0) ||
                                                           (*(byte *)local_c0 == 0)) {
                                                          local_20[5] = 0;
                                                        }
                                                        else {
                                                          iVar4 = sscanf((char *)local_c0,"%u%c",
                                                                         &local_160,&uStack_161);
                                                          if ((iVar4 != 1) || (7 < local_160)) {
                                                            FUN_000192f0(5,
                                                  "%s:%d bad weekly directive \'%s\'\n",param_1,
                                                  local_14,local_c0);
                                                  goto LAB_00019148;
                                                  }
                                                  local_20[5] = local_160;
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"yearly");
                                                  if (iVar4 == 0) {
                                                    FUN_000141b8(local_20 + 4,4,&local_134);
                                                    break;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"rotate");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    local_c0 = (byte *******)
                                                               FUN_00012550(param_1,local_14,
                                                                            "rotate count",&local_c4
                                                                            ,pppppppbVar10,local_64)
                                                    ;
                                                    if (local_c0 == (byte *******)0x0) {
                                                      if (local_20 == param_2) goto LAB_00019148;
                                                      local_24 = (byte *******)0x40;
                                                    }
                                                    else {
                                                      lVar8 = strtol((char *)local_c0,
                                                                     (char **)&local_c8,0);
                                                      local_20[0xc] = lVar8;
                                                      if ((*(byte *)local_c8 == 0) &&
                                                         (-2 < local_20[0xc])) break;
                                                      pppppppbVar10 = local_c0;
                                                      FUN_000192f0(5,
                                                  "%s:%d bad rotation count \'%s\'\n",param_1,
                                                  local_14,local_c0);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"start");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    local_c0 = (byte *******)
                                                               FUN_00012550(param_1,local_14,
                                                                            "start count",&local_c4,
                                                                            pppppppbVar10,local_64);
                                                    if (local_c0 == (byte *******)0x0) {
                                                      if (local_20 == param_2) goto LAB_00019148;
                                                      local_24 = (byte *******)0x40;
                                                    }
                                                    else {
                                                      uVar7 = strtoul((char *)local_c0,
                                                                      (char **)&local_c8,0);
                                                      local_20[0xf] = uVar7;
                                                      if ((*(byte *)local_c8 == 0) &&
                                                         (-1 < local_20[0xf])) break;
                                                      pppppppbVar10 = local_c0;
                                                      FUN_000192f0(5,
                                                  "%s:%d bad start count \'%s\'\n",param_1,local_14,
                                                  local_c0);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"minage");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    local_c0 = (byte *******)
                                                               FUN_00012550(param_1,local_14,
                                                                            "minage count",&local_c4
                                                                            ,pppppppbVar10,local_64)
                                                    ;
                                                    if (local_c0 == (byte *******)0x0) {
                                                      if (local_20 == param_2) goto LAB_00019148;
                                                      local_24 = (byte *******)0x40;
                                                    }
                                                    else {
                                                      uVar7 = strtoul((char *)local_c0,
                                                                      (char **)&local_c8,0);
                                                      local_20[0xd] = uVar7;
                                                      if ((*(byte *)local_c8 == 0) &&
                                                         (-1 < local_20[0xd])) break;
                                                      pppppppbVar10 = local_c4;
                                                      FUN_000192f0(5,
                                                  "%s:%d bad minimum age \'%s\'\n",param_1,local_14,
                                                  local_c4);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"maxage");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    local_c0 = (byte *******)
                                                               FUN_00012550(param_1,local_14,
                                                                            "maxage count",&local_c4
                                                                            ,pppppppbVar10,local_64)
                                                    ;
                                                    if (local_c0 != (byte *******)0x0) {
                                                      uVar7 = strtoul((char *)local_c0,
                                                                      (char **)&local_c8,0);
                                                      local_20[0xe] = uVar7;
                                                      if ((*(byte *)local_c8 == 0) &&
                                                         (-1 < local_20[0xe])) break;
                                                      pppppppbVar10 = local_c4;
                                                      FUN_000192f0(5,
                                                  "%s:%d bad maximum age \'%s\'\n",param_1,local_14,
                                                  local_c4);
                                                  if (local_20 != param_2) {
                                                    local_24 = (byte *******)0x40;
                                                    goto LAB_00018f70;
                                                  }
                                                  goto LAB_00019148;
                                                  }
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"errors");
                                                  if (iVar4 == 0) {
                                                    FUN_000192f0(4,
                                                  "%s: %d: the errors directive is deprecated and no longer used.\n"
                                                  ,param_1,local_14);
                                                  }
                                                  else {
                                                    iVar4 = strcmp((char *)local_c0,"mail");
                                                    if (iVar4 == 0) {
                                                      free((void *)local_20[0x15]);
                                                      local_20[0x15] = 0;
                                                      pppppppbVar10 = (byte *******)&local_bc;
                                                      iVar4 = FUN_00013018(param_1,local_14,
                                                                           &DAT_00023570,&local_c4,
                                                                           pppppppbVar10,local_64);
                                                      local_20[0x15] = iVar4;
                                                      if (local_20[0x15] == 0) {
                                                        if (local_20 != param_2) {
                                                          local_24 = (byte *******)0x40;
                                                          goto LAB_00018f70;
                                                        }
                                                        goto LAB_00019148;
                                                      }
                                                    }
                                                    else {
                                                      iVar4 = strcmp((char *)local_c0,"nomail");
                                                      if (iVar4 == 0) {
                                                        free((void *)local_20[0x15]);
                                                        local_20[0x15] = 0;
                                                      }
                                                      else {
                                                        iVar4 = strcmp((char *)local_c0,"missingok")
                                                        ;
                                                        if (iVar4 == 0) {
                                                          local_20[0x1c] = local_20[0x1c] | 0x20;
                                                          break;
                                                        }
                                                        iVar4 = strcmp((char *)local_c0,
                                                                       "nomissingok");
                                                        if (iVar4 == 0) {
                                                          local_20[0x1c] =
                                                               local_20[0x1c] & 0xffffffdf;
                                                        }
                                                        else {
                                                          iVar4 = strcmp((char *)local_c0,
                                                                         "ignoreduplicates");
                                                          if (iVar4 == 0) {
                                                            local_20[0x1c] =
                                                                 local_20[0x1c] | 0x20000;
                                                          }
                                                          else {
                                                            iVar4 = strcmp((char *)local_c0,
                                                                           "prerotate");
                                                            if (iVar4 == 0) {
                                                              free((void *)local_20[0x10]);
                                                              local_20[0x10] = 0;
                                                              local_18 = local_c4;
                                                              local_1c = local_20 + 0x10;
                                                              local_24 = (byte *******)0x20;
                                                            }
                                                            else {
                                                              iVar4 = strcmp((char *)local_c0,
                                                                             "firstaction");
                                                              if (iVar4 == 0) {
                                                                free((void *)local_20[0x12]);
                                                                local_20[0x12] = 0;
                                                                local_18 = local_c4;
                                                                local_1c = local_20 + 0x12;
                                                                local_24 = (byte *******)0x20;
                                                              }
                                                              else {
                                                                iVar4 = strcmp((char *)local_c0,
                                                                               "postrotate");
                                                                if (iVar4 == 0) {
                                                                  free((void *)local_20[0x11]);
                                                                  local_20[0x11] = 0;
                                                                  local_18 = local_c4;
                                                                  local_1c = local_20 + 0x11;
                                                                  local_24 = (byte *******)0x20;
                                                                }
                                                                else {
                                                                  iVar4 = strcmp((char *)local_c0,
                                                                                 "lastaction");
                                                                  if (iVar4 == 0) {
                                                                    free((void *)local_20[0x13]);
                                                                    local_20[0x13] = 0;
                                                                    local_18 = local_c4;
                                                                    local_1c = local_20 + 0x13;
                                                                    local_24 = (byte *******)0x20;
                                                                  }
                                                                  else {
                                                                    iVar4 = strcmp((char *)local_c0,
                                                                                   "preremove");
                                                                    if (iVar4 == 0) {
                                                                      free((void *)local_20[0x14]);
                                                                      local_20[0x14] = 0;
                                                                      local_18 = local_c4;
                                                                      local_1c = local_20 + 0x14;
                                                                      local_24 = (byte *******)0x20;
                                                                    }
                                                                    else {
                                                                      iVar4 = strcmp((char *)
                                                  local_c0,"tabooext");
                                                  if (iVar4 == 0) {
                                                    if (local_20 == param_2) {
                                                      free(local_c0);
                                                      pppppppbVar10 = (byte *******)&local_bc;
                                                      local_c0 = (byte *******)
                                                                 FUN_00012550(param_1,local_14,
                                                                              "tabooext",&local_c4,
                                                                              pppppppbVar10,local_64
                                                                             );
                                                      if (local_c0 != (byte *******)0x0) {
                                                        local_34 = local_c0;
                                                        if (*(byte *)local_c0 == 0x2b) {
                                                          do {
                                                            local_34 = (byte *******)
                                                                       ((int)local_34 + 1);
                                                            if ((*(ushort *)
                                                                  (__ctype_b +
                                                                  (uint)*(byte *)local_34 * 2) &
                                                                0x20) == 0) break;
                                                          } while (*(byte *)local_34 != 0);
                                                        }
                                                        else {
                                                          FUN_000135b0(DAT_000372ac,DAT_000372b0);
                                                          DAT_000372b0 = 0;
                                                          DAT_000372ac = 0;
                                                        }
LAB_00017154:
                                                        if (*(byte *)local_34 != 0) {
                                                          local_168 = (char *)0x0;
                                                          for (local_c8 = local_34;
                                                              (((*(ushort *)
                                                                  (__ctype_b +
                                                                  (uint)*(byte *)local_c8 * 2) &
                                                                0x20) == 0 &&
                                                               (*(byte *)local_c8 != 0x2c)) &&
                                                              (*(byte *)local_c8 != 0));
                                                              local_c8 = (byte *******)
                                                                         ((int)local_c8 + 1)) {
                                                          }
                                                          if (local_34 < local_c8) {
                                                            local_78 = FUN_00012318(DAT_000372ac,
                                                                                    DAT_000372b0 + 1
                                                                                    ,4);
                                                            if (local_78 == 0) {
                                                              FUN_000192f0(5,
                                                  "cannot allocate memory [%s():%d]\n",
                                                  "readConfigFile",0x648);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  goto LAB_00018f70;
                                                  }
                                                  DAT_000372ac = local_78;
                                                  iVar4 = asprintf(&local_168,"*%.*s",
                                                                   (int)local_c8 - (int)local_34,
                                                                   local_34);
                                                  if (iVar4 < 0) {
                                                    FUN_000192f0(5,
                                                  "cannot allocate memory [%s():%d]\n",
                                                  "readConfigFile",0x64d);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  goto LAB_00018f70;
                                                  }
                                                  *(char **)(DAT_000372ac + DAT_000372b0 * 4) =
                                                       local_168;
                                                  DAT_000372b0 = DAT_000372b0 + 1;
                                                  }
                                                  local_34 = local_c8;
                                                  if (*(byte *)local_c8 == 0x2c) {
                                                    local_34 = (byte *******)((int)local_c8 + 1);
                                                  }
                                                  while ((*(byte *)local_34 != 0 &&
                                                         ((*(ushort *)
                                                            (__ctype_b + (uint)*(byte *)local_34 * 2
                                                            ) & 0x20) != 0))) {
                                                    local_34 = (byte *******)((int)local_34 + 1);
                                                  }
                                                  goto LAB_00017154;
                                                  }
                                                  break;
                                                  }
                                                  }
                                                  else {
                                                    FUN_000192f0(5,
                                                  "%s:%d tabooext may not appear inside of log file definition\n"
                                                  ,param_1,local_14);
                                                  local_24 = (byte *******)0x40;
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"taboopat");
                                                  if (iVar4 == 0) {
                                                    if (local_20 == param_2) {
                                                      free(local_c0);
                                                      pppppppbVar10 = (byte *******)&local_bc;
                                                      local_c0 = (byte *******)
                                                                 FUN_00012550(param_1,local_14,
                                                                              "taboopat",&local_c4,
                                                                              pppppppbVar10,local_64
                                                                             );
                                                      if (local_c0 != (byte *******)0x0) {
                                                        local_38 = local_c0;
                                                        if (*(byte *)local_c0 == 0x2b) {
                                                          do {
                                                            local_38 = (byte *******)
                                                                       ((int)local_38 + 1);
                                                            if ((*(ushort *)
                                                                  (__ctype_b +
                                                                  (uint)*(byte *)local_38 * 2) &
                                                                0x20) == 0) break;
                                                          } while (*(byte *)local_38 != 0);
                                                        }
                                                        else {
                                                          FUN_000135b0(DAT_000372ac,DAT_000372b0);
                                                          DAT_000372b0 = 0;
                                                          DAT_000372ac = 0;
                                                        }
LAB_000174cc:
                                                        if (*(byte *)local_38 != 0) {
                                                          local_16c = (char *)0x0;
                                                          for (local_c8 = local_38;
                                                              (((*(ushort *)
                                                                  (__ctype_b +
                                                                  (uint)*(byte *)local_c8 * 2) &
                                                                0x20) == 0 &&
                                                               (*(byte *)local_c8 != 0x2c)) &&
                                                              (*(byte *)local_c8 != 0));
                                                              local_c8 = (byte *******)
                                                                         ((int)local_c8 + 1)) {
                                                          }
                                                          local_7c = FUN_00012318(DAT_000372ac,
                                                                                  DAT_000372b0 + 1,4
                                                                                 );
                                                          if (local_7c == 0) {
                                                            FUN_000192f0(5,
                                                  "cannot allocate memory [%s():%d]\n",
                                                  "readConfigFile",0x682);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  goto LAB_00018f70;
                                                  }
                                                  DAT_000372ac = local_7c;
                                                  iVar4 = asprintf(&local_16c,"%.*s",
                                                                   (int)local_c8 - (int)local_38,
                                                                   local_38);
                                                  if (iVar4 < 0) {
                                                    FUN_000192f0(5,
                                                  "cannot allocate memory [%s():%d]\n",
                                                  "readConfigFile",0x687);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  goto LAB_00018f70;
                                                  }
                                                  *(char **)(DAT_000372ac + DAT_000372b0 * 4) =
                                                       local_16c;
                                                  DAT_000372b0 = DAT_000372b0 + 1;
                                                  local_38 = local_c8;
                                                  if (*(byte *)local_c8 == 0x2c) {
                                                    local_38 = (byte *******)((int)local_c8 + 1);
                                                  }
                                                  while ((*(byte *)local_38 != 0 &&
                                                         ((*(ushort *)
                                                            (__ctype_b + (uint)*(byte *)local_38 * 2
                                                            ) & 0x20) != 0))) {
                                                    local_38 = (byte *******)((int)local_38 + 1);
                                                  }
                                                  goto LAB_000174cc;
                                                  }
                                                  break;
                                                  }
                                                  }
                                                  else {
                                                    FUN_000192f0(5,
                                                  "%s:%d taboopat may not appear inside of log file definition\n"
                                                  ,param_1,local_14);
                                                  local_24 = (byte *******)0x40;
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"include");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    local_c0 = (byte *******)
                                                               FUN_00012550(param_1,local_14,
                                                                            "include",&local_c4,
                                                                            pppppppbVar10,local_64);
                                                    if (local_c0 == (byte *******)0x0) {
                                                      if (local_20 == param_2) goto LAB_00019148;
                                                      local_24 = (byte *******)0x40;
                                                    }
                                                    else {
                                                      iVar4 = FUN_00014db4(&local_c0);
                                                      if (iVar4 == 0) {
                                                        FUN_000192f0(2,"including %s\n",local_c0);
                                                        if (DAT_000372b8 < 0x10) {
                                                          DAT_000372b8 = DAT_000372b8 + 1;
                                                          local_80 = FUN_0001424c(local_c0,local_20)
                                                          ;
                                                          DAT_000372b8 = DAT_000372b8 - 1;
                                                          if (local_80 == 0) break;
                                                          local_28 = 1;
                                                        }
                                                        else {
                                                          FUN_000192f0(5,
                                                  "%s:%d include nesting too deep\n",param_1,
                                                  local_14);
                                                  local_28 = 1;
                                                  }
                                                  }
                                                  else {
                                                    if (local_20 == param_2) goto LAB_00019148;
                                                    local_24 = (byte *******)0x40;
                                                  }
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"olddir");
                                                  if (iVar4 == 0) {
                                                    free((void *)local_20[3]);
                                                    local_20[3] = 0;
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    iVar4 = FUN_0001284c(param_1,local_14,"olddir",
                                                                         &local_c4,pppppppbVar10,
                                                                         local_64);
                                                    local_20[3] = iVar4;
                                                    if (local_20[3] == 0) {
                                                      if (local_20 == param_2) goto LAB_00019148;
                                                      local_24 = (byte *******)0x40;
                                                    }
                                                    else {
                                                      iVar4 = FUN_00014db4(local_20 + 3);
                                                      if (iVar4 == 0) {
                                                        FUN_000192f0(2,"olddir is now %s\n",
                                                                     local_20[3]);
                                                        break;
                                                      }
                                                      if (local_20 == param_2) goto LAB_00019148;
                                                      local_24 = (byte *******)0x40;
                                                    }
                                                    goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"extension");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    local_c0 = (byte *******)
                                                               FUN_00012550(param_1,local_14,
                                                                            "extension name",
                                                                            &local_c4,pppppppbVar10,
                                                                            local_64);
                                                    if (local_c0 != (byte *******)0x0) {
                                                      free((void *)local_20[0x16]);
                                                      local_20[0x16] = 0;
                                                      local_20[0x16] = (int)local_c0;
                                                      local_c0 = (byte *******)0x0;
                                                      FUN_000192f0(2,"extension is now %s\n",
                                                                   local_20[0x16]);
                                                      break;
                                                    }
                                                    local_c0 = (byte *******)0x0;
                                                    if (local_20 == param_2) goto LAB_00019148;
                                                    local_24 = (byte *******)0x40;
                                                    goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"addextension");
                                                  if (iVar4 == 0) {
                                                    free(local_c0);
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    local_c0 = (byte *******)
                                                               FUN_00012550(param_1,local_14,
                                                                            "addextension name",
                                                                            &local_c4,pppppppbVar10,
                                                                            local_64);
                                                    if (local_c0 != (byte *******)0x0) {
                                                      free((void *)local_20[0x17]);
                                                      local_20[0x17] = 0;
                                                      local_20[0x17] = (int)local_c0;
                                                      local_c0 = (byte *******)0x0;
                                                      FUN_000192f0(2,"addextension is now %s\n",
                                                                   local_20[0x17]);
                                                      break;
                                                    }
                                                    local_c0 = (byte *******)0x0;
                                                    if (local_20 == param_2) goto LAB_00019148;
                                                    local_24 = (byte *******)0x40;
                                                    goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"compresscmd");
                                                  if (iVar4 == 0) {
                                                    free((void *)local_20[0x18]);
                                                    local_20[0x18] = 0;
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    iVar4 = FUN_0001284c(param_1,local_14,"compress"
                                                                         ,&local_c4,pppppppbVar10,
                                                                         local_64);
                                                    local_20[0x18] = iVar4;
                                                    if (local_20[0x18] == 0) {
                                                      if (local_20 == param_2) goto LAB_00019148;
                                                      local_24 = (byte *******)0x40;
                                                    }
                                                    else {
                                                      FUN_000192f0(2,"compress_prog is now %s\n",
                                                                   local_20[0x18]);
                                                      local_84 = strdup((char *)local_20[0x18]);
                                                      if (local_84 != (char *)0x0) {
                                                        local_88 = __xpg_basename(local_84);
                                                        for (local_3c = 0; local_3c < 6;
                                                            local_3c = local_3c + 1) {
                                                          iVar4 = strcmp(*(char **)(&DAT_000228b0 +
                                                                                   local_3c * 8),
                                                                         local_88);
                                                          if (iVar4 == 0) {
                                                            free((void *)local_20[0x1a]);
                                                            local_20[0x1a] = 0;
                                                            pcVar3 = strdup((&PTR_DAT_000228b4)
                                                                            [local_3c * 2]);
                                                            local_20[0x1a] = (int)pcVar3;
                                                            if (local_20[0x1a] == 0) {
                                                              FUN_000192f0(5,
                                                  "cannot allocate memory [%s():%d]\n",
                                                  "readConfigFile",0x6fd);
                                                  free(local_84);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  goto LAB_00018f70;
                                                  }
                                                  FUN_000192f0(2,"compress_ext was changed to %s\n",
                                                               local_20[0x1a]);
                                                  break;
                                                  }
                                                  }
                                                  free(local_84);
                                                  break;
                                                  }
                                                  FUN_000192f0(5,
                                                  "cannot allocate memory [%s():%d]\n",
                                                  "readConfigFile",0x6f0);
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  }
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"uncompresscmd");
                                                  if (iVar4 == 0) {
                                                    free((void *)local_20[0x19]);
                                                    local_20[0x19] = 0;
                                                    pppppppbVar10 = (byte *******)&local_bc;
                                                    iVar4 = FUN_0001284c(param_1,local_14,
                                                                         "uncompress",&local_c4,
                                                                         pppppppbVar10,local_64);
                                                    local_20[0x19] = iVar4;
                                                    if (local_20[0x19] != 0) {
                                                      FUN_000192f0(2,"uncompress_prog is now %s\n",
                                                                   local_20[0x19]);
                                                      break;
                                                    }
                                                    if (local_20 == param_2) goto LAB_00019148;
                                                    local_24 = (byte *******)0x40;
                                                    goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"compressoptions")
                                                  ;
                                                  if (iVar4 == 0) {
                                                    if (local_20[0x26] != 0) {
                                                      free((void *)local_20[0x26]);
                                                      local_20[0x26] = 0;
                                                      local_20[0x27] = 0;
                                                    }
                                                    local_8c = (void *)FUN_0001239c(&local_c4,
                                                                                    &local_bc,
                                                                                    local_64);
                                                    if (local_8c != (void *)0x0) {
                                                      iVar4 = poptParseArgvString(local_8c,local_20 
                                                  + 0x27,local_20 + 0x26);
                                                  if (iVar4 == 0) {
                                                    FUN_000192f0(2,"compress_options is now %s\n",
                                                                 local_8c);
                                                    free(local_8c);
                                                    break;
                                                  }
                                                  FUN_000192f0(5,
                                                  "%s:%d invalid compression options\n",param_1,
                                                  local_14);
                                                  free(local_8c);
                                                  if (local_20 != param_2) {
                                                    local_24 = (byte *******)0x40;
                                                    goto LAB_00018f70;
                                                  }
                                                  goto LAB_00019148;
                                                  }
                                                  if (local_20 == param_2) goto LAB_00019148;
                                                  local_24 = (byte *******)0x40;
                                                  goto LAB_00018f70;
                                                  }
                                                  iVar4 = strcmp((char *)local_c0,"compressext");
                                                  if (iVar4 != 0) {
                                                    pppppppbVar10 = local_c0;
                                                    FUN_000192f0(4,
                                                  "%s:%d unknown option \'%s\' -- ignoring line\n",
                                                  param_1,local_14,local_c0);
                                                  if ((local_c4 <
                                                       (byte *******)((int)local_bc + local_64)) &&
                                                     (*(byte *)local_c4 != 10)) {
                                                    local_24 = (byte *******)0x4;
                                                  }
                                                  break;
                                                  }
                                                  free((void *)local_20[0x1a]);
                                                  local_20[0x1a] = 0;
                                                  pppppppbVar10 = (byte *******)&local_bc;
                                                  iVar4 = FUN_0001284c(param_1,local_14,
                                                                       "compress-ext",&local_c4,
                                                                       pppppppbVar10,local_64);
                                                  local_20[0x1a] = iVar4;
                                                  if (local_20[0x1a] == 0) {
                                                    if (local_20 != param_2) {
                                                      local_24 = (byte *******)0x40;
                                                      goto LAB_00018f70;
                                                    }
                                                    goto LAB_00019148;
                                                  }
                                                  FUN_000192f0(2,"compress_ext is now %s\n",
                                                               local_20[0x1a]);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  default:
    pppppppbVar10 = local_24;
    FUN_000192f0(6,"%s: %d: readConfigFile() unknown state: %#x\n",param_1,local_14,local_24);
    break;
  case (byte *******)0x4:
  case (byte *******)0x14:
    if (*(byte *)local_c4 == 10) {
      if (((uint)local_24 & 0x10) == 0) {
        local_24 = (byte *******)0x2;
      }
      else {
        local_24 = (byte *******)0x10;
      }
    }
    break;
  case (byte *******)0x8:
  case (byte *******)0x18:
    if ((*(ushort *)(__ctype_b + (uint)*(byte *)local_c4 * 2) & 0x100) == 0) {
      if (*(byte *)local_c4 == 10) {
        if (((uint)local_24 & 0x10) == 0) {
          local_24 = (byte *******)0x2;
        }
        else {
          local_24 = (byte *******)0x10;
        }
      }
      else {
        FUN_000192f0(5,"%s:%d, unexpected text after }\n",param_1,local_14,pppppppbVar10);
        local_24 = (byte *******)((uint)local_24 & 0x10 | 4);
      }
      break;
    }
    goto LAB_00018f70;
  case (byte *******)0x10:
    if (*(byte *)local_c4 == 0x7d) {
      local_24 = (byte *******)0x2;
      FUN_000140bc(1);
      local_20 = param_2;
    }
    else {
      free(local_c0);
      local_c0 = (byte *******)FUN_000126c4(&local_c4,&local_bc,local_64);
      if (local_c0 == (byte *******)0x0) goto LAB_00018f70;
      iVar4 = strcmp((char *)local_c0,"postrotate");
      if ((((iVar4 == 0) || (iVar4 = strcmp((char *)local_c0,"prerotate"), iVar4 == 0)) ||
          (iVar4 = strcmp((char *)local_c0,"firstaction"), iVar4 == 0)) ||
         ((iVar4 = strcmp((char *)local_c0,"lastaction"), iVar4 == 0 ||
          (iVar4 = strcmp((char *)local_c0,"preremove"), iVar4 == 0)))) {
        local_24 = (byte *******)0x30;
      }
      else if ((local_c4 < (byte *******)((int)local_bc + local_64)) && (*(byte *)local_c4 != 10)) {
        local_24 = (byte *******)0x14;
      }
    }
    break;
  case (byte *******)0x20:
  case (byte *******)0x30:
    free(local_c0);
    local_c0 = (byte *******)FUN_000126c4(&local_c4,&local_bc,local_64);
    if (local_c0 == (byte *******)0x0) goto LAB_00018f70;
    iVar4 = strcmp((char *)local_c0,"endscript");
    if (iVar4 != 0) {
      if ((local_c4 < (byte *******)((int)local_bc + local_64)) && (*(byte *)local_c4 == 10)) {
        uVar9 = 0x20;
      }
      else {
        uVar9 = 0x24;
      }
      local_24 = (byte *******)(uVar9 | (uint)local_24 & 0x10);
      break;
    }
    if (((uint)local_24 & 0x10) == 0) {
      for (local_5c = (byte *******)((int)local_c4 + -9);
          (local_18 < local_5c && (*(byte *)local_5c != 10));
          local_5c = (byte *******)((int)local_5c + -1)) {
      }
      local_5c = (byte *******)((int)local_5c + 1);
      pcVar3 = strndup((char *)local_18,(int)local_5c - (int)local_18);
      *local_1c = (int)pcVar3;
      if (*local_1c == 0) {
        FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readConfigFile",0x8a3);
        goto LAB_00019148;
      }
      local_1c = (int *)0x0;
      local_18 = (byte *******)0x0;
    }
    else {
      local_24 = (byte *******)0x10;
    }
    if (((uint)local_24 & 0x10) == 0) {
      local_24 = (byte *******)0x2;
    }
    else {
      local_24 = (byte *******)0x10;
    }
    break;
  case (byte *******)0x24:
    if (*(byte *)local_c4 == 10) {
      local_24 = (byte *******)0x20;
    }
    break;
  case (byte *******)0x34:
    if (*(byte *)local_c4 == 10) {
      local_24 = (byte *******)0x30;
    }
    break;
  case (byte *******)0x40:
    if (local_20 == param_2) {
      __assert("newlog != defConfig","config.c",0x889);
    }
    if (*local_20 == 0) {
      pcVar3 = "log config";
    }
    else {
      pcVar3 = (char *)*local_20;
    }
    FUN_000192f0(5,"found error in %s, skipping\n",pcVar3,pcVar3,pppppppbVar10);
    local_28 = 1;
    local_24 = (byte *******)0x10;
  }
  if ((local_c4 < (byte *******)((int)local_bc + local_64)) && (*(byte *)local_c4 == 10)) {
    local_14 = local_14 + 1;
  }
LAB_00018f70:
  local_c4 = (byte *******)((int)local_c4 + 1);
  goto LAB_00018f7c;
}



/* ===== FUN_000191a0 @ 000191a0 size=48 ===== */

void FUN_000191a0(undefined4 param_1)

{
  DAT_00037210 = param_1;
  return;
}



/* ===== FUN_000191d0 @ 000191d0 size=48 ===== */

void FUN_000191d0(undefined4 param_1)

{
  DAT_000372bc = param_1;
  return;
}



/* ===== FUN_00019200 @ 00019200 size=92 ===== */

void FUN_00019200(int param_1)

{
  DAT_000372c0 = param_1;
  if (param_1 == 0) {
    closelog();
  }
  else {
    openlog("logrotate",0,8);
  }
  return;
}



/* ===== FUN_0001925c @ 0001925c size=148 ===== */

void FUN_0001925c(FILE *param_1,int param_2,char *param_3,__gnuc_va_list param_4)

{
  if (param_2 != 2) {
    if (param_2 == 4) {
      fwrite("warning: ",1,9,param_1);
    }
    else {
      fwrite("error: ",1,7,param_1);
    }
  }
  vfprintf(param_1,param_3,param_4);
  fflush(param_1);
  return;
}



/* ===== FUN_000192f0 @ 000192f0 size=344 ===== */

void FUN_000192f0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int local_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (DAT_00037210 <= param_1) {
    FUN_0001925c(stderr,param_1,param_2,&uStack_8);
  }
  if (DAT_000372bc != 0) {
    FUN_0001925c(DAT_000372bc,param_1,param_2,&uStack_8);
  }
  if (DAT_000372c0 != 0) {
    switch(param_1) {
    case 1:
      local_1c = 0xf;
      break;
    case 2:
      local_1c = 0xe;
      break;
    default:
      local_1c = 0xe;
      break;
    case 4:
      local_1c = 0xc;
      break;
    case 5:
      local_1c = 0xb;
      break;
    case 6:
      local_1c = 10;
    }
    vsyslog(local_1c,param_2,&uStack_8);
  }
  if (param_1 == 6) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* ===== FUN_00019460 @ 00019460 size=68 ===== */

undefined4 FUN_00019460(undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_2);
  FUN_000192f0(5,"error accessing %s: %s\n",param_1,pcVar1);
  return 1;
}



/* ===== FUN_000194a4 @ 000194a4 size=268 ===== */

undefined4 FUN_000194a4(int *param_1,int *param_2)

{
  time_t tVar1;
  undefined4 uVar2;
  tm tStack_44;
  time_t local_14;
  int local_10;
  int local_c;
  
  local_c = *param_1;
  local_10 = *param_2;
  memset(&tStack_44,0,0x2c);
  strptime((char *)(local_c + DAT_000372e8),DAT_000372ec,&tStack_44);
  local_14 = mktime(&tStack_44);
  memset(&tStack_44,0,0x2c);
  strptime((char *)(local_10 + DAT_000372e8),DAT_000372ec,&tStack_44);
  tVar1 = mktime(&tStack_44);
  if (local_14 < tVar1) {
    uVar2 = 0xffffffff;
  }
  else if (tVar1 < local_14) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_000195b0 @ 000195b0 size=132 ===== */

void FUN_000195b0(size_t *param_1,undefined4 param_2,char *param_3)

{
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    DAT_000372e8 = param_2;
    DAT_000372ec = param_3;
    qsort((void *)param_1[1],*param_1,4,FUN_000194a4);
  }
  return;
}



/* ===== FUN_00019634 @ 00019634 size=352 ===== */

undefined4 FUN_00019634(__uid_t param_1,__gid_t param_2)

{
  __gid_t _Var1;
  __uid_t _Var2;
  __pid_t _Var3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  DAT_000372e4 = getegid();
  _Var2 = geteuid();
  _Var1 = DAT_000372e4;
  DAT_000372e0 = _Var2;
  if ((param_1 == _Var2) && (param_2 == DAT_000372e4)) {
    uVar7 = 0;
  }
  else {
    _Var3 = getpid();
    FUN_000192f0(2,"switching euid from %u to %u and egid from %u to %u (pid %d)\n",_Var2,param_1,
                 _Var1,param_2,_Var3);
    iVar4 = setegid(param_2);
    if ((iVar4 == 0) && (iVar4 = seteuid(param_1), iVar4 == 0)) {
      uVar7 = 0;
    }
    else {
      _Var1 = DAT_000372e4;
      _Var2 = DAT_000372e0;
      _Var3 = getpid();
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
      FUN_000192f0(5,"error switching euid from %u to %u and egid from %u to %u (pid %d): %s\n",
                   _Var2,param_1,_Var1,param_2,_Var3,pcVar6);
      uVar7 = 1;
    }
  }
  return uVar7;
}



/* ===== FUN_00019794 @ 00019794 size=696 ===== */

undefined4 FUN_00019794(int param_1)

{
  __gid_t __gid;
  __uid_t __uid;
  __pid_t _Var1;
  __uid_t _Var2;
  __gid_t _Var3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  __gid = getegid();
  __uid = geteuid();
  if ((*(uint *)(param_1 + 0x70) & 0x800) == 0) {
    uVar7 = 0;
  }
  else if (__uid == *(__uid_t *)(param_1 + 0x84)) {
    if (__gid == *(__gid_t *)(param_1 + 0x88)) {
      _Var2 = getuid();
      if ((__uid == _Var2) && (_Var3 = getgid(), __gid == _Var3)) {
        uVar7 = 0;
      }
      else {
        _Var3 = getgid();
        iVar4 = setgid(_Var3);
        if (iVar4 == 0) {
          _Var2 = getuid();
          iVar4 = setuid(_Var2);
          if (iVar4 == 0) {
            _Var1 = getpid();
            FUN_000192f0(2,"switching uid to %u and gid to %u permanently (pid %d)\n",__uid,__gid,
                         _Var1);
            iVar4 = setgid(__gid);
            if ((iVar4 != 0) || (iVar4 = setuid(__uid), iVar4 != 0)) {
              _Var1 = getpid();
              piVar5 = __errno_location();
              pcVar6 = strerror(*piVar5);
              FUN_000192f0(5,"error switching uid to %u and gid to %u (pid %d): %s\n",__uid,__gid,
                           _Var1,pcVar6);
              return 1;
            }
            if ((__uid != 0) &&
               ((iVar4 = setuid(0), iVar4 != -1 || (iVar4 = seteuid(0), iVar4 != -1)))) {
              _Var1 = getpid();
              FUN_000192f0(5,"failed to switch user permanently, able to switch back (pid %d)\n",
                           _Var1);
              return 1;
            }
            iVar4 = chdir("/");
            if (iVar4 != 0) {
              piVar5 = __errno_location();
              pcVar6 = strerror(*piVar5);
              FUN_000192f0(5,"failed to change current directory to root path: %s\n",pcVar6);
              return 0xffffffff;
            }
            return 0;
          }
        }
        _Var1 = getpid();
        piVar5 = __errno_location();
        pcVar6 = strerror(*piVar5);
        FUN_000192f0(5,"error getting rid of euid != uid (pid %d): %s\n",_Var1,pcVar6);
        uVar7 = 1;
      }
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x88);
      _Var1 = getpid();
      FUN_000192f0(5,"current egid (%u) does not match gid of log configuration (%u) (pid %d)\n",
                   __gid,uVar7,_Var1);
      uVar7 = 1;
    }
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x84);
    _Var1 = getpid();
    FUN_000192f0(5,"current euid (%u) does not match uid of log configuration (%u) (pid %d)\n",__uid
                 ,uVar7,_Var1);
    uVar7 = 1;
  }
  return uVar7;
}



/* ===== FUN_00019a4c @ 00019a4c size=56 ===== */

undefined4 FUN_00019a4c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019634(DAT_000372e0,DAT_000372e4);
  return uVar1;
}



/* ===== FUN_00019a84 @ 00019a84 size=132 ===== */

undefined4 FUN_00019a84(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_000372e4;
  uVar1 = DAT_000372e0;
  uVar3 = FUN_00019634(DAT_000372e0,DAT_000372e4);
  DAT_000372e0 = uVar1;
  DAT_000372e4 = uVar2;
  return uVar3;
}



/* ===== FUN_00019b08 @ 00019b08 size=352 ===== */

int FUN_00019b08(char *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  stat64 sStack_78;
  uint local_10;
  int local_c;
  
  if (param_3 == 0) {
    iVar2 = 0x8900;
  }
  else {
    iVar2 = 0x8902;
  }
  local_c = open64(param_1,iVar2);
  if (-1 < local_c) {
    iVar2 = fstat64(local_c,&sStack_78);
    if (iVar2 == 0) {
      if ((sStack_78.st_mode & 0xf000) == 0x8000) {
        if ((sStack_78.st_nlink == 1) || ((*(uint *)(param_2 + 0x70) & 0x10000) != 0)) {
          local_10 = fcntl64(local_c,3);
          if (local_10 == 0xffffffff) {
            close(local_c);
            local_c = -1;
          }
          else {
            iVar2 = fcntl64(local_c,4,local_10 & 0xfffff7ff);
            if (iVar2 == -1) {
              close(local_c);
              local_c = -1;
            }
          }
        }
        else {
          close(local_c);
          piVar1 = __errno_location();
          *piVar1 = 0x5f;
          local_c = -1;
        }
      }
      else {
        close(local_c);
        piVar1 = __errno_location();
        *piVar1 = 0x5f;
        local_c = -1;
      }
    }
    else {
      close(local_c);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_00019c68 @ 00019c68 size=212 ===== */

void FUN_00019c68(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  char local_15;
  char *local_14;
  
  local_14 = param_1;
  do {
    while( true ) {
      pcVar2 = strchr(local_14,0x5c);
      if (pcVar2 == (char *)0x0) {
        return;
      }
      if (pcVar2[1] != '\\') break;
      local_15 = '\\';
LAB_00019cd0:
      local_14 = pcVar2 + 1;
      *pcVar2 = local_15;
      sVar1 = strlen(pcVar2 + 2);
      memmove(local_14,pcVar2 + 2,sVar1 + 1);
    }
    if (pcVar2[1] == 'n') {
      local_15 = '\n';
      goto LAB_00019cd0;
    }
    local_14 = pcVar2 + 1;
  } while( true );
}



/* ===== FUN_00019d3c @ 00019d3c size=384 ===== */

undefined4 FUN_00019d3c(uint param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint local_1c;
  uint local_14;
  
  local_1c = param_1;
  if (param_1 < 0x40) {
    local_1c = 0x40;
  }
  if (0x2000 < local_1c) {
    local_1c = 0x2000;
  }
  FUN_000192f0(2,"Allocating hash table for state file, size %lu entries\n",local_1c);
  DAT_000372d4 = calloc(local_1c,4);
  if (DAT_000372d4 == (void *)0x0) {
    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","allocateHash",0x137);
    uVar2 = 1;
  }
  else {
    for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
      puVar3 = (undefined4 *)((int)DAT_000372d4 + local_14 * 4);
      pvVar1 = malloc(4);
      *puVar3 = pvVar1;
      if (*(int *)((int)DAT_000372d4 + local_14 * 4) == 0) {
        FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","allocateHash",0x13e);
        return 1;
      }
      **(undefined4 **)((int)DAT_000372d4 + local_14 * 4) = 0;
    }
    DAT_000372d8 = local_1c;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00019ebc @ 00019ebc size=160 ===== */

undefined4 FUN_00019ebc(byte *param_1)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  byte *local_14;
  int local_c;
  
  local_c = 0;
  local_14 = param_1;
  if (DAT_000372d8 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (; *local_14 != 0; local_14 = local_14 + 1) {
      local_c = local_c * 0xd + (uint)*local_14;
    }
    FUN_00022580(local_c,DAT_000372d8);
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_00019f5c @ 00019f5c size=96 ===== */

int FUN_00019f5c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    iVar1 = 0;
  }
  else {
    iVar1 = dup2(param_1,param_2);
    if (iVar1 == 0) {
      close(param_1);
    }
  }
  return iVar1;
}



/* ===== FUN_00019fbc @ 00019fbc size=44 ===== */

undefined4 FUN_00019fbc(void)

{
  return 0;
}



/* ===== FUN_00019fe8 @ 00019fe8 size=52 ===== */

undefined4 FUN_00019fe8(void)

{
  return 0;
}



/* ===== FUN_0001a01c @ 0001a01c size=32 ===== */

void FUN_0001a01c(void)

{
  return;
}



/* ===== FUN_0001a03c @ 0001a03c size=372 ===== */

int * FUN_0001a03c(char *param_1)

{
  char *pcVar1;
  time_t local_3c;
  tm tStack_38;
  int *local_c;
  
  FUN_000192f0(2,"Creating new state\n");
  localtime_r(&DAT_000372dc,&tStack_38);
  local_c = malloc(0xa8);
  if (local_c == (int *)0x0) {
    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","newState",0x1d4);
    local_c = (int *)0x0;
  }
  else {
    pcVar1 = strdup(param_1);
    *local_c = (int)pcVar1;
    if (*local_c == 0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","newState",0x1da);
      free(local_c);
      local_c = (int *)0x0;
    }
    else {
      local_c[0x26] = 0;
      local_c[0x27] = 0;
      memset(local_c + 1,0,0x2c);
      local_c[3] = tStack_38.tm_hour;
      local_c[4] = tStack_38.tm_mday;
      local_c[5] = tStack_38.tm_mon;
      local_c[6] = tStack_38.tm_year;
      local_c[9] = tStack_38.tm_isdst;
      local_3c = mktime((tm *)(local_c + 1));
      localtime_r(&local_3c,(tm *)(local_c + 1));
    }
  }
  return local_c;
}



/* ===== FUN_0001a1b0 @ 0001a1b0 size=388 ===== */

undefined4 * FUN_0001a1b0(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *local_c;
  
  iVar1 = FUN_00019ebc(param_1);
  if (iVar1 < 0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    local_c = (undefined4 *)**(undefined4 **)(DAT_000372d4 + iVar1 * 4);
    while ((local_c != (undefined4 *)0x0 && (iVar2 = strcmp(param_1,(char *)*local_c), iVar2 != 0)))
    {
      local_c = (undefined4 *)local_c[0x28];
    }
    if (local_c == (undefined4 *)0x0) {
      local_c = (undefined4 *)FUN_0001a03c(param_1);
      if (local_c == (undefined4 *)0x0) {
        local_c = (undefined4 *)0x0;
      }
      else {
        local_c[0x28] = **(undefined4 **)(DAT_000372d4 + iVar1 * 4);
        if (local_c[0x28] != 0) {
          *(undefined4 **)(**(int **)(DAT_000372d4 + iVar1 * 4) + 0xa4) = local_c + 0x28;
        }
        **(int **)(DAT_000372d4 + iVar1 * 4) = (int)local_c;
        local_c[0x29] = *(undefined4 *)(DAT_000372d4 + iVar1 * 4);
      }
    }
  }
  return local_c;
}



/* ===== FUN_0001a334 @ 0001a334 size=392 ===== */

undefined4 FUN_0001a334(int param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_10;
  __pid_t local_c;
  
  if (DAT_000372c8 == 0) {
    local_c = fork();
    if (local_c == -1) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_000192f0(5,"cannot fork: %s\n",pcVar2);
      local_10 = 1;
    }
    else {
      if (local_c == 0) {
        if (((*(uint *)(param_1 + 0x70) & 0x800) != 0) && (iVar3 = FUN_00019a84(), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        execl("/bin/sh","sh",&DAT_00024058,param_4,"logrotate_script",param_2,param_3,0);
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        FUN_000192f0(5,"cannot execute sub-shell: %s\n",pcVar2);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      wait(&local_10);
    }
  }
  else {
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_00024018;
    }
    FUN_000192f0(2,"running script with args %s %s: \"%s\"\n",param_2,param_3,param_4);
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_0001a4bc @ 0001a4bc size=1064 ===== */

int FUN_0001a4bc(char *param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  size_t sVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  __uid_t _Var5;
  undefined4 uVar6;
  undefined4 uVar7;
  tm tStack_c4;
  stat64 sStack_98;
  char *local_2c;
  char *local_28;
  size_t local_24;
  size_t local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = -1;
  local_1c = 0;
  local_18 = 0;
  while( true ) {
    if (((1 < local_18) ||
        (local_14 = open64(param_1,param_2 | 0x80c0,*(uint *)(param_3 + 0x10) & 0x180),
        -1 < local_14)) || (piVar2 = __errno_location(), *piVar2 != 0x11)) {
      if (local_14 < 0) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        FUN_000192f0(5,"error creating output file %s: %s\n",param_1,pcVar3);
        local_14 = -1;
      }
      else {
        iVar4 = fchmod(local_14,*(uint *)(param_3 + 0x10) & 0x180);
        if (iVar4 == 0) {
          iVar4 = fstat64(local_14,&sStack_98);
          if (iVar4 == 0) {
            _Var5 = geteuid();
            if (((_Var5 == 0) &&
                ((sStack_98.st_uid != *(__uid_t *)(param_3 + 0x18) ||
                 (sStack_98.st_gid != *(__gid_t *)(param_3 + 0x1c))))) &&
               (iVar4 = fchown(local_14,*(__uid_t *)(param_3 + 0x18),*(__gid_t *)(param_3 + 0x1c)),
               iVar4 != 0)) {
              uVar7 = *(undefined4 *)(param_3 + 0x18);
              uVar6 = *(undefined4 *)(param_3 + 0x1c);
              piVar2 = __errno_location();
              pcVar3 = strerror(*piVar2);
              FUN_000192f0(5,"error setting owner of %s to uid %u and gid %u: %s\n",param_1,uVar7,
                           uVar6,pcVar3);
              close(local_14);
              local_14 = -1;
            }
            else if (((local_1c == 0) || (param_5 != 0)) &&
                    (iVar4 = fchmod(local_14,*(__mode_t *)(param_3 + 0x10)), iVar4 != 0)) {
              piVar2 = __errno_location();
              pcVar3 = strerror(*piVar2);
              FUN_000192f0(5,"error setting mode of %s: %s\n",param_1,pcVar3);
              close(local_14);
              local_14 = -1;
            }
          }
          else {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            FUN_000192f0(5,"fstat of %s failed: %s\n",param_1,pcVar3);
            close(local_14);
            local_14 = -1;
          }
        }
        else {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          FUN_000192f0(5,"error setting mode of %s: %s\n",param_1,pcVar3);
          close(local_14);
          local_14 = -1;
        }
      }
      return local_14;
    }
    localtime_r(&DAT_000372dc,&tStack_c4);
    local_20 = strlen(param_1);
    local_24 = local_20 + 0x13;
    local_28 = malloc(local_24);
    if (local_28 == (char *)0x0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","createOutputFile",0x250);
      return -1;
    }
    local_2c = local_28;
    strcpy(local_28,param_1);
    local_2c = local_2c + local_20;
    local_24 = local_24 - local_20;
    sVar1 = strftime(local_2c,local_24,"-%Y%m%d%H",&tStack_c4);
    uVar6 = s__backup_000240a8._4_4_;
    local_2c = local_2c + sVar1;
    *(undefined4 *)local_2c = s__backup_000240a8._0_4_;
    *(undefined4 *)(local_2c + 4) = uVar6;
    FUN_000192f0(5,"destination %s already exists, renaming to %s\n",param_1,local_28);
    iVar4 = rename(param_1,local_28);
    if (iVar4 != 0) break;
    free(local_28);
    local_18 = local_18 + 1;
  }
  piVar2 = __errno_location();
  pcVar3 = strerror(*piVar2);
  FUN_000192f0(5,"error renaming already existing output file %s to %s: %s\n",param_1,local_28,
               pcVar3);
  free(local_28);
  return -1;
}



/* ===== FUN_0001a8e4 @ 0001a8e4 size=988 ===== */

int FUN_0001a8e4(int param_1,char *param_2,undefined4 *param_3)

{
  char **ppcVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  stat64 sStack_a0;
  uint local_38;
  char *local_34 [6];
  char acStack_1c [12];
  __pid_t local_10;
  int local_c;
  
  local_c = 0;
  if (param_3[0x14] != 0) {
    FUN_000192f0(2,"running preremove script\n");
    iVar2 = FUN_0001a334(param_3,param_2,0,param_3[0x14]);
    if (iVar2 != 0) {
      FUN_000192f0(5,"error running preremove script for %s of \'%s\'. Not removing this file.\n",
                   param_2,*param_3);
      return 1;
    }
  }
  if ((param_3[0x1c] & 0x400) != 0) {
    if ((param_3[0x1c] & 0x10000) == 0) {
      iVar2 = fstat64(param_1,&sStack_a0);
      if (iVar2 != 0) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        FUN_000192f0(5,"cannot stat %s: %s\n",param_2,pcVar4);
        return 1;
      }
      if (sStack_a0.st_nlink != 1) {
        FUN_000192f0(5,
                     "failed to shred \"%s\", because shredding files with multiple hard links is disabled for %s.\n"
                     ,param_2,*param_3);
        return 1;
      }
    }
    FUN_000192f0(2,"Using shred to remove the file %s\n",param_2);
    ppcVar1 = local_34 + local_c;
    local_c = local_c + 1;
    *ppcVar1 = "shred";
    ppcVar1 = local_34 + local_c;
    local_c = local_c + 1;
    *ppcVar1 = "-u";
    if (param_3[0x1d] != 0) {
      ppcVar1 = local_34 + local_c;
      local_c = local_c + 1;
      *ppcVar1 = "-n";
      snprintf(acStack_1c,0xc,"%d",param_3[0x1d]);
      ppcVar1 = local_34 + local_c;
      local_c = local_c + 1;
      *ppcVar1 = acStack_1c;
    }
    ppcVar1 = local_34 + local_c;
    local_c = local_c + 1;
    *ppcVar1 = "-";
    ppcVar1 = local_34 + local_c;
    local_c = local_c + 1;
    *ppcVar1 = (char *)0x0;
    local_10 = fork();
    if (local_10 == -1) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      FUN_000192f0(5,"cannot fork: %s\n",pcVar4);
      return 1;
    }
    if (local_10 == 0) {
      FUN_00019f5c(param_1,1);
      iVar2 = FUN_00019794(param_3);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      execvp(local_34[0],local_34);
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      FUN_000192f0(5,"cannot execute shred command: %s\n",pcVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    wait(&local_38);
    if (((local_38 & 0x7f) != 0) || (((int)local_38 >> 8 & 0xffU) != 0)) {
      FUN_000192f0(5,"Failed to shred %s, trying unlink\n",param_2);
      iVar2 = unlink(param_2);
      return iVar2;
    }
  }
  iVar2 = unlink(param_2);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    piVar3 = __errno_location();
    if (*piVar3 == 2) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      FUN_000192f0(5,"error unlinking log file %s: %s\n",param_2,pcVar4);
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  return iVar2;
}



/* ===== FUN_0001acc0 @ 0001acc0 size=296 ===== */

undefined4 FUN_0001acc0(undefined4 param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_10;
  int local_c;
  
  local_c = -1;
  local_10 = 0;
  FUN_000192f0(2,"removing old log %s\n",param_1);
  if (((*(uint *)(param_2 + 0x70) & 0x400) == 0) ||
     (local_c = FUN_00019b08(param_1,param_2,1), -1 < local_c)) {
    if ((DAT_000372c8 == 0) && (iVar3 = FUN_0001a8e4(local_c,param_1,param_2), iVar3 != 0)) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_000192f0(5,"Failed to remove old log %s: %s\n",param_1,pcVar2);
      local_10 = 1;
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  else {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    FUN_000192f0(5,"error opening %s: %s\n",param_1,pcVar2);
    local_10 = 1;
  }
  return local_10;
}



/* ===== FUN_0001ade8 @ 0001ade8 size=92 ===== */

void FUN_0001ade8(int param_1,undefined4 param_2,int param_3)

{
  timespec local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18.tv_sec = *(__time_t *)(param_3 + 0x48);
  local_18.tv_nsec = *(long *)(param_3 + 0x4c);
  local_10 = *(undefined4 *)(param_3 + 0x50);
  uStack_c = *(undefined4 *)(param_3 + 0x54);
  futimens(param_1,&local_18);
  return;
}



/* ===== FUN_0001ae44 @ 0001ae44 size=1860 ===== */

undefined4 FUN_0001ae44(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char acStack_1044 [4096];
  char *local_44;
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38;
  uint local_34;
  char *local_30;
  ssize_t local_2c;
  char **local_28;
  __pid_t local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_000192f0(2,"compressing log with: %s\n",*(undefined4 *)(param_2 + 0x60));
  if (DAT_000372c8 == 0) {
    local_1c = FUN_00019b08(param_1,param_2,*(uint *)(param_2 + 0x70) & 0x400);
    if (local_1c < 0) {
      if ((*(uint *)(param_2 + 0x70) & 0x400) == 0) {
        uVar1 = 0x43a4;
      }
      else {
        uVar1 = 0x4398;
      }
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      FUN_000192f0(5,"unable to open %s (%s) for compression: %s\n",param_1,uVar1 | 0x20000,pcVar3);
      uVar5 = 1;
    }
    else {
      iVar4 = FUN_00019fbc(local_1c,param_1,auStack_40);
      if (iVar4 == 0) {
        iVar4 = asprintf(&local_30,"%s%s",param_1,*(undefined4 *)(param_2 + 0x68));
        if (iVar4 < 0) {
          FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","compressLogFile",0x36b);
          close(local_1c);
          uVar5 = 1;
        }
        else {
          local_20 = FUN_0001a4bc(local_30,2,param_3,DAT_000372d0,0);
          FUN_0001a01c(auStack_40);
          if (local_20 < 0) {
            close(local_1c);
            free(local_30);
            uVar5 = 1;
          }
          else {
            iVar4 = pipe(&local_3c);
            if (iVar4 < 0) {
              piVar2 = __errno_location();
              pcVar3 = strerror(*piVar2);
              FUN_000192f0(5,"error opening pipe for compress: %s\n",pcVar3);
              close(local_1c);
              close(local_20);
              free(local_30);
              uVar5 = 1;
            }
            else {
              local_24 = fork();
              if (local_24 == -1) {
                piVar2 = __errno_location();
                pcVar3 = strerror(*piVar2);
                FUN_000192f0(5,"cannot fork: %s\n",pcVar3);
                close(local_1c);
                close(local_20);
                close(local_38);
                close(local_3c);
                free(local_30);
                uVar5 = 1;
              }
              else {
                if (local_24 == 0) {
                  close(local_3c);
                  free(local_30);
                  FUN_00019f5c(local_1c,0);
                  FUN_00019f5c(local_20,1);
                  iVar4 = FUN_00019794(param_2);
                  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                    exit(1);
                  }
                  FUN_00019f5c(local_38,2);
                  iVar4 = asprintf(&local_44,"LOGROTATE_COMPRESSED_FILENAME=%s",param_1);
                  if (-1 < iVar4) {
                    putenv(local_44);
                    local_28 = malloc((*(int *)(param_2 + 0x9c) + 2) * 4);
                    if (local_28 != (char **)0x0) {
                      *local_28 = *(char **)(param_2 + 0x60);
                      for (local_14 = 0; local_14 < *(int *)(param_2 + 0x9c);
                          local_14 = local_14 + 1) {
                        local_28[local_14 + 1] = *(char **)(*(int *)(param_2 + 0x98) + local_14 * 4)
                        ;
                      }
                      local_28[*(int *)(param_2 + 0x9c) + 1] = (char *)0x0;
                      execvp(*local_28,local_28);
                      pcVar6 = *local_28;
                      piVar2 = __errno_location();
                      pcVar3 = strerror(*piVar2);
                      FUN_000192f0(5,"cannot execute compress command \'%s\': %s\n",pcVar6,pcVar3);
                    /* WARNING: Subroutine does not return */
                      exit(1);
                    }
                    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","compressLogFile",0x3b3);
                    /* WARNING: Subroutine does not return */
                    exit(1);
                  }
                  FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","compressLogFile",0x3aa);
                    /* WARNING: Subroutine does not return */
                  exit(1);
                }
                close(local_38);
                local_18 = 0;
                do {
                  while (local_2c = read(local_3c,acStack_1044,0xfff), -1 < local_2c) {
                    if (local_2c == 0) goto LAB_0001b468;
                    if (local_18 == 0) {
                      local_18 = 1;
                      FUN_000192f0(5,
                                   "Compressing program wrote following message to stderr when compressing log %s:\n"
                                   ,param_1);
                    }
                    acStack_1044[local_2c] = '\0';
                    fputs(acStack_1044,stderr);
                  }
                  piVar2 = __errno_location();
                } while (*piVar2 == 4);
LAB_0001b468:
                close(local_3c);
                wait(&local_34);
                fsync(local_20);
                if (((local_34 & 0x7f) == 0) && (((int)local_34 >> 8 & 0xffU) == 0)) {
                  FUN_0001ade8(local_20,local_30,param_3);
                  close(local_20);
                  free(local_30);
                  iVar4 = FUN_0001a8e4(local_1c,param_1,param_2);
                  if (iVar4 == 0) {
                    close(local_1c);
                    uVar5 = 0;
                  }
                  else {
                    close(local_1c);
                    uVar5 = 1;
                  }
                }
                else {
                  FUN_000192f0(5,"failed to compress log %s\n",param_1);
                  close(local_1c);
                  close(local_20);
                  unlink(local_30);
                  free(local_30);
                  uVar5 = 1;
                }
              }
            }
          }
        }
      }
      else {
        close(local_1c);
        uVar5 = 1;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== FUN_0001b588 @ 0001b588 size=988 ===== */

undefined4
FUN_0001b588(int param_1,undefined4 param_2,char *param_3,char *param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  __pid_t local_18;
  undefined4 local_14;
  __pid_t local_10;
  int local_c;
  
  local_10 = 0;
  local_38 = &DAT_000244c8;
  local_34 = param_6;
  local_30 = param_5;
  local_2c = 0;
  local_14 = 0;
  local_3c = param_3;
  local_c = FUN_00019b08(param_2,param_1,0);
  if (local_c < 0) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    FUN_000192f0(5,"failed to open %s for mailing: %s\n",param_2,pcVar2);
    return 1;
  }
  if (param_4 != (char *)0x0) {
    iVar3 = pipe(&local_28);
    if (iVar3 < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_000192f0(5,"error opening pipe for uncompress: %s\n",pcVar2);
      close(local_c);
      return 1;
    }
    local_10 = fork();
    if (local_10 == -1) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_000192f0(5,"cannot fork: %s\n",pcVar2);
      close(local_c);
      close(local_24);
      close(local_28);
      return 1;
    }
    if (local_10 == 0) {
      close(local_28);
      FUN_00019f5c(local_c,0);
      FUN_00019f5c(local_24,1);
      iVar3 = FUN_00019794(param_1);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      execlp(param_4,param_4,0);
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_000192f0(5,"cannot execute uncompress command: %s\n",pcVar2);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    close(local_c);
    local_c = local_28;
    close(local_24);
  }
  local_18 = fork();
  if (local_18 == -1) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    FUN_000192f0(5,"cannot fork: %s\n",pcVar2);
    close(local_c);
    local_14 = 1;
  }
  else {
    if (local_18 == 0) {
      FUN_00019f5c(local_c,0);
      close(1);
      if (((*(uint *)(param_1 + 0x70) & 0x800) != 0) && (iVar3 = FUN_00019a84(), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      execvp(local_3c,&local_3c);
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_000192f0(5,"cannot execute mail command: %s\n",pcVar2);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    close(local_c);
    waitpid(local_18,(int *)&local_1c,0);
    if (((local_1c & 0x7f) != 0) || (((int)local_1c >> 8 & 0xffU) != 0)) {
      FUN_000192f0(5,"mail command failed for %s\n",param_2);
      local_14 = 1;
    }
    if ((param_4 != (char *)0x0) &&
       ((waitpid(local_10,(int *)&local_20,0), (local_20 & 0x7f) != 0 ||
        (((int)local_20 >> 8 & 0xffU) != 0)))) {
      FUN_000192f0(5,"uncompress command failed mailing %s\n",param_2);
      local_14 = 1;
    }
  }
  return local_14;
}



/* ===== FUN_0001b964 @ 0001b964 size=220 ===== */

undefined4 FUN_0001b964(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((*(uint *)(param_4 + 0x70) & 1) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(param_4 + 100);
  }
  local_10 = param_1;
  if ((*(uint *)(param_4 + 0x70) & 0x40) != 0) {
    if ((*(uint *)(param_4 + 0x70) & 8) != 0) {
      local_c = 0;
    }
    if (local_c != 0) {
      local_10 = *(undefined4 *)(*(int *)(param_4 + 4) + param_3 * 4);
    }
  }
  uVar1 = FUN_0001b588(param_4,param_1,param_2,local_c,*(undefined4 *)(param_4 + 0x54),local_10);
  return uVar1;
}



/* ===== FUN_0001ba40 @ 0001ba40 size=132 ===== */

undefined4 FUN_0001ba40(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if (((*(uint *)(param_1 + 0x10) & 0xf000) == 0x8000) && (*(int *)(param_1 + 0x38) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x40);
    iVar3 = *(int *)(param_1 + 0x44);
    uVar5 = FUN_000225a0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                         *(int *)(param_1 + 0x38),*(int *)(param_1 + 0x38) >> 0x1f);
    iVar1 = (int)((ulonglong)uVar5 >> 0x20);
    bVar4 = uVar2 < (uint)uVar5;
    if ((int)(iVar3 - (iVar1 + (uint)bVar4)) < 0 !=
        (SBORROW4(iVar3,iVar1) != SBORROW4(iVar3 - iVar1,(uint)bVar4))) {
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_0001bac4 @ 0001bac4 size=116 ===== */

bool FUN_0001bac4(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *local_c;
  
  local_c = param_1;
  do {
    pcVar2 = local_c + 1;
    cVar1 = *local_c;
    local_c = pcVar2;
  } while (cVar1 == '\0');
  return param_1 + param_2 < pcVar2;
}



/* ===== FUN_0001bb38 @ 0001bb38 size=224 ===== */

int FUN_0001bb38(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  size_t local_24;
  void *local_10;
  int local_c;
  
  local_c = 0;
  local_24 = param_3;
  local_10 = param_2;
  do {
    if (local_24 == 0) {
      return local_c;
    }
    do {
      sVar1 = write(param_1,local_10,local_24);
      if (sVar1 != -1) break;
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    if (sVar1 == -1) {
      return local_c;
    }
    if (sVar1 == 0) {
      return local_c;
    }
    local_c = local_c + sVar1;
    local_10 = (void *)((int)local_10 + sVar1);
    local_24 = local_24 - sVar1;
  } while( true );
}



/* ===== FUN_0001bc18 @ 0001bc18 size=836 ===== */

undefined4
FUN_0001bc18(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  size_t __nbytes;
  undefined8 uVar4;
  __off64_t _Var5;
  undefined1 auStack_102c [4100];
  ssize_t local_28;
  ssize_t local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  int local_10;
  uint local_c;
  
  local_20 = FUN_0001ba40(param_3);
  local_c = 0xffffffff;
  local_10 = 0;
  local_18 = 0;
  while (local_c != 0) {
    local_1c = 0;
    __nbytes = local_c;
    if (0xfff < local_c) {
      __nbytes = 0x1000;
    }
    local_24 = read(param_1,auStack_102c,__nbytes);
    if (local_24 < 0) {
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        FUN_000192f0(5,"error reading %s: %s\n",param_5,pcVar3);
        return 0;
      }
    }
    else {
      if (local_24 == 0) break;
      local_c = local_c - local_24;
      uVar4 = VectorShiftRight(CONCAT44(local_24,local_24),0x20);
      local_18 = CONCAT44((int)((ulonglong)uVar4 >> 0x20) + local_18._4_4_ +
                          (uint)CARRY4((uint)uVar4,(uint)local_18),(uint)uVar4 + (uint)local_18);
      local_28 = local_24;
      if (local_20 != 0) {
        auStack_102c[local_24] = 1;
        local_1c = FUN_0001bac4(auStack_102c,local_24);
        if ((local_1c != 0) && (_Var5 = lseek64(param_2,(longlong)local_24,1), _Var5 < 0)) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          FUN_000192f0(5,"error seeking %s: %s\n",param_4,pcVar3);
          return 0;
        }
      }
      if ((local_1c == 0) &&
         (iVar1 = FUN_0001bb38(param_2,auStack_102c,local_28), local_28 != iVar1)) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        FUN_000192f0(5,"error writing to %s: %s\n",param_4,pcVar3);
        return 0;
      }
      local_10 = local_1c;
    }
  }
  if ((local_10 != 0) && (iVar1 = ftruncate64(param_2,local_18), iVar1 < 0)) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    FUN_000192f0(5,"error ftruncate %s: %s\n",param_4,pcVar3);
    return 0;
  }
  return 1;
}



/* ===== FUN_0001bf5c @ 0001bf5c size=764 ===== */

undefined4 FUN_0001bf5c(char *param_1,char *param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 auStack_1c [4];
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_c = 1;
  local_10 = -1;
  local_14 = -1;
  if (param_5 == 0) {
    uVar5 = 0x4018;
  }
  else {
    uVar5 = 0x460c;
  }
  pcVar4 = param_2;
  FUN_000192f0(2,"%scopying %s to %s\n",uVar5 | 0x20000,param_1,param_2);
  if (DAT_000372c8 == 0) {
    if (((*(uint *)(param_4 + 0x70) & 0x100) == 0) || ((*(uint *)(param_4 + 0x70) & 0x10) != 0)) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    local_10 = FUN_00019b08(param_1,param_4,local_18 == 0);
    if (local_10 < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_000192f0(5,"error opening %s: %s\n",param_1,pcVar2,pcVar4);
      goto LAB_0001c220;
    }
    if (param_5 == 0) {
      iVar3 = FUN_00019fbc(local_10,param_1,auStack_1c);
      if (iVar3 != 0) goto LAB_0001c220;
      local_14 = FUN_0001a4bc(param_2,1,param_3,DAT_000372d0,0);
      FUN_0001a01c(auStack_1c);
      if (local_14 < 0) goto LAB_0001c220;
      pcVar4 = param_1;
      iVar3 = FUN_0001bc18(local_10,local_14,param_3,param_2,param_1);
      if (iVar3 != 1) {
        piVar1 = __errno_location();
        pcVar4 = strerror(*piVar1);
        FUN_000192f0(5,"error copying %s to %s: %s\n",param_1,param_2,pcVar4);
        unlink(param_2);
        goto LAB_0001c220;
      }
    }
  }
  uVar5 = *(uint *)(param_4 + 0x70) & 0x10;
  if (uVar5 == 0) {
    FUN_000192f0(2,"Not truncating %s\n",param_1,0,pcVar4);
  }
  else {
    FUN_000192f0(2,"truncating %s\n",param_1,uVar5,pcVar4);
    if (DAT_000372c8 == 0) {
      if (-1 < local_14) {
        fsync(local_14);
      }
      iVar3 = ftruncate64(local_10,0);
      if (iVar3 != 0) {
        piVar1 = __errno_location();
        pcVar4 = strerror(*piVar1);
        FUN_000192f0(5,"error truncating %s: %s\n",param_1,pcVar4);
        goto LAB_0001c220;
      }
    }
  }
  local_c = 0;
LAB_0001c220:
  if (-1 < local_10) {
    close(local_10);
  }
  if (-1 < local_14) {
    close(local_14);
  }
  return local_c;
}



/* ===== FUN_0001c258 @ 0001c258 size=88 ===== */

time_t FUN_0001c258(void *param_1)

{
  time_t tVar1;
  tm local_34;
  
  memcpy(&local_34,param_1,0x2c);
  local_34.tm_hour = 0;
  local_34.tm_min = 0;
  local_34.tm_sec = 0;
  tVar1 = mktime(&local_34);
  return tVar1;
}



/* ===== FUN_0001c2b0 @ 0001c2b0 size=108 ===== */

undefined4 FUN_0001c2b0(undefined4 param_1,undefined4 param_2)

{
  time_t __time1;
  time_t __time0;
  undefined4 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  __time1 = FUN_0001c258(param_1);
  __time0 = FUN_0001c258(param_2);
  dVar2 = difftime(__time1,__time0);
  local_18 = SUB84(dVar2,0);
  uStack_14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  uVar3 = FUN_00022684(local_18,uStack_14);
  uVar1 = FUN_000225a0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x15180,0);
  return uVar1;
}



/* ===== FUN_0001c31c @ 0001c31c size=2836 ===== */

undefined4 FUN_0001c31c(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  __uid_t _Var2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  time_t __time1;
  time_t __time0;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint in_fpscr;
  uint uVar11;
  double dVar12;
  double dVar13;
  tm tStack_bc;
  stat64 sStack_90;
  int local_28;
  int local_24;
  char *local_20;
  char *local_1c;
  
  FUN_000192f0(2,"considering log %s\n",*(undefined4 *)(param_1[1] + param_2 * 4));
  localtime_r(&DAT_000372dc,&tStack_bc);
  if (((param_1[0x1c] & 0x800) == 0) && (_Var2 = getuid(), _Var2 == 0)) {
    local_1c = strdup(*(char **)(param_1[1] + param_2 * 4));
    if (local_1c == (char *)0x0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","findNeedRotating",0x56d);
      return 1;
    }
    local_20 = dirname(local_1c);
    iVar3 = stat64(local_20,&sStack_90);
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      if ((*piVar4 == 2) && ((param_1[0x1c] & 0x20) != 0)) {
        free(local_1c);
        return 0;
      }
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      FUN_000192f0(5,"stat of %s failed: %s\n",local_20,pcVar5);
      free(local_1c);
      return 1;
    }
    if (((sStack_90.st_gid != 0) && ((sStack_90.st_mode & 0x10) != 0)) ||
       ((sStack_90.st_mode & 2) != 0)) {
      FUN_000192f0(5,
                   "skipping \"%s\" because parent directory has insecure permissions (It\'s world writable or writable by group which is not \"root\") Set \"su\" directive in config file to tell logrotate which user/group should be used for rotation.\n"
                   ,*(undefined4 *)(param_1[1] + param_2 * 4));
      free(local_1c);
      return 1;
    }
    free(local_1c);
  }
  iVar3 = lstat64(*(char **)(param_1[1] + param_2 * 4),&sStack_90);
  if (iVar3 == 0) {
    local_24 = FUN_0001a1b0(*(undefined4 *)(param_1[1] + param_2 * 4));
    if (local_24 == 0) {
      uVar7 = 1;
    }
    else {
      *(undefined4 *)(local_24 + 0x98) = 0;
      memcpy((void *)(local_24 + 0x30),&sStack_90,0x68);
      *(undefined4 *)(local_24 + 0x9c) = 1;
      if ((sStack_90.st_mode & 0xf000) == 0xa000) {
        FUN_000192f0(2,
                     "  log %s is symbolic link. Rotation of symbolic links is not allowed to avoid security issues -- skipping.\n"
                     ,*(undefined4 *)(param_1[1] + param_2 * 4));
        uVar7 = 0;
      }
      else if (((param_1[0x1c] & 0x10000) == 0) && (sStack_90.st_nlink != 1)) {
        FUN_000192f0(2,
                     "  log %s has multiple (%lu) hard links. Rotation of files with multiple hard links is not allowed for %s -- skipping.\n"
                     ,*(undefined4 *)(param_1[1] + param_2 * 4),sStack_90.st_nlink,*param_1);
        uVar7 = 0;
      }
      else {
        FUN_000192f0(2,"  Now: %d-%02d-%02d %02d:%02d\n",tStack_bc.tm_year + 0x76c,
                     tStack_bc.tm_mon + 1,tStack_bc.tm_mday,tStack_bc.tm_hour,tStack_bc.tm_min);
        uVar8 = *(undefined4 *)(local_24 + 0x10);
        uVar6 = *(undefined4 *)(local_24 + 0xc);
        uVar7 = *(undefined4 *)(local_24 + 8);
        FUN_000192f0(2,"  Last rotated at %d-%02d-%02d %02d:%02d\n",
                     *(int *)(local_24 + 0x18) + 0x76c,*(int *)(local_24 + 0x14) + 1,uVar8,uVar6,
                     uVar7);
        if (param_3 == 0) {
          if ((param_1[8] == 0 && param_1[9] == 0) ||
             (iVar3 = param_1[9],
             (int)(iVar3 - (sStack_90.st_size._4_4_ +
                           (uint)((uint)param_1[8] < (uint)sStack_90.st_size))) < 0 ==
             (SBORROW4(iVar3,sStack_90.st_size._4_4_) !=
             SBORROW4(iVar3 - sStack_90.st_size._4_4_,
                      (uint)((uint)param_1[8] < (uint)sStack_90.st_size))))) {
            if (param_1[4] == 5) {
              iVar3 = param_1[7];
              uVar9 = (uint)((int)(sStack_90.st_size._4_4_ -
                                  (iVar3 + (uint)((uint)sStack_90.st_size < (uint)param_1[6]))) < 0
                            == (SBORROW4(sStack_90.st_size._4_4_,iVar3) !=
                               SBORROW4(sStack_90.st_size._4_4_ - iVar3,
                                        (uint)((uint)sStack_90.st_size < (uint)param_1[6]))));
              *(uint *)(local_24 + 0x98) = uVar9;
              if (*(int *)(local_24 + 0x98) == 0) {
                FUN_000192f0(2,
                             "  log does not need rotating (log size is below the \'size\' threshold)\n"
                             ,uVar9,0,uVar8,uVar6,uVar7);
              }
            }
            else {
              __time1 = mktime((tm *)(local_24 + 4));
              __time0 = mktime(&tStack_bc);
              dVar12 = difftime(__time1,__time0);
              uVar9 = in_fpscr & 0xfffffff | (uint)(dVar12 < DAT_0001cc18) << 0x1f |
                      (uint)(dVar12 == DAT_0001cc18) << 0x1e;
              uVar11 = uVar9 | (uint)(NAN(dVar12) || NAN(DAT_0001cc18)) << 0x1c;
              bVar1 = (byte)(uVar9 >> 0x18);
              if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) {
                if ((((*(int *)(local_24 + 0x18) == tStack_bc.tm_year) &&
                     (*(int *)(local_24 + 0x14) == tStack_bc.tm_mon)) &&
                    (*(int *)(local_24 + 0x10) == tStack_bc.tm_mday)) &&
                   (*(int *)(local_24 + 0xc) == tStack_bc.tm_hour)) {
                  if (*(int *)(local_24 + 0x98) == 0) {
                    FUN_000192f0(2,"  log does not need rotating (log has already been rotated)\n",
                                 *(int *)(local_24 + 0xc),0,uVar8,uVar6,uVar7);
                  }
                }
                else {
                  switch(param_1[4]) {
                  case 0:
                    if (((tStack_bc.tm_hour == *(int *)(local_24 + 0xc)) &&
                        (tStack_bc.tm_mday == *(int *)(local_24 + 0x10))) &&
                       ((tStack_bc.tm_mon == *(int *)(local_24 + 0x14) &&
                        (tStack_bc.tm_year == *(int *)(local_24 + 0x18))))) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = 1;
                    }
                    *(undefined4 *)(local_24 + 0x98) = uVar10;
                    if (*(int *)(local_24 + 0x98) == 0) {
                      uVar8 = *(undefined4 *)(local_24 + 0x10);
                      uVar6 = *(undefined4 *)(local_24 + 0xc);
                      uVar7 = *(undefined4 *)(local_24 + 8);
                      FUN_000192f0(2,
                                   "  log does not need rotating (log has been rotated at %d-%02d-%02d %02d:%02d, which is less than an hour ago)\n"
                                   ,*(int *)(local_24 + 0x18) + 0x76c,*(int *)(local_24 + 0x14) + 1,
                                   uVar8,uVar6,uVar7);
                    }
                    break;
                  case 1:
                    if (((tStack_bc.tm_mday == *(int *)(local_24 + 0x10)) &&
                        (tStack_bc.tm_mon == *(int *)(local_24 + 0x14))) &&
                       (tStack_bc.tm_year == *(int *)(local_24 + 0x18))) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = 1;
                    }
                    *(undefined4 *)(local_24 + 0x98) = uVar10;
                    if (*(int *)(local_24 + 0x98) == 0) {
                      uVar8 = *(undefined4 *)(local_24 + 0x10);
                      uVar6 = *(undefined4 *)(local_24 + 0xc);
                      uVar7 = *(undefined4 *)(local_24 + 8);
                      FUN_000192f0(2,
                                   "  log does not need rotating (log has been rotated at %d-%02d-%02d %02d:%02d, which is less than a day ago)\n"
                                   ,*(int *)(local_24 + 0x18) + 0x76c,*(int *)(local_24 + 0x14) + 1,
                                   uVar8,uVar6,uVar7);
                    }
                    break;
                  case 2:
                    local_28 = FUN_0001c2b0(&tStack_bc,local_24 + 4);
                    if ((local_28 < 7) && ((local_28 < 1 || (tStack_bc.tm_wday != param_1[5])))) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = 1;
                    }
                    *(undefined4 *)(local_24 + 0x98) = uVar10;
                    if (*(int *)(local_24 + 0x98) == 0) {
                      uVar8 = *(undefined4 *)(local_24 + 0x10);
                      uVar6 = *(undefined4 *)(local_24 + 0xc);
                      uVar7 = *(undefined4 *)(local_24 + 8);
                      FUN_000192f0(2,
                                   "  log does not need rotating (log has been rotated at %d-%02d-%02d %02d:%02d, which is less than a week ago)\n"
                                   ,*(int *)(local_24 + 0x18) + 0x76c,*(int *)(local_24 + 0x14) + 1,
                                   uVar8,uVar6,uVar7);
                    }
                    break;
                  case 3:
                    if ((tStack_bc.tm_mon == *(int *)(local_24 + 0x14)) &&
                       (tStack_bc.tm_year == *(int *)(local_24 + 0x18))) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = 1;
                    }
                    *(undefined4 *)(local_24 + 0x98) = uVar10;
                    if (*(int *)(local_24 + 0x98) == 0) {
                      uVar8 = *(undefined4 *)(local_24 + 0x10);
                      uVar6 = *(undefined4 *)(local_24 + 0xc);
                      uVar7 = *(undefined4 *)(local_24 + 8);
                      FUN_000192f0(2,
                                   "  log does not need rotating (log has been rotated at %d-%02d-%02d %02d:%02d, which is less than a month ago)\n"
                                   ,*(int *)(local_24 + 0x18) + 0x76c,*(int *)(local_24 + 0x14) + 1,
                                   uVar8,uVar6,uVar7);
                    }
                    break;
                  case 4:
                    *(uint *)(local_24 + 0x98) =
                         (uint)(tStack_bc.tm_year != *(int *)(local_24 + 0x18));
                    if (*(int *)(local_24 + 0x98) == 0) {
                      uVar8 = *(undefined4 *)(local_24 + 0x10);
                      uVar6 = *(undefined4 *)(local_24 + 0xc);
                      uVar7 = *(undefined4 *)(local_24 + 8);
                      FUN_000192f0(2,
                                   "  log does not need rotating (log has been rotated at %d-%02d-%02d %02d:%02d, which is less than a year ago)\n"
                                   ,*(int *)(local_24 + 0x18) + 0x76c,*(int *)(local_24 + 0x14) + 1,
                                   uVar8,uVar6,uVar7);
                    }
                    break;
                  default:
                    *(undefined4 *)(local_24 + 0x98) = 0;
                  }
                  if ((param_1[10] != 0 || param_1[0xb] != 0) &&
                     (iVar3 = param_1[0xb],
                     (int)(sStack_90.st_size._4_4_ -
                          (iVar3 + (uint)((uint)sStack_90.st_size < (uint)param_1[10]))) < 0 !=
                     (SBORROW4(sStack_90.st_size._4_4_,iVar3) !=
                     SBORROW4(sStack_90.st_size._4_4_ - iVar3,
                              (uint)((uint)sStack_90.st_size < (uint)param_1[10]))))) {
                    *(undefined4 *)(local_24 + 0x98) = 0;
                    FUN_000192f0(2,
                                 "  log does not need rotating (\'minsize\' directive is used and the log size is smaller than the minsize value)\n"
                                 ,0,local_24,uVar8,uVar6,uVar7);
                  }
                  if (param_1[0xd] != 0) {
                    dVar13 = (double)VectorSignedToFloat(param_1[0xd] * 0x15180,
                                                         (byte)(uVar11 >> 0x16) & 3);
                    dVar12 = difftime(DAT_000372dc,sStack_90.st_mtim.tv_sec);
                    if (dVar12 <= dVar13) {
                      *(undefined4 *)(local_24 + 0x98) = 0;
                      FUN_000192f0(2,
                                   "  log does not need rotating (\'minage\' directive is used and the log age is smaller than the minage days)\n"
                                   ,0,local_24,uVar8,uVar6,uVar7);
                    }
                  }
                }
              }
              else {
                uVar10 = *(undefined4 *)(param_1[1] + param_2 * 4);
                FUN_000192f0(5,"log %s last rotated in the future -- rotation forced\n",uVar10,
                             uVar10,uVar8,uVar6,uVar7);
                *(undefined4 *)(local_24 + 0x98) = 1;
              }
            }
          }
          else {
            *(undefined4 *)(local_24 + 0x98) = 1;
          }
        }
        else {
          *(undefined4 *)(local_24 + 0x98) = 1;
        }
        if (((*(int *)(local_24 + 0x98) != 0) && ((param_1[0x1c] & 4) == 0)) &&
           ((uint)sStack_90.st_size == 0 && sStack_90.st_size._4_4_ == 0)) {
          *(undefined4 *)(local_24 + 0x98) = 0;
          FUN_000192f0(2,"  log does not need rotating (log is empty)\n",0,local_24,uVar8,uVar6,
                       uVar7);
        }
        if (*(int *)(local_24 + 0x98) != 0) {
          FUN_000192f0(2,"  log needs rotating\n");
        }
        uVar7 = 0;
      }
    }
  }
  else if (((param_1[0x1c] & 0x20) == 0) || (piVar4 = __errno_location(), *piVar4 != 2)) {
    uVar7 = *(undefined4 *)(param_1[1] + param_2 * 4);
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    FUN_000192f0(5,"stat of %s failed: %s\n",uVar7,pcVar5);
    uVar7 = 1;
  }
  else {
    FUN_000192f0(2,"  log %s does not exist -- skipping\n",*(undefined4 *)(param_1[1] + param_2 * 4)
                );
    uVar7 = 0;
  }
  return uVar7;
}



/* ===== FUN_0001ce4c @ 0001ce4c size=520 ===== */

int FUN_0001ce4c(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 uStack_59;
  int local_58;
  glob64_t local_54;
  char *local_30;
  size_t local_2c;
  char *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  iVar1 = asprintf(&local_30,"%s/%s.*%s%s",*(undefined4 *)(param_1 + 0xc),
                   *(undefined4 *)(param_1 + 0x10),param_2,param_3);
  if (iVar1 < 0) {
    local_18 = -1;
  }
  else {
    local_1c = glob64(local_30,0,FUN_00019460,&local_54);
    free(local_30);
    if (local_1c == 0) {
      sVar2 = strlen(*(char **)(param_1 + 0xc));
      sVar3 = strlen(*(char **)(param_1 + 0x10));
      local_20 = sVar2 + sVar3 + 2;
      sVar2 = strlen(param_2);
      sVar3 = strlen(param_3);
      local_24 = sVar2 + sVar3;
      for (local_14 = 0; local_14 < local_54.gl_pathc; local_14 = local_14 + 1) {
        local_28 = local_54.gl_pathv[local_14];
        local_2c = strlen(local_28);
        if ((uint)(local_20 + local_24) < local_2c) {
          local_28[local_2c - local_24] = '\0';
          local_28 = local_28 + local_20;
          iVar1 = sscanf(local_28,"%d%c",&local_58,&uStack_59);
          if ((iVar1 == 1) && (local_18 < local_58)) {
            local_18 = local_58;
          }
        }
      }
      globfree64(&local_54);
    }
    else if (local_1c == 3) {
      local_18 = 0;
    }
    else {
      local_18 = -1;
    }
  }
  return local_18;
}



/* ===== FUN_0001d054 @ 0001d054 size=6504 ===== */

int FUN_0001d054(int param_1,int param_2,int param_3,char **param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  bool bVar12;
  double dVar13;
  undefined8 uVar14;
  undefined *puVar15;
  stat64 sStack_288;
  char *local_21c;
  char *local_218;
  char *local_214;
  char acStack_210 [127];
  undefined1 local_191;
  char local_190 [128];
  char local_110 [64];
  glob64_t local_d0;
  char *local_ac;
  tm local_a8;
  char *local_7c;
  char *local_78;
  char *local_74;
  int local_70;
  size_t local_6c;
  char *local_68;
  size_t local_64;
  uint local_60;
  char *local_5c;
  size_t local_58;
  uint local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  undefined *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  char *local_28;
  char *local_24;
  uint local_20;
  int local_1c;
  undefined *local_18;
  undefined *local_14;
  
  local_14 = &DAT_00024018;
  local_18 = &DAT_00024018;
  local_1c = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_20 = 1;
  }
  else {
    local_20 = *(uint *)(param_1 + 0x30);
  }
  local_190[0] = '\0';
  local_190[1] = '\0';
  local_190[2] = '\0';
  local_190[3] = '\0';
  memset(local_190 + 4,0,0x7c);
  if (*(int *)(param_3 + 0x98) == 0) {
    local_1c = 0;
  }
  else {
    FUN_000192f0(2,"rotating log %s, log->rotateCount is %d\n",
                 *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),
                 *(undefined4 *)(param_1 + 0x30));
    if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
      if (*(int *)(param_1 + 0x68) == 0) {
        FUN_000192f0(5,"log %s: compression enabled, but compression extension is not set\n",
                     *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4));
        return 1;
      }
      local_14 = *(undefined **)(param_1 + 0x68);
    }
    localtime_r(&DAT_000372dc,&local_a8);
    *(int *)(param_3 + 4) = local_a8.tm_sec;
    *(int *)(param_3 + 8) = local_a8.tm_min;
    *(int *)(param_3 + 0xc) = local_a8.tm_hour;
    *(int *)(param_3 + 0x10) = local_a8.tm_mday;
    *(int *)(param_3 + 0x14) = local_a8.tm_mon;
    *(int *)(param_3 + 0x18) = local_a8.tm_year;
    *(int *)(param_3 + 0x1c) = local_a8.tm_wday;
    *(int *)(param_3 + 0x20) = local_a8.tm_yday;
    *(int *)(param_3 + 0x24) = local_a8.tm_isdst;
    *(long *)(param_3 + 0x28) = local_a8.tm_gmtoff;
    *(char **)(param_3 + 0x2c) = local_a8.tm_zone;
    local_48 = strdup(*(char **)(*(int *)(param_1 + 4) + param_2 * 4));
    if (local_48 == (char *)0x0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x69f);
      local_1c = 1;
    }
    else {
      local_4c = dirname(local_48);
      if (*(int *)(param_1 + 0xc) == 0) {
        pcVar3 = strdup(local_4c);
        param_4[3] = pcVar3;
      }
      else if (**(char **)(param_1 + 0xc) == '/') {
        pcVar3 = strdup(*(char **)(param_1 + 0xc));
        param_4[3] = pcVar3;
      }
      else {
        iVar2 = asprintf(param_4 + 3,"%s/%s",local_4c,*(undefined4 *)(param_1 + 0xc));
        if (iVar2 < 0) {
          param_4[3] = (char *)0x0;
        }
      }
      free(local_48);
      if (param_4[3] == (char *)0x0) {
        FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x6af);
        local_1c = 1;
      }
      else {
        local_50 = strdup(*(char **)(*(int *)(param_1 + 4) + param_2 * 4));
        if (local_50 == (char *)0x0) {
          FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x6b7);
          local_1c = 1;
        }
        else {
          pcVar3 = __xpg_basename(local_50);
          pcVar3 = strdup(pcVar3);
          param_4[4] = pcVar3;
          if (param_4[4] == (char *)0x0) {
            FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x6bd);
            free(local_50);
            local_1c = 1;
          }
          else {
            free(local_50);
            if (*(int *)(param_1 + 0x5c) != 0) {
              local_54 = strlen(param_4[4]);
              local_58 = strlen(*(char **)(param_1 + 0x5c));
              if ((local_58 <= local_54) &&
                 (iVar2 = strncmp(param_4[4] + (local_54 - local_58),*(char **)(param_1 + 0x5c),
                                  local_58), iVar2 == 0)) {
                local_5c = strndup(param_4[4],local_54 - local_58);
                if (local_5c == (char *)0x0) {
                  FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x6ce);
                  return 1;
                }
                free(param_4[4]);
                param_4[4] = local_5c;
              }
              local_18 = *(undefined **)(param_1 + 0x5c);
            }
            if (*(int *)(param_1 + 0x58) != 0) {
              local_60 = strlen(param_4[4]);
              local_64 = strlen(*(char **)(param_1 + 0x58));
              if ((local_64 <= local_60) &&
                 (iVar2 = strncmp(param_4[4] + (local_60 - local_64),*(char **)(param_1 + 0x58),
                                  local_64), iVar2 == 0)) {
                local_18 = *(undefined **)(param_1 + 0x58);
                local_68 = strndup(param_4[4],local_60 - local_64);
                if (local_68 == (char *)0x0) {
                  FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x6e4);
                  return 1;
                }
                free(param_4[4]);
                param_4[4] = local_68;
              }
            }
            if ((*(uint *)(param_1 + 0x70) & 0x1000) != 0) {
              local_a8.tm_hour = 0xc;
              local_a8.tm_mday = local_a8.tm_mday + -1;
              mktime(&local_a8);
            }
            if ((*(uint *)(param_1 + 0x70) & 0x8000) != 0) {
              local_a8.tm_hour = local_a8.tm_hour + -1;
              mktime(&local_a8);
            }
            local_110[0] = '\0';
            if (*(int *)(param_1 + 0x6c) == 0) {
              if (*(int *)(param_1 + 0x10) == 0) {
                local_24 = "-%Y%m%d%H";
                strncpy(acStack_210,"-[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]",0x80);
              }
              else {
                local_24 = "-%Y%m%d";
                strncpy(acStack_210,"-[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]",0x80);
              }
              local_191 = 0;
            }
            else {
              local_28 = *(char **)(param_1 + 0x6c);
              local_2c = 0;
              local_30 = 0;
              memset(acStack_210,0,0x80);
              for (; *local_28 == ' '; local_28 = local_28 + 1) {
              }
              for (; *local_28 != '\0'; local_28 = local_28 + 1) {
                if ((0x7e < local_30) || (0x7d < local_2c)) {
                  FUN_000192f0(5,"Date format %s is too long\n",*(undefined4 *)(param_1 + 0x6c));
                  return 1;
                }
                if (*local_28 == '%') {
                  switch(local_28[1]) {
                  default:
                    local_190[local_2c] = *local_28;
                    local_190[local_2c + 1] = '%';
                    acStack_210[local_30] = *local_28;
                    local_30 = local_30 + 1;
                    local_2c = local_2c + 1;
                    break;
                  case 'Y':
                    sVar4 = strlen(acStack_210);
                    strncat(acStack_210,"[0-9][0-9]",0x7f - sVar4);
                    local_30 = local_30 + 10;
                  case 'H':
                  case 'M':
                  case 'S':
                  case 'V':
                  case 'd':
                  case 'm':
                    sVar4 = strlen(acStack_210);
                    strncat(acStack_210,"[0-9][0-9]",0x7f - sVar4);
                    local_30 = local_30 + 10;
                    if (0x7e < local_30) {
                      FUN_000192f0(5,"Date format %s is too long\n",*(undefined4 *)(param_1 + 0x6c))
                      ;
                      return 1;
                    }
                    cVar1 = *local_28;
                    pcVar3 = local_190 + local_2c;
                    local_2c = local_2c + 1;
                    local_28 = local_28 + 1;
                    *pcVar3 = cVar1;
                    local_190[local_2c] = *local_28;
                    break;
                  case 's':
                    sVar4 = strlen(acStack_210);
                    strncat(acStack_210,"[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]",
                            0x7f - sVar4);
                    local_30 = local_30 + 0x32;
                    if (0x7e < local_30) {
                      FUN_000192f0(5,"Date format %s is too long\n",*(undefined4 *)(param_1 + 0x6c))
                      ;
                      return 1;
                    }
                    cVar1 = *local_28;
                    pcVar3 = local_190 + local_2c;
                    local_2c = local_2c + 1;
                    local_28 = local_28 + 1;
                    *pcVar3 = cVar1;
                    local_190[local_2c] = *local_28;
                    break;
                  case 'z':
                    sVar4 = strlen(acStack_210);
                    strncat(acStack_210,"[-+][0-9][0-9][0-9][0-9]",0x7f - sVar4);
                    local_30 = local_30 + 0x18;
                    if (0x7e < local_30) {
                      FUN_000192f0(5,"Date format %s is too long\n",*(undefined4 *)(param_1 + 0x6c))
                      ;
                      return 1;
                    }
                    cVar1 = *local_28;
                    pcVar3 = local_190 + local_2c;
                    local_2c = local_2c + 1;
                    local_28 = local_28 + 1;
                    *pcVar3 = cVar1;
                    local_190[local_2c] = *local_28;
                  }
                }
                else {
                  local_190[local_2c] = *local_28;
                  acStack_210[local_30] = *local_28;
                  local_30 = local_30 + 1;
                }
                local_2c = local_2c + 1;
              }
              local_190[local_2c] = '\0';
              FUN_000192f0(2,"Converted \'%s\' -> \'%s\'\n",*(undefined4 *)(param_1 + 0x6c),
                           local_190);
              local_24 = local_190;
            }
            local_6c = strftime(local_110,0x40,local_24,&local_a8);
            if (local_6c == 0) {
              FUN_000192f0(5,"failed to apply date format \'%s\'\n",local_24);
              local_1c = 1;
            }
            else {
              FUN_000192f0(2,"dateext suffix \'%s\'\n",local_110);
              FUN_000192f0(2,"glob pattern \'%s\'\n",acStack_210);
              iVar2 = FUN_00019fe8(*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),param_1,
                                   &DAT_000372cc);
              if (iVar2 == 0) {
                if (((*(uint *)(param_1 + 0x70) & 1) != 0) && ((*(uint *)(param_1 + 0x70) & 8) != 0)
                   ) {
                  if ((*(uint *)(param_1 + 0x70) & 0x200) == 0) {
                    iVar2 = asprintf(&local_214,"%s/%s.%d%s",param_4[3],param_4[4],
                                     *(undefined4 *)(param_1 + 0x3c),local_18);
                    if (iVar2 < 0) {
                      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x78e
                                  );
                      return 1;
                    }
                    iVar2 = stat64(local_214,&sStack_288);
                    if (iVar2 == 0) {
                      local_1c = FUN_0001ae44(local_214,param_1,&sStack_288);
                    }
                    else {
                      piVar6 = __errno_location();
                      pcVar3 = local_214;
                      if (*piVar6 == 2) {
                        FUN_000192f0(2,"previous log %s does not exist\n",local_214);
                      }
                      else {
                        piVar6 = __errno_location();
                        pcVar7 = strerror(*piVar6);
                        FUN_000192f0(5,"cannot stat %s: %s\n",pcVar3,pcVar7);
                      }
                    }
                    free(local_214);
                  }
                  else {
                    iVar2 = asprintf(&local_ac,"%s/%s%s%s",param_4[3],param_4[4],acStack_210,
                                     local_18);
                    if (iVar2 < 0) {
                      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x76f
                                  );
                      return 1;
                    }
                    local_70 = glob64(local_ac,0,FUN_00019460,&local_d0);
                    if ((local_70 == 0) && (local_d0.gl_pathc != 0)) {
                      sVar4 = strlen(param_4[3]);
                      sVar5 = strlen(param_4[4]);
                      FUN_000195b0(&local_d0,sVar4 + sVar5 + 1,local_190);
                      local_34 = 0;
                      while ((local_34 < local_d0.gl_pathc && (local_1c == 0))) {
                        local_74 = local_d0.gl_pathv[local_34];
                        iVar2 = stat64(local_74,&sStack_288);
                        if (iVar2 == 0) {
                          local_1c = FUN_0001ae44(local_74,param_1,&sStack_288);
                        }
                        else {
                          piVar6 = __errno_location();
                          if (*piVar6 == 2) {
                            FUN_000192f0(2,"previous log %s does not exist\n",local_74);
                          }
                          else {
                            piVar6 = __errno_location();
                            pcVar3 = strerror(*piVar6);
                            FUN_000192f0(5,"cannot stat %s: %s\n",local_74,pcVar3);
                          }
                        }
                        local_34 = local_34 + 1;
                      }
                    }
                    else {
                      FUN_000192f0(2,"glob finding logs to compress failed\n");
                    }
                    globfree64(&local_d0);
                    free(local_ac);
                  }
                }
                if ((*(uint *)(param_1 + 0x70) & 0x200) == 0) {
                  local_44 = (char *)0x0;
                  if ((local_20 == 0xffffffff) &&
                     (local_20 = FUN_0001ce4c(param_4,local_18,local_14), (int)local_20 < 0)) {
                    FUN_000192f0(5,"could not find last rotated file: %s/%s.*%s%s\n",param_4[3],
                                 param_4[4],local_18,local_14);
                    return 1;
                  }
                  iVar2 = asprintf(&local_218,"%s/%s.%d%s%s",param_4[3],param_4[4],
                                   *(int *)(param_1 + 0x3c) + local_20,local_18,local_14);
                  if (iVar2 < 0) {
                    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x7f6);
                    return 1;
                  }
                  if (*(int *)(param_1 + 0x30) != -1) {
                    pcVar3 = strdup(local_218);
                    param_4[1] = pcVar3;
                    if (param_4[1] == (char *)0x0) {
                      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x7fd
                                  );
                      free(local_218);
                      return 1;
                    }
                  }
                  puVar10 = local_14;
                  if ((*(uint *)(param_1 + 0x70) & 8) != 0) {
                    puVar10 = &DAT_00024018;
                  }
                  iVar2 = asprintf(param_4,"%s/%s.%d%s%s",param_4[3],param_4[4],
                                   *(undefined4 *)(param_1 + 0x3c),local_18,puVar10);
                  if (iVar2 < 0) {
                    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x806);
                    free(local_218);
                    *param_4 = (char *)0x0;
                    return 1;
                  }
                  local_40 = (undefined *)(*(int *)(param_1 + 0x3c) + local_20);
                  while( true ) {
                    local_40 = local_40 + -1;
                    if (((int)local_40 < *(int *)(param_1 + 0x3c)) || (local_1c != 0))
                    goto LAB_0001e860;
                    free(local_44);
                    local_44 = local_218;
                    puVar10 = local_14;
                    iVar2 = asprintf(&local_218,"%s/%s.%d%s%s",param_4[3],param_4[4],local_40,
                                     local_18,local_14);
                    if (iVar2 < 0) break;
                    if (*(int *)(param_1 + 0x38) == 0) {
LAB_0001e754:
                      uVar11 = *(undefined4 *)(param_1 + 0x3c);
                      uVar9 = local_20;
                      puVar10 = local_40;
                      FUN_000192f0(2,"renaming %s to %s (rotatecount %d, logstart %d, i %d), \n",
                                   local_218,local_44,local_20,uVar11,local_40);
                      if ((DAT_000372c8 == 0) && (iVar2 = rename(local_218,local_44), iVar2 != 0)) {
                        piVar6 = __errno_location();
                        pcVar3 = local_218;
                        if (*piVar6 == 2) {
                          FUN_000192f0(2,"old log %s does not exist\n",local_218,local_218,uVar9,
                                       uVar11,puVar10);
                        }
                        else {
                          piVar6 = __errno_location();
                          pcVar7 = strerror(*piVar6);
                          FUN_000192f0(5,"error renaming %s to %s: %s\n",pcVar3,local_44,pcVar7);
                          local_1c = 1;
                        }
                      }
                    }
                    else {
                      iVar2 = stat64(local_218,&sStack_288);
                      if (iVar2 == 0) {
                        dVar13 = difftime(DAT_000372dc,sStack_288.st_mtim.tv_sec);
                        uVar14 = FUN_00022684(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
                        uVar14 = FUN_000225a0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x15180,0
                                             );
                        iVar8 = (int)((ulonglong)uVar14 >> 0x20);
                        uVar9 = *(uint *)(param_1 + 0x38);
                        iVar2 = (int)uVar9 >> 0x1f;
                        bVar12 = uVar9 < (uint)uVar14;
                        if ((int)(iVar2 - (iVar8 + (uint)bVar12)) < 0 ==
                            (SBORROW4(iVar2,iVar8) != SBORROW4(iVar2 - iVar8,(uint)bVar12)))
                        goto LAB_0001e754;
                        if ((local_1c == 0) && (*(int *)(param_1 + 0x54) != 0)) {
                          local_1c = FUN_0001b964(local_218,DAT_00037214,param_2,param_1);
                        }
                        if (local_1c == 0) {
                          local_1c = FUN_0001acc0(local_218,param_1);
                        }
                      }
                      else {
                        piVar6 = __errno_location();
                        pcVar3 = local_218;
                        if (*piVar6 == 2) {
                          FUN_000192f0(2,"old log %s does not exist\n",local_218);
                        }
                        else {
                          piVar6 = __errno_location();
                          pcVar7 = strerror(*piVar6);
                          FUN_000192f0(5,"cannot stat %s: %s\n",pcVar3,pcVar7);
                          local_1c = 1;
                        }
                      }
                    }
                  }
                  FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x811);
                  local_218 = (char *)0x0;
LAB_0001e860:
                  free(local_44);
                  free(local_218);
                }
                else {
                  iVar2 = asprintf(&local_ac,"%s/%s%s%s%s",param_4[3],param_4[4],acStack_210,
                                   local_18,local_14);
                  if (iVar2 < 0) {
                    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x7a2);
                    return 1;
                  }
                  local_70 = glob64(local_ac,0,FUN_00019460,&local_d0);
                  if (local_70 == 0) {
                    local_3c = 0xffffffff;
                    sVar4 = strlen(param_4[3]);
                    sVar5 = strlen(param_4[4]);
                    FUN_000195b0(&local_d0,sVar4 + sVar5 + 1,local_190);
                    for (local_38 = 0; local_38 < local_d0.gl_pathc; local_38 = local_38 + 1) {
                      iVar2 = stat64(local_d0.gl_pathv[local_38],&sStack_288);
                      if (iVar2 == 0) {
                        if ((local_d0.gl_pathc < local_20) ||
                           (local_d0.gl_pathc - local_20 < local_38)) {
                          if (0 < *(int *)(param_1 + 0x38)) {
                            dVar13 = difftime(DAT_000372dc,sStack_288.st_mtim.tv_sec);
                            uVar14 = FUN_00022684(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
                            uVar14 = FUN_000225a0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                                                  0x15180,0);
                            iVar8 = (int)((ulonglong)uVar14 >> 0x20);
                            uVar9 = *(uint *)(param_1 + 0x38);
                            iVar2 = (int)uVar9 >> 0x1f;
                            bVar12 = uVar9 < (uint)uVar14;
                            if ((int)(iVar2 - (iVar8 + (uint)bVar12)) < 0 !=
                                (SBORROW4(iVar2,iVar8) != SBORROW4(iVar2 - iVar8,(uint)bVar12)))
                            goto LAB_0001e0f8;
                          }
                        }
                        else {
LAB_0001e0f8:
                          if (local_3c != 0xffffffff) {
                            local_78 = local_d0.gl_pathv[local_3c];
                            if ((local_1c == 0) && (*(int *)(param_1 + 0x54) != 0)) {
                              local_1c = FUN_0001b964(local_78,DAT_00037214,param_2,param_1);
                            }
                            if (local_1c == 0) {
                              FUN_000192f0(2,"removing %s\n",local_78);
                              local_1c = FUN_0001acc0(local_78,param_1);
                            }
                          }
                          local_3c = local_38;
                        }
                      }
                    }
                    if (local_3c == 0xffffffff) {
                      free(param_4[1]);
                      param_4[1] = (char *)0x0;
                    }
                    else {
                      local_7c = local_d0.gl_pathv[local_3c];
                      pcVar3 = strdup(local_7c);
                      param_4[1] = pcVar3;
                      if (param_4[1] == (char *)0x0) {
                        FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",
                                     0x7cb);
                        globfree64(&local_d0);
                        free(local_ac);
                        return 1;
                      }
                    }
                  }
                  else {
                    FUN_000192f0(2,"glob finding old rotated logs failed\n");
                    free(param_4[1]);
                    param_4[1] = (char *)0x0;
                  }
                  puVar10 = local_14;
                  if ((*(uint *)(param_1 + 0x70) & 8) != 0) {
                    puVar10 = &DAT_00024018;
                  }
                  iVar2 = asprintf(param_4,"%s/%s%s%s%s",param_4[3],param_4[4],local_110,local_18,
                                   puVar10);
                  if (iVar2 < 0) {
                    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x7dd);
                    *param_4 = (char *)0x0;
                    globfree64(&local_d0);
                    free(local_ac);
                    return 1;
                  }
                  globfree64(&local_d0);
                  free(local_ac);
                }
                if ((*(uint *)(param_1 + 0x70) & 0x200) == 0) {
                  iVar2 = asprintf(param_4 + 2,"%s/%s.%d%s",param_4[3],param_4[4],
                                   *(undefined4 *)(param_1 + 0x3c),local_18,puVar10);
                  if (iVar2 < 0) {
                    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x85e);
                    param_4[2] = (char *)0x0;
                  }
                }
                else {
                  pcVar3 = local_110;
                  puVar15 = local_18;
                  iVar2 = asprintf(param_4 + 2,"%s/%s%s%s",param_4[3],param_4[4],pcVar3,local_18,
                                   puVar10);
                  if (iVar2 < 0) {
                    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x84b);
                    param_4[2] = (char *)0x0;
                    return 1;
                  }
                  iVar2 = asprintf(&local_21c,"%s%s",param_4[2],local_14,pcVar3,puVar15);
                  if (iVar2 < 0) {
                    FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","prerotateSingleLog",0x850);
                    return 1;
                  }
                  iVar2 = stat64(local_21c,&sStack_288);
                  if (iVar2 == 0) {
                    FUN_000192f0(5,"destination %s already exists, skipping rotation\n",*param_4);
                    local_1c = 1;
                  }
                  free(local_21c);
                }
                if ((param_4[1] != (char *)0x0) && (iVar2 = access(param_4[1],0), iVar2 != 0)) {
                  FUN_000192f0(2,"log %s doesn\'t exist -- won\'t try to dispose of it\n",param_4[1]
                              );
                  free(param_4[1]);
                  param_4[1] = (char *)0x0;
                }
              }
              else {
                local_1c = 1;
              }
            }
          }
        }
      }
    }
  }
  return local_1c;
}



/* ===== FUN_0001ea88 @ 0001ea88 size=1552 ===== */

int FUN_0001ea88(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char *local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [16];
  uint local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_20;
  uint local_1c;
  undefined *local_18;
  int local_14;
  
  local_14 = 0;
  local_8c = 0;
  if (*(int *)(param_3 + 0x98) == 0) {
    local_14 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x70) & 0x110) == 0) {
      iVar1 = FUN_00019fe8(*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),param_1,&local_8c);
      if (iVar1 != 0) {
        return 1;
      }
      if ((*(uint *)(param_1 + 0x70) & 0x4000) == 0) {
        FUN_000192f0(2,"renaming %s to %s\n",*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),
                     *(undefined4 *)(param_4 + 8));
        if (((DAT_000372c8 == 0) && (local_14 == 0)) &&
           (iVar1 = rename(*(char **)(*(int *)(param_1 + 4) + param_2 * 4),*(char **)(param_4 + 8)),
           iVar1 != 0)) {
          uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4);
          uVar6 = *(undefined4 *)(param_4 + 8);
          piVar2 = __errno_location();
          pcVar4 = strerror(*piVar2);
          FUN_000192f0(5,"failed to rename %s to %s: %s\n",uVar5,uVar6,pcVar4);
          local_14 = 1;
        }
      }
      else {
        iVar1 = asprintf(&local_90,"%s%s",*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),
                         &DAT_00025098);
        if (iVar1 < 0) {
          FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","rotateSingleLog",0x88d);
          FUN_0001a01c(&local_8c);
          return 1;
        }
        FUN_000192f0(2,"renaming %s to %s\n",*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),
                     local_90);
        if (((DAT_000372c8 == 0) && (local_14 == 0)) &&
           (iVar1 = rename(*(char **)(*(int *)(param_1 + 4) + param_2 * 4),local_90),
           pcVar4 = local_90, iVar1 != 0)) {
          uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4);
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          FUN_000192f0(5,"failed to rename %s to %s: %s\n",uVar5,pcVar4,pcVar3);
          local_14 = 1;
        }
        free(local_90);
      }
      if (*(int *)(param_1 + 0x30) == 0) {
        local_18 = &DAT_00024018;
        if (((*(int *)(param_1 + 0x68) != 0) && ((*(uint *)(param_1 + 0x70) & 1) != 0)) &&
           ((*(uint *)(param_1 + 0x70) & 8) == 0)) {
          local_18 = *(undefined **)(param_1 + 0x68);
        }
        free(*(void **)(param_4 + 4));
        iVar1 = asprintf((char **)(param_4 + 4),"%s%s",*(undefined4 *)(param_4 + 8),local_18);
        if (iVar1 < 0) {
          FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","rotateSingleLog",0x8b2);
          *(undefined4 *)(param_4 + 4) = 0;
          return 1;
        }
        FUN_000192f0(2,"disposeName will be %s\n",*(undefined4 *)(param_4 + 4));
      }
    }
    if (((local_14 == 0) && ((*(uint *)(param_1 + 0x70) & 2) != 0)) &&
       ((*(uint *)(param_1 + 0x70) & 0x110) == 0)) {
      if (*(int *)(param_1 + 0x7c) == -1) {
        local_70 = *(undefined4 *)(param_3 + 0x48);
      }
      else {
        local_70 = *(undefined4 *)(param_1 + 0x7c);
      }
      if (*(int *)(param_1 + 0x80) == -1) {
        local_6c = *(undefined4 *)(param_3 + 0x4c);
      }
      else {
        local_6c = *(undefined4 *)(param_1 + 0x80);
      }
      bVar7 = *(int *)(param_1 + 0x78) != -1;
      if (bVar7) {
        local_78 = *(uint *)(param_1 + 0x78);
      }
      else {
        local_78 = *(uint *)(param_3 + 0x40) & 0x1ff;
      }
      local_1c = (uint)bVar7;
      FUN_000192f0(2,"creating new %s mode = 0%o uid = %d gid = %d\n",
                   *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),local_78,local_70,local_6c);
      if ((DAT_000372c8 == 0) && (local_14 == 0)) {
        local_20 = FUN_0001a4bc(*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),2,auStack_88,
                                DAT_000372d0,local_1c);
        if (local_20 < 0) {
          local_14 = 1;
        }
        else {
          close(local_20);
        }
      }
    }
    FUN_0001a01c(&local_8c);
    if (((local_14 == 0) && ((*(uint *)(param_1 + 0x70) & 0x110) != 0)) &&
       ((*(uint *)(param_1 + 0x70) & 0x4000) == 0)) {
      if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 0x54) == 0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      local_14 = FUN_0001bf5c(*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),
                              *(undefined4 *)(param_4 + 8),param_3 + 0x30,param_1,uVar5);
    }
  }
  return local_14;
}



/* ===== FUN_0001f098 @ 0001f098 size=692 ===== */

int FUN_0001f098(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  char *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (*(int *)(param_3 + 0x98) == 0) {
    local_c = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x70) & 0x4000) != 0) {
      iVar1 = asprintf(&local_18,"%s%s",*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),
                       &DAT_00025098);
      if (iVar1 < 0) {
        FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","postrotateSingleLog",0x908);
        return 1;
      }
      local_c = FUN_0001bf5c(local_18,param_4[2],param_3 + 0x30,param_1,0);
      FUN_000192f0(2,"removing tmp log %s\n",local_18);
      if ((DAT_000372c8 == 0) && (local_c == 0)) {
        unlink(local_18);
      }
      free(local_18);
    }
    if (((local_c == 0) && ((*(uint *)(param_1 + 0x70) & 1) != 0)) &&
       ((*(uint *)(param_1 + 0x70) & 8) == 0)) {
      if ((((*(uint *)(param_1 + 0x70) & 0x110) == 0) || ((*(uint *)(param_1 + 0x70) & 0x4000) != 0)
          ) || ((*(int *)(param_1 + 0x30) != 0 || (*(int *)(param_1 + 0x54) != 0)))) {
        local_14 = 0;
      }
      else {
        local_14 = 1;
      }
      if (local_14 == 0) {
        local_c = FUN_0001ae44(param_4[2],param_1,param_3 + 0x30);
      }
    }
    if ((local_c == 0) && (*(int *)(param_1 + 0x54) != 0)) {
      if ((*(uint *)(param_1 + 0x70) & 0x40) == 0) {
        local_10 = param_4[1];
      }
      else {
        local_10 = *param_4;
      }
      if (local_10 != 0) {
        local_c = FUN_0001b964(local_10,DAT_00037214,param_2,param_1);
      }
    }
    if ((local_c == 0) && (param_4[1] != 0)) {
      local_c = FUN_0001acc0(param_4[1],param_1);
    }
    FUN_0001a01c(&DAT_000372cc);
  }
  return local_c;
}



/* ===== FUN_0001f34c @ 0001f34c size=4272 ===== */

uint FUN_0001f34c(undefined4 *param_1,int param_2)

{
  void *__ptr;
  int iVar1;
  void *__ptr_00;
  void *__ptr_01;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_1c = 0;
  local_20 = 0;
  FUN_000192f0(2,"\nrotating pattern: %s ",*param_1);
  if (param_2 == 0) {
    switch(param_1[4]) {
    case 0:
      FUN_000192f0(2,"hourly ");
      break;
    case 1:
      FUN_000192f0(2,"after %jd days ",param_1[6],param_1[7]);
      break;
    case 2:
      FUN_000192f0(2,"weekly ");
      break;
    case 3:
      FUN_000192f0(2,"monthly ");
      break;
    case 4:
      FUN_000192f0(2,"yearly ");
      break;
    case 5:
      FUN_000192f0(2,"%jd bytes ",param_1[6],param_1[7]);
      break;
    default:
      FUN_000192f0(6,"rotateLogSet() does not have case for: %u ",param_1[4]);
    }
  }
  else {
    FUN_000192f0(2,"forced from command line ");
  }
  if (param_1[3] != 0) {
    FUN_000192f0(2,"olddir is %s, ",param_1[3]);
  }
  if ((param_1[0x1c] & 4) == 0) {
    FUN_000192f0(2,"empty log files are not rotated, ");
  }
  else {
    FUN_000192f0(2,"empty log files are rotated, ");
  }
  if (param_1[10] != 0 || param_1[0xb] != 0) {
    FUN_000192f0(2,"only log files >= %jd bytes are rotated, ",param_1[10],param_1[0xb]);
  }
  if (param_1[8] != 0 || param_1[9] != 0) {
    FUN_000192f0(2,"log files >= %jd are rotated earlier, ",param_1[8],param_1[9]);
  }
  if (param_1[0xd] != 0) {
    FUN_000192f0(2,"only log files older than %d days are rotated, ",param_1[0xd]);
  }
  if ((param_1[0xc] == -1) && (param_1[0xe] == 0)) {
    FUN_000192f0(2,"old logs are kept forever\n");
  }
  else {
    if (param_1[0x15] != 0) {
      FUN_000192f0(2,"old logs mailed to %s, ",param_1[0x15]);
    }
    if (param_1[0xc] == 0) {
      FUN_000192f0(2,"no old logs will be kept\n");
    }
    else {
      if (param_1[0xc] == -1) {
        FUN_000192f0(2,"(unlimited rotations), ");
      }
      else {
        FUN_000192f0(2,"(%d rotations), ",param_1[0xc]);
      }
      FUN_000192f0(2,"old logs are removed");
      if (0 < (int)param_1[0xe]) {
        FUN_000192f0(2," after %d days",param_1[0xe]);
      }
      FUN_000192f0(2,&DAT_00025350);
    }
  }
  if (param_1[2] == 0) {
    FUN_000192f0(2,"No logs found. Rotation not needed.\n");
    local_1c = 0;
  }
  else {
    __ptr = calloc(param_1[2],4);
    if (__ptr == (void *)0x0) {
      FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","rotateLogSet",0x989);
      local_1c = 1;
    }
    else if (((param_1[0x1c] & 0x800) == 0) ||
            (iVar1 = FUN_00019634(param_1[0x21],param_1[0x22]), iVar1 == 0)) {
      for (local_14 = 0; local_14 < (uint)param_1[2]; local_14 = local_14 + 1) {
        uVar4 = FUN_0001c31c(param_1,local_14,param_2);
        *(undefined4 *)((int)__ptr + local_14 * 4) = uVar4;
        local_1c = local_1c | *(uint *)((int)__ptr + local_14 * 4);
        iVar1 = FUN_0001a1b0(*(undefined4 *)(param_1[1] + local_14 * 4));
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x98) != 0)) {
          local_20 = local_20 + 1;
        }
      }
      if (param_1[0x12] != 0) {
        if (local_20 == 0) {
          FUN_000192f0(2,"not running first action script, since no logs will be rotated\n");
        }
        else {
          FUN_000192f0(2,"running first action script\n");
          iVar1 = FUN_0001a334(param_1,*param_1,0,param_1[0x12]);
          if (iVar1 != 0) {
            FUN_000192f0(5,"error running first action script for %s\n",*param_1);
            if (((param_1[0x1c] & 0x800) != 0) && (iVar1 = FUN_00019a4c(), iVar1 != 0)) {
              free(__ptr);
              return 1;
            }
            free(__ptr);
            return 1;
          }
        }
      }
      __ptr_00 = malloc(param_1[2] << 2);
      __ptr_01 = malloc(param_1[2] << 2);
      if ((__ptr_00 == (void *)0x0) || (__ptr_01 == (void *)0x0)) {
        FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","rotateLogSet",0x9b9);
        if ((param_1[0x1c] & 0x800) != 0) {
          FUN_00019a4c();
        }
        free(__ptr_01);
        free(__ptr_00);
        free(__ptr);
        local_1c = 1;
      }
      else {
        for (local_18 = 0;
            (((param_1[0x1c] & 0x80) == 0 && (local_18 < (uint)param_1[2])) ||
            (((param_1[0x1c] & 0x80) != 0 && (local_18 == 0)))); local_18 = local_18 + 1) {
          for (local_14 = local_18;
              (((param_1[0x1c] & 0x80) != 0 && (local_14 < (uint)param_1[2])) ||
              (((param_1[0x1c] & 0x80) == 0 && (local_14 == local_18)))); local_14 = local_14 + 1) {
            uVar4 = FUN_0001a1b0(*(undefined4 *)(param_1[1] + local_14 * 4));
            *(undefined4 *)((int)__ptr_00 + local_14 * 4) = uVar4;
            if (*(int *)((int)__ptr_00 + local_14 * 4) == 0) {
              *(undefined4 *)((int)__ptr + local_14 * 4) = 1;
            }
            pvVar2 = malloc(0x14);
            *(void **)((int)__ptr_01 + local_14 * 4) = pvVar2;
            if (*(int *)((int)__ptr_01 + local_14 * 4) == 0) {
              FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","rotateLogSet",0x9d0);
              if ((param_1[0x1c] & 0x800) != 0) {
                FUN_00019a4c();
              }
              free(__ptr_01);
              free(__ptr_00);
              free(__ptr);
              return 1;
            }
            memset(*(void **)((int)__ptr_01 + local_14 * 4),0,0x14);
          }
          if (((param_1[0x10] != 0) &&
              (((param_1[0x1c] & 0x80) != 0 ||
               ((*(int *)((int)__ptr + local_18 * 4) == 0 &&
                (*(int *)(*(int *)((int)__ptr_00 + local_18 * 4) + 0x98) != 0)))))) &&
             ((local_1c == 0 || ((param_1[0x1c] & 0x80) == 0)))) {
            if (local_20 == 0) {
              FUN_000192f0(2,"not running prerotate script, since no logs will be rotated\n");
            }
            else {
              FUN_000192f0(2,"running prerotate script\n");
              if ((param_1[0x1c] & 0x80) == 0) {
                uVar4 = *(undefined4 *)(param_1[1] + local_18 * 4);
              }
              else {
                uVar4 = *param_1;
              }
              iVar1 = FUN_0001a334(param_1,uVar4,0,param_1[0x10]);
              if (iVar1 != 0) {
                if ((param_1[0x1c] & 0x80) == 0) {
                  FUN_000192f0(5,"error running non-shared prerotate script for %s of \'%s\'\n",
                               *(undefined4 *)(param_1[1] + local_18 * 4),*param_1);
                }
                else {
                  FUN_000192f0(5,"error running shared prerotate script for \'%s\'\n",*param_1);
                }
                *(undefined4 *)((int)__ptr + local_18 * 4) = 1;
                local_1c = 1;
              }
            }
          }
          for (local_14 = local_18;
              (((param_1[0x1c] & 0x80) != 0 && (local_14 < (uint)param_1[2])) ||
              (((param_1[0x1c] & 0x80) == 0 && (local_14 == local_18)))); local_14 = local_14 + 1) {
            if (((*(int *)((int)__ptr + local_14 * 4) == 0) || ((param_1[0x1c] & 0x80) != 0)) &&
               ((local_1c == 0 || ((param_1[0x1c] & 0x80) == 0)))) {
              uVar3 = FUN_0001d054(param_1,local_14,*(undefined4 *)((int)__ptr_00 + local_14 * 4),
                                   *(undefined4 *)((int)__ptr_01 + local_14 * 4));
              *(uint *)((int)__ptr + local_14 * 4) = uVar3 | *(uint *)((int)__ptr + local_14 * 4);
              local_1c = local_1c | *(uint *)((int)__ptr + local_14 * 4);
            }
          }
          for (local_14 = local_18;
              (((param_1[0x1c] & 0x80) != 0 && (local_14 < (uint)param_1[2])) ||
              (((param_1[0x1c] & 0x80) == 0 && (local_14 == local_18)))); local_14 = local_14 + 1) {
            if (((*(int *)((int)__ptr + local_14 * 4) == 0) || ((param_1[0x1c] & 0x80) != 0)) &&
               ((local_1c == 0 || ((param_1[0x1c] & 0x80) == 0)))) {
              uVar3 = FUN_0001ea88(param_1,local_14,*(undefined4 *)((int)__ptr_00 + local_14 * 4),
                                   *(undefined4 *)((int)__ptr_01 + local_14 * 4));
              *(uint *)((int)__ptr + local_14 * 4) = uVar3 | *(uint *)((int)__ptr + local_14 * 4);
              local_1c = local_1c | *(uint *)((int)__ptr + local_14 * 4);
            }
          }
          if (((param_1[0x11] != 0) &&
              (((param_1[0x1c] & 0x80) != 0 ||
               ((*(int *)((int)__ptr + local_18 * 4) == 0 &&
                (*(int *)(*(int *)((int)__ptr_00 + local_18 * 4) + 0x98) != 0)))))) &&
             ((local_1c == 0 || ((param_1[0x1c] & 0x80) == 0)))) {
            if (local_20 == 0) {
              FUN_000192f0(2,"not running postrotate script, since no logs were rotated\n");
            }
            else {
              if ((param_1[0x1c] & 0x80) == 0) {
                uVar4 = *(undefined4 *)(param_1[1] + local_18 * 4);
              }
              else {
                uVar4 = *param_1;
              }
              if ((param_1[0x1c] & 0x80) == 0) {
                uVar5 = *(undefined4 *)(*(int *)((int)__ptr_01 + local_18 * 4) + 8);
              }
              else {
                uVar5 = 0;
              }
              FUN_000192f0(2,"running postrotate script\n");
              iVar1 = FUN_0001a334(param_1,uVar4,uVar5,param_1[0x11]);
              if (iVar1 != 0) {
                if ((param_1[0x1c] & 0x80) == 0) {
                  FUN_000192f0(5,"error running non-shared postrotate script for %s of \'%s\'\n",
                               *(undefined4 *)(param_1[1] + local_18 * 4),*param_1);
                }
                else {
                  FUN_000192f0(5,"error running shared postrotate script for \'%s\'\n",*param_1);
                }
                *(undefined4 *)((int)__ptr + local_18 * 4) = 1;
                local_1c = 1;
              }
            }
          }
          for (local_14 = local_18;
              (((param_1[0x1c] & 0x80) != 0 && (local_14 < (uint)param_1[2])) ||
              (((param_1[0x1c] & 0x80) == 0 && (local_14 == local_18)))); local_14 = local_14 + 1) {
            if (((*(int *)((int)__ptr + local_14 * 4) == 0) || ((param_1[0x1c] & 0x80) != 0)) &&
               ((local_1c == 0 || ((param_1[0x1c] & 0x80) == 0)))) {
              uVar3 = FUN_0001f098(param_1,local_14,*(undefined4 *)((int)__ptr_00 + local_14 * 4),
                                   *(undefined4 *)((int)__ptr_01 + local_14 * 4));
              *(uint *)((int)__ptr + local_14 * 4) = uVar3 | *(uint *)((int)__ptr + local_14 * 4);
              local_1c = local_1c | *(uint *)((int)__ptr + local_14 * 4);
            }
          }
        }
        for (local_14 = 0; local_14 < (uint)param_1[2]; local_14 = local_14 + 1) {
          free((void *)**(undefined4 **)((int)__ptr_01 + local_14 * 4));
          free(*(void **)(*(int *)((int)__ptr_01 + local_14 * 4) + 4));
          free(*(void **)(*(int *)((int)__ptr_01 + local_14 * 4) + 8));
          free(*(void **)(*(int *)((int)__ptr_01 + local_14 * 4) + 0xc));
          free(*(void **)(*(int *)((int)__ptr_01 + local_14 * 4) + 0x10));
          free(*(void **)((int)__ptr_01 + local_14 * 4));
        }
        free(__ptr_01);
        free(__ptr_00);
        if (param_1[0x13] != 0) {
          if (local_20 == 0) {
            FUN_000192f0(2,"not running last action script, since no logs will be rotated\n");
          }
          else {
            FUN_000192f0(2,"running last action script\n");
            iVar1 = FUN_0001a334(param_1,*param_1,0,param_1[0x13]);
            if (iVar1 != 0) {
              FUN_000192f0(5,"error running last action script for %s\n",*param_1);
              local_1c = 1;
            }
          }
        }
        if (((param_1[0x1c] & 0x800) == 0) || (iVar1 = FUN_00019a4c(), iVar1 == 0)) {
          free(__ptr);
        }
        else {
          free(__ptr);
          local_1c = 1;
        }
      }
    }
    else {
      free(__ptr);
      local_1c = 1;
    }
  }
  return local_1c;
}



/* ===== FUN_00020414 @ 00020414 size=2616 ===== */

uint FUN_00020414(char *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  size_t sVar5;
  byte *pbVar6;
  uint uVar7;
  double dVar8;
  undefined1 auStack_bc [4];
  stat64 sStack_b8;
  FILE *local_4c;
  FILE *local_48;
  FILE *local_44;
  FILE *local_40;
  FILE *local_3c;
  FILE *local_38;
  time_t local_34;
  FILE *local_30;
  int local_2c;
  int local_28;
  char *local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  byte *local_10;
  undefined4 *local_c;
  
  local_14 = 0;
  local_18 = 0;
  local_20 = 0;
  local_24 = (char *)0x0;
  local_1c = 0;
  iVar2 = strcmp(param_1,"/dev/null");
  if (iVar2 == 0) {
    local_18 = 0;
  }
  else {
    local_28 = open64(param_1,0);
    if (local_28 == -1) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      FUN_000192f0(5,"error opening state file %s: %s\n",param_1,pcVar4);
      local_18 = 1;
    }
    else {
      iVar2 = fstat64(local_28,&sStack_b8);
      if (iVar2 == -1) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        FUN_000192f0(5,"error stating %s: %s\n",param_1,pcVar4);
        close(local_28);
        local_18 = 1;
      }
      else if ((sStack_b8.st_mode & 0xf000) == 0x8000) {
        sVar5 = strlen(param_1);
        local_24 = malloc(sVar5 + 5);
        if (local_24 == (char *)0x0) {
          FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","writeState",0xa87);
          close(local_28);
          local_18 = 1;
        }
        else {
          strcpy(local_24,param_1);
          sVar5 = strlen(local_24);
          *(undefined4 *)(local_24 + sVar5) = DAT_00025098;
          (local_24 + sVar5)[4] = DAT_0002509c;
          local_18 = unlink(local_24);
          if ((local_18 == -1) && (piVar3 = __errno_location(), *piVar3 != 2)) {
            piVar3 = __errno_location();
            pcVar4 = strerror(*piVar3);
            FUN_000192f0(5,"error removing old temporary state file %s: %s\n",local_24,pcVar4);
            free(local_24);
            close(local_28);
            local_18 = 1;
          }
          else {
            local_18 = 0;
            iVar2 = FUN_00019fbc(local_28,param_1,auStack_bc);
            if (iVar2 == 0) {
              close(local_28);
              if ((sStack_b8.st_mode & 4) != 0) {
                sStack_b8.st_mode = sStack_b8.st_mode & 0xfffffffb;
                local_1c = 1;
              }
              local_2c = FUN_0001a4bc(local_24,2,&sStack_b8,DAT_000372d0,local_1c);
              FUN_0001a01c(auStack_bc);
              if (local_2c < 0) {
                free(local_24);
                local_18 = 1;
              }
              else {
                local_30 = fdopen(local_2c,"w");
                if (local_30 == (FILE *)0x0) {
                  piVar3 = __errno_location();
                  pcVar4 = strerror(*piVar3);
                  FUN_000192f0(5,"error creating temp state file %s: %s\n",local_24,pcVar4);
                  free(local_24);
                  local_18 = 1;
                }
                else {
                  local_20 = fprintf(local_30,"logrotate state -- version 2\n");
                  if ((int)local_20 < 0) {
                    local_18 = local_20;
                  }
                  local_14 = 0;
                  while ((local_14 < DAT_000372d8 && (local_18 == 0))) {
                    local_c = (undefined4 *)**(undefined4 **)(DAT_000372d4 + local_14 * 4);
                    while ((local_c != (undefined4 *)0x0 && (local_18 == 0))) {
                      local_34 = mktime((tm *)(local_c + 1));
                      if ((local_c[0x27] != 0) ||
                         (dVar8 = difftime(DAT_000372dc,local_34), dVar8 <= DAT_00020c00)) {
                        local_38 = local_30;
                        if (local_30->_chain == (_IO_FILE *)0x0) {
                          iVar2 = fputc(0x22,local_30);
                        }
                        else if (local_30->_IO_write_base < local_30->_IO_buf_base) {
                          pcVar4 = local_30->_IO_write_base;
                          local_30->_IO_write_base = pcVar4 + 1;
                          *pcVar4 = '\"';
                          iVar2 = 0x22;
                        }
                        else {
                          iVar2 = __fputc_unlocked(0x22,local_30);
                        }
                        local_18 = (uint)(iVar2 == -1);
                        local_10 = (byte *)*local_c;
                        while ((*local_10 != 0 && (local_18 == 0))) {
                          bVar1 = *local_10;
                          if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
                            local_3c = local_30;
                            if (local_30->_chain == (_IO_FILE *)0x0) {
                              iVar2 = fputc(0x5c,local_30);
                            }
                            else if (local_30->_IO_write_base < local_30->_IO_buf_base) {
                              pcVar4 = local_30->_IO_write_base;
                              local_30->_IO_write_base = pcVar4 + 1;
                              *pcVar4 = '\\';
                              iVar2 = 0x5c;
                            }
                            else {
                              iVar2 = __fputc_unlocked(0x5c,local_30);
                            }
                            local_18 = (uint)(iVar2 == -1);
LAB_00020ab0:
                            if (local_18 == 0) {
                              local_48 = local_30;
                              if (local_30->_chain == (_IO_FILE *)0x0) {
                                uVar7 = fputc((uint)*local_10,local_30);
                              }
                              else if (local_30->_IO_write_base < local_30->_IO_buf_base) {
                                pbVar6 = (byte *)local_30->_IO_write_base;
                                local_30->_IO_write_base = (char *)(pbVar6 + 1);
                                *pbVar6 = *local_10;
                                uVar7 = (uint)*pbVar6;
                              }
                              else {
                                uVar7 = __fputc_unlocked(*local_10,local_30);
                              }
                              if (uVar7 == 0xffffffff) {
                                local_18 = 1;
                              }
                            }
                          }
                          else {
                            if (bVar1 != 10) goto LAB_00020ab0;
                            local_40 = local_30;
                            if (local_30->_chain == (_IO_FILE *)0x0) {
                              iVar2 = fputc(0x5c,local_30);
                            }
                            else if (local_30->_IO_write_base < local_30->_IO_buf_base) {
                              pcVar4 = local_30->_IO_write_base;
                              local_30->_IO_write_base = pcVar4 + 1;
                              *pcVar4 = '\\';
                              iVar2 = 0x5c;
                            }
                            else {
                              iVar2 = __fputc_unlocked(0x5c,local_30);
                            }
                            local_18 = (uint)(iVar2 == -1);
                            if (local_18 == 0) {
                              local_44 = local_30;
                              if (local_30->_chain == (_IO_FILE *)0x0) {
                                iVar2 = fputc(0x6e,local_30);
                              }
                              else if (local_30->_IO_write_base < local_30->_IO_buf_base) {
                                pcVar4 = local_30->_IO_write_base;
                                local_30->_IO_write_base = pcVar4 + 1;
                                *pcVar4 = 'n';
                                iVar2 = 0x6e;
                              }
                              else {
                                iVar2 = __fputc_unlocked(0x6e,local_30);
                              }
                              local_18 = (uint)(iVar2 == -1);
                            }
                          }
                          local_10 = local_10 + 1;
                        }
                        if (local_18 == 0) {
                          local_4c = local_30;
                          if (local_30->_chain == (_IO_FILE *)0x0) {
                            iVar2 = fputc(0x22,local_30);
                          }
                          else if (local_30->_IO_write_base < local_30->_IO_buf_base) {
                            pcVar4 = local_30->_IO_write_base;
                            local_30->_IO_write_base = pcVar4 + 1;
                            *pcVar4 = '\"';
                            iVar2 = 0x22;
                          }
                          else {
                            iVar2 = __fputc_unlocked(0x22,local_30);
                          }
                          if (iVar2 == -1) {
                            local_18 = 1;
                          }
                        }
                        if ((local_18 == 0) &&
                           (local_20 = fprintf(local_30," %d-%d-%d-%d:%d:%d\n",local_c[6] + 0x76c,
                                               local_c[5] + 1,local_c[4],local_c[3],local_c[2],
                                               local_c[1]), (int)local_20 < 0)) {
                          local_18 = local_20;
                        }
                      }
                      else {
                        FUN_000192f0(2,
                                     "Removing %s from state file, because it does not exist and has not been rotated for one year\n"
                                     ,*local_c);
                      }
                      local_c = (undefined4 *)local_c[0x28];
                    }
                    local_14 = local_14 + 1;
                  }
                  if (local_18 == 0) {
                    local_18 = fflush(local_30);
                  }
                  if (local_18 == 0) {
                    local_18 = fsync(local_2c);
                  }
                  if (local_18 == 0) {
                    local_18 = fclose(local_30);
                  }
                  else {
                    fclose(local_30);
                  }
                  if (local_18 == 0) {
                    iVar2 = rename(local_24,param_1);
                    if (iVar2 != 0) {
                      piVar3 = __errno_location();
                      pcVar4 = strerror(*piVar3);
                      FUN_000192f0(5,"error renaming temp state file %s to %s: %s\n",local_24,
                                   param_1,pcVar4);
                      unlink(local_24);
                      local_18 = 1;
                    }
                  }
                  else {
                    piVar3 = __errno_location();
                    if (*piVar3 == 0) {
                      if (local_18 == 0xc) {
                        uVar7 = 0x57c4;
                      }
                      else {
                        uVar7 = 0x4018;
                      }
                      FUN_000192f0(5,"error creating temp state file %s%s\n",local_24,
                                   uVar7 | 0x20000);
                    }
                    else {
                      piVar3 = __errno_location();
                      pcVar4 = strerror(*piVar3);
                      FUN_000192f0(5,"error creating temp state file %s: %s\n",local_24,pcVar4);
                    }
                    unlink(local_24);
                  }
                  free(local_24);
                }
              }
            }
            else {
              free(local_24);
              close(local_28);
              local_18 = 1;
            }
          }
        }
      }
      else {
        FUN_000192f0(5,"not writing state to %s because it is not a regular file\n",param_1);
        close(local_28);
        local_18 = 1;
      }
    }
  }
  return local_18;
}



/* ===== FUN_00020e58 @ 00020e58 size=2988 ===== */

int FUN_00020e58(char *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  time_t local_20c4;
  int local_20c0;
  int local_20bc;
  int local_20b8;
  int local_20b4;
  int local_20b0;
  int local_20ac;
  undefined4 *local_20a8;
  int local_20a4;
  stat64 sStack_20a0;
  char acStack_2035 [8209];
  int local_24;
  char *local_20;
  size_t local_1c;
  FILE *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  FUN_000192f0(2,"Reading state from file: %s\n",param_1);
  local_14 = open64(param_1,0);
  if (local_14 == -1) {
    sStack_20a0.st_size = 0;
    if (DAT_000372c8 == 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_000192f0(5,"error opening state file %s: %s\n",param_1,pcVar2);
      local_10 = 1;
    }
    else {
      piVar1 = __errno_location();
      if (*piVar1 == 2) {
        FUN_000192f0(2,"state file %s does not exist\n",param_1);
      }
      else {
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        FUN_000192f0(5,"error opening state file %s; assuming empty state: %s\n",param_1,pcVar2);
      }
    }
  }
  else {
    iVar3 = fstat64(local_14,&sStack_20a0);
    if (iVar3 == -1) {
      sStack_20a0.st_size = 0;
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_000192f0(5,"error stat()ing state file %s: %s\n",param_1,pcVar2);
      local_10 = 1;
    }
  }
  iVar3 = FUN_00019d3c((uint)sStack_20a0.st_size / 16000);
  if (iVar3 != 0) {
    local_10 = 1;
  }
  if (local_10 == 0) {
    if ((uint)sStack_20a0.st_size != 0 || sStack_20a0.st_size._4_4_ != 0) {
      local_18 = fdopen(local_14,"r");
      if (local_18 == (FILE *)0x0) {
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        FUN_000192f0(5,"error opening state file %s: %s\n",param_1,pcVar2);
        close(local_14);
        return 1;
      }
      pcVar2 = fgets(acStack_2035 + 1,0x200f,local_18);
      if (pcVar2 == (char *)0x0) {
        FUN_000192f0(5,"error reading top line of %s\n",param_1);
        fclose(local_18);
        return 1;
      }
      iVar3 = strcmp(acStack_2035 + 1,"logrotate state -- version 1\n");
      if ((iVar3 != 0) &&
         (iVar3 = strcmp(acStack_2035 + 1,"logrotate state -- version 2\n"), iVar3 != 0)) {
        fclose(local_18);
        FUN_000192f0(5,"bad top line in state file %s\n",param_1);
        return 1;
      }
      local_c = local_c + 1;
      while( true ) {
        do {
          pcVar2 = fgets(acStack_2035 + 1,0x200f,local_18);
          if (pcVar2 == (char *)0x0) {
            fclose(local_18);
            return 0;
          }
          local_1c = strlen(acStack_2035 + 1);
          local_20a8 = (undefined4 *)0x0;
          local_c = local_c + 1;
          if (local_1c == 0) {
            FUN_000192f0(5,"line %d not parsable in state file %s\n",local_c,param_1);
            fclose(local_18);
            return 1;
          }
          if (acStack_2035[local_1c] != '\n') {
            FUN_000192f0(5,"line %d too long in state file %s\n",local_c,param_1);
            fclose(local_18);
            return 1;
          }
          acStack_2035[local_1c] = '\0';
        } while (local_1c == 1);
        local_20c0 = 0;
        local_20bc = 0;
        local_20b8 = 0;
        local_20b4 = 0;
        local_20b0 = 0;
        local_20ac = 0;
        iVar3 = poptParseArgvString(acStack_2035 + 1,&local_20a4,&local_20a8);
        if (((iVar3 != 0) || (local_20a4 != 2)) ||
           (iVar3 = sscanf((char *)local_20a8[1],"%d-%d-%d-%d:%d:%d",&local_20ac,&local_20b0,
                           &local_20b4,&local_20b8,&local_20bc,&local_20c0), iVar3 < 3)) {
          FUN_000192f0(5,"bad line %d in state file %s\n",local_c,param_1);
          free(local_20a8);
          fclose(local_18);
          return 1;
        }
        if ((local_20ac != 0x76c) && ((local_20ac < 0x7b2 || (0x834 < local_20ac)))) {
          FUN_000192f0(5,"bad year %d for file %s in state file %s\n",local_20ac,*local_20a8,param_1
                      );
          free(local_20a8);
          fclose(local_18);
          return 1;
        }
        if ((local_20b0 < 1) || (0xc < local_20b0)) {
          FUN_000192f0(5,"bad month %d for file %s in state file %s\n",local_20b0,*local_20a8,
                       param_1);
          free(local_20a8);
          fclose(local_18);
          return 1;
        }
        if ((local_20b4 < 0) || (0x1f < local_20b4)) {
          FUN_000192f0(5,"bad day %d for file %s in state file %s\n",local_20b4,*local_20a8,param_1)
          ;
          free(local_20a8);
          fclose(local_18);
          return 1;
        }
        if ((local_20b8 < 0) || (0x17 < local_20b8)) {
          FUN_000192f0(5,"bad hour %d for file %s in state file %s\n",local_20b8,*local_20a8,param_1
                      );
          free(local_20a8);
          fclose(local_18);
          return 1;
        }
        if ((local_20bc < 0) || (0x3b < local_20bc)) break;
        if ((local_20c0 < 0) || (0x3b < local_20c0)) {
          FUN_000192f0(5,"bad second %d for file %s in state file %s\n",local_20c0,*local_20a8,
                       param_1);
          free(local_20a8);
          fclose(local_18);
          return 1;
        }
        local_20ac = local_20ac + -0x76c;
        local_20b0 = local_20b0 + -1;
        local_20 = strdup((char *)*local_20a8);
        if (local_20 == (char *)0x0) {
          FUN_000192f0(5,"cannot allocate memory [%s():%d]\n","readState",0xbe0);
          free(local_20a8);
          fclose(local_18);
          return 1;
        }
        FUN_00019c68(local_20);
        local_24 = FUN_0001a1b0(local_20);
        if (local_24 == 0) {
          free(local_20a8);
          free(local_20);
          fclose(local_18);
          return 1;
        }
        memset((void *)(local_24 + 4),0,0x2c);
        *(int *)(local_24 + 0x18) = local_20ac;
        *(int *)(local_24 + 0x14) = local_20b0;
        *(int *)(local_24 + 0x10) = local_20b4;
        *(int *)(local_24 + 0xc) = local_20b8;
        *(int *)(local_24 + 8) = local_20bc;
        *(int *)(local_24 + 4) = local_20c0;
        *(undefined4 *)(local_24 + 0x24) = 0xffffffff;
        local_20c4 = mktime((tm *)(local_24 + 4));
        localtime_r(&local_20c4,(tm *)(local_24 + 4));
        free(local_20a8);
        free(local_20);
      }
      FUN_000192f0(5,"bad minute %d for file %s in state file %s\n",local_20bc,*local_20a8,param_1);
      free(local_20a8);
      fclose(local_18);
      return 1;
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  return local_10;
}



/* ===== FUN_00021a04 @ 00021a04 size=676 ===== */

undefined4 FUN_00021a04(char *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  stat64 sStack_78;
  undefined4 local_10;
  int local_c;
  
  iVar1 = strcmp(param_1,"/dev/null");
  if (iVar1 == 0) {
    return 0;
  }
  local_c = open64(param_1,0x80002);
  if (local_c == -1) {
    piVar2 = __errno_location();
    if (*piVar2 != 2) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      FUN_000192f0(5,"error opening state file %s: %s\n",param_1,pcVar3);
      return 1;
    }
    FUN_000192f0(2,"Creating stub state file: %s\n",param_1);
    local_c = open64(param_1,0xc1,0x1a0);
    if (local_c == -1) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      FUN_000192f0(5,"error creating stub state file %s: %s\n",param_1,pcVar3);
      return 1;
    }
  }
  if (param_2 == 0) {
    iVar1 = fstat64(local_c,&sStack_78);
    if (iVar1 == -1) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      FUN_000192f0(5,"error stat()ing state file %s: %s\n",param_1,pcVar3);
      close(local_c);
      uVar4 = 1;
    }
    else if ((sStack_78.st_mode & 4) == 0) {
      local_10 = 2;
      if (param_3 == 0) {
        local_10 = 6;
      }
      else {
        FUN_000192f0(2,"waiting for lock on state file %s\n",param_1);
      }
      iVar1 = flock(local_c,local_10);
      if (iVar1 == -1) {
        piVar2 = __errno_location();
        if (*piVar2 == 0xb) {
          FUN_000192f0(5,
                       "state file %s is already locked\nlogrotate does not support parallel execution on the same set of logfiles.\n"
                       ,param_1);
        }
        else {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          FUN_000192f0(5,"error acquiring lock on state file %s: %s\n",param_1,pcVar3);
        }
        close(local_c);
        uVar4 = 1;
      }
      else {
        FUN_000192f0(2,"acquired lock on state file %s\n",param_1);
        uVar4 = 0;
      }
    }
    else {
      FUN_000192f0(4,
                   "state file %s is world-readable and thus can be locked from other unprivileged users. Skipping lock acquisition...\n"
                   ,param_1);
      close(local_c);
      uVar4 = 0;
    }
  }
  else {
    FUN_000192f0(2,"Skip locking state file %s\n",param_1);
    close(local_c);
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== FUN_00021ca8 @ 00021ca8 size=1964 ===== */

undefined1 FUN_00021ca8(undefined4 param_1,undefined4 param_2)

{
  FILE *__stream;
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  char *local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  char *local_15c;
  undefined4 local_158;
  char *local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined4 *local_148;
  undefined4 local_144;
  char *local_140;
  undefined4 local_13c;
  undefined *local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined4 *local_12c;
  undefined4 local_128;
  char *local_124;
  char *local_120;
  char *local_11c;
  undefined1 local_118;
  undefined4 local_114;
  char **local_110;
  undefined4 local_10c;
  char *local_108;
  char *local_104;
  char *local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  int *local_f4;
  undefined4 local_f0;
  char *local_ec;
  undefined4 local_e8;
  char *local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  int *local_d8;
  undefined4 local_d4;
  char *local_d0;
  undefined4 local_cc;
  char *local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  char *local_b4;
  undefined4 local_b0;
  undefined *local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  char **local_a0;
  undefined4 local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  char *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  char *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  char *local_3c;
  char *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  FILE *local_1c;
  int local_18;
  uint local_14;
  
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = "/var/lib/logrotate.status";
  local_3c = (char *)0x0;
  local_1c = (FILE *)0x0;
  local_14 = 0;
  local_170 = "debug";
  local_16c = 100;
  local_168 = 0;
  local_164 = 0;
  local_160 = 100;
  local_15c = "Don\'t do anything, just test and print debug messages";
  local_158 = 0;
  local_154 = "force";
  local_150 = 0x66;
  local_14c = 0;
  local_148 = &local_2c;
  local_144 = 0;
  local_140 = "Force file rotation";
  local_13c = 0;
  local_138 = &DAT_00025ccc;
  local_134 = 0x6d;
  local_130 = 1;
  local_12c = &DAT_00037214;
  local_128 = 0;
  local_124 = "Command to send mail (instead of `/bin/mail\')";
  local_120 = "command";
  local_11c = "state";
  local_118 = 0x73;
  local_114 = 1;
  local_110 = &local_38;
  local_10c = 0;
  local_108 = "Path of state file";
  local_104 = "statefile";
  local_100 = "skip-state-lock";
  local_fc = 0;
  local_f8 = 0;
  local_f4 = &local_30;
  local_f0 = 0;
  local_ec = "Do not lock the state file";
  local_e8 = 0;
  local_e4 = "wait-for-state-lock";
  local_e0 = 0;
  local_dc = 0;
  local_d8 = &local_34;
  local_d4 = 0;
  local_d0 = "Wait for lock on the state file";
  local_cc = 0;
  local_c8 = "verbose";
  local_c4 = 0x76;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0x76;
  local_b4 = "Display messages during rotation";
  local_b0 = 0;
  local_ac = &DAT_00025dc0;
  local_a8 = 0x6c;
  local_a4 = 1;
  local_a0 = &local_3c;
  local_9c = 0x6c;
  local_98 = "Log file or \'syslog\' to log to syslog";
  local_94 = "logfile";
  local_90 = "version";
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0x56;
  local_7c = "Display version information";
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 4;
  local_68 = poptHelpOptions;
  local_64 = 0;
  local_60 = "Help options:";
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  FUN_000191a0(4);
  setlocale(6,"");
  local_20 = poptGetContext("logrotate",param_1,param_2,&local_170,0);
  poptReadDefaultConfig(local_20,1);
  poptSetOtherOptionHelp(local_20,"[OPTION...] <configfile>");
  while (local_24 = poptGetNextOpt(local_20), __stream = stderr, -1 < local_24) {
    switch(local_24) {
    case 0x56:
      printf("logrotate %s\n",&DAT_00025f08);
      putchar(10);
      printf("    Default mail command:       %s\n","/bin/mail");
      printf("    Default compress command:   %s\n","/bin/gzip");
      printf("    Default uncompress command: %s\n","/bin/gunzip");
      printf("    Default compress extension: %s\n",&DAT_00025fa4);
      printf("    Default state file path:    %s\n","/var/lib/logrotate.status");
      puts("    ACL support:                no");
      puts("    SELinux support:            no");
      poptFreeContext(local_20);
                    /* WARNING: Subroutine does not return */
      exit(0);
    case 100:
      DAT_000372c8 = 1;
      FUN_000192f0(4,
                   "logrotate in debug mode does nothing except printing debug messages!  Consider using verbose mode (-v) instead if this is not what you want.\n\n"
                  );
    case 0x76:
      FUN_000191a0(2);
      break;
    case 0x6c:
      iVar6 = strcmp(local_3c,"syslog");
      if (iVar6 == 0) {
        FUN_00019200(1);
      }
      else {
        local_1c = fopen64(local_3c,"w");
        pcVar1 = local_3c;
        if (local_1c == (FILE *)0x0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          FUN_000192f0(5,"error opening log file %s: %s\n",pcVar1,pcVar3);
        }
        else {
          FUN_000191d0(local_1c);
        }
      }
    }
  }
  if (local_24 < -1) {
    uVar4 = poptBadOption(local_20,1);
    uVar5 = poptStrerror(local_14);
    fprintf(__stream,"logrotate: bad argument %s: %s\n",uVar4,uVar5);
    poptFreeContext(local_20);
    uVar8 = 2;
  }
  else {
    local_28 = poptGetArgs(local_20);
    if (local_28 == 0) {
      fwrite("logrotate main - Copyright (C) 1995-2001 Red Hat, Inc.\n",1,0x37,stderr);
      fwrite("This may be freely redistributed under the terms of the GNU General Public License\n\n"
             ,1,0x54,stderr);
      poptPrintUsage(local_20,stderr,0);
      poptFreeContext(local_20);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if ((local_30 != 0) && (local_34 != 0)) {
      fwrite("logrotate: options --skip-state-lock and --wait-for-state-lock are mutually exclusive\n"
             ,1,0x56,stderr);
      poptFreeContext(local_20);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    DAT_000372f0 = 0;
    DAT_000372f4 = &DAT_000372f0;
    iVar6 = FUN_000147f8(local_28);
    if (iVar6 != 0) {
      local_14 = 1;
    }
    poptFreeContext(local_20);
    DAT_000372dc = time((time_t *)0x0);
    tzset();
    if ((DAT_000372c8 == 0) && (iVar6 = FUN_00021a04(local_38,local_30,local_34), iVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
      exit(3);
    }
    iVar6 = FUN_00020e58(local_38);
    if (iVar6 != 0) {
      local_14 = 1;
    }
    FUN_000192f0(2,"\nHandling %d logs\n",DAT_000372c4);
    for (local_18 = DAT_000372f0; local_18 != 0; local_18 = *(int *)(local_18 + 0xa0)) {
      uVar7 = FUN_0001f34c(local_18,local_2c);
      local_14 = local_14 | uVar7;
    }
    if (DAT_000372c8 == 0) {
      uVar7 = FUN_00020414(local_38);
      local_14 = local_14 | uVar7;
    }
    uVar8 = local_14 != 0;
  }
  return uVar8;
}



/* ===== FUN_000224d8 @ 000224d8 size=168 ===== */

ulonglong FUN_000224d8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}



/* ===== FUN_00022580 @ 00022580 size=32 ===== */

void FUN_00022580(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000224d8();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000225a0 @ 000225a0 size=228 ===== */

undefined8 FUN_000225a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int local_8;
  
  if (param_4 == 0 && param_3 == 0) {
    if (param_2 < 0) {
      param_2 = -0x80000000;
    }
    else if (param_2 != 0 || param_1 != 0) {
      param_2 = 0x7fffffff;
    }
    local_8 = param_2;
    iVar1 = raise(8);
    return CONCAT44(local_8,iVar1);
  }
  if (-1 < param_2) {
    if (param_4 < 0) {
      uVar2 = FUN_00022708(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_00022708();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_00022708(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_00022708(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_00022684 @ 00022684 size=44 ===== */

int FUN_00022684(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (0.0 <= (double)CONCAT44(param_2,param_1)) {
    iVar1 = FUN_000226b0();
    return iVar1;
  }
  iVar1 = FUN_000226b0(param_1,param_2 ^ 0x80000000);
  return -iVar1;
}



/* ===== FUN_000226b0 @ 000226b0 size=72 ===== */

undefined8 FUN_000226b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  
  dVar2 = (double)CONCAT44(param_2,param_1) * DAT_000226f8;
  iVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
  dVar2 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)CONCAT44(param_2,param_1) + -dVar2 * DAT_00022700;
  return CONCAT44(iVar1,(uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}



/* ===== FUN_00022708 @ 00022708 size=328 ===== */

undefined8 FUN_00022708(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  bVar8 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar8 = param_3 <= param_1;
  }
  if (bVar8) {
    if (param_4 == 0) {
      iVar3 = LZCOUNT(param_3) + 0x20;
    }
    else {
      iVar3 = LZCOUNT(param_4);
    }
    if (param_2 == 0) {
      iVar6 = LZCOUNT(param_1) + 0x20;
    }
    else {
      iVar6 = LZCOUNT(param_2);
    }
    uVar7 = iVar3 - iVar6;
    uVar2 = param_4 << (uVar7 & 0xff) | param_3 << (uVar7 - 0x20 & 0xff) |
            param_3 >> (0x20 - uVar7 & 0xff);
    param_3 = param_3 << (uVar7 & 0xff);
    bVar8 = uVar2 <= param_2;
    if (param_2 == uVar2) {
      bVar8 = param_3 <= param_1;
    }
    if (bVar8) {
      bVar8 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = param_2 - (uVar2 + bVar8);
      uVar9 = CONCAT44(0 << (uVar7 & 0xff) | 1 << (uVar7 - 0x20 & 0xff) |
                       1U >> (0x20 - uVar7 & 0xff),1 << (uVar7 & 0xff));
    }
    else {
      uVar9 = 0;
    }
    if (uVar7 != 0) {
      uVar1 = param_3 >> 1 | uVar2 << 0x1f;
      uVar2 = uVar2 >> 1;
      uVar4 = uVar7;
      do {
        bVar8 = uVar2 <= param_2;
        if (param_2 == uVar2) {
          bVar8 = uVar1 <= param_1;
        }
        if (bVar8) {
          bVar8 = param_1 < uVar1;
          uVar5 = param_1 - uVar1;
          param_1 = uVar5 * 2 + 1;
          param_2 = (param_2 - (uVar2 + bVar8)) * 2 + (uint)CARRY4(uVar5,uVar5) +
                    (uint)(0xfffffffe < uVar5 * 2);
        }
        else {
          bVar8 = CARRY4(param_1,param_1);
          param_1 = param_1 * 2;
          param_2 = param_2 * 2 + (uint)bVar8;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar10 = CONCAT44(param_2,param_1);
      param_1 = param_1 >> (uVar7 & 0xff) | param_2 << (0x20 - uVar7 & 0xff) |
                param_2 >> (uVar7 - 0x20 & 0xff);
      param_2 = param_2 >> (uVar7 & 0xff);
      uVar9 = VectorAdd(uVar9,uVar10,8);
      uVar9 = VectorSub(uVar9,CONCAT44(param_2 << (uVar7 & 0xff) | param_1 << (uVar7 - 0x20 & 0xff)
                                       | param_1 >> (0x20 - uVar7 & 0xff),param_1 << (uVar7 & 0xff))
                        ,8);
    }
  }
  else {
    uVar9 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return uVar9;
}



/* ===== _fini @ 00022850 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00038000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0003800c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchdir @ 00038010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchdir(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00038014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00038018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwnam @ 0003801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwnam(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 00038020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 00038024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptPrintUsage @ 00038028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptPrintUsage(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0003802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 00038030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 00038034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00038038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0003803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptGetContext @ 00038040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptGetContext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncat @ 00038044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00038048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iswblank @ 0003804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswblank(wint_t __wc)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00038050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptGetNextOpt @ 00038054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptGetNextOpt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00038058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcoll @ 00038060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcoll(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 00038064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 00038068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dirname @ 00038070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * dirname(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strptime @ 00038074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strptime(char *__s,char *__fmt,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptParseArgvString @ 00038078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptParseArgvString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0003807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::glob64 @ 00038080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int glob64(char *__pattern,int __flags,__errfunc *__errfunc,glob64_t *__pglob)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 00038084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 00038088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchown @ 0003808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mbrtowc @ 00038090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00038094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwuid @ 00038098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0003809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 000380a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tzset @ 000380a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void tzset(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000380a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 000380ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000380b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setegid @ 000380b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setegid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 000380b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 000380bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000380c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 000380c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000380c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 000380cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 000380d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 000380d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000380d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000380dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::futimens @ 000380e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int futimens(int __fd,timespec *__times)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 000380e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000380e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 000380ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlocale @ 000380f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 000380f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000380f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 000380fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsyslog @ 00038100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vsyslog(int __pri,char *__fmt,__gnuc_va_list __ap)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 00038104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00038108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seteuid @ 0003810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int seteuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execlp @ 00038110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execlp(char *__file,char *__arg,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00038114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execl @ 00038118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0003811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00038120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 00038124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::openlog @ 00038128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0003812c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00038130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asprintf @ 00038134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime_r @ 00038138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0003813c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00038140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setgid @ 00038144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptFreeContext @ 00038148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptFreeContext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 0003814c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00038150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chdir @ 00038154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptDupArgv @ 00038158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptDupArgv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptBadOption @ 0003815c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptBadOption(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 00038160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fnmatch @ 00038164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrnam @ 00038168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003816c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptStrerror @ 00038170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptStrerror(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 00038174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00038178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::globfree64 @ 0003817c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void globfree64(glob64_t *__pglob)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrgid @ 00038180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptReadDefaultConfig @ 00038184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptReadDefaultConfig(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00038188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003818c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setuid @ 00038190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptSetOtherOptionHelp @ 00038194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptSetOtherOptionHelp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait @ 00038198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t wait(void *__stat_loc)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftruncate64 @ 0003819c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate64(int __fd,__off64_t __length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iswprint @ 000381a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswprint(wint_t __wc)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 000381a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 000381a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup2 @ 000381ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 000381b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putenv @ 000381b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putenv(char *__string)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execvp @ 000381b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000381bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__xpg_basename @ 000381c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 000381c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closelog @ 000381c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::flock @ 000381cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void flock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 000381d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 000381d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000381d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::difftime @ 000381dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchmod @ 000381e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 000381e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000381e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poptGetArgs @ 000381ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void poptGetArgs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::madvise @ 000381f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int madvise(void *__addr,size_t __len,int __advice)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat64 @ 000381f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 000381f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 000381fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rename @ 00038200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


