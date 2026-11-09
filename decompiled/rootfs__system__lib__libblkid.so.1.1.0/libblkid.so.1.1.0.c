// libblkid.so.1.1.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 000151e8 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::stpcpy @ 0001520c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_stpcpy_0004c00c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00015228 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0004c014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::warnx @ 00015234 size=12 ===== */

void warnx(void)

{
  (*(code *)PTR_warnx_0004c018)();
  return;
}



/* ===== <EXTERNAL>::waitpid @ 00015240 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_0004c01c)(__pid);
  return _Var1;
}



/* ===== blkid_devno_to_devname @ 0001524c size=12 ===== */

void blkid_devno_to_devname(void)

{
  (*(code *)PTR_blkid_devno_to_devname_0004c020)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00015258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0004c024)(__fd);
  return iVar1;
}



/* ===== blkid_probe_reset_superblocks_filter @ 00015264 size=12 ===== */

void blkid_probe_reset_superblocks_filter(void)

{
  (*(code *)PTR_blkid_probe_reset_superblocks_filter_0004c028)();
  return;
}



/* ===== blkid_probe_all @ 00015270 size=12 ===== */

void blkid_probe_all(void)

{
  (*(code *)PTR_blkid_probe_all_0004c02c)();
  return;
}



/* ===== <EXTERNAL>::strtok_r @ 0001527c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok_r(char *__s,char *__delim,char **__save_ptr)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_r_0004c030)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::posix_fadvise64 @ 00015288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_fadvise64(int __fd,__off64_t __offset,__off64_t __len,int __advise)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_posix_fadvise64_0004c034)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 00015294 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_0004c038)();
  return _Var1;
}



/* ===== <EXTERNAL>::random @ 000152a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_0004c03c)();
  return lVar1;
}



/* ===== <EXTERNAL>::fdopendir @ 000152bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * fdopendir(int __fd)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_fdopendir_0004c044)(__fd);
  return pDVar1;
}



/* ===== <EXTERNAL>::strerror @ 000152c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0004c048)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::strndup @ 000152d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_0004c04c)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 000152e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_0004c050)();
  return _Var1;
}



/* ===== <EXTERNAL>::stat64 @ 000152f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0004c054)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__xpg_basename @ 000152fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR___xpg_basename_0004c058)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::memmove @ 00015308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0004c05c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__fpending @ 00015314 size=12 ===== */

void __fpending(void)

{
  (*(code *)PTR___fpending_0004c060)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00015320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0004c064)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::syscall @ 0001532c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0004c068)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::faccessat @ 00015338 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int faccessat(int __fd,char *__file,int __type,int __flag)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_faccessat_0004c06c)(__fd);
  return iVar1;
}



/* ===== blkid_put_cache @ 00015344 size=12 ===== */

void blkid_put_cache(void)

{
  (*(code *)PTR_blkid_put_cache_0004c070)();
  return;
}



/* ===== blkid_probe_get_partitions @ 00015350 size=12 ===== */

void blkid_probe_get_partitions(void)

{
  (*(code *)PTR_blkid_probe_get_partitions_0004c074)();
  return;
}



/* ===== blkid_find_dev_with_tag @ 0001535c size=12 ===== */

void blkid_find_dev_with_tag(void)

{
  (*(code *)PTR_blkid_find_dev_with_tag_0004c078)();
  return;
}



/* ===== blkid_dev_has_tag @ 00015368 size=12 ===== */

void blkid_dev_has_tag(void)

{
  (*(code *)PTR_blkid_dev_has_tag_0004c07c)();
  return;
}



/* ===== blkid_verify @ 00015374 size=12 ===== */

void blkid_verify(void)

{
  (*(code *)PTR_blkid_verify_0004c080)();
  return;
}



/* ===== <EXTERNAL>::getgrgid @ 00015380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrgid_0004c084)(__gid);
  return pgVar1;
}



/* ===== <EXTERNAL>::strtoimax @ 0001538c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

intmax_t strtoimax(char *__nptr,char **__endptr,int __base)

{
  intmax_t iVar1;
  
  iVar1 = (*(code *)PTR_strtoimax_0004c088)(__nptr);
  return iVar1;
}



/* ===== blkid_partition_get_table @ 00015398 size=12 ===== */

void blkid_partition_get_table(void)

{
  (*(code *)PTR_blkid_partition_get_table_0004c08c)();
  return;
}



/* ===== <EXTERNAL>::getenv @ 000153a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0004c090)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fchmod @ 000153b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchmod_0004c094)(__fd);
  return iVar1;
}



/* ===== blkid_get_dev @ 000153bc size=12 ===== */

void blkid_get_dev(void)

{
  (*(code *)PTR_blkid_get_dev_0004c098)();
  return;
}



/* ===== <EXTERNAL>::strtold @ 000153c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtold(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtold_0004c09c)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::getegid @ 000153d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_0004c0a0)();
  return _Var1;
}



/* ===== <EXTERNAL>::bsearch @ 000153e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_bsearch_0004c0a4)(__key);
  return pvVar1;
}



/* ===== <EXTERNAL>::__libc_current_sigrtmax @ 000153ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmax(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___libc_current_sigrtmax_0004c0a8)();
  return iVar1;
}



/* ===== <EXTERNAL>::getpid @ 000153f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0004c0ac)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 00015404 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0004c0b0)(__base);
  return;
}



/* ===== <EXTERNAL>::fscanf @ 00015410 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0004c0b4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 0001541c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0004c0b8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 00015428 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0004c0bc)();
  return;
}



/* ===== <EXTERNAL>::prctl @ 00015434 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0004c0c0)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00015440 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0004c0c4)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00015450 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0004c0c8)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::readlink @ 0001545c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0004c0cc)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00015478 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0004c0d4)();
  return;
}



/* ===== <EXTERNAL>::errx @ 00015484 size=12 ===== */

void errx(void)

{
  (*(code *)PTR_errx_0004c0d8)();
  return;
}



/* ===== <EXTERNAL>::dup2 @ 00015490 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup2_0004c0dc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::tolower @ 000154a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_0004c0e4)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::getuid @ 000154b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_0004c0e8)();
  return _Var1;
}



/* ===== <EXTERNAL>::rewinddir @ 000154c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewinddir(DIR *__dirp)

{
  (*(code *)PTR_rewinddir_0004c0ec)(__dirp);
  return;
}



/* ===== <EXTERNAL>::feof @ 000154cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_0004c0f0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000154d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0004c0f4)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 000154e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_0004c0f8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::openat64 @ 000154f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int openat64(int __fd,char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_openat64_0004c0fc)(__fd);
  return iVar1;
}



/* ===== blkid_new_probe_from_filename @ 000154fc size=12 ===== */

void blkid_new_probe_from_filename(void)

{
  (*(code *)PTR_blkid_new_probe_from_filename_0004c100)();
  return;
}



/* ===== <EXTERNAL>::vsnprintf @ 00015508 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0004c104)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoll @ 00015514 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_strtoll_0004c108)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::strtoumax @ 00015520 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uintmax_t strtoumax(char *__nptr,char **__endptr,int __base)

{
  uintmax_t uVar1;
  
  uVar1 = (*(code *)PTR_strtoumax_0004c10c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::strtoul @ 0001552c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0004c110)(__nptr);
  return uVar1;
}



/* ===== blkid_parttable_get_type @ 00015538 size=12 ===== */

void blkid_parttable_get_type(void)

{
  (*(code *)PTR_blkid_parttable_get_type_0004c114)();
  return;
}



/* ===== blkid_probe_hide_range @ 00015544 size=12 ===== */

void blkid_probe_hide_range(void)

{
  (*(code *)PTR_blkid_probe_hide_range_0004c118)();
  return;
}



/* ===== <EXTERNAL>::select @ 00015550 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0004c11c)(__nfds);
  return iVar1;
}



/* ===== blkid_do_safeprobe @ 0001555c size=12 ===== */

void blkid_do_safeprobe(void)

{
  (*(code *)PTR_blkid_do_safeprobe_0004c120)();
  return;
}



/* ===== <EXTERNAL>::mempcpy @ 00015578 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mempcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mempcpy_0004c128)(__dest);
  return pvVar1;
}



/* ===== blkid_get_cache @ 00015590 size=12 ===== */

void blkid_get_cache(void)

{
  (*(code *)PTR_blkid_get_cache_0004c130)();
  return;
}



/* ===== <EXTERNAL>::realpath @ 0001559c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_realpath_0004c134)(__name);
  return pcVar1;
}



/* ===== blkid_probe_reset_hints @ 000155a8 size=12 ===== */

void blkid_probe_reset_hints(void)

{
  (*(code *)PTR_blkid_probe_reset_hints_0004c138)();
  return;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000155b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0004c13c)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== blkid_encode_string @ 000155c0 size=12 ===== */

void blkid_encode_string(void)

{
  (*(code *)PTR_blkid_encode_string_0004c140)();
  return;
}



/* ===== <EXTERNAL>::strncasecmp @ 000155cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_0004c144)(__s1);
  return iVar1;
}



/* ===== blkid_tag_iterate_begin @ 000155d8 size=12 ===== */

void blkid_tag_iterate_begin(void)

{
  (*(code *)PTR_blkid_tag_iterate_begin_0004c148)();
  return;
}



/* ===== blkid_probe_is_wholedisk @ 000155e4 size=12 ===== */

void blkid_probe_is_wholedisk(void)

{
  (*(code *)PTR_blkid_probe_is_wholedisk_0004c14c)();
  return;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 000155f0 size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_0004c150)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000155fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0004c154)();
  return;
}



/* ===== <EXTERNAL>::gmtime_r @ 00015608 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_r_0004c158)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::fstat64 @ 00015614 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_0004c15c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtol @ 00015620 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0004c160)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::pipe @ 0001562c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_0004c164)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::__tls_get_addr @ 00015638 size=12 ===== */

void __tls_get_addr(void)

{
  (*(code *)PTR___tls_get_addr_0004c168)();
  return;
}



/* ===== <EXTERNAL>::strnlen @ 00015644 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_0004c16c)(__string);
  return sVar1;
}



/* ===== <EXTERNAL>::uname @ 00015650 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0004c170)(__name);
  return iVar1;
}



/* ===== blkid_get_devname @ 0001565c size=12 ===== */

void blkid_get_devname(void)

{
  (*(code *)PTR_blkid_get_devname_0004c174)();
  return;
}



/* ===== <EXTERNAL>::rename @ 00015668 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_0004c178)(__old);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00015674 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0004c17c)(__s);
  return pcVar1;
}



/* ===== blkid_parse_tag_string @ 00015680 size=12 ===== */

void blkid_parse_tag_string(void)

{
  (*(code *)PTR_blkid_parse_tag_string_0004c180)();
  return;
}



/* ===== <EXTERNAL>::nanosleep @ 0001568c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_0004c184)(__requested_time);
  return iVar1;
}



/* ===== blkid_partition_is_extended @ 00015698 size=12 ===== */

void blkid_partition_is_extended(void)

{
  (*(code *)PTR_blkid_partition_is_extended_0004c188)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 000156a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0004c18c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtod @ 000156b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtod_0004c190)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== blkid_partition_get_type @ 000156c0 size=12 ===== */

void blkid_partition_get_type(void)

{
  (*(code *)PTR_blkid_partition_get_type_0004c194)();
  return;
}



/* ===== <EXTERNAL>::write @ 000156cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0004c198)(__fd);
  return sVar1;
}



/* ===== blkid_probe_get_devno @ 000156d8 size=12 ===== */

void blkid_probe_get_devno(void)

{
  (*(code *)PTR_blkid_probe_get_devno_0004c19c)();
  return;
}



/* ===== blkid_partition_get_start @ 000156e4 size=12 ===== */

void blkid_partition_get_start(void)

{
  (*(code *)PTR_blkid_partition_get_start_0004c1a0)();
  return;
}



/* ===== blkid_probe_lookup_value @ 000156f0 size=12 ===== */

void blkid_probe_lookup_value(void)

{
  (*(code *)PTR_blkid_probe_lookup_value_0004c1a4)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000156fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0004c1a8)(__stream);
  return iVar1;
}



/* ===== blkid_new_probe @ 00015708 size=12 ===== */

void blkid_new_probe(void)

{
  (*(code *)PTR_blkid_new_probe_0004c1ac)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00015714 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0004c1b0)();
  return;
}



/* ===== blkid_partition_get_type_string @ 00015720 size=12 ===== */

void blkid_partition_get_type_string(void)

{
  (*(code *)PTR_blkid_partition_get_type_string_0004c1b4)();
  return;
}



/* ===== <EXTERNAL>::_stdlib_mb_cur_max @ 0001572c size=12 ===== */

void _stdlib_mb_cur_max(void)

{
  (*(code *)PTR__stdlib_mb_cur_max_0004c1b8)();
  return;
}



/* ===== blkid_partition_get_uuid @ 00015738 size=12 ===== */

void blkid_partition_get_uuid(void)

{
  (*(code *)PTR_blkid_partition_get_uuid_0004c1bc)();
  return;
}



/* ===== blkid_partlist_get_partition @ 00015744 size=12 ===== */

void blkid_partlist_get_partition(void)

{
  (*(code *)PTR_blkid_partlist_get_partition_0004c1c0)();
  return;
}



/* ===== blkid_partition_get_name @ 00015750 size=12 ===== */

void blkid_partition_get_name(void)

{
  (*(code *)PTR_blkid_partition_get_name_0004c1c4)();
  return;
}



/* ===== blkid_free_probe @ 0001575c size=12 ===== */

void blkid_free_probe(void)

{
  (*(code *)PTR_blkid_free_probe_0004c1c8)();
  return;
}



/* ===== <EXTERNAL>::umask @ 00015768 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = (*(code *)PTR_umask_0004c1cc)(__mask);
  return _Var1;
}



/* ===== blkid_partition_get_flags @ 00015774 size=12 ===== */

void blkid_partition_get_flags(void)

{
  (*(code *)PTR_blkid_partition_get_flags_0004c1d0)();
  return;
}



/* ===== blkid_init_debug @ 00015780 size=12 ===== */

void blkid_init_debug(void)

{
  (*(code *)PTR_blkid_init_debug_0004c1d4)();
  return;
}



/* ===== <EXTERNAL>::mktime @ 0001578c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0004c1d8)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::ferror @ 00015798 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ferror_0004c1dc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 000157a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0004c1e0)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::flock @ 000157b0 size=12 ===== */

void flock(void)

{
  (*(code *)PTR_flock_0004c1e4)();
  return;
}



/* ===== <EXTERNAL>::setgid @ 000157bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgid(__gid_t __gid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setgid_0004c1e8)(__gid);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 000157c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0004c1ec)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::dirfd @ 000157d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dirfd_0004c1f0)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000157e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0004c1f4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::unlink @ 000157ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_0004c1f8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::setenv @ 000157f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0004c1fc)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00015804 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_0004c200)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00015810 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0004c204)(__ptr);
  return pvVar1;
}



/* ===== blkid_reset_probe @ 0001581c size=12 ===== */

void blkid_reset_probe(void)

{
  (*(code *)PTR_blkid_reset_probe_0004c208)();
  return;
}



/* ===== <EXTERNAL>::__cxa_atexit @ 00015828 size=12 ===== */

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0004c20c)();
  return;
}



/* ===== blkid_probe_get_sectorsize @ 00015834 size=12 ===== */

void blkid_probe_get_sectorsize(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001583c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_blkid_probe_get_sectorsize_0004c210)();
  return;
}



/* ===== <EXTERNAL>::readdir64 @ 00015840 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_0004c214)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::strtok @ 0001584c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_0004c218)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00015858 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0004c21c)(__s1);
  return iVar1;
}



/* ===== blkid_probe_set_superblocks_flags @ 00015864 size=2 ===== */

void blkid_probe_set_superblocks_flags(void)

{
  (*(code *)PTR_blkid_probe_set_superblocks_flags_0004c220)();
  return;
}



/* ===== blkid_probe_set_superblocks_flags @ 00015868 size=12 ===== */

void blkid_probe_set_superblocks_flags(void)

{
  (*(code *)PTR_blkid_probe_set_superblocks_flags_0004c220)();
  return;
}



/* ===== <EXTERNAL>::fdopen @ 00015878 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_0004c224)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::fork @ 00015884 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_0004c228)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 00015890 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0004c22c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::execv @ 0001589c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execv_0004c230)(__path);
  return iVar1;
}



/* ===== blkid_probe_step_back @ 000158a8 size=12 ===== */

void blkid_probe_step_back(void)

{
  (*(code *)PTR_blkid_probe_step_back_0004c234)();
  return;
}



/* ===== <EXTERNAL>::sigaction @ 000158b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_0004c238)(__sig);
  return iVar1;
}



/* ===== blkid_get_library_version @ 000158c0 size=12 ===== */

void blkid_get_library_version(void)

{
  (*(code *)PTR_blkid_get_library_version_0004c23c)();
  return;
}



/* ===== <EXTERNAL>::strdup @ 000158d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0004c240)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strtoull @ 000158dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_0004c244)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 000158e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0004c248)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000158f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0004c24c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::err @ 00015904 size=12 ===== */

void err(void)

{
  (*(code *)PTR_err_0004c250)();
  return;
}



/* ===== <EXTERNAL>::getgrnam_r @ 00015910 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getgrnam_r(char *__name,group *__resultbuf,char *__buffer,size_t __buflen,group **__result)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getgrnam_r_0004c254)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::fclose @ 0001591c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0004c258)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00015928 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0004c25c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::getppid @ 00015934 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getppid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getppid_0004c260)();
  return _Var1;
}



/* ===== <EXTERNAL>::time @ 00015940 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0004c264)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 0001594c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0004c268)(__name);
  return pDVar1;
}



/* ===== blkid_partition_get_size @ 00015968 size=12 ===== */

void blkid_partition_get_size(void)

{
  (*(code *)PTR_blkid_partition_get_size_0004c270)();
  return;
}



/* ===== <EXTERNAL>::getpwuid_r @ 00015974 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpwuid_r(__uid_t __uid,passwd *__resultbuf,char *__buffer,size_t __buflen,passwd **__result)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpwuid_r_0004c274)(__uid);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00015984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0004c278)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::ttyname @ 00015990 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ttyname(int __fd)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ttyname_0004c27c)(__fd);
  return pcVar1;
}



/* ===== <EXTERNAL>::getpwuid @ 0001599c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwuid_0004c280)(__uid);
  return ppVar1;
}



/* ===== <EXTERNAL>::dup @ 000159a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup_0004c284)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getcwd @ 000159b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_0004c288)(__buf);
  return pcVar1;
}



/* ===== blkid_partition_get_partno @ 000159c0 size=12 ===== */

void blkid_partition_get_partno(void)

{
  (*(code *)PTR_blkid_partition_get_partno_0004c28c)();
  return;
}



/* ===== <EXTERNAL>::fstatat64 @ 000159cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatat64(int __fd,char *__file,stat64 *__buf,int __flag)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstatat64_0004c290)(__fd);
  return iVar1;
}



/* ===== blkid_probe_enable_superblocks @ 000159d8 size=12 ===== */

void blkid_probe_enable_superblocks(void)

{
  (*(code *)PTR_blkid_probe_enable_superblocks_0004c294)();
  return;
}



/* ===== <EXTERNAL>::fgetc @ 000159e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_0004c298)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000159f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0004c29c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::asprintf @ 000159fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_0004c2a0)(__ptr);
  return iVar1;
}



/* ===== blkid_probe_reset_buffers @ 00015a08 size=12 ===== */

void blkid_probe_reset_buffers(void)

{
  (*(code *)PTR_blkid_probe_reset_buffers_0004c2a4)();
  return;
}



/* ===== blkid_probe_get_value @ 00015a14 size=12 ===== */

void blkid_probe_get_value(void)

{
  (*(code *)PTR_blkid_probe_get_value_0004c2a8)();
  return;
}



/* ===== <EXTERNAL>::strcspn @ 00015a20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0004c2ac)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::srandom @ 00015a2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
  (*(code *)PTR_srandom_0004c2b0)(__seed);
  return;
}



/* ===== <EXTERNAL>::strsep @ 00015a38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_0004c2b4)(__stringp);
  return pcVar1;
}



/* ===== <EXTERNAL>::fstatfs64 @ 00015a44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatfs64(int __fildes,statfs64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstatfs64_0004c2b8)(__fildes);
  return iVar1;
}



/* ===== <EXTERNAL>::getpwnam_r @ 00015a50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpwnam_r(char *__name,passwd *__resultbuf,char *__buffer,size_t __buflen,passwd **__result)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpwnam_r_0004c2bc)(__name);
  return iVar1;
}



/* ===== blkid_probe_set_device @ 00015a5c size=12 ===== */

void blkid_probe_set_device(void)

{
  (*(code *)PTR_blkid_probe_set_device_0004c2c0)();
  return;
}



/* ===== blkid_evaluate_tag @ 00015a68 size=12 ===== */

void blkid_evaluate_tag(void)

{
  (*(code *)PTR_blkid_evaluate_tag_0004c2c4)();
  return;
}



/* ===== <EXTERNAL>::fsync @ 00015a74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0004c2c8)(__fd);
  return iVar1;
}



/* ===== blkid_probe_set_hint @ 00015a80 size=12 ===== */

void blkid_probe_set_hint(void)

{
  (*(code *)PTR_blkid_probe_set_hint_0004c2cc)();
  return;
}



/* ===== blkid_tag_next @ 00015a8c size=12 ===== */

void blkid_tag_next(void)

{
  (*(code *)PTR_blkid_tag_next_0004c2d0)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00015a9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0004c2d4)(__c);
  return iVar1;
}



/* ===== blkid_partlist_numof_partitions @ 00015aa8 size=12 ===== */

void blkid_partlist_numof_partitions(void)

{
  (*(code *)PTR_blkid_partlist_numof_partitions_0004c2d8)();
  return;
}



/* ===== blkid_probe_get_fd @ 00015ab4 size=12 ===== */

void blkid_probe_get_fd(void)

{
  (*(code *)PTR_blkid_probe_get_fd_0004c2dc)();
  return;
}



/* ===== blkid_probe_filter_superblocks_usage @ 00015ac0 size=2 ===== */

void blkid_probe_filter_superblocks_usage(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_blkid_probe_filter_superblocks_usage_0004c2e0)();
  return;
}



/* ===== blkid_probe_filter_superblocks_usage @ 00015ac4 size=12 ===== */

void blkid_probe_filter_superblocks_usage(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_blkid_probe_filter_superblocks_usage_0004c2e0)();
  return;
}



/* ===== <EXTERNAL>::localtime_r @ 00015ad0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_0004c2e4)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strftime @ 00015adc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_0004c2e8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::sendfile64 @ 00015af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendfile64(int __out_fd,int __in_fd,__off64_t *__offset,size_t __count)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendfile64_0004c2f0)(__out_fd);
  return sVar1;
}



/* ===== blkid_probe_get_size @ 00015b00 size=12 ===== */

void blkid_probe_get_size(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_blkid_probe_get_size_0004c2f4)();
  return;
}



/* ===== <EXTERNAL>::access @ 00015b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0004c2f8)(__name);
  return iVar1;
}



/* ===== blkid_probe_set_partitions_flags @ 00015b18 size=12 ===== */

void blkid_probe_set_partitions_flags(void)

{
  (*(code *)PTR_blkid_probe_set_partitions_flags_0004c2fc)();
  return;
}



/* ===== blkid_probe_get_wholedisk_devno @ 00015b24 size=12 ===== */

void blkid_probe_get_wholedisk_devno(void)

{
  (*(code *)PTR_blkid_probe_get_wholedisk_devno_0004c300)();
  return;
}



/* ===== <EXTERNAL>::vfscanf @ 00015b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfscanf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfscanf_0004c304)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strptime @ 00015b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strptime(char *__s,char *__fmt,tm *__tp)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strptime_0004c308)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::readlinkat @ 00015b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlinkat(int __fd,char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlinkat_0004c30c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00015b54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0004c310)();
  return piVar1;
}



/* ===== <EXTERNAL>::link @ 00015b60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int link(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_link_0004c314)(__from);
  return iVar1;
}



/* ===== <EXTERNAL>::exit @ 00015b6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0004c318)(__status);
  return;
}



/* ===== blkid_probe_all_new @ 00015b78 size=12 ===== */

void blkid_probe_all_new(void)

{
  (*(code *)PTR_blkid_probe_all_new_0004c31c)();
  return;
}



/* ===== <EXTERNAL>::getrandom @ 00015b84 size=12 ===== */

void getrandom(void)

{
  (*(code *)PTR_getrandom_0004c320)();
  return;
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 00015b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_makedev_0004c324)(__major);
  return uVar1;
}



/* ===== blkid_probe_enable_partitions @ 00015b9c size=12 ===== */

void blkid_probe_enable_partitions(void)

{
  (*(code *)PTR_blkid_probe_enable_partitions_0004c328)();
  return;
}



/* ===== blkid_partition_is_logical @ 00015ba8 size=12 ===== */

void blkid_partition_is_logical(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_blkid_partition_is_logical_0004c32c)();
  return;
}



/* ===== <EXTERNAL>::strspn @ 00015bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_0004c330)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 00015bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0004c334)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 00015bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_0004c338)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::__assert @ 00015bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_0004c33c)(__assertion);
  return;
}



/* ===== <EXTERNAL>::strchr @ 00015be4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0004c340)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00015bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0004c344)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::execvp @ 00015bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execvp_0004c348)(__file);
  return iVar1;
}



/* ===== blkid_partlist_devno_to_partition @ 00015c08 size=12 ===== */

void blkid_partlist_devno_to_partition(void)

{
  (*(code *)PTR_blkid_partlist_devno_to_partition_0004c34c)();
  return;
}



/* ===== <EXTERNAL>::closedir @ 00015c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0004c350)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::warn @ 00015c20 size=12 ===== */

void warn(void)

{
  (*(code *)PTR_warn_0004c354)();
  return;
}



/* ===== <EXTERNAL>::vasprintf @ 00015c2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_0004c358)(__ptr);
  return iVar1;
}



/* ===== blkid_devno_to_wholedisk @ 00015c38 size=12 ===== */

void blkid_devno_to_wholedisk(void)

{
  (*(code *)PTR_blkid_devno_to_wholedisk_0004c35c)();
  return;
}



/* ===== <EXTERNAL>::setuid @ 00015c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setuid(__uid_t __uid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setuid_0004c360)(__uid);
  return iVar1;
}



/* ===== <EXTERNAL>::jrand48 @ 00015c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long jrand48(ushort *__xsubi)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_jrand48_0004c364)(__xsubi);
  return lVar1;
}



/* ===== <EXTERNAL>::mkdir @ 00015c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0004c368)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00015c68 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0004c36c)();
  return;
}



/* ===== <EXTERNAL>::close @ 00015c74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0004c370)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00015c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0004c374)(__s);
  return iVar1;
}



/* ===== blkid_probe_numof_values @ 00015c8c size=12 ===== */

void blkid_probe_numof_values(void)

{
  (*(code *)PTR_blkid_probe_numof_values_0004c378)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00015c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0004c37c)(__sig);
  return iVar1;
}



/* ===== blkid_tag_iterate_end @ 00015ca8 size=12 ===== */

void blkid_tag_iterate_end(void)

{
  (*(code *)PTR_blkid_tag_iterate_end_0004c380)();
  return;
}



/* ===== <EXTERNAL>::free @ 00015cb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004c384)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00015cc8 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0004c388)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00015cd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0004c38c)(__filename);
  return pFVar1;
}



/* ===== entry @ 00015ce0 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00015d2c + 0x15cf8 == DAT_00015d28 + 0x15cf0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00015d30 + 0x15d00 + DAT_00015d34);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00015d9c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00015e10 + 0x15db8;
  if (*(char *)(DAT_00015e0c + 0x15dac) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00015e14) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00015e18 + 0x15dd8));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00015e1c) != 0) {
    __deregister_frame_info(DAT_00015e20 + 0x15df8);
  }
  *(undefined1 *)(DAT_00015e24 + 0x15e08) = 1;
  return;
}



/* ===== _INIT_0 @ 00015e28 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00015e60 + 0x15e38 + DAT_00015e64) != 0) {
    __register_frame_info(DAT_00015e6c + 0x15e58,DAT_00015e68 + 0x15e54);
  }
  if (((DAT_00015d90 + 0x15d50) - (DAT_00015d8c + 0x15d48) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00015d94 + 0x15d58 + DAT_00015d98);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00015e70 @ 00015e70 size=74 ===== */

void FUN_00015e70(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_00015ebc + 0x15e82 + DAT_00015ec0);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== blkid_init_debug @ 00015ec4 size=450 ===== */

void blkid_init_debug(uint param_1)

{
  char *pcVar1;
  char *__s;
  char *__s1;
  int iVar2;
  __uid_t _Var3;
  __uid_t _Var4;
  __pid_t _Var5;
  __gid_t _Var6;
  __gid_t _Var7;
  uint uVar8;
  ulong *puVar9;
  int *piVar10;
  FILE *pFVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  char *__delim;
  undefined4 local_30;
  char *local_2c [2];
  
  iVar13 = DAT_00016088 + 0x15ed4;
  puVar9 = *(ulong **)(iVar13 + DAT_0001608c);
  if (*puVar9 != 0) {
    return;
  }
  if (param_1 != 0) goto LAB_00015f58;
  pcVar1 = getenv((char *)(DAT_00016090 + 0x15ee6));
  if ((*puVar9 & 2) == 0) {
    if (pcVar1 != (char *)0x0) {
      param_1 = strtoul(pcVar1,local_2c,0);
      if (local_2c[0] != (char *)0x0) {
        if (*local_2c[0] == '\0') {
          iVar2 = strcmp(local_2c[0],(char *)(DAT_000160cc + 0x16052));
          if (iVar2 == 0) {
            param_1 = 0xffff;
          }
        }
        else {
          pcVar1 = strdup(pcVar1);
          param_1 = 0;
          if (pcVar1 != (char *)0x0) {
            __delim = (char *)(DAT_00016094 + 0x15f26);
            param_1 = 0;
            __s = pcVar1;
            do {
              __s1 = strtok_r(__s,__delim,local_2c);
              if (__s1 == (char *)0x0) goto LAB_00015f50;
              for (puVar14 = (undefined4 *)(DAT_00016098 + 0x15f38); __s = local_2c[0],
                  (char *)*puVar14 != (char *)0x0; puVar14 = puVar14 + 3) {
                iVar2 = strcmp(__s1,(char *)*puVar14);
                if (iVar2 == 0) {
                  param_1 = param_1 | puVar14[1];
                  __s = local_2c[0];
                  if (param_1 == 0xffff) goto LAB_00015f50;
                  break;
                }
              }
            } while( true );
          }
        }
      }
    }
    goto LAB_00015f58;
  }
LAB_00015f5a:
  if (*puVar9 != 0) {
    _Var3 = getuid();
    _Var4 = geteuid();
    if (_Var3 == _Var4) {
      _Var6 = getgid();
      _Var7 = getegid();
      if (_Var6 == _Var7) goto LAB_00015f8e;
    }
    *puVar9 = *puVar9 | 0x1000000;
    pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001609c);
    _Var5 = getpid();
    fprintf(pFVar11,(char *)(DAT_000160a4 + 0x15f88),_Var5,DAT_000160a0 + 0x15f86);
  }
LAB_00015f8e:
  uVar8 = *puVar9;
  *puVar9 = uVar8 | 2;
  if (1 < (uVar8 | 2) - 2) {
    local_30 = 0;
    local_2c[0] = (char *)0x0;
    blkid_get_library_version(&local_30,local_2c);
    iVar2 = DAT_000160b0;
    if ((int)(*puVar9 << 0x1e) < 0) {
      puVar14 = *(undefined4 **)(iVar13 + DAT_0001609c);
      iVar12 = DAT_000160a8 + 0x15fbe;
      pcVar1 = (char *)(DAT_000160ac + 0x15fc0);
      pFVar11 = (FILE *)*puVar14;
      _Var5 = getpid();
      fprintf(pFVar11,pcVar1,_Var5,iVar12,iVar2 + 0x15fce);
      FUN_00015e70(DAT_000160b4 + 0x15fe4,*puVar9);
      if ((int)(*puVar9 << 0x1e) < 0) {
        pFVar11 = (FILE *)*puVar14;
        _Var5 = getpid();
        fprintf(pFVar11,pcVar1,_Var5,iVar12,iVar2 + 0x15fce);
        FUN_00015e70(DAT_000160b8 + 0x1600e,local_30,local_2c[0]);
      }
    }
  }
  iVar2 = DAT_000160c8;
  if ((int)(*puVar9 << 0x1f) < 0) {
    puVar14 = *(undefined4 **)(iVar13 + DAT_0001609c);
    piVar10 = (int *)(DAT_000160c4 + 0x1602c);
    fprintf((FILE *)*puVar14,(char *)(DAT_000160c0 + 0x16024),DAT_000160bc + 0x16022);
    for (; *piVar10 != 0; piVar10 = piVar10 + 3) {
      if (piVar10[2] != 0) {
        fprintf((FILE *)*puVar14,(char *)(iVar2 + 0x16032),*piVar10,piVar10[1],piVar10[2]);
      }
    }
  }
  return;
LAB_00015f50:
  free(pcVar1);
LAB_00015f58:
  *puVar9 = param_1;
  goto LAB_00015f5a;
}



/* ===== FUN_000160d0 @ 000160d0 size=96 ===== */

void FUN_000160d0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar3 = *(undefined4 **)(DAT_00016130 + 0x160da + DAT_00016134);
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((param_1 != 0) && (iVar1 = **(int **)(DAT_00016130 + 0x160da + DAT_00016138) << 7, -1 < iVar1)
     ) {
    fprintf((FILE *)*puVar3,(char *)(DAT_0001613c + 0x160f2),param_1,iVar1,param_1,param_2,param_3);
  }
  vfprintf((FILE *)*puVar3,param_2,&uStack_8);
  __stream = (FILE *)*puVar3;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar2 = __stream->_IO_write_base;
    if (pcVar2 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar2 + 1;
      *pcVar2 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_00016140 @ 00016140 size=74 ===== */

void FUN_00016140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_0001618c + 0x1614a + DAT_00016190);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,(char *)(DAT_00016194 + 0x16158),&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_00016198 @ 00016198 size=108 ===== */

char * FUN_00016198(int param_1)

{
  char *pcVar1;
  int iVar2;
  stat64 sStack_78;
  
  pcVar1 = (char *)FUN_00028b0a(DAT_00016204 + 0x161a4);
  if (pcVar1 == (char *)0x0) {
    if (param_1 == 0) {
      iVar2 = FUN_000167b0();
      if (iVar2 != 0) {
        pcVar1 = *(char **)(iVar2 + 0x10);
        *(undefined4 *)(iVar2 + 0x10) = 0;
        FUN_00016938();
        return pcVar1;
      }
      iVar2 = stat64((char *)(DAT_00016208 + 0x161ce),&sStack_78);
      if (iVar2 == 0) {
        if ((sStack_78.st_mode & 0xf000) == 0x4000) {
          iVar2 = DAT_0001620c + 0x161e4;
        }
        else {
          iVar2 = DAT_00016214 + 0x161f8;
        }
      }
      else {
        iVar2 = DAT_00016210 + 0x161f2;
      }
      pcVar1 = (char *)(*(code *)PTR_strdup_0004c240)(iVar2);
      return pcVar1;
    }
    pcVar1 = *(char **)(param_1 + 0x10);
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  pcVar1 = strdup(pcVar1);
  return pcVar1;
}



/* ===== blkid_get_cache @ 00016218 size=158 ===== */

undefined4 blkid_get_cache(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  void *pvVar1;
  __pid_t _Var2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  FILE *__stream;
  
  iVar5 = DAT_000162b8 + 0x16224;
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0xffffffea;
  }
  else {
    pcVar3 = param_2;
    blkid_init_debug(0);
    pvVar1 = calloc(1,0x24);
    if (pvVar1 == (void *)0x0) {
      uVar4 = 0xfffffff4;
    }
    else {
      if (**(int **)(iVar5 + DAT_000162bc) << 0x1d < 0) {
        __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000162c0);
        _Var2 = getpid();
        fprintf(__stream,(char *)(DAT_000162c8 + 0x1625c),_Var2,DAT_000162cc + 0x1625e,
                DAT_000162c4 + 0x16256,pcVar3,param_3);
        pcVar3 = param_2;
        if (param_2 == (char *)0x0) {
          pcVar3 = (char *)(DAT_000162d0 + 0x1626c);
        }
        FUN_000160d0(pvVar1,DAT_000162d4 + 0x16272,pcVar3);
      }
      *(void **)pvVar1 = pvVar1;
      *(void **)((int)pvVar1 + 4) = pvVar1;
      *(int *)((int)pvVar1 + 8) = (int)pvVar1 + 8;
      *(int *)((int)pvVar1 + 0xc) = (int)pvVar1 + 8;
      if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
        pcVar3 = (char *)FUN_00016198(0);
      }
      else {
        pcVar3 = strdup(param_2);
      }
      *(char **)((int)pvVar1 + 0x1c) = pcVar3;
      FUN_0001b4b4(pvVar1);
      uVar4 = 0;
      *param_1 = pvVar1;
    }
  }
  return uVar4;
}



/* ===== blkid_put_cache @ 000162d8 size=276 ===== */

void blkid_put_cache(int *param_1)

{
  __pid_t _Var1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  char *__format;
  int iVar8;
  
  iVar3 = DAT_000163ec + 0x162e6;
  if (param_1 == (int *)0x0) {
    return;
  }
  FUN_0001be04();
  piVar7 = *(int **)(iVar3 + DAT_000163f0);
  if (*piVar7 << 0x1d < 0) {
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_000163f4);
    _Var1 = getpid();
    fprintf(pFVar4,(char *)(DAT_000163fc + 0x16312),_Var1,DAT_00016400 + 0x16314,
            DAT_000163f8 + 0x1630c);
    FUN_000160d0(param_1,DAT_00016404 + 0x16322);
  }
  while (param_1 != (int *)*param_1) {
    FUN_00016a34();
  }
  if (*piVar7 << 0x1d < 0) {
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_000163f4);
    _Var1 = getpid();
    fprintf(pFVar4,(char *)(DAT_0001640c + 0x1634a),_Var1,DAT_00016410 + 0x1634c,
            DAT_00016408 + 0x16344);
    FUN_000160d0(param_1,DAT_00016414 + 0x1635a);
  }
  iVar8 = DAT_00016418 + 0x16368;
  __format = (char *)(DAT_0001641c + 0x1636a);
  while (piVar6 = (int *)param_1[2], piVar6 != param_1 + 2) {
    iVar2 = DAT_00016420 + 91000;
    while (piVar5 = (int *)piVar6[2], piVar5 != piVar6 + 2) {
      if (*piVar7 << 0x1d < 0) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_000163f4);
        _Var1 = getpid();
        fprintf(pFVar4,__format,_Var1,iVar8,iVar2);
        FUN_000160d0(param_1,DAT_00016424 + 0x163b4,piVar5[2],piVar5[3]);
      }
      FUN_0001c6cc(piVar5 + -2);
    }
    FUN_0001c6cc(piVar6);
  }
  blkid_free_probe(param_1[8]);
  free((void *)param_1[7]);
  (*(code *)PTR_free_0004c384)(param_1);
  return;
}



/* ===== blkid_gc_cache @ 00016428 size=178 ===== */

void blkid_gc_cache(undefined4 *param_1)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  char *__format;
  int iVar7;
  FILE *pFVar8;
  stat64 sStack_90;
  
  iVar4 = DAT_000164dc + 0x16436;
  if (param_1 != (undefined4 *)0x0) {
    iVar6 = DAT_000164e0 + 0x16448;
    __format = (char *)(DAT_000164e4 + 0x1644c);
    iVar7 = DAT_000164e8 + 0x1644e;
    puVar3 = (undefined4 *)*param_1;
    puVar5 = *(undefined4 **)*param_1;
    while (param_1 != puVar3) {
      iVar1 = stat64((char *)puVar3[5],&sStack_90);
      if (iVar1 < 0) {
        if (**(int **)(iVar4 + DAT_000164ec) << 0x1d < 0) {
          pFVar8 = (FILE *)**(undefined4 **)(iVar4 + DAT_000164f0);
          _Var2 = getpid();
          fprintf(pFVar8,(char *)(DAT_000164f8 + 0x16486),_Var2,DAT_000164fc + 0x16488,
                  DAT_000164f4 + 0x16480);
          FUN_000160d0(param_1,DAT_00016500 + 0x16498,puVar3[5]);
        }
        FUN_00016a34(puVar3);
        param_1[6] = param_1[6] | 4;
      }
      else if (**(int **)(iVar4 + DAT_000164ec) << 0x1d < 0) {
        pFVar8 = (FILE *)**(undefined4 **)(iVar4 + DAT_000164f0);
        _Var2 = getpid();
        fprintf(pFVar8,__format,_Var2,iVar6,iVar7);
        FUN_00016140(DAT_00016504 + 0x164d6,puVar3[5]);
      }
      puVar3 = puVar5;
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  return;
}



/* ===== FUN_00016508 @ 00016508 size=74 ===== */

void FUN_00016508(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_00016554 + 0x1651a + DAT_00016558);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_0001655c @ 0001655c size=512 ===== */

int FUN_0001655c(FILE *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  __pid_t _Var7;
  FILE *pFVar8;
  int iVar9;
  char *pcVar10;
  char *__s2;
  char acStack_1028 [9];
  char local_101f [4091];
  
  pcVar5 = acStack_1028;
  iVar9 = DAT_0001675c + 0x16572;
  do {
    pcVar2 = fgets(pcVar5,0x1000,param_1);
    if (pcVar2 == (char *)0x0) {
      iVar9 = feof(param_1);
      return -(uint)(iVar9 == 0);
    }
    pcVar2 = strchr(pcVar5,10);
    if (pcVar2 == (char *)0x0) {
      iVar3 = feof(param_1);
      if (iVar3 == 0) {
        if (-1 < **(int **)(iVar9 + DAT_00016764) << 0x1c) {
          return -1;
        }
        pFVar8 = (FILE *)**(undefined4 **)(iVar9 + DAT_00016768);
        _Var7 = getpid();
        fprintf(pFVar8,(char *)(DAT_00016770 + 0x16624),_Var7,DAT_00016774 + 0x16626,
                DAT_0001676c + 0x1661e);
        iVar9 = DAT_00016778 + 0x16634;
        goto LAB_00016632;
      }
      sVar4 = strlen(pcVar5);
      pcVar2 = pcVar5 + sVar4;
    }
    *pcVar2 = '\0';
    pcVar10 = pcVar5;
    if ((pcVar5 <= pcVar2 + -1) && (pcVar2[-1] == '\r')) {
      pcVar2[-1] = '\0';
    }
    do {
      do {
        pcVar2 = pcVar10;
        cVar1 = *pcVar2;
        pcVar10 = pcVar2 + 1;
      } while (cVar1 == ' ');
    } while (cVar1 == '\t');
  } while ((cVar1 == '\0') || (cVar1 == '#'));
  iVar3 = strncmp(pcVar2,(char *)(DAT_00016760 + 0x165ec),0xc);
  if (iVar3 == 0) {
    if (pcVar2[0xc] != '\0') {
      iVar9 = strcasecmp(pcVar2 + 0xc,(char *)(DAT_0001677c + 0x16642));
      if (iVar9 != 0) {
        *(undefined4 *)(param_2 + 0xc) = 0;
        return 0;
      }
      *(undefined4 *)(param_2 + 0xc) = 1;
      return 0;
    }
  }
  else {
    iVar3 = strncmp(pcVar2,(char *)(DAT_00016780 + 0x1665a),0xb);
    if (iVar3 == 0) {
      free(*(void **)(param_2 + 0x10));
      if (pcVar2[0xb] == '\0') {
        *(undefined4 *)(param_2 + 0x10) = 0;
        return 0;
      }
      pcVar5 = strdup(pcVar2 + 0xb);
      *(char **)(param_2 + 0x10) = pcVar5;
      return 0;
    }
    iVar3 = strncmp(pcVar2,(char *)(DAT_00016784 + 0x16686),9);
    if (iVar3 != 0) {
      if (**(int **)(iVar9 + DAT_00016764) << 0x1c < 0) {
        pFVar8 = (FILE *)**(undefined4 **)(iVar9 + DAT_00016768);
        _Var7 = getpid();
        fprintf(pFVar8,(char *)(DAT_000167a4 + 0x1674c),_Var7,DAT_000167a8 + 0x1674e,
                DAT_000167a0 + 0x16746);
        iVar9 = (int)&DAT_0001675c + DAT_000167ac;
        pcVar5 = pcVar2;
LAB_00016632:
        FUN_00016508(iVar9,pcVar5);
      }
      return -1;
    }
    if (pcVar2[9] != '\0') {
      pcVar10 = (char *)(DAT_00016788 + 0x166a4);
      __s2 = (char *)(DAT_0001678c + 0x166a6);
      pcVar5 = pcVar2 + 9;
      while ((pcVar5 != (char *)0x0 && (*pcVar5 != '\0'))) {
        iVar3 = *(int *)(param_2 + 8);
        if (1 < iVar3) {
LAB_000166f6:
          if (-1 < **(int **)(iVar9 + DAT_00016764) << 0x1c) {
            return -1;
          }
          pFVar8 = (FILE *)**(undefined4 **)(iVar9 + DAT_00016768);
          _Var7 = getpid();
          fprintf(pFVar8,(char *)(DAT_00016794 + 0x16718),_Var7,DAT_00016798 + 0x1671a,
                  DAT_00016790 + 0x16712);
          iVar9 = DAT_0001679c + 0x16728;
          goto LAB_00016632;
        }
        pcVar2 = strchr(pcVar5,0x2c);
        if (pcVar2 != (char *)0x0) {
          *pcVar2 = '\0';
        }
        iVar6 = strcmp(pcVar5,pcVar10);
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + iVar3 * 4) = 0;
        }
        else {
          iVar6 = strcmp(pcVar5,__s2);
          if (iVar6 != 0) goto LAB_000166f6;
          *(undefined4 *)(param_2 + iVar3 * 4) = 1;
        }
        *(int *)(param_2 + 8) = iVar3 + 1;
        if (pcVar2 == (char *)0x0) {
          return 0;
        }
        pcVar5 = pcVar2 + 1;
      }
    }
  }
  return 0;
}



/* ===== FUN_000167b0 @ 000167b0 size=314 ===== */

undefined4 * FUN_000167b0(char *param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  __pid_t _Var1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  FILE *pFVar5;
  int iVar6;
  FILE *pFVar7;
  int *piVar8;
  
  iVar6 = DAT_000168ec + 0x167bc;
  if ((param_1 == (char *)0x0) &&
     (param_1 = (char *)FUN_00028b0a(DAT_000168f0 + 0x167c2), param_1 == (char *)0x0)) {
    param_1 = (char *)(DAT_000168f4 + 0x167ce);
  }
  __ptr = calloc(1,0x14);
  puVar4 = __ptr;
  if (__ptr != (undefined4 *)0x0) {
    __ptr[3] = 0xffffffff;
    piVar8 = *(int **)(iVar6 + DAT_000168f8);
    if (*piVar8 << 0x1c < 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar6 + DAT_000168fc);
      _Var1 = getpid();
      fprintf(pFVar5,(char *)(DAT_00016904 + 0x16808),_Var1,DAT_00016908 + 0x1680a,
              DAT_00016900 + 0x16802,param_2);
      FUN_00016508(DAT_0001690c + 0x16818,param_1);
    }
    pFVar5 = fopen64(param_1,(char *)(DAT_00016910 + 0x16822));
    if (pFVar5 == (FILE *)0x0) {
      if (*piVar8 << 0x1c < 0) {
        pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_000168fc);
        _Var1 = getpid();
        fprintf(pFVar7,(char *)(DAT_00016918 + 0x1684a),_Var1,DAT_0001691c + 0x1684c,
                DAT_00016914 + 0x16844);
        FUN_00016508(DAT_00016920 + 0x1685a,param_1);
      }
LAB_0001685c:
      if (__ptr[2] == 0) {
        *__ptr = 0;
        __ptr[1] = 1;
        __ptr[2] = 2;
      }
      if (__ptr[4] == 0) {
        pcVar2 = strdup((char *)(DAT_00016924 + 0x16874));
        __ptr[4] = pcVar2;
      }
      if (__ptr[3] == -1) {
        __ptr[3] = 1;
      }
      if (pFVar5 != (FILE *)0x0) {
        fclose(pFVar5);
      }
    }
    else {
      do {
        iVar3 = feof(pFVar5);
        if (iVar3 != 0) goto LAB_0001685c;
        iVar3 = FUN_0001655c(pFVar5,__ptr);
      } while (iVar3 == 0);
      if (*piVar8 << 0x1c < 0) {
        pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_000168fc);
        _Var1 = getpid();
        fprintf(pFVar7,(char *)(DAT_0001692c + 0x168c2),_Var1,DAT_00016930 + 0x168c4,
                DAT_00016928 + 0x168bc);
        FUN_00016508(DAT_00016934 + 0x168d2,param_1);
      }
      puVar4 = (undefined4 *)0x0;
      free(__ptr);
      fclose(pFVar5);
    }
  }
  return puVar4;
}



/* ===== FUN_00016938 @ 00016938 size=24 ===== */

void FUN_00016938(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  (*(code *)PTR_free_0004c384)(param_1);
  return;
}



/* ===== FUN_00016950 @ 00016950 size=96 ===== */

void FUN_00016950(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar3 = *(undefined4 **)(DAT_000169b0 + 0x1695a + DAT_000169b4);
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((param_1 != 0) && (iVar1 = **(int **)(DAT_000169b0 + 0x1695a + DAT_000169b8) << 7, -1 < iVar1)
     ) {
    fprintf((FILE *)*puVar3,(char *)(DAT_000169bc + 0x16972),param_1,iVar1,param_1,param_2,param_3);
  }
  vfprintf((FILE *)*puVar3,param_2,&uStack_8);
  __stream = (FILE *)*puVar3;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar2 = __stream->_IO_write_base;
    if (pcVar2 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar2 + 1;
      *pcVar2 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_000169c0 @ 000169c0 size=88 ===== */

void * FUN_000169c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  __pid_t _Var3;
  FILE *__stream;
  
  iVar1 = DAT_00016a18;
  pvVar2 = calloc(1,0x48);
  if (pvVar2 != (void *)0x0) {
    if (**(int **)(iVar1 + 0x169d0 + DAT_00016a1c) << 0x1b < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar1 + 0x169d0 + DAT_00016a20);
      _Var3 = getpid();
      fprintf(__stream,(char *)(DAT_00016a28 + 0x169f4),_Var3,DAT_00016a2c + 0x169f6,
              DAT_00016a24 + 0x169ee,param_2,param_3);
      FUN_00016950(pvVar2,DAT_00016a30 + 0x16a04);
    }
    *(void **)pvVar2 = pvVar2;
    *(void **)((int)pvVar2 + 4) = pvVar2;
    *(int *)((int)pvVar2 + 8) = (int)pvVar2 + 8;
    *(int *)((int)pvVar2 + 0xc) = (int)pvVar2 + 8;
  }
  return pvVar2;
}



/* ===== FUN_00016a34 @ 00016a34 size=118 ===== */

void FUN_00016a34(int *param_1)

{
  __pid_t _Var1;
  int iVar2;
  int *piVar3;
  FILE *__stream;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (**(int **)(DAT_00016aac + 0x16a3c + DAT_00016ab0) << 0x1b < 0) {
    __stream = (FILE *)**(undefined4 **)(DAT_00016aac + 0x16a3c + DAT_00016ab4);
    _Var1 = getpid();
    fprintf(__stream,(char *)(DAT_00016abc + 0x16a62),_Var1,DAT_00016ac0 + 0x16a64,
            DAT_00016ab8 + 0x16a5c);
    FUN_00016950(param_1,DAT_00016ac4 + 0x16a74,param_1[5]);
  }
  piVar3 = (int *)param_1[1];
  iVar2 = *param_1;
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  while ((int *)param_1[2] != param_1 + 2) {
    FUN_0001c6cc();
  }
  free((void *)param_1[6]);
  free((void *)param_1[5]);
  (*(code *)PTR_free_0004c384)(param_1);
  return;
}



/* ===== blkid_dev_devname @ 00016ac8 size=16 ===== */

int blkid_dev_devname(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
    }
  }
  return iVar1;
}



/* ===== blkid_dev_iterate_begin @ 00016b98 size=46 ===== */

undefined4 * blkid_dev_iterate_begin(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = malloc(0x14);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = DAT_00016bc8;
      puVar2[1] = param_1;
      puVar2[4] = *param_1;
      puVar2[2] = 0;
      puVar2[3] = 0;
    }
  }
  return puVar2;
}



/* ===== blkid_dev_set_search @ 00016bcc size=112 ===== */

undefined4 blkid_dev_set_search(int *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  char *__dest;
  char *__dest_00;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == DAT_00016c3c)) && (param_2 != (char *)0x0)) &&
     (param_3 != (char *)0x0)) {
    sVar1 = strlen(param_2);
    __dest = malloc(sVar1 + 1);
    sVar1 = strlen(param_3);
    __dest_00 = malloc(sVar1 + 1);
    if ((__dest != (char *)0x0) && (__dest_00 != (char *)0x0)) {
      strcpy(__dest,param_2);
      strcpy(__dest_00,param_3);
      free((void *)param_1[2]);
      free((void *)param_1[3]);
      param_1[2] = (int)__dest;
      param_1[3] = (int)__dest_00;
      return 0;
    }
    free(__dest);
    free(__dest_00);
  }
  return 0xffffffff;
}



/* ===== blkid_dev_next @ 00016c40 size=66 ===== */

undefined4 blkid_dev_next(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (((param_2 == (undefined4 *)0x0) || (param_1 == (int *)0x0)) || (*param_1 != DAT_00016c84)) {
LAB_00016c48:
    uVar1 = 0xffffffff;
  }
  else {
    *param_2 = 0;
    do {
      piVar3 = (int *)param_1[4];
      if (piVar3 == (int *)param_1[1]) goto LAB_00016c48;
      param_1[4] = *piVar3;
    } while ((param_1[2] != 0) &&
            (iVar2 = blkid_dev_has_tag(piVar3,param_1[2],param_1[3]), iVar2 == 0));
    *param_2 = piVar3;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== blkid_dev_iterate_end @ 00016c88 size=38 ===== */

void blkid_dev_iterate_end(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == DAT_00016cb0)) {
    free((void *)param_1[2]);
    free((void *)param_1[3]);
    (*(code *)PTR_free_0004c384)(param_1);
    return;
  }
  return;
}



/* ===== FUN_00016cb4 @ 00016cb4 size=74 ===== */

void FUN_00016cb4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_00016d00 + 0x16cc6 + DAT_00016d04);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_00016d08 @ 00016d08 size=60 ===== */

dirent64 * FUN_00016d08(DIR *param_1)

{
  dirent64 *pdVar1;
  int iVar2;
  char *__s2;
  char *__s2_00;
  
  __s2 = (char *)(DAT_00016d44 + 0x16d18);
  __s2_00 = (char *)(DAT_00016d48 + 0x16d1a);
  do {
    pdVar1 = readdir64(param_1);
    if (pdVar1 == (dirent64 *)0x0) {
      return (dirent64 *)0x0;
    }
    iVar2 = strcmp(pdVar1->d_name,__s2);
  } while ((iVar2 == 0) || (iVar2 = strcmp(pdVar1->d_name,__s2_00), iVar2 == 0));
  return pdVar1;
}



/* ===== FUN_00016d4c @ 00016d4c size=226 ===== */

longlong FUN_00016d4c(char *param_1)

{
  __pid_t _Var1;
  char *pcVar2;
  int iVar3;
  FILE *pFVar4;
  int *piVar5;
  char *__format;
  longlong lVar6;
  ulonglong uVar7;
  uint local_428;
  uint local_424;
  char acStack_420 [1024];
  
  iVar3 = DAT_00016e30 + 0x16d5e;
  piVar5 = *(int **)(iVar3 + DAT_00016e34);
  if (*piVar5 << 0x1a < 0) {
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00016e38);
    _Var1 = getpid();
    fprintf(pFVar4,(char *)(DAT_00016e40 + 0x16d80),_Var1,DAT_00016e44 + 0x16d82,
            DAT_00016e3c + 0x16d7a);
    FUN_00016cb4(DAT_00016e48 + 0x16d90,param_1);
  }
  pFVar4 = fopen64(param_1,(char *)(DAT_00016e4c + 0x16d9a));
  if (pFVar4 == (FILE *)0x0) {
    if (*piVar5 << 0x1a < 0) {
      pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00016e38);
      _Var1 = getpid();
      fprintf(pFVar4,(char *)(DAT_00016e58 + 0x16dda),_Var1,DAT_00016e5c + 0x16ddc,
              DAT_00016e54 + 0x16dd4);
      piVar5 = __errno_location();
      FUN_00016cb4(DAT_00016e60 + 0x16df0,param_1,*piVar5);
    }
    lVar6 = 0;
  }
  else {
    __format = (char *)(DAT_00016e50 + 0x16daa);
    do {
      pcVar2 = fgets(acStack_420,0x400,pFVar4);
      if (pcVar2 == (char *)0x0) {
        lVar6 = 0;
        goto LAB_00016e18;
      }
      iVar3 = sscanf(acStack_420,__format,&local_428,&local_424);
    } while (iVar3 != 2);
    uVar7 = gnu_dev_makedev(local_428,local_424);
    lVar6 = (uVar7 & 0xffffffff00000000) + (uVar7 & 0xffffffff);
LAB_00016e18:
    fclose(pFVar4);
  }
  return lVar6;
}



/* ===== blkid_get_dev @ 00016e64 size=534 ===== */

undefined4 * blkid_get_dev(undefined4 *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  __pid_t _Var3;
  char *pcVar4;
  int *piVar5;
  char *__s1;
  FILE *pFVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar10 = DAT_0001707c + 0x16e78;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_2 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  for (puVar9 = (undefined4 *)*param_1; param_1 != puVar9; puVar9 = (undefined4 *)*puVar9) {
    iVar2 = strcmp((char *)puVar9[5],param_2);
    if (iVar2 == 0) {
      pcVar1 = (char *)0x0;
      puVar7 = puVar9;
      puVar9 = param_1;
      goto LAB_00016f5c;
    }
  }
  pcVar1 = (char *)FUN_00028600(param_2);
  if (pcVar1 != (char *)0x0) {
    iVar2 = strcmp(pcVar1,param_2);
    if (iVar2 == 0) {
      free(pcVar1);
      pcVar1 = (char *)0x0;
    }
    else {
      if (**(int **)(iVar10 + DAT_00017080) << 0x1a < 0) {
        pFVar6 = (FILE *)**(undefined4 **)(iVar10 + DAT_00017084);
        _Var3 = getpid();
        fprintf(pFVar6,(char *)(DAT_0001708c + 0x16ec8),_Var3,DAT_00017090 + 0x16eca,
                DAT_00017088 + 0x16ec2);
        FUN_00016cb4(DAT_00017094 + 0x16ed8,pcVar1);
      }
      for (puVar7 = (undefined4 *)*param_1; puVar9 != puVar7; puVar7 = (undefined4 *)*puVar7) {
        iVar2 = strcmp((char *)puVar7[5],pcVar1);
        if (iVar2 == 0) {
          free((void *)puVar7[6]);
          pcVar4 = strdup(param_2);
          puVar7[6] = pcVar4;
          goto LAB_00016f5c;
        }
      }
    }
  }
  puVar7 = (undefined4 *)0x0;
  if ((param_3 & 1) != 0) {
    iVar2 = access(param_2,0);
    if (iVar2 < 0) {
      puVar7 = (undefined4 *)0x0;
      goto LAB_00017062;
    }
    puVar7 = (undefined4 *)FUN_000169c0();
    if (puVar7 == (undefined4 *)0x0) goto LAB_00017062;
    puVar7[0xc] = 0x80000000;
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strdup(param_2);
      puVar7[5] = pcVar1;
    }
    else {
      puVar7[5] = pcVar1;
      pcVar1 = strdup(param_2);
      puVar7[6] = pcVar1;
    }
    piVar5 = (int *)param_1[1];
    pcVar1 = (char *)0x0;
    puVar7[4] = param_1;
    param_1[1] = puVar7;
    *puVar7 = puVar9;
    puVar7[1] = piVar5;
    *piVar5 = (int)puVar7;
    param_1[6] = param_1[6] | 4;
  }
LAB_00016f5c:
  if ((param_3 & 2) == 0) {
    if (puVar7 == (undefined4 *)0x0) goto LAB_00017062;
  }
  else {
    puVar7 = (undefined4 *)blkid_verify(param_1,puVar7);
    if (puVar7 == (undefined4 *)0x0) goto LAB_00017062;
    if ((int)(puVar7[0xe] << 0x1f) < 0) {
      puVar8 = (undefined4 *)*param_1;
      puVar11 = *(undefined4 **)*param_1;
      while (puVar8 != puVar9) {
        if ((((((-1 < (int)(puVar8[0xe] << 0x1f)) && ((char *)puVar7[7] != (char *)0x0)) &&
              ((char *)puVar8[7] != (char *)0x0)) &&
             (iVar2 = strcmp((char *)puVar7[7],(char *)puVar8[7]), iVar2 == 0)) &&
            (((pcVar4 = (char *)puVar7[0xf], pcVar4 == (char *)0x0 ||
              ((char *)puVar8[0xf] == (char *)0x0)) ||
             (iVar2 = strcmp(pcVar4,(char *)puVar8[0xf]), iVar2 == 0)))) &&
           (((__s1 = (char *)puVar7[0x10], __s1 == (char *)0x0 ||
             ((char *)puVar8[0x10] == (char *)0x0)) ||
            (iVar2 = strcmp(__s1,(char *)puVar8[0x10]), iVar2 == 0)))) {
          if (pcVar4 == (char *)0x0) {
            if (puVar8[0xf] == 0) goto LAB_00017036;
          }
          else if (puVar8[0xf] != 0) {
LAB_00017036:
            if (__s1 == (char *)0x0) {
              if (puVar8[0x10] == 0) goto LAB_00017040;
            }
            else if (puVar8[0x10] != 0) {
LAB_00017040:
              iVar2 = blkid_verify(param_1,puVar8);
              if ((iVar2 != 0) && (-1 < *(int *)(iVar2 + 0x38) << 0x1f)) {
                FUN_00016a34();
              }
            }
          }
        }
        puVar8 = puVar11;
        puVar11 = (undefined4 *)*puVar11;
      }
    }
  }
  if (**(int **)(iVar10 + DAT_00017080) << 0x1a < 0) {
    pFVar6 = (FILE *)**(undefined4 **)(iVar10 + DAT_00017084);
    _Var3 = getpid();
    fprintf(pFVar6,(char *)(DAT_0001709c + 0x16fa8),_Var3,DAT_000170a0 + 0x16faa,
            DAT_00017098 + 0x16fa2);
    FUN_00016cb4(DAT_000170a4 + 0x16fba,param_2,puVar7[5]);
  }
LAB_00017062:
  free(pcVar1);
  return puVar7;
}



/* ===== FUN_000170a8 @ 000170a8 size=632 ===== */

void FUN_000170a8(undefined4 *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  DIR *__dirp;
  dirent64 *pdVar5;
  size_t sVar6;
  DIR *__dirp_00;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *__s1;
  int iVar10;
  char *__s2;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 uVar14;
  char *local_1ac;
  stat64 sStack_1a8;
  char acStack_13c [280];
  int *piVar13;
  
  iVar10 = DAT_00017320 + 0x170c6;
  local_1ac = (char *)0x0;
  puVar9 = (undefined4 *)*param_1;
  puVar11 = *(undefined4 **)*param_1;
  while (puVar9 != param_1) {
    if (puVar9[0xb] == param_4 && puVar9[10] == param_3) {
      if ((param_6 != 0) && (iVar3 = access((char *)puVar9[5],0), iVar3 == 0)) {
        return;
      }
      iVar3 = blkid_verify(param_1,puVar9);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x38) << 0x1f < 0)) {
        if (param_4 == *(int *)(iVar3 + 0x2c) && param_3 == *(int *)(iVar3 + 0x28))
        goto LAB_000171bc;
        break;
      }
    }
    puVar9 = puVar11;
    puVar11 = (undefined4 *)*puVar11;
  }
  iVar3 = strncmp(param_2,(char *)(DAT_00017324 + 0x170d6),3);
  if ((iVar3 == 0) &&
     ((int)((uint)*(ushort *)(**(int **)(iVar10 + DAT_00017338) + param_2[3] * 2) << 0x1c) < 0)) {
    uVar14 = FUN_0002854c(param_2);
    local_1ac = (char *)uVar14;
    if ((local_1ac != (char *)0x0) ||
       (FUN_00017dfc(DAT_0001733c + 0x1719e,(int)((ulonglong)uVar14 >> 0x20),param_3,param_4,0,
                     &local_1ac), local_1ac != (char *)0x0)) goto LAB_000171a6;
  }
  pcVar7 = (char *)(DAT_0001732c + 0x170ec);
  pcVar8 = (char *)(DAT_00017330 + 0x170f2);
  piVar12 = (int *)(DAT_00017328 + 0x170ea);
  do {
    piVar13 = piVar12 + 1;
    if (*piVar12 == 0) {
      if (((local_1ac == (char *)0x0) &&
          (FUN_00017dfc(DAT_00017334 + 0x1710e), local_1ac == (char *)0x0)) &&
         (local_1ac = (char *)blkid_devno_to_devname(param_3,param_4), local_1ac == (char *)0x0)) {
        return;
      }
      goto LAB_000171a6;
    }
    snprintf(acStack_13c,0x100,pcVar7,*piVar12,param_2);
    iVar3 = blkid_get_dev(param_1,acStack_13c,0);
    if ((iVar3 != 0) && (param_4 == *(int *)(iVar3 + 0x2c) && param_3 == *(int *)(iVar3 + 0x28)))
    goto LAB_000171bc;
    iVar10 = stat64(acStack_13c,&sStack_1a8);
    piVar12 = piVar13;
  } while ((iVar10 != 0) ||
          ((((sStack_1a8.st_mode & 0xf000) != 0x6000 &&
            (((sStack_1a8.st_mode & 0xf000) != 0x2000 ||
             (iVar10 = strncmp(param_2,pcVar8,3), iVar10 != 0)))) ||
           (param_4 != sStack_1a8.st_rdev._4_4_ || param_3 != (int)sStack_1a8.st_rdev))));
  local_1ac = strdup(acStack_13c);
LAB_000171a6:
  iVar3 = blkid_get_dev(param_1,local_1ac,3);
  free(local_1ac);
  if (iVar3 == 0) {
    return;
  }
LAB_000171bc:
  if (param_5 == 0) {
    iVar4 = strncmp(*(char **)(iVar3 + 0x14),(char *)(DAT_00017340 + 0x17244),0xc);
    iVar10 = DAT_00017344;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x20) = 0x28;
      __dirp = opendir((char *)(iVar10 + 0x17254));
      if (__dirp == (DIR *)0x0) {
        return;
      }
      pcVar7 = (char *)(DAT_00017348 + 0x1726c);
      pcVar8 = (char *)(DAT_0001734c + 0x1726e);
      __s2 = (char *)(DAT_00017350 + 0x17270);
      do {
        do {
          do {
            pdVar5 = readdir64(__dirp);
            if (pdVar5 == (dirent64 *)0x0) {
              bVar2 = true;
              goto LAB_000172f8;
            }
            __s1 = pdVar5->d_name;
            iVar10 = strcmp(__s1,pcVar7);
          } while ((((iVar10 == 0) || (iVar10 = strcmp(__s1,pcVar8), iVar10 == 0)) ||
                   (iVar10 = strcmp(__s1,param_2), iVar10 == 0)) ||
                  ((iVar10 = strncmp(__s1,__s2,3), iVar10 != 0 ||
                   (sVar6 = strlen(__s1), 0xf2 < sVar6))));
          sprintf(acStack_13c,(char *)(DAT_00017354 + 0x172c4),__s1);
          __dirp_00 = opendir(acStack_13c);
        } while (__dirp_00 == (DIR *)0x0);
        do {
          pdVar5 = readdir64(__dirp_00);
          if (pdVar5 == (dirent64 *)0x0) {
            bVar1 = true;
            break;
          }
          iVar10 = strcmp(pdVar5->d_name,param_2);
          bVar1 = false;
        } while (iVar10 != 0);
        closedir(__dirp_00);
        bVar2 = false;
      } while (bVar1);
LAB_000172f8:
      closedir(__dirp);
      if (!bVar2) {
        return;
      }
      param_5 = *(int *)(iVar3 + 0x20) + 5;
    }
    else {
      iVar10 = strncmp(param_2,(char *)(DAT_00017358 + 0x17314),2);
      if (iVar10 != 0) {
        return;
      }
      param_5 = 10;
    }
  }
  *(int *)(iVar3 + 0x20) = param_5;
  return;
}



/* ===== FUN_0001735c @ 0001735c size=700 ===== */

undefined4 FUN_0001735c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  DIR *__dirp;
  int iVar1;
  __pid_t _Var2;
  int iVar3;
  int iVar4;
  DIR *__dirp_00;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *__format;
  undefined4 *puVar10;
  FILE *pFVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  int local_5c;
  int local_40;
  int local_3c;
  undefined8 local_38;
  
  iVar13 = DAT_0001761c + 0x17372;
  __dirp = opendir((char *)(DAT_00017618 + 0x1736e));
  if (__dirp == (DIR *)0x0) {
    uVar7 = 0xfffffff7;
  }
  else {
    iVar9 = DAT_00017620 + 0x1738a;
LAB_0001738a:
    while (iVar1 = FUN_00016d08(__dirp), iVar1 != 0) {
      local_38 = 0;
      iVar1 = iVar1 + 0x13;
      local_40 = 0;
      local_3c = 0;
      piVar14 = *(int **)(iVar13 + DAT_00017624);
      if (*piVar14 << 0x1a < 0) {
        pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_00017628);
        _Var2 = getpid();
        fprintf(pFVar11,(char *)(DAT_00017630 + 0x173d8),_Var2,DAT_00017634 + 0x173da,
                DAT_0001762c + 0x173d2);
        FUN_00016cb4(DAT_00017638 + 0x173e8,iVar1);
      }
      lVar15 = FUN_00033de4(iVar1);
      uVar8 = (undefined4)((ulonglong)lVar15 >> 0x20);
      uVar7 = (undefined4)lVar15;
      if ((lVar15 != 0) && (iVar3 = FUN_0003335c(uVar7,uVar8,0), iVar3 != 0)) {
        iVar4 = FUN_00032a20(iVar3,&local_38,DAT_0001763c + 0x17412);
        if (iVar4 != 0) {
          local_38 = 0;
        }
        iVar4 = FUN_00032af8(iVar3,&local_3c,DAT_00017640 + 0x17424);
        if (iVar4 != 0) {
          local_3c = 0;
        }
        if (local_38._4_4_ != 0 || (uint)local_38 != 0) {
          if (param_3 == 0) {
            iVar4 = FUN_00032af8(iVar3,&local_40,DAT_0001766c + 0x174fe);
            if (iVar4 == 0) {
              if (local_40 != 0) goto LAB_00017440;
            }
            else {
              local_40 = 0;
            }
            if (local_3c == 0) goto LAB_00017440;
          }
          else if (local_3c != 0) {
LAB_00017440:
            if (*piVar14 << 0x1a < 0) {
              pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_00017628);
              _Var2 = getpid();
              fprintf(pFVar11,(char *)(DAT_00017648 + 0x17460),_Var2,DAT_0001764c + 0x17462,
                      DAT_00017644 + 0x1745a);
              FUN_00016cb4(DAT_00017650 + 0x17470,iVar1);
            }
            __dirp_00 = (DIR *)FUN_00032556(iVar3,0);
            if (__dirp_00 != (DIR *)0x0) {
              local_5c = 0;
              iVar4 = DAT_00017654 + 0x1748a;
              __format = (char *)(DAT_00017658 + 0x17490);
LAB_00017490:
              do {
                iVar5 = FUN_00016d08(__dirp_00);
                if (iVar5 == 0) goto code_r0x0001749c;
                iVar6 = FUN_0003344a(__dirp_00,iVar5,iVar1);
                if (iVar6 != 0) {
                  iVar5 = iVar5 + 0x13;
                  iVar6 = FUN_00032a5c(iVar3,&local_38,iVar9,iVar5);
                  if (iVar6 == 0) {
                    if (local_38._4_4_ >> 1 == 0 &&
                        ((uint)local_38 >> 1 | local_38._4_4_ << 0x1f) == 1) goto LAB_00017490;
                  }
                  lVar16 = FUN_00033c48(0,iVar5,iVar1);
                  if (lVar16 != 0) {
                    if (*piVar14 << 0x1a < 0) {
                      pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_00017628);
                      _Var2 = getpid();
                      fprintf(pFVar11,__format,_Var2,iVar4,DAT_00017670 + 0x17580);
                      FUN_00016cb4(DAT_00017674 + 0x17594,iVar5,(int)lVar16);
                    }
                    local_5c = local_5c + 1;
                    FUN_000170a8(param_1,iVar5,(int)lVar16,(int)((ulonglong)lVar16 >> 0x20),0,
                                 param_2);
                  }
                }
              } while( true );
            }
          }
        }
        goto LAB_0001750c;
      }
    }
    closedir(__dirp);
    uVar7 = 0;
  }
  return uVar7;
code_r0x0001749c:
  if (local_5c == 0) {
    if (*piVar14 << 0x1a < 0) {
      pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_00017628);
      _Var2 = getpid();
      fprintf(pFVar11,(char *)(DAT_00017660 + 0x174c4),_Var2,DAT_00017664 + 0x174c6,
              DAT_0001765c + 0x174be);
      FUN_00016cb4(DAT_00017668 + 0x174d6,iVar1,uVar7);
    }
    FUN_000170a8(param_1,iVar1,uVar7,uVar8,0,param_2);
  }
  else {
    puVar10 = (undefined4 *)*param_1;
    puVar12 = *(undefined4 **)*param_1;
    while (param_1 != puVar10) {
      if (lVar15 == *(longlong *)(puVar10 + 10)) {
        if (*piVar14 << 0x1a < 0) {
          pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_00017628);
          _Var2 = getpid();
          fprintf(pFVar11,(char *)(DAT_0001767c + 0x175ea),_Var2,DAT_00017680 + 0x175ec,
                  DAT_00017678 + 0x175e4);
          FUN_00016cb4(DAT_00017684 + 0x175fa,puVar10[5]);
        }
        FUN_00016a34(puVar10);
        param_1[6] = param_1[6] | 4;
        break;
      }
      puVar10 = puVar12;
      puVar12 = (undefined4 *)*puVar12;
    }
  }
  closedir(__dirp_00);
LAB_0001750c:
  FUN_00031e34(iVar3);
  goto LAB_0001738a;
}



/* ===== FUN_00017688 @ 00017688 size=954 ===== */

undefined4 FUN_00017688(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FILE *pFVar3;
  char *pcVar4;
  DIR *pDVar5;
  __pid_t _Var6;
  dirent64 *pdVar7;
  size_t sVar8;
  char *pcVar9;
  DIR *__dirp;
  time_t tVar10;
  int iVar11;
  size_t sVar12;
  char *__s;
  char *pcVar13;
  uint uVar14;
  int *piVar15;
  char *pcVar16;
  int iVar17;
  int *piVar18;
  FILE *__stream;
  char *pcVar19;
  int iVar20;
  int *piVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  uint local_108;
  uint uStack_104;
  undefined1 auStack_100 [4];
  char acStack_fc [100];
  stat64 sStack_98;
  
  iVar17 = DAT_00017a44 + 0x17698;
  if (param_1 == 0) {
    return 0xffffffea;
  }
  if ((-1 < *(int *)(param_1 + 0x18) << 0x1e) ||
     (tVar10 = time((time_t *)0x0), 199 < tVar10 - *(int *)(param_1 + 0x10))) {
    FUN_0001b4b4(param_1);
    pFVar3 = fopen64((char *)(DAT_00017a4c + 0x176b4),(char *)(DAT_00017a48 + 0x176b2));
    if (pFVar3 != (FILE *)0x0) {
      pcVar19 = (char *)(DAT_00017a50 + 0x176c6);
      iVar20 = DAT_00017a54 + 0x176c8;
      do {
        do {
          pcVar4 = fgets(acStack_fc,100,pFVar3);
          if (pcVar4 == (char *)0x0) {
            fclose(pFVar3);
            goto LAB_000176de;
          }
          iVar11 = sscanf(acStack_fc,pcVar19,&local_108,&uStack_104,auStack_100,&sStack_98);
        } while (iVar11 != 4);
        if (**(int **)(iVar17 + DAT_00017a5c) << 0x1a < 0) {
          __stream = (FILE *)**(undefined4 **)(iVar17 + DAT_00017a60);
          _Var6 = getpid();
          fprintf(__stream,(char *)(DAT_00017a94 + 0x177fe),_Var6,iVar20,DAT_00017a90 + 0x177fa);
          FUN_00016cb4(DAT_00017a98 + 0x17812,&sStack_98,local_108,uStack_104);
        }
        uVar22 = gnu_dev_makedev(local_108,uStack_104);
        FUN_000170a8(param_1,&sStack_98,(int)uVar22,(int)(uVar22 >> 0x20),0x1e,param_2);
      } while( true );
    }
LAB_000176de:
    pcVar19 = (char *)(DAT_00017a58 + 0x176e4);
    pDVar5 = opendir(pcVar19);
    if (pDVar5 != (DIR *)0x0) {
      piVar15 = *(int **)(iVar17 + DAT_00017a5c);
      if (*piVar15 << 0x1a < 0) {
        pFVar3 = (FILE *)**(undefined4 **)(iVar17 + DAT_00017a60);
        _Var6 = getpid();
        fprintf(pFVar3,(char *)(DAT_00017a68 + 0x17714),_Var6,DAT_00017a6c + 0x17716,
                DAT_00017a64 + 0x1770e);
        FUN_00016cb4(DAT_00017a70 + 0x17724,pcVar19);
      }
      pcVar19 = (char *)(DAT_00017a74 + 0x1772c);
      pcVar4 = (char *)(DAT_00017a78 + 0x17732);
      while (pdVar7 = readdir64(pDVar5), pdVar7 != (dirent64 *)0x0) {
        pcVar16 = pdVar7->d_name;
        iVar20 = strcmp(pcVar16,pcVar19);
        if ((iVar20 != 0) &&
           (iVar20 = strcmp(pcVar16,(char *)(DAT_00017a7c + 0x17756)), iVar20 != 0)) {
          sVar8 = strlen(pcVar16);
          pcVar9 = malloc(sVar8 + 0x15);
          if (pcVar9 == (char *)0x0) break;
          sprintf(pcVar9,(char *)(DAT_00017a84 + 0x1777a),DAT_00017a80 + 0x17778,pcVar16);
          __dirp = opendir(pcVar9);
          free(pcVar9);
          if (__dirp != (DIR *)0x0) {
            pcVar9 = (char *)(DAT_00017a88 + 0x17796);
            iVar20 = DAT_00017a8c + 0x1779c;
            while (pdVar7 = readdir64(__dirp), pdVar7 != (dirent64 *)0x0) {
              pcVar13 = pdVar7->d_name;
              iVar11 = strcmp(pcVar13,pcVar4);
              if ((iVar11 != 0) && (iVar11 = strcmp(pcVar13,pcVar9), iVar11 != 0)) {
                sVar8 = strlen(pcVar16);
                sVar12 = strlen(pcVar13);
                __s = malloc(sVar12 + sVar8 + 0x15);
                if (__s == (char *)0x0) {
                  closedir(__dirp);
                  goto LAB_0001786e;
                }
                sprintf(__s,(char *)(DAT_00017aa8 + 0x178a8),iVar20,pcVar16,pcVar13);
                uVar23 = FUN_00016d4c(__s);
                sprintf(__s,(char *)(DAT_00017aac + 0x178c2),pcVar16,pcVar13);
                if (*piVar15 << 0x1a < 0) {
                  pFVar3 = (FILE *)**(undefined4 **)(iVar17 + DAT_00017a60);
                  _Var6 = getpid();
                  fprintf(pFVar3,(char *)(DAT_00017ab4 + 0x178e4),_Var6,DAT_00017ab8 + 0x178e6,
                          DAT_00017ab0 + 0x178de);
                  FUN_00016cb4(DAT_00017abc + 0x178f6,__s,(int)uVar23);
                }
                FUN_000170a8(param_1,__s,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0x14,param_2);
                free(__s);
              }
            }
            closedir(__dirp);
          }
        }
      }
LAB_0001786e:
      closedir(pDVar5);
    }
    iVar20 = DAT_00017aa0 + 0x1787e;
    pcVar19 = (char *)(DAT_00017aa4 + 0x17884);
    piVar15 = (int *)(DAT_00017a9c + 0x1787c);
    while (piVar18 = piVar15, *piVar18 != 0) {
      piVar21 = *(int **)(iVar17 + DAT_00017a5c);
      if (*piVar21 << 0x1a < 0) {
        pFVar3 = (FILE *)**(undefined4 **)(iVar17 + DAT_00017a60);
        _Var6 = getpid();
        fprintf(pFVar3,(char *)(DAT_00017ac4 + 0x17938),_Var6,iVar20,DAT_00017ac0 + 0x17934);
        FUN_00016cb4(DAT_00017ac8 + 0x1794a,*piVar18);
      }
      pDVar5 = opendir((char *)*piVar18);
      piVar15 = piVar18 + 1;
      if (pDVar5 != (DIR *)0x0) {
        pcVar4 = (char *)(DAT_00017acc + 0x17960);
        pcVar16 = (char *)(DAT_00017ad0 + 0x17966);
        while (pdVar7 = readdir64(pDVar5), pdVar7 != (dirent64 *)0x0) {
          pcVar9 = pdVar7->d_name;
          if ((((((pdVar7->d_type & 0xfd) == 0) || (pdVar7->d_type == 10)) &&
               (iVar11 = strcmp(pcVar9,pcVar19), iVar11 != 0)) &&
              ((iVar11 = strcmp(pcVar9,pcVar4), iVar11 != 0 &&
               (pcVar13 = strstr(pcVar9,pcVar16), pcVar13 != (char *)0x0)))) &&
             (iVar11 = strcmp(pcVar9,(char *)(DAT_00017ad4 + 0x179b2)), iVar11 != 0)) {
            iVar11 = dirfd(pDVar5);
            iVar11 = fstatat64(iVar11,pcVar9,&sStack_98,0);
            uVar2 = sStack_98.st_rdev._4_4_;
            uVar1 = (undefined4)sStack_98.st_rdev;
            if (((iVar11 == 0) && ((sStack_98.st_mode & 0xf000) == 0x2000)) &&
               (uVar14 = gnu_dev_minor(CONCAT44(sStack_98.st_rdev._4_4_,
                                                (undefined4)sStack_98.st_rdev)), uVar14 != 0)) {
              if (*piVar21 << 0x1a < 0) {
                pFVar3 = (FILE *)**(undefined4 **)(iVar17 + DAT_00017a60);
                _Var6 = getpid();
                fprintf(pFVar3,(char *)(DAT_00017adc + 0x17a0a),_Var6,DAT_00017ae0 + 0x17a0c,
                        DAT_00017ad8 + 0x17a04);
                FUN_00016cb4(DAT_00017ae4 + 0x17a20,*piVar18,pcVar9,uVar1);
              }
              FUN_000170a8(param_1,pcVar9,uVar1,uVar2,0x32,param_2);
            }
          }
        }
        closedir(pDVar5);
      }
    }
    FUN_0001735c(param_1,param_2,0);
    FUN_0001be04(param_1);
  }
  return 0;
}



/* ===== blkid_probe_all @ 00017ae8 size=138 ===== */

int blkid_probe_all(int param_1,undefined4 param_2,undefined4 param_3)

{
  __pid_t _Var1;
  time_t tVar2;
  int iVar3;
  int extraout_r2;
  int iVar4;
  int iVar5;
  int extraout_r3;
  int iVar6;
  FILE *pFVar7;
  int *piVar8;
  
  iVar6 = DAT_00017b74 + 0x17af4;
  piVar8 = *(int **)(iVar6 + DAT_00017b78);
  iVar4 = *piVar8;
  iVar3 = iVar4 << 0x16;
  iVar5 = param_1;
  if (iVar3 < 0) {
    pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_00017b7c);
    _Var1 = getpid();
    iVar5 = DAT_00017b80 + 0x17b0c;
    fprintf(pFVar7,(char *)(DAT_00017b84 + 0x17b12),_Var1,DAT_00017b88 + 0x17b14,iVar5);
    FUN_00016cb4(DAT_00017b8c + 0x17b20);
    iVar3 = extraout_r2;
    iVar4 = extraout_r3;
  }
  iVar3 = FUN_00017688(param_1,0,iVar3,iVar4,iVar5,param_2,param_3);
  if (iVar3 == 0) {
    tVar2 = time((time_t *)0x0);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    *(time_t *)(param_1 + 0x10) = tVar2;
  }
  if (*piVar8 << 0x16 < 0) {
    pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_00017b7c);
    _Var1 = getpid();
    fprintf(pFVar7,(char *)(DAT_00017b94 + 0x17b5a),_Var1,DAT_00017b98 + 0x17b5c,
            DAT_00017b90 + 0x17b54);
    FUN_00016cb4(DAT_00017b9c + 0x17b6a,iVar3);
  }
  return iVar3;
}



/* ===== blkid_probe_all_new @ 00017ba0 size=122 ===== */

undefined4 blkid_probe_all_new(int param_1,undefined4 param_2,undefined4 param_3)

{
  __pid_t _Var1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  int iVar4;
  int iVar5;
  int extraout_r3;
  int iVar6;
  int *piVar7;
  FILE *pFVar8;
  
  iVar6 = DAT_00017c1c + 0x17bac;
  piVar7 = *(int **)(iVar6 + DAT_00017c20);
  iVar4 = *piVar7;
  iVar3 = iVar4 << 0x16;
  iVar5 = param_1;
  if (iVar3 < 0) {
    pFVar8 = (FILE *)**(undefined4 **)(iVar6 + DAT_00017c24);
    _Var1 = getpid();
    iVar5 = DAT_00017c28 + 0x17bc4;
    fprintf(pFVar8,(char *)(DAT_00017c2c + 0x17bca),_Var1,DAT_00017c30 + 0x17bcc,iVar5);
    FUN_00016cb4(DAT_00017c34 + 0x17bd8);
    iVar3 = extraout_r2;
    iVar4 = extraout_r3;
  }
  uVar2 = FUN_00017688(param_1,1,iVar3,iVar4,iVar5,param_2,param_3);
  if (*piVar7 << 0x16 < 0) {
    pFVar8 = (FILE *)**(undefined4 **)(iVar6 + DAT_00017c24);
    _Var1 = getpid();
    fprintf(pFVar8,(char *)(DAT_00017c3c + 0x17c02),_Var1,DAT_00017c40 + 0x17c04,
            DAT_00017c38 + 0x17bfc);
    FUN_00016cb4(DAT_00017c44 + 0x17c12,uVar2);
  }
  return uVar2;
}



/* ===== blkid_probe_all_removable @ 00017c48 size=124 ===== */

undefined4 blkid_probe_all_removable(int param_1,undefined4 param_2,undefined4 param_3)

{
  __pid_t _Var1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_r3;
  int iVar5;
  int *piVar6;
  FILE *pFVar7;
  
  iVar5 = DAT_00017cc4 + 0x17c54;
  piVar6 = *(int **)(iVar5 + DAT_00017cc8);
  iVar3 = *piVar6;
  iVar4 = param_1;
  if (iVar3 << 0x16 < 0) {
    pFVar7 = (FILE *)**(undefined4 **)(iVar5 + DAT_00017ccc);
    _Var1 = getpid();
    iVar4 = DAT_00017cd0 + 0x17c6c;
    fprintf(pFVar7,(char *)(DAT_00017cd4 + 0x17c72),_Var1,DAT_00017cd8 + 0x17c74,iVar4);
    FUN_00016cb4(DAT_00017cdc + 0x17c80);
    iVar3 = extraout_r3;
  }
  uVar2 = FUN_0001735c(param_1,0,1,iVar3,iVar4,param_2,param_3);
  if (*piVar6 << 0x16 < 0) {
    pFVar7 = (FILE *)**(undefined4 **)(iVar5 + DAT_00017ccc);
    _Var1 = getpid();
    fprintf(pFVar7,(char *)(DAT_00017ce4 + 0x17cac),_Var1,DAT_00017ce8 + 0x17cae,
            DAT_00017ce0 + 0x17ca6);
    FUN_00016cb4(DAT_00017cec + 0x17cbc,uVar2);
  }
  return uVar2;
}



/* ===== FUN_00017cf0 @ 00017cf0 size=74 ===== */

void FUN_00017cf0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_00017d3c + 0x17d02 + DAT_00017d40);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_00017d44 @ 00017d44 size=30 ===== */

void FUN_00017d44(undefined4 *param_1)

{
  undefined4 *__ptr;
  undefined4 *puVar1;
  
  __ptr = (undefined4 *)*param_1;
  while (__ptr != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)__ptr[1];
    free((void *)*__ptr);
    free(__ptr);
    __ptr = puVar1;
  }
  *param_1 = 0;
  return;
}



/* ===== FUN_00017d62 @ 00017d62 size=94 ===== */

undefined1 * FUN_00017d62(char *param_1,char *param_2)

{
  size_t __n;
  size_t __n_00;
  undefined1 *__dest;
  void *pvVar1;
  undefined1 *puVar2;
  undefined1 *__dest_00;
  
  if (param_1 == (char *)0x0) {
    __n = 0;
  }
  else {
    __n = strlen(param_1);
  }
  if (param_2 == (char *)0x0) {
    __n_00 = 0;
  }
  else {
    __n_00 = strlen(param_2);
  }
  __dest = malloc(__n + 2 + __n_00);
  if (__dest != (undefined1 *)0x0) {
    puVar2 = __dest;
    if (__n != 0) {
      memcpy(__dest,param_1,__n);
      puVar2 = __dest + __n;
    }
    __dest_00 = puVar2 + 1;
    *puVar2 = 0x2f;
    if (__n_00 != 0) {
      pvVar1 = memcpy(__dest_00,param_2,__n_00);
      __dest_00 = (undefined1 *)((int)pvVar1 + __n_00);
    }
    *__dest_00 = 0;
  }
  return __dest;
}



/* ===== FUN_00017dc0 @ 00017dc0 size=60 ===== */

void FUN_00017dc0(char *param_1,int param_2,int *param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  piVar1 = malloc(8);
  if (piVar1 != (int *)0x0) {
    if (param_2 == 0) {
      if (param_1 == (char *)0x0) goto LAB_00015cb4;
      pcVar2 = strdup(param_1);
    }
    else {
      pcVar2 = (char *)FUN_00017d62(param_1,param_2);
    }
    *piVar1 = (int)pcVar2;
    if (pcVar2 == (char *)0x0) {
LAB_00015cb4:
      (*(code *)PTR_free_0004c384)(piVar1);
      return;
    }
    iVar3 = *param_3;
    *param_3 = (int)piVar1;
    piVar1[1] = iVar3;
  }
  return;
}



/* ===== FUN_00017dfc @ 00017dfc size=322 ===== */

void FUN_00017dfc(char *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 *param_6)

{
  int iVar1;
  DIR *__dirp;
  dirent64 *pdVar2;
  int iVar3;
  undefined4 uVar4;
  __pid_t _Var5;
  FILE *__stream;
  char *__file;
  char *__s2;
  stat64 sStack_90;
  
  iVar1 = DAT_00017f40;
  __dirp = opendir(param_1);
  if (__dirp != (DIR *)0x0) {
    __s2 = (char *)(DAT_00017f44 + 0x17e26);
LAB_00017e24:
    do {
      do {
        do {
          pdVar2 = readdir64(__dirp);
          if (pdVar2 == (dirent64 *)0x0) goto LAB_00017ed2;
        } while (((10 < pdVar2->d_type) || (-1 < (int)((0x451U >> (uint)pdVar2->d_type) << 0x1f)))
                || ((pdVar2->d_name[0] == '.' &&
                    ((pdVar2->d_name[1] == '\0' || (*(short *)(pdVar2->d_name + 1) == 0x2e))))));
        __file = pdVar2->d_name;
        iVar3 = dirfd(__dirp);
        iVar3 = fstatat64(iVar3,__file,&sStack_90,0);
      } while (iVar3 != 0);
      if ((sStack_90.st_mode & 0xf000) != 0x6000) {
        if (((param_5 != 0) && ((sStack_90.st_mode & 0xf000) == 0x4000)) && (pdVar2->d_type != '\n')
           ) {
          if (pdVar2->d_type == '\0') {
            iVar3 = dirfd(__dirp);
            iVar3 = fstatat64(iVar3,__file,&sStack_90,0x100);
            if ((iVar3 != 0) || ((sStack_90.st_mode & 0xf000) != 0x4000)) goto LAB_00017e24;
          }
          if ((pdVar2->d_name[0] != '.') &&
             ((pdVar2->d_type != '\x04' || (iVar3 = strcmp(__file,__s2), iVar3 != 0)))) {
            FUN_00017dc0(param_1,__file,param_5);
          }
        }
        goto LAB_00017e24;
      }
    } while (sStack_90.st_rdev._4_4_ != param_4 || (int)sStack_90.st_rdev != param_3);
    uVar4 = FUN_00017d62(param_1,__file);
    *param_6 = uVar4;
    if (**(int **)(iVar1 + 0x17e12 + DAT_00017f48) << 0x19 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar1 + 0x17e12 + DAT_00017f4c);
      _Var5 = getpid();
      fprintf(__stream,(char *)(DAT_00017f54 + 0x17eb8),_Var5,DAT_00017f58 + 0x17eba,
              DAT_00017f50 + 0x17eb2);
      FUN_00017cf0(DAT_00017f5c + 0x17eca);
    }
LAB_00017ed2:
    closedir(__dirp);
  }
  return;
}



/* ===== blkid_devno_to_devname @ 00017f60 size=348 ===== */

char * blkid_devno_to_devname(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  __pid_t _Var2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  FILE *pFVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *local_1034;
  undefined4 *local_1030;
  char *pcStack_102c;
  undefined1 auStack_1028 [4100];
  
  iVar7 = DAT_000180bc + 0x17f76;
  pcVar1 = (char *)FUN_00034034(param_1,param_2,auStack_1028,0x1000);
  if ((pcVar1 != (char *)0x0) && (pcVar1 = strdup(pcVar1), pcVar1 != (char *)0x0)) {
LAB_00018064:
    if (**(int **)(iVar7 + DAT_000180c4) << 0x19 < 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar7 + DAT_000180cc);
      _Var2 = getpid();
      fprintf(pFVar5,(char *)(DAT_000180f0 + 0x18086),_Var2,DAT_000180f4 + 0x18088,
              DAT_000180ec + 0x18080);
      FUN_00017cf0(DAT_000180f8 + 0x1809a);
    }
    return pcVar1;
  }
  local_1034 = (undefined4 *)0x0;
  local_1030 = (undefined4 *)0x0;
  pcStack_102c = (char *)0x0;
  piVar8 = (int *)(DAT_000180c0 + 0x17f90);
  while( true ) {
    if (*piVar8 == 0) break;
    FUN_00017dc0(*piVar8,0,&local_1034);
    piVar8 = piVar8 + 1;
  }
  piVar8 = *(int **)(iVar7 + DAT_000180c4);
  iVar4 = DAT_000180c8 + 0x17fa8;
  do {
    do {
      puVar6 = local_1034;
      if (local_1034 == (undefined4 *)0x0) {
LAB_0001800a:
        FUN_00017d44(&local_1034);
        FUN_00017d44(&local_1030);
        pcVar1 = pcStack_102c;
        if (pcStack_102c == (char *)0x0) {
          if (-1 < *piVar8 << 0x19) {
            return (char *)0x0;
          }
          pFVar5 = (FILE *)**(undefined4 **)(iVar7 + DAT_000180cc);
          _Var2 = getpid();
          fprintf(pFVar5,(char *)(DAT_000180e0 + 0x1803c),_Var2,DAT_000180e4 + 0x1803e,
                  DAT_000180dc + 0x18036);
          FUN_00017cf0(DAT_000180e8 + 0x1804c,param_1);
          return (char *)0x0;
        }
        goto LAB_00018064;
      }
      local_1034 = (undefined4 *)local_1034[1];
      iVar3 = *piVar8 << 0x19;
      if (iVar3 < 0) {
        pFVar5 = (FILE *)**(undefined4 **)(iVar7 + DAT_000180cc);
        _Var2 = getpid();
        fprintf(pFVar5,(char *)(DAT_000180d4 + 0x17fd4),_Var2,iVar4,DAT_000180d0 + 0x17fd0);
        FUN_00017cf0(DAT_000180d8 + 0x17fe4,*puVar6);
        iVar3 = extraout_r1;
      }
      FUN_00017dfc(*puVar6,iVar3,param_1,param_2,&local_1030,&pcStack_102c);
      free((void *)*puVar6);
      free(puVar6);
      if (pcStack_102c != (char *)0x0) goto LAB_0001800a;
      puVar6 = local_1034;
    } while (local_1034 != (undefined4 *)0x0);
    local_1034 = local_1030;
    local_1030 = puVar6;
  } while( true );
}



/* ===== blkid_devno_to_wholedisk @ 000180fc size=4 ===== */

undefined4
blkid_devno_to_wholedisk
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = FUN_0003335c(param_1,param_2,0);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      uVar2 = FUN_00033dfa(iVar1,param_3,param_4,param_5);
      FUN_00031e34(iVar1);
    }
  }
  return uVar2;
}



/* ===== FUN_00018100 @ 00018100 size=206 ===== */

int FUN_00018100(char *param_1,int param_2)

{
  FILE *pFVar1;
  char *pcVar2;
  int iVar3;
  __pid_t _Var4;
  int iVar5;
  char *pcVar6;
  int local_e8;
  char acStack_e4 [68];
  char acStack_a0 [128];
  
  iVar5 = DAT_000181d8;
  pFVar1 = fopen64((char *)(DAT_000181d0 + 0x18112),(char *)(DAT_000181d4 + 0x18116));
  if (pFVar1 == (FILE *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar6 = (char *)(DAT_000181dc + 0x18128);
    do {
      pcVar2 = fgets(acStack_a0,0x80,pFVar1);
      if (pcVar2 == (char *)0x0) break;
      iVar3 = strcmp(pcVar6,acStack_a0);
    } while (iVar3 != 0);
    pcVar6 = (char *)(DAT_000181e0 + 0x18148);
    do {
      pcVar2 = fgets(acStack_a0,0x80,pFVar1);
      if (pcVar2 == (char *)0x0) {
        iVar3 = 0;
        goto LAB_0001817a;
      }
      iVar3 = sscanf(acStack_a0,pcVar6,&local_e8,acStack_e4);
    } while (((iVar3 != 2) || (local_e8 != param_2)) ||
            (iVar3 = strcmp(acStack_e4,param_1), iVar3 != 0));
    iVar3 = 1;
LAB_0001817a:
    fclose(pFVar1);
    if (**(int **)(iVar5 + 0x1811c + DAT_000181e4) << 0x19 < 0) {
      pFVar1 = (FILE *)**(undefined4 **)(iVar5 + 0x1811c + DAT_000181e8);
      _Var4 = getpid();
      fprintf(pFVar1,(char *)(DAT_000181f0 + 0x181a2),_Var4,DAT_000181f4 + 0x181a4,
              DAT_000181ec + 0x1819c);
      if (iVar3 == 0) {
        iVar5 = DAT_000181f8 + 0x181b2;
      }
      else {
        iVar5 = DAT_00018200 + 0x181ca;
      }
      FUN_00017cf0(DAT_000181fc + 0x181ba,param_2,iVar5,param_1);
    }
  }
  return iVar3;
}



/* ===== FUN_00018204 @ 00018204 size=64 ===== */

undefined4 FUN_00018204(uint param_1,char *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if ((((param_1 & 0xff) - 0x30 < 10) || ((param_1 & 0xdf) - 0x41 < 0x1a)) ||
     (pcVar1 = strchr((char *)(DAT_00018244 + 0x18226),param_1), pcVar1 != (char *)0x0)) {
    uVar2 = 1;
  }
  else if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    pcVar1 = strchr(param_2,param_1);
    uVar2 = 0;
    if (pcVar1 != (char *)0x0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== FUN_00018248 @ 00018248 size=72 ===== */

undefined4 FUN_00018248(uint param_1)

{
  undefined4 uVar1;
  
  if (-1 < (int)param_1) {
    return 1;
  }
  if ((param_1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((param_1 & 0xf0) == 0xe0) {
    return 3;
  }
  if ((param_1 & 0xf8) == 0xf0) {
    return 4;
  }
  if ((param_1 & 0xfc) == 0xf8) {
    return 5;
  }
  if ((param_1 & 0xfe) == 0xfc) {
    uVar1 = 6;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00018290 @ 00018290 size=192 ===== */

int FUN_00018290(char *param_1)

{
  int iVar1;
  uint extraout_r2;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00018248((int)*param_1);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return 1;
    }
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if (-1 < param_1[iVar2]) {
        return -1;
      }
    }
    switch(iVar1) {
    case 2:
      uVar3 = extraout_r2 & 0x1f;
      break;
    case 3:
      uVar3 = extraout_r2 & 0xf;
      break;
    case 4:
      uVar3 = extraout_r2 & 7;
      break;
    case 5:
      uVar3 = extraout_r2 & 3;
      break;
    case 6:
      uVar3 = extraout_r2 & 1;
      break;
    default:
      goto LAB_00018318;
    }
    for (iVar2 = 1; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if (((int)param_1[iVar2] & 0xc0U) != 0x80) {
        return -1;
      }
      uVar3 = (int)param_1[iVar2] & 0x3fU | uVar3 << 6;
    }
    if (0x7f < (int)uVar3) {
      if ((int)uVar3 < 0x800) {
        iVar2 = 2;
      }
      else if ((int)uVar3 < 0x10000) {
        iVar2 = 3;
      }
      else {
        if (0x1fffff < (int)uVar3) {
          return -1;
        }
        iVar2 = 4;
      }
      if ((((iVar1 == iVar2) && ((int)uVar3 < 0x110000)) && ((uVar3 & 0xfffff800) != 0xd800)) &&
         (0x1f < uVar3 - 0xfdd0)) {
        if ((uVar3 & 0xffff) == 0xffff) {
          return -1;
        }
        return iVar1;
      }
    }
  }
LAB_00018318:
  return -1;
}



/* ===== blkid_encode_string @ 00018356 size=158 ===== */

undefined4 blkid_encode_string(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  char *__s;
  void *__src;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *__format;
  int iVar6;
  uint uVar7;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar3 = 0;
    iVar5 = 0;
    __format = (char *)(DAT_000183f4 + 0x18380);
    iVar6 = param_1;
    uVar7 = param_3;
    while( true ) {
      bVar1 = *(byte *)(param_1 + iVar5);
      iVar4 = (int)(char)bVar1;
      __src = (void *)(param_1 + iVar5);
      if (iVar4 == 0) break;
      uVar2 = FUN_00018290(__src);
      if ((int)uVar2 < 2) {
        if ((iVar4 == 0x5c) || (iVar4 = FUN_00018204(iVar4,0), iVar4 == 0)) {
          uVar2 = param_3 - uVar3;
          if (uVar2 < 4) {
            return 0xffffffff;
          }
          __s = (char *)(param_2 + uVar3);
          uVar3 = uVar3 + 4;
          sprintf(__s,__format,(uint)bVar1,uVar2,iVar6,__src,uVar7);
        }
        else {
          if (uVar3 == param_3) {
            return 0xffffffff;
          }
          *(byte *)(param_2 + uVar3) = bVar1;
          uVar3 = uVar3 + 1;
        }
      }
      else {
        if (param_3 - uVar3 < uVar2) {
          return 0xffffffff;
        }
        memcpy((void *)(param_2 + uVar3),__src,uVar2);
        uVar3 = uVar3 + uVar2;
        iVar5 = iVar5 + -1 + uVar2;
      }
      if (param_3 <= uVar3 + 3) {
        return 0xffffffff;
      }
      iVar5 = iVar5 + 1;
    }
    if (uVar3 != param_3) {
      *(byte *)(param_2 + uVar3) = bVar1;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== blkid_safe_string @ 000183f8 size=240 ===== */

undefined4 blkid_safe_string(char *param_1,int param_2,size_t param_3)

{
  ushort uVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  
  iVar8 = DAT_000184e8 + 0x18406;
  if (((param_1 == (char *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0xffffffff;
  }
  sVar2 = strnlen(param_1,param_3);
  piVar9 = *(int **)(iVar8 + DAT_000184ec);
  do {
    uVar3 = sVar2;
    if (uVar3 == 0) goto LAB_00018498;
    uVar1 = *(ushort *)(*piVar9 + param_1[uVar3 - 1] * 2);
    sVar2 = uVar3 - 1;
    uVar7 = uVar1 & 0x20;
  } while ((uVar1 & 0x20) != 0);
  do {
    uVar10 = uVar7 + 1;
    uVar1 = *(ushort *)(*piVar9 + param_1[uVar7] * 2);
    uVar5 = uVar1 & 0x20;
    if ((uVar1 & 0x20) == 0) goto LAB_00018440;
    uVar7 = uVar10;
  } while (uVar10 != uVar3);
LAB_00018498:
  uVar6 = 0;
LAB_0001846e:
  iVar8 = 0;
  iVar12 = DAT_000184f0 + 0x18480;
  *(undefined1 *)(param_2 + uVar6) = 0;
  while( true ) {
    iVar11 = (int)*(char *)(param_2 + iVar8);
    puVar13 = (undefined1 *)(param_2 + iVar8);
    if (iVar11 == 0) break;
    iVar4 = FUN_00018204(iVar11,iVar12);
    if (iVar4 == 0) {
      if ((iVar11 == 0x5c) && (puVar13[1] == 'x')) {
        iVar8 = iVar8 + 2;
      }
      else {
        iVar4 = FUN_00018290(puVar13);
        if (iVar4 < 2) {
          iVar8 = iVar8 + 1;
          if ((int)((uint)*(ushort *)(*piVar9 + iVar11 * 2) << 0x1a) < 0) {
            *puVar13 = 0x20;
          }
          else {
            *puVar13 = 0x5f;
          }
        }
        else {
          iVar8 = iVar8 + iVar4;
        }
      }
    }
    else {
      iVar8 = iVar8 + 1;
    }
  }
  return 0;
LAB_00018440:
  do {
    uVar10 = uVar7;
    if ((int)((uint)*(ushort *)(*piVar9 + param_1[uVar7] * 2) << 0x1a) < 0) {
      do {
        uVar7 = uVar7 + 1;
      } while ((int)((uint)*(ushort *)(*piVar9 + param_1[uVar7] * 2) << 0x1a) < 0);
      *(undefined1 *)(param_2 + uVar5) = 0x5f;
      uVar5 = uVar5 + 1;
      uVar10 = uVar7;
    }
    uVar7 = uVar10 + 1;
    uVar6 = uVar5 + 1;
    *(char *)(param_2 + uVar5) = param_1[uVar10];
    uVar5 = uVar6;
  } while (uVar7 < uVar3);
  goto LAB_0001846e;
}



/* ===== FUN_000184f4 @ 000184f4 size=74 ===== */

void FUN_000184f4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_00018540 + 0x18506 + DAT_00018544);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_00018548 @ 00018548 size=386 ===== */

undefined4 FUN_00018548(char *param_1,undefined4 param_2)

{
  __pid_t _Var1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  char *__src;
  int iVar5;
  int *piVar6;
  FILE *pFVar7;
  stat64 sStack_1080;
  char acStack_1018 [4096];
  
  iVar5 = DAT_000186cc + 0x1855c;
  piVar6 = *(int **)(iVar5 + DAT_000186d0);
  if (*piVar6 << 0x18 < 0) {
    pFVar7 = (FILE *)**(undefined4 **)(iVar5 + DAT_000186d4);
    _Var1 = getpid();
    fprintf(pFVar7,(char *)(DAT_000186dc + 0x1857e),_Var1,DAT_000186e0 + 0x18580,
            DAT_000186d8 + 0x18578);
    FUN_000184f4(DAT_000186e4 + 0x18590,param_1,param_2);
  }
  iVar2 = strcmp(param_1,(char *)(DAT_000186e8 + 0x1859a));
  if (iVar2 == 0) {
    __src = (char *)(DAT_000186ec + 0x185a6);
  }
  else {
    iVar2 = strcmp(param_1,(char *)(DAT_00018710 + 0x18638));
    if (iVar2 == 0) {
      __src = (char *)(DAT_00018714 + 0x18642);
    }
    else {
      iVar2 = strcmp(param_1,(char *)(DAT_00018718 + 0x1864a));
      if (iVar2 == 0) {
        __src = (char *)(DAT_0001871c + 0x18654);
      }
      else {
        iVar2 = strcmp(param_1,(char *)(DAT_00018720 + 0x1865c));
        if (iVar2 == 0) {
          __src = (char *)(DAT_00018724 + 0x18666);
        }
        else {
          iVar2 = strcmp(param_1,(char *)(DAT_00018728 + 0x1866e));
          if (iVar2 != 0) {
            if (-1 < *piVar6 << 0x18) {
              return 0;
            }
            pFVar7 = (FILE *)**(undefined4 **)(iVar5 + DAT_000186d4);
            _Var1 = getpid();
            fprintf(pFVar7,(char *)(DAT_00018734 + 0x1869a),_Var1,DAT_00018738 + 0x1869c,
                    DAT_00018730 + 0x18694);
            FUN_000184f4(DAT_0001873c + 0x186aa,param_1);
            return 0;
          }
          __src = (char *)(DAT_0001872c + 0x18678);
        }
      }
    }
  }
  strcpy(acStack_1018,__src);
  sVar3 = strlen(acStack_1018);
  iVar2 = blkid_encode_string(param_2,acStack_1018 + sVar3,0x1000 - sVar3);
  if (iVar2 == 0) {
    if (*piVar6 << 0x18 < 0) {
      pFVar7 = (FILE *)**(undefined4 **)(iVar5 + DAT_000186d4);
      _Var1 = getpid();
      fprintf(pFVar7,(char *)(DAT_000186f4 + 0x185e0),_Var1,DAT_000186f8 + 0x185e2,
              DAT_000186f0 + 0x185da);
      FUN_000184f4(DAT_000186fc + 0x185f0,acStack_1018);
    }
    iVar2 = stat64(acStack_1018,&sStack_1080);
    if (iVar2 == 0) {
      if ((sStack_1080.st_mode & 0xf000) == 0x6000) {
        uVar4 = FUN_00028600(acStack_1018);
        return uVar4;
      }
    }
    else if (*piVar6 << 0x18 < 0) {
      pFVar7 = (FILE *)**(undefined4 **)(iVar5 + DAT_000186d4);
      _Var1 = getpid();
      fprintf(pFVar7,(char *)(DAT_00018704 + 0x1861e),_Var1,DAT_00018708 + 0x18620,
              DAT_00018700 + 0x18618);
      FUN_000184f4(DAT_0001870c + 0x1862c);
    }
  }
  return 0;
}



/* ===== blkid_send_uevent @ 00018740 size=378 ===== */

int blkid_send_uevent(char *param_1,char *param_2)

{
  __pid_t _Var1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined *puVar9;
  int iVar10;
  FILE *pFVar11;
  int *piVar12;
  stat64 sStack_1088;
  char acStack_1020 [4096];
  
  iVar10 = DAT_000188bc + 0x18754;
  piVar12 = *(int **)(iVar10 + DAT_000188c0);
  if (*piVar12 << 0x18 < 0) {
    pFVar11 = (FILE *)**(undefined4 **)(iVar10 + DAT_000188c4);
    _Var1 = getpid();
    fprintf(pFVar11,(char *)(DAT_000188cc + 0x18778),_Var1,DAT_000188d0 + 0x1877a,
            DAT_000188c8 + 0x18772);
    FUN_000184f4(DAT_000188d4 + 0x1878a,param_1,param_2);
  }
  if ((((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) ||
      (iVar2 = stat64(param_1,&sStack_1088), iVar2 != 0)) ||
     ((sStack_1088.st_mode & 0xf000) != 0x6000)) {
    return -1;
  }
  uVar3 = gnu_dev_major(sStack_1088.st_rdev);
  uVar4 = gnu_dev_minor(sStack_1088.st_rdev);
  snprintf(acStack_1020,0x1000,(char *)(DAT_000188d8 + 0x187e4),uVar3,uVar4);
  pFVar11 = fopen64(acStack_1020,(char *)(DAT_000188dc + 0x187f2));
  if (pFVar11 == (FILE *)0x0) {
    iVar2 = -1;
  }
  else {
    fputs(param_2,pFVar11);
    iVar5 = __fpending(pFVar11);
    iVar6 = ferror(pFVar11);
    iVar7 = fclose(pFVar11);
    iVar2 = 0;
    if (iVar6 == 0) {
      if ((iVar7 == 0) || ((iVar5 == 0 && (piVar8 = __errno_location(), *piVar8 == 9))))
      goto LAB_00018862;
    }
    else if ((iVar7 == 0) && (piVar8 = __errno_location(), *piVar8 != 0x20)) {
      *piVar8 = 0;
    }
    if (*piVar12 << 0x18 < 0) {
      pFVar11 = (FILE *)**(undefined4 **)(iVar10 + DAT_000188c4);
      _Var1 = getpid();
      fprintf(pFVar11,(char *)(DAT_000188e4 + 0x18850),_Var1,DAT_000188e8 + 0x18852,
              DAT_000188e0 + 0x1884a);
      FUN_000184f4(DAT_000188ec + 0x18860,acStack_1020);
    }
  }
LAB_00018862:
  if (*piVar12 << 0x18 < 0) {
    pFVar11 = (FILE *)**(undefined4 **)(iVar10 + DAT_000188c4);
    _Var1 = getpid();
    fprintf(pFVar11,(char *)(DAT_000188f4 + 0x18882),_Var1,DAT_000188f8 + 0x18884,
            DAT_000188f0 + 0x1887c);
    if (iVar2 == 0) {
      puVar9 = &UNK_000188ba + DAT_00018904;
    }
    else {
      puVar9 = (undefined *)(DAT_000188fc + 0x18892);
    }
    FUN_000184f4(DAT_00018900 + 0x18898,acStack_1020,puVar9);
  }
  return iVar2;
}



/* ===== blkid_evaluate_tag @ 00018908 size=454 ===== */

char * blkid_evaluate_tag(char *param_1,void *param_2,int *param_3)

{
  __pid_t _Var1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FILE *pFVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  char *local_34;
  void *local_30;
  int local_2c [2];
  
  iVar11 = DAT_00018ad0 + 0x1891c;
  local_34 = (char *)0x0;
  local_30 = (void *)0x0;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    blkid_init_debug(0);
  }
  piVar13 = *(int **)(iVar11 + DAT_00018ad4);
  if (*piVar13 << 0x18 < 0) {
    pFVar10 = (FILE *)**(undefined4 **)(iVar11 + DAT_00018ad8);
    _Var1 = getpid();
    fprintf(pFVar10,(char *)(DAT_00018ae0 + 0x18958),_Var1,DAT_00018ae4 + 0x1895a,
            DAT_00018adc + 0x18952);
    if (param_2 == (void *)0x0) {
      pvVar6 = (void *)(DAT_00018ae8 + 0x18968);
      pvVar5 = pvVar6;
    }
    else {
      pvVar6 = (void *)(DAT_00018af0 + 0x189ac);
      pvVar5 = param_2;
    }
    FUN_000184f4(DAT_00018aec + 0x18970,param_1,pvVar6,pvVar5);
  }
  if (param_2 == (void *)0x0) {
    pcVar2 = strchr(param_1,0x3d);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = strdup(param_1);
      iVar4 = 0;
      goto LAB_00018988;
    }
    iVar4 = blkid_parse_tag_string(param_1,&local_34,&local_30);
    if (((iVar4 == 0) && (local_34 != (char *)0x0)) &&
       (param_1 = local_34, param_2 = local_30, local_30 != (void *)0x0)) goto LAB_000189ca;
  }
  else {
LAB_000189ca:
    iVar4 = FUN_000167b0(0);
    if (iVar4 != 0) {
      iVar7 = DAT_00018af4 + 0x189e0;
      pcVar2 = (char *)(DAT_00018af8 + 0x189e6);
      iVar8 = DAT_00018afc + 0x189ec;
      for (iVar12 = 0; iVar12 < *(int *)(iVar4 + 8); iVar12 = iVar12 + 1) {
        iVar9 = *(int *)(iVar4 + iVar12 * 4);
        if (iVar9 == 0) {
          pcVar3 = (char *)FUN_00018548(param_1,param_2);
LAB_00018a40:
          if (pcVar3 != (char *)0x0) goto LAB_000189f4;
        }
        else if (iVar9 == 1) {
          if (param_3 == (int *)0x0) {
            local_2c[0] = 0;
          }
          else {
            local_2c[0] = *param_3;
          }
          if (*piVar13 << 0x18 < 0) {
            pFVar10 = (FILE *)**(undefined4 **)(iVar11 + DAT_00018ad8);
            _Var1 = getpid();
            fprintf(pFVar10,pcVar2,_Var1,iVar7,iVar8);
            FUN_000184f4(DAT_00018b10 + 0x18a88,param_1,param_2);
          }
          if (local_2c[0] == 0) {
            pvVar5 = (void *)FUN_00016198(iVar4);
            blkid_get_cache(local_2c,pvVar5);
            free(pvVar5);
          }
          if (local_2c[0] != 0) {
            pcVar3 = (char *)blkid_get_devname(local_2c[0],param_1,param_2);
            if (param_3 == (int *)0x0) {
              blkid_put_cache(local_2c[0]);
            }
            else {
              *param_3 = local_2c[0];
            }
            goto LAB_00018a40;
          }
        }
      }
      pcVar3 = (char *)0x0;
LAB_000189f4:
      if (*piVar13 << 0x18 < 0) {
        pFVar10 = (FILE *)**(undefined4 **)(iVar11 + DAT_00018ad8);
        _Var1 = getpid();
        fprintf(pFVar10,(char *)(DAT_00018b04 + 0x18a18),_Var1,DAT_00018b08 + 0x18a1a,
                DAT_00018b00 + 0x18a12);
        FUN_000184f4(DAT_00018b0c + 0x18a2c,param_1,param_2,pcVar3);
      }
      goto LAB_00018988;
    }
  }
  pcVar3 = (char *)0x0;
  iVar4 = 0;
LAB_00018988:
  FUN_00016938(iVar4);
  free(local_34);
  free(local_30);
  return pcVar3;
}



/* ===== blkid_evaluate_spec @ 00018b14 size=82 ===== */

undefined4 blkid_evaluate_spec(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_18;
  void *local_14;
  undefined4 uStack_10;
  
  local_18 = (void *)0x0;
  local_14 = (void *)0x0;
  if ((param_1 == (char *)0x0) ||
     ((uStack_10 = param_3, pcVar1 = strchr(param_1,0x3d), pcVar1 != (char *)0x0 &&
      (iVar2 = blkid_parse_tag_string(param_1,&local_18,&local_14), iVar2 != 0)))) {
    uVar3 = 0;
  }
  else {
    if (local_14 == (void *)0x0) {
      uVar3 = FUN_00028600(param_1);
    }
    else {
      uVar3 = blkid_evaluate_tag(local_18,local_14,param_2);
    }
    free(local_18);
    free(local_14);
  }
  return uVar3;
}



/* ===== blkid_get_dev_size @ 00018b68 size=30 ===== */

undefined8 blkid_get_dev_size(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  iVar1 = FUN_00027df2(param_1,&local_10);
  if (iVar1 == 0) {
    uVar2 = CONCAT44(uStack_c,local_10);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00018b88 @ 00018b88 size=74 ===== */

void FUN_00018b88(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_00018bd4 + 0x18b9a + DAT_00018bd8);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_00018bdc @ 00018bdc size=42 ===== */

int FUN_00018bdc(int param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x54);
  while( true ) {
    if ((int *)(param_1 + 0x54) == piVar2) {
      return 0;
    }
    if (((char *)piVar2[-4] != (char *)0x0) &&
       (iVar1 = strcmp(param_2,(char *)piVar2[-4]), iVar1 == 0)) break;
    piVar2 = (int *)*piVar2;
  }
  return (int)(piVar2 + -4);
}



/* ===== blkid_new_probe @ 00018c06 size=156 ===== */

void * blkid_new_probe(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  __pid_t _Var2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  FILE *__stream;
  
  blkid_init_debug(0);
  iVar6 = DAT_00018ca4;
  pvVar1 = calloc(1,200);
  iVar6 = iVar6 + 0x18c1c;
  if (pvVar1 != (void *)0x0) {
    if (**(int **)(iVar6 + DAT_00018ca8) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_00018cac);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_00018cb4 + 0x18c42),_Var2,DAT_00018cb8 + 0x18c44,
              DAT_00018cb0 + 0x18c3c,param_2);
      FUN_00018b88(DAT_00018cbc + 0x18c50);
    }
    iVar3 = *(int *)(iVar6 + DAT_00018cc0);
    *(int *)((int)pvVar1 + 0x5c) = iVar3;
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)((int)pvVar1 + 100) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)((int)pvVar1 + 0x60) = uVar4;
    iVar3 = *(int *)(iVar6 + DAT_00018cc4);
    uVar4 = *(undefined4 *)(iVar3 + 8);
    *(int *)((int)pvVar1 + 0x78) = iVar3;
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)((int)pvVar1 + 0x80) = uVar4;
    *(undefined4 *)((int)pvVar1 + 0x7c) = uVar5;
    iVar6 = *(int *)(iVar6 + DAT_00018cc8);
    uVar4 = *(undefined4 *)(iVar6 + 8);
    *(int *)((int)pvVar1 + 0x94) = iVar6;
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)((int)pvVar1 + 0x9c) = uVar4;
    *(undefined4 *)((int)pvVar1 + 0x98) = uVar5;
    *(int *)((int)pvVar1 + 0x4c) = (int)pvVar1 + 0x4c;
    *(int *)((int)pvVar1 + 0x50) = (int)pvVar1 + 0x4c;
    *(int *)((int)pvVar1 + 0xb4) = (int)pvVar1 + 0xb4;
    *(int *)((int)pvVar1 + 0xb8) = (int)pvVar1 + 0xb4;
    *(int *)((int)pvVar1 + 0x54) = (int)pvVar1 + 0x54;
    *(int *)((int)pvVar1 + 0x58) = (int)pvVar1 + 0x54;
  }
  return pvVar1;
}



/* ===== FUN_00018ccc @ 00018ccc size=124 ===== */

void FUN_00018ccc(undefined4 *param_1)

{
  __pid_t _Var1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  FILE *__stream;
  
  if (param_1 != (undefined4 *)0x0) {
    if (**(int **)(DAT_00018d48 + 0x18cd4 + DAT_00018d4c) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(DAT_00018d48 + 0x18cd4 + DAT_00018d50);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_00018d58 + 0x18cfa),_Var1,DAT_00018d5c + 0x18cfc,
              DAT_00018d54 + 0x18cf4);
      FUN_00018b88(DAT_00018d60 + 0x18d08);
    }
    puVar2 = (undefined4 *)blkid_new_probe();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_1;
      uVar3 = param_1[3];
      puVar2[2] = param_1[2];
      puVar2[3] = uVar3;
      uVar3 = param_1[5];
      puVar2[4] = param_1[4];
      puVar2[5] = uVar3;
      uVar3 = param_1[7];
      puVar2[6] = param_1[6];
      puVar2[7] = uVar3;
      uVar3 = param_1[9];
      puVar2[8] = param_1[8];
      puVar2[9] = uVar3;
      puVar2[10] = param_1[10];
      uVar4 = param_1[0xc];
      puVar2[0x2f] = param_1;
      puVar2[0xc] = uVar4 & 0xfffffffd;
    }
  }
  return;
}



/* ===== FUN_00018d64 @ 00018d64 size=92 ===== */

void FUN_00018d64(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *__ptr;
  __pid_t _Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  FILE *__stream;
  
  iVar4 = DAT_00018dc0 + 0x18d6e;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = param_1[4];
  piVar3 = (int *)param_1[5];
  __ptr = (void *)param_1[1];
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  free(__ptr);
  if (**(int **)(iVar4 + DAT_00018dc4) << 0x17 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00018dc8);
    _Var1 = getpid();
    fprintf(__stream,(char *)(DAT_00018dd0 + 0x18d9e),_Var1,DAT_00018dd4 + 0x18da0,
            DAT_00018dcc + 0x18d98,param_2,param_3);
    FUN_00018b88(DAT_00018dd8 + 0x18dae,*param_1);
  }
  (*(code *)PTR_free_0004c384)(param_1);
  return;
}



/* ===== FUN_00018ddc @ 00018ddc size=94 ===== */

void FUN_00018ddc(int param_1)

{
  __pid_t _Var1;
  int iVar2;
  FILE *__stream;
  
  iVar2 = param_1 + 0xb4;
  if (iVar2 != *(int *)(param_1 + 0xb4)) {
    if (**(int **)(DAT_00018e3c + 0x18df0 + DAT_00018e40) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(DAT_00018e3c + 0x18df0 + DAT_00018e44);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_00018e4c + 0x18e12),_Var1,DAT_00018e50 + 0x18e14,
              DAT_00018e48 + 0x18e0c);
      FUN_00018b88(DAT_00018e54 + 0x18e20);
    }
    while (iVar2 != *(int *)(param_1 + 0xb4)) {
      FUN_00018d64(*(int *)(param_1 + 0xb4) + -0x10);
    }
    *(int *)(param_1 + 0xb8) = iVar2;
  }
  return;
}



/* ===== FUN_00018e58 @ 00018e58 size=110 ===== */

void FUN_00018e58(int param_1,int *param_2)

{
  __pid_t _Var1;
  int *piVar2;
  int *piVar3;
  FILE *__stream;
  
  if (param_1 + 0xb4 != *(int *)(param_1 + 0xb4)) {
    if (**(int **)(DAT_00018ec8 + 0x18e6e + DAT_00018ecc) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(DAT_00018ec8 + 0x18e6e + DAT_00018ed0);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_00018ed8 + 0x18e90),_Var1,DAT_00018edc + 0x18e92,
              DAT_00018ed4 + 0x18e8a);
      FUN_00018b88(DAT_00018ee0 + 0x18ea2,*(undefined4 *)(*param_2 + 4));
    }
    piVar2 = *(int **)(param_1 + 0xb4);
    piVar3 = (int *)**(int **)(param_1 + 0xb4);
    while ((int *)(param_1 + 0xb4) != piVar2) {
      if ((int *)piVar2[-1] == param_2) {
        FUN_00018d64(piVar2 + -4);
      }
      piVar2 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  return;
}



/* ===== FUN_0001905c @ 0001905c size=6 ===== */

undefined4 FUN_0001905c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



/* ===== FUN_000190fc @ 000190fc size=88 ===== */

undefined4 FUN_000190fc(int param_1,uint param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 3) {
    iVar3 = param_2 * 0x1c + param_1;
    *(undefined4 *)(iVar3 + 0x6c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    iVar2 = *(int *)(iVar3 + 0x5c);
    if (*(int *)(iVar2 + 0x10) != 0) {
      if (*(void **)(iVar3 + 0x70) == (void *)0x0) {
        if (param_3 == 0) {
          return 0;
        }
        pvVar1 = calloc(1,(*(int *)(iVar2 + 0x18) + 0x20U >> 5) << 2);
        *(void **)(iVar3 + 0x70) = pvVar1;
      }
      else {
        memset(*(void **)(iVar3 + 0x70),0,(*(int *)(iVar2 + 0x18) + 0x20U >> 5) << 2);
      }
      return *(undefined4 *)(param_2 * 0x1c + param_1 + 0x70);
    }
  }
  return 0;
}



/* ===== blkid_probe_reset_buffers @ 000192e4 size=278 ===== */

undefined4 blkid_probe_reset_buffers(int param_1)

{
  __pid_t _Var1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *__format;
  int iVar5;
  int iVar6;
  FILE *pFVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffdf;
  iVar9 = DAT_000193fc + 0x19306;
  if ((int *)(param_1 + 0x4c) != *(int **)(param_1 + 0x4c)) {
    piVar4 = *(int **)(iVar9 + DAT_00019400);
    if (*piVar4 << 0x12 < 0) {
      pFVar7 = (FILE *)**(undefined4 **)(iVar9 + DAT_00019404);
      _Var1 = getpid();
      fprintf(pFVar7,(char *)(DAT_0001940c + 0x1932a),_Var1,DAT_00019410 + 0x1932c,
              DAT_00019408 + 0x19324);
      FUN_00018b88(DAT_00019414 + 0x19338);
    }
    uVar11 = 0;
    iVar10 = DAT_00019418 + 0x19348;
    __format = (char *)(DAT_0001941c + 0x1934e);
    iVar5 = DAT_00019420 + 0x19354;
    while( true ) {
      piVar8 = *(int **)(param_1 + 0x4c);
      iVar6 = *piVar4;
      if ((int *)(param_1 + 0x4c) == piVar8) break;
      iVar2 = *piVar8;
      piVar3 = (int *)piVar8[1];
      uVar11 = VectorAdd(uVar11,*(undefined8 *)(piVar8 + -2),8);
      *(int **)(iVar2 + 4) = piVar3;
      *piVar3 = iVar2;
      if (iVar6 << 0x12 < 0) {
        pFVar7 = (FILE *)**(undefined4 **)(iVar9 + DAT_00019404);
        _Var1 = getpid();
        fprintf(pFVar7,__format,_Var1,iVar10,iVar5);
        FUN_00018b88(DAT_00019434 + 0x193ec);
      }
      free(piVar8 + -6);
    }
    if (iVar6 << 0x17 < 0) {
      pFVar7 = (FILE *)**(undefined4 **)(iVar9 + DAT_00019404);
      _Var1 = getpid();
      fprintf(pFVar7,(char *)(DAT_00019428 + 0x1937a),_Var1,DAT_0001942c + 0x1937c,
              DAT_00019424 + 0x19374);
      FUN_00018b88(DAT_00019430 + 0x19390);
    }
    *(int **)(param_1 + 0x4c) = piVar8;
    *(int **)(param_1 + 0x50) = piVar8;
  }
  return 0;
}



/* ===== blkid_probe_hide_range @ 00019438 size=240 ===== */

undefined4
blkid_probe_hide_range
          (int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  __pid_t _Var3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *__format;
  FILE *__stream;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  void *__s;
  bool bVar12;
  
  iVar10 = 0;
  uVar5 = param_3 + *(uint *)(param_1 + 8);
  uVar8 = param_4 + *(int *)(param_1 + 0xc) + (uint)CARRY4(param_3,*(uint *)(param_1 + 8));
  iVar11 = DAT_00019528 + 0x19460;
  uVar6 = param_6 + uVar8 + CARRY4(param_5,uVar5);
  iVar7 = DAT_0001952c + 0x1947a;
  __format = (char *)(DAT_00019530 + 0x19480);
  for (piVar9 = *(int **)(param_1 + 0x4c); piVar9 != (int *)(param_1 + 0x4c);
      piVar9 = (int *)*piVar9) {
    uVar2 = piVar9[-4];
    uVar4 = piVar9[-3];
    bVar12 = uVar4 <= uVar8;
    if (uVar8 == uVar4) {
      bVar12 = uVar2 <= uVar5;
    }
    if (bVar12) {
      uVar4 = piVar9[-1] + uVar4 + CARRY4(piVar9[-2],uVar2);
      bVar12 = uVar6 <= uVar4;
      if (uVar4 == uVar6) {
        bVar12 = param_5 + uVar5 <= piVar9[-2] + uVar2;
      }
      if (bVar12) {
        __s = (void *)piVar9[-6];
        if (uVar5 != 0 || uVar8 != 0) {
          uVar2 = uVar5 - uVar2;
        }
        if (uVar5 != 0 || uVar8 != 0) {
          __s = (void *)((int)__s + uVar2);
        }
        if (**(int **)(iVar11 + DAT_00019534) << 0x12 < 0) {
          __stream = (FILE *)**(undefined4 **)(iVar11 + DAT_00019538);
          _Var3 = getpid();
          fprintf(__stream,__format,_Var3,iVar7,DAT_0001953c + 0x194f4);
          FUN_00018b88(DAT_00019540 + 0x1950c);
        }
        iVar10 = iVar10 + 1;
        memset(__s,0,param_5);
      }
    }
  }
  if (iVar10 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
  }
  return uVar1;
}



/* ===== FUN_00019544 @ 00019544 size=8 ===== */

uint FUN_00019544(int param_1)

{
  return *(uint *)(param_1 + 0x30) & 4;
}



/* ===== FUN_0001954c @ 0001954c size=8 ===== */

uint FUN_0001954c(int param_1)

{
  return *(uint *)(param_1 + 0x30) & 8;
}



/* ===== FUN_00019554 @ 00019554 size=796 ===== */

int FUN_00019554(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  int *piVar2;
  __pid_t _Var3;
  char *__assertion;
  uint uVar4;
  uint uVar5;
  char *__file;
  uint uVar6;
  undefined4 *puVar7;
  FILE *pFVar8;
  int *__ptr;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  __off64_t _Var17;
  int *local_30;
  
  uVar13 = DAT_00019870 + 0x19564;
  while( true ) {
    uVar1 = param_1[2];
    uVar4 = param_1[3];
    uVar10 = param_1[4];
    iVar12 = param_1[5];
    uVar14 = uVar1 + param_3;
    uVar15 = uVar4 + param_4 + (uint)CARRY4(uVar1,param_3);
    if (uVar10 == 0 && iVar12 == 0) {
      piVar2 = __errno_location();
      *piVar2 = 0x16;
      return 0;
    }
    if (param_5 == 0 && param_6 == 0) break;
    if ((param_1[0xb] & 0xf000U) != 0x2000) {
      uVar5 = uVar4 + iVar12 + (uint)CARRY4(uVar1,uVar10);
      uVar6 = param_6 + uVar15 + CARRY4(param_5,uVar14);
      bVar16 = uVar6 <= uVar5;
      if (uVar5 == uVar6) {
        bVar16 = param_5 + uVar14 <= uVar1 + uVar10;
      }
      if (!bVar16) break;
    }
    piVar2 = (int *)param_1[0x2f];
    if ((piVar2 == (int *)0x0) || (piVar2[7] != param_1[7] || piVar2[6] != param_1[6])) {
LAB_00019654:
      piVar2 = param_1 + 0x13;
      __ptr = (int *)*piVar2;
      local_30 = (int *)(param_5 + uVar14);
      uVar1 = param_6 + uVar15 + CARRY4(param_5,uVar14);
      goto LAB_0001966a;
    }
    uVar5 = piVar2[2];
    uVar6 = piVar2[3];
    bVar16 = uVar6 <= uVar4;
    if (uVar4 == uVar6) {
      bVar16 = uVar5 <= uVar1;
    }
    if (!bVar16) goto LAB_00019654;
    uVar9 = piVar2[5] + uVar6 + CARRY4(piVar2[4],uVar5);
    uVar4 = uVar4 + iVar12 + (uint)CARRY4(uVar1,uVar10);
    bVar16 = uVar4 <= uVar9;
    if (uVar9 == uVar4) {
      bVar16 = uVar1 + uVar10 <= piVar2[4] + uVar5;
    }
    if (!bVar16) goto LAB_00019654;
    param_3 = uVar14 - uVar5;
    param_4 = (uVar15 - uVar6) - (uint)(uVar14 < uVar5);
    param_1 = piVar2;
  }
  if (**(int **)(uVar13 + DAT_00019874) << 0x12 < 0) {
    pFVar8 = (FILE *)**(undefined4 **)(uVar13 + DAT_00019878);
    _Var3 = getpid();
    fprintf(pFVar8,(char *)(DAT_00019880 + 0x195e6),_Var3,DAT_00019884 + 0x195e8,
            DAT_0001987c + 0x195e0);
    FUN_00018b88(DAT_00019888 + 0x195f4);
  }
LAB_000195f6:
  piVar2 = __errno_location();
LAB_0001968c:
  *piVar2 = 0;
  return 0;
LAB_0001966a:
  if (__ptr == piVar2) {
LAB_0001966e:
    _Var17 = lseek64(*param_1,CONCAT44(uVar15,uVar14),0);
    if (_Var17 == -1) {
      piVar2 = __errno_location();
      goto LAB_0001968c;
    }
    bVar16 = param_6 == 0;
    if (param_6 == 0) {
      bVar16 = param_5 < 0xffffffe0;
    }
    if ((!bVar16) || (__ptr = calloc(1,param_5 + 0x20), __ptr == (int *)0x0)) {
      piVar2 = __errno_location();
      *piVar2 = 0xc;
      return 0;
    }
    *__ptr = (int)(__ptr + 8);
    piVar11 = __ptr + 6;
    __ptr[2] = uVar14;
    __ptr[3] = uVar15;
    __ptr[6] = (int)piVar11;
    __ptr[7] = (int)piVar11;
    __ptr[4] = param_5;
    __ptr[5] = param_6;
    local_30 = *(int **)(uVar13 + DAT_00019874);
    if (*local_30 << 0x17 < 0) {
      pFVar8 = (FILE *)**(undefined4 **)(uVar13 + DAT_00019878);
      _Var3 = getpid();
      fprintf(pFVar8,(char *)(DAT_000198ac + 0x1979a),_Var3,DAT_000198b0 + 0x1979c,
              DAT_000198a8 + 0x19794);
      FUN_00018b88(DAT_000198b4 + 0x197b0);
    }
    uVar4 = read(*param_1,(void *)*__ptr,param_5);
    if (uVar4 != param_5) {
      if (*local_30 << 0x17 < 0) {
        pFVar8 = (FILE *)**(undefined4 **)(uVar13 + DAT_00019878);
        _Var3 = getpid();
        fprintf(pFVar8,(char *)(DAT_000198bc + 0x197ec),_Var3,DAT_000198c0 + 0x197ee,
                DAT_000198b8 + 0x197e6);
        FUN_00018b88(DAT_000198c4 + 0x197fa);
      }
      free(__ptr);
      if (((int)uVar4 < 0) && (iVar12 = FUN_0001954c(param_1), iVar12 == 0)) {
        return 0;
      }
      goto LAB_000195f6;
    }
    puVar7 = (undefined4 *)param_1[0x14];
    param_1[0x14] = (int)piVar11;
    __ptr[6] = (int)piVar2;
    __ptr[7] = (int)puVar7;
    *puVar7 = piVar11;
LAB_00019704:
    uVar4 = __ptr[2];
    uVar10 = __ptr[3];
    bVar16 = uVar10 <= uVar15;
    if (uVar15 == uVar10) {
      bVar16 = uVar4 <= uVar14;
    }
    if (bVar16) {
      param_1 = (int *)(__ptr[4] + uVar4);
      uVar13 = __ptr[5] + uVar10 + CARRY4(__ptr[4],uVar4);
      uVar10 = param_6 + uVar15 + CARRY4(param_5,uVar14);
      bVar16 = uVar10 <= uVar13;
      if (uVar13 == uVar10) {
        bVar16 = (int *)(param_5 + uVar14) <= param_1;
      }
      if (bVar16) {
        piVar2 = __errno_location();
        iVar12 = *__ptr;
        *piVar2 = 0;
        if (uVar14 != 0 || uVar15 != 0) {
          return iVar12 + (uVar14 - uVar4);
        }
        return iVar12;
      }
      iVar12 = 0x2b0;
      __file = (char *)(DAT_000198cc + 0x19856);
      __assertion = (char *)(DAT_000198d0 + 0x19858);
    }
    else {
      iVar12 = 0x2af;
      __file = (char *)(DAT_000198a0 + 0x19722);
      __assertion = (char *)(DAT_000198a4 + 0x19724);
    }
    __assert(__assertion,__file,iVar12);
  }
  else {
    uVar4 = __ptr[-4];
    uVar10 = __ptr[-3];
    bVar16 = uVar10 <= uVar15;
    if (uVar15 == uVar10) {
      bVar16 = uVar4 <= uVar14;
    }
    if (bVar16) {
      uVar10 = __ptr[-1] + uVar10 + CARRY4(__ptr[-2],uVar4);
      bVar16 = uVar1 <= uVar10;
      if (uVar10 == uVar1) {
        bVar16 = local_30 <= (int *)(__ptr[-2] + uVar4);
      }
      if (bVar16) {
        if (**(int **)(uVar13 + DAT_00019874) << 0x12 < 0) {
          pFVar8 = (FILE *)**(undefined4 **)(uVar13 + DAT_00019878);
          _Var3 = getpid();
          fprintf(pFVar8,(char *)(DAT_00019890 + 0x196d8),_Var3,DAT_00019894 + 0x196da,
                  DAT_0001988c + 0x196d2);
          FUN_00018b88(DAT_00019898 + 0x196f6);
        }
        __ptr = __ptr + -6;
        if (__ptr == (int *)0x0) goto LAB_0001966e;
        goto LAB_00019704;
      }
    }
  }
  __ptr = (int *)*__ptr;
  goto LAB_0001966a;
}



/* ===== FUN_000198ea @ 000198ea size=152 ===== */

undefined4
FUN_000198ea(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6)

{
  __pid_t _Var1;
  uint uVar2;
  FILE *__stream;
  bool bVar3;
  
  if (**(int **)(DAT_00019984 + 0x198fc + DAT_00019988) << 0x17 < 0) {
    __stream = (FILE *)**(undefined4 **)(DAT_00019984 + 0x198fc + DAT_0001998c);
    _Var1 = getpid();
    fprintf(__stream,(char *)(DAT_00019994 + 0x19920),_Var1,DAT_00019998 + 0x19922,
            DAT_00019990 + 0x1991a);
    FUN_00018b88(DAT_0001999c + 0x1993a);
  }
  bVar3 = param_6 == 0;
  if (param_6 == 0) {
    bVar3 = param_5 < 0x168001;
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  uVar2 = *(uint *)(param_1 + 0x30) & 0xfffffffb;
  *(uint *)(param_1 + 0x10) = param_5;
  *(int *)(param_1 + 0x14) = param_6;
  *(uint *)(param_1 + 0x30) = uVar2;
  if ((bVar3) && ((*(uint *)(param_1 + 0x2c) & 0xf000) != 0x2000)) {
    *(uint *)(param_1 + 0x30) = uVar2 | 4;
  }
  blkid_probe_reset_buffers(param_1);
  return 0;
}



/* ===== blkid_probe_step_back @ 000199a0 size=182 ===== */

undefined4 blkid_probe_step_back(int param_1,undefined4 param_2,undefined4 param_3)

{
  __pid_t _Var1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FILE *pFVar6;
  
  piVar3 = *(int **)(param_1 + 0xb0);
  iVar5 = DAT_00019a58 + 0x199ae;
  if (piVar3 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (-1 < *(int *)(param_1 + 0x30) << 0x1a) {
      blkid_probe_reset_buffers();
    }
    if ((-1 < piVar3[4]) &&
       (piVar3[4] = piVar3[4] + -1, **(int **)(iVar5 + DAT_00019a5c) << 0x17 < 0)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00019a60);
      _Var1 = getpid();
      fprintf(pFVar6,(char *)(DAT_00019a68 + 0x199e6),_Var1,DAT_00019a6c + 0x199e8,
              DAT_00019a64 + 0x199e0,param_2,param_3);
      FUN_00018b88(DAT_00019a70 + 0x199fa,*(undefined4 *)(*piVar3 + 4),piVar3[4]);
    }
    if (piVar3[4] == -1) {
      iVar4 = *(int *)*piVar3;
      if (iVar4 != 0) {
        iVar4 = iVar4 + -1;
      }
      if (**(int **)(iVar5 + DAT_00019a5c) << 0x17 < 0) {
        pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00019a60);
        _Var1 = getpid();
        fprintf(pFVar6,(char *)(DAT_00019a78 + 0x19a2c),_Var1,DAT_00019a7c + 0x19a2e,
                DAT_00019a74 + 0x19a26,param_2,param_3);
        FUN_00018b88(DAT_00019a80 + 0x19a3a);
      }
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = iVar4 * 0x1c + param_1 + 0x5c;
      }
      *(int *)(param_1 + 0xb0) = iVar5;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00019aa2 @ 00019aa2 size=110 ===== */

undefined4 * FUN_00019aa2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  __pid_t _Var3;
  undefined4 uVar4;
  undefined4 *puVar5;
  FILE *__stream;
  undefined4 uVar6;
  
  iVar1 = DAT_00019b10;
  uVar6 = param_2;
  puVar2 = calloc(1,0x18);
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(param_1 + 0xb0);
    *puVar2 = param_2;
    puVar2[3] = uVar4;
    puVar5 = *(undefined4 **)(param_1 + 0xb8);
    *(undefined4 **)(param_1 + 0xb8) = puVar2 + 4;
    puVar2[4] = param_1 + 0xb4;
    puVar2[5] = puVar5;
    *puVar5 = puVar2 + 4;
    if (**(int **)(iVar1 + 0x19ab6 + DAT_00019b14) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar1 + 0x19ab6 + DAT_00019b18);
      _Var3 = getpid();
      fprintf(__stream,(char *)(DAT_00019b20 + 0x19af2),_Var3,DAT_00019b24 + 0x19af4,
              DAT_00019b1c + 0x19aec,uVar6,param_3);
      FUN_00018b88(DAT_00019b28 + 0x19b06,param_2,*(undefined4 *)(*(int *)puVar2[3] + 4));
    }
  }
  return puVar2;
}



/* ===== FUN_00019b2c @ 00019b2c size=40 ===== */

undefined4 FUN_00019b2c(int param_1,void *param_2,size_t param_3)

{
  void *__dest;
  undefined4 uVar1;
  
  __dest = calloc(1,param_3 + 1);
  *(void **)(param_1 + 4) = __dest;
  if (__dest == (void *)0x0) {
    uVar1 = 0xfffffff4;
  }
  else {
    memcpy(__dest,param_2,param_3);
    uVar1 = 0;
    *(size_t *)(param_1 + 8) = param_3;
  }
  return uVar1;
}



/* ===== FUN_00019b54 @ 00019b54 size=30 ===== */

undefined4 FUN_00019b54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00019aa2();
  if (iVar1 != 0) {
    uVar2 = FUN_00019b2c(iVar1,param_3,param_4,param_4);
    return uVar2;
  }
  return 0xffffffff;
}



/* ===== FUN_00019b72 @ 00019b72 size=56 ===== */

undefined4 FUN_00019b72(undefined4 param_1,undefined4 param_2,char *param_3,__gnuc_va_list param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00019aa2();
  if (iVar1 != 0) {
    iVar2 = vasprintf((char **)(iVar1 + 4),param_3,param_4);
    if (0 < iVar2) {
      *(int *)(iVar1 + 8) = iVar2 + 1;
      return 0;
    }
    FUN_00018d64(iVar1);
    if (iVar2 == 0) {
      return 0xffffffea;
    }
  }
  return 0xfffffff4;
}



/* ===== FUN_00019baa @ 00019baa size=26 ===== */

void FUN_00019baa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  FUN_00019b72(param_1,param_2,param_3,&uStack_4,param_1,&uStack_4,param_3);
  return;
}



/* ===== FUN_00019bc4 @ 00019bc4 size=140 ===== */

int FUN_00019bc4(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  
  puVar1 = (undefined4 *)FUN_0001905c();
  if (((puVar1 == (undefined4 *)0x0) || (in_stack_00000000 == 0)) || (puVar1[3] != 0)) {
    iVar2 = 0;
  }
  else if (*(int *)*puVar1 == 0) {
    iVar2 = 0;
    if (((puVar1[2] & 0x200) != 0) &&
       (iVar2 = FUN_00019b54(param_1,DAT_00019c50 + 0x19c08,in_stack_00000004,in_stack_00000000),
       iVar2 == 0)) {
      iVar3 = DAT_00019c54 + 0x19c16;
      iVar2 = DAT_00019c58 + 0x19c1c;
      goto LAB_00019c1a;
    }
  }
  else {
    iVar2 = 0;
    if (((*(int *)*puVar1 == 2) && (iVar2 = 0, (puVar1[2] & 8) != 0)) &&
       (iVar2 = FUN_00019b54(param_1,DAT_00019c5c + 0x19c38,in_stack_00000004,in_stack_00000000),
       iVar2 == 0)) {
      iVar3 = DAT_00019c60 + 0x19c4a;
      iVar2 = DAT_00019c64 + 0x19c4c;
LAB_00019c1a:
      iVar2 = FUN_00019baa(param_1,iVar2,iVar3);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_00019c68 @ 00019c68 size=180 ===== */

undefined4
FUN_00019c68(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  __pid_t _Var2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  FILE *__stream;
  int iVar7;
  
  iVar6 = DAT_00019d1c + 0x19c84;
  if (param_4 != param_6 || param_3 != param_5) {
    iVar7 = param_1;
    puVar1 = (undefined4 *)FUN_0001905c();
    if (**(int **)(iVar6 + DAT_00019d20) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_00019d24);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_00019d2c + 0x19cb2),_Var2,DAT_00019d30 + 0x19cb4,
              DAT_00019d28 + 0x19cac,param_2);
      piVar3 = (int *)FUN_0001905c(param_1);
      uVar4 = 0;
      if (piVar3 != (int *)0x0) {
        uVar5 = piVar3[4];
        if (((int)uVar5 < 0) || (*(uint *)(*piVar3 + 0x18) <= uVar5)) {
          uVar4 = 0;
        }
        else {
          uVar4 = **(undefined4 **)(*(int *)(*piVar3 + 0x14) + uVar5 * 4);
        }
      }
      FUN_00018b88(DAT_00019d34 + 0x19ce8,uVar4,param_3,param_4,param_5,param_6);
      iVar7 = param_5;
    }
    if (*(int *)*puVar1 != 0) {
      return 0;
    }
    if ((puVar1[2] & 0x400) == 0) {
      return 0;
    }
    FUN_00019b54(param_1,DAT_00019d3c + 0x19d0a,DAT_00019d38 + 0x19d08,2,iVar7);
  }
  return 1;
}



/* ===== blkid_probe_get_devno @ 00019d40 size=6 ===== */

undefined8 blkid_probe_get_devno(int param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* ===== blkid_probe_get_wholedisk_devno @ 00019d46 size=66 ===== */

undefined8 blkid_probe_get_wholedisk_devno(int param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  int local_10;
  int iStack_c;
  
  local_10 = *(int *)(param_1 + 0x20);
  iStack_c = *(int *)(param_1 + 0x24);
  if (local_10 == 0 && iStack_c == 0) {
    lVar2 = blkid_probe_get_devno();
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = blkid_devno_to_wholedisk
                      ((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),0,0,&local_10,param_2);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x20) = local_10;
      *(int *)(param_1 + 0x24) = iStack_c;
    }
  }
  return *(undefined8 *)(param_1 + 0x20);
}



/* ===== blkid_probe_is_wholedisk @ 00019d88 size=46 ===== */

bool blkid_probe_is_wholedisk(undefined4 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = blkid_probe_get_devno();
  if ((lVar2 == 0) || (lVar3 = blkid_probe_get_wholedisk_devno(param_1), lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = lVar2 == lVar3;
  }
  return bVar1;
}



/* ===== blkid_probe_get_size @ 00019db6 size=6 ===== */

undefined8 blkid_probe_get_size(int param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* ===== blkid_probe_get_offset @ 00019dbc size=6 ===== */

undefined8 blkid_probe_get_offset(int param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* ===== blkid_probe_get_fd @ 00019dc2 size=4 ===== */

undefined4 blkid_probe_get_fd(undefined4 *param_1)

{
  return *param_1;
}



/* ===== blkid_probe_get_sectorsize @ 00019dc6 size=44 ===== */

int blkid_probe_get_sectorsize(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[10];
  if (iVar1 == 0) {
    if (((param_1[0xb] & 0xf000) == 0x6000) &&
       (iVar1 = FUN_00027eaa(*param_1,param_1 + 10), iVar1 == 0)) {
      iVar1 = param_1[10];
    }
    else {
      iVar1 = 0x200;
      param_1[10] = 0x200;
    }
  }
  return iVar1;
}



/* ===== blkid_probe_set_sectorsize @ 00019df2 size=6 ===== */

undefined4 blkid_probe_set_sectorsize(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return 0;
}



/* ===== blkid_probe_get_sectors @ 00019df8 size=14 ===== */

undefined8 blkid_probe_get_sectors(int param_1)

{
  return CONCAT44(*(uint *)(param_1 + 0x14) >> 9,
                  *(uint *)(param_1 + 0x10) >> 9 | *(uint *)(param_1 + 0x14) << 0x17);
}



/* ===== blkid_probe_numof_values @ 00019e06 size=20 ===== */

int blkid_probe_numof_values(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0xb4); puVar1 != (undefined4 *)(param_1 + 0xb4);
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* ===== FUN_00019e1a @ 00019e1a size=34 ===== */

undefined4 * FUN_00019e1a(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < param_2) {
    iVar1 = 0;
    for (puVar2 = *(undefined4 **)(param_1 + 0xb4); puVar2 != (undefined4 *)(param_1 + 0xb4);
        puVar2 = (undefined4 *)*puVar2) {
      if (iVar1 == param_2) {
        return puVar2 + -4;
      }
      iVar1 = iVar1 + 1;
    }
  }
  return (undefined4 *)0x0;
}



/* ===== blkid_probe_get_value @ 00019e3c size=114 ===== */

undefined4
blkid_probe_get_value
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5)

{
  undefined4 *puVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  int iVar4;
  FILE *__stream;
  
  puVar1 = (undefined4 *)FUN_00019e1a();
  iVar4 = DAT_00019eb0 + 0x19e50;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *puVar1;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = puVar1[1];
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = puVar1[2];
    }
    uVar3 = 0;
    if ((**(uint **)(iVar4 + DAT_00019eb4) & 0x100) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00019eb8);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_00019ec0 + 0x19e8e),_Var2,DAT_00019ec4 + 0x19e90,
              DAT_00019ebc + 0x19e88,param_2);
      FUN_00018b88(DAT_00019ec8 + 0x19e9e,*puVar1);
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_00019ecc @ 00019ecc size=110 ===== */

int FUN_00019ecc(int param_1,char *param_2)

{
  int iVar1;
  __pid_t _Var2;
  int *piVar3;
  int iVar4;
  FILE *__stream;
  char *pcVar5;
  
  piVar3 = *(int **)(param_1 + 0xb4);
  iVar4 = DAT_00019f3c + 0x19ee0;
  pcVar5 = param_2;
  while( true ) {
    if ((int *)(param_1 + 0xb4) == piVar3) {
      return 0;
    }
    if (((char *)piVar3[-4] != (char *)0x0) &&
       (iVar1 = strcmp(param_2,(char *)piVar3[-4]), iVar1 == 0)) break;
    piVar3 = (int *)*piVar3;
  }
  if (-1 < **(int **)(iVar4 + DAT_00019f40) << 0x17) {
    return (int)(piVar3 + -4);
  }
  __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00019f44);
  _Var2 = getpid();
  fprintf(__stream,(char *)(DAT_00019f4c + 0x19f16),_Var2,DAT_00019f50 + 0x19f18,
          DAT_00019f48 + 0x19f10,pcVar5);
  FUN_00018b88(DAT_00019f54 + 0x19f28,piVar3[-4]);
  return (int)(piVar3 + -4);
}



/* ===== blkid_probe_lookup_value @ 00019f58 size=38 ===== */

undefined4
blkid_probe_lookup_value
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00019ecc();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(iVar1 + 4);
    }
    if (param_4 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      *param_4 = *(undefined4 *)(iVar1 + 8);
    }
  }
  return uVar2;
}



/* ===== blkid_do_wipe @ 00019f7e size=478 ===== */

undefined4 blkid_do_wipe(int param_1,int param_2)

{
  char *__nptr;
  int *piVar1;
  __pid_t _Var2;
  void *pvVar3;
  ssize_t sVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint __n;
  FILE *__stream;
  void *__buf;
  int iVar8;
  undefined8 uVar9;
  __off64_t _Var10;
  uintmax_t uVar11;
  char *pcStack_1048;
  uint local_1044 [3];
  undefined1 auStack_1038 [4100];
  
  piVar7 = *(int **)(param_1 + 0xb0);
  iVar8 = DAT_0001a15c + 0x19f9c;
  pcStack_1048 = (char *)0x0;
  local_1044[0] = 0;
  if (piVar7 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*(int *)*piVar7 == 0) {
    iVar5 = blkid_probe_lookup_value(param_1,DAT_0001a160 + 0x19fdc,&pcStack_1048,0);
    if (iVar5 != 0) {
      return 0;
    }
    iVar5 = DAT_0001a164 + 0x19fec;
  }
  else {
    if (*(int *)*piVar7 != 2) {
      return 0;
    }
    iVar5 = blkid_probe_lookup_value(param_1,DAT_0001a188 + 0x1a116,&pcStack_1048);
    if (iVar5 != 0) {
      return 0;
    }
    iVar5 = DAT_0001a18c + 0x1a128;
  }
  iVar5 = blkid_probe_lookup_value(param_1,iVar5,0,local_1044);
  __nptr = pcStack_1048;
  if (((iVar5 == 0) && (local_1044[0] != 0)) && (pcStack_1048 != (char *)0x0)) {
    piVar1 = __errno_location();
    *piVar1 = 0;
    uVar11 = strtoumax(__nptr,(char **)0x0,10);
    if (*piVar1 == 0) {
      uVar9 = *(undefined8 *)(param_1 + 8);
      iVar5 = blkid_probe_get_fd(param_1);
      _Var10 = VectorAdd((uVar11 & 0xffffffff00000000) + (uVar11 & 0xffffffff),uVar9,8);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      if (0x1000 < local_1044[0]) {
        local_1044[0] = 0x1000;
      }
      if (**(int **)(iVar8 + DAT_0001a168) << 0x17 < 0) {
        __stream = (FILE *)**(undefined4 **)(iVar8 + DAT_0001a16c);
        _Var2 = getpid();
        fprintf(__stream,(char *)(DAT_0001a174 + 0x1a070),_Var2,DAT_0001a178 + 0x1a072,
                DAT_0001a170 + 0x1a06a);
        if (param_2 == 0) {
          iVar8 = DAT_0001a17c + 0x1a08a;
        }
        else {
          iVar8 = DAT_0001a190 + 0x1a12e;
        }
        FUN_00018b88(DAT_0001a180 + 0x1a09a,*(undefined4 *)(*piVar7 + 4),(int)_Var10,
                     (int)((ulonglong)_Var10 >> 0x20),_Var10,local_1044[0],
                     *(undefined4 *)(*piVar7 + 4),piVar7[4],iVar8);
      }
      _Var10 = lseek64(iVar5,_Var10,0);
      __n = local_1044[0];
      if (_Var10 == -1) {
        return 0xffffffff;
      }
      pvVar3 = memset(auStack_1038,0,local_1044[0]);
      uVar6 = DAT_0001a184;
      if (param_2 == 0) {
        if (__n == 0) {
          return 0;
        }
        __buf = pvVar3;
        do {
          *piVar1 = 0;
          sVar4 = write(iVar5,__buf,__n);
          iVar8 = *piVar1;
          if (sVar4 < 1) {
            if (iVar8 != 4) {
              if (iVar8 != 0xb) {
                return 0xffffffff;
              }
              goto LAB_0001a138;
            }
          }
          else {
            __n = __n - sVar4;
            if (__n != 0) {
              __buf = (void *)((int)__buf + sVar4);
            }
            if (iVar8 == 0xb) {
LAB_0001a138:
              ((timespec *)((int)pvVar3 + -8))->tv_sec = 0;
              *(undefined4 *)((int)pvVar3 + -4) = uVar6;
              nanosleep((timespec *)((int)pvVar3 + -8),(timespec *)0x0);
            }
          }
        } while (__n != 0);
        fsync(iVar5);
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffdf;
      }
      else {
        blkid_probe_hide_range(param_1);
      }
      uVar6 = blkid_probe_step_back(param_1);
      return uVar6;
    }
  }
  return 0;
}



/* ===== blkid_probe_has_value @ 0001a194 size=18 ===== */

bool blkid_probe_has_value
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = blkid_probe_lookup_value(param_1,param_2,0,0,param_4);
  return iVar1 == 0;
}



/* ===== FUN_0001a1a6 @ 0001a1a6 size=86 ===== */

void FUN_0001a1a6(byte *param_1,char *param_2,size_t param_3)

{
  snprintf(param_2,param_3,(char *)(DAT_0001a1fc + 0x1a1f4),(uint)*param_1,(uint)param_1[1],
           (uint)param_1[2],(uint)param_1[3],(uint)param_1[4],(uint)param_1[5],(uint)param_1[6],
           (uint)param_1[7],(uint)param_1[8],(uint)param_1[9],(uint)param_1[10],(uint)param_1[0xb],
           (uint)param_1[0xc],(uint)param_1[0xd],(uint)param_1[0xe],(uint)param_1[0xf]);
  return;
}



/* ===== FUN_0001a216 @ 0001a216 size=42 ===== */

void FUN_0001a216(char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = strlen(param_1);
  do {
    sVar2 = sVar1;
    if (sVar2 == 0) break;
    sVar1 = sVar2 - 1;
  } while ((int)((uint)*(ushort *)
                        (**(int **)(DAT_0001a240 + 0x1a226 + DAT_0001a244) +
                        (uint)(byte)param_1[sVar2 - 1] * 2) << 0x1a) < 0);
  param_1[sVar2] = '\0';
  return;
}



/* ===== FUN_0001a28c @ 0001a28c size=216 ===== */

void FUN_0001a28c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  __pid_t _Var1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  int *piVar5;
  
  iVar3 = DAT_0001a368;
  iVar2 = DAT_0001a364 + 0x1a2a6;
  if (param_5 == 0 && param_6 == 0) {
    if (**(int **)(iVar2 + DAT_0001a368) << 0x17 < 0) {
      pFVar4 = (FILE *)**(undefined4 **)(iVar2 + DAT_0001a36c);
      _Var1 = getpid();
      fprintf(pFVar4,(char *)(DAT_0001a374 + 0x1a2c8),_Var1,DAT_0001a378 + 0x1a2ca,
              DAT_0001a370 + 0x1a2c2);
      FUN_00018b88(DAT_0001a37c + 0x1a2d6);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    piVar5 = *(int **)(param_1 + 0xb0);
    if ((((piVar5 != (int *)0x0) && (*piVar5 != 0)) && (-1 < piVar5[4])) &&
       ((uint)piVar5[4] < *(uint *)(*piVar5 + 0x18))) {
      *(int *)(param_1 + 0x40) = param_5;
      *(int *)(param_1 + 0x44) = param_6;
      *(undefined4 *)(param_1 + 0x38) = param_3;
      *(undefined4 *)(param_1 + 0x3c) = param_4;
      *(int **)(param_1 + 0x48) = piVar5;
      if (**(int **)(iVar2 + iVar3) << 0x17 < 0) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar2 + DAT_0001a36c);
        _Var1 = getpid();
        fprintf(pFVar4,(char *)(DAT_0001a384 + 0x1a334),_Var1,DAT_0001a388 + 0x1a336,
                DAT_0001a380 + 0x1a32e);
        iVar3 = *piVar5;
        FUN_00018b88(DAT_0001a38c + 0x1a360,*(undefined4 *)(iVar3 + 4),
                     **(undefined4 **)(*(int *)(iVar3 + 0x14) + piVar5[4] * 4),iVar3,
                     *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                     *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
      }
    }
  }
  return;
}



/* ===== blkid_reset_probe @ 0001a390 size=50 ===== */

void blkid_reset_probe(int param_1)

{
  undefined4 extraout_r1;
  
  FUN_00018ddc();
  FUN_0001a28c(param_1,extraout_r1,0,0,0);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  return;
}



/* ===== FUN_0001a3c2 @ 0001a3c2 size=88 ===== */

void FUN_0001a3c2(int param_1,undefined4 param_2,undefined4 param_3)

{
  __pid_t _Var1;
  undefined4 extraout_r1;
  FILE *__stream;
  
  if (**(int **)(DAT_0001a41c + 0x1a3ca + DAT_0001a420) << 0x17 < 0) {
    __stream = (FILE *)**(undefined4 **)(DAT_0001a41c + 0x1a3ca + DAT_0001a424);
    _Var1 = getpid();
    fprintf(__stream,(char *)(DAT_0001a42c + 0x1a3ec),_Var1,DAT_0001a430 + 0x1a3ee,
            DAT_0001a428 + 0x1a3e6);
    FUN_00018b88(DAT_0001a434 + 0x1a3fa);
    param_2 = extraout_r1;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_0001a28c(param_1,param_2,0,0,0,param_3);
  return;
}



/* ===== FUN_0001a438 @ 0001a438 size=88 ===== */

void FUN_0001a438(int param_1,undefined4 param_2,undefined4 param_3)

{
  __pid_t _Var1;
  undefined4 extraout_r1;
  FILE *__stream;
  
  if (**(int **)(DAT_0001a490 + 0x1a440 + DAT_0001a494) << 0x17 < 0) {
    __stream = (FILE *)**(undefined4 **)(DAT_0001a490 + 0x1a440 + DAT_0001a498);
    _Var1 = getpid();
    fprintf(__stream,(char *)(DAT_0001a4a0 + 0x1a462),_Var1,DAT_0001a4a4 + 0x1a464,
            DAT_0001a49c + 0x1a45c);
    FUN_00018b88(DAT_0001a4a8 + 0x1a470);
    param_2 = extraout_r1;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_0001a28c(param_1,param_2,0,0,0,param_3);
  return;
}



/* ===== blkid_do_probe @ 0001a4ac size=198 ===== */

int blkid_do_probe(int param_1)

{
  __pid_t _Var1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *__format;
  int iVar8;
  FILE *__stream;
  
  iVar6 = DAT_0001a574 + 0x1a4bc;
  if (*(int *)(param_1 + 0x30) << 0x1b < 0) {
LAB_0001a568:
    iVar8 = 1;
  }
  else {
    iVar7 = DAT_0001a578 + 0x1a4c6;
    __format = (char *)(DAT_0001a57c + 0x1a4c8);
    do {
      iVar8 = DAT_0001a580 + 0x1a4ce;
      do {
        piVar3 = *(int **)(param_1 + 0xb0);
        if (piVar3 == (int *)0x0) {
          FUN_0001a3c2(param_1);
          iVar5 = param_1;
LAB_0001a4de:
          piVar3 = (int *)(iVar5 + 0x5c);
          *(int **)(param_1 + 0xb0) = piVar3;
        }
        else {
          if (piVar3[1] == 0) {
LAB_0001a550:
            uVar4 = *(int *)*piVar3 + 1;
            if (uVar4 < 3) {
              iVar5 = uVar4 * 0x1c + param_1;
              goto LAB_0001a4de;
            }
            FUN_0001a438(param_1);
            goto LAB_0001a568;
          }
          if ((piVar3[4] + 1 == ((int *)*piVar3)[6]) || (piVar3[4] == -1)) goto LAB_0001a550;
        }
        piVar3[3] = 0;
        if (**(int **)(iVar6 + DAT_0001a584) << 0x17 < 0) {
          __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_0001a588);
          _Var1 = getpid();
          fprintf(__stream,__format,_Var1,iVar7,iVar8);
          if (piVar3[1] == 0) {
            puVar2 = (undefined *)(DAT_0001a58c + 0x1a51a);
          }
          else {
            puVar2 = &UNK_0001a572 + DAT_0001a594;
          }
          FUN_00018b88(DAT_0001a590 + 0x1a520,*(undefined4 *)(*piVar3 + 4),puVar2,piVar3[4]);
        }
      } while (piVar3[1] == 0);
      iVar8 = (**(code **)(*piVar3 + 0x1c))(param_1,piVar3);
    } while (iVar8 == 1);
  }
  return iVar8;
}



/* ===== blkid_do_safeprobe @ 0001a598 size=194 ===== */

uint blkid_do_safeprobe(int param_1)

{
  __pid_t _Var1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  FILE *__stream;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *__format;
  
  iVar7 = DAT_0001a65c + 0x1a5ae;
  if ((*(uint *)(param_1 + 0x30) & 0x10) == 0) {
    FUN_0001a3c2();
    piVar5 = (int *)(param_1 + 0x5c);
    piVar4 = *(int **)(iVar7 + DAT_0001a660);
    iVar8 = DAT_0001a664 + 0x1a5cc;
    __format = (char *)(DAT_0001a668 + 0x1a5ce);
    uVar2 = 0;
    iVar6 = 0;
    do {
      *(int **)(param_1 + 0xb0) = piVar5;
      piVar5[3] = 0;
      if (*piVar4 << 0x17 < 0) {
        __stream = (FILE *)**(undefined4 **)(iVar7 + DAT_0001a66c);
        _Var1 = getpid();
        fprintf(__stream,__format,_Var1,iVar8,DAT_0001a670 + 0x1a5f6);
        if (piVar5[1] == 0) {
          iVar3 = DAT_0001a674 + 0x1a60e;
        }
        else {
          iVar3 = DAT_0001a67c + 0x1a656;
        }
        FUN_00018b88(DAT_0001a678 + 0x1a612,*(undefined4 *)(*piVar5 + 4),iVar3);
      }
      if (piVar5[1] != 0) {
        piVar5[4] = -1;
        uVar2 = (**(code **)(*piVar5 + 0x20))(param_1,piVar5);
        piVar5[4] = -1;
        if ((int)uVar2 < 0) break;
        if (uVar2 == 0) {
          iVar6 = iVar6 + 1;
        }
      }
      piVar5 = piVar5 + 7;
    } while (piVar5 != (int *)(param_1 + 0xb0));
    FUN_0001a438(param_1);
    if (-1 < (int)uVar2) {
      uVar2 = (uint)(iVar6 == 0);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== blkid_do_fullprobe @ 0001a680 size=194 ===== */

uint blkid_do_fullprobe(int param_1)

{
  __pid_t _Var1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  FILE *__stream;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *__format;
  
  iVar7 = DAT_0001a744 + 0x1a696;
  if ((*(uint *)(param_1 + 0x30) & 0x10) == 0) {
    FUN_0001a3c2();
    piVar5 = (int *)(param_1 + 0x5c);
    piVar4 = *(int **)(iVar7 + DAT_0001a748);
    iVar8 = DAT_0001a74c + 0x1a6b4;
    __format = (char *)(DAT_0001a750 + 0x1a6b6);
    uVar2 = 0;
    iVar6 = 0;
    do {
      *(int **)(param_1 + 0xb0) = piVar5;
      piVar5[3] = 0;
      if (*piVar4 << 0x17 < 0) {
        __stream = (FILE *)**(undefined4 **)(iVar7 + DAT_0001a754);
        _Var1 = getpid();
        fprintf(__stream,__format,_Var1,iVar8,DAT_0001a758 + 0x1a6de);
        if (piVar5[1] == 0) {
          iVar3 = DAT_0001a75c + 0x1a6f6;
        }
        else {
          iVar3 = DAT_0001a764 + 0x1a73e;
        }
        FUN_00018b88(DAT_0001a760 + 0x1a6fa,*(undefined4 *)(*piVar5 + 4),iVar3);
      }
      if (piVar5[1] != 0) {
        piVar5[4] = -1;
        uVar2 = (**(code **)(*piVar5 + 0x1c))(param_1,piVar5);
        piVar5[4] = -1;
        if ((int)uVar2 < 0) break;
        if (uVar2 == 0) {
          iVar6 = iVar6 + 1;
        }
      }
      piVar5 = piVar5 + 7;
    } while (piVar5 != (int *)(param_1 + 0xb0));
    FUN_0001a438(param_1);
    if (-1 < (int)uVar2) {
      uVar2 = (uint)(iVar6 == 0);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0001a768 @ 0001a768 size=68 ===== */

undefined4
FUN_0001a768(int param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_5 != 0 || param_6 != 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar2 = *(uint *)(param_1 + 0x3c);
    bVar3 = uVar2 <= param_4;
    if (param_4 == uVar2) {
      bVar3 = uVar1 <= param_3;
    }
    if (bVar3) {
      param_4 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
      uVar2 = *(int *)(param_1 + 0x44) + uVar2 + CARRY4(*(uint *)(param_1 + 0x40),uVar1);
      bVar3 = param_4 <= uVar2;
      if (uVar2 == param_4) {
        bVar3 = param_3 + param_5 <= *(uint *)(param_1 + 0x40) + uVar1;
      }
      if (bVar3) {
        *param_2 = *(undefined4 *)(param_1 + 0x48);
        return 1;
      }
    }
  }
  return 0;
}



/* ===== blkid_probe_set_hint @ 0001a83c size=346 ===== */

int blkid_probe_set_hint(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  __pid_t _Var5;
  undefined4 *puVar6;
  char *pcVar7;
  FILE *pFVar8;
  int iVar9;
  uintmax_t uVar10;
  char *local_2c;
  char *local_28;
  char *local_24;
  
  iVar9 = DAT_0001a998 + 0x1a850;
  uVar10 = CONCAT44(param_4,param_3);
  local_2c = (char *)0x0;
  local_28 = (char *)0x0;
  pcVar1 = strchr(param_2,0x3d);
  if (pcVar1 == (char *)0x0) {
LAB_0001a8be:
    pcVar1 = local_2c;
    pcVar7 = local_2c;
    if (local_2c == (char *)0x0) {
      pcVar7 = param_2;
    }
    puVar4 = (undefined4 *)FUN_00018bdc(param_1,pcVar7);
    iVar2 = DAT_0001a99c;
    if (puVar4 == (undefined4 *)0x0) {
      if (((pcVar1 != (char *)0x0) || (local_2c = strdup(param_2), local_2c != (char *)0x0)) &&
         (puVar6 = malloc(0x18), puVar6 != (undefined4 *)0x0)) {
        puVar4 = *(undefined4 **)(param_1 + 0x58);
        *(uintmax_t *)(puVar6 + 2) = uVar10;
        *puVar6 = local_2c;
        *(undefined4 **)(param_1 + 0x58) = puVar6 + 4;
        puVar6[4] = param_1 + 0x54;
        puVar6[5] = puVar4;
        *puVar4 = puVar6 + 4;
        if (**(int **)(iVar9 + DAT_0001a99c) << 0x17 < 0) {
          pFVar8 = (FILE *)**(undefined4 **)(iVar9 + DAT_0001a9a0);
          _Var5 = getpid();
          fprintf(pFVar8,(char *)(DAT_0001a9b8 + 0x1a960),_Var5,DAT_0001a9bc + 0x1a962,
                  DAT_0001a9b4 + 0x1a95a);
          FUN_00018b88(DAT_0001a9c0 + 0x1a974,*puVar6,puVar6[2],puVar6[3]);
        }
        local_2c = (char *)0x0;
        puVar4 = puVar6;
      }
    }
    else {
      *(uintmax_t *)(puVar4 + 2) = uVar10;
      if (**(int **)(iVar9 + iVar2) << 0x17 < 0) {
        pFVar8 = (FILE *)**(undefined4 **)(iVar9 + DAT_0001a9a0);
        _Var5 = getpid();
        fprintf(pFVar8,(char *)(DAT_0001a9a8 + 0x1a8fc),_Var5,DAT_0001a9ac + 0x1a8fe,
                DAT_0001a9a4 + 0x1a8f6);
        FUN_00018b88(DAT_0001a9b0 + 0x1a910,*puVar4,puVar4[2],puVar4[3]);
      }
    }
  }
  else {
    local_24 = (char *)0x0;
    iVar2 = blkid_parse_tag_string(param_2,&local_2c,&local_28);
    if (iVar2 == 0) {
      piVar3 = __errno_location();
      *piVar3 = 0;
      uVar10 = strtoumax(local_28,&local_24,10);
      if (((*piVar3 == 0) && (local_28 != local_24)) &&
         ((local_24 == (char *)0x0 || (*local_24 == '\0')))) goto LAB_0001a8be;
    }
    puVar4 = (undefined4 *)0x0;
  }
  free(local_2c);
  free(local_28);
  if (puVar4 == (undefined4 *)0x0) {
    piVar3 = __errno_location();
    if (*piVar3 == 0) {
      iVar9 = -0x16;
    }
    else {
      iVar9 = -*piVar3;
    }
  }
  else {
    iVar9 = 0;
  }
  return iVar9;
}



/* ===== FUN_0001a9c4 @ 0001a9c4 size=34 ===== */

undefined4 FUN_0001a9c4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00018bdc();
  if (iVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar2 = 0;
    *param_3 = *(undefined4 *)(iVar1 + 8);
    param_3[1] = uVar3;
  }
  return uVar2;
}



/* ===== FUN_0001a9e6 @ 0001a9e6 size=68 ===== */

void FUN_0001a9e6(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 local_20;
  
  if ((*(int *)(param_2 + 8) == 0) ||
     (iVar1 = FUN_0001a9c4(param_1,*(int *)(param_2 + 8),&local_20), iVar1 < 0)) {
    local_20 = 0;
  }
  uVar2 = *(int *)(param_2 + 0xc) * 0x400;
  FUN_00019554(param_1,local_20._4_4_,(uint)local_20 + uVar2,
               local_20._4_4_ + ((int)uVar2 >> 0x1f) + (uint)CARRY4((uint)local_20,uVar2),param_3,0)
  ;
  return;
}



/* ===== FUN_0001aa2a @ 0001aa2a size=280 ===== */

uint FUN_0001aa2a(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  __pid_t _Var4;
  uint uVar5;
  int *piVar6;
  FILE *__stream;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 local_40;
  
  iVar7 = DAT_0001ab50 + 0x1aa42;
  if (param_2 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(param_2 + 0x14);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar1 = DAT_0001ab48;
  do {
    if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) {
      if (param_2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)(*(int *)(param_2 + 0x14) != 0);
      }
      return uVar5;
    }
    if ((piVar6[2] == 0) || (iVar2 = FUN_0001a9c4(param_1,piVar6[2],&local_40), iVar2 < 0)) {
      local_40 = 0;
    }
    uVar5 = (piVar6[3] + ((uint)piVar6[4] >> 10)) * 0x400;
    uVar8 = (uint)local_40 + uVar5;
    iVar9 = local_40._4_4_ + (uint)CARRY4((uint)local_40,uVar5);
    iVar2 = FUN_00019554(param_1,uVar5,uVar8,iVar9,uVar1);
    if (iVar2 == 0) {
      piVar3 = __errno_location();
      if (*piVar3 != 0) {
        return -*piVar3;
      }
    }
    else {
      iVar2 = memcmp((void *)*piVar6,(void *)(iVar2 + (piVar6[4] & 0x3ffU)),piVar6[1]);
      if (iVar2 == 0) {
        if (**(int **)(iVar7 + DAT_0001ab54) << 0x17 < 0) {
          __stream = (FILE *)**(undefined4 **)(iVar7 + DAT_0001ab58);
          _Var4 = getpid();
          fprintf(__stream,(char *)(DAT_0001ab60 + 0x1aaf2),_Var4,DAT_0001ab64 + 0x1aaf4,
                  DAT_0001ab5c + 0x1aaec);
          FUN_00018b88(DAT_0001ab68 + 0x1ab04,piVar6[4],piVar6[3]);
        }
        if (param_3 != (int *)0x0) {
          uVar5 = piVar6[4];
          *param_3 = uVar8 + (uVar5 & 0x3ff);
          param_3[1] = iVar9 + (uint)CARRY4(uVar8,uVar5 & 0x3ff);
        }
        if (param_4 == (undefined4 *)0x0) {
          return 0;
        }
        *param_4 = piVar6;
        return 0;
      }
    }
    piVar6 = piVar6 + 5;
  } while( true );
}



/* ===== blkid_probe_reset_hints @ 0001ab6c size=104 ===== */

void blkid_probe_reset_hints(int param_1,undefined4 param_2)

{
  __pid_t _Var1;
  void *__ptr;
  int iVar2;
  int *piVar3;
  FILE *__stream;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x54);
  if (piVar5 != *(int **)(param_1 + 0x54)) {
    if (**(int **)(DAT_0001abd4 + 0x1ab7e + DAT_0001abd8) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(DAT_0001abd4 + 0x1ab7e + DAT_0001abdc);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_0001abe4 + 0x1aba0),_Var1,DAT_0001abe8 + 0x1aba2,
              DAT_0001abe0 + 0x1ab9a,param_2);
      FUN_00018b88(DAT_0001abec + 0x1abae);
    }
    while (piVar4 = *(int **)(param_1 + 0x54), piVar5 != piVar4) {
      iVar2 = *piVar4;
      piVar3 = (int *)piVar4[1];
      __ptr = (void *)piVar4[-4];
      *(int **)(iVar2 + 4) = piVar3;
      *piVar3 = iVar2;
      free(__ptr);
      free(piVar4 + -4);
    }
    *(int **)(param_1 + 0x58) = piVar5;
  }
  return;
}



/* ===== blkid_free_probe @ 0001abf0 size=150 ===== */

void blkid_free_probe(int *param_1)

{
  int *piVar1;
  __pid_t _Var2;
  int *piVar3;
  FILE *__stream;
  int iVar4;
  
  iVar4 = DAT_0001ac88 + 0x1abfa;
  if (param_1 == (int *)0x0) {
    return;
  }
  piVar3 = param_1;
  do {
    if (*(code **)(piVar3[0x17] + 0x24) != (code *)0x0) {
      (**(code **)(piVar3[0x17] + 0x24))(param_1,piVar3[0x1d]);
    }
    piVar1 = piVar3 + 0x1c;
    piVar3 = piVar3 + 7;
    free((void *)*piVar1);
  } while (param_1 + 0x15 != piVar3);
  if ((param_1[0xc] << 0x1e < 0) && (-1 < *param_1)) {
    close(*param_1);
  }
  blkid_probe_reset_buffers(param_1);
  FUN_00018ddc(param_1);
  blkid_probe_reset_hints(param_1);
  blkid_free_probe(param_1[0x30]);
  if (**(int **)(iVar4 + DAT_0001ac8c) << 0x17 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_0001ac90);
    _Var2 = getpid();
    fprintf(__stream,(char *)(DAT_0001ac98 + 0x1ac66),_Var2,DAT_0001ac9c + 0x1ac68,
            DAT_0001ac94 + 0x1ac60);
    FUN_00018b88(DAT_0001aca0 + 0x1ac74);
  }
  (*(code *)PTR_free_0004c384)(param_1);
  return;
}



/* ===== blkid_probe_set_device @ 0001aca4 size=1372 ===== */

undefined4
blkid_probe_set_device(int *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  __pid_t _Var3;
  ssize_t sVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FILE *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  bool bVar15;
  __off64_t _Var16;
  void *local_2a0;
  uint local_29c;
  uint local_298;
  uint uStack_294;
  stat64 sStack_290;
  undefined8 local_228;
  
  local_2a0 = (void *)0x0;
  local_29c = 0;
  local_298 = 0;
  uStack_294 = 0;
  blkid_reset_probe();
  iVar10 = DAT_0001b200;
  blkid_probe_reset_buffers(param_1);
  iVar10 = iVar10 + 0x1ace2;
  if ((param_1[0xc] << 0x1e < 0) && (-1 < *param_1)) {
    close(*param_1);
  }
  if (param_1[0x30] != 0) {
    blkid_free_probe();
    param_1[0x30] = 0;
  }
  param_1[0xc] = param_1[0xc] & 0xfffffff1;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x12] = 0;
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (param_2 < 0) {
    return 1;
  }
  posix_fadvise64(param_2,0,0,1);
  iVar1 = fstat64(param_2,&sStack_290);
  if (iVar1 != 0) goto LAB_0001addc;
  uVar7 = sStack_290.st_mode & 0xf000;
  if (((sStack_290.st_mode & 0xb000) == 0x2000) || (uVar7 == 0x8000)) {
    param_1[0xb] = sStack_290.st_mode;
    if ((sStack_290.st_mode & 0xb000) == 0x2000) {
      param_1[6] = (int)sStack_290.st_rdev;
      param_1[7] = sStack_290.st_rdev._4_4_;
      if (uVar7 != 0x6000) {
        if (uVar7 != 0x2000) goto LAB_0001aebe;
        sStack_290.st_size._0_4_ = 1;
        sStack_290.st_size._4_4_ = 0;
        goto LAB_0001ae2c;
      }
      iVar1 = FUN_00027df2(param_2,&local_298);
      if (iVar1 != 0) {
        if (**(int **)(iVar10 + DAT_0001b204) << 0x17 < 0) {
          pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001b208);
          _Var3 = getpid();
          fprintf(pFVar9,(char *)(DAT_0001b210 + 0x1adca),_Var3,DAT_0001b214 + 0x1adcc,
                  DAT_0001b20c + 0x1adc2);
          FUN_00018b88(DAT_0001b218 + 0x1adda);
        }
        goto LAB_0001addc;
      }
    }
    else {
LAB_0001aebe:
      if (uVar7 == 0x8000) {
LAB_0001ae2c:
        local_298 = (uint)sStack_290.st_size;
        uStack_294 = sStack_290.st_size._4_4_;
      }
    }
    uVar7 = param_5;
    uVar14 = param_6;
    if (param_6 == 0 && param_5 == 0) {
      uVar7 = local_298;
      uVar14 = uStack_294;
    }
    param_1[4] = uVar7;
    param_1[5] = uVar14;
    if ((param_4 != 0 || param_3 != 0) && (param_6 == 0 && param_5 == 0)) {
      param_1[4] = uVar7 - param_3;
      param_1[5] = (uVar14 - param_4) - (uint)(uVar7 < param_3);
    }
    uVar7 = param_1[4];
    iVar1 = param_1[5];
    uVar14 = param_1[3] + iVar1 + (uint)CARRY4(param_1[2],uVar7);
    bVar15 = uVar14 <= uStack_294;
    if (uStack_294 == uVar14) {
      bVar15 = param_1[2] + uVar7 <= local_298;
    }
    if (!bVar15) {
      if (**(int **)(iVar10 + DAT_0001b204) << 0x17 < 0) {
        pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001b208);
        _Var3 = getpid();
        fprintf(pFVar9,(char *)(DAT_0001b230 + 0x1aeac),_Var3,DAT_0001b234 + 0x1aeae,
                DAT_0001b22c + 0x1aea6);
        FUN_00018b88(DAT_0001b238 + 0x1aeba);
      }
      goto LAB_0001ad70;
    }
    bVar15 = iVar1 == 0;
    if (iVar1 == 0) {
      bVar15 = uVar7 < 0x168001;
    }
    if (bVar15) {
      if ((sStack_290.st_mode & 0xf000) == 0x2000) goto LAB_0001af3a;
      param_1[0xc] = param_1[0xc] | 4;
    }
    if ((sStack_290.st_mode & 0xf000) != 0x6000) goto LAB_0001af3a;
    iVar1 = FUN_00033830((int)sStack_290.st_rdev,sStack_290.st_rdev._4_4_,&local_2a0);
    if (iVar1 != 0) {
      if (**(int **)(iVar10 + DAT_0001b204) << 0x17 < 0) {
        pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001b208);
        _Var3 = getpid();
        fprintf(pFVar9,(char *)(DAT_0001b240 + 0x1af22),_Var3,DAT_0001b244 + 0x1af24,
                DAT_0001b23c + 0x1af1c);
        FUN_00018b88(DAT_0001b248 + 0x1af30);
      }
      param_1[0xc] = param_1[0xc] | 0x10;
      goto LAB_0001af3a;
    }
    if (((((sStack_290.st_mode & 0xf000) != 0x6000) || (iVar1 = FUN_00019544(param_1), iVar1 != 0))
        || (local_2a0 != (void *)0x0)) || (iVar1 = blkid_probe_is_wholedisk(param_1), iVar1 == 0))
    goto LAB_0001af3a;
    iVar1 = ioctl(param_2,0x5331,0);
    if (iVar1 < 0) {
LAB_0001b03a:
      iVar1 = ioctl(param_2,0x5395,&local_29c);
      if (iVar1 == 0) {
        param_1[0xc] = param_1[0xc] | 8;
      }
      else if (-1 < param_1[0xc] << 0x1c) goto LAB_0001af3a;
      uVar7 = (uint)param_1[4] >> 9 | param_1[5] << 0x17;
      uVar14 = (uint)param_1[5] >> 9;
      if (local_29c != 0) {
        uVar8 = (((int)local_29c >> 0x1f) + (uint)(0xfffffffe < local_29c)) * 4 |
                local_29c + 1 >> 0x1e;
        uVar6 = (local_29c + 1) * 4;
        bVar15 = uVar14 <= uVar8;
        if (uVar8 == uVar14) {
          bVar15 = uVar7 <= uVar6;
        }
        if (!bVar15) {
          uVar7 = uVar6;
          uVar14 = uVar8;
        }
      }
      uVar6 = uVar7 - 0xc;
      uVar8 = (uVar14 - 1) + (uint)(0xb < uVar7);
      while( true ) {
        bVar15 = uVar14 <= uVar8;
        if (uVar8 == uVar14) {
          bVar15 = uVar7 <= uVar6;
        }
        if (bVar15) {
          if (**(int **)(iVar10 + DAT_0001b204) << 0x17 < 0) {
            pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001b208);
            _Var3 = getpid();
            fprintf(pFVar9,(char *)(DAT_0001b26c + 0x1b0bc),_Var3,DAT_0001b270 + 0x1b0be,
                    DAT_0001b268 + 0x1b0b6);
            FUN_00018b88(DAT_0001b274 + 0x1b0ca);
          }
          goto LAB_0001b0cc;
        }
        iVar1 = *param_1;
        _Var16 = lseek64(iVar1,CONCAT44(uVar8 << 9 | uVar6 >> 0x17,uVar6 << 9),0);
        if ((_Var16 == -1) || (sVar4 = read(iVar1,&local_228,0x200), sVar4 != 0x200)) break;
        bVar15 = 0xfffffffe < uVar6;
        uVar6 = uVar6 + 1;
        uVar8 = uVar8 + bVar15;
      }
      piVar2 = *(int **)(iVar10 + DAT_0001b204);
      if (*piVar2 << 0x17 < 0) {
        pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001b208);
        _Var3 = getpid();
        fprintf(pFVar9,(char *)(DAT_0001b280 + 0x1b190),_Var3,DAT_0001b284 + 0x1b192,
                DAT_0001b27c + 0x1b18a);
        FUN_00018b88(DAT_0001b288 + 0x1b1a2);
      }
      piVar5 = __errno_location();
      *piVar5 = 0;
      if (*piVar2 << 0x17 < 0) {
        pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001b208);
        _Var3 = getpid();
        fprintf(pFVar9,(char *)(DAT_0001b290 + 0x1b1d6),_Var3,DAT_0001b294 + 0x1b1d8,
                DAT_0001b28c + 0x1b1d0);
        FUN_00018b88(DAT_0001b298 + 0x1b1e8);
      }
      param_1[4] = uVar6 << 9;
      param_1[5] = uVar8 << 9 | uVar6 >> 0x17;
LAB_0001b0cc:
      if (param_1[3] == 0 && param_1[2] == 0) {
        iVar11 = DAT_0001b278 + 0x1b0e2;
        iVar1 = FUN_0001a9c4(param_1,iVar11,0);
        if (iVar1 < 0) {
          local_228 = 0x10000000000;
          iVar1 = ioctl(param_2,0x5310,&local_228);
          if ((iVar1 == 0) && (local_228._4_1_ != '\0')) {
            blkid_probe_set_hint
                      (param_1,iVar11,(int)local_228 << 0xb,((int)local_228 << 0xb) >> 0x1f);
          }
        }
      }
LAB_0001af3a:
      free(local_2a0);
      iVar1 = DAT_0001b254;
      piVar2 = *(int **)(iVar10 + DAT_0001b204);
      if (-1 < *piVar2 << 0x17) {
        return 0;
      }
      puVar13 = *(undefined4 **)(iVar10 + DAT_0001b208);
      iVar11 = DAT_0001b24c + 0x1af5e;
      iVar12 = DAT_0001b250 + 0x1af62;
      pFVar9 = (FILE *)*puVar13;
      _Var3 = getpid();
      fprintf(pFVar9,(char *)(iVar1 + 0x1af6c),_Var3,iVar11,iVar12);
      iVar10 = param_1[5];
      FUN_00018b88(DAT_0001b258 + 0x1af86);
      if (-1 < *piVar2 << 0x17) {
        return 0;
      }
      pFVar9 = (FILE *)*puVar13;
      _Var3 = getpid();
      fprintf(pFVar9,(char *)(iVar1 + 0x1af6c),_Var3,iVar11,iVar12,iVar10);
      iVar10 = blkid_probe_is_wholedisk(param_1);
      if (iVar10 == 0) {
        iVar10 = DAT_0001b25c + 0x1afbc;
      }
      else {
        iVar10 = DAT_0001b29c + 0x1b1fa;
      }
      if ((param_1[0xb] & 0xf000U) == 0x8000) {
        iVar1 = (int)&DAT_0001b200 + DAT_0001b2a0;
      }
      else {
        iVar1 = DAT_0001b260 + 0x1afce;
      }
      FUN_00018b88(DAT_0001b264 + 0x1afd2,iVar10,iVar1);
      return 0;
    }
    iVar1 = ioctl(param_2,0x5326,0x7fffffff);
    if (1 < iVar1 - 1U) {
      param_1[0xc] = param_1[0xc] | 8;
      goto LAB_0001b03a;
    }
    piVar2 = __errno_location();
    iVar1 = 0x7b;
  }
  else {
LAB_0001ad70:
    piVar2 = __errno_location();
    iVar1 = 0x16;
  }
  *piVar2 = iVar1;
LAB_0001addc:
  if (**(int **)(iVar10 + DAT_0001b204) << 0x17 < 0) {
    pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001b208);
    _Var3 = getpid();
    fprintf(pFVar9,(char *)(DAT_0001b220 + 0x1ae08),_Var3,DAT_0001b224 + 0x1ae0a,
            DAT_0001b21c + 0x1ae00);
    FUN_00018b88(DAT_0001b228 + 0x1ae18);
  }
  return 0xffffffff;
}



/* ===== blkid_new_probe_from_filename @ 0001b2a4 size=70 ===== */

int blkid_new_probe_from_filename
              (char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int __fd;
  int iVar1;
  int iVar2;
  
  __fd = open64(param_1,DAT_0001b2ec,param_3,param_4,param_1,param_2,param_3);
  if (-1 < __fd) {
    iVar1 = blkid_new_probe();
    if ((iVar1 != 0) && (iVar2 = blkid_probe_set_device(iVar1,__fd,0,0,0), iVar2 == 0)) {
      *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) | 2;
      return iVar1;
    }
    close(__fd);
    blkid_free_probe(iVar1);
  }
  return 0;
}



/* ===== FUN_0001b2f0 @ 0001b2f0 size=170 ===== */

undefined4 FUN_0001b2f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  __pid_t _Var3;
  int iVar4;
  int iVar5;
  FILE *__stream;
  longlong lVar6;
  
  iVar5 = DAT_0001b39c + 0x1b2fc;
  do {
    iVar4 = param_1;
    iVar1 = blkid_probe_is_wholedisk(iVar4);
    if (iVar1 != 0) goto LAB_0001b302;
    param_1 = *(int *)(iVar4 + 0xbc);
  } while (*(int *)(iVar4 + 0xbc) != 0);
  lVar6 = blkid_probe_get_wholedisk_devno(iVar4);
  if (*(int *)(iVar4 + 0xc0) == 0) {
LAB_0001b340:
    __ptr = (void *)blkid_devno_to_devname((int)lVar6,(int)((ulonglong)lVar6 >> 0x20));
    if (__ptr != (void *)0x0) {
      if (**(int **)(iVar5 + DAT_0001b3a0) << 0x17 < 0) {
        __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_0001b3a4);
        _Var3 = getpid();
        fprintf(__stream,(char *)(DAT_0001b3ac + 0x1b370),_Var3,DAT_0001b3b0 + 0x1b372,
                DAT_0001b3a8 + 0x1b36a);
        FUN_00018b88(DAT_0001b3b4 + 0x1b37e);
      }
      uVar2 = blkid_new_probe_from_filename(__ptr);
      *(undefined4 *)(iVar4 + 0xc0) = uVar2;
      free(__ptr);
      if (*(int *)(iVar4 + 0xc0) != 0) goto LAB_0001b332;
    }
LAB_0001b302:
    uVar2 = 0;
  }
  else {
    if (lVar6 != *(longlong *)(*(int *)(iVar4 + 0xc0) + 0x18)) {
      blkid_free_probe();
      *(undefined4 *)(iVar4 + 0xc0) = 0;
      goto LAB_0001b340;
    }
LAB_0001b332:
    uVar2 = *(undefined4 *)(iVar4 + 0xc0);
  }
  return uVar2;
}



/* ===== FUN_0001b3b8 @ 0001b3b8 size=30 ===== */

char * FUN_0001b3b8(char *param_1)

{
  char *pcVar1;
  
  do {
    pcVar1 = param_1;
    if (*pcVar1 == 0) {
      return pcVar1;
    }
    param_1 = pcVar1 + 1;
  } while ((int)((uint)*(ushort *)(**(int **)(DAT_0001b3d8 + 0x1b3c0 + DAT_0001b3dc) + *pcVar1 * 2)
                << 0x1a) < 0);
  return pcVar1;
}



/* ===== FUN_0001b3e0 @ 0001b3e0 size=56 ===== */

char * FUN_0001b3e0(char *param_1)

{
  uint uVar1;
  
  while( true ) {
    while( true ) {
      uVar1 = (uint)*param_1;
      if (uVar1 == 0) {
        return param_1;
      }
      if (uVar1 != 0x5c) break;
      if (param_1[1] == '\0') {
        return param_1 + 1;
      }
      param_1 = param_1 + 2;
    }
    if ((int)((uint)*(ushort *)(**(int **)(DAT_0001b418 + 0x1b3e8 + DAT_0001b41c) + uVar1 * 2) <<
             0x1a) < 0) {
      return param_1;
    }
    if ((uVar1 & 0xfffffffd) == 0x3c) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}



/* ===== FUN_0001b420 @ 0001b420 size=56 ===== */

char * FUN_0001b420(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  
  __s = (char *)FUN_0001b3b8();
  iVar3 = DAT_0001b458 + 0x1b42c;
  sVar1 = strlen(__s);
  pcVar2 = __s + (sVar1 - 1);
  while ((*__s != '\0' &&
         ((int)((uint)*(ushort *)(**(int **)(iVar3 + DAT_0001b45c) + *pcVar2 * 2) << 0x1a) < 0))) {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + -1;
  }
  return __s;
}



/* ===== FUN_0001b460 @ 0001b460 size=74 ===== */

void FUN_0001b460(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_0001b4ac + 0x1b472 + DAT_0001b4b0);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_0001b4b4 @ 0001b4b4 size=1508 ===== */

void FUN_0001b4b4(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  __pid_t _Var5;
  char *pcVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int *piVar13;
  long lVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  FILE *pFVar18;
  uint *puVar19;
  FILE *pFVar20;
  char *pcVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  int local_10b4;
  char *local_1094;
  stat64 sStack_1090;
  char local_1028 [4100];
  
  iVar3 = open64(*(char **)(param_1 + 0x1c),0x80000);
  iVar17 = DAT_0001ba98 + 0x1b4d2;
  if (-1 < iVar3) {
    iVar4 = fstat64(iVar3,&sStack_1090);
    if (-1 < iVar4) {
      puVar19 = *(uint **)(iVar17 + DAT_0001ba9c);
      if ((sStack_1090.st_mtim.tv_sec == *(int *)(param_1 + 0x14)) ||
         (*(int *)(param_1 + 0x18) << 0x1d < 0)) {
        if ((*puVar19 & 4) != 0) {
          pFVar18 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
          _Var5 = getpid();
          fprintf(pFVar18,(char *)(DAT_0001baa8 + 0x1b524),_Var5,DAT_0001baac + 0x1b526,
                  DAT_0001baa4 + 0x1b51c);
          FUN_0001b460(DAT_0001bab0 + 0x1b538,*(undefined4 *)(param_1 + 0x1c));
        }
      }
      else {
        if ((*puVar19 & 4) != 0) {
          pFVar18 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
          _Var5 = getpid();
          fprintf(pFVar18,(char *)(DAT_0001bab8 + 0x1b564),_Var5,DAT_0001babc + 0x1b566,
                  DAT_0001bab4 + 0x1b55c);
          FUN_0001b460(DAT_0001bac0 + 0x1b578,*(undefined4 *)(param_1 + 0x1c));
        }
        pFVar18 = fdopen(iVar3,(char *)(DAT_0001bac4 + 0x1b584));
        if (pFVar18 != (FILE *)0x0) {
          local_10b4 = 0;
          iVar3 = DAT_0001bac8 + 0x1b598;
          iVar4 = DAT_0001bacc + 0x1b5a0;
LAB_0001b5a0:
          while( true ) {
            do {
              do {
                pcVar6 = fgets(local_1028,0x1000,pFVar18);
                if (pcVar6 == (char *)0x0) {
                  fclose(pFVar18);
                  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
                  *(__time_t *)(param_1 + 0x14) = sStack_1090.st_mtim.tv_sec;
                  return;
                }
                local_10b4 = local_10b4 + 1;
              } while (local_1028[0] == '\0');
              sVar7 = strlen(local_1028);
              while (((uVar8 = sVar7 - 1, uVar8 < 0xffe && (local_1028[uVar8] == '\\')) &&
                     (pcVar6 = fgets(local_1028 + uVar8,0x1000 - uVar8,pFVar18),
                     pcVar6 != (char *)0x0))) {
                sVar7 = strlen(local_1028);
                local_10b4 = local_10b4 + 1;
              }
              if ((int)(*puVar19 << 0x15) < 0) {
                pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
                _Var5 = getpid();
                fprintf(pFVar20,(char *)(DAT_0001bad4 + 0x1b62a),_Var5,iVar3,DAT_0001bad0 + 0x1b626)
                ;
                FUN_0001b460(DAT_0001bad8 + 0x1b63c,local_1028);
              }
              pcVar6 = (char *)FUN_0001b420(local_1028);
              cVar2 = *pcVar6;
            } while ((cVar2 == '\0') || (cVar2 == '#'));
            iVar9 = strncmp(pcVar6,(char *)(DAT_0001badc + 0x1b65c),7);
            if (iVar9 != 0) goto LAB_0001b6fe;
            if ((int)(*puVar19 << 0x15) < 0) {
              pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
              _Var5 = getpid();
              fprintf(pFVar20,(char *)(DAT_0001bae4 + 0x1b688),_Var5,DAT_0001bae8 + 0x1b68a,
                      DAT_0001bae0 + 0x1b680);
              FUN_0001b460(DAT_0001baec + 0x1b69a,pcVar6);
            }
            pcVar21 = pcVar6 + 7;
            pcVar10 = strchr(pcVar21,0x3e);
            uVar8 = *puVar19;
            if (pcVar10 != (char *)0x0) break;
            if ((uVar8 & 0x400) != 0) {
              pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
              _Var5 = getpid();
              fprintf(pFVar20,(char *)(DAT_0001baf4 + 0x1b6d8),_Var5,DAT_0001baf8 + 0x1b6da,
                      DAT_0001baf0 + 0x1b6d0);
              iVar9 = DAT_0001bafc + 0x1b6ea;
LAB_0001b6e8:
              FUN_0001b460(iVar9,pcVar21);
              goto LAB_0001b704;
            }
          }
          pcVar11 = (char *)FUN_0001b3b8(pcVar10 + 1);
          pcVar12 = (char *)FUN_0001b3e0();
          if ((uVar8 & 0x400) != 0) {
            pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
            _Var5 = getpid();
            fprintf(pFVar20,(char *)(DAT_0001bb14 + 0x1b766),_Var5,DAT_0001bb18 + 0x1b768,
                    DAT_0001bb10 + 0x1b760);
            FUN_0001b460(DAT_0001bb1c + 0x1b77a,(int)pcVar12 - (int)pcVar11,pcVar11);
          }
          cVar2 = pcVar6[7];
          *pcVar10 = '\0';
          pcVar21 = pcVar12;
          if (cVar2 != '>') {
            pcVar21 = pcVar6 + 8;
          }
          pcVar6 = strrchr(pcVar12,0x3c);
          if (pcVar6 == (char *)0x0) {
LAB_0001b822:
            if ((int)(*puVar19 << 0x15) < 0) {
              pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
              _Var5 = getpid();
              fprintf(pFVar20,(char *)(DAT_0001bb48 + 0x1b842),_Var5,DAT_0001bb4c + 0x1b844,
                      DAT_0001bb44 + 0x1b83c);
              FUN_0001b460(DAT_0001bb50 + 0x1b852,pcVar12);
            }
          }
          else {
            pcVar6 = (char *)FUN_0001b3b8();
            iVar9 = strncmp(pcVar6,(char *)(DAT_0001bb20 + 0x1b7a8),9);
            if (iVar9 != 0) goto LAB_0001b822;
            if ((*puVar19 & 0x400) != 0) {
              pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
              _Var5 = getpid();
              fprintf(pFVar20,(char *)(DAT_0001bb28 + 0x1b7d2),_Var5,DAT_0001bb2c + 0x1b7d4,
                      DAT_0001bb24 + 0x1b7cc);
              FUN_0001b460(DAT_0001bb30 + 0x1b7e2,pcVar6);
            }
            if (pcVar6 != (char *)0xfffffff7) {
              pcVar6[9] = '\0';
            }
          }
          if ((int)pcVar12 - (int)pcVar11 < 2) {
            if ((int)(*puVar19 << 0x15) < 0) {
              pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
              _Var5 = getpid();
              fprintf(pFVar20,(char *)(DAT_0001bb38 + 0x1b812),_Var5,DAT_0001bb3c + 0x1b814,
                      DAT_0001bb34 + 0x1b80c);
              iVar9 = DAT_0001bb40 + 0x1b822;
              goto LAB_0001b6e8;
            }
            goto LAB_0001b5a0;
          }
          pcVar6 = strndup(pcVar11,(int)pcVar12 - (int)pcVar11);
          if (pcVar6 != (char *)0x0) {
            if ((int)(*puVar19 << 0x15) < 0) {
              pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
              _Var5 = getpid();
              fprintf(pFVar20,(char *)(DAT_0001bb58 + 0x1b88c),_Var5,DAT_0001bb5c + 0x1b88e,
                      DAT_0001bb54 + 0x1b886);
              FUN_0001b460(DAT_0001bb60 + 0x1b89c,pcVar6);
            }
            iVar9 = blkid_get_dev(param_1,pcVar6,1);
            if (iVar9 == 0) {
              free(pcVar6);
            }
            else {
              free(pcVar6);
              pcVar6 = (char *)(DAT_0001bb64 + 0x1b8c2);
              iVar16 = DAT_0001bb68 + 0x1b8c8;
LAB_0001b8c8:
              do {
                pcVar10 = strchr(pcVar21,0x3d);
                iVar22 = 0;
                if (pcVar10 == (char *)0x0) break;
                *pcVar10 = '\0';
                pcVar11 = (char *)FUN_0001b420(pcVar21);
                pcVar10 = (char *)FUN_0001b3b8(pcVar10 + 1);
                if (*pcVar10 == '\"') {
                  pcVar15 = pcVar10 + 1;
                  pcVar21 = pcVar15;
                  for (pcVar12 = pcVar15; cVar2 = *pcVar12, cVar2 != '\0'; pcVar12 = pcVar12 + 1) {
                    if (cVar2 == '\\') {
                      pcVar1 = pcVar12 + 1;
                      pcVar12 = pcVar12 + 1;
                      *pcVar21 = *pcVar1;
                    }
                    else {
                      *pcVar21 = cVar2;
                      if (cVar2 == '\"') goto LAB_0001b95a;
                    }
                    pcVar21 = pcVar21 + 1;
                  }
                  if (*pcVar21 != '\"') {
                    if ((int)(*puVar19 << 0x15) < 0) {
                      pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
                      _Var5 = getpid();
                      fprintf(pFVar20,(char *)(DAT_0001bb70 + 0x1b92a),_Var5,DAT_0001bb74 + 0x1b92c,
                              DAT_0001bb6c + 0x1b924);
                      FUN_0001b460(DAT_0001bb78 + 0x1b93a,pcVar10);
                    }
                    iVar22 = -0xe;
                    break;
                  }
LAB_0001b95a:
                  *pcVar21 = '\0';
                  pcVar21 = pcVar12 + 1;
                  pcVar10 = pcVar15;
                }
                else {
                  pcVar12 = (char *)FUN_0001b3e0();
                  pcVar21 = pcVar12;
                  if (*pcVar12 != '\0') {
                    pcVar21 = pcVar12 + 1;
                    *pcVar12 = '\0';
                  }
                }
                if ((int)(*puVar19 << 0x15) < 0) {
                  pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
                  _Var5 = getpid();
                  fprintf(pFVar20,pcVar6,_Var5,iVar4,iVar16);
                  FUN_0001b460(DAT_0001bb7c + 0x1b98e,pcVar11,pcVar10);
                }
                piVar13 = __errno_location();
                pcVar12 = (char *)(DAT_0001bb80 + 0x1b99c);
                *piVar13 = 0;
                iVar22 = strcmp(pcVar11,pcVar12);
                if (iVar22 == 0) {
                  uVar24 = strtoull(pcVar10,(char **)0x0,0);
                  *(ulonglong *)(iVar9 + 0x28) = uVar24;
                }
                else {
                  iVar22 = strcmp(pcVar11,(char *)(DAT_0001bb94 + 0x1ba26));
                  if (iVar22 == 0) {
                    lVar14 = strtol(pcVar10,(char **)0x0,0);
                    *(long *)(iVar9 + 0x20) = lVar14;
                  }
                  else {
                    pcVar12 = (char *)strcmp(pcVar11,(char *)(DAT_0001bb98 + 0x1ba42));
                    if (pcVar12 != (char *)0x0) {
                      sVar7 = strlen(pcVar10);
                      iVar22 = FUN_0001c7a2(iVar9,pcVar11,pcVar10,sVar7);
                      if (iVar22 < 0) break;
                      goto LAB_0001b8c8;
                    }
                    local_1094 = pcVar12;
                    uVar24 = strtoull(pcVar10,&local_1094,0);
                    iVar22 = *piVar13;
                    *(int *)(iVar9 + 0x30) = (int)uVar24;
                    if (((iVar22 == 0) && (local_1094 != (char *)0x0)) && (*local_1094 == '.')) {
                      uVar24 = strtoull(local_1094 + 1,(char **)0x0,0);
                      *(int *)(iVar9 + 0x34) = (int)uVar24;
                    }
                  }
                }
                iVar23 = *piVar13;
              } while ((iVar23 == 0) || (iVar22 = -iVar23, iVar23 != 0 && -1 < iVar22));
              if (*(int *)(iVar9 + 0x1c) == 0) {
                if ((int)(*puVar19 << 0x15) < 0) {
                  pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
                  _Var5 = getpid();
                  fprintf(pFVar20,(char *)(DAT_0001bb88 + 0x1b9e8),_Var5,DAT_0001bb8c + 0x1b9ea,
                          DAT_0001bb84 + 0x1b9e2);
                  FUN_0001b460(DAT_0001bb90 + 0x1b9fa,*(undefined4 *)(iVar9 + 0x14));
                }
                FUN_00016a34(iVar9);
              }
              if (iVar22 == 0) goto LAB_0001b5a0;
            }
          }
          goto LAB_0001b704;
        }
      }
    }
    close(iVar3);
  }
  return;
LAB_0001b6fe:
  if (cVar2 == '<') goto LAB_0001b5a0;
LAB_0001b704:
  if ((int)(*puVar19 << 0x15) < 0) {
    pFVar20 = (FILE *)**(undefined4 **)(iVar17 + DAT_0001baa0);
    _Var5 = getpid();
    fprintf(pFVar20,(char *)(DAT_0001bb04 + 0x1b724),_Var5,DAT_0001bb08 + 0x1b726,
            DAT_0001bb00 + 0x1b71e);
    FUN_0001b460(DAT_0001bb0c + 0x1b734,local_10b4);
  }
  goto LAB_0001b5a0;
}



/* ===== FUN_0001bb9c @ 0001bb9c size=74 ===== */

void FUN_0001bb9c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_0001bbe8 + 0x1bbae + DAT_0001bbec);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== blkid_get_tag_value @ 0001bbf0 size=146 ===== */

char * blkid_get_tag_value(int param_1,undefined4 param_2,int param_3)

{
  __pid_t _Var1;
  int iVar2;
  char *pcVar3;
  FILE *__stream;
  int local_1c [2];
  
  local_1c[0] = param_1;
  if (**(int **)(DAT_0001bc84 + 0x1bbfc + DAT_0001bc88) << 0x13 < 0) {
    __stream = (FILE *)**(undefined4 **)(DAT_0001bc84 + 0x1bbfc + DAT_0001bc8c);
    _Var1 = getpid();
    fprintf(__stream,(char *)(DAT_0001bc94 + 0x1bc22),_Var1,DAT_0001bc98 + 0x1bc24,
            DAT_0001bc90 + 0x1bc1c);
    FUN_0001bb9c(DAT_0001bc9c + 0x1bc34,param_2,param_3);
  }
  if ((param_3 == 0) || ((param_1 == 0 && (iVar2 = blkid_get_cache(local_1c,0), iVar2 < 0)))) {
    pcVar3 = (char *)0x0;
  }
  else {
    iVar2 = blkid_get_dev(local_1c[0],param_3,3);
    if ((iVar2 == 0) ||
       ((iVar2 = FUN_0001c758(iVar2,param_2), iVar2 == 0 ||
        (*(char **)(iVar2 + 0x14) == (char *)0x0)))) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = strdup(*(char **)(iVar2 + 0x14));
    }
    if (param_1 == 0) {
      blkid_put_cache(local_1c[0]);
    }
  }
  return pcVar3;
}



/* ===== blkid_get_devname @ 0001bca0 size=226 ===== */

char * blkid_get_devname(int param_1,char *param_2,void *param_3)

{
  __pid_t _Var1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  FILE *__stream;
  int local_24;
  char *local_20;
  void *local_1c [2];
  
  iVar6 = DAT_0001bd84 + 0x1bcb0;
  local_20 = (char *)0x0;
  local_1c[0] = (void *)0x0;
  if ((param_2 == (char *)0x0) ||
     ((local_24 = param_1, param_1 == 0 && (iVar3 = blkid_get_cache(&local_24,0), iVar3 < 0)))) {
    return (char *)0x0;
  }
  if (**(int **)(iVar6 + DAT_0001bd88) << 0x13 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_0001bd8c);
    _Var1 = getpid();
    fprintf(__stream,(char *)(DAT_0001bd94 + 0x1bce4),_Var1,DAT_0001bd98 + 0x1bce6,
            DAT_0001bd90 + 0x1bcde);
    if (param_3 == (void *)0x0) {
      pvVar4 = (void *)(DAT_0001bd9c + 0x1bcf4);
      pvVar5 = pvVar4;
    }
    else {
      pvVar4 = (void *)(DAT_0001bda8 + 0x1bd34);
      pvVar5 = param_3;
    }
    if (param_1 == 0) {
      iVar6 = DAT_0001bda0 + 0x1bcfc;
    }
    else {
      iVar6 = DAT_0001bdac + 0x1bd3a;
    }
    FUN_0001bb9c(DAT_0001bda4 + 0x1bd04,param_2,pvVar4,pvVar5,iVar6);
  }
  if (param_3 == (void *)0x0) {
    pcVar2 = strchr(param_2,0x3d);
    if (pcVar2 != (char *)0x0) {
      iVar6 = blkid_parse_tag_string(param_2,&local_20,local_1c);
      if (((iVar6 == 0) && (local_20 != (char *)0x0)) &&
         (param_2 = local_20, param_3 = local_1c[0], local_1c[0] != (void *)0x0)) goto LAB_0001bd6c;
      goto LAB_0001bd46;
    }
  }
  else {
LAB_0001bd6c:
    iVar6 = blkid_find_dev_with_tag(local_24,param_2,param_3);
    if ((iVar6 == 0) || (param_2 = *(char **)(iVar6 + 0x14), param_2 == (char *)0x0)) {
LAB_0001bd46:
      pcVar2 = (char *)0x0;
      goto LAB_0001bd48;
    }
  }
  pcVar2 = strdup(param_2);
LAB_0001bd48:
  free(local_20);
  free(local_1c[0]);
  if (param_1 == 0) {
    blkid_put_cache(local_24);
  }
  return pcVar2;
}



/* ===== FUN_0001bdb0 @ 0001bdb0 size=74 ===== */

void FUN_0001bdb0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_0001bdfc + 0x1bdc2 + DAT_0001be00);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_0001be04 @ 0001be04 size=1574 ===== */

int FUN_0001be04(int *param_1)

{
  char cVar1;
  __pid_t _Var2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  char *__format;
  char *__format_00;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  FILE *pFVar13;
  char *pcVar14;
  char *__s1;
  int iVar15;
  FILE *pFVar16;
  int *piVar17;
  int *local_a8;
  char *local_a4;
  stat64 sStack_90;
  
  iVar15 = DAT_0001c42c + 0x1be18;
  if ((param_1 == (int *)*param_1) || (-1 < param_1[6] << 0x1d)) {
    if (-1 < **(int **)(iVar15 + DAT_0001c430) << 0x14) {
      return 0;
    }
    pFVar13 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
    _Var2 = getpid();
    fprintf(pFVar13,(char *)(DAT_0001c43c + 0x1be50),_Var2,DAT_0001c440 + 0x1be52,
            DAT_0001c438 + 0x1be48);
    FUN_0001bdb0(DAT_0001c444 + 0x1be60);
    return 0;
  }
  __s1 = (char *)param_1[7];
  if ((__s1 == (char *)0x0) && (__s1 = (char *)FUN_00016198(0), __s1 == (char *)0x0)) {
    return -0x16;
  }
  iVar3 = strncmp(__s1,(char *)(DAT_0001c448 + 0x1be84),0xb);
  piVar17 = *(int **)(iVar15 + DAT_0001c430);
  if (iVar3 == 0) {
    pcVar14 = (char *)(DAT_0001c44c + 0x1be9c);
    iVar3 = stat64(pcVar14,&sStack_90);
    if ((((iVar3 != 0) && (piVar4 = __errno_location(), *piVar4 == 2)) &&
        (iVar3 = mkdir(pcVar14,0x1ed), iVar3 != 0)) && (*piVar4 != 0x11)) {
      if (-1 < *piVar17 << 0x14) {
        return 0;
      }
      pFVar13 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
      _Var2 = getpid();
      fprintf(pFVar13,(char *)(DAT_0001c454 + 0x1beea),_Var2,DAT_0001c458 + 0x1beec,
              DAT_0001c450 + 0x1bee2);
      FUN_0001bdb0(DAT_0001c45c + 0x1befc,pcVar14);
      return 0;
    }
  }
  iVar3 = stat64(__s1,&sStack_90);
  if (iVar3 < 0) {
    piVar4 = __errno_location();
    if (*piVar4 != 2) {
LAB_0001bf20:
      if (*piVar17 << 0x14 < 0) {
        pFVar13 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
        _Var2 = getpid();
        fprintf(pFVar13,(char *)(DAT_0001c464 + 0x1bf48),_Var2,DAT_0001c468 + 0x1bf4a,
                DAT_0001c460 + 0x1bf40);
        FUN_0001bdb0(DAT_0001c46c + 0x1bf5a,__s1);
      }
      return 0;
    }
LAB_0001c424:
    local_a4 = (char *)0x0;
LAB_0001bff2:
    pFVar13 = fopen64(__s1,(char *)(DAT_0001c484 + 0x1bffc));
    pcVar14 = __s1;
  }
  else {
    if (iVar3 != 0) goto LAB_0001c424;
    iVar5 = access(__s1,2);
    if (iVar5 < 0) goto LAB_0001bf20;
    if ((sStack_90.st_mode & 0xf000) != 0x8000) goto LAB_0001c424;
    sVar8 = strlen(__s1);
    local_a4 = malloc(sVar8 + 8);
    if (local_a4 == (char *)0x0) goto LAB_0001c424;
    sprintf(local_a4,(char *)(DAT_0001c470 + 0x1bf9a),__s1);
    iVar5 = FUN_00028c6e(local_a4);
    if (iVar5 < 0) goto LAB_0001bff2;
    iVar6 = fchmod(iVar5,0x1a4);
    if (iVar6 != 0) {
      if (*piVar17 << 0x14 < 0) {
        pFVar13 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
        _Var2 = getpid();
        fprintf(pFVar13,(char *)(DAT_0001c478 + 0x1bfd8),_Var2,DAT_0001c47c + 0x1bfda,
                DAT_0001c474 + 0x1bfd0);
        FUN_0001bdb0(DAT_0001c480 + 0x1bfea,__s1);
      }
LAB_0001bfec:
      close(iVar5);
      goto LAB_0001bff2;
    }
    pFVar13 = fdopen(iVar5,(char *)(DAT_0001c488 + 0x1c012));
    pcVar14 = local_a4;
    if (pFVar13 == (FILE *)0x0) goto LAB_0001bfec;
  }
  if (*piVar17 << 0x14 < 0) {
    pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
    _Var2 = getpid();
    fprintf(pFVar16,(char *)(DAT_0001c490 + 0x1c046),_Var2,DAT_0001c494 + 0x1c048,
            DAT_0001c48c + 0x1c03e);
    FUN_0001bdb0(DAT_0001c498 + 0x1c05a,__s1,pcVar14);
  }
  if (pFVar13 == (FILE *)0x0) {
    piVar17 = __errno_location();
    iVar3 = *piVar17;
    goto LAB_0001c066;
  }
  pcVar9 = (char *)(DAT_0001c49c + 0x1c08a);
  __format = (char *)(DAT_0001c4a0 + 0x1c092);
  __format_00 = (char *)(DAT_0001c4a4 + 0x1c09a);
  for (piVar4 = (int *)*param_1; param_1 != piVar4; piVar4 = (int *)*piVar4) {
    if ((piVar4[7] != 0) && ((piVar4[0xe] & 8U) == 0)) {
      if (*(char *)piVar4[5] == '/') {
        if (*piVar17 << 0x14 < 0) {
          pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
          _Var2 = getpid();
          fprintf(pFVar16,(char *)(DAT_0001c4cc + 0x1c196),_Var2,DAT_0001c4d0 + 0x1c198,
                  DAT_0001c4c8 + 0x1c190);
          iVar3 = piVar4[7];
          if (iVar3 == 0) {
            iVar3 = DAT_0001c4d4 + 0x1c1aa;
          }
          FUN_0001bdb0(DAT_0001c4d8 + 0x1c1ae,piVar4[5],iVar3);
        }
        iVar5 = piVar4[0xd];
        iVar7 = iVar5 >> 0x1f;
        iVar6 = piVar4[0xc];
        iVar10 = iVar6 >> 0x1f;
        fprintf(pFVar13,pcVar9,piVar4[10],iVar10,iVar6,iVar10,iVar5,iVar7);
        if (piVar4[8] != 0) {
          fprintf(pFVar13,__format_00);
        }
        for (local_a8 = (int *)piVar4[2]; local_a8 != piVar4 + 2; local_a8 = (int *)*local_a8) {
          if (pFVar13->_chain == (_IO_FILE *)0x0) {
            fputc(0x20,pFVar13);
          }
          else {
            pcVar11 = pFVar13->_IO_write_base;
            if (pcVar11 < pFVar13->_IO_buf_base) {
              pFVar13->_IO_write_base = pcVar11 + 1;
              *pcVar11 = ' ';
            }
            else {
              __fputc_unlocked(0x20,pFVar13);
            }
          }
          fputs((char *)local_a8[4],pFVar13);
          if (pFVar13->_chain == (_IO_FILE *)0x0) {
            fputc(0x3d,pFVar13);
          }
          else {
            pcVar11 = pFVar13->_IO_write_base;
            if (pcVar11 < pFVar13->_IO_buf_base) {
              pFVar13->_IO_write_base = pcVar11 + 1;
              *pcVar11 = '=';
            }
            else {
              __fputc_unlocked(0x3d,pFVar13);
            }
          }
          iVar3 = local_a8[5];
          if (pFVar13->_chain == (_IO_FILE *)0x0) {
            fputc(0x22,pFVar13);
          }
          else {
            pcVar11 = pFVar13->_IO_write_base;
            if (pcVar11 < pFVar13->_IO_buf_base) {
              pFVar13->_IO_write_base = pcVar11 + 1;
              *pcVar11 = '\"';
            }
            else {
              __fputc_unlocked(0x22,pFVar13);
            }
          }
          pcVar11 = (char *)(iVar3 + -1);
          while ((pcVar11 != (char *)0xffffffff && (cVar1 = pcVar11[1], cVar1 != '\0'))) {
            if ((cVar1 == '\"') || (cVar1 == '\\')) {
              if (pFVar13->_chain == (_IO_FILE *)0x0) {
                fputc(0x5c,pFVar13);
              }
              else {
                pcVar12 = pFVar13->_IO_write_base;
                if (pcVar12 < pFVar13->_IO_buf_base) {
                  pFVar13->_IO_write_base = pcVar12 + 1;
                  *pcVar12 = '\\';
                }
                else {
                  __fputc_unlocked(0x5c,pFVar13);
                }
              }
            }
            pcVar11 = pcVar11 + 1;
            cVar1 = *pcVar11;
            if (pFVar13->_chain == (_IO_FILE *)0x0) {
              fputc((int)cVar1,pFVar13);
            }
            else {
              pcVar12 = pFVar13->_IO_write_base;
              if (pcVar12 < pFVar13->_IO_buf_base) {
                pFVar13->_IO_write_base = pcVar12 + 1;
                *pcVar12 = cVar1;
              }
              else {
                __fputc_unlocked((int)cVar1,pFVar13);
              }
            }
          }
          if (pFVar13->_chain == (_IO_FILE *)0x0) {
            fputc(0x22,pFVar13);
          }
          else {
            pcVar11 = pFVar13->_IO_write_base;
            if (pcVar11 < pFVar13->_IO_buf_base) {
              pFVar13->_IO_write_base = pcVar11 + 1;
              *pcVar11 = '\"';
            }
            else {
              __fputc_unlocked(0x22,pFVar13);
            }
          }
        }
        iVar3 = 0;
        fprintf(pFVar13,__format,piVar4[5],local_a8,iVar6,iVar10,iVar5,iVar7);
      }
      else {
        iVar3 = 0;
      }
    }
  }
  if (-1 < iVar3) {
    iVar3 = 1;
    param_1[6] = param_1[6] & 0xfffffffb;
  }
  iVar5 = __fpending(pFVar13);
  iVar6 = ferror(pFVar13);
  iVar7 = fclose(pFVar13);
  if (iVar6 == 0) {
    if ((iVar7 != 0) && ((iVar5 != 0 || (piVar4 = __errno_location(), *piVar4 != 9))))
    goto LAB_0001c0e2;
  }
  else {
    if ((iVar7 == 0) && (piVar4 = __errno_location(), *piVar4 != 0x20)) {
      *piVar4 = 0;
    }
LAB_0001c0e2:
    if (*piVar17 << 0x14 < 0) {
      pFVar13 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
      _Var2 = getpid();
      fprintf(pFVar13,(char *)(DAT_0001c4ac + 0x1c102),_Var2,DAT_0001c4b0 + 0x1c104,
              DAT_0001c4a8 + 0x1c0fc);
      FUN_0001bdb0(DAT_0001c4b4 + 0x1c112,__s1);
    }
  }
  if (pcVar14 == __s1) goto LAB_0001c066;
  if (iVar3 < 0) {
    unlink(pcVar14);
    if (-1 < *piVar17 << 0x14) goto LAB_0001c066;
    pFVar13 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
    _Var2 = getpid();
    fprintf(pFVar13,(char *)(DAT_0001c4bc + 0x1c146),_Var2,DAT_0001c4c0 + 0x1c148,
            DAT_0001c4b8 + 0x1c140);
    iVar15 = DAT_0001c4c4 + 0x1c156;
  }
  else {
    sVar8 = strlen(__s1);
    pcVar9 = malloc(sVar8 + 5);
    if (pcVar9 != (char *)0x0) {
      sprintf(pcVar9,(char *)(DAT_0001c4dc + 0x1c356),__s1);
      unlink(pcVar9);
      iVar5 = link(__s1,pcVar9);
      if ((iVar5 != 0) && (*piVar17 << 0x14 < 0)) {
        pFVar13 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
        _Var2 = getpid();
        fprintf(pFVar13,(char *)(DAT_0001c4e4 + 0x1c388),_Var2,DAT_0001c4e8 + 0x1c38a,
                DAT_0001c4e0 + 0x1c382);
        FUN_0001bdb0(DAT_0001c4ec + 0x1c39a,__s1,pcVar9);
      }
      free(pcVar9);
    }
    iVar5 = rename(pcVar14,__s1);
    if (iVar5 != 0) {
      piVar4 = __errno_location();
      iVar3 = *piVar4;
      if (*piVar17 << 0x14 < 0) {
        pFVar13 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
        _Var2 = getpid();
        fprintf(pFVar13,(char *)(DAT_0001c4f4 + 0x1c3d6),_Var2,DAT_0001c4f8 + 0x1c3d8,
                DAT_0001c4f0 + 0x1c3d0);
        FUN_0001bdb0(DAT_0001c4fc + 0x1c3e8,pcVar14,__s1);
      }
      goto LAB_0001c066;
    }
    if (-1 < *piVar17 << 0x14) goto LAB_0001c066;
    pFVar13 = (FILE *)**(undefined4 **)(iVar15 + DAT_0001c434);
    _Var2 = getpid();
    fprintf(pFVar13,(char *)(DAT_0001c504 + 0x1c40e),_Var2,DAT_0001c508 + 0x1c410,
            DAT_0001c500 + 0x1c408);
    iVar15 = DAT_0001c50c + 0x1c41e;
  }
  FUN_0001bdb0(iVar15,pcVar14);
LAB_0001c066:
  free(local_a4);
  if ((char *)param_1[7] != __s1) {
    free(__s1);
  }
  return iVar3;
}



/* ===== FUN_0001c510 @ 0001c510 size=96 ===== */

void FUN_0001c510(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar3 = *(undefined4 **)(DAT_0001c570 + 0x1c51a + DAT_0001c574);
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((param_1 != 0) && (iVar1 = **(int **)(DAT_0001c570 + 0x1c51a + DAT_0001c578) << 7, -1 < iVar1)
     ) {
    fprintf((FILE *)*puVar3,(char *)(DAT_0001c57c + 0x1c532),param_1,iVar1,param_1,param_2,param_3);
  }
  vfprintf((FILE *)*puVar3,param_2,&uStack_8);
  __stream = (FILE *)*puVar3;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar2 = __stream->_IO_write_base;
    if (pcVar2 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar2 + 1;
      *pcVar2 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_0001c580 @ 0001c580 size=74 ===== */

void FUN_0001c580(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_0001c5cc + 0x1c592 + DAT_0001c5d0);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_0001c5d4 @ 0001c5d4 size=102 ===== */

undefined4 * FUN_0001c5d4(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 *puVar3;
  FILE *__stream;
  int iVar4;
  char *pcVar5;
  
  iVar4 = DAT_0001c63c + 0x1c5de;
  if (param_1 != 0) {
    if (param_2 == (char *)0x0) {
      return (undefined4 *)0x0;
    }
    pcVar5 = param_2;
    for (puVar3 = *(undefined4 **)(param_1 + 8); puVar3 != (undefined4 *)(param_1 + 8);
        puVar3 = (undefined4 *)*puVar3) {
      iVar1 = strcmp((char *)puVar3[4],param_2);
      if (iVar1 == 0) {
        if (-1 < **(int **)(iVar4 + DAT_0001c640) << 0x13) {
          return puVar3;
        }
        __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_0001c644);
        _Var2 = getpid();
        fprintf(__stream,(char *)(DAT_0001c64c + 0x1c61a),_Var2,DAT_0001c650 + 0x1c61c,
                DAT_0001c648 + 0x1c614,pcVar5,param_3);
        FUN_0001c580(DAT_0001c654 + 0x1c62a,param_2);
        return puVar3;
      }
    }
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0001c658 @ 0001c658 size=88 ===== */

void * FUN_0001c658(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  __pid_t _Var3;
  FILE *__stream;
  
  iVar1 = DAT_0001c6b0;
  pvVar2 = calloc(1,0x1c);
  if (pvVar2 != (void *)0x0) {
    if (**(int **)(iVar1 + 0x1c668 + DAT_0001c6b4) << 0x13 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar1 + 0x1c668 + DAT_0001c6b8);
      _Var3 = getpid();
      fprintf(__stream,(char *)(DAT_0001c6c0 + 0x1c68c),_Var3,DAT_0001c6c4 + 0x1c68e,
              DAT_0001c6bc + 0x1c686,param_2,param_3);
      FUN_0001c510(pvVar2,DAT_0001c6c8 + 0x1c69c);
    }
    *(void **)pvVar2 = pvVar2;
    *(void **)((int)pvVar2 + 4) = pvVar2;
    *(int *)((int)pvVar2 + 8) = (int)pvVar2 + 8;
    *(int *)((int)pvVar2 + 0xc) = (int)pvVar2 + 8;
  }
  return pvVar2;
}



/* ===== FUN_0001c6cc @ 0001c6cc size=112 ===== */

void FUN_0001c6cc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  __pid_t _Var1;
  void *__ptr;
  int iVar2;
  int *piVar3;
  FILE *__stream;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (**(int **)(DAT_0001c73c + 0x1c6d4 + DAT_0001c740) << 0x13 < 0) {
    __stream = (FILE *)**(undefined4 **)(DAT_0001c73c + 0x1c6d4 + DAT_0001c744);
    _Var1 = getpid();
    fprintf(__stream,(char *)(DAT_0001c74c + 0x1c6fa),_Var1,DAT_0001c750 + 0x1c6fc,
            DAT_0001c748 + 0x1c6f4,param_2,param_3);
    FUN_0001c510(param_1,DAT_0001c754 + 0x1c70e,param_1[4],param_1[5]);
  }
  iVar2 = *param_1;
  piVar3 = (int *)param_1[1];
  __ptr = (void *)param_1[4];
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  iVar2 = param_1[2];
  piVar3 = (int *)param_1[3];
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  free(__ptr);
  free((void *)param_1[5]);
  (*(code *)PTR_free_0004c384)(param_1);
  return;
}



/* ===== FUN_0001c758 @ 0001c758 size=36 ===== */

undefined4 * FUN_0001c758(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  while( true ) {
    if (puVar2 == (undefined4 *)(param_1 + 8)) {
      return (undefined4 *)0x0;
    }
    iVar1 = strcmp((char *)puVar2[4],param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2;
}



/* ===== blkid_dev_has_tag @ 0001c77c size=38 ===== */

uint blkid_dev_has_tag(undefined4 param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0001c758();
  if (param_3 == (char *)0x0) {
    if (uVar1 != 0) {
      uVar1 = 1;
    }
  }
  else if (uVar1 != 0) {
    iVar2 = strcmp(*(char **)(uVar1 + 0x14),param_3);
    uVar1 = (uint)(iVar2 == 0);
  }
  return uVar1;
}



/* ===== FUN_0001c7a2 @ 0001c7a2 size=490 ===== */

undefined4 FUN_0001c7a2(int param_1,char *param_2,char *param_3,size_t param_4)

{
  char *__s2;
  int iVar1;
  int iVar2;
  __pid_t _Var3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  FILE *pFVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  iVar10 = DAT_0001c98c + 0x1c7b4;
  if (param_3 == (char *)0x0) {
    __s2 = (char *)0x0;
LAB_0001c7c8:
    iVar1 = strcmp(param_2,(char *)(DAT_0001c990 + 0x1c7d0));
    if (iVar1 == 0) {
      puVar11 = (undefined4 *)(param_1 + 0x1c);
    }
    else {
      iVar1 = strcmp(param_2,(char *)(DAT_0001c994 + 0x1c80c));
      if (iVar1 == 0) {
        puVar11 = (undefined4 *)(param_1 + 0x3c);
      }
      else {
        iVar1 = strcmp(param_2,(char *)(DAT_0001c998 + 0x1c81e));
        if (iVar1 == 0) {
          puVar11 = (undefined4 *)(param_1 + 0x40);
        }
        else {
          puVar11 = (undefined4 *)0x0;
        }
      }
    }
    iVar1 = FUN_0001c758(param_1,param_2);
    if (param_3 == (char *)0x0) {
      if (iVar1 != 0) {
        FUN_0001c6cc();
      }
    }
    else if (iVar1 == 0) {
      piVar4 = (int *)FUN_0001c658();
      if (piVar4 == (int *)0x0) {
        free(__s2);
        goto LAB_0001c7c0;
      }
      pcVar5 = strdup(param_2);
      iVar1 = DAT_0001c99c;
      piVar4[6] = param_1;
      piVar4[4] = (int)pcVar5;
      piVar4[5] = (int)__s2;
      piVar12 = *(int **)(iVar10 + iVar1);
      if (*piVar12 << 0x13 < 0) {
        pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001c9a0);
        _Var3 = getpid();
        fprintf(pFVar9,(char *)(DAT_0001c9b8 + 0x1c8d0),_Var3,DAT_0001c9bc + 0x1c8d2,
                DAT_0001c9b4 + 0x1c8ca);
        FUN_0001c510(piVar4,DAT_0001c9c0 + 0x1c8e4,piVar4[4],piVar4[5]);
      }
      piVar6 = *(int **)(param_1 + 0xc);
      iVar1 = *(int *)(param_1 + 0x10);
      *(int **)(param_1 + 0xc) = piVar4;
      *piVar4 = param_1 + 8;
      piVar4[1] = (int)piVar6;
      *piVar6 = (int)piVar4;
      if (iVar1 != 0) {
        piVar6 = (int *)FUN_0001c5d4(iVar1,piVar4[4]);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)FUN_0001c658();
          if (piVar6 != (int *)0x0) {
            if (*piVar12 << 0x13 < 0) {
              pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001c9a0);
              _Var3 = getpid();
              fprintf(pFVar9,(char *)(DAT_0001c9c8 + 0x1c932),_Var3,DAT_0001c9cc + 0x1c934,
                      DAT_0001c9c4 + 0x1c92c);
              FUN_0001c510(piVar6,DAT_0001c9d0 + 0x1c944,param_2);
            }
            pcVar5 = strdup(param_2);
            piVar6[4] = (int)pcVar5;
            if (pcVar5 != (char *)0x0) {
              iVar10 = *(int *)(param_1 + 0x10);
              piVar12 = *(int **)(iVar10 + 0xc);
              *(int **)(iVar10 + 0xc) = piVar6;
              *piVar6 = iVar10 + 8;
              piVar6[1] = (int)piVar12;
              *piVar12 = (int)piVar6;
              goto LAB_0001c95e;
            }
          }
          FUN_0001c6cc(piVar4);
          if (piVar6 != (int *)0x0) {
            FUN_0001c6cc(piVar6);
          }
          goto LAB_0001c7c0;
        }
LAB_0001c95e:
        puVar7 = (undefined4 *)piVar6[3];
        piVar6[3] = (int)(piVar4 + 2);
        piVar4[2] = (int)(piVar6 + 2);
        piVar4[3] = (int)puVar7;
        *puVar7 = piVar4 + 2;
      }
    }
    else {
      iVar2 = strcmp(*(char **)(iVar1 + 0x14),__s2);
      if (iVar2 == 0) {
        free(__s2);
        return 0;
      }
      if (**(int **)(iVar10 + DAT_0001c99c) << 0x13 < 0) {
        pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001c9a0);
        _Var3 = getpid();
        fprintf(pFVar9,(char *)(DAT_0001c9a8 + 0x1c870),_Var3,DAT_0001c9ac + 0x1c872,
                DAT_0001c9a4 + 0x1c86a);
        FUN_0001c510(iVar1,DAT_0001c9b0 + 0x1c886,*(undefined4 *)(iVar1 + 0x10),
                     *(undefined4 *)(iVar1 + 0x14),__s2);
      }
      free(*(void **)(iVar1 + 0x14));
      *(char **)(iVar1 + 0x14) = __s2;
    }
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = __s2;
    }
    iVar10 = *(int *)(param_1 + 0x10);
    uVar8 = 0;
    if (iVar10 != 0) {
      *(uint *)(iVar10 + 0x18) = *(uint *)(iVar10 + 0x18) | 4;
      uVar8 = 0;
    }
  }
  else {
    __s2 = strndup(param_3,param_4);
    if (__s2 != (char *)0x0) goto LAB_0001c7c8;
LAB_0001c7c0:
    uVar8 = 0xfffffff4;
  }
  return uVar8;
}



/* ===== blkid_parse_tag_string @ 0001c9d4 size=250 ===== */

undefined4 blkid_parse_tag_string(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  __pid_t _Var1;
  char *pcVar2;
  char *__ptr;
  int __c;
  int iVar3;
  FILE *pFVar4;
  char *__s;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar5 = DAT_0001cad0 + 0x1c9e8;
  piVar6 = *(int **)(iVar5 + DAT_0001cad4);
  if (*piVar6 << 0x13 < 0) {
    pFVar4 = (FILE *)**(undefined4 **)(iVar5 + DAT_0001cad8);
    puVar7 = param_2;
    _Var1 = getpid();
    fprintf(pFVar4,(char *)(DAT_0001cae0 + 0x1ca0c),_Var1,DAT_0001cae4 + 0x1ca0e,
            DAT_0001cadc + 0x1ca06,puVar7);
    FUN_0001c580(DAT_0001cae8 + 0x1ca1c,param_1);
  }
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar2 = strchr(param_1,0x3d);
  if (pcVar2 == (char *)0x0) {
    return 0xffffffff;
  }
  __ptr = strdup(param_1);
  if (__ptr == (char *)0x0) {
    return 0xffffffff;
  }
  iVar3 = (int)pcVar2 - (int)param_1;
  __ptr[iVar3] = '\0';
  __c = (int)__ptr[iVar3 + 1];
  if ((__c == 0x22) || (__c == 0x27)) {
    __s = __ptr + iVar3 + 2;
    pcVar2 = strrchr(__s,__c);
    if (pcVar2 == (char *)0x0) goto LAB_0001ca92;
    *pcVar2 = '\0';
  }
  else {
    __s = __ptr + iVar3 + 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if ((*__s == '\0') || (pcVar2 = strdup(__s), pcVar2 == (char *)0x0)) {
LAB_0001ca92:
      if (*piVar6 << 0x13 < 0) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar5 + DAT_0001cad8);
        _Var1 = getpid();
        fprintf(pFVar4,(char *)(DAT_0001caf0 + 0x1cab4),_Var1,DAT_0001caf4 + 0x1cab6,
                DAT_0001caec + 0x1caae);
        FUN_0001c580(DAT_0001caf8 + 0x1cac4,param_1);
      }
      free(__ptr);
      return 0xffffffff;
    }
    *param_3 = pcVar2;
  }
  if (param_2 == (undefined4 *)0x0) {
    free(__ptr);
  }
  else {
    *param_2 = __ptr;
  }
  return 0;
}



/* ===== blkid_tag_iterate_begin @ 0001cafc size=40 ===== */

undefined4 * blkid_tag_iterate_begin(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = malloc(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = DAT_0001cb24;
      puVar2[1] = param_1;
      puVar2[2] = *(undefined4 *)(param_1 + 8);
    }
  }
  return puVar2;
}



/* ===== blkid_tag_next @ 0001cb28 size=54 ===== */

undefined4 blkid_tag_next(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  if ((((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) || (param_1 == (int *)0x0)) ||
     ((*param_1 != DAT_0001cb60 || (piVar2 = (int *)param_1[2], piVar2 == (int *)(param_1[1] + 8))))
     ) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
    *param_2 = piVar2[4];
    *param_3 = piVar2[5];
    param_1[2] = *piVar2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== blkid_tag_iterate_end @ 0001cb64 size=18 ===== */

void blkid_tag_iterate_end(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == DAT_0001cb74)) {
    (*(code *)PTR_free_0004c384)();
    return;
  }
  return;
}



/* ===== blkid_find_dev_with_tag @ 0001cb78 size=226 ===== */

int blkid_find_dev_with_tag(int param_1,int param_2,char *param_3)

{
  bool bVar1;
  __pid_t _Var2;
  int iVar3;
  int iVar4;
  int iVar5;
  FILE *__stream;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  
  iVar4 = DAT_0001cc5c + 0x1cb88;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (char *)0x0)) {
LAB_0001cb88:
    iVar5 = 0;
  }
  else {
    iVar5 = param_2;
    pcVar8 = param_3;
    FUN_0001b4b4();
    if (**(int **)(iVar4 + DAT_0001cc60) << 0x13 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_0001cc64);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_0001cc6c + 0x1cbc0),_Var2,DAT_0001cc70 + 0x1cbc2,
              DAT_0001cc68 + 0x1cbba,iVar5,pcVar8);
      FUN_0001c580(DAT_0001cc74 + 0x1cbd2,param_2,param_3);
    }
    bVar1 = false;
    do {
      while (iVar4 = FUN_0001c5d4(param_1,param_2), iVar4 == 0) {
LAB_0001cc36:
        if (bVar1) {
          if (*(int *)(param_1 + 0x18) << 0x1e < 0) goto LAB_0001cb88;
          iVar4 = blkid_probe_all(param_1);
        }
        else {
          iVar4 = blkid_probe_all_new(param_1);
        }
        if (iVar4 < 0) goto LAB_0001cb88;
        bVar1 = true;
      }
      iVar7 = -1;
      iVar5 = 0;
      for (puVar6 = *(undefined4 **)(iVar4 + 8); puVar6 != (undefined4 *)(iVar4 + 8);
          puVar6 = (undefined4 *)*puVar6) {
        iVar3 = strcmp((char *)puVar6[3],param_3);
        if (((iVar3 == 0) && (iVar7 < *(int *)(puVar6[4] + 0x20))) &&
           (iVar3 = access(*(char **)(puVar6[4] + 0x14),0), iVar3 == 0)) {
          iVar5 = puVar6[4];
          iVar7 = *(int *)(iVar5 + 0x20);
        }
      }
      if (iVar5 == 0) goto LAB_0001cc36;
    } while ((-1 < *(int *)(iVar5 + 0x38) << 0x1f) &&
            ((iVar5 = blkid_verify(param_1,iVar5), iVar5 == 0 ||
             (*(int *)(iVar5 + 0x38) << 0x1f < 0))));
  }
  return iVar5;
}



/* ===== FUN_0001cc78 @ 0001cc78 size=74 ===== */

void FUN_0001cc78(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_0001ccc4 + 0x1cc8a + DAT_0001ccc8);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== blkid_verify @ 0001cccc size=890 ===== */

int blkid_verify(int param_1,int param_2)

{
  time_t tVar1;
  int iVar2;
  int *piVar3;
  __pid_t _Var4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *__haystack;
  undefined4 uVar9;
  char *__needle;
  char *__s2;
  int iVar10;
  int iVar11;
  FILE *pFVar12;
  uint uVar13;
  undefined4 local_ac;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  char *local_a0;
  undefined4 local_9c;
  timeval local_98;
  stat64 sStack_90;
  
  iVar10 = DAT_0001d050 + 0x1ccdc;
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  tVar1 = time((time_t *)0x0);
  iVar11 = *(int *)(param_2 + 0x30);
  iVar2 = stat64(*(char **)(param_2 + 0x14),&sStack_90);
  if (iVar2 < 0) {
    if (**(int **)(iVar10 + DAT_0001d054) << 0x16 < 0) {
      piVar3 = __errno_location();
      pFVar12 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001d058);
      _Var4 = getpid();
      fprintf(pFVar12,(char *)(DAT_0001d060 + 0x1cd22),_Var4,DAT_0001d064 + 0x1cd24,
              DAT_0001d05c + 0x1cd1c);
      pcVar5 = strerror(*piVar3);
      uVar9 = *(undefined4 *)(param_2 + 0x14);
      iVar11 = *piVar3;
      iVar2 = DAT_0001d068 + 0x1cd3c;
LAB_0001cd3a:
      FUN_0001cc78(iVar2,pcVar5,iVar11,uVar9);
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x30);
    uVar13 = tVar1 - iVar11;
    if ((iVar2 <= tVar1) &&
       (((sStack_90.st_mtim.tv_sec < iVar2 ||
         ((iVar2 == sStack_90.st_mtim.tv_sec &&
          ((int)((longlong)sStack_90.st_mtim.tv_nsec * (longlong)DAT_0001d048 >> 0x26) -
           (sStack_90.st_mtim.tv_nsec >> 0x1f) <= *(int *)(param_2 + 0x34))))) && (uVar13 < 2)))) {
      *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) | 1;
      return param_2;
    }
    piVar3 = *(int **)(iVar10 + DAT_0001d054);
    if (*piVar3 << 0x16 < 0) {
      pFVar12 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001d058);
      _Var4 = getpid();
      fprintf(pFVar12,(char *)(DAT_0001d080 + 0x1cde8),_Var4,DAT_0001d084 + 0x1cdea,
              DAT_0001d07c + 0x1cde2);
      iVar2 = (int)((longlong)sStack_90.st_mtim.tv_nsec * (longlong)DAT_0001d048 >> 0x26) -
              (sStack_90.st_mtim.tv_nsec >> 0x1f);
      FUN_0001cc78(DAT_0001d088 + 0x1ce28,*(undefined4 *)(param_2 + 0x14),*(int *)(param_2 + 0x30),
                   *(int *)(param_2 + 0x30) >> 0x1f,*(int *)(param_2 + 0x34),
                   *(int *)(param_2 + 0x34) >> 0x1f,sStack_90.st_mtim.tv_sec,
                   sStack_90.st_mtim.tv_sec >> 0x1f,iVar2,iVar2 >> 0x1f,uVar13,(int)uVar13 >> 0x1f);
    }
    iVar2 = FUN_00033830((undefined4)sStack_90.st_rdev,sStack_90.st_rdev._4_4_,0);
    if (iVar2 != 0) goto LAB_0001ceb2;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar2 = blkid_new_probe();
      *(int *)(param_1 + 0x20) = iVar2;
      if (iVar2 == 0) goto LAB_0001ceb2;
    }
    iVar2 = open64(*(char **)(param_2 + 0x14),DAT_0001d04c);
    if (-1 < iVar2) {
      iVar11 = blkid_probe_set_device(*(undefined4 *)(param_1 + 0x20),iVar2,0,0,0);
      if (iVar11 == 0) {
        uVar9 = blkid_tag_iterate_begin(param_2);
        while (iVar11 = blkid_tag_next(uVar9,&local_ac,auStack_a8), iVar11 == 0) {
          FUN_0001c7a2(param_2,local_ac,0);
        }
        blkid_tag_iterate_end(uVar9);
        blkid_probe_enable_superblocks(*(undefined4 *)(param_1 + 0x20),1);
        blkid_probe_set_superblocks_flags(*(undefined4 *)(param_1 + 0x20),0x6a);
        blkid_probe_enable_partitions(*(undefined4 *)(param_1 + 0x20),1);
        blkid_probe_set_partitions_flags(*(undefined4 *)(param_1 + 0x20),4);
        iVar11 = blkid_do_safeprobe(*(undefined4 *)(param_1 + 0x20));
        if (iVar11 == 0) {
          iVar11 = gettimeofday(&local_98,(__timezone_ptr_t)0x0);
          if (iVar11 == 0) {
            *(__time_t *)(param_2 + 0x30) = local_98.tv_sec;
            *(__suseconds_t *)(param_2 + 0x34) = local_98.tv_usec;
          }
          else {
            tVar1 = time((time_t *)0x0);
            *(time_t *)(param_2 + 0x30) = tVar1;
          }
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          *(undefined4 *)(param_2 + 0x28) = (undefined4)sStack_90.st_rdev;
          *(undefined4 *)(param_2 + 0x2c) = sStack_90.st_rdev._4_4_;
          *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) | 1;
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
          iVar6 = blkid_probe_numof_values(uVar9);
          pcVar5 = (char *)(DAT_0001d09c + 0x1cf7e);
          __needle = (char *)(DAT_0001d0a0 + 0x1cf84);
          __s2 = (char *)(DAT_0001d0a4 + 0x1cf8a);
          for (iVar11 = 0; iVar11 < iVar6; iVar11 = iVar11 + 1) {
            iVar7 = blkid_probe_get_value(uVar9,iVar11,&local_a0,&local_a4,&local_9c);
            __haystack = local_a0;
            if (iVar7 == 0) {
              iVar7 = strncmp(local_a0,pcVar5,0xb);
              if (iVar7 == 0) {
                iVar7 = strcmp(__haystack,__s2);
                if (iVar7 == 0) {
                  __haystack = (char *)(DAT_0001d0b8 + 0x1d00e);
                }
                else {
                  iVar7 = strcmp(__haystack,(char *)(DAT_0001d0bc + 0x1d01e));
                  if (iVar7 != 0) goto LAB_0001d012;
                  __haystack = (char *)(DAT_0001d0c0 + 0x1d02e);
                }
              }
              else {
                pcVar8 = strstr(__haystack,__needle);
                if (pcVar8 != (char *)0x0) goto LAB_0001d012;
              }
              FUN_0001c7a2(param_2,__haystack,local_a4,local_9c);
            }
LAB_0001d012:
          }
          if (*piVar3 << 0x16 < 0) {
            pFVar12 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001d058);
            _Var4 = getpid();
            fprintf(pFVar12,(char *)(DAT_0001d0ac + 0x1cfb2),_Var4,DAT_0001d0b0 + 0x1cfb4,
                    DAT_0001d0a8 + 0x1cfac);
            FUN_0001cc78(DAT_0001d0b4 + 0x1cfc4,*(undefined4 *)(param_2 + 0x14),
                         (undefined4)sStack_90.st_rdev,sStack_90.st_rdev._4_4_,
                         *(undefined4 *)(param_2 + 0x1c));
          }
        }
        else {
          FUN_00016a34(param_2);
          param_2 = 0;
        }
        blkid_probe_reset_superblocks_filter(*(undefined4 *)(param_1 + 0x20));
        blkid_probe_set_device(*(undefined4 *)(param_1 + 0x20),0xffffffff,0,0,0);
        close(iVar2);
        return param_2;
      }
      close(iVar2);
      goto LAB_0001ceb2;
    }
    if (*piVar3 << 0x16 < 0) {
      piVar3 = __errno_location();
      pFVar12 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001d058);
      _Var4 = getpid();
      fprintf(pFVar12,(char *)(DAT_0001d090 + 0x1ce7c),_Var4,DAT_0001d094 + 0x1ce7e,
              DAT_0001d08c + 0x1ce76);
      pcVar5 = strerror(*piVar3);
      uVar9 = *(undefined4 *)(param_2 + 0x14);
      iVar11 = *piVar3;
      iVar2 = DAT_0001d098 + 0x1ce96;
      goto LAB_0001cd3a;
    }
  }
  piVar3 = __errno_location();
  if ((*piVar3 - 1U < 2) || (*piVar3 == 0xd)) {
    if (-1 < **(int **)(iVar10 + DAT_0001d054) << 0x16) {
      return param_2;
    }
    pFVar12 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001d058);
    _Var4 = getpid();
    fprintf(pFVar12,(char *)(DAT_0001d070 + 0x1cd72),_Var4,DAT_0001d074 + 0x1cd74,
            DAT_0001d06c + 0x1cd6c);
    FUN_0001cc78(DAT_0001d078 + 0x1cd82,*(undefined4 *)(param_2 + 0x14));
    return param_2;
  }
LAB_0001ceb2:
  FUN_00016a34(param_2);
  return 0;
}



/* ===== blkid_parse_version_string @ 0001d0c4 size=46 ===== */

int blkid_parse_version_string(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(param_1 + -1);
  iVar1 = 0;
  while( true ) {
    do {
      pcVar2 = pcVar2 + 1;
      iVar3 = (int)*pcVar2;
      if (iVar3 == 0) {
        return iVar1;
      }
    } while (iVar3 == 0x2e);
    if (-1 < (int)((uint)*(ushort *)(**(int **)(DAT_0001d0f4 + 0x1d0cc + DAT_0001d0f8) + iVar3 * 2)
                  << 0x1c)) break;
    iVar1 = iVar1 * 10 + iVar3 + -0x30;
  }
  return iVar1;
}



/* ===== blkid_get_library_version @ 0001d0fc size=26 ===== */

void blkid_get_library_version(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = DAT_0001d114 + 0x1d104;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = DAT_0001d118 + 0x1d10c;
  }
                    /* WARNING: Could not recover jumptable at 0x00015964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_blkid_parse_version_string_0004c26c)(DAT_0001d11c + 0x1d112);
  return;
}



/* ===== FUN_0001d120 @ 0001d120 size=48 ===== */

undefined4 FUN_0001d120(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001efde();
  if (iVar1 == 0) {
    iVar1 = FUN_0001ecc8(param_1);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_0001ee58(iVar1,DAT_0001d150 + 0x1d140,0,0);
    if (iVar1 == 0) {
      return 0xfffffff4;
    }
  }
  return 0;
}



/* ===== FUN_0001d178 @ 0001d178 size=54 ===== */

undefined4 FUN_0001d178(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined4 local_24 [4];
  undefined4 local_14;
  
  puVar3 = &uStack_28;
  local_24[0] = *(undefined4 *)(DAT_0001d1b0 + 0x1d186);
  local_24[1] = *(undefined4 *)(DAT_0001d1b0 + 0x1d18a);
  local_24[2] = *(undefined4 *)(DAT_0001d1b0 + 0x1d18e);
  local_24[3] = *(undefined4 *)(DAT_0001d1b0 + 0x1d192);
  local_14 = *(undefined4 *)(DAT_0001d1b0 + 0x1d196);
  iVar2 = 0;
  do {
    puVar3 = puVar3 + 1;
    iVar1 = memcmp((void *)*puVar3,param_1,3);
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 5);
  return 0;
}



/* ===== FUN_0001d1b4 @ 0001d1b4 size=84 ===== */

undefined4 FUN_0001d1b4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_3 + 4);
  uVar5 = *(uint *)(param_3 + 8);
  iVar4 = (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18
          ) + param_4;
  iVar1 = FUN_0001f6f8(param_1,param_2,iVar4,0,param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_0001ef0c(param_1,param_2,iVar4,0,
                         uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18,0);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      FUN_0001fa9c(iVar1,param_3 + 1,3);
      uVar2 = 1;
    }
  }
  else {
    if (param_4 == 0) {
      FUN_0001eefa(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0001eb70 @ 0001eb70 size=74 ===== */

void FUN_0001eb70(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_0001ebbc + 0x1eb82 + DAT_0001ebc0);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_0001ebc4 @ 0001ebc4 size=52 ===== */

void FUN_0001ebc4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  do {
    piVar3 = *(int **)(param_1 + 0x14);
    do {
      if (piVar3 == (int *)(param_1 + 0x14)) {
        return;
      }
    } while ((piVar3 + -0x10 == (int *)0x0) ||
            (iVar1 = piVar3[-0xc], piVar3[-0xc] = iVar1 + -1, 0 < iVar1 + -1));
    iVar1 = *piVar3;
    piVar2 = (int *)piVar3[1];
    *(int **)(iVar1 + 4) = piVar2;
    *piVar2 = iVar1;
    free(piVar3 + -0x10);
  } while( true );
}



/* ===== FUN_0001ebf8 @ 0001ebf8 size=98 ===== */

void FUN_0001ebf8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  __pid_t _Var1;
  FILE *__stream;
  int iVar2;
  
  iVar2 = DAT_0001ec5c + 0x1ec02;
  if (param_1 != (int *)0x0) {
    if (param_1[5] != 0) {
      FUN_0001ebc4();
    }
    if (*param_1 != 0) {
      param_1[1] = 0;
    }
    param_1[2] = 0;
    *param_1 = 1;
    param_1[5] = (int)(param_1 + 5);
    param_1[6] = (int)(param_1 + 5);
    if (**(int **)(iVar2 + DAT_0001ec60) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_0001ec64);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_0001ec6c + 0x1ec42),_Var1,DAT_0001ec70 + 0x1ec44,
              DAT_0001ec68 + 0x1ec3c,param_2,param_3);
      FUN_0001eb70(DAT_0001ec74 + 0x1ec50);
      return;
    }
  }
  return;
}



/* ===== FUN_0001ec78 @ 0001ec78 size=34 ===== */

void FUN_0001ec78(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_0001ebc4(param_2);
  }
  free(*(void **)(param_2 + 0x10));
  (*(code *)PTR_free_0004c384)(param_2);
  return;
}



/* ===== blkid_probe_enable_partitions @ 0001ec9a size=8 ===== */

undefined4 blkid_probe_enable_partitions(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return 0;
}



/* ===== blkid_probe_set_partitions_flags @ 0001eca2 size=8 ===== */

undefined4 blkid_probe_set_partitions_flags(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  return 0;
}



/* ===== blkid_probe_reset_partitions_filter @ 0001ecaa size=24 ===== */

int blkid_probe_reset_partitions_filter
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000190fc(param_1,2,0,param_4,param_4);
  return -(uint)(iVar1 == 0);
}



/* ===== blkid_probe_invert_partitions_filter @ 0001ecb0 size=116 ===== */

undefined4 blkid_probe_invert_partitions_filter(int param_1)

{
  __pid_t _Var1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  FILE *__stream;
  undefined4 uVar6;
  
  uVar6 = 2;
  iVar5 = DAT_000191c4 + 0x19162;
  if ((*(int *)(*(int *)(param_1 + 0x94) + 0x10) == 0) ||
     (puVar4 = *(uint **)(param_1 + 0xa8), puVar4 == (uint *)0x0)) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = puVar4 + (*(int *)(*(int *)(param_1 + 0x94) + 0x18) + 0x20U >> 5);
    for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
      *puVar4 = ~*puVar4;
    }
    uVar2 = 0;
    if ((**(uint **)(iVar5 + DAT_000191c8) & 0x100) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000191cc);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_000191d4 + 0x1919c),_Var1,DAT_000191d8 + 0x1919e,
              DAT_000191d0 + 0x19196,uVar6);
      FUN_00018b88(DAT_000191dc + 0x191aa);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== blkid_probe_filter_partitions_type @ 0001ecb6 size=224 ===== */

undefined4 blkid_probe_filter_partitions_type(int param_1,uint param_2,int param_3)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  FILE *__stream;
  int iVar9;
  int iVar10;
  
  iVar1 = FUN_000190fc(param_1,2,1);
  iVar9 = DAT_000192c8 + 0x1920c;
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x94);
    uVar6 = *(uint *)(iVar10 + 0x18);
    for (uVar8 = 0; uVar6 != uVar8; uVar8 = uVar8 + 1) {
      puVar5 = *(undefined4 **)(*(int *)(iVar10 + 0x14) + uVar8 * 4);
      puVar7 = (undefined4 *)(param_3 + -4);
      do {
        puVar7 = puVar7 + 1;
        if ((char *)*puVar7 == (char *)0x0) {
          if ((param_2 & 2) == 0) goto LAB_000192be;
          goto LAB_000192aa;
        }
        iVar4 = strcmp((char *)*puVar5,(char *)*puVar7);
      } while (iVar4 != 0);
      if ((param_2 & 1) != 0) {
LAB_000192aa:
        *(uint *)(iVar1 + (uVar8 >> 5) * 4) =
             *(uint *)(iVar1 + (uVar8 >> 5) * 4) | 1 << (uVar8 & 0x1f);
      }
LAB_000192be:
    }
    uVar3 = 0;
    if ((**(uint **)(iVar9 + DAT_000192cc) & 0x100) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar9 + DAT_000192d0);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_000192d8 + 0x1925a),_Var2,DAT_000192dc + 0x1925c,
              DAT_000192d4 + 0x19254);
      FUN_00018b88(DAT_000192e0 + 0x1926e,*(undefined4 *)(*(int *)(param_1 + 0x94) + 4));
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== blkid_probe_get_partitions @ 0001ecc0 size=8 ===== */

undefined4 blkid_probe_get_partitions(int param_1)

{
  int iVar1;
  __pid_t _Var2;
  int *piVar3;
  undefined4 uVar4;
  FILE *__stream;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  
  piVar3 = (int *)(param_1 + 0x94);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = 0;
  uVar7 = *(undefined4 *)(param_1 + 0xb0);
  *(int **)(param_1 + 0xb0) = piVar3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  iVar5 = DAT_000190e0 + 0x1908e;
  piVar8 = piVar3;
  iVar1 = (**(code **)(*piVar3 + 0x1c))();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  if (iVar1 == 0) {
    if (**(int **)(iVar5 + DAT_000190e4) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000190e8);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_000190f0 + 0x190be),_Var2,DAT_000190f4 + 0x190c0,
              DAT_000190ec + 0x190b8,piVar8);
      FUN_00018b88(DAT_000190f8 + 0x190d0,*(undefined4 *)(*piVar3 + 4));
    }
    uVar4 = *(undefined4 *)(param_1 + 0xac);
  }
  return uVar4;
}



/* ===== FUN_0001ecc8 @ 0001ecc8 size=6 ===== */

undefined4 FUN_0001ecc8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



/* ===== FUN_0001ecce @ 0001ecce size=332 ===== */

int FUN_0001ecce(int param_1,undefined4 *param_2,int param_3)

{
  __pid_t _Var1;
  int iVar2;
  FILE *pFVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_2c = (undefined4 *)0x0;
  iVar4 = DAT_0001ee1c + 0x1ecec;
  if ((*(uint *)(param_1 + 0x10) == 0 && *(int *)(param_1 + 0x14) == 0) ||
     ((((param_2[3] != 0 &&
        (*(int *)(param_1 + 0x14) == 0 && *(uint *)(param_1 + 0x10) < (uint)param_2[3])) ||
       (*(int *)(param_1 + 0x30) << 0x1b < 0)) ||
      (iVar2 = FUN_0001aa2a(param_1,param_2,&local_28,&local_2c), iVar2 != 0)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
    if (param_2[4] != 0) {
      piVar5 = *(int **)(iVar4 + DAT_0001ee20);
      if (*piVar5 << 0x17 < 0) {
        pFVar3 = (FILE *)**(undefined4 **)(iVar4 + DAT_0001ee24);
        _Var1 = getpid();
        fprintf(pFVar3,(char *)(DAT_0001ee2c + 0x1ed48),_Var1,DAT_0001ee30 + 0x1ed4a,
                DAT_0001ee28 + 0x1ed42);
        FUN_0001eb70(DAT_0001ee34 + 0x1ed58,*param_2);
      }
      uVar6 = (*(code *)param_2[4])(param_1,local_2c);
      iVar2 = (int)uVar6;
      if (iVar2 < 0) {
        FUN_0001ecc8(param_1);
        FUN_0001ebf8();
        if ((param_3 != 0) && (*(int *)(param_3 + 0xc) == 0)) {
          FUN_00018e58(param_1,param_3);
        }
        if (*piVar5 << 0x17 < 0) {
          pFVar3 = (FILE *)**(undefined4 **)(iVar4 + DAT_0001ee24);
          _Var1 = getpid();
          fprintf(pFVar3,(char *)(DAT_0001ee3c + 0x1eda4),_Var1,DAT_0001ee40 + 0x1eda6,
                  DAT_0001ee38 + 0x1ed9e);
          FUN_0001eb70(DAT_0001ee44 + 0x1edb6,*param_2,iVar2);
        }
      }
      else if (((iVar2 == 0) && (local_2c != (undefined4 *)0x0)) &&
              ((param_3 != 0 && (*(int *)(param_3 + 0xc) == 0)))) {
        iVar2 = FUN_00019bc4(param_1,(int)((ulonglong)uVar6 >> 0x20),local_28,uStack_24,local_2c[1],
                             *local_2c);
      }
      if (*piVar5 << 0x17 < 0) {
        pFVar3 = (FILE *)**(undefined4 **)(iVar4 + DAT_0001ee24);
        _Var1 = getpid();
        fprintf(pFVar3,(char *)(DAT_0001ee4c + 0x1edd8),_Var1,DAT_0001ee50 + 0x1edda,
                DAT_0001ee48 + 0x1edd2);
        FUN_0001eb70(DAT_0001ee54 + 0x1edea,*param_2,iVar2);
      }
    }
  }
  return iVar2;
}



/* ===== FUN_0001ee58 @ 0001ee58 size=118 ===== */

undefined4 * FUN_0001ee58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  __pid_t _Var2;
  undefined4 *puVar3;
  undefined4 uVar4;
  FILE *__stream;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = param_2;
  uVar7 = param_3;
  puVar1 = calloc(1,0x48);
  iVar5 = DAT_0001eed0 + 0x1ee72;
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(param_1 + 4);
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    *puVar1 = param_2;
    puVar1[5] = uVar4;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 0x10;
    puVar1[0x10] = param_1 + 0x14;
    puVar1[0x11] = puVar3;
    *puVar3 = puVar1 + 0x10;
    if (**(int **)(iVar5 + DAT_0001eed4) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_0001eed8);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_0001eee0 + 0x1eeb0),_Var2,DAT_0001eee4 + 0x1eeb2,
              DAT_0001eedc + 0x1eeaa,uVar6,uVar7);
      FUN_0001eb70(DAT_0001eee8 + 0x1eec4,param_2,param_3,param_4);
    }
  }
  return puVar1;
}



/* ===== FUN_0001eefa @ 0001eefa size=18 ===== */

int FUN_0001eefa(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *param_1;
    *param_1 = iVar1 + 1;
  }
  return iVar1;
}



/* ===== FUN_0001ef0c @ 0001ef0c size=174 ===== */

undefined4 *
FUN_0001ef0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  __pid_t _Var3;
  int iVar4;
  undefined4 *__s;
  FILE *__stream;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = DAT_0001efbc + 0x1ef24;
  iVar6 = param_2;
  uVar7 = param_3;
  if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 8)) {
    pvVar1 = realloc(*(void **)(param_1 + 0x10),(*(int *)(param_1 + 0xc) + 0x20) * 0xf8);
    if (pvVar1 == (void *)0x0) {
      return (undefined4 *)0x0;
    }
    *(void **)(param_1 + 0x10) = pvVar1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0x20;
  }
  iVar4 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar4 + 1;
  __s = (undefined4 *)(iVar4 * 0xf8 + *(int *)(param_1 + 0x10));
  memset(__s,0,0xf8);
  if (param_2 != 0) {
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  }
  __s[0x3d] = param_2;
  uVar2 = FUN_0001eefa(param_1);
  *__s = param_3;
  __s[1] = param_4;
  __s[2] = param_5;
  __s[3] = param_6;
  iVar4 = DAT_0001efc0;
  __s[0x12] = uVar2;
  if (**(int **)(iVar5 + iVar4) << 0x17 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_0001efc4);
    _Var3 = getpid();
    fprintf(__stream,(char *)(DAT_0001efcc + 0x1ef96),_Var3,DAT_0001efd0 + 0x1ef98,
            DAT_0001efc8 + 0x1ef90,iVar6,uVar7);
    FUN_0001eb70(DAT_0001efd4 + 0x1efac);
  }
  return __s;
}



/* ===== FUN_0001efde @ 0001efde size=26 ===== */

bool FUN_0001efde(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0001905c();
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x18) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = *(int *)(iVar2 + 0xc) == 0;
  }
  return bVar1;
}



/* ===== FUN_0001eff8 @ 0001eff8 size=12 ===== */

undefined4 FUN_0001eff8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001905c();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}



/* ===== FUN_0001f004 @ 0001f004 size=416 ===== */

undefined4 FUN_0001f004(int param_1,uint *param_2,undefined4 *param_3)

{
  __pid_t _Var1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FILE *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  bool bVar15;
  undefined8 uVar16;
  
  iVar9 = DAT_0001f1a4 + 0x1f016;
  piVar14 = *(int **)(iVar9 + DAT_0001f1a8);
  if (*piVar14 << 0x17 < 0) {
    pFVar10 = (FILE *)**(undefined4 **)(iVar9 + DAT_0001f1ac);
    _Var1 = getpid();
    fprintf(pFVar10,(char *)(DAT_0001f1b4 + 0x1f03c),_Var1,DAT_0001f1b8 + 0x1f03e,
            DAT_0001f1b0 + 0x1f036);
    FUN_0001eb70(DAT_0001f1bc + 0x1f04c,*param_3);
  }
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    uVar7 = param_2[2];
    if (uVar7 != 0 || param_2[3] != 0) {
      if (*(int *)(param_1 + 0x30) << 0x1b < 0) {
        return 1;
      }
      uVar2 = *(uint *)(param_1 + 8);
      uVar6 = *(uint *)(param_1 + 0xc);
      uVar8 = param_2[3] << 9 | uVar7 >> 0x17;
      uVar7 = uVar7 * 0x200;
      uVar12 = param_2[1] << 9 | *param_2 >> 0x17;
      uVar11 = *param_2 * 0x200;
      bVar15 = uVar6 <= uVar12;
      if (uVar12 == uVar6) {
        bVar15 = uVar2 <= uVar11;
      }
      if (bVar15) {
        uVar6 = *(int *)(param_1 + 0x14) + uVar6 + CARRY4(*(uint *)(param_1 + 0x10),uVar2);
        uVar13 = uVar12 + uVar8 + CARRY4(uVar11,uVar7);
        bVar15 = uVar13 <= uVar6;
        if (uVar6 == uVar13) {
          bVar15 = uVar11 + uVar7 <= *(uint *)(param_1 + 0x10) + uVar2;
        }
        if (bVar15) {
          uVar16 = FUN_00018ccc(param_1);
          iVar3 = (int)uVar16;
          if (iVar3 == 0) {
            return 0xfffffff4;
          }
          FUN_000198ea(iVar3,(int)((ulonglong)uVar16 >> 0x20),uVar11,uVar12,uVar7,uVar8);
          uVar4 = FUN_0001905c(param_1);
          *(undefined4 *)(iVar3 + 0xb0) = uVar4;
          iVar5 = FUN_0001ecc8(param_1);
          if (iVar5 != 0) {
            *(uint **)(iVar5 + 4) = param_2;
          }
          *(int *)(iVar3 + 0xac) = iVar5;
          uVar4 = FUN_0001905c(param_1);
          uVar4 = FUN_0001ecce(iVar3,param_3,uVar4);
          *(undefined4 *)(iVar3 + 0xac) = 0;
          if (iVar5 != 0) {
            *(undefined4 *)(iVar5 + 4) = 0;
          }
          blkid_free_probe(iVar3);
          if (-1 < *piVar14 << 0x17) {
            return uVar4;
          }
          pFVar10 = (FILE *)**(undefined4 **)(iVar9 + DAT_0001f1ac);
          _Var1 = getpid();
          fprintf(pFVar10,(char *)(DAT_0001f1d4 + 0x1f178),_Var1,DAT_0001f1d8 + 0x1f17a,
                  DAT_0001f1d0 + 0x1f172);
          FUN_0001eb70(DAT_0001f1dc + 0x1f18a,*param_3,uVar4);
          return uVar4;
        }
      }
      if (*piVar14 << 0x17 < 0) {
        pFVar10 = (FILE *)**(undefined4 **)(iVar9 + DAT_0001f1ac);
        _Var1 = getpid();
        fprintf(pFVar10,(char *)(DAT_0001f1c4 + 0x1f0e2),_Var1,DAT_0001f1c8 + 0x1f0e4,
                DAT_0001f1c0 + 0x1f0dc);
        FUN_0001eb70(DAT_0001f1cc + 0x1f0f2,*param_3);
      }
      return 0xffffffe4;
    }
  }
  return 0xffffffea;
}



/* ===== blkid_known_pttype @ 0001f1e0 size=40 ===== */

undefined4 blkid_known_pttype(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    puVar3 = (undefined4 *)(DAT_0001f208 + 0x1f1ee);
    do {
      iVar1 = strcmp(*(char **)*puVar3,param_1);
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 != 0xd);
  }
  return 0;
}



/* ===== blkid_partitions_get_name @ 0001f20c size=26 ===== */

undefined4 blkid_partitions_get_name(uint param_1,undefined4 *param_2)

{
  if (param_1 < 0xd) {
    *param_2 = **(undefined4 **)(DAT_0001f228 + 0x1f216 + param_1 * 4);
    return 0;
  }
  return 0xffffffff;
}



/* ===== blkid_partlist_numof_partitions @ 0001f22c size=4 ===== */

undefined4 blkid_partlist_numof_partitions(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ===== FUN_0001f230 @ 0001f230 size=450 ===== */

int FUN_0001f230(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  __pid_t _Var1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FILE *pFVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  uint uVar16;
  int local_34;
  
  iVar13 = DAT_0001f3f4 + 0x1f244;
  puVar14 = *(uint **)(iVar13 + DAT_0001f3f8);
  if ((int)(*puVar14 << 0x17) < 0) {
    pFVar10 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001f3fc);
    _Var1 = getpid();
    fprintf(pFVar10,(char *)(DAT_0001f404 + 0x1f266),_Var1,DAT_0001f408 + 0x1f268,
            DAT_0001f400 + 0x1f260);
    FUN_0001eb70(DAT_0001f40c + 0x1f27c);
  }
  if ((*(uint *)(param_1 + 0x30) & 0x10) == 0) {
    local_34 = FUN_00018ccc(param_1);
    if (local_34 != 0) {
      iVar2 = blkid_probe_get_partitions();
      iVar11 = 0;
      if ((iVar2 != 0) && (iVar3 = blkid_partlist_numof_partitions(), iVar3 != 0)) {
        for (iVar5 = 0; iVar5 < iVar3; iVar5 = iVar5 + 1) {
          puVar12 = (uint *)(iVar5 * 0xf8 + *(int *)(iVar2 + 0x10));
          uVar8 = puVar12[1] + puVar12[3] + (uint)CARRY4(*puVar12,puVar12[2]);
          uVar7 = *(uint *)(param_1 + 0x14) >> 9;
          bVar15 = uVar8 <= uVar7;
          if (uVar7 == uVar8) {
            bVar15 = *puVar12 + puVar12[2] <=
                     (*(uint *)(param_1 + 0x10) >> 9 | *(uint *)(param_1 + 0x14) << 0x17);
          }
          if (!bVar15) {
            if ((*puVar14 & 0x100) == 0) {
              iVar11 = 0;
            }
            else {
              pFVar10 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001f3fc);
              _Var1 = getpid();
              fprintf(pFVar10,(char *)(DAT_0001f428 + 0x1f3be),_Var1,DAT_0001f42c + 0x1f3c0,
                      DAT_0001f424 + 0x1f3b8);
              FUN_0001eb70(DAT_0001f430 + 0x1f3d4,puVar12[0x12],*puVar12,puVar12[1],puVar12[2],
                           puVar12[3]);
            }
            goto LAB_0001f28e;
          }
        }
        uVar7 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
        uVar8 = uVar7 >> 9;
        for (iVar5 = 0; iVar5 < iVar3; iVar5 = iVar5 + 1) {
          puVar12 = (uint *)(iVar5 * 0xf8 + *(int *)(iVar2 + 0x10));
          uVar6 = *puVar12;
          uVar9 = puVar12[1];
          bVar15 = uVar9 <= param_4 >> 9;
          if (param_4 >> 9 == uVar9) {
            bVar15 = uVar6 <= (param_3 >> 9 | param_4 << 0x17);
          }
          if (bVar15) {
            uVar16 = (uint)*(undefined8 *)(puVar12 + 2);
            uVar9 = (int)((ulonglong)*(undefined8 *)(puVar12 + 2) >> 0x20) +
                    uVar9 + CARRY4(uVar16,uVar6);
            bVar15 = uVar8 <= uVar9;
            if (uVar9 == uVar8) {
              bVar15 = (param_3 + param_5 >> 9 | uVar7 * 0x800000) <= uVar16 + uVar6;
            }
            if (bVar15) {
              iVar11 = 1;
              break;
            }
          }
        }
      }
      goto LAB_0001f28e;
    }
  }
  iVar11 = 0;
  local_34 = 0;
LAB_0001f28e:
  blkid_free_probe(local_34);
  if ((int)(*puVar14 << 0x17) < 0) {
    pFVar10 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001f3fc);
    _Var1 = getpid();
    fprintf(pFVar10,(char *)(DAT_0001f414 + 0x1f2b4),_Var1,DAT_0001f418 + 0x1f2b6,
            DAT_0001f410 + 0x1f2ae);
    if (iVar11 == 0) {
      puVar4 = (undefined *)(DAT_0001f41c + 0x1f2c8);
    }
    else {
      puVar4 = &UNK_0001f3f2 + DAT_0001f434;
    }
    FUN_0001eb70(DAT_0001f420 + 0x1f2cc,puVar4);
  }
  return iVar11;
}



/* ===== blkid_partlist_get_table @ 0001f438 size=16 ===== */

int blkid_partlist_get_table(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 == (int *)(param_1 + 0x14)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(piVar2 + -0x10);
  }
  return iVar1;
}



/* ===== blkid_partlist_get_partition @ 0001f448 size=24 ===== */

int blkid_partlist_get_partition(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 8))) {
    return param_2 * 0xf8 + *(int *)(param_1 + 0x10);
  }
  return 0;
}



/* ===== FUN_0001f460 @ 0001f460 size=28 ===== */

undefined4 FUN_0001f460(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0001a1a6(param_2,param_1 + 0x18,0x25,param_2,param_4);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0001f47c @ 0001f47c size=54 ===== */

undefined4 FUN_0001f47c(int param_1,char *param_2)

{
  size_t __n;
  void *pvVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if ((param_2 != (char *)0x0) && (__n = strlen(param_2), uVar2 = 0, __n != 0)) {
      if (0x23 < __n) {
        __n = 0x24;
      }
      pvVar1 = memcpy((void *)(param_1 + 0x18),param_2,__n);
      uVar2 = 0;
      *(undefined1 *)((int)pvVar1 + __n) = 0;
    }
  }
  return uVar2;
}



/* ===== blkid_parttable_get_id @ 0001f550 size=14 ===== */

int blkid_parttable_get_id(int param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    return param_1 + 0x18;
  }
  return 0;
}



/* ===== blkid_parttable_get_type @ 0001f564 size=4 ===== */

undefined4 blkid_parttable_get_type(undefined4 *param_1)

{
  return *param_1;
}



/* ===== blkid_parttable_get_parent @ 0001f568 size=4 ===== */

undefined4 blkid_parttable_get_parent(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ===== blkid_parttable_get_offset @ 0001f56c size=6 ===== */

undefined8 blkid_parttable_get_offset(int param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* ===== blkid_partition_get_table @ 0001f572 size=6 ===== */

undefined4 blkid_partition_get_table(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf4);
}



/* ===== FUN_0001f578 @ 0001f578 size=80 ===== */

undefined4 FUN_0001f578(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((param_1 == 0) ||
      (puVar1 = (undefined4 *)blkid_partition_get_table(), puVar1 == (undefined4 *)0x0)) ||
     ((char *)*puVar1 == (char *)0x0)) {
    return 0xffffffff;
  }
  if (puVar1[5] == 0) {
    iVar2 = strcmp((char *)*puVar1,(char *)(DAT_0001f5c8 + 0x1f59e));
    if (iVar2 != 0) {
      return 0x50;
    }
    if (*(int *)(param_1 + 0x48) < 5) {
      if ((*(uint *)(param_1 + 0x10) & 0xffffff7f) == 5) {
        return 0x45;
      }
      if (*(uint *)(param_1 + 0x10) == 0xf) {
        return 0x45;
      }
      return 0x50;
    }
  }
  return 0x4c;
}



/* ===== blkid_partition_is_primary @ 0001f5cc size=16 ===== */

bool blkid_partition_is_primary(void)

{
  int iVar1;
  
  iVar1 = FUN_0001f578();
  return iVar1 == 0x50;
}



/* ===== blkid_partition_is_extended @ 0001f5dc size=16 ===== */

bool blkid_partition_is_extended(void)

{
  int iVar1;
  
  iVar1 = FUN_0001f578();
  return iVar1 == 0x45;
}



/* ===== blkid_partition_is_logical @ 0001f5ec size=16 ===== */

bool blkid_partition_is_logical(void)

{
  int iVar1;
  
  iVar1 = FUN_0001f578();
  return iVar1 == 0x4c;
}



/* ===== FUN_0001f5fc @ 0001f5fc size=42 ===== */

undefined4 FUN_0001f5fc(int param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0x7e < param_3) {
      param_3 = 0x7f;
    }
    pvVar1 = memcpy((void *)(param_1 + 0x71),param_2,param_3);
    *(undefined1 *)((int)pvVar1 + param_3) = 0;
    FUN_0001a216();
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0001f626 @ 0001f626 size=42 ===== */

undefined4 FUN_0001f626(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00028844(param_4,param_1 + 0x71,0x80,param_2,param_3,param_2,param_3);
    FUN_0001a216(param_1 + 0x71);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== blkid_partition_get_name @ 0001f6a0 size=14 ===== */

int blkid_partition_get_name(int param_1)

{
  if (*(char *)(param_1 + 0x71) != '\0') {
    return param_1 + 0x71;
  }
  return 0;
}



/* ===== blkid_partition_get_uuid @ 0001f6ae size=14 ===== */

int blkid_partition_get_uuid(int param_1)

{
  if (*(char *)(param_1 + 0x4c) != '\0') {
    return param_1 + 0x4c;
  }
  return 0;
}



/* ===== blkid_partition_get_partno @ 0001f6bc size=4 ===== */

undefined4 blkid_partition_get_partno(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* ===== blkid_partlist_get_partition_by_partno @ 0001f6c0 size=50 ===== */

undefined4 blkid_partlist_get_partition_by_partno(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = blkid_partlist_numof_partitions();
  iVar4 = 0;
  while( true ) {
    if (iVar1 <= iVar4) {
      return 0;
    }
    uVar2 = blkid_partlist_get_partition(param_1,iVar4);
    iVar3 = blkid_partition_get_partno();
    if (iVar3 == param_2) break;
    iVar4 = iVar4 + 1;
  }
  return uVar2;
}



/* ===== blkid_partition_get_start @ 0001f6f2 size=6 ===== */

undefined8 blkid_partition_get_start(undefined8 *param_1)

{
  return *param_1;
}



/* ===== FUN_0001f6f8 @ 0001f6f8 size=56 ===== */

undefined4 FUN_0001f6f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = blkid_partlist_numof_partitions();
  iVar3 = 0;
  while( true ) {
    if (iVar1 <= iVar3) {
      return 0;
    }
    uVar2 = blkid_partlist_get_partition(param_1,iVar3);
    lVar4 = blkid_partition_get_start();
    if (lVar4 == CONCAT44(param_4,param_3)) break;
    iVar3 = iVar3 + 1;
  }
  return uVar2;
}



/* ===== blkid_partition_get_size @ 0001f730 size=6 ===== */

undefined8 blkid_partition_get_size(int param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* ===== FUN_0001f736 @ 0001f736 size=68 ===== */

undefined4
FUN_0001f736(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar3 = blkid_partition_get_start();
    uVar1 = (uint)((ulonglong)lVar3 >> 0x20);
    lVar4 = blkid_partition_get_size(param_1);
    bVar2 = uVar1 <= param_4;
    if (param_4 == uVar1) {
      bVar2 = (uint)lVar3 <= param_3;
    }
    if (bVar2) {
      param_4 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
      uVar1 = (uint)((ulonglong)(lVar3 + lVar4) >> 0x20);
      bVar2 = param_4 <= uVar1;
      if (uVar1 == param_4) {
        bVar2 = param_3 + param_5 <= (uint)(lVar3 + lVar4);
      }
      if (bVar2) {
        return 1;
      }
    }
  }
  return 0;
}



/* ===== blkid_partlist_devno_to_partition @ 0001f77a size=686 ===== */

int blkid_partlist_devno_to_partition
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __pid_t _Var1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *__s1;
  int iVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  FILE *pFVar9;
  int iVar10;
  uint *puVar11;
  bool bVar12;
  longlong lVar13;
  char *local_44;
  char *local_40;
  char *local_3c;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  
  local_38 = 0;
  iVar10 = DAT_0001fa28 + 0x1f796;
  puVar11 = *(uint **)(iVar10 + DAT_0001fa2c);
  if ((int)(*puVar11 << 0x17) < 0) {
    pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001fa30);
    _Var1 = getpid();
    fprintf(pFVar9,(char *)(DAT_0001fa38 + 0x1f7bc),_Var1,DAT_0001fa3c + 0x1f7be,
            DAT_0001fa34 + 0x1f7b6);
    FUN_0001eb70(DAT_0001fa40 + 0x1f7ce);
  }
  iVar2 = FUN_0003335c(param_3,param_4,0);
  if (iVar2 == 0) {
    if ((int)(*puVar11 << 0x17) < 0) {
      pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001fa30);
      _Var1 = getpid();
      fprintf(pFVar9,(char *)(DAT_0001fa48 + 0x1f806),_Var1,DAT_0001fa4c + 0x1f808,
              DAT_0001fa44 + 0x1f800);
      FUN_0001eb70(DAT_0001fa50 + 0x1f814);
      return 0;
    }
  }
  else {
    pcVar3 = (char *)FUN_00032a20(iVar2,&local_30,DAT_0001fa54 + 0x1f826);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = (char *)FUN_00032a20(iVar2,&local_38,DAT_0001fa58 + 0x1f838);
      if (pcVar4 == (char *)0x0) {
        lVar7 = 0;
        pcVar3 = pcVar4;
      }
      else {
        local_44 = pcVar3;
        FUN_000327fa(iVar2,&local_44,DAT_0001fa5c + 0x1f84c);
        local_40 = local_44;
        lVar7 = 0;
        if (((local_44 != (char *)0x0) &&
            (__s1 = strsep(&local_40,(char *)(DAT_0001fa60 + 0x1f85c)), __s1 != (char *)0x0)) &&
           (iVar5 = strncasecmp(__s1,(char *)(DAT_0001fa64 + 0x1f86a),4), iVar5 == 0)) {
          local_3c = pcVar3;
          piVar6 = __errno_location();
          *piVar6 = 0;
          lVar7 = strtol(__s1 + 4,&local_3c,10);
          if (*piVar6 == 0) {
            if (local_3c == __s1) {
              lVar7 = 0;
            }
            else if (local_3c == (char *)0x0) {
              pcVar4 = (char *)0x0;
            }
            else if (*local_3c == '\0') {
              pcVar4 = (char *)0x0;
            }
            else {
              lVar7 = 0;
            }
          }
          else {
            lVar7 = 0;
          }
        }
        free(local_44);
        pcVar3 = pcVar4;
      }
    }
    else {
      lVar7 = 0;
    }
    FUN_00031e34(iVar2);
    if (pcVar3 == (char *)0x0) {
      if (lVar7 == 0) {
        if ((*puVar11 & 0x100) != 0) {
          pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001fa30);
          _Var1 = getpid();
          fprintf(pFVar9,(char *)(DAT_0001fa7c + 0x1f97a),_Var1,DAT_0001fa80 + 0x1f97c,
                  DAT_0001fa78 + 0x1f974);
          FUN_0001eb70(DAT_0001fa84 + 0x1f988);
        }
        for (iVar2 = 0; iVar2 < *(int *)(param_1 + 8); iVar2 = iVar2 + 1) {
          iVar5 = iVar2 * 0xf8 + *(int *)(param_1 + 0x10);
          lVar13 = blkid_partition_get_start(iVar5);
          if ((lVar13 == local_38) &&
             (lVar13 = blkid_partition_get_size(iVar5), lVar13 == CONCAT44(iStack_2c,local_30))) {
            return iVar5;
          }
          lVar13 = blkid_partition_get_start(iVar5);
          if ((lVar13 == local_38) && (iVar8 = blkid_partition_is_extended(iVar5), iVar8 != 0)) {
            bVar12 = iStack_2c == 0;
            if (iStack_2c == 0) {
              bVar12 = local_30 < 0x401;
            }
            if (bVar12) {
              return iVar5;
            }
          }
        }
        if ((int)(*puVar11 << 0x17) < 0) {
          pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001fa30);
          _Var1 = getpid();
          fprintf(pFVar9,(char *)(DAT_0001fa8c + 0x1f9be),_Var1,DAT_0001fa90 + 0x1f9c0,
                  DAT_0001fa88 + 0x1f9b8);
          FUN_0001eb70(DAT_0001fa94 + 0x1f9cc);
        }
      }
      else {
        if ((*puVar11 & 0x100) != 0) {
          pFVar9 = (FILE *)**(undefined4 **)(iVar10 + DAT_0001fa30);
          _Var1 = getpid();
          fprintf(pFVar9,(char *)(DAT_0001fa6c + 0x1f8e4),_Var1,DAT_0001fa70 + 0x1f8e6,
                  DAT_0001fa68 + 0x1f8de);
          FUN_0001eb70(DAT_0001fa74 + 0x1f8f4,lVar7);
        }
        for (iVar10 = 0; iVar10 < *(int *)(param_1 + 8); iVar10 = iVar10 + 1) {
          iVar5 = iVar10 * 0xf8 + *(int *)(param_1 + 0x10);
          iVar2 = blkid_partition_get_partno(iVar5);
          if (iVar2 == lVar7) {
            lVar13 = blkid_partition_get_size(iVar5);
            if (lVar13 == CONCAT44(iStack_2c,local_30)) {
              return iVar5;
            }
            iVar2 = blkid_partition_is_extended(iVar5);
            if (iVar2 != 0) {
              bVar12 = iStack_2c == 0;
              if (iStack_2c == 0) {
                bVar12 = local_30 < 0x401;
              }
              if (bVar12) {
                return iVar5;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



/* ===== blkid_partition_get_type @ 0001fa98 size=4 ===== */

undefined4 blkid_partition_get_type(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* ===== FUN_0001fa9c @ 0001fa9c size=34 ===== */

undefined4 FUN_0001fa9c(int param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  if (0x23 < param_3) {
    param_3 = 0x24;
  }
  pvVar1 = memcpy((void *)(param_1 + 0x14),param_2,param_3);
  *(undefined1 *)((int)pvVar1 + param_3) = 0;
  FUN_0001a216();
  return 0;
}



/* ===== FUN_0001fabe @ 0001fabe size=20 ===== */

undefined4 FUN_0001fabe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0001a1a6(param_2,param_1 + 0x14,0x25,param_2,param_4);
  return 0;
}



/* ===== blkid_partition_get_type_string @ 0001fad2 size=14 ===== */

int blkid_partition_get_type_string(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    return param_1 + 0x14;
  }
  return 0;
}



/* ===== blkid_partition_get_flags @ 0001fae8 size=6 ===== */

undefined8 blkid_partition_get_flags(int param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* ===== FUN_0001faee @ 0001faee size=1028 ===== */

char * FUN_0001faee(int param_1,int param_2)

{
  __pid_t _Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  void *pvVar9;
  char *pcVar10;
  FILE *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong __dev;
  
  iVar13 = DAT_0001fef4 + 0x1fb00;
  if ((param_1 == 0) || (*(int *)(param_2 + 0x10) < -1)) {
    return (char *)0xffffffea;
  }
  FUN_00018e58();
  if (*(int *)(param_1 + 0x30) << 0x1b < 0) {
    return (char *)0x1;
  }
  puVar14 = *(uint **)(iVar13 + DAT_0001fef8);
  if (*(int *)(param_2 + 0xc) != 0) {
    pvVar9 = *(void **)(param_2 + 0x18);
    if (pvVar9 == (void *)0x0) {
      pvVar9 = calloc(1,0x1c);
      if (pvVar9 == (void *)0x0) goto LAB_0001fb6e;
      *(void **)(param_2 + 0x18) = pvVar9;
    }
    FUN_0001ebf8(pvVar9);
    if ((int)(*puVar14 << 0x17) < 0) {
      pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001fefc);
      _Var1 = getpid();
      fprintf(pFVar11,(char *)(DAT_0001ff04 + 0x1fb5c),_Var1,DAT_0001ff08 + 0x1fb5e,
              DAT_0001ff00 + 0x1fb56);
      FUN_0001eb70(DAT_0001ff0c + 0x1fb6c,*(undefined4 *)((int)pvVar9 + 0xc));
    }
  }
LAB_0001fb6e:
  if ((*(int *)(param_1 + 0x44) == 0 && *(int *)(param_1 + 0x40) == 0) &&
     (*(int *)(param_1 + 0x34) << 0x1e < 0)) {
    pcVar10 = (char *)0x1;
  }
  else {
    if ((int)(*puVar14 << 0x17) < 0) {
      pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001fefc);
      _Var1 = getpid();
      fprintf(pFVar11,(char *)(DAT_0001ff14 + 0x1fba0),_Var1,DAT_0001ff18 + 0x1fba2,
              DAT_0001ff10 + 0x1fb9a);
      FUN_0001eb70(DAT_0001ff1c + 0x1fbb0,*(undefined4 *)(param_2 + 0x10));
    }
    iVar2 = DAT_0001ff20;
    pcVar10 = (char *)0x1;
    if (*(int *)(param_2 + 0x10) < 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(int *)(param_2 + 0x10) + 1;
    }
    for (; pcVar5 = pcVar10, uVar12 < 0xd; uVar12 = uVar12 + 1) {
      *(uint *)(param_2 + 0x10) = uVar12;
      if ((*(uint **)(param_2 + 0x14) == (uint *)0x0) ||
         (-1 < (int)((**(uint **)(param_2 + 0x14) >> (uVar12 & 0xff)) << 0x1f))) {
        pcVar10 = (char *)FUN_0001ecce(param_1,*(undefined4 *)(iVar2 + 0x1fbc4 + uVar12 * 4),param_2
                                      );
        pcVar5 = pcVar10;
        if ((int)pcVar10 < 0) break;
        if (pcVar10 == (char *)0x0) {
          pcVar5 = (char *)**(undefined4 **)(iVar2 + 0x1fbc4 + uVar12 * 4);
          if (*(int *)(param_2 + 0xc) == 0) {
            sVar6 = strlen(pcVar5);
            FUN_00019b54(param_1,DAT_0001ff34 + 0x1fc36,pcVar5,sVar6 + 1);
          }
          if ((*puVar14 & 0x100) == 0) {
            pcVar10 = (char *)0x0;
            goto LAB_0001fcbe;
          }
          pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001fefc);
          _Var1 = getpid();
          fprintf(pFVar11,(char *)(DAT_0001ff3c + 0x1fc64),_Var1,DAT_0001ff40 + 0x1fc66,
                  DAT_0001ff38 + 0x1fc5e);
          uVar8 = *(undefined4 *)(param_2 + 0x10);
          iVar2 = DAT_0001ff44 + 0x1fc76;
          goto LAB_0001fc74;
        }
      }
    }
    pcVar10 = pcVar5;
    if ((int)(*puVar14 << 0x17) < 0) {
      pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001fefc);
      _Var1 = getpid();
      fprintf(pFVar11,(char *)(DAT_0001ff28 + 0x1fbec),_Var1,DAT_0001ff2c + 0x1fbee,
              DAT_0001ff24 + 0x1fbe6);
      uVar8 = *(undefined4 *)(param_2 + 0x10);
      iVar2 = DAT_0001ff30 + 0x1fbfe;
LAB_0001fc74:
      FUN_0001eb70(iVar2,pcVar5,uVar8);
    }
    pcVar5 = pcVar10;
    if ((char *)0x1 < pcVar10) goto LAB_0001fc7c;
  }
LAB_0001fcbe:
  pcVar5 = pcVar10;
  if ((*(int *)(param_2 + 0xc) != 0) || (iVar2 = FUN_0001eff8(param_1), -1 < iVar2 << 0x1d))
  goto LAB_0001fc7c;
  if ((int)(*puVar14 << 0x17) < 0) {
    pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001fefc);
    _Var1 = getpid();
    fprintf(pFVar11,(char *)(DAT_0001ff5c + 0x1fcf0),_Var1,DAT_0001ff60 + 0x1fcf2,
            DAT_0001ff58 + 0x1fcea);
    FUN_0001eb70(DAT_0001ff64 + 0x1fcfe);
  }
  if (*(int *)(param_1 + 0x30) << 0x1b < 0) {
LAB_0001feb2:
    if ((int)(*puVar14 << 0x17) < 0) {
      pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001fefc);
      _Var1 = getpid();
      fprintf(pFVar11,(char *)(DAT_0001ffb8 + 0x1fed4),_Var1,DAT_0001ffbc + 0x1fed6,
              DAT_0001ffb4 + 0x1fece);
      FUN_0001eb70(DAT_0001ffc0 + 0x1fee2);
    }
    pcVar5 = (char *)0x1;
  }
  else {
    lVar15 = blkid_probe_get_devno(param_1);
    if ((lVar15 == 0) || (iVar2 = FUN_0001b2f0(param_1), iVar2 == 0)) goto LAB_0001feb2;
    uVar16 = blkid_probe_get_partitions();
    if (((int)uVar16 == 0) ||
       (iVar3 = blkid_partlist_devno_to_partition
                          ((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)lVar15,
                           (int)((ulonglong)lVar15 >> 0x20)), iVar3 == 0)) goto LAB_0001feb2;
    iVar4 = blkid_partition_get_table();
    __dev = blkid_probe_get_devno(iVar2);
    if ((iVar4 != 0) && (pcVar5 = (char *)blkid_parttable_get_type(iVar4), pcVar5 != (char *)0x0)) {
      sVar6 = strlen(pcVar5);
      FUN_00019b54(param_1,DAT_0001ff68 + 0x1fd6c,pcVar5,sVar6 + 1);
    }
    pcVar5 = (char *)blkid_partition_get_name(iVar3);
    if (pcVar5 != (char *)0x0) {
      sVar6 = strlen(pcVar5);
      FUN_00019b54(param_1,DAT_0001ff6c + 0x1fd88,pcVar5,sVar6 + 1);
    }
    pcVar5 = (char *)blkid_partition_get_uuid(iVar3);
    if (pcVar5 != (char *)0x0) {
      sVar6 = strlen(pcVar5);
      FUN_00019b54(param_1,DAT_0001ff70 + 0x1fda4,pcVar5,sVar6 + 1);
    }
    pcVar5 = (char *)blkid_partition_get_type_string(iVar3);
    if (pcVar5 == (char *)0x0) {
      uVar8 = blkid_partition_get_type(iVar3);
      FUN_00019baa(param_1,DAT_0001ffb0 + 0x1feaa,DAT_0001ffac + 0x1fea8,uVar8);
    }
    else {
      sVar6 = strlen(pcVar5);
      FUN_00019b54(param_1,DAT_0001ff74 + 0x1fdc2,pcVar5,sVar6 + 1);
    }
    lVar15 = blkid_partition_get_flags(iVar3);
    if (lVar15 != 0) {
      blkid_partition_get_flags(iVar3);
      FUN_00019baa(param_1,DAT_0001ff7c + 0x1fdea,DAT_0001ff78 + 0x1fde0);
    }
    iVar2 = DAT_0001ff80;
    uVar8 = blkid_partition_get_partno(iVar3);
    FUN_00019baa(param_1,DAT_0001ff88 + 0x1fe00,DAT_0001ff84 + 0x1fdfe,uVar8);
    blkid_partition_get_start(iVar3);
    FUN_00019baa(param_1,DAT_0001ff8c + 0x1fe1a,iVar2 + 0x1fdfc);
    blkid_partition_get_size(iVar3);
    uVar8 = extraout_r1;
    FUN_00019baa(param_1,DAT_0001ff90 + 0x1fe30,iVar2 + 0x1fdfc);
    uVar12 = gnu_dev_major(__dev);
    uVar7 = gnu_dev_minor(__dev);
    FUN_00019baa(param_1,DAT_0001ff98 + 0x1fe50,DAT_0001ff94 + 0x1fe4e,uVar12,uVar7,uVar8);
    pcVar5 = (char *)0x0;
    if ((*puVar14 & 0x100) != 0) {
      pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001fefc);
      _Var1 = getpid();
      fprintf(pFVar11,(char *)(DAT_0001ffa0 + 0x1fe7a),_Var1,DAT_0001ffa4 + 0x1fe7c,
              DAT_0001ff9c + 0x1fe74);
      FUN_0001eb70(DAT_0001ffa8 + 0x1fe88);
      pcVar5 = (char *)0x0;
    }
  }
  if (pcVar10 != (char *)0x1) {
    pcVar5 = (char *)0x0;
  }
LAB_0001fc7c:
  if ((int)(*puVar14 << 0x17) < 0) {
    pFVar11 = (FILE *)**(undefined4 **)(iVar13 + DAT_0001fefc);
    _Var1 = getpid();
    fprintf(pFVar11,(char *)(DAT_0001ff4c + 0x1fc9e),_Var1,DAT_0001ff50 + 0x1fca0,
            DAT_0001ff48 + 0x1fc98);
    FUN_0001eb70(DAT_0001ff54 + 0x1fcae,pcVar5);
  }
  return pcVar5;
}



/* ===== FUN_000209d6 @ 000209d6 size=190 ===== */

void FUN_000209d6(undefined4 param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *param_3;
  if (param_4 == 0) {
    uVar2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
            uVar2 >> 0x18;
  }
  uVar7 = *(uint *)(param_2 + 0x4c);
  if (param_4 == 0) {
    uVar7 = uVar7 >> 0x18;
  }
  uVar3 = uVar2 << (uVar7 & 0xff);
  uVar1 = *(uint *)(param_2 + 0x2c);
  if (param_4 == 0) {
    uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
            uVar1 >> 0x18;
  }
  uVar4 = uVar3 << (uVar1 & 0xff);
  uVar5 = (ushort)param_3[1];
  if (param_4 == 0) {
    uVar5 = uVar5 << 8 | uVar5 >> 8;
  }
  uVar8 = (uint)uVar5 << (uVar1 & 0xff);
  uVar6 = *(ushort *)((int)param_3 + 6);
  if (param_4 == 0) {
    uVar6 = uVar6 << 8 | uVar6 >> 8;
  }
  FUN_00019554(param_1,uVar1,uVar4 + uVar8,
               ((0 << (uVar7 & 0xff) | uVar2 << (uVar7 - 0x20 & 0xff) |
                uVar2 >> (0x20 - uVar7 & 0xff)) << (uVar1 & 0xff) | uVar3 << (uVar1 - 0x20 & 0xff) |
               uVar3 >> (0x20 - uVar1 & 0xff)) +
               (0 << (uVar1 & 0xff) | (uint)uVar5 << (uVar1 - 0x20 & 0xff) |
               (uint)(uVar5 >> (0x20 - uVar1 & 0xff))) + (uint)CARRY4(uVar4,uVar8),
               (uint)uVar6 << (uVar1 & 0xff),
               0 << (uVar1 & 0xff) | (uint)uVar6 << (uVar1 - 0x20 & 0xff) |
               (uint)(uVar6 >> (0x20 - uVar1 & 0xff)),param_3);
  return;
}



/* ===== FUN_00020a94 @ 00020a94 size=1068 ===== */

undefined4
FUN_00020a94(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
            uint param_6,int param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  uint extraout_r2_00;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_r3;
  int extraout_r3_00;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  uint local_50;
  int iStack_4c;
  
  local_50 = (uint)param_5;
  iStack_4c = param_5._4_4_;
  uVar2 = *(uint *)(param_3 + 0x60);
  uVar5 = *(uint *)(param_3 + 100);
  if (param_7 == 0) {
    uVar3 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18;
    uVar5 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
            uVar2 >> 0x18;
    if ((int)((param_5._4_4_ - uVar5) - (uint)((uint)param_5 < uVar3)) < 0 !=
        (SBORROW4(param_5._4_4_,uVar5) !=
        SBORROW4(param_5._4_4_ - uVar5,(uint)((uint)param_5 < uVar3)))) goto LAB_00020af2;
    uVar10 = *(uint *)(param_3 + 0x70);
    uVar2 = *(uint *)(param_3 + 0x74);
    uVar11 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18;
    uVar10 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
             uVar2 >> 0x18;
    uVar2 = uVar3;
    if ((int)((param_5._4_4_ - uVar11) - (uint)((uint)param_5 < uVar10)) < 0 !=
        (SBORROW4(param_5._4_4_,uVar11) !=
        SBORROW4(param_5._4_4_ - uVar11,(uint)((uint)param_5 < uVar10)))) goto LAB_00020cdc;
    uVar5 = *(uint *)(param_3 + 0x80);
    uVar2 = *(uint *)(param_3 + 0x84);
    uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18;
    uVar2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
            uVar2 >> 0x18;
  }
  else {
    if ((int)((param_5._4_4_ - uVar5) - (uint)((uint)param_5 < uVar2)) < 0 !=
        (SBORROW4(param_5._4_4_,uVar5) !=
        SBORROW4(param_5._4_4_ - uVar5,(uint)((uint)param_5 < uVar2)))) {
LAB_00020af2:
      iVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(param_3 + iVar7 * 8 + 6);
        uVar2 = *(uint *)(param_2 + 0x2c);
        if (param_7 == 0) {
          uVar9 = uVar9 << 8 | uVar9 >> 8;
          uVar2 = *(uint *)(param_2 + 0x2c) >> 0x18;
        }
        uVar5 = 0 << (uVar2 & 0xff) | (uint)uVar9 << (uVar2 - 0x20 & 0xff) |
                (uint)(uVar9 >> (0x20 - uVar2 & 0xff));
        uVar2 = (uint)uVar9 << (uVar2 & 0xff);
        if ((int)((iStack_4c - uVar5) - (uint)(local_50 < uVar2)) < 0 !=
            (SBORROW4(iStack_4c,uVar5) != SBORROW4(iStack_4c - uVar5,(uint)(local_50 < uVar2))))
        break;
        iVar7 = iVar7 + 1;
        bVar14 = local_50 < uVar2;
        local_50 = local_50 - uVar2;
        iStack_4c = (iStack_4c - uVar5) - (uint)bVar14;
        if (iVar7 == 0xc) {
          return 0;
        }
      }
      puVar4 = (uint *)(iVar7 * 8 + param_3);
      param_5._0_4_ = local_50;
      param_5._4_4_ = iStack_4c;
      goto LAB_000208e0;
    }
    uVar10 = *(uint *)(param_3 + 0x70);
    uVar11 = *(uint *)(param_3 + 0x74);
    if ((int)((param_5._4_4_ - uVar11) - (uint)((uint)param_5 < uVar10)) < 0 !=
        (SBORROW4(param_5._4_4_,uVar11) !=
        SBORROW4(param_5._4_4_ - uVar11,(uint)((uint)param_5 < uVar10)))) {
LAB_00020cdc:
      uVar9 = *(ushort *)(param_3 + 0x6e);
      bVar14 = (uint)param_5 < uVar2;
      param_5._0_4_ = (uint)param_5 - uVar2;
      param_5._4_4_ = (param_5._4_4_ - uVar5) - (uint)bVar14;
      uVar2 = *(uint *)(param_2 + 0x2c);
      if (param_7 == 0) {
        uVar9 = uVar9 << 8 | uVar9 >> 8;
        uVar2 = uVar2 >> 0x18;
      }
      uVar5 = (uint)uVar9 << (uVar2 & 0xff);
      uVar2 = 0 << (uVar2 & 0xff) | (uint)uVar9 << (uVar2 - 0x20 & 0xff) |
              (uint)(uVar9 >> (0x20 - uVar2 & 0xff));
      if ((int)uVar2 < 0) {
        bVar14 = 0xfffffff8 < uVar5;
        uVar5 = uVar5 + 7;
        uVar2 = uVar2 + bVar14;
      }
      iVar8 = (int)uVar2 >> 3;
      iVar7 = FUN_000209d6(param_1,param_2,param_3 + 0x68,param_7);
      if (iVar7 == 0) {
        return 0;
      }
      uVar3 = 0;
      iVar12 = 0;
      while( true ) {
        bVar14 = uVar3 < (uVar5 >> 3 | uVar2 << 0x1d);
        if ((int)((iVar12 - iVar8) - (uint)bVar14) < 0 ==
            (SBORROW4(iVar12,iVar8) != SBORROW4(iVar12 - iVar8,(uint)bVar14))) {
          return 0;
        }
        puVar4 = (uint *)(iVar7 + uVar3 * 8);
        uVar10 = *(uint *)(param_2 + 0x2c);
        uVar9 = *(ushort *)((int)puVar4 + 6);
        if (param_7 == 0) {
          uVar9 = uVar9 << 8 | uVar9 >> 8;
          uVar10 = uVar10 >> 0x18;
        }
        uVar11 = (uint)uVar9 << (uVar10 & 0xff);
        uVar10 = 0 << (uVar10 & 0xff) | (uint)uVar9 << (uVar10 - 0x20 & 0xff) |
                 (uint)(uVar9 >> (0x20 - uVar10 & 0xff));
        if ((int)((param_5._4_4_ - uVar10) - (uint)((uint)param_5 < uVar11)) < 0 !=
            (SBORROW4(param_5._4_4_,uVar10) !=
            SBORROW4(param_5._4_4_ - uVar10,(uint)((uint)param_5 < uVar11)))) break;
        bVar14 = (uint)param_5 < uVar11;
        param_5._0_4_ = (uint)param_5 - uVar11;
        param_5._4_4_ = (param_5._4_4_ - uVar10) - (uint)bVar14;
        bVar14 = 0xfffffffe < uVar3;
        uVar3 = uVar3 + 1;
        iVar12 = iVar12 + (uint)bVar14;
      }
      goto LAB_000208e0;
    }
    uVar2 = *(uint *)(param_3 + 0x80);
    uVar5 = *(uint *)(param_3 + 0x84);
  }
  if ((int)((param_5._4_4_ - uVar5) - (uint)((uint)param_5 < uVar2)) < 0 !=
      (SBORROW4(param_5._4_4_,uVar5) !=
      SBORROW4(param_5._4_4_ - uVar5,(uint)((uint)param_5 < uVar2)))) {
    uVar2 = *(uint *)(param_2 + 0x2c);
    uVar9 = *(ushort *)(param_3 + 0x7e);
    if (param_7 == 0) {
      uVar9 = uVar9 << 8 | uVar9 >> 8;
      uVar2 = uVar2 >> 0x18;
    }
    uVar5 = 0 << (uVar2 & 0xff) | (uint)uVar9 << (uVar2 - 0x20 & 0xff) |
            (uint)(uVar9 >> (0x20 - uVar2 & 0xff));
    uVar2 = (uint)uVar9 << (uVar2 & 0xff);
    if (uVar5 != 0 || uVar2 != 0) {
      uVar3 = uVar2;
      uVar6 = uVar5;
      if ((int)uVar5 < 0) {
        uVar3 = uVar2 + 7;
        uVar6 = uVar5 + (0xfffffff8 < uVar2);
      }
      uVar3 = uVar3 >> 3 | uVar6 << 0x1d;
      iVar7 = (int)uVar6 >> 3;
      if (iVar7 != 0 || uVar3 != 0) {
        uVar15 = FUN_00034284((uint)param_5 - uVar10,
                              (param_5._4_4_ - uVar11) - (uint)((uint)param_5 < uVar10),
                              (int)((ulonglong)uVar2 * (ulonglong)uVar3),
                              (int)((ulonglong)uVar2 * (ulonglong)uVar3 >> 0x20) +
                              uVar3 * uVar5 + uVar2 * iVar7);
        iVar8 = (int)((ulonglong)uVar15 >> 0x20);
        uVar10 = (uint)uVar15;
        if (((int)((iVar8 - iVar7) - (uint)(uVar10 < uVar3)) < 0 !=
             (SBORROW4(iVar8,iVar7) != SBORROW4(iVar8 - iVar7,(uint)(uVar10 < uVar3)))) &&
           (iVar7 = FUN_000209d6(param_1,param_2,param_3 + 0x78,param_7), iVar7 != 0)) {
          iVar7 = iVar7 + uVar10 * 8;
          uVar3 = *(uint *)(param_2 + 0x2c);
          uVar9 = *(ushort *)(iVar7 + 6);
          if (param_7 == 0) {
            uVar9 = uVar9 << 8 | uVar9 >> 8;
            uVar3 = uVar3 >> 0x18;
          }
          uVar15 = FUN_00034284(extraout_r2,extraout_r3,uVar2,uVar5);
          iVar8 = (int)((ulonglong)uVar15 >> 0x20);
          uVar2 = (uint)uVar15;
          uVar5 = (uint)uVar9 << (uVar3 & 0xff);
          uVar3 = 0 << (uVar3 & 0xff) | (uint)uVar9 << (uVar3 - 0x20 & 0xff) |
                  (uint)(uVar9 >> (0x20 - uVar3 & 0xff));
          if ((int)uVar3 < 0) {
            bVar14 = 0xfffffff8 < uVar5;
            uVar5 = uVar5 + 7;
            uVar3 = uVar3 + bVar14;
          }
          iVar12 = (int)uVar3 >> 3;
          bVar14 = uVar2 < (uVar5 >> 3 | uVar3 << 0x1d);
          if (((int)((iVar8 - iVar12) - (uint)bVar14) < 0 !=
               (SBORROW4(iVar8,iVar12) != SBORROW4(iVar8 - iVar12,(uint)bVar14))) &&
             (iVar7 = FUN_000209d6(param_1,param_2,iVar7,param_7), iVar7 != 0)) {
            puVar4 = (uint *)(iVar7 + uVar2 * 8);
            param_5._0_4_ = extraout_r2_00;
            param_5._4_4_ = extraout_r3_00;
LAB_000208e0:
            uVar2 = *(uint *)(param_2 + 0x2c);
            uVar9 = *(ushort *)((int)puVar4 + 6);
            iVar7 = param_5._4_4_ + (uint)CARRY4((uint)param_5,param_6);
            if (param_7 == 0) {
              uVar9 = uVar9 << 8 | uVar9 >> 8;
              uVar2 = uVar2 >> 0x18;
            }
            uVar5 = 0 << (uVar2 & 0xff) | (uint)uVar9 << (uVar2 - 0x20 & 0xff) |
                    (uint)(uVar9 >> (0x20 - uVar2 & 0xff));
            bVar14 = (uint)uVar9 << (uVar2 & 0xff) < (uint)param_5 + param_6;
            if ((int)((uVar5 - iVar7) - (uint)bVar14) < 0 ==
                (SBORROW4(uVar5,iVar7) != SBORROW4(uVar5 - iVar7,(uint)bVar14))) {
              uVar5 = *puVar4;
              if (param_7 == 0) {
                uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                        uVar5 >> 0x18;
              }
              uVar3 = *(uint *)(param_2 + 0x4c);
              if (param_7 == 0) {
                uVar3 = uVar3 >> 0x18;
              }
              uVar10 = uVar5 << (uVar3 & 0xff);
              uVar11 = uVar10 << (uVar2 & 0xff);
              uVar9 = (ushort)puVar4[1];
              if (param_7 == 0) {
                uVar9 = uVar9 << 8 | uVar9 >> 8;
              }
              uVar13 = (uint)param_5 + uVar11;
              uVar6 = (uint)uVar9 << (uVar2 & 0xff);
              uVar1 = FUN_00019554(param_1,0,uVar13 + uVar6,
                                   param_5._4_4_ +
                                   ((0 << (uVar3 & 0xff) | uVar5 << (uVar3 - 0x20 & 0xff) |
                                    uVar5 >> (0x20 - uVar3 & 0xff)) << (uVar2 & 0xff) |
                                    uVar10 << (uVar2 - 0x20 & 0xff) |
                                   uVar10 >> (0x20 - uVar2 & 0xff)) +
                                   (uint)CARRY4((uint)param_5,uVar11) +
                                   (0 << (uVar2 & 0xff) | (uint)uVar9 << (uVar2 - 0x20 & 0xff) |
                                   (uint)(uVar9 >> (0x20 - uVar2 & 0xff))) +
                                   (uint)CARRY4(uVar13,uVar6));
              return uVar1;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_000215f0 @ 000215f0 size=278 ===== */

uint FUN_000215f0(int param_1)

{
  bool bVar1;
  int *piVar2;
  void *__s1;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint local_3c [4];
  undefined1 local_2c;
  
  iVar3 = DAT_00021714;
  uVar11 = DAT_00021708;
  local_3c[0] = 1;
  local_3c[1] = 0x101;
  if (*(int *)(param_1 + 0x14) != 0 || &UNK_0002ffff < *(undefined **)(param_1 + 0x10)) {
    bVar1 = false;
    puVar10 = local_3c;
    while( true ) {
      uVar6 = *puVar10;
      uVar4 = *(uint *)(param_1 + 0x10) >> 9 | *(uint *)(param_1 + 0x14) << 0x17;
      uVar9 = (((*(uint *)(param_1 + 0x14) >> 9) - ((int)uVar6 >> 0x1f)) - (uint)(uVar4 < uVar6)) *
              0x200 | uVar4 - uVar6 >> 0x17;
      iVar8 = (uVar4 - uVar6) * 0x200;
      piVar2 = (int *)FUN_00019554(param_1,uVar4,iVar8,uVar9,uVar11);
      if (piVar2 == (int *)0x0) break;
      iVar5 = *piVar2;
      if ((iVar5 == iVar3) || (iVar5 == DAT_00021710)) {
        uVar6 = piVar2[0x18];
        uVar7 = piVar2[0x19];
        uVar4 = uVar7;
        if (iVar5 == iVar3) {
          uVar4 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                  uVar6 >> 0x18;
          uVar6 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                  uVar7 >> 0x18;
        }
        if (uVar6 != 0 || uVar4 != 0) {
          __s1 = (void *)FUN_00019554(param_1,0,uVar6 << 9,uVar4 << 9 | uVar6 >> 0x17,4,0);
          if (__s1 == (void *)0x0) break;
          iVar3 = memcmp(__s1,piVar2,4);
          if (iVar3 != 0) {
            return 1;
          }
        }
        FUN_00024fc4(param_1,piVar2 + 2,0x18);
        local_3c[2] = piVar2[8];
        local_3c[3] = piVar2[9];
        local_2c = 0;
        uVar11 = FUN_00024d00(param_1,local_3c + 2);
        if ((int)uVar11 != 0) {
          return 1;
        }
        iVar3 = FUN_00019bc4(param_1,(int)((ulonglong)uVar11 >> 0x20),iVar8,uVar9,4,piVar2);
        return (uint)(iVar3 != 0);
      }
      if (bVar1) {
        return 1;
      }
      bVar1 = true;
      puVar10 = puVar10 + 1;
    }
    piVar2 = __errno_location();
    if (*piVar2 != 0) {
      return -*piVar2;
    }
  }
  return 1;
}



/* ===== FUN_0002459c @ 0002459c size=74 ===== */

void FUN_0002459c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_000245e8 + 0x245ae + DAT_000245ec);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_000245f0 @ 000245f0 size=958 ===== */

int FUN_000245f0(int param_1,int param_2)

{
  __pid_t _Var1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FILE *pFVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 *local_3c;
  undefined8 local_38;
  
  iVar11 = DAT_000249b0 + 0x24608;
  if (*(int *)(param_2 + 0x10) < -1) {
    return -0x16;
  }
  FUN_00018e58();
  piVar13 = *(int **)(iVar11 + DAT_000249b4);
  if ((*(uint *)(param_1 + 0x30) & 0x10) == 0) {
    iVar5 = *(int *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x10) != 0 || iVar5 != 0) {
      bVar14 = iVar5 == 0;
      if (iVar5 == 0) {
        bVar14 = *(uint *)(param_1 + 0x10) < 0x401;
      }
      if ((!bVar14) || ((*(uint *)(param_1 + 0x2c) & 0xf000) == 0x2000)) {
        if (*piVar13 << 0x17 < 0) {
          pFVar8 = (FILE *)**(undefined4 **)(iVar11 + DAT_000249b8);
          _Var1 = getpid();
          fprintf(pFVar8,(char *)(DAT_000249e0 + 0x246ca),_Var1,DAT_000249e4 + 0x246cc,
                  DAT_000249dc + 0x246c4);
          FUN_0002459c(DAT_000249e8 + 0x246dc,*(undefined4 *)(param_2 + 0x10));
        }
        iVar5 = 1;
        iVar6 = DAT_000249ec + 0x246f0;
        if (*(int *)(param_2 + 0x10) < 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(int *)(param_2 + 0x10) + 1;
        }
        iVar7 = DAT_000249f0 + 0x246fe;
        for (; iVar2 = iVar5, uVar10 < 0x4d; uVar10 = uVar10 + 1) {
          local_3c = (undefined4 *)0x0;
          local_38 = 0;
          *(uint *)(param_2 + 0x10) = uVar10;
          piVar12 = *(int **)(iVar6 + uVar10 * 4);
          if ((*(int *)(param_2 + 0x14) == 0) ||
             (-1 < (int)((*(uint *)(*(int *)(param_2 + 0x14) + (uVar10 >> 5) * 4) >> (uVar10 & 0x1f)
                         ) << 0x1f))) {
            if ((((piVar12[3] != 0) &&
                 (*(int *)(param_1 + 0x14) == 0 && *(uint *)(param_1 + 0x10) < (uint)piVar12[3])) ||
                (((piVar12[1] & 0x14U) != 0 && (iVar5 = FUN_0001954c(param_1), iVar5 != 0)))) ||
               ((piVar12[1] << 0x1d < 0 && (iVar5 = FUN_00019544(param_1), iVar5 != 0))))
            goto LAB_00024764;
            if (*piVar13 << 0x17 < 0) {
              pFVar8 = (FILE *)**(undefined4 **)(iVar11 + DAT_000249b8);
              _Var1 = getpid();
              fprintf(pFVar8,(char *)(DAT_00024a08 + 0x247ba),_Var1,DAT_00024a0c + 0x247bc,
                      DAT_00024a04 + 0x247b4);
              FUN_0002459c(DAT_00024a10 + 0x247ce,uVar10,*piVar12);
            }
            iVar5 = FUN_0001aa2a(param_1,piVar12,&local_38,&local_3c);
            iVar2 = iVar5;
            if (iVar5 < 0) break;
            if (iVar5 == 0) {
              if (piVar12[4] != 0) {
                if (*piVar13 << 0x17 < 0) {
                  pFVar8 = (FILE *)**(undefined4 **)(iVar11 + DAT_000249b8);
                  _Var1 = getpid();
                  fprintf(pFVar8,(char *)(DAT_00024a18 + 0x2480e),_Var1,DAT_00024a1c + 0x24810,
                          DAT_00024a14 + 0x24808);
                  FUN_0002459c(DAT_00024a20 + 0x2481c);
                }
                iVar2 = (*(code *)piVar12[4])(param_1,local_3c);
                if (iVar2 != 0) {
                  FUN_00018e58(param_1,param_2);
                  iVar5 = iVar2;
                  if (-1 < iVar2) goto LAB_0002483a;
                  break;
                }
              }
              if (-1 < *(int *)(param_2 + 8) << 0x1a) {
LAB_00024854:
                iVar2 = piVar12[1];
                uVar15 = FUN_0001905c(param_1);
                uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
                if (*(int *)((int)uVar15 + 8) << 0x18 < 0) {
                  if (iVar2 << 0x1e < 0) {
                    pcVar9 = (char *)(DAT_00024a4c + 0x2493e);
                  }
                  else if (iVar2 << 0x1d < 0) {
                    pcVar9 = (char *)(DAT_00024a50 + 0x24944);
                  }
                  else if (iVar2 << 0x1c < 0) {
                    pcVar9 = (char *)(DAT_00024a54 + 0x2494a);
                  }
                  else if (iVar2 << 0x1b < 0) {
                    pcVar9 = (char *)(DAT_00024a58 + 0x24950);
                  }
                  else {
                    pcVar9 = (char *)(DAT_00024a44 + 0x2491e);
                  }
                  sVar3 = strlen(pcVar9);
                  uVar15 = FUN_00019b54(param_1,DAT_00024a48 + 0x2492a,pcVar9,sVar3 + 1);
                  uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
                  iVar2 = (int)uVar15;
                  if (iVar2 != 0) goto LAB_000248ce;
                }
                if (local_3c != (undefined4 *)0x0) {
                  iVar2 = FUN_00019bc4(param_1,uVar4,(undefined4)local_38,local_38._4_4_,local_3c[1]
                                       ,*local_3c);
                  if (iVar2 != 0) goto LAB_000248ce;
                }
                if (-1 < *piVar13 << 0x17) {
                  return 0;
                }
                pFVar8 = (FILE *)**(undefined4 **)(iVar11 + DAT_000249b8);
                _Var1 = getpid();
                fprintf(pFVar8,(char *)(DAT_00024a28 + 0x2488c),_Var1,DAT_00024a2c + 0x2488e,
                        DAT_00024a24 + 0x24886);
                uVar4 = *(undefined4 *)(param_2 + 0x10);
                iVar2 = *piVar12;
                iVar11 = DAT_00024a30 + 0x248a2;
                goto LAB_000248a0;
              }
              pcVar9 = (char *)*piVar12;
              sVar3 = strlen(pcVar9);
              iVar2 = FUN_00019b54(param_1,DAT_00024a34 + 0x248c2,pcVar9,sVar3 + 1);
              if (iVar2 == 0) goto LAB_00024854;
LAB_000248ce:
              FUN_00018e58(param_1,param_2);
              iVar5 = iVar2;
              if (*piVar13 << 0x17 < 0) {
                pFVar8 = (FILE *)**(undefined4 **)(iVar11 + DAT_000249b8);
                _Var1 = getpid();
                fprintf(pFVar8,(char *)(DAT_00024a3c + 0x248f6),_Var1,iVar7,DAT_00024a38 + 0x248f2);
                FUN_0002459c(DAT_00024a40 + 0x24904);
              }
            }
          }
          else {
            if (*piVar13 << 0x17 < 0) {
              pFVar8 = (FILE *)**(undefined4 **)(iVar11 + DAT_000249b8);
              _Var1 = getpid();
              fprintf(pFVar8,(char *)(DAT_000249f8 + 0x24750),_Var1,DAT_000249fc + 0x24752,
                      DAT_000249f4 + 0x2474a);
              FUN_0002459c(DAT_00024a00 + 0x24762,*piVar12);
            }
LAB_00024764:
            iVar5 = 1;
          }
LAB_0002483a:
        }
        if (-1 < *piVar13 << 0x17) {
          return iVar2;
        }
        pFVar8 = (FILE *)**(undefined4 **)(iVar11 + DAT_000249b8);
        _Var1 = getpid();
        fprintf(pFVar8,(char *)(DAT_00024a60 + 0x24994),_Var1,DAT_00024a64 + 0x24996,
                DAT_00024a5c + 0x2498e);
        uVar4 = *(undefined4 *)(param_2 + 0x10);
        iVar11 = DAT_00024a68 + 0x249a8;
        iVar5 = iVar2;
LAB_000248a0:
        FUN_0002459c(iVar11,iVar2,uVar4);
        return iVar5;
      }
    }
    if (-1 < *piVar13 << 0x17) {
      return 1;
    }
    pFVar8 = (FILE *)**(undefined4 **)(iVar11 + DAT_000249b8);
    _Var1 = getpid();
    fprintf(pFVar8,(char *)(DAT_000249d0 + 0x2469a),_Var1,DAT_000249d4 + 0x2469c,
            DAT_000249cc + 0x24694);
    iVar11 = DAT_000249d8 + 0x246a8;
  }
  else {
    if (-1 < *piVar13 << 0x17) {
      return 1;
    }
    pFVar8 = (FILE *)**(undefined4 **)(iVar11 + DAT_000249b8);
    _Var1 = getpid();
    fprintf(pFVar8,(char *)(DAT_000249c0 + 0x24640),_Var1,DAT_000249c4 + 0x24642,
            DAT_000249bc + 0x2463a);
    iVar11 = DAT_000249c8 + 0x2464e;
  }
  FUN_0002459c(iVar11);
  return 1;
}



/* ===== blkid_probe_enable_superblocks @ 00024bb8 size=6 ===== */

undefined4 blkid_probe_enable_superblocks(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return 0;
}



/* ===== blkid_probe_set_superblocks_flags @ 00024bbe size=6 ===== */

undefined4 blkid_probe_set_superblocks_flags(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return 0;
}



/* ===== blkid_probe_reset_superblocks_filter @ 00024bc4 size=6 ===== */

int blkid_probe_reset_superblocks_filter
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000190fc(param_1,0,0,param_4,param_4);
  return -(uint)(iVar1 == 0);
}



/* ===== blkid_probe_invert_superblocks_filter @ 00024bca size=6 ===== */

undefined4 blkid_probe_invert_superblocks_filter(int param_1)

{
  __pid_t _Var1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  FILE *__stream;
  undefined4 uVar6;
  
  uVar6 = 0;
  iVar5 = DAT_000191c4 + 0x19162;
  if ((*(int *)(*(int *)(param_1 + 0x5c) + 0x10) == 0) ||
     (puVar4 = *(uint **)(param_1 + 0x70), puVar4 == (uint *)0x0)) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = puVar4 + (*(int *)(*(int *)(param_1 + 0x5c) + 0x18) + 0x20U >> 5);
    for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
      *puVar4 = ~*puVar4;
    }
    uVar2 = 0;
    if ((**(uint **)(iVar5 + DAT_000191c8) & 0x100) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000191cc);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_000191d4 + 0x1919c),_Var1,DAT_000191d8 + 0x1919e,
              DAT_000191d0 + 0x19196,uVar6);
      FUN_00018b88(DAT_000191dc + 0x191aa);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== blkid_probe_filter_superblocks_type @ 00024bd0 size=10 ===== */

undefined4 blkid_probe_filter_superblocks_type(int param_1,uint param_2,int param_3)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  FILE *__stream;
  int iVar9;
  int iVar10;
  
  iVar1 = FUN_000190fc(param_1,0,1);
  iVar9 = DAT_000192c8 + 0x1920c;
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x5c);
    uVar6 = *(uint *)(iVar10 + 0x18);
    for (uVar8 = 0; uVar6 != uVar8; uVar8 = uVar8 + 1) {
      puVar5 = *(undefined4 **)(*(int *)(iVar10 + 0x14) + uVar8 * 4);
      puVar7 = (undefined4 *)(param_3 + -4);
      do {
        puVar7 = puVar7 + 1;
        if ((char *)*puVar7 == (char *)0x0) {
          if ((param_2 & 2) == 0) goto LAB_000192be;
          goto LAB_000192aa;
        }
        iVar4 = strcmp((char *)*puVar5,(char *)*puVar7);
      } while (iVar4 != 0);
      if ((param_2 & 1) != 0) {
LAB_000192aa:
        *(uint *)(iVar1 + (uVar8 >> 5) * 4) =
             *(uint *)(iVar1 + (uVar8 >> 5) * 4) | 1 << (uVar8 & 0x1f);
      }
LAB_000192be:
    }
    uVar3 = 0;
    if ((**(uint **)(iVar9 + DAT_000192cc) & 0x100) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar9 + DAT_000192d0);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_000192d8 + 0x1925a),_Var2,DAT_000192dc + 0x1925c,
              DAT_000192d4 + 0x19254);
      FUN_00018b88(DAT_000192e0 + 0x1926e,*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== blkid_probe_filter_superblocks_usage @ 00024bda size=168 ===== */

undefined4
blkid_probe_filter_superblocks_usage(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  __pid_t _Var3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  FILE *__stream;
  uint uVar7;
  
  iVar6 = DAT_00024c84 + 0x24bec;
  iVar2 = FUN_000190fc(param_1,0,1,param_4,param_1,param_2);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c);
    uVar7 = *(uint *)(iVar2 + 0x18);
    for (uVar5 = 0; uVar5 != uVar7; uVar5 = uVar5 + 1) {
      uVar1 = param_2 & 2;
      if ((param_3 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x14) + uVar5 * 4) + 4)) != 0) {
        uVar1 = param_2 & 1;
      }
      if (uVar1 != 0) {
        *(uint *)(*(int *)(param_1 + 0x70) + (uVar5 >> 5) * 4) =
             *(uint *)(*(int *)(param_1 + 0x70) + (uVar5 >> 5) * 4) | 1 << (uVar5 & 0x1f);
      }
    }
    uVar4 = 0;
    if ((**(uint **)(iVar6 + DAT_00024c88) & 0x100) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_00024c8c);
      _Var3 = getpid();
      fprintf(__stream,(char *)(DAT_00024c94 + 0x24c30),_Var3,DAT_00024c98 + 0x24c32,
              DAT_00024c90 + 0x24c2a);
      FUN_0002459c(DAT_00024c9c + 0x24c3e);
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* ===== blkid_known_fstype @ 00024ca0 size=38 ===== */

undefined4 blkid_known_fstype(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)(DAT_00024cc8 + 0x24cac);
  do {
    iVar1 = strcmp(*(char **)*puVar3,param_1);
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0x4d);
  return 0;
}



/* ===== blkid_superblocks_get_name @ 00024ccc size=42 ===== */

undefined4 blkid_superblocks_get_name(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 < 0x4d) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(DAT_00024cf8 + 0x24cd8 + param_1 * 4);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(*(int *)(DAT_00024cfc + 0x24ce6 + param_1 * 4) + 4);
    }
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_00024d00 @ 00024d00 size=44 ===== */

void FUN_00024d00(undefined4 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = FUN_0001905c();
  if ((*(uint *)(iVar1 + 8) & 0x100) != 0) {
    sVar2 = strlen(param_2);
    FUN_00019b54(param_1,DAT_00024d2c + 0x24d20,param_2,sVar2 + 1);
    return;
  }
  return;
}



/* ===== FUN_00024fc4 @ 00024fc4 size=138 ===== */

int FUN_00024fc4(undefined4 param_1,char *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0001905c();
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return -0x16;
  }
  if (param_3 == 0) {
    param_3 = strlen(param_2);
  }
  iVar2 = 0;
  if (((*(uint *)(iVar1 + 8) & 0x10) != 0) &&
     (iVar2 = FUN_00019b54(param_1,DAT_00025050 + 0x24ffa,param_2,param_3), iVar2 < 0)) {
    return iVar2;
  }
  if (*(int *)(iVar1 + 8) << 0x1c < 0) {
    iVar1 = FUN_00019aa2(param_1,DAT_00025054 + 0x25018);
    if (iVar1 == 0) {
      iVar2 = -0xc;
    }
    else if ((iVar2 == 0) && (iVar2 = FUN_00019b2c(iVar1,param_2,param_3), iVar2 == 0)) {
      iVar3 = FUN_0001a216(*(undefined4 *)(iVar1 + 4));
      *(uint *)(iVar1 + 8) = iVar3 + 1U;
      if (1 < iVar3 + 1U) goto LAB_00025008;
    }
    FUN_00018d64(iVar1);
  }
  else {
LAB_00025008:
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== blkid_probe_set_request @ 000250f2 size=4 ===== */

void blkid_probe_set_request(void)

{
  (*(code *)PTR_blkid_probe_set_superblocks_flags_0004c220)();
  return;
}



/* ===== blkid_probe_reset_filter @ 000250f6 size=2 ===== */

int blkid_probe_reset_filter
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000190fc(param_1,0,0,param_4,param_4);
  return -(uint)(iVar1 == 0);
}



/* ===== blkid_probe_invert_filter @ 000250f8 size=2 ===== */

undefined4 blkid_probe_invert_filter(int param_1)

{
  __pid_t _Var1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  FILE *__stream;
  undefined4 uVar6;
  
  uVar6 = 0;
  iVar5 = DAT_000191c4 + 0x19162;
  if ((*(int *)(*(int *)(param_1 + 0x5c) + 0x10) == 0) ||
     (puVar4 = *(uint **)(param_1 + 0x70), puVar4 == (uint *)0x0)) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = puVar4 + (*(int *)(*(int *)(param_1 + 0x5c) + 0x18) + 0x20U >> 5);
    for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
      *puVar4 = ~*puVar4;
    }
    uVar2 = 0;
    if ((**(uint **)(iVar5 + DAT_000191c8) & 0x100) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000191cc);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_000191d4 + 0x1919c),_Var1,DAT_000191d8 + 0x1919e,
              DAT_000191d0 + 0x19196,uVar6);
      FUN_00018b88(DAT_000191dc + 0x191aa);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== blkid_probe_filter_types @ 000250fa size=2 ===== */

undefined4 blkid_probe_filter_types(int param_1,uint param_2,int param_3)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  FILE *__stream;
  int iVar9;
  int iVar10;
  
  iVar1 = FUN_000190fc(param_1,0,1);
  iVar9 = DAT_000192c8 + 0x1920c;
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x5c);
    uVar6 = *(uint *)(iVar10 + 0x18);
    for (uVar8 = 0; uVar6 != uVar8; uVar8 = uVar8 + 1) {
      puVar5 = *(undefined4 **)(*(int *)(iVar10 + 0x14) + uVar8 * 4);
      puVar7 = (undefined4 *)(param_3 + -4);
      do {
        puVar7 = puVar7 + 1;
        if ((char *)*puVar7 == (char *)0x0) {
          if ((param_2 & 2) == 0) goto LAB_000192be;
          goto LAB_000192aa;
        }
        iVar4 = strcmp((char *)*puVar5,(char *)*puVar7);
      } while (iVar4 != 0);
      if ((param_2 & 1) != 0) {
LAB_000192aa:
        *(uint *)(iVar1 + (uVar8 >> 5) * 4) =
             *(uint *)(iVar1 + (uVar8 >> 5) * 4) | 1 << (uVar8 & 0x1f);
      }
LAB_000192be:
    }
    uVar3 = 0;
    if ((**(uint **)(iVar9 + DAT_000192cc) & 0x100) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar9 + DAT_000192d0);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_000192d8 + 0x1925a),_Var2,DAT_000192dc + 0x1925c,
              DAT_000192d4 + 0x19254);
      FUN_00018b88(DAT_000192e0 + 0x1926e,*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== blkid_probe_filter_usage @ 000250fc size=4 ===== */

void blkid_probe_filter_usage(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_blkid_probe_filter_superblocks_usage_0004c2e0)();
  return;
}



/* ===== FUN_000270c6 @ 000270c6 size=74 ===== */

void FUN_000270c6(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_00027110 + 0x270d8 + DAT_00027114);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_00027118 @ 00027118 size=62 ===== */

undefined4 FUN_00027118(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001905c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(iVar1 + 0xc) == 0) {
      uVar2 = FUN_00019baa(param_1,param_2,DAT_00027158 + 0x27146,param_4);
      return uVar2;
    }
    uVar2 = 0;
    *(int *)(*(int *)(iVar1 + 0x18) + param_3) = param_4;
  }
  return uVar2;
}



/* ===== blkid_probe_enable_topology @ 000273b4 size=6 ===== */

undefined4 blkid_probe_enable_topology(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return 0;
}



/* ===== blkid_probe_get_topology @ 000273ba size=132 ===== */

undefined4 blkid_probe_get_topology(int param_1)

{
  int iVar1;
  __pid_t _Var2;
  int *piVar3;
  undefined4 uVar4;
  FILE *__stream;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  
  piVar3 = (int *)(param_1 + 0x78);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = 0;
  uVar7 = *(undefined4 *)(param_1 + 0xb0);
  *(int **)(param_1 + 0xb0) = piVar3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  iVar5 = DAT_000190e0 + 0x1908e;
  piVar8 = piVar3;
  iVar1 = (**(code **)(*piVar3 + 0x1c))();
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  if (iVar1 == 0) {
    if (**(int **)(iVar5 + DAT_000190e4) << 0x17 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000190e8);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_000190f0 + 0x190be),_Var2,DAT_000190f4 + 0x190c0,
              DAT_000190ec + 0x190b8,piVar8);
      FUN_00018b88(DAT_000190f8 + 0x190d0,*(undefined4 *)(*piVar3 + 4));
    }
    uVar4 = *(undefined4 *)(param_1 + 0x90);
  }
  return uVar4;
}



/* ===== FUN_000273c2 @ 000273c2 size=12 ===== */

void FUN_000273c2(undefined4 param_1,uint param_2)

{
  FUN_00027118(param_1,&UNK_000273ce + DAT_000273d0,0,param_2 & ~((int)param_2 >> 0x1f));
  return;
}



/* ===== blkid_topology_get_alignment_offset @ 00027414 size=4 ===== */

undefined4 blkid_topology_get_alignment_offset(undefined4 *param_1)

{
  return *param_1;
}



/* ===== blkid_topology_get_minimum_io_size @ 00027418 size=4 ===== */

undefined4 blkid_topology_get_minimum_io_size(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ===== blkid_topology_get_optimal_io_size @ 0002741c size=4 ===== */

undefined4 blkid_topology_get_optimal_io_size(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ===== blkid_topology_get_logical_sector_size @ 00027420 size=4 ===== */

undefined4 blkid_topology_get_logical_sector_size(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* ===== blkid_topology_get_physical_sector_size @ 00027424 size=4 ===== */

undefined4 blkid_topology_get_physical_sector_size(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* ===== blkid_topology_get_dax @ 00027428 size=4 ===== */

undefined4 blkid_topology_get_dax(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ===== FUN_00027bec @ 00027bec size=260 ===== */

uint FUN_00027bec(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  code *local_34;
  undefined4 local_30 [3];
  
  lVar10 = blkid_probe_get_devno();
  if ((lVar10 == 0) ||
     (iVar1 = FUN_0003335c((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0), iVar1 == 0)) {
    uVar3 = 1;
  }
  else {
    iVar7 = 0;
    iVar9 = 0;
    puVar6 = (undefined4 *)(DAT_00027cf0 + 0x27c2a);
    uVar5 = 1;
    do {
      uVar3 = uVar5;
      uVar8 = *puVar6;
      iVar2 = FUN_00032028(iVar1,0,uVar8);
      uVar5 = uVar3;
      if (iVar2 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        if (uVar3 != 0) {
          lVar11 = blkid_probe_get_wholedisk_devno(param_1);
          if ((lVar11 != 0) && (lVar10 != lVar11)) {
            iVar2 = FUN_0003335c((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),0);
            if (iVar2 == 0) break;
            FUN_00033198(iVar1,iVar2);
            FUN_00031e34(iVar2);
            iVar2 = FUN_00032028(iVar1,0,uVar8);
            uVar4 = (uint)(iVar2 == 0);
          }
          uVar5 = 0;
        }
      }
      uVar3 = uVar4;
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      else {
        local_34 = (code *)puVar6[1];
        if (local_34 == (code *)0x0) {
          local_34 = (code *)puVar6[2];
          if (local_34 == (code *)0x0) goto LAB_00027cb8;
          iVar2 = FUN_000329b0(iVar1,local_30,uVar8);
        }
        else {
          iVar2 = FUN_00032a20(iVar1,local_30,uVar8);
        }
        if (iVar2 == 0) {
          uVar3 = (*local_34)(param_1,local_30[0]);
          if ((int)uVar3 < 0) break;
          if (uVar3 == 0) {
            iVar7 = iVar7 + 1;
          }
        }
      }
LAB_00027cb8:
      iVar9 = iVar9 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar9 != 5);
    FUN_00031e34(iVar1);
    if (iVar7 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_00027cf4 @ 00027cf4 size=50 ===== */

undefined4 FUN_00027cf4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  __off64_t _Var3;
  undefined1 auStack_11 [5];
  
  uVar2 = 0;
  _Var3 = lseek64(param_1,CONCAT44(param_4,param_3),0);
  if (-1 < _Var3) {
    sVar1 = read(param_1,auStack_11,1);
    if (sVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== FUN_00027d26 @ 00027d26 size=36 ===== */

bool FUN_00027d26(int param_1)

{
  int iVar1;
  stat64 sStack_70;
  
  iVar1 = fstat64(param_1,&sStack_70);
  return iVar1 == 0 && (sStack_70.st_mode & 0xf000) == 0x6000;
}



/* ===== FUN_00027d4a @ 00027d4a size=168 ===== */

undefined8 FUN_00027d4a(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  uVar3 = 0x400;
  uVar2 = 0;
  uVar6 = 0;
  uVar7 = 0;
  while( true ) {
    uVar1 = uVar3;
    uVar9 = FUN_00027cf4(param_1,param_2,uVar1,uVar2);
    param_2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 == 0) break;
    if (uVar2 == 0xffffffff && uVar1 == 0xffffffff) goto LAB_00027d8e;
    bVar8 = uVar2 < 0x80000000;
    if (uVar2 == 0x7fffffff) {
      bVar8 = uVar1 != 0xffffffff;
    }
    uVar6 = uVar1;
    uVar7 = uVar2;
    if (bVar8) {
      uVar3 = uVar1 * 2;
      uVar2 = uVar2 * 2 + (uint)CARRY4(uVar1,uVar1);
    }
    else {
      uVar3 = 0xff;
      uVar2 = 0;
    }
  }
  while( true ) {
    uVar5 = uVar7;
    uVar4 = uVar6;
    uVar3 = (uVar2 - 1) + (uint)(uVar1 != 0);
    bVar8 = uVar3 <= uVar5;
    if (uVar5 == uVar3) {
      bVar8 = uVar1 - 1 <= uVar4;
    }
    if (bVar8) break;
    uVar7 = uVar2 + uVar5 + CARRY4(uVar1,uVar4);
    uVar6 = uVar1 + uVar4 >> 1 | uVar7 * -0x80000000;
    uVar7 = uVar7 >> 1;
    uVar9 = FUN_00027cf4(param_1,param_2,uVar6,uVar7);
    param_2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 == 0) {
      uVar1 = uVar6;
      uVar2 = uVar7;
      uVar6 = uVar4;
      uVar7 = uVar5;
    }
  }
  FUN_00027cf4(param_1,param_2,0,0);
  uVar1 = uVar4 + 1;
  uVar2 = uVar5 + (0xfffffffe < uVar4);
LAB_00027d8e:
  return CONCAT44(uVar2,uVar1);
}



/* ===== FUN_00027df2 @ 00027df2 size=138 ===== */

undefined4 FUN_00027df2(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint local_94 [7];
  stat64 local_78;
  
  iVar1 = ioctl(param_1,DAT_00027e7c,param_2);
  if (iVar1 < 0) {
    iVar1 = ioctl(param_1,0x1260,&local_78);
    if ((iVar1 < 0) &&
       (iVar1 = ioctl(param_1,DAT_00027e80,local_94), local_78.st_dev._0_4_ = local_94[0], iVar1 < 0
       )) {
      iVar1 = fstat64(param_1,&local_78);
      if ((iVar1 == 0) && ((local_78.st_mode & 0xf000) == 0x8000)) {
        *param_2 = (int)local_78.st_size;
        param_2[1] = local_78.st_size._4_4_;
        return 0;
      }
      if ((local_78.st_mode & 0xf000) != 0x6000) {
        return 0xffffffff;
      }
      uVar2 = FUN_00027d4a(param_1);
      *(undefined8 *)param_2 = uVar2;
    }
    else {
      *param_2 = (uint)local_78.st_dev << 9;
      param_2[1] = (uint)local_78.st_dev >> 0x17;
    }
  }
  return 0;
}



/* ===== FUN_00027eaa @ 00027eaa size=16 ===== */

int FUN_00027eaa(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = ioctl(param_1,0x1268,param_2,param_4,param_4);
  return iVar1 >> 0x1f;
}



/* ===== FUN_000281c2 @ 000281c2 size=40 ===== */

void FUN_000281c2(undefined4 *param_1)

{
  undefined4 *extraout_r0;
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    __assert((char *)(DAT_000281f4 + 0x281d8),(char *)(DAT_000281f0 + 0x281d6),0x12);
    puVar1 = extraout_r0;
  }
  free((void *)*puVar1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== FUN_00028208 @ 00028208 size=34 ===== */

void FUN_00028208(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_1[2] != 0) {
    FUN_000281c2();
  }
  *param_1 = param_2;
  sVar1 = 0;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
  }
  param_1[2] = sVar1;
  if (param_2 != (char *)0x0) {
    param_2 = param_2 + sVar1;
  }
  param_1[1] = param_2;
  return;
}



/* ===== FUN_0002822a @ 0002822a size=102 ===== */

undefined4 FUN_0002822a(undefined4 *param_1,uint param_2)

{
  undefined4 *extraout_r0;
  undefined4 *puVar1;
  int iVar2;
  uint extraout_r1;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  puVar1 = param_1;
  uVar3 = param_2;
  if (param_1 == (undefined4 *)0x0) {
    __assert((char *)(DAT_00028298 + 0x28246),(char *)(DAT_00028294 + 0x28244),0x32);
    puVar1 = extraout_r0;
    uVar3 = extraout_r1;
  }
  if ((uint)puVar1[2] < uVar3) {
    pvVar6 = (void *)*puVar1;
    iVar4 = puVar1[1];
    if (iVar4 != 0) {
      if (pvVar6 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 - (int)pvVar6;
      }
    }
    iVar5 = param_1[3];
    if (iVar5 != 0) {
      iVar2 = FUN_000340c0(iVar5 + param_2,iVar5);
      param_2 = iVar5 * iVar2 + 1;
    }
    pvVar6 = realloc(pvVar6,param_2);
    if (pvVar6 == (void *)0x0) {
      return 0xfffffff4;
    }
    *param_1 = pvVar6;
    param_1[1] = (int)pvVar6 + iVar4;
    param_1[2] = param_2;
  }
  return 0;
}



/* ===== FUN_00028364 @ 00028364 size=96 ===== */

undefined4 FUN_00028364(char *param_1,undefined4 *param_2)

{
  char *__s1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  stat64 sStack_80;
  
  __s1 = strrchr(param_1,0x2f);
  iVar3 = DAT_000283c4;
  *param_2 = 0;
  if ((((__s1 == (char *)0x0) ||
       (iVar2 = strncmp(__s1,(char *)(DAT_000283c8 + 0x2838c),4), iVar2 != 0)) ||
      (-1 < (int)((uint)*(ushort *)(**(int **)(iVar3 + 0x2837c + DAT_000283cc) + __s1[4] * 2) <<
                 0x1c))) ||
     ((iVar3 = stat64(param_1,&sStack_80), iVar3 != 0 || ((sStack_80.st_mode & 0xf000) != 0x6000))))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *param_2 = __s1 + 1;
  }
  return uVar1;
}



/* ===== FUN_000283d0 @ 000283d0 size=108 ===== */

int FUN_000283d0(int param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  timespec local_30;
  size_t sStack_28;
  
  local_30.tv_sec = param_1;
  local_30.tv_nsec = (long)param_2;
  sStack_28 = param_3;
  memset(param_2,0,param_3);
  pvVar1 = DAT_0002843c;
  iVar5 = 0;
  iVar4 = 0;
  while( true ) {
    while( true ) {
      if (param_3 == 0) {
        return iVar4;
      }
      sVar2 = read(param_1,param_2,param_3);
      if (sVar2 < 0) break;
      if (sVar2 == 0) {
        return iVar4;
      }
      param_3 = param_3 - sVar2;
      param_2 = (void *)((int)param_2 + sVar2);
      iVar4 = iVar4 + sVar2;
      iVar5 = 0;
    }
    piVar3 = __errno_location();
    if (((*piVar3 != 0xb) && (*piVar3 != 4)) || (4 < iVar5)) break;
    iVar5 = iVar5 + 1;
    local_30.tv_sec = 0;
    local_30.tv_nsec = (long)pvVar1;
    nanosleep(&local_30,(timespec *)0x0);
  }
  if (iVar4 != 0) {
    return iVar4;
  }
  return -1;
}



/* ===== FUN_00028440 @ 00028440 size=92 ===== */

undefined4 FUN_00028440(int param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  int *piVar2;
  ssize_t sVar3;
  int iVar4;
  timespec local_28;
  
  pvVar1 = DAT_0002849c;
  local_28.tv_sec = param_1;
  local_28.tv_nsec = (long)param_2;
LAB_00028452:
  do {
    if (param_3 == 0) {
      return 0;
    }
    piVar2 = __errno_location();
    *piVar2 = 0;
    sVar3 = write(param_1,param_2,param_3);
    iVar4 = *piVar2;
    if (sVar3 < 1) goto LAB_0002848e;
    param_3 = param_3 - sVar3;
    if (param_3 != 0) {
      param_2 = (void *)((int)param_2 + sVar3);
    }
  } while (iVar4 != 0xb);
  goto LAB_00028480;
LAB_0002848e:
  if (iVar4 != 4) {
    if (iVar4 != 0xb) {
      return 0xffffffff;
    }
LAB_00028480:
    local_28.tv_sec = 0;
    local_28.tv_nsec = (long)pvVar1;
    nanosleep(&local_28,(timespec *)0x0);
  }
  goto LAB_00028452;
}



/* ===== FUN_0002854c @ 0002854c size=164 ===== */

char * FUN_0002854c(char *param_1)

{
  char *__s;
  FILE *__stream;
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  char acStack_20d [245];
  char acStack_118 [260];
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return (char *)0x0;
  }
  pcVar4 = (char *)(DAT_0002853c + 0x284c4);
  snprintf(acStack_118,0x100,(char *)(DAT_00028540 + 0x284ce),pcVar4,param_1);
  __stream = fopen64(acStack_118,(char *)(DAT_00028544 + 0x284de));
  if (__stream == (FILE *)0x0) {
    return (char *)0x0;
  }
  __s = acStack_20d + 1;
  pcVar1 = fgets(__s,0xf4,__stream);
  if ((pcVar1 != (char *)0x0) && (sVar2 = strlen(__s), 1 < sVar2)) {
    acStack_20d[sVar2] = '\0';
    snprintf(acStack_118,0x100,(char *)(DAT_00028548 + 0x2851a),__s);
    if ((*pcVar4 != '\0') || (iVar3 = access(acStack_118,0), iVar3 == 0)) {
      pcVar4 = strdup(acStack_118);
      goto LAB_000284f6;
    }
  }
  pcVar4 = (char *)0x0;
LAB_000284f6:
  fclose(__stream);
  return pcVar4;
}



/* ===== FUN_00028554 @ 00028554 size=164 ===== */

char * FUN_00028554(char *param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char *__dest;
  size_t __n;
  size_t sVar4;
  char acStack_1018 [4096];
  
  if ((param_1 == (char *)0x0) || (*param_1 == '/')) {
    piVar2 = __errno_location();
    __dest = (char *)0x0;
    *piVar2 = 0x16;
  }
  else {
    pcVar1 = getcwd(acStack_1018,0x1000);
    __dest = (char *)0x0;
    if (pcVar1 != (char *)0x0) {
      iVar3 = strncmp(param_1,(char *)(DAT_000285f8 + 0x28598),2);
      if ((((iVar3 == 0) && (pcVar1 = param_1 + 2, param_1 + 2 != (char *)0x0)) ||
          (iVar3 = strcmp(param_1,(char *)(DAT_000285fc + 0x285a8)), pcVar1 = param_1, iVar3 != 0))
         && (*pcVar1 != '\0')) {
        __n = strlen(acStack_1018);
        sVar4 = strlen(pcVar1);
        __dest = malloc(__n + sVar4 + 2);
        if (__dest != (char *)0x0) {
          memcpy(__dest,acStack_1018,__n);
          __dest[__n] = '/';
          memcpy(__dest + __n + 1,pcVar1,sVar4 + 1);
        }
      }
      else {
        __dest = strdup(acStack_1018);
      }
    }
  }
  return __dest;
}



/* ===== FUN_00028600 @ 00028600 size=66 ===== */

char * FUN_00028600(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_14;
  undefined4 uStack_10;
  
  pcVar1 = (char *)0x0;
  if ((param_1 != (char *)0x0) && (pcVar1 = (char *)0x0, *param_1 != '\0')) {
    local_14 = param_2;
    uStack_10 = param_3;
    pcVar1 = realpath(param_1,(char *)0x0);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)(*(code *)PTR_strdup_0004c240)(param_1);
      return pcVar1;
    }
    iVar2 = FUN_00028364(pcVar1,&local_14);
    if ((iVar2 != 0) && (pcVar3 = (char *)FUN_0002854c(local_14), pcVar3 != (char *)0x0)) {
      free(pcVar1);
      pcVar1 = pcVar3;
    }
  }
  return pcVar1;
}



/* ===== FUN_00028642 @ 00028642 size=324 ===== */

void * FUN_00028642(char *param_1,size_t param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  size_t __pid;
  int iVar3;
  int *piVar4;
  __gid_t __gid;
  __uid_t __uid;
  char *__s;
  char *pcVar5;
  size_t sVar6;
  void *__ptr;
  size_t local_24;
  int local_20;
  int local_1c;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (local_24 = param_2, local_20 = param_3, local_1c = param_4, iVar2 = pipe(&local_20),
     iVar2 != 0)) {
    return (void *)0x0;
  }
  __pid = fork();
  if (__pid == 0xffffffff) {
    close(local_20);
    close(local_1c);
    return (void *)0x0;
  }
  if (__pid != 0) {
    close(local_1c);
    local_1c = 0xffffffff;
    iVar3 = FUN_000283d0(local_20,&local_24,4);
    piVar4 = __errno_location();
    iVar1 = local_20;
    iVar2 = 0;
    if (iVar3 != 4) {
      __ptr = (void *)0x0;
      goto LAB_00028766;
    }
    if ((int)local_24 < 0) {
      iVar2 = -local_24;
      __ptr = (void *)0x0;
    }
    else {
      __ptr = malloc(local_24 + 1);
      if (__ptr == (void *)0x0) {
        iVar2 = 0xc;
      }
      else {
        sVar6 = FUN_000283d0(iVar1,__ptr,local_24);
        if (sVar6 == local_24) {
          *(undefined1 *)((int)__ptr + sVar6) = 0;
          goto LAB_00028766;
        }
        iVar2 = *piVar4;
        if (iVar2 == 0) goto LAB_00028766;
      }
    }
    free(__ptr);
    __ptr = (void *)0x0;
LAB_00028766:
    close(local_20);
    waitpid(__pid,(int *)0x0,0);
    *piVar4 = iVar2;
    return __ptr;
  }
  close(local_20);
  local_20 = -1;
  piVar4 = __errno_location();
  *piVar4 = 0;
  __gid = getgid();
  iVar2 = setgid(__gid);
  if (-1 < iVar2) {
    __uid = getuid();
    iVar2 = setuid(__uid);
    if ((-1 < iVar2) && (local_24 = __pid, __s = realpath(param_1,(char *)0x0), __s != (char *)0x0))
    {
      iVar2 = FUN_00028364(__s,&local_24);
      if ((iVar2 != 0) && (pcVar5 = (char *)FUN_0002854c(local_24), pcVar5 != (char *)0x0)) {
        free(__s);
        __s = pcVar5;
      }
      local_24 = strlen(__s);
      goto LAB_0002871e;
    }
  }
  if (*piVar4 == 0) {
    local_24 = 0xffffffea;
    __s = (char *)0x0;
  }
  else {
    local_24 = -*piVar4;
    __s = (char *)0x0;
  }
LAB_0002871e:
  FUN_00028440(local_1c,&local_24,4);
  if (__s != (char *)0x0) {
    FUN_00028440(local_1c,__s,local_24);
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00028844 @ 00028844 size=336 ===== */

uint FUN_00028844(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = 0;
  uVar8 = 0;
  do {
    if (param_5 <= uVar4) {
LAB_000288ba:
      *(undefined1 *)(param_2 + uVar8) = 0;
      return uVar8;
    }
    if (param_1 == 1) {
      if (param_5 < uVar4 + 2) goto LAB_000288ba;
      uVar2 = CONCAT11(*(undefined1 *)(param_4 + uVar4 + 1),*(undefined1 *)(param_4 + uVar4));
LAB_0002886c:
      uVar7 = uVar4 + 1;
      uVar3 = (uint)uVar2;
      uVar9 = uVar7;
      if (uVar3 < 0xd800) goto LAB_000288e6;
      if ((uVar3 < 0xdc00) && (uVar9 = uVar4 + 3, uVar9 < param_5)) {
        uVar1 = *(undefined1 *)(param_4 + uVar7 + 1);
        if (param_1 == 1) {
          uVar2 = CONCAT11(*(undefined1 *)(param_4 + uVar9),uVar1);
        }
        else {
          uVar2 = CONCAT11(uVar1,*(undefined1 *)(param_4 + uVar9));
        }
        if (0x3ff < (uVar2 + 0x2400 & 0xffff)) goto LAB_0002892c;
        uVar7 = uVar8 + 4;
        uVar4 = (uint)uVar2 + uVar3 * 0x400 + 0xfca02400;
        iVar5 = param_2 + uVar8;
        if (param_3 <= uVar7) goto LAB_000288ba;
        *(byte *)(param_2 + uVar8) = (byte)(uVar4 >> 0x12) | 0xf0;
        *(byte *)(iVar5 + 1) = (byte)(uVar4 * 0x4000 >> 0x1a) | 0x80;
        *(byte *)(iVar5 + 2) = (byte)(uVar4 * 0x100000 >> 0x1a) | 0x80;
        *(byte *)(iVar5 + 3) = (byte)uVar4 & 0x3f | 0x80;
      }
      else {
LAB_0002892c:
        uVar9 = uVar7;
        uVar7 = uVar8 + 3;
        if (param_3 <= uVar7) goto LAB_000288ba;
        *(byte *)(param_2 + uVar8) = (byte)(uVar3 >> 0xc) | 0xe0;
        *(byte *)(param_2 + uVar8 + 1) = (byte)((uVar3 << 0x14) >> 0x1a) | 0x80;
        *(byte *)(param_2 + uVar8 + 2) = (byte)uVar3 & 0x3f | 0x80;
      }
    }
    else {
      if (param_1 == 0) {
        if (uVar4 + 2 <= param_5) {
          uVar2 = CONCAT11(*(undefined1 *)(param_4 + uVar4),*(undefined1 *)(param_4 + uVar4 + 1));
          goto LAB_0002886c;
        }
        goto LAB_000288ba;
      }
      if (param_1 != 2) {
        return 0;
      }
      uVar3 = (uint)*(byte *)(param_4 + uVar4);
      uVar9 = uVar4;
LAB_000288e6:
      pbVar6 = (byte *)(param_2 + uVar8);
      if (uVar3 == 0) {
        *pbVar6 = 0;
        goto LAB_000288ba;
      }
      if (uVar3 < 0x80) {
        uVar7 = uVar8 + 1;
        if (param_3 <= uVar7) goto LAB_000288ba;
        *pbVar6 = (byte)uVar3;
      }
      else {
        uVar7 = uVar9;
        if (0x7ff < uVar3) goto LAB_0002892c;
        uVar7 = uVar8 + 2;
        if (param_3 <= uVar7) goto LAB_000288ba;
        *pbVar6 = (byte)(uVar3 >> 6) | 0xc0;
        pbVar6[1] = (byte)uVar3 & 0x3f | 0x80;
      }
    }
    uVar4 = uVar9 + 1;
    uVar8 = uVar7;
  } while( true );
}



/* ===== FUN_00028b0a @ 00028b0a size=68 ===== */

undefined4 FUN_00028b0a(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  __uid_t _Var2;
  __gid_t _Var3;
  __gid_t _Var4;
  int iVar5;
  
  _Var2 = getuid();
  if ((_Var2 == 0) && (_Var2 = geteuid(), _Var2 == 0)) {
    _Var3 = getgid();
    _Var4 = getegid();
    if ((_Var3 == _Var4) && (iVar5 = prctl(3,0,0,0,0,param_2), iVar5 != 0)) {
      uVar1 = (*(code *)PTR_secure_getenv_0004c010)(param_1);
      return uVar1;
    }
  }
  return 0;
}



/* ===== FUN_00028b4c @ 00028b4c size=22 ===== */

void FUN_00028b4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  timespec local_10;
  undefined4 uStack_8;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = DAT_00028b64;
  uStack_8 = param_3;
  nanosleep(&local_10,(timespec *)0x0);
  return;
}



/* ===== FUN_00028b68 @ 00028b68 size=82 ===== */

int FUN_00028b68(int param_1,int param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    while( true ) {
      if (param_3 == 0) {
        return iVar3;
      }
      sVar1 = sendfile64(param_1,param_2,(__off64_t *)0x0,param_3);
      if (sVar1 < 0) break;
      if (sVar1 == 0) {
        return iVar3;
      }
      param_3 = param_3 - sVar1;
      iVar3 = iVar3 + sVar1;
      iVar4 = 0;
    }
    piVar2 = __errno_location();
    if (((*piVar2 != 0xb) && (*piVar2 != 4)) || (4 < iVar4)) break;
    iVar4 = iVar4 + 1;
    FUN_00028b4c();
  }
  if (iVar3 != 0) {
    return iVar3;
  }
  return -1;
}



/* ===== FUN_00028bba @ 00028bba size=180 ===== */

undefined4 FUN_00028bba(int param_1,int param_2)

{
  ssize_t sVar1;
  int *piVar2;
  size_t __n;
  size_t __nbytes;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_1028 [4100];
  
  do {
    __n = 0;
    memset(auStack_1028,0,0x1000);
    iVar4 = 0;
    __nbytes = 0x1000;
    puVar3 = auStack_1028;
    while( true ) {
      while( true ) {
        sVar1 = read(param_1,puVar3,__nbytes);
        if (-1 < sVar1) break;
        piVar2 = __errno_location();
        if (((*piVar2 != 0xb) && (*piVar2 != 4)) || (4 < iVar4)) {
          if (__n == 0) {
            return 0xffffffff;
          }
          goto LAB_00028c3e;
        }
        iVar4 = iVar4 + 1;
        FUN_00028b4c();
      }
      if (sVar1 == 0) break;
      __nbytes = __nbytes - sVar1;
      puVar3 = puVar3 + sVar1;
      __n = __n + sVar1;
      if (__nbytes == 0) break;
      iVar4 = 0;
    }
    if (__n == 0) {
      return 0;
    }
LAB_00028c3e:
    piVar2 = __errno_location();
    puVar3 = auStack_1028;
    do {
      *piVar2 = 0;
      sVar1 = write(param_2,puVar3,__n);
      iVar4 = *piVar2;
      if (sVar1 < 1) {
        if (iVar4 != 4) {
          if (iVar4 != 0xb) {
            return 0xfffffffe;
          }
          goto LAB_00028c64;
        }
      }
      else {
        __n = __n - sVar1;
        if (__n != 0) {
          puVar3 = puVar3 + sVar1;
        }
        if (iVar4 == 0xb) {
LAB_00028c64:
          FUN_00028b4c();
        }
      }
    } while (__n != 0);
  } while( true );
}



/* ===== FUN_00028c6e @ 00028c6e size=8 ===== */

void FUN_00028c6e(undefined4 param_1)

{
  (*(code *)PTR_mkostemp64_0004c124)(param_1,DAT_00028c74);
  return;
}



/* ===== FUN_00028ce4 @ 00028ce4 size=80 ===== */

int FUN_00028ce4(int param_1,undefined4 param_2)

{
  int __fd;
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  __fd = fcntl64(param_1,0x406,param_2);
  if (((__fd < 0) && (__fd = dup(param_1), -1 < __fd)) &&
     ((uVar1 = fcntl64(__fd,1), (int)uVar1 < 0 || (iVar3 = fcntl64(__fd,2,uVar1 | 1), iVar3 < 0))))
  {
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    close(__fd);
    *piVar2 = iVar3;
    __fd = -1;
  }
  return __fd;
}



/* ===== FUN_00028e8a @ 00028e8a size=26 ===== */

char * FUN_00028e8a(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if ((param_1 != (char *)0x0) &&
     (pcVar1 = strrchr(param_1,0x2f), pcVar2 = pcVar1, pcVar1 != (char *)0x0)) {
    pcVar2 = pcVar1 + 1;
    *pcVar1 = '\0';
  }
  return pcVar2;
}



/* ===== FUN_00028ea4 @ 00028ea4 size=74 ===== */

void FUN_00028ea4(int param_1,undefined4 param_2)

{
  int iVar1;
  stat64 sStack_78;
  
  iVar1 = fstat64(param_1,&sStack_78);
  if (iVar1 != -1) {
    if ((sStack_78.st_mode & 0xf000) == 0x8000) {
      iVar1 = FUN_00028b68(param_2,param_1,(undefined4)sStack_78.st_size);
      do {
        if (iVar1 < 0) goto LAB_00028ec2;
        iVar1 = FUN_00028b68(param_2,param_1,0x1000000);
      } while (iVar1 != 0);
    }
    else {
LAB_00028ec2:
      FUN_00028bba(param_1,param_2);
    }
  }
  return;
}



/* ===== FUN_00028ef0 @ 00028ef0 size=124 ===== */

void FUN_00028ef0(int *param_1,char *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = calloc(1,0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_3;
    if ((param_2 == (char *)0x0) || (sVar2 = strlen(param_2), sVar2 == 0)) {
      iVar4 = asprintf((char **)(puVar1 + 1),(char *)(DAT_00028f6c + 0x28f34),param_3);
      if (iVar4 < 0) goto LAB_00015cb4;
      sVar2 = 0;
    }
    else {
      pcVar3 = strdup(param_2);
      puVar1[1] = pcVar3;
      if (pcVar3 == (char *)0x0) {
LAB_00015cb4:
        (*(code *)PTR_free_0004c384)(puVar1);
        return;
      }
    }
    iVar4 = *param_1;
    do {
      iVar5 = iVar4;
      if (iVar5 == 0) {
        *param_1 = (int)puVar1;
        goto LAB_00028f52;
      }
      iVar4 = *(int *)(iVar5 + 8);
    } while (*(int *)(iVar5 + 8) != 0);
    *(undefined4 **)(iVar5 + 8) = puVar1;
LAB_00028f52:
    if ((sVar2 == 0) && ((char *)puVar1[1] != (char *)0x0)) {
      sVar2 = strlen((char *)puVar1[1]);
    }
    if (param_1[1] < (int)sVar2) {
      param_1[1] = sVar2;
    }
    else {
      param_1[1] = param_1[1];
    }
  }
  return;
}



/* ===== FUN_00028ff8 @ 00028ff8 size=444 ===== */

void FUN_00028ff8(int param_1,FILE *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint __c;
  char *__format;
  char *pcVar5;
  char *pcVar6;
  
  if (param_2->_chain == (_IO_FILE *)0x0) {
    fputc(0x22,param_2);
  }
  else {
    pcVar3 = param_2->_IO_write_base;
    if (pcVar3 < param_2->_IO_buf_base) {
      param_2->_IO_write_base = pcVar3 + 1;
      *pcVar3 = '\"';
    }
    else {
      __fputc_unlocked(0x22);
    }
  }
  pcVar3 = (char *)(param_1 + -1);
  __format = (char *)(DAT_000291b8 + 0x29028);
  pcVar5 = (char *)(DAT_000291bc + 0x2902a);
  pcVar6 = (char *)(DAT_000291c0 + 0x2902c);
LAB_0002902a:
  do {
    if (pcVar3 == (char *)0xffffffff) {
LAB_00029034:
      if (param_2->_chain == (_IO_FILE *)0x0) {
        (*(code *)PTR_fputc_0004c2d4)(0x22,param_2);
        return;
      }
      pcVar3 = param_2->_IO_write_base;
      if (pcVar3 < param_2->_IO_buf_base) {
        param_2->_IO_write_base = pcVar3 + 1;
        *pcVar3 = '\"';
        return;
      }
      (*(code *)PTR___fputc_unlocked_0004c388)(0x22,param_2,param_2->_IO_buf_base,param_4);
      return;
    }
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
    __c = (uint)cVar1;
    if (__c == 0) goto LAB_00029034;
    if ((__c == 0x22) || (__c == 0x5c)) {
      if (param_2->_chain == (_IO_FILE *)0x0) {
        fputc(0x5c,param_2);
      }
      else {
        pcVar4 = param_2->_IO_write_base;
        if (pcVar4 < param_2->_IO_buf_base) {
          param_2->_IO_write_base = pcVar4 + 1;
          *pcVar4 = '\\';
        }
        else {
          __fputc_unlocked(0x5c,param_2);
        }
      }
      if (param_2->_chain == (_IO_FILE *)0x0) goto LAB_000290b4;
      pcVar4 = param_2->_IO_write_base;
      if (param_2->_IO_buf_base <= pcVar4) goto LAB_000290aa;
      param_2->_IO_write_base = pcVar4 + 1;
      *pcVar4 = cVar1;
      goto LAB_0002902a;
    }
    if (0x1f < __c) {
      if (__c < 0x80) {
        if (param_2->_chain == (_IO_FILE *)0x0) {
          if ((param_3 == -1) && (__c - 0x41 < 0x1a)) {
            __c = __c + 0x20;
          }
LAB_000290b4:
          fputc(__c,param_2);
          goto LAB_0002902a;
        }
        pcVar4 = param_2->_IO_write_base;
        if (pcVar4 < param_2->_IO_buf_base) {
          if ((param_3 == -1) && (__c - 0x41 < 0x1a)) {
            cVar1 = cVar1 + ' ';
          }
          param_2->_IO_write_base = pcVar4 + 1;
          *pcVar4 = cVar1;
          goto LAB_0002902a;
        }
        if ((param_3 == -1) && (__c - 0x41 < 0x1a)) {
          __c = __c + 0x20;
        }
      }
      else {
        if (param_2->_chain == (_IO_FILE *)0x0) {
          if (param_3 == -1) {
            __c = tolower(__c);
          }
          goto LAB_000290b4;
        }
        pcVar4 = param_2->_IO_write_base;
        if (pcVar4 < param_2->_IO_buf_base) {
          if (param_3 == -1) {
            iVar2 = tolower(__c);
            cVar1 = (char)iVar2;
          }
          param_2->_IO_write_base = pcVar4 + 1;
          *pcVar4 = cVar1;
          goto LAB_0002902a;
        }
        if (param_3 == -1) {
          __c = tolower(__c);
        }
      }
LAB_000290aa:
      __fputc_unlocked(__c,param_2);
      goto LAB_0002902a;
    }
    switch(__c) {
    case 8:
      pcVar4 = (char *)(DAT_000291c4 + 0x29172);
      break;
    case 9:
      pcVar4 = (char *)(DAT_000291c8 + 0x2917e);
      break;
    case 10:
      pcVar4 = (char *)(DAT_000291cc + 0x29186);
      break;
    default:
      goto switchD_00029160_caseD_b;
    case 0xc:
      pcVar4 = pcVar6;
      break;
    case 0xd:
      pcVar4 = pcVar5;
    }
    fputs(pcVar4,param_2);
  } while( true );
switchD_00029160_caseD_b:
  fprintf(param_2,__format,__c);
  goto LAB_0002902a;
}



/* ===== FUN_000291de @ 000291de size=30 ===== */

void FUN_000291de(undefined4 *param_1)

{
  int iVar1;
  char *__s;
  
  __s = (char *)(DAT_000291fc + 0x291ea);
  for (iVar1 = 0; iVar1 < (int)param_1[1]; iVar1 = iVar1 + 1) {
    fputs(__s,(FILE *)*param_1);
  }
  return;
}



/* ===== FUN_00029802 @ 00029802 size=170 ===== */

char * FUN_00029802(char *param_1,int *param_2,char *param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  int *__c;
  int iVar6;
  char *__s;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  
  iVar8 = DAT_000298ac + 0x29816;
  if (param_1 == (char *)0x0) {
    param_3 = (char *)0x0;
  }
  else {
    pcVar10 = param_1;
    piVar11 = param_2;
    pcVar12 = param_3;
    sVar2 = strlen(param_1);
    iVar1 = DAT_000298b4;
    if (sVar2 == 0) {
      param_3 = (char *)0x0;
    }
    else if (param_3 != (char *)0x0) {
      pcVar9 = (char *)(DAT_000298b0 + 0x29832);
      *param_2 = 0;
      __s = param_3;
      do {
        pcVar7 = param_1 + 1;
        __c = (int *)(int)*param_1;
        pcVar3 = __s;
        if (__c == (int *)0x0) break;
        if ((param_4 == (char *)0x0) ||
           (pcVar3 = strchr(param_4,(int)__c), piVar11 = __c, pcVar3 == (char *)0x0)) {
          pcVar5 = pcVar9;
          if (((__c == (int *)0x5c) && (*pcVar7 == 'x')) ||
             ((uVar4 = (uint)*(ushort *)(**(int **)(iVar8 + DAT_000298b8) + ((uint)__c & 0xff) * 2),
              (int)(uVar4 << 0x16) < 0 ||
              (pcVar5 = (char *)(iVar1 + 0x29836), -1 < (int)(uVar4 << 0x19))))) {
            pcVar3 = __s + 4;
            sprintf(__s,pcVar5,(uint)__c & 0xff,__c,pcVar10,piVar11,pcVar12);
            iVar6 = *param_2 + 4;
          }
          else {
            pcVar3 = __s + 1;
            *__s = (char)__c;
            iVar6 = *param_2 + 1;
          }
          *param_2 = iVar6;
        }
        else {
          pcVar3 = __s + 1;
          *__s = (char)__c;
        }
        __s = pcVar3;
        param_1 = pcVar7;
      } while (pcVar7 != (char *)0x0);
      *pcVar3 = '\0';
    }
  }
  return param_3;
}



/* ===== FUN_000298bc @ 000298bc size=98 ===== */

char * FUN_000298bc(char *param_1,int *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  char *__s;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    param_3 = (char *)0x0;
  }
  else {
    sVar2 = strlen(param_1);
    iVar1 = DAT_00029920;
    if (sVar2 == 0) {
      param_3 = (char *)0x0;
    }
    else if (param_3 != (char *)0x0) {
      *param_2 = 0;
      __s = param_3;
      while( true ) {
        if (*param_1 == '\0') break;
        if ((*param_1 == '\\') && (param_1[1] == 'x')) {
          sprintf(__s,(char *)(iVar1 + 0x298de));
          pcVar4 = __s + 4;
          iVar3 = *param_2 + 4;
        }
        else {
          pcVar4 = __s + 1;
          *__s = *param_1;
          iVar3 = *param_2 + 1;
        }
        *param_2 = iVar3;
        param_1 = param_1 + 1;
        __s = pcVar4;
      }
      *__s = '\0';
    }
  }
  return param_3;
}



/* ===== FUN_00029924 @ 00029924 size=6 ===== */

int FUN_00029924(int param_1)

{
  return param_1 * 4 + 1;
}



/* ===== FUN_0002992a @ 0002992a size=62 ===== */

int FUN_0002992a(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  void *__ptr;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    if (sVar1 == 0) {
      iVar2 = 0;
    }
    else {
      sVar1 = FUN_00029924();
      __ptr = malloc(sVar1);
      if ((__ptr == (void *)0x0) || (iVar2 = FUN_00029802(param_1,param_2,__ptr,0), iVar2 == 0)) {
        iVar2 = 0;
        free(__ptr);
      }
    }
  }
  return iVar2;
}



/* ===== FUN_00029968 @ 00029968 size=60 ===== */

int FUN_00029968(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  void *__ptr;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    if (sVar1 == 0) {
      iVar2 = 0;
    }
    else {
      sVar1 = FUN_00029924();
      __ptr = malloc(sVar1);
      if ((__ptr == (void *)0x0) || (iVar2 = FUN_000298bc(param_1,param_2,__ptr), iVar2 == 0)) {
        iVar2 = 0;
        free(__ptr);
      }
    }
  }
  return iVar2;
}



/* ===== FUN_0002bd48 @ 0002bd48 size=42 ===== */

int FUN_0002bd48(int param_1,char *param_2)

{
  char *pcVar1;
  int __c;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar2 = 0; __c = (int)*(char *)(param_1 + iVar2), __c != 0; iVar2 = iVar2 + 1) {
    if (iVar3 == 0) {
      if (__c == 0x5c) {
        iVar3 = 1;
      }
      else {
        pcVar1 = strchr(param_2,__c);
        if (pcVar1 != (char *)0x0) break;
      }
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar2 - iVar3;
}



/* ===== FUN_0002c268 @ 0002c268 size=72 ===== */

undefined4 FUN_0002c268(char *param_1,intmax_t *param_2,int param_3)

{
  int *piVar1;
  intmax_t iVar2;
  char *local_1c;
  
  local_1c = (char *)0x0;
  piVar1 = __errno_location();
  *piVar1 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar2 = strtoimax(param_1,&local_1c,param_3);
    *param_2 = iVar2;
    if ((*piVar1 == 0) && (local_1c != param_1)) {
      if (local_1c == (char *)0x0) {
        return 0;
      }
      if (*local_1c == '\0') {
        return 0;
      }
    }
  }
  return 0xffffffea;
}



/* ===== FUN_0002c2b0 @ 0002c2b0 size=104 ===== */

undefined4 FUN_0002c2b0(char *param_1,uintmax_t *param_2,int param_3)

{
  int *piVar1;
  intmax_t iVar2;
  uintmax_t uVar3;
  char *local_24;
  int iStack_20;
  
  local_24 = (char *)0x0;
  iStack_20 = param_3;
  piVar1 = __errno_location();
  *piVar1 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar2 = strtoimax(param_1,&local_24,param_3);
    if (iVar2 < 0) {
      *piVar1 = 0x22;
    }
    else {
      *piVar1 = 0;
      uVar3 = strtoumax(param_1,&local_24,param_3);
      *param_2 = uVar3;
      if ((*piVar1 == 0) && (local_24 != param_1)) {
        if (local_24 == (char *)0x0) {
          return 0;
        }
        if (*local_24 == '\0') {
          return 0;
        }
      }
    }
  }
  return 0xffffffea;
}



/* ===== FUN_0002c318 @ 0002c318 size=52 ===== */

int FUN_0002c318(uint param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  uint local_18;
  uint *puStack_14;
  
  local_18 = param_1;
  puStack_14 = param_2;
  iVar1 = FUN_0002c268(param_1,&local_18);
  if (iVar1 == 0) {
    if ((int)puStack_14 + (uint)(0x7fffffff < local_18) == 0) {
      *param_2 = local_18;
    }
    else {
      piVar2 = __errno_location();
      *piVar2 = 0x22;
      iVar1 = -0x22;
    }
  }
  return iVar1;
}



/* ===== FUN_0002c34c @ 0002c34c size=44 ===== */

int FUN_0002c34c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 *puStack_c;
  
  local_10 = param_1;
  puStack_c = param_2;
  iVar1 = FUN_0002c2b0(param_1,&local_10);
  if (iVar1 == 0) {
    if (puStack_c == (undefined4 *)0x0) {
      *param_2 = local_10;
    }
    else {
      piVar2 = __errno_location();
      *piVar2 = 0x22;
      iVar1 = -0x22;
    }
  }
  return iVar1;
}



/* ===== FUN_0002cd90 @ 0002cd90 size=178 ===== */

char * FUN_0002cd90(int *param_1,size_t *param_2,char *param_3,int param_4)

{
  byte bVar1;
  size_t sVar2;
  char *__s;
  char *pcVar3;
  int __c;
  size_t *local_24;
  char *pcStack_20;
  
  pcVar3 = (char *)*param_1;
  if (*pcVar3 != '\0') {
    local_24 = param_2;
    pcStack_20 = param_3;
    sVar2 = strspn(pcVar3,param_3);
    __s = pcVar3 + sVar2;
    bVar1 = pcVar3[sVar2];
    __c = (int)(char)bVar1;
    if (__c != 0) {
      if (param_4 == 0) {
        sVar2 = strcspn(__s,param_3);
        *param_2 = sVar2;
        *param_1 = (int)(__s + sVar2);
        return __s;
      }
      pcVar3 = strchr((char *)(DAT_0002ce44 + 0x2cdcc),__c);
      if (pcVar3 == (char *)0x0) {
        sVar2 = FUN_0002bd48(__s,param_3);
        *param_2 = sVar2;
        if ((__s[sVar2] == 0) || (pcVar3 = strchr(param_3,(int)__s[sVar2]), pcVar3 != (char *)0x0))
        {
          *param_1 = (int)(__s + sVar2);
          return __s;
        }
      }
      else {
        local_24._0_2_ = (ushort)bVar1;
        sVar2 = FUN_0002bd48(__s + 1,&local_24);
        *param_2 = sVar2;
        if ((__s[sVar2 + 1] != 0) && (__c == __s[sVar2 + 1])) {
          if ((__s[sVar2 + 2] == 0) ||
             (pcVar3 = strchr(param_3,(int)__s[sVar2 + 2]), pcVar3 != (char *)0x0)) {
            *param_1 = (int)(__s + sVar2 + 2);
            return __s + 1;
          }
        }
      }
    }
    *param_1 = (int)__s;
  }
  return (char *)0x0;
}



/* ===== FUN_0002ce48 @ 0002ce48 size=52 ===== */

undefined4 FUN_0002ce48(FILE *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  do {
    if (param_1->_chain == (_IO_FILE *)0x0) {
      uVar1 = fgetc(param_1);
LAB_0002ce6c:
      if (uVar1 == 0xffffffff) {
        return 1;
      }
    }
    else {
      pbVar2 = (byte *)param_1->_IO_write_base;
      if (param_1->_IO_write_end <= pbVar2) {
        uVar1 = __fgetc_unlocked(param_1);
        goto LAB_0002ce6c;
      }
      param_1->_IO_write_base = (char *)(pbVar2 + 1);
      uVar1 = (uint)*pbVar2;
    }
    if (uVar1 == 10) {
      return 0;
    }
  } while( true );
}



/* ===== FUN_0002ced8 @ 0002ced8 size=24 ===== */

void FUN_0002ced8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + -1;
    while( true ) {
      puVar1 = puVar1 + 1;
      if ((void *)*puVar1 == (void *)0x0) break;
      free((void *)*puVar1);
    }
    *param_1 = 0;
  }
  return;
}



/* ===== FUN_0002cef0 @ 0002cef0 size=18 ===== */

undefined4 FUN_0002cef0(void *param_1)

{
  FUN_0002ced8();
  free(param_1);
  return 0;
}



/* ===== FUN_0002cfea @ 0002cfea size=154 ===== */

undefined4 * FUN_0002cfea(int param_1,size_t param_2,undefined4 param_3)

{
  int extraout_r0;
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t extraout_r1;
  size_t sVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_28;
  size_t local_24;
  undefined4 uStack_20;
  
  local_28 = param_1;
  sVar4 = param_2;
  local_24 = param_2;
  uStack_20 = param_3;
  if (param_1 == 0) {
    __assert((char *)(DAT_0002d08c + 0x2d004),(char *)(DAT_0002d088 + 0x2d002),0xc1);
    local_28 = extraout_r0;
    sVar4 = extraout_r1;
  }
  iVar5 = 0;
  iVar1 = FUN_0002cd90(&local_28,&local_24,sVar4,0);
  while (iVar5 = iVar5 + 1, iVar1 != 0) {
    iVar1 = FUN_0002cd90(&local_28,&local_24,param_2,0);
  }
  puVar2 = malloc(iVar5 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    local_28 = param_1;
    pcVar3 = (char *)FUN_0002cd90(&local_28,&local_24,param_2,0);
    puVar6 = puVar2;
    while (pcVar3 != (char *)0x0) {
      pcVar3 = strndup(pcVar3,local_24);
      *puVar6 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        FUN_0002cef0(puVar2);
        return (undefined4 *)0x0;
      }
      pcVar3 = (char *)FUN_0002cd90(&local_28,&local_24,param_2,0);
      puVar6 = puVar6 + 1;
    }
    *puVar6 = 0;
  }
  return puVar2;
}



/* ===== FUN_0002d090 @ 0002d090 size=100 ===== */

char * FUN_0002d090(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  size_t sVar3;
  char *__dest;
  char *__dest_00;
  int iVar4;
  undefined4 *puVar5;
  char *__src;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)(DAT_0002d0f4 + 0x2d0a0);
  }
  sVar1 = strlen(param_2);
  iVar4 = 0;
  puVar5 = param_1;
  while (puVar5 != (undefined4 *)0x0) {
    if ((char *)*puVar5 == (char *)0x0) break;
    if (iVar4 != 0) {
      iVar4 = iVar4 + sVar1;
    }
    sVar3 = strlen((char *)*puVar5);
    iVar4 = iVar4 + sVar3;
    puVar5 = puVar5 + 1;
  }
  pcVar2 = malloc(iVar4 + 1);
  __dest_00 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    while (param_1 != (undefined4 *)0x0) {
      __src = (char *)*param_1;
      if (__src == (char *)0x0) break;
      __dest = pcVar2;
      if (__dest_00 != pcVar2) {
        __dest = stpcpy(__dest_00,param_2);
      }
      __dest_00 = stpcpy(__dest,__src);
      param_1 = param_1 + 1;
    }
    *__dest_00 = '\0';
  }
  return pcVar2;
}



/* ===== FUN_0002d884 @ 0002d884 size=12 ===== */

undefined4 FUN_0002d884(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  return uVar1;
}



/* ===== FUN_0002d890 @ 0002d890 size=254 ===== */

undefined4
FUN_0002d890(undefined4 *param_1,undefined4 param_2,uint param_3,char *param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  int iVar5;
  char *__format;
  char cVar6;
  char *__s;
  
  uVar3 = param_3;
  if ((int)(param_3 << 0x1f) < 0) {
    uVar1 = snprintf(param_4,param_5,(char *)(DAT_0002d990 + 0x2d8bc),param_1[5] + 0x76c,
                     param_1[4] + 1,param_1[3],param_3);
    if (uVar1 <= param_5) {
      param_5 = param_5 - uVar1;
      param_4 = param_4 + uVar1;
      goto LAB_0002d8d8;
    }
LAB_0002d8c2:
    warnx(DAT_0002d994 + 0x2d8c8);
    uVar2 = 0xffffffff;
  }
  else {
LAB_0002d8d8:
    __s = param_4;
    if ((param_3 & 3) == 3) {
      if (param_5 == 0) goto LAB_0002d8c2;
      param_5 = param_5 - 1;
      if ((param_3 & 0x20) == 0) {
        cVar6 = ' ';
      }
      else {
        cVar6 = 'T';
      }
      __s = param_4 + 1;
      *param_4 = cVar6;
    }
    if ((int)(param_3 << 0x1e) < 0) {
      uVar3 = snprintf(__s,param_5,(char *)(DAT_0002d998 + 0x2d908),param_1[2],param_1[1],*param_1,
                       uVar3);
      if (param_5 < uVar3) goto LAB_0002d8c2;
      param_5 = param_5 - uVar3;
      __s = __s + uVar3;
    }
    if ((int)(param_3 << 0x1c) < 0) {
      __format = (char *)(DAT_0002d99c + 0x2d92a);
LAB_0002d928:
      uVar3 = snprintf(__s,param_5,__format);
      if (param_5 < uVar3) goto LAB_0002d8c2;
      param_5 = param_5 - uVar3;
      __s = __s + uVar3;
    }
    else if ((int)(param_3 << 0x1b) < 0) {
      __format = (char *)(DAT_0002d9a0 + 0x2d952);
      goto LAB_0002d928;
    }
    if ((int)(param_3 << 0x1d) < 0) {
      uVar2 = FUN_0002d884(param_1);
      uVar4 = FUN_00034188(uVar2,0xe10);
      uVar2 = FUN_00034188(uVar2,0x3c);
      FUN_00034264(uVar2,0x3c);
      iVar5 = extraout_r1;
      if (extraout_r1 < 0) {
        iVar5 = -extraout_r1;
      }
      uVar3 = snprintf(__s,param_5,(char *)(DAT_0002d9a4 + 0x2d97c),uVar4,iVar5);
      if (param_5 < uVar3) goto LAB_0002d8c2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0002d9a8 @ 0002d9a8 size=76 ===== */

undefined4 FUN_0002d9a8(time_t *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  tm *ptVar1;
  undefined4 uVar2;
  tm tStack_44;
  
  if ((param_2 & 0x40) == 0) {
    ptVar1 = localtime_r(param_1,&tStack_44);
  }
  else {
    ptVar1 = gmtime_r(param_1,&tStack_44);
  }
  if (ptVar1 == (tm *)0x0) {
    warnx(DAT_0002d9f4 + 0x2d9ec);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0002d890(&tStack_44,param_1[1],param_2,param_3,param_4);
  }
  return uVar2;
}



/* ===== FUN_0002da0c @ 0002da0c size=76 ===== */

undefined4 FUN_0002da0c(time_t *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  tm *ptVar1;
  undefined4 uVar2;
  tm tStack_44;
  
  if ((param_2 & 0x40) == 0) {
    ptVar1 = localtime_r(param_1,&tStack_44);
  }
  else {
    ptVar1 = gmtime_r(param_1,&tStack_44);
  }
  if (ptVar1 == (tm *)0x0) {
    warnx(DAT_0002da58 + 0x2da50);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0002d890(&tStack_44,0,param_2,param_3,param_4);
  }
  return uVar2;
}



/* ===== FUN_0002da5c @ 0002da5c size=144 ===== */

int FUN_0002da5c(time_t *param_1,timeval *param_2,uint param_3,char *param_4,size_t param_5)

{
  uint uVar1;
  size_t sVar2;
  char *__format;
  tm tStack_78;
  tm tStack_4c;
  
  if (param_2->tv_sec == 0) {
    gettimeofday(param_2,(__timezone_ptr_t)0x0);
  }
  localtime_r(param_1,&tStack_78);
  localtime_r(&param_2->tv_sec,&tStack_4c);
  if (tStack_78.tm_yday == tStack_4c.tm_yday) {
    if (tStack_78.tm_year == tStack_4c.tm_year) {
      uVar1 = snprintf(param_4,param_5,(char *)(DAT_0002daec + 0x2daa6),tStack_78.tm_hour,
                       tStack_78.tm_min);
      if (param_5 < uVar1) {
        return -1;
      }
      return 0;
    }
  }
  else if (tStack_78.tm_year == tStack_4c.tm_year) {
    if ((param_3 & 2) == 0) {
      __format = (char *)(DAT_0002daf4 + 0x2dae4);
    }
    else {
      __format = (char *)(DAT_0002daf0 + 0x2dacc);
    }
    goto LAB_0002daca;
  }
  __format = (char *)((int)&DAT_0002daec + DAT_0002daf8);
LAB_0002daca:
  sVar2 = strftime(param_4,param_5,__format,&tStack_78);
  return -(uint)((int)sVar2 < 1);
}



/* ===== FUN_0002dafc @ 0002dafc size=62 ===== */

long FUN_0002dafc(char *param_1,char *param_2)

{
  char *__nptr;
  int *piVar1;
  long lVar2;
  char *local_14;
  
  local_14 = param_2;
  __nptr = getenv(param_1);
  if (__nptr != (char *)0x0) {
    local_14 = (char *)0x0;
    piVar1 = __errno_location();
    *piVar1 = 0;
    lVar2 = strtol(__nptr,&local_14,10);
    if ((((*piVar1 == 0) && (local_14 != (char *)0x0)) && (*local_14 == '\0')) &&
       ((__nptr < local_14 && (0 < lVar2)))) {
      return lVar2;
    }
  }
  return -1;
}



/* ===== FUN_0002db3a @ 0002db3a size=78 ===== */

undefined4 FUN_0002db3a(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *local_18;
  uint *puStack_14;
  
  local_18 = param_1;
  puStack_14 = param_2;
  iVar1 = ioctl(1,0x5413,&local_18);
  if (iVar1 == 0) {
    uVar2 = (uint)local_18 >> 0x10;
    uVar3 = (uint)local_18 & 0xffff;
    if (param_1 != (uint *)0x0) {
      if (uVar2 == 0) goto LAB_0002db5a;
LAB_0002db62:
      *param_1 = uVar2;
    }
    if (param_2 == (uint *)0x0) {
      return 0;
    }
    if (uVar3 != 0) goto LAB_0002db72;
  }
  else {
    if (param_1 != (uint *)0x0) {
      uVar3 = 0;
LAB_0002db5a:
      uVar2 = FUN_0002dafc(DAT_0002db88 + 0x2db60);
      goto LAB_0002db62;
    }
    if (param_2 == (uint *)0x0) {
      return 0;
    }
  }
  uVar3 = FUN_0002dafc(DAT_0002db8c + 0x2db6e);
LAB_0002db72:
  *param_2 = uVar3;
  return 0;
}



/* ===== FUN_0002dc84 @ 0002dc84 size=96 ===== */

void FUN_0002dc84(void)

{
  int iVar1;
  int *piVar2;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  utsname uStack_1a0;
  
  piVar2 = (int *)(DAT_0002dce4 + 0x2dc94);
  local_1ac = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  if (*piVar2 == -1) {
    iVar1 = uname(&uStack_1a0);
    if ((iVar1 == 0) &&
       (iVar1 = sscanf(uStack_1a0.release,(char *)(DAT_0002dcec + 0x2dcc0),&local_1ac,&local_1a8,
                       &local_1a4), iVar1 - 1U < 3)) {
      iVar1 = local_1a8 * 0x100 + local_1ac * 0x10000;
      if (local_1a4 < 0x100) {
        iVar1 = iVar1 + local_1a4;
      }
      else {
        iVar1 = iVar1 + 0xff;
      }
      *piVar2 = iVar1;
    }
    else {
      *(undefined4 *)(DAT_0002dce8 + 0x2dcb0) = 0;
    }
  }
  return;
}



/* ===== FUN_0002dcf0 @ 0002dcf0 size=214 ===== */

char * FUN_0002dcf0(undefined4 param_1,undefined4 param_2)

{
  int __fd;
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  size_t __nbytes;
  int iVar5;
  uint uVar6;
  timespec local_1030;
  char acStack_1028 [4100];
  
  snprintf(acStack_1028,0x1000,(char *)(DAT_0002ddcc + 0x2dd06),param_1,param_2);
  __fd = open64(acStack_1028,0);
  if (__fd < 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    uVar6 = 0;
    memset(acStack_1028,0,0x1000);
    iVar5 = 0;
    __nbytes = 0x1000;
    pcVar3 = acStack_1028;
    while( true ) {
      while( true ) {
        sVar1 = read(__fd,pcVar3,__nbytes);
        if (-1 < sVar1) break;
        piVar2 = __errno_location();
        if (((*piVar2 != 0xb) && (*piVar2 != 4)) || (4 < iVar5)) goto LAB_0002dd7e;
        iVar5 = iVar5 + 1;
        local_1030.tv_sec = 0;
        local_1030.tv_nsec = DAT_0002ddc8;
        nanosleep(&local_1030,(timespec *)0x0);
      }
      if (sVar1 == 0) break;
      __nbytes = __nbytes - sVar1;
      pcVar3 = pcVar3 + sVar1;
      uVar6 = uVar6 + sVar1;
      if (__nbytes == 0) break;
      iVar5 = 0;
    }
LAB_0002dd7e:
    if (uVar6 == 0) {
      pcVar3 = (char *)0x0;
    }
    else {
      uVar4 = 0;
      pcVar3 = acStack_1028;
      do {
        if (*pcVar3 == '\0') {
          *pcVar3 = ' ';
        }
        uVar4 = uVar4 + 1;
        pcVar3 = pcVar3 + 1;
      } while (uVar4 < uVar6);
      acStack_1028[uVar6 - 1] = '\0';
      pcVar3 = strdup(acStack_1028);
    }
    close(__fd);
  }
  return pcVar3;
}



/* ===== FUN_0002df42 @ 0002df42 size=336 ===== */

int FUN_0002df42(undefined4 *param_1,long *param_2)

{
  int *piVar1;
  DIR *__dirp;
  dirent64 *pdVar2;
  int iVar3;
  FILE *__stream;
  long lVar4;
  char *__format;
  char *__modes;
  char *__file;
  int iVar5;
  char *__format_00;
  char *local_112c;
  char acStack_1128 [256];
  stat64 asStack_1028 [39];
  
  iVar5 = DAT_0002e094 + 0x2df58;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (long *)0x0)) {
    iVar5 = -0x16;
  }
  else {
    *param_2 = 0;
    piVar1 = __errno_location();
    __format_00 = (char *)(DAT_0002e098 + 0x2df70);
    __format = (char *)(DAT_0002e09c + 0x2df72);
    __modes = (char *)(DAT_0002e0a0 + 0x2df78);
LAB_0002df7a:
    do {
      __dirp = (DIR *)*param_1;
      *piVar1 = 0;
      pdVar2 = readdir64(__dirp);
      if (pdVar2 == (dirent64 *)0x0) {
        if (*piVar1 == 0) {
          return 1;
        }
        goto LAB_0002df90;
      }
    } while (-1 < (int)((uint)*(ushort *)
                               (**(int **)(iVar5 + DAT_0002e0a4) + (uint)(byte)pdVar2->d_name[0] * 2
                               ) << 0x1c));
    __file = pdVar2->d_name;
    if ((int)((uint)*(byte *)(param_1 + 3) << 0x1e) < 0) {
      iVar3 = dirfd((DIR *)*param_1);
      iVar3 = fstatat64(iVar3,__file,asStack_1028,0);
      if ((iVar3 != 0) || (param_1[2] != asStack_1028[0].st_uid)) goto LAB_0002df7a;
    }
    if (-1 < (int)((uint)*(byte *)(param_1 + 3) << 0x1f)) goto LAB_0002e060;
    snprintf((char *)asStack_1028,0x1000,__format,__file);
    iVar3 = dirfd((DIR *)*param_1);
    iVar3 = openat64(iVar3,(char *)asStack_1028,0x80000);
    if (iVar3 < 0) goto LAB_0002df7a;
    __stream = fdopen(iVar3,__modes);
    if (__stream == (FILE *)0x0) {
      close(iVar3);
      goto LAB_0002df7a;
    }
    local_112c = fgets((char *)asStack_1028,0x1000,__stream);
    fclose(__stream);
    if (((local_112c == (char *)0x0) ||
        (iVar3 = sscanf((char *)asStack_1028,__format_00,acStack_1128), iVar3 != 1)) ||
       (iVar3 = strcmp(acStack_1128,(char *)param_1[1]), iVar3 != 0)) goto LAB_0002df7a;
LAB_0002e060:
    *piVar1 = 0;
    local_112c = (char *)0x0;
    lVar4 = strtol(__file,&local_112c,10);
    *param_2 = lVar4;
    if (*piVar1 == 0) {
      if ((local_112c == __file) ||
         ((iVar5 = 0, local_112c != (char *)0x0 && (*local_112c != '\0')))) {
LAB_0002df90:
        iVar5 = -1;
      }
    }
    else {
      iVar5 = -*piVar1;
    }
  }
  return iVar5;
}



/* ===== FUN_0002e0a8 @ 0002e0a8 size=84 ===== */

bool FUN_0002e0a8(int param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  timespec local_78;
  statfs64 local_70;
  
  piVar2 = __errno_location();
  lVar1 = DAT_0002e0fc;
  while( true ) {
    while( true ) {
      *piVar2 = 0;
      iVar3 = fstatfs64(param_1,&local_70);
      if (iVar3 < 0) break;
      if (iVar3 == 0) {
        return local_70.f_type == 0x9fa0;
      }
    }
    if ((*piVar2 != 4) && (*piVar2 != 0xb)) break;
    local_78.tv_sec = 0;
    local_78.tv_nsec = lVar1;
    nanosleep(&local_78,(timespec *)0x0);
  }
  return false;
}



/* ===== FUN_0002e118 @ 0002e118 size=42 ===== */

void FUN_0002e118(void *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  uint __n;
  
  if ((param_2 != (char *)0x0) && (sVar1 = strlen(param_2), sVar1 != 0)) {
    __n = param_3 - 1U;
    if (sVar1 <= param_3 - 1U) {
      __n = sVar1;
    }
    memcpy(param_1,param_2,__n);
    *(undefined1 *)((int)param_1 + __n) = 0;
  }
  return;
}



/* ===== FUN_0002e142 @ 0002e142 size=96 ===== */

void FUN_0002e142(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar3 = *(undefined4 **)(DAT_0002e1a4 + 0x2e14c + DAT_0002e1a8);
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((param_1 != 0) && (iVar1 = *(int *)(DAT_0002e1ac + 0x2e158) << 7, -1 < iVar1)) {
    fprintf((FILE *)*puVar3,(char *)(DAT_0002e1b0 + 0x2e164),param_1,iVar1,param_1,param_2,param_3);
  }
  vfprintf((FILE *)*puVar3,param_2,&uStack_8);
  __stream = (FILE *)*puVar3;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar2 = __stream->_IO_write_base;
    if (pcVar2 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar2 + 1;
      *pcVar2 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_0002e470 @ 0002e470 size=272 ===== */

undefined4 FUN_0002e470(char *param_1,char *param_2,undefined4 param_3)

{
  __pid_t _Var1;
  size_t sVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  FILE *pFVar6;
  int iVar7;
  char *pcVar8;
  
  iVar7 = DAT_0002e580 + 0x2e47c;
  if (param_1 == (char *)0x0) {
    uVar3 = 0xffffffea;
  }
  else {
    pcVar4 = param_1;
    if ((-1 < *(int *)(param_1 + 0x84)) &&
       (pcVar8 = param_2, close(*(int *)(param_1 + 0x84)),
       *(int *)(DAT_0002e584 + 0x2e490) << 0x1d < 0)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar7 + DAT_0002e588);
      _Var1 = getpid();
      pcVar4 = (char *)(DAT_0002e58c + 0x2e4a6);
      fprintf(pFVar6,(char *)(DAT_0002e590 + 0x2e4ac),_Var1,DAT_0002e594 + 0x2e4ae,pcVar4,pcVar8,
              param_3);
      FUN_0002e142(param_1,DAT_0002e598 + 0x2e4bc);
    }
    param_1[0x84] = -1;
    param_1[0x85] = -1;
    param_1[0x86] = -1;
    param_1[0x87] = -1;
    param_1[0x88] = '\0';
    param_1[0x89] = '\0';
    param_1[0x8a] = '\0';
    param_1[0x8b] = '\0';
    param_1[0x90] = '\0';
    param_1[0x91] = '\0';
    param_1[0x92] = '\0';
    param_1[0x93] = '\0';
    param_1[0x94] = '\0';
    param_1[0x95] = '\0';
    param_1[0x96] = '\0';
    param_1[0x97] = '\0';
    param_1[0x9c] = param_1[0x9c] & 0xfa;
    *param_1 = '\0';
    memset(param_1 + 0xa8,0,0x130);
    if (param_2 != (char *)0x0) {
      if (*param_2 == '/') {
        FUN_0002e118(param_1,param_2,0x80,0x2f,pcVar4);
      }
      else {
        if (*(int *)(param_1 + 0x98) << 0x18 < 0) {
          sVar2 = strlen(param_2);
          if (sVar2 < 5) {
            return 0xffffffff;
          }
          param_2 = param_2 + 4;
          iVar5 = DAT_0002e59c + 0x2e510;
        }
        else {
          iVar5 = DAT_0002e5b8 + 0x2e56a;
        }
        snprintf(param_1,0x80,(char *)(DAT_0002e5a0 + 0x2e51a),iVar5,param_2);
      }
      if (*(int *)(DAT_0002e5a4 + 0x2e522) << 0x1d < 0) {
        pFVar6 = (FILE *)**(undefined4 **)(iVar7 + DAT_0002e588);
        _Var1 = getpid();
        fprintf(pFVar6,(char *)(DAT_0002e5ac + 0x2e53e),_Var1,DAT_0002e5b0 + 0x2e540,
                DAT_0002e5a8 + 0x2e538);
        FUN_0002e142(param_1,DAT_0002e5b4 + 0x2e550,param_2);
      }
    }
    FUN_00031e34(*(undefined4 *)(param_1 + 0xa0));
    uVar3 = 0;
    param_1[0xa0] = '\0';
    param_1[0xa1] = '\0';
    param_1[0xa2] = '\0';
    param_1[0xa3] = '\0';
  }
  return uVar3;
}



/* ===== FUN_0002e5ca @ 0002e5ca size=572 ===== */

int FUN_0002e5ca(void *param_1,undefined4 param_2)

{
  char *__nptr;
  ulong uVar1;
  int iVar2;
  __uid_t _Var3;
  __uid_t _Var4;
  __pid_t _Var5;
  __gid_t _Var6;
  __gid_t _Var7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  FILE *pFVar11;
  stat64 local_288;
  undefined1 auStack_220 [132];
  undefined4 local_19c;
  
  iVar8 = DAT_0002e80c + 0x2e5e6;
  memset(auStack_220,0,0x200);
  local_19c = 0xffffffff;
  if (param_1 == (void *)0x0) {
    return -0x16;
  }
  piVar9 = (int *)(DAT_0002e810 + 0x2e5fc);
  if (*piVar9 == 0) {
    __nptr = getenv((char *)(DAT_0002e814 + 0x2e60a));
    if (__nptr == (char *)0x0) {
      *piVar9 = 0;
    }
    else {
      uVar1 = strtoul(__nptr,(char **)&local_288,0);
      if (((char *)local_288.st_dev != (char *)0x0) &&
         (iVar2 = strcmp((char *)local_288.st_dev,(char *)(DAT_0002e818 + 0x2e628)), iVar2 == 0)) {
        uVar1 = 0xffff;
      }
      *(ulong *)(DAT_0002e81c + 0x2e63a) = uVar1;
    }
    uVar10 = *(uint *)(DAT_0002e820 + 0x2e642);
    if (uVar10 != 0) {
      _Var3 = getuid();
      _Var4 = geteuid();
      if (_Var3 == _Var4) {
        _Var6 = getgid();
        _Var7 = getegid();
        if (_Var6 == _Var7) goto LAB_0002e678;
      }
      *(uint *)(DAT_0002e824 + 0x2e65e) = uVar10 | 0x1000000;
      pFVar11 = (FILE *)**(undefined4 **)(iVar8 + DAT_0002e828);
      _Var5 = getpid();
      fprintf(pFVar11,(char *)(DAT_0002e830 + 0x2e672),_Var5,DAT_0002e82c + 0x2e670);
    }
LAB_0002e678:
    *(uint *)(DAT_0002e834 + 0x2e67e) = *(uint *)(DAT_0002e834 + 0x2e67e) | 2;
  }
  if (*(int *)(DAT_0002e838 + 0x2e68a) << 0x1d < 0) {
    pFVar11 = (FILE *)**(undefined4 **)(iVar8 + DAT_0002e828);
    _Var5 = getpid();
    fprintf(pFVar11,(char *)(DAT_0002e840 + 0x2e6a6),_Var5,DAT_0002e844 + 0x2e6a8,
            DAT_0002e83c + 0x2e6a0);
    FUN_0002e142(param_1,DAT_0002e848 + 0x2e6b6);
  }
  memcpy(param_1,auStack_220,0x200);
  *(undefined4 *)((int)param_1 + 0x98) = param_2;
  iVar2 = FUN_0002e470(param_1,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = stat64((char *)(DAT_0002e84c + 0x2e6e2),&local_288);
  if ((iVar2 != 0) || ((local_288.st_mode & 0xf000) != 0x4000)) {
    *(uint *)((int)param_1 + 0x98) = *(uint *)((int)param_1 + 0x98) & 0xffffffbf | 0x20;
    if (-1 < *(int *)(DAT_0002e850 + 0x2e708) << 0x1d) goto LAB_0002e78c;
    pFVar11 = (FILE *)**(undefined4 **)(iVar8 + DAT_0002e828);
    _Var5 = getpid();
    fprintf(pFVar11,(char *)(DAT_0002e858 + 0x2e726),_Var5,DAT_0002e85c + 0x2e728,
            DAT_0002e854 + 0x2e720);
    FUN_0002e142(param_1,DAT_0002e860 + 0x2e736);
  }
  if (((-1 < *(int *)((int)param_1 + 0x98) << 0x1a) &&
      (iVar2 = FUN_0002dc84(), DAT_0002e808 < iVar2)) &&
     (*(uint *)((int)param_1 + 0x98) = *(uint *)((int)param_1 + 0x98) | 0x40,
     *(int *)(DAT_0002e864 + 0x2e75c) << 0x1d < 0)) {
    pFVar11 = (FILE *)**(undefined4 **)(iVar8 + DAT_0002e828);
    _Var5 = getpid();
    fprintf(pFVar11,(char *)(DAT_0002e86c + 0x2e77a),_Var5,DAT_0002e870 + 0x2e77c,
            DAT_0002e868 + 0x2e774);
    FUN_0002e142(param_1,DAT_0002e874 + 0x2e78a);
  }
LAB_0002e78c:
  if (((-1 < *(int *)((int)param_1 + 0x98) << 0x17) &&
      (iVar2 = stat64((char *)(DAT_0002e878 + 0x2e79c),&local_288), iVar2 == 0)) &&
     (*(uint *)((int)param_1 + 0x98) = *(uint *)((int)param_1 + 0x98) | 0x100,
     *(int *)(DAT_0002e87c + 0x2e7b2) << 0x1d < 0)) {
    pFVar11 = (FILE *)**(undefined4 **)(iVar8 + DAT_0002e828);
    _Var5 = getpid();
    fprintf(pFVar11,(char *)(DAT_0002e884 + 0x2e7ce),_Var5,DAT_0002e888 + 0x2e7d0,
            DAT_0002e880 + 0x2e7c8);
    FUN_0002e142(param_1,DAT_0002e88c + 0x2e7de);
  }
  return 0;
}



/* ===== FUN_0002e8ae @ 0002e8ae size=138 ===== */

undefined4 FUN_0002e8ae(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  FILE *__stream;
  
  iVar5 = DAT_0002e938 + 0x2e8b8;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar3 = 0xffffffea;
  }
  else {
    if (*(int *)(param_1 + 0x84) < 0) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x98) & 2;
      iVar1 = open64(param_1,*(uint *)(param_1 + 0x98) & 2 | 0x80000,param_3,
                     *(int *)(param_1 + 0x84),param_1,param_2,param_3);
      iVar4 = *(int *)(DAT_0002e93c + 0x2e8e4);
      *(int *)(param_1 + 0x84) = iVar1;
      if (iVar4 << 0x1d < 0) {
        __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_0002e940);
        _Var2 = getpid();
        fprintf(__stream,(char *)(DAT_0002e948 + 0x2e904),_Var2,DAT_0002e94c + 0x2e906,
                DAT_0002e944 + 0x2e8fe);
        if (*(int *)(param_1 + 0x98) << 0x1e < 0) {
          iVar5 = DAT_0002e958 + 0x2e932;
        }
        else {
          iVar5 = DAT_0002e950 + 0x2e91a;
        }
        FUN_0002e142(param_1,DAT_0002e954 + 0x2e922,param_1,iVar5);
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x84);
  }
  return uVar3;
}



/* ===== FUN_0002e96c @ 0002e96c size=194 ===== */

undefined4 FUN_0002e96c(int param_1,undefined4 param_2)

{
  __pid_t _Var1;
  int iVar2;
  undefined4 uVar3;
  FILE *__stream;
  stat64 sStack_80;
  
  if (param_1 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    if (*(int *)(DAT_0002ea34 + 0x2e986) << 0x1c < 0) {
      __stream = (FILE *)**(undefined4 **)(DAT_0002ea30 + 0x2e974 + DAT_0002ea38);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_0002ea40 + 0x2e9a2),_Var1,DAT_0002ea44 + 0x2e9a4,
              DAT_0002ea3c + 0x2e99c);
      FUN_0002e142((undefined4 *)(param_1 + 0x1d8),DAT_0002ea48 + 0x2e9b2);
    }
    uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = uVar3;
    *(undefined4 *)(param_1 + 0x1e0) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(param_1 + 0x1e4) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = uVar3;
    *(undefined4 *)(param_1 + 0x1f0) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = uVar3;
    *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1f8) = param_2;
    *(byte *)(param_1 + 500) = *(byte *)(param_1 + 500) | 2;
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x9c) << 0x1e)) {
      if (((-1 < *(int *)(param_1 + 0x98) << 0x18) &&
          (iVar2 = stat64((char *)(DAT_0002ea4c + 0x2e9fa),&sStack_80), iVar2 == 0)) &&
         ((sStack_80.st_mode & 0xf000) == 0x4000)) {
        *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x80;
      }
      *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000313a8 @ 000313a8 size=82 ===== */

int FUN_000313a8(char *param_1,char **param_2,ulong *param_3)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  
  piVar1 = __errno_location();
  iVar3 = DAT_000313fc + 0x313be;
  *piVar1 = 0;
  if (((param_1 != (char *)0x0) && (*param_1 != 0)) &&
     ((int)((uint)*(ushort *)(**(int **)(iVar3 + DAT_00031400) + *param_1 * 2) << 0x1c) < 0)) {
    uVar2 = strtoul(param_1,param_2,10);
    *param_3 = uVar2;
    if (*piVar1 != 0) {
      return -*piVar1;
    }
    if (*param_2 != param_1) {
      return 0;
    }
  }
  return -0x16;
}



/* ===== FUN_00031404 @ 00031404 size=20 ===== */

char * FUN_00031404(char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if ((param_1 != (char *)0x0) && (pcVar1 = strchr(param_1,param_2), pcVar1 != (char *)0x0)) {
    pcVar1 = pcVar1 + 1;
  }
  return pcVar1;
}



/* ===== FUN_00031418 @ 00031418 size=36 ===== */

void FUN_00031418(int param_1,size_t *param_2,uint *param_3)

{
  void *pvVar1;
  size_t __size;
  
  __size = (param_1 + 0x1fU >> 5) << 2;
  pvVar1 = malloc(__size);
  if (pvVar1 != (void *)0x0) {
    if (param_2 != (size_t *)0x0) {
      *param_2 = __size;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = param_1 + 0x1fU & 0xffffffe0;
    }
  }
  return;
}



/* ===== FUN_0003143c @ 0003143c size=4 ===== */

void FUN_0003143c(void)

{
  (*(code *)PTR_free_0004c384)();
  return;
}



/* ===== FUN_00031650 @ 00031650 size=248 ===== */

undefined4 FUN_00031650(char *param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  sVar1 = strlen(param_1);
  pcVar5 = param_1 + (sVar1 - 1);
  if ((1 < sVar1) && (iVar2 = memcmp(param_1,(void *)(DAT_00031748 + 0x31672),2), iVar2 == 0)) {
    param_1 = param_1 + 2;
  }
  uVar6 = 0;
  memset(param_2,0,param_3);
  while( true ) {
    if (pcVar5 < param_1) {
      return 0;
    }
    if (*pcVar5 == ',') {
      pcVar5 = pcVar5 + -1;
    }
    uVar4 = (int)*pcVar5 - 0x30;
    if (9 < uVar4) {
      iVar2 = tolower((int)*pcVar5);
      if (iVar2 - 0x61U < 6) {
        uVar4 = iVar2 - 0x57;
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    if ((char)uVar4 == -1) break;
    if (((int)(uVar4 << 0x1f) < 0) && (uVar6 >> 3 < param_3)) {
      *(uint *)((int)param_2 + (uVar6 >> 5) * 4) =
           *(uint *)((int)param_2 + (uVar6 >> 5) * 4) | 1 << (uVar6 & 0x1f);
    }
    if (((int)(uVar4 << 0x1e) < 0) && (uVar3 = uVar6 + 1, uVar3 >> 3 < param_3)) {
      *(uint *)((int)param_2 + (uVar3 >> 5) * 4) =
           1 << (uVar3 & 0x1f) | *(uint *)((int)param_2 + (uVar3 >> 5) * 4);
    }
    if (((int)(uVar4 << 0x1d) < 0) && (uVar3 = uVar6 + 2, uVar3 >> 3 < param_3)) {
      *(uint *)((int)param_2 + (uVar3 >> 5) * 4) =
           1 << (uVar3 & 0x1f) | *(uint *)((int)param_2 + (uVar3 >> 5) * 4);
    }
    if (((int)(uVar4 << 0x1c) < 0) && (uVar4 = uVar6 + 3, uVar4 >> 3 < param_3)) {
      *(uint *)((int)param_2 + (uVar4 >> 5) * 4) =
           1 << (uVar4 & 0x1f) | *(uint *)((int)param_2 + (uVar4 >> 5) * 4);
    }
    pcVar5 = pcVar5 + -1;
    uVar6 = uVar6 + 4;
  }
  return 0xffffffff;
}



/* ===== FUN_0003174c @ 0003174c size=260 ===== */

bool FUN_0003174c(int param_1,void *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char *local_38;
  uint local_34;
  uint local_30;
  int local_2c [2];
  
  local_38 = (char *)0x0;
  memset(param_2,0,param_3);
  do {
    iVar2 = FUN_00031404(param_1,0x2c);
    if (param_1 == 0) {
      if (local_38 == (char *)0x0) {
        bVar6 = false;
      }
      else {
        bVar6 = *local_38 != '\0';
      }
      return bVar6;
    }
    iVar3 = FUN_000313a8(param_1,&local_38,&local_34);
    pcVar1 = local_38;
    if (iVar3 != 0) {
      return true;
    }
    local_30 = local_34;
    local_2c[0] = 1;
    uVar4 = FUN_00031404(local_38,0x2d);
    if ((uVar4 != 0) && ((uVar5 = FUN_00031404(pcVar1,0x2c), uVar5 == 0 || (uVar4 < uVar5)))) {
      iVar3 = FUN_000313a8(uVar4,&local_38,&local_30);
      if (iVar3 != 0) {
        return true;
      }
      if ((((local_38 != (char *)0x0) && (*local_38 != '\0')) &&
          (uVar4 = FUN_00031404(local_38,0x3a), uVar4 != 0)) && ((uVar5 == 0 || (uVar4 < uVar5)))) {
        iVar3 = FUN_000313a8(uVar4,&local_38,local_2c);
        if (iVar3 != 0) {
          return true;
        }
        if (local_2c[0] == 0) {
          return true;
        }
      }
    }
    uVar4 = local_34;
    if (local_30 < local_34) {
      return true;
    }
    for (; param_1 = iVar2, uVar4 <= local_30; uVar4 = uVar4 + local_2c[0]) {
      if ((param_4 != 0) && (param_3 << 3 <= uVar4)) {
        return (bool)2;
      }
      if (uVar4 >> 3 < param_3) {
        *(uint *)((int)param_2 + (uVar4 >> 5) * 4) =
             *(uint *)((int)param_2 + (uVar4 >> 5) * 4) | 1 << (uVar4 & 0x1f);
      }
    }
  } while( true );
}



/* ===== FUN_00031850 @ 00031850 size=96 ===== */

void FUN_00031850(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar3 = *(undefined4 **)(DAT_000318b0 + 0x3185a + DAT_000318b4);
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((param_1 != 0) && (iVar1 = *(int *)(DAT_000318b8 + 0x31866) << 7, -1 < iVar1)) {
    fprintf((FILE *)*puVar3,(char *)(DAT_000318bc + 0x31872),param_1,iVar1,param_1,param_2,param_3);
  }
  vfprintf((FILE *)*puVar3,param_2,&uStack_8);
  __stream = (FILE *)*puVar3;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar2 = __stream->_IO_write_base;
    if (pcVar2 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar2 + 1;
      *pcVar2 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_000318c0 @ 000318c0 size=74 ===== */

void FUN_000318c0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = *(undefined4 **)(DAT_0003190c + 0x318d2 + DAT_00031910);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  __stream = (FILE *)*puVar2;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar1 = __stream->_IO_write_base;
    if (pcVar1 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_00031914 @ 00031914 size=68 ===== */

char * FUN_00031914(int param_1,char *param_2,__gnuc_va_list param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  iVar2 = vsnprintf((char *)(param_1 + 0x10),0x1000,param_2,param_3);
  if (iVar2 < 0) {
    pcVar3 = (char *)0x0;
    if (*piVar1 == 0) {
      *piVar1 = 0x16;
      pcVar3 = (char *)0x0;
    }
  }
  else {
    pcVar3 = (char *)(param_1 + 0x10);
    if (0xfff < iVar2) {
      *piVar1 = 0x24;
      pcVar3 = (char *)0x0;
    }
  }
  return pcVar3;
}



/* ===== FUN_00031958 @ 00031958 size=74 ===== */

char * FUN_00031958(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(param_1 + 0xc);
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = pcVar3;
  if ((pcVar5 != (char *)0x0) && (pcVar4 = pcVar5, pcVar3 != (char *)0x0)) {
    if (*pcVar3 == '/') {
      pcVar3 = pcVar3 + 1;
    }
    iVar1 = snprintf((char *)(param_1 + 0x10),0x1000,(char *)(DAT_000319a4 + 0x3197e),pcVar5,pcVar3,
                     param_2);
    if (-1 < iVar1) {
      if (iVar1 < 0x1000) {
        return (char *)(param_1 + 0x10);
      }
      piVar2 = __errno_location();
      *piVar2 = 0x24;
    }
    pcVar4 = (char *)0x0;
  }
  return pcVar4;
}



/* ===== FUN_000319a8 @ 000319a8 size=92 ===== */

undefined4 FUN_000319a8(int param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  int *piVar2;
  ssize_t sVar3;
  int iVar4;
  timespec local_28;
  
  pvVar1 = DAT_00031a04;
  local_28.tv_sec = param_1;
  local_28.tv_nsec = (long)param_2;
LAB_000319ba:
  do {
    if (param_3 == 0) {
      return 0;
    }
    piVar2 = __errno_location();
    *piVar2 = 0;
    sVar3 = write(param_1,param_2,param_3);
    iVar4 = *piVar2;
    if (sVar3 < 1) goto LAB_000319f6;
    param_3 = param_3 - sVar3;
    if (param_3 != 0) {
      param_2 = (void *)((int)param_2 + sVar3);
    }
  } while (iVar4 != 0xb);
  goto LAB_000319e8;
LAB_000319f6:
  if (iVar4 != 4) {
    if (iVar4 != 0xb) {
      return 0xffffffff;
    }
LAB_000319e8:
    local_28.tv_sec = 0;
    local_28.tv_nsec = (long)pvVar1;
    nanosleep(&local_28,(timespec *)0x0);
  }
  goto LAB_000319ba;
}



/* ===== FUN_00031ad4 @ 00031ad4 size=10 ===== */

void FUN_00031ad4(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



/* ===== FUN_00031ade @ 00031ade size=122 ===== */

undefined4 FUN_00031ade(int *param_1,char *param_2)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  char *extraout_r1;
  char *__s;
  int iVar4;
  FILE *__stream;
  char *pcVar5;
  
  iVar4 = DAT_00031b58 + 0x31aee;
  __s = param_2;
  pcVar5 = param_2;
  if (-1 < *param_1) {
    __assert((char *)(DAT_00031b64 + 0x31afe),(char *)(DAT_00031b60 + 0x31afc),0x6d);
    __s = extraout_r1;
  }
  if ((__s == (char *)0x0) || (param_2 = strdup(__s), param_2 != (char *)0x0)) {
    free((void *)param_1[3]);
    iVar1 = DAT_00031b68;
    param_1[3] = (int)param_2;
    uVar3 = 0;
    if ((*(uint *)(iVar1 + 0x31b1a) & 4) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00031b6c);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_00031b74 + 0x31b38),_Var2,DAT_00031b78 + 0x31b3a,
              DAT_00031b70 + 0x31b32,pcVar5);
      FUN_00031850(param_1,DAT_00031b7c + 0x31b4a,param_2);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xfffffff4;
  }
  return uVar3;
}



/* ===== FUN_00031b80 @ 00031b80 size=6 ===== */

undefined4 FUN_00031b80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}



/* ===== FUN_00031b86 @ 00031b86 size=114 ===== */

undefined4 FUN_00031b86(int *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  __pid_t _Var3;
  undefined4 uVar4;
  int iVar5;
  FILE *__stream;
  
  iVar5 = DAT_00031bf8 + 0x31b92;
  pcVar2 = (char *)0x0;
  if ((param_2 == (char *)0x0) || (pcVar2 = strdup(param_2), pcVar2 != (char *)0x0)) {
    if (-1 < *param_1) {
      close(*param_1);
      *param_1 = -1;
    }
    free((void *)param_1[1]);
    iVar1 = DAT_00031bfc;
    param_1[1] = (int)pcVar2;
    uVar4 = 0;
    if ((*(uint *)(iVar1 + 0x31bba) & 4) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00031c00);
      _Var3 = getpid();
      fprintf(__stream,(char *)(DAT_00031c08 + 0x31bd8),_Var3,DAT_00031c0c + 0x31bda,
              DAT_00031c04 + 0x31bd2,param_2);
      FUN_00031850(param_1,DAT_00031c10 + 0x31bea,pcVar2);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xfffffff4;
  }
  return uVar4;
}



/* ===== FUN_00031c1a @ 00031c1a size=78 ===== */

undefined4 FUN_00031c1a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  __pid_t _Var2;
  FILE *__stream;
  
  iVar1 = DAT_00031c68;
  *(undefined4 *)(param_1 + 0x1010) = param_2;
  *(undefined4 *)(param_1 + 0x1014) = param_3;
  if (*(int *)(DAT_00031c6c + 0x31c34) << 0x1d < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar1 + 0x31c30 + DAT_00031c70);
    _Var2 = getpid();
    fprintf(__stream,(char *)(DAT_00031c78 + 0x31c50),_Var2,DAT_00031c7c + 0x31c52,
            DAT_00031c74 + 0x31c4a,param_2,param_3);
    FUN_00031850(param_1,DAT_00031c80 + 0x31c60);
  }
  return 0;
}



/* ===== FUN_00031c84 @ 00031c84 size=10 ===== */

undefined4 FUN_00031c84(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1010);
  }
  return uVar1;
}



/* ===== FUN_00031c8e @ 00031c8e size=10 ===== */

undefined4 FUN_00031c8e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1018) = param_2;
  return 0;
}



/* ===== FUN_00031c98 @ 00031c98 size=54 ===== */

bool FUN_00031c98(int *param_1)

{
  bool bVar1;
  int *extraout_r0;
  char *__name;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    __assert((char *)(DAT_00031cd8 + 0x31cae),(char *)(DAT_00031cd4 + 0x31cac),0xc9);
    param_1 = extraout_r0;
  }
  if (*param_1 < 0) {
    __name = (char *)FUN_00031958();
    bVar1 = false;
    if (__name != (char *)0x0) {
      iVar2 = access(__name,0);
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* ===== FUN_00031cdc @ 00031cdc size=148 ===== */

int FUN_00031cdc(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  int *extraout_r0;
  int *piVar2;
  __pid_t _Var3;
  char *__file;
  int __line;
  int iVar4;
  FILE *__stream;
  
  iVar4 = DAT_00031d70 + 0x31ce6;
  piVar2 = param_1;
  if (param_1 != (int *)0x0) goto LAB_00031cfa;
  __line = 0xd6;
  __file = (char *)(DAT_00031d78 + 0x31cf6);
  pcVar1 = (char *)(DAT_00031d7c + 0x31cf8);
  while( true ) {
    __assert(pcVar1,__file,__line);
    piVar2 = extraout_r0;
LAB_00031cfa:
    if (piVar2[1] != 0) break;
    __line = 0xd7;
    __file = (char *)(DAT_00031d84 + 0x31d0e);
    pcVar1 = (char *)(DAT_00031d88 + 0x31d10);
  }
  if (*piVar2 < 0) {
    pcVar1 = (char *)FUN_00031958();
    if (pcVar1 == (char *)0x0) {
      piVar2 = __errno_location();
      return -*piVar2;
    }
    if (*(int *)(DAT_00031d8c + 0x31d30) << 0x1d < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00031d90);
      _Var3 = getpid();
      fprintf(__stream,(char *)(DAT_00031d98 + 0x31d4c),_Var3,DAT_00031d9c + 0x31d4e,
              DAT_00031d94 + 0x31d46,param_2);
      FUN_00031850(param_1,DAT_00031da0 + 0x31d5e,pcVar1);
    }
    iVar4 = open64(pcVar1,0x80000);
    *param_1 = iVar4;
  }
  return *param_1;
}



/* ===== FUN_00031da4 @ 00031da4 size=104 ===== */

void FUN_00031da4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *extraout_r0;
  int *piVar1;
  __pid_t _Var2;
  int iVar3;
  int extraout_r3;
  FILE *__stream;
  
  iVar3 = DAT_00031e0c + 0x31dac;
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    __assert((char *)(DAT_00031e18 + 0x31dc0),(char *)(DAT_00031e14 + 0x31dbe),0xe8);
    piVar1 = extraout_r0;
    iVar3 = extraout_r3;
  }
  if (-1 < *piVar1) {
    if (*(int *)(DAT_00031e1c + 0x31dce) << 0x1d < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00031e20);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_00031e28 + 0x31dea),_Var2,DAT_00031e2c + 0x31dec,
              DAT_00031e24 + 0x31de4,param_2,param_3);
      FUN_00031850(param_1,DAT_00031e30 + 0x31dfa);
    }
    close(*param_1);
    *param_1 = -1;
  }
  return;
}



/* ===== FUN_00031e34 @ 00031e34 size=126 ===== */

void FUN_00031e34(int param_1)

{
  __pid_t _Var1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  
  iVar2 = DAT_00031eb4 + 0x31e3e;
  if ((param_1 != 0) &&
     (iVar3 = *(int *)(param_1 + 8) + -1, *(int *)(param_1 + 8) = iVar3, iVar3 < 1)) {
    if (*(int *)(DAT_00031eb8 + 0x31e50) << 0x1d < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00031ebc);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_00031ec4 + 0x31e6c),_Var1,DAT_00031ec8 + 0x31e6e,
              DAT_00031ec0 + 0x31e66);
      FUN_00031850(param_1,DAT_00031ecc + 0x31e7c);
    }
    if (*(int *)(param_1 + 0x1010) != 0) {
      (**(code **)(param_1 + 0x1014))(param_1);
    }
    FUN_00031da4(param_1);
    free(*(void **)(param_1 + 4));
    free(*(void **)(param_1 + 0xc));
    (*(code *)PTR_free_0004c384)(param_1);
    return;
  }
  return;
}



/* ===== FUN_00031ed0 @ 00031ed0 size=128 ===== */

undefined4 * FUN_00031ed0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  __pid_t _Var2;
  int iVar3;
  undefined4 *puVar4;
  FILE *__stream;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  puVar1 = calloc(1,0x101c);
  puVar4 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(DAT_00031f54 + 0x31eee) << 0x1d < 0) {
      __stream = (FILE *)**(undefined4 **)(DAT_00031f50 + 0x31ee6 + DAT_00031f58);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_00031f60 + 0x31f0a),_Var2,DAT_00031f64 + 0x31f0c,
              DAT_00031f5c + 0x31f04,param_2,param_3,param_4);
      FUN_00031850(puVar1,DAT_00031f68 + 0x31f1a);
    }
    puVar1[2] = 1;
    *puVar1 = 0xffffffff;
    if (param_1 != (char *)0x0) {
      iVar3 = vasprintf((char **)(puVar1 + 1),param_1,&uStack_c);
      if ((iVar3 < 0) || (puVar1[1] == 0)) {
        puVar4 = (undefined4 *)0x0;
        FUN_00031e34(puVar1);
      }
    }
  }
  return puVar4;
}



/* ===== FUN_00032028 @ 00032028 size=224 ===== */

int FUN_00032028(int param_1,int param_2,char *param_3,int param_4)

{
  int __fd;
  __pid_t _Var1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  FILE *pFVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int local_1c;
  
  iVar6 = DAT_00032108 + 0x32038;
  local_1c = param_4;
  if (param_1 == 0) {
    __fd = access(param_3,param_2);
    if (*(int *)(DAT_0003210c + 0x32044) << 0x1d < 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar6 + DAT_00032110);
      _Var1 = getpid();
      fprintf(pFVar5,(char *)(DAT_00032118 + 0x32062),_Var1,DAT_0003211c + 0x32064,
              DAT_00032114 + 0x3205c);
      FUN_000318c0(DAT_00032120 + 0x32074,param_3,__fd);
    }
  }
  else {
    iVar3 = param_1;
    iVar7 = param_2;
    pcVar8 = param_3;
    __fd = FUN_00031cdc();
    if (-1 < __fd) {
      if (*param_3 == '/') {
        param_3 = param_3 + 1;
      }
      local_1c = __fd;
      __fd = faccessat(__fd,param_3,param_2,0);
      if ((((__fd != 0) && (piVar2 = __errno_location(), *piVar2 == 2)) &&
          (pcVar4 = *(code **)(param_1 + 0x1018), pcVar4 != (code *)0x0)) &&
         (iVar3 = (*pcVar4)(param_1,param_3,&local_1c,pcVar4,iVar3,iVar7,pcVar8), iVar3 == 0)) {
        __fd = faccessat(local_1c,param_3,param_2,0);
      }
      if (*(int *)(DAT_00032124 + 0x320d4) << 0x1d < 0) {
        pFVar5 = (FILE *)**(undefined4 **)(iVar6 + DAT_00032110);
        _Var1 = getpid();
        fprintf(pFVar5,(char *)(DAT_0003212c + 0x320f0),_Var1,DAT_00032130 + 0x320f2,
                DAT_00032128 + 0x320ea);
        FUN_00031850(param_1,DAT_00032134 + 0x32102,param_3,__fd);
      }
    }
  }
  return __fd;
}



/* ===== FUN_0003227c @ 0003227c size=242 ===== */

int FUN_0003227c(int param_1,int param_2,char *param_3)

{
  int __fd;
  __pid_t _Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  FILE *pFVar6;
  int iVar7;
  int local_24 [2];
  
  iVar7 = DAT_00032370 + 0x32290;
  if (param_1 == 0) {
    __fd = open64(param_3,param_2);
    if (*(int *)(DAT_00032374 + 0x3229c) << 0x1d < 0) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar7 + DAT_00032378);
      _Var1 = getpid();
      fprintf(pFVar6,(char *)(DAT_00032380 + 0x322bc),_Var1,DAT_00032384 + 0x322be,
              DAT_0003237c + 0x322b6);
      FUN_000318c0(DAT_00032388 + 0x322cc,param_3);
    }
  }
  else {
    __fd = FUN_00031cdc();
    if (-1 < __fd) {
      if (*param_3 == '/') {
        param_3 = param_3 + 1;
      }
      local_24[0] = __fd;
      iVar2 = openat64(__fd,param_3,param_2);
      __fd = iVar2;
      if ((((iVar2 < 0) && (piVar3 = __errno_location(), *piVar3 == 2)) &&
          (*(code **)(param_1 + 0x1018) != (code *)0x0)) &&
         (iVar4 = (**(code **)(param_1 + 0x1018))(param_1,param_3,local_24), iVar4 == 0)) {
        __fd = openat64(local_24[0],param_3,param_2);
      }
      if (*(int *)(DAT_0003238c + 0x32326) << 0x1d < 0) {
        pFVar6 = (FILE *)**(undefined4 **)(iVar7 + DAT_00032378);
        _Var1 = getpid();
        fprintf(pFVar6,(char *)(DAT_00032394 + 0x32346),_Var1,DAT_00032398 + 0x32348,
                DAT_00032390 + 0x32340);
        if (__fd == iVar2) {
          puVar5 = (undefined *)(DAT_0003239c + 0x32358);
        }
        else {
          puVar5 = &UNK_0003236e + DAT_000323a4;
        }
        FUN_00031850(param_1,DAT_000323a0 + 0x32360,param_3,puVar5);
      }
    }
  }
  return __fd;
}



/* ===== FUN_000323ea @ 000323ea size=126 ===== */

undefined4 FUN_000323ea(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r2;
  char *pcVar5;
  char *pcVar6;
  
  uVar4 = 0;
  pcVar5 = param_2;
  while (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar6;
    if (cVar1 == 'r') {
      if (*pcVar6 == '+') {
        uVar4 = uVar4 | 2;
      }
    }
    else if (cVar1 == 'w') {
      if (*pcVar6 == '+') {
        uVar4 = uVar4 | 0x202;
      }
      else {
        uVar4 = uVar4 | 0x201;
      }
    }
    else if (cVar1 == 'a') {
      if (*pcVar6 == '+') {
        uVar4 = uVar4 | 0x402;
      }
      else {
        uVar4 = uVar4 | 0x401;
      }
    }
    else if (cVar1 == 'e') {
      uVar4 = uVar4 | 0x80000;
    }
  }
  iVar3 = FUN_0003227c(param_1,uVar4);
  if (iVar3 < 0) {
    return 0;
  }
  uVar2 = (*(code *)PTR_fdopen_0004c224)(iVar3,param_2,extraout_r2,param_4);
  return uVar2;
}



/* ===== FUN_00032466 @ 00032466 size=32 ===== */

void FUN_00032466(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00031914(param_1,param_3,param_4);
  if (iVar1 != 0) {
    FUN_000323ea(param_1,param_2,iVar1,param_4);
    return;
  }
  return;
}



/* ===== FUN_00032486 @ 00032486 size=178 ===== */

int FUN_00032486(undefined4 param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  FILE *__stream;
  int *piVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char acStack_31 [5];
  undefined4 local_2c [2];
  
  iVar6 = 0;
  *param_2 = 0;
  iVar5 = -(param_3 * 7 + 7U & 0xfffffff8);
  __stream = (FILE *)FUN_00032466(param_1,DAT_00032538 + 0x324ae,param_5,param_6);
  if (__stream == (FILE *)0x0) {
    piVar1 = __errno_location();
    iVar6 = -*piVar1;
  }
  else {
    pcVar2 = fgets(acStack_31 + iVar5 + 1,param_3 * 7,__stream);
    if (pcVar2 == (char *)0x0) {
      piVar1 = __errno_location();
      iVar6 = -*piVar1;
    }
    fclose(__stream);
    if (iVar6 == 0) {
      sVar3 = strlen(acStack_31 + iVar5 + 1);
      if (acStack_31[(sVar3 - 1) + iVar5 + 1] == '\n') {
        acStack_31[(sVar3 - 1) + iVar5 + 1] = '\0';
      }
      iVar4 = FUN_00031418(param_3,local_2c,0);
      *param_2 = iVar4;
      if (iVar4 == 0) {
        iVar6 = -0xc;
      }
      else {
        if (param_4 == 0) {
          iVar5 = FUN_00031650(acStack_31 + iVar5 + 1,iVar4,local_2c[0]);
        }
        else {
          iVar5 = FUN_0003174c(acStack_31 + iVar5 + 1,iVar4,local_2c[0],0);
        }
        if (iVar5 != 0) {
          iVar6 = -0x16;
          FUN_0003143c(*param_2);
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_00032556 @ 00032556 size=136 ===== */

DIR * FUN_00032556(int param_1,int param_2)

{
  int iVar1;
  DIR *__dirp;
  __pid_t _Var2;
  FILE *__stream;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      return (DIR *)0x0;
    }
    if (*(int *)(DAT_000325e4 + 0x32594) << 0x1d < 0) {
      __stream = (FILE *)**(undefined4 **)(DAT_000325e0 + 0x3255e + DAT_000325e8);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_000325f0 + 0x325b0),_Var2,DAT_000325f4 + 0x325b2,
              DAT_000325ec + 0x325aa);
      FUN_00031850(param_1,DAT_000325f8 + 0x325c0);
    }
    iVar1 = FUN_00031cdc(param_1);
    if (iVar1 < 0) {
      return (DIR *)0x0;
    }
    iVar1 = FUN_00028ce4(iVar1,3);
  }
  else {
    iVar1 = FUN_0003227c(param_1,0x80000,param_2,DAT_000325e0 + 0x3255e,param_1,param_2);
  }
  if (iVar1 < 0) {
    return (DIR *)0x0;
  }
  __dirp = fdopendir(iVar1);
  if (__dirp != (DIR *)0x0) {
    if (param_2 == 0) {
      rewinddir(__dirp);
      return __dirp;
    }
    return __dirp;
  }
  close(iVar1);
  return (DIR *)0x0;
}



/* ===== FUN_000325fc @ 000325fc size=24 ===== */

void FUN_000325fc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00031914();
  if (iVar1 != 0) {
    FUN_00032556(param_1,iVar1);
    return;
  }
  return;
}



/* ===== FUN_0003262e @ 0003262e size=76 ===== */

int FUN_0003262e(undefined4 param_1,char *param_2,int param_3,char *param_4)

{
  char *__path;
  int *piVar1;
  int iVar2;
  char extraout_r3;
  char cVar3;
  char extraout_r3_00;
  
  if (param_4 == (char *)0x0) {
    __path = (char *)FUN_00031958();
    if (__path == (char *)0x0) {
      piVar1 = __errno_location();
      return -*piVar1;
    }
    iVar2 = readlink(__path,param_2,param_3 - 1);
    cVar3 = extraout_r3;
  }
  else {
    iVar2 = FUN_00031cdc();
    if (iVar2 < 0) {
      return iVar2;
    }
    if (*param_4 == '/') {
      param_4 = param_4 + 1;
    }
    iVar2 = readlinkat(iVar2,param_4,param_2,param_3 - 1);
    cVar3 = extraout_r3_00;
  }
  if (-1 < iVar2) {
    cVar3 = '\0';
  }
  if (-1 < iVar2) {
    param_2[iVar2] = cVar3;
  }
  return iVar2;
}



/* ===== FUN_000326b2 @ 000326b2 size=220 ===== */

int FUN_000326b2(undefined4 param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  int __fd;
  int *piVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  int iVar4;
  int iVar5;
  FILE *__stream;
  timespec local_30;
  
  __fd = FUN_0003227c(param_1,0x80000,param_4);
  iVar5 = DAT_00032794 + 0x326d0;
  piVar1 = __errno_location();
  if (__fd < 0) {
    iVar4 = -*piVar1;
  }
  else {
    if (*(int *)(DAT_00032798 + 0x326ee) << 0x1d < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_0003279c);
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_000327a4 + 0x3270e),_Var2,DAT_000327a8 + 0x32710,
              DAT_000327a0 + 0x32708);
      FUN_000318c0(DAT_000327ac + 0x3271e,param_4);
    }
    iVar5 = 0;
    memset(param_2,0,param_3);
    iVar4 = 0;
    while (param_3 != 0) {
      sVar3 = read(__fd,param_2,param_3);
      if (sVar3 < 0) {
        if (((*piVar1 != 0xb) && (*piVar1 != 4)) || (4 < iVar5)) {
          if (iVar4 == 0) {
            iVar4 = -1;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        local_30.tv_sec = 0;
        local_30.tv_nsec = DAT_00032790;
        nanosleep(&local_30,(timespec *)0x0);
      }
      else {
        if (sVar3 == 0) break;
        param_3 = param_3 - sVar3;
        param_2 = (void *)((int)param_2 + sVar3);
        iVar4 = iVar4 + sVar3;
        iVar5 = 0;
      }
    }
    iVar5 = *piVar1;
    close(__fd);
    *piVar1 = iVar5;
  }
  return iVar4;
}



/* ===== FUN_000327b0 @ 000327b0 size=44 ===== */

int FUN_000327b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00031914(param_1,param_4,param_5);
  if (iVar1 != 0) {
    iVar1 = FUN_000326b2(param_1,param_2,param_3,iVar1);
    return iVar1;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== FUN_000327fa @ 000327fa size=82 ===== */

int FUN_000327fa(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  char acStack_1011 [4097];
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    *param_2 = 0;
    iVar1 = FUN_000326b2(param_1,acStack_1011 + 1,0xfff,param_3);
    if (((-1 < iVar1) && (iVar1 != 0)) &&
       ((acStack_1011[iVar1] != '\n' || (iVar1 = iVar1 + -1, iVar1 != 0)))) {
      acStack_1011[iVar1 + 1] = '\0';
      pcVar2 = strdup(acStack_1011 + 1);
      *param_2 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        iVar1 = -0xc;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_000328e0 @ 000328e0 size=116 ===== */

int FUN_000328e0(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  FILE *__s;
  __pid_t _Var1;
  int iVar2;
  FILE *__stream;
  undefined4 uStack_4;
  
  iVar2 = DAT_00032958;
  uStack_4 = param_4;
  __s = (FILE *)FUN_000323ea(param_1,DAT_00032954 + 0x328f0,param_2,param_4,param_1,param_2,param_3,
                             param_4);
  if (__s == (FILE *)0x0) {
    iVar2 = -0x16;
  }
  else {
    if (*(int *)(DAT_0003295c + 0x328fe) << 0x1d < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar2 + 0x328f6 + DAT_00032960);
      _Var1 = getpid();
      fprintf(__stream,(char *)(DAT_00032968 + 0x3291a),_Var1,DAT_0003296c + 0x3291c,
              DAT_00032964 + 0x32914);
      FUN_000318c0(DAT_00032970 + 0x3292c,param_3,param_2);
    }
    iVar2 = vfscanf(__s,param_3,&uStack_4);
    fclose(__s);
  }
  return iVar2;
}



/* ===== FUN_000329b0 @ 000329b0 size=54 ===== */

undefined4 FUN_000329b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_000328e0(param_1,param_3,DAT_000329e8 + 0x329c6,&local_10);
  if (iVar1 == 1) {
    if (param_2 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      *param_2 = (undefined4)local_10;
      param_2[1] = local_10._4_4_;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00032a20 @ 00032a20 size=54 ===== */

undefined4 FUN_00032a20(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_000328e0(param_1,param_3,DAT_00032a58 + 0x32a36,&local_10);
  if (iVar1 == 1) {
    if (param_2 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      *param_2 = (undefined4)local_10;
      param_2[1] = local_10._4_4_;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00032a5c @ 00032a5c size=52 ===== */

int FUN_00032a5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  iVar1 = FUN_00031914(param_1,param_3,&uStack_4,param_4,param_1,&uStack_4,param_3);
  if (iVar1 == 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  else {
    iVar1 = FUN_00032a20(param_1,param_2,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00032a90 @ 00032a90 size=46 ===== */

undefined4 FUN_00032a90(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  uStack_10 = param_3;
  iVar1 = FUN_000328e0(param_1,param_3,DAT_00032ac0 + 0x32aa0,&local_14,param_1);
  if (iVar1 == 1) {
    if (param_2 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      *param_2 = local_14;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00032af8 @ 00032af8 size=42 ===== */

undefined4 FUN_00032af8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = (int)param_2;
  iVar1 = FUN_000328e0(param_1,param_3,DAT_00032b24 + 0x32b06,&local_c,param_1);
  if (iVar1 == 1) {
    if (param_2 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      *param_2 = local_c;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00032e3c @ 00032e3c size=96 ===== */

void FUN_00032e3c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar3 = *(undefined4 **)(DAT_00032e9c + 0x32e46 + DAT_00032ea0);
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((param_1 != 0) && (iVar1 = *(int *)(DAT_00032ea4 + 0x32e52) << 7, -1 < iVar1)) {
    fprintf((FILE *)*puVar3,(char *)(DAT_00032ea8 + 0x32e5e),param_1,iVar1,param_1,param_2,param_3);
  }
  vfprintf((FILE *)*puVar3,param_2,&uStack_8);
  __stream = (FILE *)*puVar3;
  if (__stream->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stream);
  }
  else {
    pcVar2 = __stream->_IO_write_base;
    if (pcVar2 < __stream->_IO_buf_base) {
      __stream->_IO_write_base = pcVar2 + 1;
      *pcVar2 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  return;
}



/* ===== FUN_00032f30 @ 00032f30 size=42 ===== */

void FUN_00032f30(void *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  uint __n;
  
  if ((param_2 != (char *)0x0) && (sVar1 = strlen(param_2), sVar1 != 0)) {
    __n = param_3 - 1U;
    if (sVar1 <= param_3 - 1U) {
      __n = sVar1;
    }
    memcpy(param_1,param_2,__n);
    *(undefined1 *)((int)param_1 + __n) = 0;
  }
  return;
}



/* ===== FUN_00032f5a @ 00032f5a size=60 ===== */

dirent64 * FUN_00032f5a(DIR *param_1)

{
  dirent64 *pdVar1;
  int iVar2;
  char *__s2;
  char *__s2_00;
  
  __s2 = (char *)(DAT_00032f98 + 0x32f6a);
  __s2_00 = (char *)(DAT_00032f9c + 0x32f6c);
  do {
    pdVar1 = readdir64(param_1);
    if (pdVar1 == (dirent64 *)0x0) {
      return (dirent64 *)0x0;
    }
    iVar2 = strcmp(pdVar1->d_name,__s2);
  } while ((iVar2 == 0) || (iVar2 = strcmp(pdVar1->d_name,__s2_00), iVar2 == 0));
  return pdVar1;
}



/* ===== FUN_00032fa0 @ 00032fa0 size=84 ===== */

longlong FUN_00032fa0(char *param_1)

{
  FILE *__stream;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_18;
  uint uStack_14;
  
  local_18 = 0;
  uStack_14 = 0;
  __stream = fopen64(param_1,(char *)(DAT_00032ff4 + 0x32fae));
  if (__stream == (FILE *)0x0) {
    lVar2 = 0;
  }
  else {
    iVar1 = fscanf(__stream,(char *)(DAT_00032ff8 + 0x32fc4),&local_18,&uStack_14);
    if (iVar1 == 2) {
      uVar3 = gnu_dev_makedev(local_18,uStack_14);
      lVar2 = (uVar3 & 0xffffffff00000000) + (uVar3 & 0xffffffff);
    }
    else {
      lVar2 = 0;
    }
    fclose(__stream);
  }
  return lVar2;
}



/* ===== FUN_00032ffc @ 00032ffc size=126 ===== */

undefined4 FUN_00032ffc(undefined4 param_1,char *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  __pid_t _Var3;
  int iVar4;
  FILE *__stream;
  char *pcVar5;
  int *piVar6;
  
  iVar4 = DAT_0003307c + 0x3300c;
  pcVar5 = param_2;
  piVar6 = param_3;
  iVar1 = FUN_00031c84();
  if (((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) &&
     (iVar2 = strncmp(param_2,(char *)(DAT_00033080 + 0x33028),6), iVar2 == 0)) {
    iVar1 = FUN_00031cdc(iVar1);
    *param_3 = iVar1;
    if (-1 < iVar1) {
      if ((*(uint *)(DAT_00033084 + 0x33044) & 4) == 0) {
        return 0;
      }
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00033088);
      _Var3 = getpid();
      fprintf(__stream,(char *)(DAT_00033090 + 0x33062),_Var3,DAT_00033094 + 0x33064,
              DAT_0003308c + 0x3305c,pcVar5,piVar6);
      FUN_00032e3c(param_1,DAT_00033098 + 0x33074,param_2);
      return 0;
    }
  }
  return 1;
}



/* ===== FUN_0003309c @ 0003309c size=24 ===== */

void FUN_0003309c(char *param_1)

{
  char *pcVar1;
  
  if (param_1 != (char *)0x0) {
    while (pcVar1 = strchr(param_1,0x21), pcVar1 != (char *)0x0) {
      *pcVar1 = '/';
    }
  }
  return;
}



/* ===== FUN_000330b4 @ 000330b4 size=24 ===== */

void FUN_000330b4(char *param_1)

{
  char *pcVar1;
  
  if (param_1 != (char *)0x0) {
    while (pcVar1 = strchr(param_1,0x2f), pcVar1 != (char *)0x0) {
      *pcVar1 = '!';
    }
  }
  return;
}



/* ===== FUN_000330cc @ 000330cc size=160 ===== */

void FUN_000330cc(undefined4 param_1,char *param_2)

{
  char *__nptr;
  ulong uVar1;
  int iVar2;
  __uid_t _Var3;
  __uid_t _Var4;
  __pid_t _Var5;
  __gid_t _Var6;
  __gid_t _Var7;
  int *piVar8;
  uint uVar9;
  FILE *__stream;
  int iVar10;
  char *local_14;
  
  piVar8 = (int *)(DAT_0003316c + 0x330d6);
  iVar10 = DAT_00033170 + 0x330d8;
  if (*piVar8 != 0) {
    return;
  }
  local_14 = param_2;
  __nptr = getenv((char *)(DAT_00033174 + 0x330e2));
  if (__nptr == (char *)0x0) {
    *piVar8 = 0;
  }
  else {
    uVar1 = strtoul(__nptr,&local_14,0);
    if ((local_14 != (char *)0x0) &&
       (iVar2 = strcmp(local_14,(char *)(DAT_00033178 + 0x330fc)), iVar2 == 0)) {
      uVar1 = 0xffff;
    }
    *(ulong *)(DAT_0003317c + 0x3310e) = uVar1;
  }
  uVar9 = *(uint *)(DAT_00033180 + 0x33114);
  if (uVar9 != 0) {
    _Var3 = getuid();
    _Var4 = geteuid();
    if (_Var3 == _Var4) {
      _Var6 = getgid();
      _Var7 = getegid();
      if (_Var6 == _Var7) goto LAB_00033148;
    }
    *(uint *)(DAT_00033184 + 0x3312e) = uVar9 | 0x1000000;
    __stream = (FILE *)**(undefined4 **)(iVar10 + DAT_00033188);
    _Var5 = getpid();
    fprintf(__stream,(char *)(DAT_00033190 + 0x33142),_Var5,DAT_0003318c + 0x33140);
  }
LAB_00033148:
  *(uint *)(DAT_00033194 + 0x3314e) = *(uint *)(DAT_00033194 + 0x3314e) | 2;
  return;
}



/* ===== FUN_00033198 @ 00033198 size=108 ===== */

undefined4 FUN_00033198(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  __pid_t _Var3;
  undefined4 uVar4;
  FILE *__stream;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2;
  iVar2 = FUN_00031c84();
  iVar5 = DAT_00033204 + 0x331a8;
  if ((param_1 == 0) || (iVar2 == 0)) {
    uVar4 = 0xffffffea;
  }
  else {
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_00031e34();
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    if (param_2 != 0) {
      FUN_00031ad4(param_2);
    }
    iVar1 = DAT_00033208;
    *(int *)(iVar2 + 8) = param_2;
    uVar4 = 0;
    if ((*(uint *)(iVar1 + 0x331c8) & 4) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_0003320c);
      _Var3 = getpid();
      fprintf(__stream,(char *)(DAT_00033214 + 0x331e6),_Var3,DAT_00033218 + 0x331e8,
              DAT_00033210 + 0x331e0,iVar6,param_3);
      FUN_00032e3c(param_1,DAT_0003321c + 0x331f6);
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* ===== FUN_00033220 @ 00033220 size=254 ===== */

int FUN_00033220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  __pid_t _Var6;
  FILE *pFVar7;
  int iVar8;
  char acStack_50 [52];
  
  uVar1 = gnu_dev_major(CONCAT44(param_4,param_3));
  iVar8 = DAT_00033320 + 0x3323c;
  uVar2 = gnu_dev_minor(CONCAT44(param_4,param_3));
  snprintf(acStack_50,0x2e,(char *)(DAT_00033324 + 0x3324e),uVar1,uVar2);
  iVar3 = FUN_00031b86(param_1,acStack_50);
  iVar4 = iVar3;
  if ((iVar3 == 0) && (iVar4 = FUN_00031cdc(param_1), -1 < iVar4)) {
    puVar5 = (undefined4 *)FUN_00031c84(param_1);
    if (puVar5 == (undefined4 *)0x0) {
      if (*(int *)(DAT_00033328 + 0x3327c) << 0x1d < 0) {
        pFVar7 = (FILE *)**(undefined4 **)(iVar8 + DAT_0003332c);
        _Var6 = getpid();
        fprintf(pFVar7,(char *)(DAT_00033334 + 0x33298),_Var6,DAT_00033338 + 0x3329a,
                DAT_00033330 + 0x33292);
        FUN_00032e3c(param_1,DAT_0003333c + 0x332a8);
      }
      puVar5 = calloc(1,0x20);
      if (puVar5 == (undefined4 *)0x0) {
        return -0xc;
      }
      FUN_00031c1a(param_1,puVar5,DAT_00033340 + 0x332c0);
      FUN_00031c8e(param_1,DAT_00033344 + 0x332ca);
    }
    if (*(int *)(DAT_00033348 + 0x332d2) << 0x1d < 0) {
      pFVar7 = (FILE *)**(undefined4 **)(iVar8 + DAT_0003332c);
      _Var6 = getpid();
      fprintf(pFVar7,(char *)(DAT_00033350 + 0x332ee),_Var6,DAT_00033354 + 0x332f0,
              DAT_0003334c + 0x332e8);
      FUN_00032e3c(param_1,DAT_00033358 + 0x332fe);
    }
    *puVar5 = param_3;
    puVar5[1] = param_4;
    FUN_00033198(param_1,param_5);
    iVar4 = iVar3;
  }
  return iVar4;
}



/* ===== FUN_0003335c @ 0003335c size=118 ===== */

int FUN_0003335c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  FILE *__stream;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = param_2;
  uVar8 = param_3;
  uVar6 = FUN_00031ed0(0);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  iVar4 = (int)uVar6;
  iVar5 = DAT_000333d4 + 0x33374;
  if (iVar4 != 0) {
    if (param_4 != 0) {
      FUN_00031ade(iVar4,param_4);
      uVar3 = extraout_r1;
    }
    iVar1 = FUN_00033220(iVar4,uVar3,param_1,param_2,param_3,uVar7,uVar8);
    if (iVar1 == 0) {
      if (*(int *)(DAT_000333d8 + 0x333a2) << 0x1d < 0) {
        __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000333dc);
        _Var2 = getpid();
        fprintf(__stream,(char *)(DAT_000333e4 + 0x333be),_Var2,DAT_000333e8 + 0x333c0,
                DAT_000333e0 + 0x333b8);
        FUN_00032e3c(iVar4,DAT_000333ec + 0x333ce);
      }
    }
    else {
      FUN_00031e34(iVar4);
      iVar4 = 0;
    }
  }
  return iVar4;
}



/* ===== FUN_000333fc @ 000333fc size=78 ===== */

void * FUN_000333fc(undefined4 param_1,void *param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  char acStack_1010 [4096];
  
  iVar1 = FUN_0003262e(param_1,acStack_1010,0x1000,0);
  if (-1 < iVar1) {
    pcVar2 = strrchr(acStack_1010,0x2f);
    if (pcVar2 == (char *)0x0) {
      return (void *)0x0;
    }
    sVar3 = strlen(pcVar2 + 1);
    if (sVar3 + 1 <= param_3) {
      memcpy(param_2,pcVar2 + 1,sVar3 + 1);
      FUN_0003309c(param_2);
      return param_2;
    }
  }
  return (void *)0x0;
}



/* ===== FUN_0003344a @ 0003344a size=168 ===== */

uint FUN_0003344a(DIR *param_1,int param_2,char *param_3)

{
  size_t __n;
  size_t sVar1;
  int iVar2;
  char *__s;
  int iVar3;
  char acStack_120 [268];
  
  iVar3 = DAT_000334f4 + 0x3345e;
  if ((*(byte *)(param_2 + 0x12) == 10) || ((*(byte *)(param_2 + 0x12) & 0xfb) == 0)) {
    if (param_3 == (char *)0x0) {
      snprintf(acStack_120,0x106,(char *)(DAT_000334fc + 0x334ce),param_2 + 0x13);
      iVar3 = dirfd(param_1);
      iVar3 = faccessat(iVar3,acStack_120,4,0);
      return (uint)(iVar3 == 0);
    }
    if (*param_3 == '/') {
      param_3 = strrchr(param_3,0x2f);
      if (param_3 == (char *)0x0) {
        return 0;
      }
      param_3 = param_3 + 1;
    }
    __s = (char *)(param_2 + 0x13);
    __n = strlen(param_3);
    sVar1 = strlen(__s);
    if ((__n < sVar1) && (iVar2 = strncmp(param_3,__s,__n), iVar2 == 0)) {
      iVar3 = **(int **)(iVar3 + DAT_000334f8);
      if ((__s[__n] == 0x70) && ((int)((uint)*(ushort *)(iVar3 + __s[__n + 1] * 2) << 0x1c) < 0)) {
        return 1;
      }
      return (*(ushort *)(iVar3 + __s[__n] * 2) & 0xf) >> 3;
    }
  }
  return 0;
}



/* ===== FUN_00033500 @ 00033500 size=56 ===== */

int FUN_00033500(undefined4 param_1,undefined4 param_2)

{
  DIR *__dirp;
  int iVar1;
  int iVar2;
  
  __dirp = (DIR *)FUN_00032556(param_1,0);
  if (__dirp == (DIR *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    while (iVar1 = FUN_00032f5a(__dirp), iVar1 != 0) {
      iVar1 = FUN_0003344a(__dirp,iVar1,param_2);
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
    }
    closedir(__dirp);
  }
  return iVar2;
}



/* ===== FUN_00033618 @ 00033618 size=64 ===== */

char * FUN_00033618(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DIR *__dirp;
  int iVar1;
  char *__ptr;
  
  __dirp = (DIR *)FUN_00032556(param_1,DAT_00033658 + 0x33620,param_3,param_4,param_4);
  __ptr = (char *)0x0;
  if (__dirp != (DIR *)0x0) {
    __ptr = (char *)0x0;
    while (iVar1 = FUN_00032f5a(__dirp), iVar1 != 0) {
      if (__ptr != (char *)0x0) {
        free(__ptr);
        closedir(__dirp);
        return (char *)0x0;
      }
      __ptr = strdup((char *)(iVar1 + 0x13));
    }
    closedir(__dirp);
  }
  return __ptr;
}



/* ===== FUN_00033830 @ 00033830 size=124 ===== */

bool FUN_00033830(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  char *local_14;
  
  local_14 = (char *)0x0;
  iVar1 = FUN_0003335c(param_1,param_2,0,0,param_1);
  if (((iVar1 != 0) &&
      (iVar2 = FUN_000327fa(iVar1,&local_14,DAT_000338ac + 0x3385e), pcVar3 = local_14, 0 < iVar2))
     && (local_14 != (char *)0x0)) {
    iVar2 = strncmp(local_14,(char *)(DAT_000338b0 + 0x33874),4);
    if (iVar2 != 0) {
      iVar2 = strncmp(pcVar3,(char *)(DAT_000338b4 + 0x3389a),0x11);
      bVar4 = iVar2 == 0;
      goto LAB_00033844;
    }
    pcVar3 = strrchr(pcVar3 + 4,0x2d);
    if (pcVar3 != (char *)0x0) {
      bVar4 = pcVar3[1] != '\0';
      goto LAB_00033844;
    }
  }
  bVar4 = false;
LAB_00033844:
  FUN_00031e34(iVar1);
  if (param_3 == (undefined4 *)0x0) {
    free(local_14);
  }
  else {
    *param_3 = local_14;
  }
  return bVar4;
}



/* ===== FUN_000338b8 @ 000338b8 size=190 ===== */

int FUN_000338b8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char acStack_1020 [4096];
  
  iVar2 = FUN_00031c84();
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x1c);
    if (-1 < (int)((uint)bVar1 << 0x1e)) {
      if (-1 < (int)((uint)bVar1 << 0x1f)) {
        *(byte *)(iVar2 + 0x1c) = bVar1 | 2;
        iVar3 = FUN_0003262e(param_1,acStack_1020,0x1000,DAT_00033978 + 0x338fe);
        if (iVar3 < 0) {
          return iVar3;
        }
        pcVar4 = strrchr(acStack_1020,0x2f);
        if ((pcVar4 == (char *)0x0) ||
           (iVar3 = sscanf(pcVar4 + 1,(char *)(DAT_0003397c + 0x3392c),iVar2 + 0xc,iVar2 + 0x10,
                           iVar2 + 0x14,iVar2 + 0x18), iVar3 != 4)) {
          return -1;
        }
        *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) | 1;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(iVar2 + 0xc);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar2 + 0x10);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(iVar2 + 0x14);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)(iVar2 + 0x18);
      }
      *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0xfd;
      return 0;
    }
  }
  return -0x16;
}



/* ===== FUN_00033c48 @ 00033c48 size=370 ===== */

longlong FUN_00033c48(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *__ptr;
  char *__ptr_00;
  size_t __n;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  stat64 asStack_1028 [39];
  
  if (param_1 == 0) {
    param_1 = DAT_00033dbc + 0x33c62;
  }
  if (param_2 == (char *)0x0) {
    __assert((char *)(DAT_00033dc8 + 0x33c74),(char *)(DAT_00033dc4 + 0x33c72),0x371);
  }
  iVar1 = strncmp((char *)(DAT_00033dcc + 0x33c80),param_2,5);
  if (iVar1 == 0) {
    iVar1 = stat64(param_2,asStack_1028);
    if (iVar1 == 0) {
      __ptr_00 = (char *)0x0;
      __ptr = (char *)0x0;
      lVar4 = CONCAT44(asStack_1028[0].st_rdev._4_4_,(undefined4)asStack_1028[0].st_rdev);
      goto LAB_00033c98;
    }
    param_2 = param_2 + 5;
  }
  __ptr = strdup(param_2);
  if (__ptr == (char *)0x0) {
    __ptr_00 = (char *)0x0;
LAB_00033cd6:
    lVar4 = 0;
  }
  else {
    FUN_000330b4();
    if (param_3 == (char *)0x0) {
      __ptr_00 = (char *)0x0;
LAB_00033cde:
      uVar2 = snprintf((char *)asStack_1028,0x1000,(char *)(DAT_00033dd0 + 0x33cee),param_1,__ptr);
      if (0xfff < uVar2) goto LAB_00033cd6;
      lVar3 = FUN_00032fa0(asStack_1028);
      lVar4 = lVar3;
      if (((lVar3 != 0) ||
          ((((param_3 != (char *)0x0 && (__n = strlen(param_3), __n != 0)) &&
            (iVar1 = strncmp(param_2,param_3,__n), iVar1 == 0)) &&
           ((param_2 + __n != (char *)0x0 &&
            ((uVar2 = snprintf((char *)asStack_1028,0x1000,(char *)(DAT_00033dd8 + 0x33d60),param_1,
                               __ptr_00,__ptr), 0xfff < uVar2 ||
             (lVar4 = FUN_00032fa0(asStack_1028), lVar4 != 0)))))))) ||
         (uVar2 = snprintf((char *)asStack_1028,0x1000,(char *)(DAT_00033dd4 + 0x33d22),param_1,
                           __ptr), lVar4 = lVar3, 0xfff < uVar2)) goto LAB_00033c98;
    }
    else {
      __ptr_00 = strdup(param_3);
      if (__ptr_00 == (char *)0x0) goto LAB_00033cd6;
      iVar1 = strncmp((char *)(DAT_00033ddc + 0x33d8a),param_2,3);
      if (iVar1 == 0) goto LAB_00033cde;
      FUN_000330b4(__ptr_00);
      uVar2 = snprintf((char *)asStack_1028,0x1000,(char *)(DAT_00033de0 + 0x33da4),param_1,__ptr_00
                       ,__ptr);
      if (0xfff < uVar2) goto LAB_00033cd6;
    }
    lVar4 = FUN_00032fa0(asStack_1028);
  }
LAB_00033c98:
  free(__ptr);
  free(__ptr_00);
  return lVar4;
}



/* ===== FUN_00033de4 @ 00033de4 size=10 ===== */

void FUN_00033de4(undefined4 param_1)

{
  FUN_00033c48(0,param_1);
  return;
}



/* ===== FUN_00033dee @ 00033dee size=12 ===== */

undefined8 FUN_00033dee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00031c84();
  return *puVar1;
}



/* ===== FUN_00033dfa @ 00033dfa size=342 ===== */

undefined4 FUN_00033dfa(int param_1,int param_2,int param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  char *__s1;
  void *__ptr;
  undefined4 uVar3;
  longlong lVar4;
  char *pcStack_1024;
  char *local_1020 [1024];
  
  if (param_1 != 0) {
    iVar2 = FUN_00032028(param_1,0,DAT_00033f50 + 0x33e1e);
    if (iVar2 == 0) {
      iVar2 = FUN_0003262e(param_1,local_1020,0x1000,0);
      if (-1 < iVar2) {
        FUN_00028e8a(local_1020);
        iVar2 = FUN_00028e8a(local_1020);
        if (iVar2 != 0) {
          FUN_0003309c();
          if ((param_2 != 0) && (param_3 != 0)) {
            FUN_00032f30(param_2,iVar2,param_3);
          }
          if (param_4 == (longlong *)0x0) {
            return 0;
          }
          uVar3 = FUN_00031b80(param_1);
          lVar4 = FUN_00033c48(uVar3,iVar2,0);
          *param_4 = lVar4;
          if (lVar4 != 0) {
            return 0;
          }
        }
      }
    }
    else {
      bVar1 = false;
      pcStack_1024 = (char *)0x0;
      FUN_000327fa(param_1,&pcStack_1024,DAT_00033f54 + 0x33e3a);
      local_1020[0] = pcStack_1024;
      if (((pcStack_1024 != (char *)0x0) &&
          (__s1 = strsep(local_1020,(char *)(DAT_00033f58 + 0x33e50)), __s1 != (char *)0x0)) &&
         (iVar2 = strncasecmp(__s1,(char *)(DAT_00033f5c + 0x33e5c),4), iVar2 == 0)) {
        bVar1 = true;
      }
      free(pcStack_1024);
      if ((bVar1) && (__ptr = (void *)FUN_00033618(param_1), __ptr != (void *)0x0)) {
        if ((param_2 != 0) && (param_3 != 0)) {
          FUN_00032f30(param_2,__ptr,param_3);
        }
        if (param_4 == (longlong *)0x0) {
          iVar2 = 0;
        }
        else {
          uVar3 = FUN_00031b80(param_1);
          lVar4 = FUN_00033c48(uVar3,__ptr,0);
          *param_4 = lVar4;
          if (lVar4 == 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = 0;
          }
        }
        free(__ptr);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((param_2 == 0) || (iVar2 = FUN_000333fc(param_1,param_2,param_3), iVar2 != 0)) {
        if (param_4 != (longlong *)0x0) {
          lVar4 = FUN_00033dee(param_1);
          *param_4 = lVar4;
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00033f60 @ 00033f60 size=58 ===== */

undefined4
FUN_00033f60(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = FUN_0003335c(param_1,param_2,0);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      uVar2 = FUN_00033dfa(iVar1,param_3,param_4,param_5);
      FUN_00031e34(iVar1);
    }
  }
  return uVar2;
}



/* ===== FUN_00033f9a @ 00033f9a size=46 ===== */

undefined4 FUN_00033f9a(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int iStack_14;
  
  iVar1 = FUN_00033f60(param_1,param_2,0,0,&local_18);
  if (iVar1 == 0) {
    if (iStack_14 == param_2 && local_18 == param_1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00033fc8 @ 00033fc8 size=102 ===== */

char * FUN_00033fc8(undefined4 param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  longlong lVar4;
  stat64 sStack_80;
  
  __s = (char *)FUN_000333fc();
  if ((__s != (char *)0x0) && (sVar2 = strlen(__s), sVar2 + 6 <= param_3)) {
    memmove(param_2 + 5,__s,sVar2 + 1);
    cVar1 = *(char *)(DAT_00034030 + 0x34004);
    *(undefined4 *)param_2 = *(undefined4 *)(DAT_00034030 + 0x34000);
    param_2[4] = cVar1;
    iVar3 = stat64(param_2,&sStack_80);
    if ((iVar3 == 0) &&
       (((sStack_80.st_mode & 0xf000) == 0x6000 &&
        (lVar4 = FUN_00033dee(param_1),
        lVar4 == CONCAT44(sStack_80.st_rdev._4_4_,(undefined4)sStack_80.st_rdev))))) {
      return param_2;
    }
  }
  return (char *)0x0;
}



/* ===== FUN_00034034 @ 00034034 size=40 ===== */

undefined4 FUN_00034034(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0003335c(param_1,param_2,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00033fc8(iVar1,param_3,param_4);
    FUN_00031e34(iVar1);
  }
  return uVar2;
}



/* ===== FUN_0003405c @ 0003405c size=40 ===== */

undefined4 FUN_0003405c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0003335c(param_1,param_2,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_000333fc(iVar1,param_3,param_4);
    FUN_00031e34(iVar1);
  }
  return uVar2;
}



/* ===== FUN_00034084 @ 00034084 size=60 ===== */

undefined4 FUN_00034084(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1014 [4104];
  
  iVar1 = FUN_0003335c(param_1,param_2,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000333fc(iVar1,auStack_1014,0x1001);
    uVar2 = FUN_00033500(iVar1,uVar2);
    FUN_00031e34(iVar1);
  }
  return uVar2;
}



/* ===== FUN_000340c0 @ 000340c0 size=168 ===== */

ulonglong FUN_000340c0(uint param_1,uint param_2)

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



/* ===== FUN_00034188 @ 00034188 size=24 ===== */

ulonglong FUN_00034188(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
  }
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return CONCAT44(uVar3,uVar1);
}



/* ===== FUN_00034190 @ 00034190 size=196 ===== */

uint FUN_00034190(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if (in_NG) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



/* ===== FUN_00034264 @ 00034264 size=32 ===== */

void FUN_00034264(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00034190();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00034284 @ 00034284 size=228 ===== */

undefined8 FUN_00034284(int param_1,int param_2,int param_3,int param_4)

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
      uVar2 = FUN_000343a4(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_000343a4();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_000343a4(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_000343a4(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_000343a4 @ 000343a4 size=328 ===== */

undefined8 FUN_000343a4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 00034528 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::stpcpy @ 0004d000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 0004d004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0004d008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::warnx @ 0004d00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void warnx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 0004d010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0004d014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok_r @ 0004d018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok_r(char *__s,char *__delim,char **__save_ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::posix_fadvise64 @ 0004d01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_fadvise64(int __fd,__off64_t __offset,__off64_t __len,int __advise)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 0004d020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 0004d028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getdtablesize @ 0004d02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getdtablesize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopendir @ 0004d030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * fdopendir(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0004d034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 0004d038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 0004d03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0004d040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__xpg_basename @ 0004d044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0004d048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fpending @ 0004d04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fpending(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0004d050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 0004d054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::faccessat @ 0004d058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int faccessat(int __fd,char *__file,int __type,int __flag)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrgid @ 0004d05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoimax @ 0004d064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

intmax_t strtoimax(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0004d068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchmod @ 0004d06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtold @ 0004d070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtold(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 0004d074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bsearch @ 0004d078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__libc_current_sigrtmax @ 0004d07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmax(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0004d080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0004d084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 0004d088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0004d08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0004d090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0004d094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0004d098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0004d09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 0004d0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0004d0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0004d0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::errx @ 0004d0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void errx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup2 @ 0004d0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__libc_current_sigrtmin @ 0004d0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tolower @ 0004d0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0004d0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rewinddir @ 0004d0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewinddir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 0004d0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0004d0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 0004d0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::openat64 @ 0004d0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int openat64(int __fd,char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0004d0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoll @ 0004d0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoumax @ 0004d0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uintmax_t strtoumax(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0004d0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0004d0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkostemp64 @ 0004d0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkostemp64(char *__template,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mempcpy @ 0004d0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mempcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0004d0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realpath @ 0004d0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 0004d0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 0004d100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0004d104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0004d108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime_r @ 0004d10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 0004d110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0004d114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 0004d118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__tls_get_addr @ 0004d11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __tls_get_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strnlen @ 0004d120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::uname @ 0004d124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rename @ 0004d128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0004d12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nanosleep @ 0004d130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0004d134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtod @ 0004d138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0004d13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0004d144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004d148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_stdlib_mb_cur_max @ 0004d14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _stdlib_mb_cur_max(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0004d150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 0004d154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 0004d158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ferror @ 0004d160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0004d164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::flock @ 0004d168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void flock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setgid @ 0004d16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0004d170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dirfd @ 0004d174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0004d178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0004d17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0004d180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 0004d188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0004d18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_atexit @ 0004d190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0004d194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 0004d198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0004d19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 0004d1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 0004d1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0004d1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execv @ 0004d1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 0004d1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0004d1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0004d1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 0004d1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0004d1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0004d1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::err @ 0004d1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrnam_r @ 0004d1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getgrnam_r(char *__name,group *__resultbuf,char *__buffer,size_t __buflen,group **__result)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0004d1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0004d1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getppid @ 0004d1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getppid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0004d1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0004d1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwuid_r @ 0004d1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpwuid_r(__uid_t __uid,passwd *__resultbuf,char *__buffer,size_t __buflen,passwd **__result)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0004d1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ttyname @ 0004d1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ttyname(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwuid @ 0004d1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup @ 0004d1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getcwd @ 0004d1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstatat64 @ 0004d1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatat64(int __fd,char *__file,stat64 *__buf,int __flag)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 0004d200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0004d204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asprintf @ 0004d208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 0004d20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srandom @ 0004d214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 0004d218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstatfs64 @ 0004d21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatfs64(int __fildes,statfs64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwnam_r @ 0004d220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpwnam_r(char *__name,passwd *__resultbuf,char *__buffer,size_t __buflen,passwd **__result)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 0004d224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0004d228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime_r @ 0004d22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 0004d230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localeconv @ 0004d234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

lconv * localeconv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendfile64 @ 0004d238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendfile64(int __out_fd,int __in_fd,__off64_t *__offset,size_t __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0004d23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfscanf @ 0004d240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfscanf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strptime @ 0004d244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strptime(char *__s,char *__fmt,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlinkat @ 0004d248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlinkat(int __fd,char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0004d24c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::link @ 0004d250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int link(char *__from,char *__to)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0004d254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getrandom @ 0004d258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getrandom(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 0004d25c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strspn @ 0004d260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0004d264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 0004d268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 0004d26c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0004d270 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0004d274 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execvp @ 0004d278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0004d27c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::warn @ 0004d280 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vasprintf @ 0004d284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setuid @ 0004d288 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::jrand48 @ 0004d28c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long jrand48(ushort *__xsubi)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 0004d290 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0004d298 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0004d29c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0004d2a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0004d2a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0004d2a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0004d2ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0004d2b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


