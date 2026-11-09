// e2freefrag — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 000112b8 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::secure_getenv @ 000112dc size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_0005a00c)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 000112e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0005a010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::setrlimit64 @ 000112f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setrlimit64_0005a014)(__resource);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00011300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0005a018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::posix_fadvise64 @ 0001130c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_fadvise64(int __fd,__off64_t __offset,__off64_t __len,int __advise)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_posix_fadvise64_0005a01c)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 00011318 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_0005a020)();
  return _Var1;
}



/* ===== <EXTERNAL>::sysconf @ 00011324 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0005a024)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::random @ 00011330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_0005a028)();
  return lVar1;
}



/* ===== <EXTERNAL>::strerror @ 0001133c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0005a02c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 00011348 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_0005a030)();
  return _Var1;
}



/* ===== <EXTERNAL>::stat64 @ 00011354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0005a034)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::memmove @ 00011360 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0005a038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::getenv @ 0001136c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0005a03c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::pwrite64 @ 00011378 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pwrite64(int __fd,void *__buf,size_t __n,__off64_t __offset)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_pwrite64_0005a040)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::getegid @ 00011384 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_0005a044)();
  return _Var1;
}



/* ===== <EXTERNAL>::getpagesize @ 00011390 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpagesize_0005a048)();
  return iVar1;
}



/* ===== <EXTERNAL>::getpid @ 0001139c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0005a04c)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 000113a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0005a050)(__base);
  return;
}



/* ===== <EXTERNAL>::fgets @ 000113b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0005a054)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 000113c0 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0005a058)();
  return;
}



/* ===== <EXTERNAL>::getrlimit64 @ 000113cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getrlimit64_0005a05c)(__resource);
  return iVar1;
}



/* ===== <EXTERNAL>::prctl @ 000113d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0005a060)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 000113e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0005a064)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000113f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0005a068)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 000113fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0005a06c)(__s);
  return;
}



/* ===== <EXTERNAL>::getuid @ 00011408 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_0005a070)();
  return _Var1;
}



/* ===== <EXTERNAL>::hasmntopt @ 00011414 size=12 ===== */

void hasmntopt(void)

{
  (*(code *)PTR_hasmntopt_0005a074)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011420 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0005a078)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 0001142c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_0005a07c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 00011438 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0005a080)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00011444 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0005a084)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011450 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0005a088)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::lseek @ 0001145c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_0005a08c)(__fd);
  return _Var1;
}



/* ===== <EXTERNAL>::abort @ 00011468 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0005a090)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 00011474 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_0005a094)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::uname @ 00011480 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0005a098)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 0001148c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0005a09c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00011498 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0005a0a0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fstat @ 000114a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_0005a0a4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000114b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0005a0a8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000114bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0005a0ac)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ntohl @ 000114c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t ntohl(uint32_t __netlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohl_0005a0b0)(__netlong);
  return uVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000114d4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0005a0b4)();
  return;
}



/* ===== <EXTERNAL>::read @ 000114e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0005a0b8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::pread64 @ 000114ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pread64(int __fd,void *__buf,size_t __nbytes,__off64_t __offset)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_pread64_0005a0bc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000114f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0005a0c0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011504 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0005a0c4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011510 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_0005a0c8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 0001151c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_0005a0cc)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011528 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0005a0d0)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011534 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0005a0d4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::setmntent @ 00011540 size=12 ===== */

void setmntent(void)

{
  (*(code *)PTR_setmntent_0005a0d8)();
  return;
}



/* ===== <EXTERNAL>::endmntent @ 0001154c size=12 ===== */

void endmntent(void)

{
  (*(code *)PTR_endmntent_0005a0dc)();
  return;
}



/* ===== <EXTERNAL>::strtoull @ 00011564 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_0005a0e4)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011570 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0005a0e8)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 0001157c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0005a0ec)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::getopt @ 00011588 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0005a0f0)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011594 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0005a0f4)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fallocate64 @ 000115a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fallocate64(int __fd,int __mode,__off64_t __offset,__off64_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fallocate64_0005a0f8)
                    (__fd,__mode,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return iVar1;
}



/* ===== <EXTERNAL>::fclose @ 000115ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0005a0fc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 000115b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0005a100)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 000115c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_0005a104)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 000115d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0005a108)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000115dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0005a10c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::gethostname @ 000115e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gethostname(char *__name,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gethostname_0005a110)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000115f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0005a114)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::srandom @ 00011600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
  (*(code *)PTR_srandom_0005a118)(__seed);
  return;
}



/* ===== <EXTERNAL>::fsync @ 0001160c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0005a11c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00011618 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0005a120)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 00011624 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0005a124)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::getmntent @ 00011630 size=12 ===== */

void getmntent(void)

{
  (*(code *)PTR_getmntent_0005a128)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 0001163c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0005a12c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011648 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0005a130)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011654 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0005a134)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00011660 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0005a138)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 0001166c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_0005a13c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011678 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0005a140)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 00011684 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_0005a144)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::open @ 00011690 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0005a148)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 0001169c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0005a14c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 000116a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0005a150)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fcntl @ 000116b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_0005a154)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::posix_memalign @ 000116c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_0005a158)(__memptr);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000116cc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0005a15c)();
  return;
}



/* ===== <EXTERNAL>::close @ 000116d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0005a160)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 000116e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0005a164)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 000116f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0005a168)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000116fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0005a16c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011708 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0005a170)();
  return;
}



/* ===== <EXTERNAL>::ftruncate64 @ 00011714 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate64(int __fd,__off64_t __length)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_ftruncate64_0005a174)
                    (__fd,in_r1,(int)__length,(int)((ulonglong)__length >> 0x20));
  return iVar1;
}



/* ===== entry @ 00011720 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0005a0e0)
            (DAT_00011754,param_2,&stack0x00000004,DAT_00011758,DAT_00011750,param_1);
  return;
}



/* ===== FUN_0001175c @ 0001175c size=32 ===== */

void FUN_0001175c(void)

{
  if (DAT_00011780 == DAT_0001177c) {
    return;
  }
  if (DAT_00011784 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011784)();
  return;
}



/* ===== _FINI_0 @ 000117c0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000117fc;
  if (*DAT_000117fc != '\0') {
    return;
  }
  FUN_0001175c();
  if (DAT_00011800 != 0) {
    __deregister_frame_info(DAT_00011804);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011808 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001182c != 0) {
    __register_frame_info(DAT_00011834,DAT_00011830);
  }
  if ((DAT_000117b8 - DAT_000117b4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000117bc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000117b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000117bc)();
  return;
}



/* ===== FUN_00011838 @ 00011838 size=56 ===== */

void FUN_00011838(undefined4 param_1)

{
  fprintf(stderr,"usage: %s [-c chunksize in kb] [-h] device_name\n",param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011870 @ 00011870 size=96 ===== */

int FUN_00011870(uint param_1)

{
  undefined4 local_14;
  undefined4 local_c;
  
  local_c = 0;
  while (local_14 = param_1 >> 1, local_14 != 0) {
    local_c = local_c + 1;
    param_1 = local_14;
  }
  return local_c;
}



/* ===== FUN_000118d0 @ 000118d0 size=328 ===== */

void FUN_000118d0(int param_1,uint *param_2)

{
  uint uVar1;
  int local_c;
  
  uVar1 = FUN_00011870(*(undefined4 *)(param_1 + 0x14));
  param_2[4] = uVar1;
  if (*param_2 == 0) {
    uVar1 = FUN_00011870(0x100000);
    param_2[1] = uVar1;
    param_2[5] = 0x100000 >> (param_2[4] & 0xff);
  }
  else {
    uVar1 = FUN_00011870(*param_2);
    param_2[1] = uVar1;
    param_2[5] = *param_2 >> (param_2[4] & 0xff);
  }
  param_2[6] = 0xffffffff;
  param_2[8] = 0;
  param_2[7] = param_2[8];
  param_2[3] = 0;
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    param_2[local_c + 9] = 0;
    param_2[local_c + 0x29] = 0;
  }
  return;
}



/* ===== FUN_00011a18 @ 00011a18 size=288 ===== */

void FUN_00011a18(int param_1,uint param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_00011870(param_2);
  local_c = iVar1 + 1;
  if (0x1f < local_c) {
    local_c = 0x1f;
  }
  *(int *)(param_1 + (local_c + 8) * 4 + 4) = *(int *)(param_1 + (local_c + 8) * 4 + 4) + 1;
  *(uint *)(param_1 + (local_c + 0x28) * 4 + 4) =
       *(int *)(param_1 + (local_c + 0x28) * 4 + 4) + param_2;
  if (*(uint *)(param_1 + 0x1c) < param_2) {
    *(uint *)(param_1 + 0x1c) = param_2;
  }
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 0x18) = param_2;
  }
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



/* ===== FUN_00011b38 @ 00011b38 size=620 ===== */

void FUN_00011b38(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  int local_1c;
  uint local_18;
  uint uStack_14;
  
  lVar10 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
  uVar4 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar2 = (uint)lVar10;
  lVar10 = lVar10 + *(int *)(param_2 + 0x14);
  uVar7 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar5 = *(int *)(param_2 + 4) - *(int *)(param_2 + 0x10);
  uVar1 = uVar7 >> (uVar5 & 0xff);
  local_1c = 0;
  local_28 = 0;
  uStack_24 = 0;
  local_18 = 0;
  uStack_14 = 0;
  while( true ) {
    bVar9 = uVar1 <= uStack_14;
    if (uStack_14 == uVar1) {
      bVar9 = ((uint)lVar10 >> (uVar5 & 0xff) | uVar7 << (0x20 - uVar5 & 0xff) |
              uVar7 >> (uVar5 - 0x20 & 0xff)) <= local_18;
    }
    if (bVar9) break;
    uVar6 = *(uint *)(param_2 + 0x14);
    uVar8 = uStack_24 + ((int)uVar6 >> 0x1f) + (uint)CARRY4(local_28,uVar6);
    bVar9 = uVar8 <= uVar4;
    if (uVar4 == uVar8) {
      bVar9 = local_28 + uVar6 <= uVar2;
    }
    if (bVar9) {
      local_38 = *(uint *)(param_2 + 0x14);
      uStack_34 = (int)local_38 >> 0x1f;
    }
    else {
      local_38 = uVar2 - local_28;
      uStack_34 = uVar4 - (uStack_24 + (uVar2 < local_28));
    }
    local_3c = 0;
    local_30 = 0;
    uStack_2c = 0;
    while( true ) {
      bVar9 = uStack_34 <= uStack_2c;
      if (uStack_2c == uStack_34) {
        bVar9 = local_38 <= local_30;
      }
      if (bVar9) break;
      if ((local_18 == 0 && uStack_14 == 0) && (local_30 == 0 && uStack_2c == 0)) {
        local_28 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
        uStack_2c = 0;
        uStack_24 = 0;
        local_30 = local_28;
      }
      uVar6 = *(uint *)(param_1 + 100);
      iVar3 = FUN_00018694(*(undefined4 *)(param_1 + 0x30),uVar6,
                           local_28 >> (uVar6 & 0xff) | uStack_24 << (0x20 - uVar6 & 0xff) |
                           uStack_24 >> (uVar6 - 0x20 & 0xff),uStack_24 >> (uVar6 & 0xff));
      if (iVar3 == 0) {
        local_1c = local_1c + 1;
        local_3c = local_3c + 1;
      }
      else if (local_1c != 0) {
        FUN_00011a18(param_2,local_1c);
        local_1c = 0;
      }
      bVar9 = 0xfffffffe < local_30;
      local_30 = local_30 + 1;
      uStack_2c = uStack_2c + bVar9;
      bVar9 = 0xfffffffe < local_28;
      local_28 = local_28 + 1;
      uStack_24 = uStack_24 + bVar9;
    }
    if (local_3c == *(int *)(param_2 + 0x14)) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    }
    bVar9 = 0xfffffffe < local_18;
    local_18 = local_18 + 1;
    uStack_14 = uStack_14 + bVar9;
  }
  if (local_1c != 0) {
    FUN_00011a18(param_2,local_1c);
  }
  return;
}



/* ===== FUN_00011da4 @ 00011da4 size=1200 ===== */

undefined4 FUN_00011da4(int param_1,int *param_2,FILE *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 local_60;
  undefined1 local_5c;
  int local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  
  local_24 = &DAT_000433f0;
  local_28 = 10;
  local_2c = 0;
  local_34 = 0;
  FUN_00011b38(param_1,param_2);
  uVar8 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
  dVar9 = (double)FUN_00012e70(*(undefined4 *)(param_1 + 0x10));
  uVar10 = FUN_00012e70(*(undefined4 *)(param_1 + 0x10));
  dVar6 = (double)FUN_000431a4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  dVar6 = dVar6 * DAT_000120b0;
  uVar10 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
  dVar7 = (double)FUN_000431a4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  dVar6 = dVar6 / dVar7;
  fprintf(param_3,"Total blocks: %llu\nFree blocks: %llu (%0.1f%%)\n",(int)uVar8,
          (int)((ulonglong)uVar8 >> 0x20),SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),dVar6);
  if (*param_2 != 0) {
    fprintf(param_3,"\nChunksize: %lu bytes (%u blocks)\n",*param_2,param_2[5],dVar9,dVar6);
    lVar11 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
    uVar4 = (uint)((ulonglong)(lVar11 + param_2[5]) >> 0x20);
    uVar3 = param_2[1] - param_2[4];
    local_38 = (uint)(lVar11 + param_2[5]) >> (uVar3 & 0xff) | uVar4 << (0x20 - uVar3 & 0xff) |
               uVar4 >> (uVar3 - 0x20 & 0xff);
    dVar7 = (double)VectorUnsignedToFloat(param_2[2],(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = (double)VectorUnsignedToFloat(local_38,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = (dVar7 * DAT_000120b0) / dVar9;
    fprintf(param_3,"Total chunks: %lu\nFree chunks: %lu (%0.1f%%)\n",local_38,param_2[2],dVar9);
  }
  uVar12 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (param_2[3] == 0) {
    param_2[6] = 0;
  }
  else {
    local_3c = *(uint *)(param_1 + 0x14) >> 10;
    param_2[6] = local_3c * param_2[6];
    param_2[7] = local_3c * param_2[7];
    iVar2 = FUN_00042c94(param_2[8],param_2[3]);
    param_2[8] = local_3c * iVar2;
  }
  fprintf(param_3,
          "\nMin. free extent: %lu KB \nMax. free extent: %lu KB\nAvg. free extent: %lu KB\n",
          param_2[6],param_2[7],param_2[8],uVar12,dVar6);
  fprintf(param_3,"Num. free extent: %lu\n",param_2[3]);
  fwrite("\nHISTOGRAM OF FREE EXTENT SIZES:\n",1,0x21,param_3);
  fprintf(param_3,"%s :  %12s  %12s  %7s\n","Extent Size Range","Free extents","Free Blocks",
          "Percent");
  for (local_30 = 0; uVar12 = (undefined4)((ulonglong)dVar6 >> 0x20), local_30 < 0x20;
      local_30 = local_30 + 1) {
    local_40 = 1 << ((param_2[4] + local_30) - local_28 & 0xffU);
    if (param_2[local_30 + 9] != 0) {
      sprintf((char *)&local_60,"%5lu%c-",local_40,(uint)*local_24);
      if (local_30 == 0x1f) {
        local_60 = DAT_00043564;
        local_5c = (undefined1)DAT_00043568;
      }
      bVar1 = *local_24;
      iVar2 = param_2[local_30 + 9];
      iVar5 = param_2[local_30 + 0x29];
      dVar9 = (double)VectorUnsignedToFloat(param_2[local_30 + 0x29],(byte)(in_fpscr >> 0x16) & 3);
      dVar9 = dVar9 * DAT_000120b0;
      uVar8 = FUN_00012e70(*(undefined4 *)(param_1 + 0x10));
      dVar7 = (double)FUN_000431a4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      dVar6 = (double)CONCAT44(uVar12,iVar5);
      fprintf(param_3,"%5lu%c...%7s  :  %12lu  %12lu  %6.2f%%\n",local_2c,(uint)bVar1,&local_60,
              iVar2,iVar5,uVar12,dVar9 / dVar7);
    }
    local_2c = local_40;
    if (local_40 == 0x400) {
      local_2c = 1;
      local_28 = local_28 + 10;
      local_24 = local_24 + 1;
    }
  }
  return local_34;
}



/* ===== FUN_0001225c @ 0001225c size=80 ===== */

void FUN_0001225c(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  local_c = FUN_00014d04(&local_18);
  if (local_c != 0) {
    FUN_00042b78(local_14,local_c,"while closing the filesystem.\n");
  }
  return;
}



/* ===== FUN_000122ac @ 000122ac size=288 ===== */

void FUN_000122ac(int param_1,undefined4 param_2,FILE *param_3)

{
  int iVar1;
  
  fprintf(param_3,"Device: %s\n",*(undefined4 *)(param_1 + 0xc));
  fprintf(param_3,"Blocksize: %u bytes\n",*(undefined4 *)(param_1 + 0x14));
  iVar1 = FUN_00022a38(param_1);
  if (iVar1 != 0) {
    FUN_00042b78(*(undefined4 *)(param_1 + 0xc),iVar1,"while reading block bitmap");
    FUN_0001225c(*(undefined4 *)(param_1 + 0xc),param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  FUN_000118d0(param_1,param_2);
  iVar1 = FUN_00011da4(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_00042b78(*(undefined4 *)(param_1 + 0xc),iVar1,"while collecting chunk info");
    FUN_0001225c(*(undefined4 *)(param_1 + 0xc),param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* ===== FUN_000123cc @ 000123cc size=144 ===== */

void FUN_000123cc(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00020244(param_1,0x20400,0,0,DAT_0005a1f8,param_2);
  if (iVar1 != 0) {
    FUN_00042b78(param_1,iVar1,"while opening filesystem");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  *(undefined2 *)(*param_2 + 0x68) = 2;
  return;
}



/* ===== FUN_0001245c @ 0001245c size=572 ===== */

undefined4 FUN_0001245c(int param_1,char **param_2)

{
  ulonglong uVar1;
  char *local_140;
  int local_13c;
  uint local_138 [73];
  char *local_14;
  int local_10;
  char *local_c;
  
  local_13c = 0;
  FUN_0004256c(&DAT_00045478);
  local_c = *param_2;
  memset(local_138,0,0x124);
  while( true ) {
    local_10 = getopt(param_1,param_2,"c:h");
    if (local_10 == -1) break;
    if (local_10 == 99) {
      uVar1 = strtoull(optarg,&local_140,0);
      local_138[0] = (uint)uVar1;
      if (*local_140 != '\0') {
        fprintf(stderr,"%s: bad chunk size \'%s\'\n",local_c,optarg);
        FUN_00011838(local_c);
      }
      if ((local_138[0] - 1 & local_138[0]) != 0) {
        fprintf(stderr,"%s: chunk size must be a power of 2.\n",*param_2);
        FUN_00011838(local_c);
      }
      local_138[0] = local_138[0] << 10;
    }
    else {
      FUN_00011838(local_c);
    }
  }
  if (param_1 == optind) {
    fprintf(stderr,"%s: missing device name.\n",local_c);
    FUN_00011838(local_c);
  }
  local_14 = param_2[optind];
  FUN_000123cc(local_14,&local_13c);
  if ((local_138[0] != 0) && (local_138[0] < *(uint *)(local_13c + 0x14))) {
    fprintf(stderr,"%s: chunksize must be greater than or equal to filesystem blocksize.\n",local_c)
    ;
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  FUN_000122ac(local_13c,local_138,stdout);
  FUN_0001225c(local_14,local_13c);
  return 0;
}



/* ===== FUN_00012698 @ 00012698 size=28 ===== */

void FUN_00012698(void)

{
  FUN_000126b4(&DAT_0005a394);
  return;
}



/* ===== FUN_000126b4 @ 000126b4 size=224 ===== */

void FUN_000126b4(undefined4 *param_1)

{
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_10 = param_1;
  for (local_c = (undefined4 *)*param_1; local_c != (undefined4 *)0x0;
      local_c = (undefined4 *)*local_c) {
    if (*(undefined ***)local_c[1] == &PTR_s_EXT2FS_Library_version_1_43_9_000451ac) {
      return;
    }
    local_10 = local_c;
  }
  local_c = malloc(8);
  if (local_c == (undefined4 *)0x0) {
    if (DAT_0005a37c != 0) {
      return;
    }
    local_c = &DAT_0005a378;
  }
  local_c[1] = &DAT_00045478;
  *local_c = 0;
  *local_10 = local_c;
  return;
}



/* ===== FUN_00012794 @ 00012794 size=60 ===== */

bool FUN_00012794(int param_1)

{
  return (*(uint *)(param_1 + 100) & 2) != 0;
}



/* ===== FUN_000127d0 @ 000127d0 size=52 ===== */

void FUN_000127d0(int param_1)

{
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
  return;
}



/* ===== FUN_00012804 @ 00012804 size=60 ===== */

bool FUN_00012804(int param_1)

{
  return (*(uint *)(param_1 + 100) & 8) != 0;
}



/* ===== FUN_00012840 @ 00012840 size=60 ===== */

bool FUN_00012840(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x80) != 0;
}



/* ===== FUN_0001287c @ 0001287c size=64 ===== */

bool FUN_0001287c(uint param_1,int param_2)

{
  return param_2 != 0 || 0x7fffffff < param_1;
}



/* ===== FUN_000128bc @ 000128bc size=108 ===== */

undefined4 FUN_000128bc(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
  uVar1 = FUN_00043218(param_3 - uVar2,param_4 - (uint)(param_3 < uVar2),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),0);
  return uVar1;
}



/* ===== FUN_00012928 @ 00012928 size=120 ===== */

longlong FUN_00012928(int param_1,uint param_2)

{
  return (ulonglong)param_2 * (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x20) +
         (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x14);
}



/* ===== FUN_000129a0 @ 000129a0 size=148 ===== */

longlong FUN_000129a0(int param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == *(int *)(param_1 + 0x1c) + -1) {
    uVar1 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
    lVar2 = CONCAT44((int)((ulonglong)uVar1 >> 0x20) - (uint)((int)uVar1 == 0),(int)uVar1 + -1);
  }
  else {
    lVar2 = FUN_00012928(param_1,param_2);
    lVar2 = lVar2 + (ulonglong)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) - 1);
  }
  return lVar2;
}



/* ===== FUN_00012a34 @ 00012a34 size=192 ===== */

int FUN_00012a34(int param_1,int param_2)

{
  int extraout_r2;
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_c;
  
  if (param_2 == *(int *)(param_1 + 0x1c) + -1) {
    uVar2 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
    uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
    FUN_00043218((uint)uVar2 - uVar1,(int)((ulonglong)uVar2 >> 0x20) - (uint)((uint)uVar2 < uVar1),
                 *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),0);
    local_c = extraout_r2;
    if (extraout_r2 == 0) {
      local_c = *(int *)(*(int *)(param_1 + 0x10) + 0x20);
    }
  }
  else {
    local_c = *(int *)(*(int *)(param_1 + 0x10) + 0x20);
  }
  return local_c;
}



/* ===== FUN_00012af4 @ 00012af4 size=208 ===== */

undefined8 FUN_00012af4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x1c);
  iVar1 = FUN_00012804(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(param_2 + 0x74);
  }
  if (*(int *)(param_2 + 0x68) == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = (0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x1c) & 0xff)) >> 9;
    uVar4 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
  }
  return CONCAT44(uVar3 - ((int)((ulonglong)uVar4 >> 0x20) + (uint)(uVar2 < (uint)uVar4)),
                  uVar2 - (uint)uVar4);
}



/* ===== FUN_00012bc4 @ 00012bc4 size=132 ===== */

undefined8 FUN_00012bc4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = FUN_00012804(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(param_2 + 0x74);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_00012c48 @ 00012c48 size=120 ===== */

undefined8 FUN_00012c48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = FUN_00012840(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x150);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_00012cc0 @ 00012cc0 size=84 ===== */

void FUN_00012cc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = param_3;
  iVar1 = FUN_00012840(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x150) = param_4;
  }
  return;
}



/* ===== FUN_00012d14 @ 00012d14 size=72 ===== */

void FUN_00012d14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_00012c48(param_1);
  lVar1 = lVar2 + CONCAT44(param_4,param_3);
  FUN_00012cc0(param_1,(int)((ulonglong)lVar2 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}



/* ===== FUN_00012d5c @ 00012d5c size=120 ===== */

undefined8 FUN_00012d5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  iVar1 = FUN_00012840(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x154);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_00012dd4 @ 00012dd4 size=84 ===== */

void FUN_00012dd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar1 = FUN_00012840(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x154) = param_4;
  }
  return;
}



/* ===== FUN_00012e28 @ 00012e28 size=72 ===== */

void FUN_00012e28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_00012d5c(param_1);
  lVar1 = lVar2 + CONCAT44(param_4,param_3);
  FUN_00012dd4(param_1,(int)((ulonglong)lVar2 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}



/* ===== FUN_00012e70 @ 00012e70 size=120 ===== */

undefined8 FUN_00012e70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_00012840(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x158);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_00012ee8 @ 00012ee8 size=84 ===== */

void FUN_00012ee8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = param_3;
  iVar1 = FUN_00012840(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x158) = param_4;
  }
  return;
}



/* ===== FUN_00012f3c @ 00012f3c size=72 ===== */

void FUN_00012f3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_00012e70(param_1);
  lVar1 = lVar2 + CONCAT44(param_4,param_3);
  FUN_00012ee8(param_1,(int)((ulonglong)lVar2 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}



/* ===== FUN_00012f84 @ 00012f84 size=112 ===== */

int FUN_00012f84(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x60) & 0x80) == 0) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe) & 0xfffffff8;
  }
  return param_2 + param_3 * uVar1;
}



/* ===== FUN_00012ff4 @ 00012ff4 size=56 ===== */

undefined4 FUN_00012ff4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00012f84(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0001302c @ 0001302c size=120 ===== */

uint FUN_0001302c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  local_c = (uint)*(ushort *)(iVar1 + 0x18);
  if (0x39 < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
    local_c = CONCAT22(*(undefined2 *)(iVar1 + 0x38),*(ushort *)(iVar1 + 0x18));
  }
  return local_c;
}



/* ===== FUN_000130a4 @ 000130a4 size=160 ===== */

undefined8 FUN_000130a4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar3 = *puVar1;
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = puVar1[8];
  }
  return CONCAT44(uVar4,uVar3);
}



/* ===== FUN_00013144 @ 00013144 size=124 ===== */

void FUN_00013144(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *puVar1 = param_3;
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    puVar1[8] = param_4;
  }
  return;
}



/* ===== FUN_000131c0 @ 000131c0 size=120 ===== */

uint FUN_000131c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  local_c = (uint)*(ushort *)(iVar1 + 0x1a);
  if (0x3b < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
    local_c = CONCAT22(*(undefined2 *)(iVar1 + 0x3a),*(ushort *)(iVar1 + 0x1a));
  }
  return local_c;
}



/* ===== FUN_00013238 @ 00013238 size=160 ===== */

undefined8 FUN_00013238(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar3 = *(undefined4 *)(iVar1 + 4);
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x24);
  }
  return CONCAT44(uVar4,uVar3);
}



/* ===== FUN_000132d8 @ 000132d8 size=124 ===== */

void FUN_000132d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined4 *)(iVar1 + 4) = param_3;
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0x24) = param_4;
  }
  return;
}



/* ===== FUN_00013354 @ 00013354 size=160 ===== */

undefined8 FUN_00013354(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar3 = *(undefined4 *)(iVar1 + 8);
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
  }
  return CONCAT44(uVar4,uVar3);
}



/* ===== FUN_000133f4 @ 000133f4 size=124 ===== */

void FUN_000133f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined4 *)(iVar1 + 8) = param_3;
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = param_4;
  }
  return;
}



/* ===== FUN_00013470 @ 00013470 size=124 ===== */

uint FUN_00013470(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0xc);
  iVar3 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x2c) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_000134ec @ 000134ec size=128 ===== */

void FUN_000134ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0xc) = (short)param_3;
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x2c) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_0001356c @ 0001356c size=124 ===== */

uint FUN_0001356c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0xe);
  iVar3 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x2e) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_000135e8 @ 000135e8 size=128 ===== */

void FUN_000135e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0xe) = (short)param_3;
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x2e) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_00013668 @ 00013668 size=124 ===== */

uint FUN_00013668(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0x10);
  iVar3 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x30) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_000136e4 @ 000136e4 size=128 ===== */

void FUN_000136e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0x10) = (short)param_3;
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x30) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_00013764 @ 00013764 size=124 ===== */

uint FUN_00013764(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0x1c);
  iVar3 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x32) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_000137e0 @ 000137e0 size=128 ===== */

void FUN_000137e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0x1c) = (short)param_3;
  iVar2 = FUN_00012840(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x32) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_00013860 @ 00013860 size=68 ===== */

undefined2 FUN_00013860(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  return *(undefined2 *)(iVar1 + 0x12);
}



/* ===== FUN_000138a4 @ 000138a4 size=72 ===== */

void FUN_000138a4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined2 *)(iVar1 + 0x12) = 0;
  return;
}



/* ===== FUN_000138ec @ 000138ec size=88 ===== */

ushort FUN_000138ec(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  return param_3 & *(ushort *)(iVar1 + 0x12);
}



/* ===== FUN_00013944 @ 00013944 size=96 ===== */

void FUN_00013944(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(ushort *)(iVar1 + 0x12) = *(ushort *)(iVar1 + 0x12) | param_3;
  return;
}



/* ===== FUN_000139a4 @ 000139a4 size=112 ===== */

void FUN_000139a4(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(ushort *)(iVar1 + 0x12) = ~param_3 & *(ushort *)(iVar1 + 0x12);
  return;
}



/* ===== FUN_00013a14 @ 00013a14 size=68 ===== */

undefined2 FUN_00013a14(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  return *(undefined2 *)(iVar1 + 0x1e);
}



/* ===== FUN_00013a58 @ 00013a58 size=80 ===== */

void FUN_00013a58(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00012ff4(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined2 *)(iVar1 + 0x1e) = param_3;
  return;
}



/* ===== FUN_00013aa8 @ 00013aa8 size=148 ===== */

undefined8 FUN_00013aa8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uStack_14 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_00012840(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    uStack_14 = (uint)*(ushort *)(param_2 + 0x76);
  }
  return CONCAT44(uStack_14,uVar2);
}



/* ===== FUN_00013b3c @ 00013b3c size=112 ===== */

void FUN_00013b3c(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x68) = param_3;
  if ((param_1 != 0) && (iVar1 = FUN_00012840(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    *(undefined2 *)(param_2 + 0x76) = param_4;
  }
  return;
}



/* ===== FUN_00013bac @ 00013bac size=244 ===== */

undefined4 FUN_00013bac(int param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*param_2 & 0xf000) == 0x8000) || (param_4 == 0)) {
    if ((((*param_2 & 0xf000) == 0x8000) && (iVar1 = FUN_0001287c(param_3,param_4), iVar1 != 0)) &&
       ((iVar1 = FUN_00012794(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0 ||
        (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0)))) {
      FUN_000127d0(*(undefined4 *)(param_1 + 0x10));
      FUN_000145dc(param_1);
      FUN_00018d14(param_1);
    }
    *(undefined4 *)(param_2 + 2) = param_3;
    *(int *)(param_2 + 0x36) = param_4;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x7f2bb752;
  }
  return uVar2;
}



/* ===== FUN_00013ca0 @ 00013ca0 size=60 ===== */

bool FUN_00013ca0(int param_1)

{
  return (*(uint *)(param_1 + 0x5c) & 0x200) != 0;
}



/* ===== FUN_00013cdc @ 00013cdc size=60 ===== */

bool FUN_00013cdc(int param_1)

{
  return (*(uint *)(param_1 + 100) & 1) != 0;
}



/* ===== FUN_00013d18 @ 00013d18 size=52 ===== */

void FUN_00013d18(int param_1)

{
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffb;
  return;
}



/* ===== FUN_00013d4c @ 00013d4c size=60 ===== */

bool FUN_00013d4c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 8) != 0;
}



/* ===== FUN_00013d88 @ 00013d88 size=60 ===== */

bool FUN_00013d88(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x10) != 0;
}



/* ===== FUN_00013dc4 @ 00013dc4 size=140 ===== */

undefined4 FUN_00013dc4(uint param_1,uint param_2)

{
  int extraout_r1;
  uint local_c;
  
  local_c = param_1;
  while( true ) {
    if (local_c < param_2) {
      return 0;
    }
    if (local_c == param_2) break;
    FUN_00042d3c(local_c,param_2);
    if (extraout_r1 != 0) {
      return 0;
    }
    local_c = FUN_00042c94(local_c,param_2);
  }
  return 1;
}



/* ===== FUN_00013e50 @ 00013e50 size=300 ===== */

undefined4 FUN_00013e50(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00013ca0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      if ((param_2 < 2) || (iVar1 = FUN_00013cdc(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
        uVar2 = 1;
      }
      else if ((param_2 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_00013dc4(param_2,3);
        if (((iVar1 == 0) && (iVar1 = FUN_00013dc4(param_2,5), iVar1 == 0)) &&
           (iVar1 = FUN_00013dc4(param_2,7), iVar1 == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
    }
    else if ((param_2 == *(uint *)(*(int *)(param_1 + 0x10) + 0x24c)) ||
            (param_2 == *(uint *)(*(int *)(param_1 + 0x10) + 0x250))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_00013f7c @ 00013f7c size=732 ===== */

undefined4
FUN_00013f7c(int param_1,undefined4 param_2,longlong *param_3,longlong *param_4,longlong *param_5,
            uint *param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined2 uVar6;
  longlong lVar7;
  longlong lVar8;
  int local_3c;
  int local_38;
  uint local_2c;
  
  lVar7 = 0;
  lVar8 = FUN_00012928(param_1,param_2);
  if ((lVar8 == 0) && (*(int *)(param_1 + 0x14) == 0x400)) {
    lVar8 = 1;
  }
  iVar3 = FUN_00013d88(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    local_38 = *(int *)(param_1 + 0x20) + (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0xce);
  }
  else {
    local_38 = *(int *)(*(int *)(param_1 + 0x10) + 0x104);
  }
  local_3c = FUN_00013e50(param_1,param_2);
  lVar2 = 0;
  if (local_3c != 0) {
    lVar2 = lVar8;
  }
  local_2c = (uint)(local_3c != 0);
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x60) & 0x80) == 0) {
    uVar6 = 0x20;
  }
  else {
    uVar6 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0xfe);
  }
  iVar3 = FUN_00042d5c(0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0xff),uVar6);
  uVar4 = FUN_00042c94(param_2,iVar3);
  iVar5 = FUN_00013d88(*(undefined4 *)(param_1 + 0x10));
  if ((iVar5 == 0) || (uVar4 < *(uint *)(*(int *)(param_1 + 0x10) + 0x104))) {
    lVar1 = 0;
    lVar7 = 0;
    if (local_3c != 0) {
      local_2c = local_2c + local_38;
      lVar1 = lVar8 + 1;
      lVar7 = 0;
    }
  }
  else {
    FUN_00042d3c(param_2,iVar3);
    if ((extraout_r1 == 0) ||
       ((FUN_00042d3c(param_2,iVar3), extraout_r1_00 == 1 ||
        (FUN_00042d3c(param_2,iVar3), lVar1 = 0, extraout_r1_01 == iVar3 + -1)))) {
      if (local_3c != 0) {
        local_3c = 1;
      }
      lVar7 = VectorShiftRight(CONCAT44(local_3c,local_3c),0x20);
      lVar7 = lVar8 + lVar7;
      local_2c = local_2c + 1;
      lVar1 = 0;
    }
  }
  if (param_3 != (longlong *)0x0) {
    *param_3 = lVar2;
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = lVar1;
  }
  if (param_5 != (longlong *)0x0) {
    *param_5 = lVar7;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = local_2c;
  }
  return 0;
}



/* ===== FUN_00014258 @ 00014258 size=332 ===== */

int FUN_00014258(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int local_2c;
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  undefined4 local_10;
  int local_c;
  
  FUN_00013f7c(param_1,param_2,local_18,local_20,local_28,&local_2c);
  local_c = FUN_00012a34(param_1,param_2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_18[0];
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_20[0];
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_28[0];
  }
  if (param_6 != (undefined4 *)0x0) {
    if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x60) & 0x80) == 0) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0xfe);
    }
    local_10 = FUN_00042d5c(0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0xff),uVar2);
    uVar1 = FUN_00042c94(param_2,local_10);
    *param_6 = uVar1;
  }
  return (local_c - (*(int *)(param_1 + 0x28) + local_2c)) + -2;
}



/* ===== FUN_000143a4 @ 000143a4 size=568 ===== */

int FUN_000143a4(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  if ((*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) == 0) || (*(int *)(param_1 + 0x54) == 0)
     ) {
LAB_000143ec:
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x10))(*(undefined4 *)(param_1 + 4),0x400);
    iVar1 = FUN_0001d6a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),1,0,0xfffffc00,
                         param_2);
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x10))
              (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    for (local_c = 0; iVar2 = local_c, local_c < 0x200; local_c = local_c + 1) {
      if (*(short *)(iVar1 + local_c * 2) != *(short *)((int)param_2 + local_c * 2)) {
        do {
          local_c = local_c + 1;
          if (0x1ff < local_c) break;
        } while (*(short *)(iVar1 + local_c * 2) != *(short *)((int)param_2 + local_c * 2));
        iVar2 = FUN_0001d544(*(undefined4 *)(param_1 + 4),(iVar2 + 0x200) * 2,(local_c - iVar2) * 2,
                             (void *)((int)param_2 + iVar2 * 2));
        if (iVar2 == 0x7f2bb750) goto LAB_000143ec;
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    }
    memcpy(*(void **)(param_1 + 0x54),param_2,0x400);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000145dc @ 000145dc size=100 ===== */

void FUN_000145dc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar1 + 0x4c) == 0) {
    *(undefined4 *)(iVar1 + 0x4c) = 1;
    *(undefined4 *)(iVar1 + 0x54) = 0xb;
    *(undefined2 *)(iVar1 + 0x58) = 0x80;
  }
  return;
}



/* ===== FUN_00014640 @ 00014640 size=160 ===== */

int FUN_00014640(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = param_2;
  if (0xffff < param_2) {
    local_c = 0xffff;
  }
  *(short *)(param_5 + 0x5a) = (short)local_c;
  iVar1 = FUN_000153d4(param_1,param_5);
  if (iVar1 == 0) {
    iVar1 = FUN_0001d6a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4,
                         0xfffffc00,param_5);
  }
  return iVar1;
}



/* ===== FUN_000146e0 @ 000146e0 size=44 ===== */

undefined4 FUN_000146e0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001470c(param_1,0);
  return uVar1;
}



/* ===== FUN_0001470c @ 0001470c size=1528 ===== */

int FUN_0001470c(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  time_t tVar4;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  undefined1 auStack_48 [16];
  int local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined4 uStack_1c;
  int local_18;
  uint local_14;
  
  local_24 = 0;
  local_28 = 0;
  if (*param_1 == 0x7f2bb701) {
    local_2c = (uint)*(ushort *)(param_1[4] + 0x3a);
    local_30 = *(undefined4 *)(param_1[4] + 0x60);
    if (param_1[0x18] == 0) {
      tVar4 = time((time_t *)0x0);
    }
    else {
      tVar4 = param_1[0x18];
    }
    *(time_t *)(param_1[4] + 0x30) = tVar4;
    *(undefined2 *)(param_1[4] + 0x5a) = 0;
    if ((param_1[0xf] == 0) || (local_18 = (*(code *)param_1[0xf])(param_1), local_18 == 0)) {
      *(ushort *)(param_1[4] + 0x3a) = *(ushort *)(param_1[4] + 0x3a) & 0xfffe;
      FUN_00013d18(param_1[4]);
      local_24 = param_1[4];
      local_28 = param_1[9];
      iVar1 = FUN_00013d4c(param_1[4]);
      if (iVar1 == 0) {
        local_34 = local_28;
        iVar1 = FUN_00013d88(param_1[4]);
        if (iVar1 == 0) {
          local_20 = param_1[8];
        }
        else {
          local_20 = *(uint *)(param_1[4] + 0x104);
          if ((uint)param_1[8] < local_20) {
            local_20 = param_1[8];
          }
        }
        uStack_1c = 0;
        if ((param_1[0x29] != 0) && (*(int *)param_1[0x29] != 0)) {
          (**(code **)param_1[0x29])(param_1,auStack_48,0,0,param_1[7],0);
        }
        for (local_14 = 0; local_14 < (uint)param_1[7]; local_14 = local_14 + 1) {
          if ((param_1[0x29] != 0) && (*(int *)(param_1[0x29] + 4) != 0)) {
            (**(code **)(param_1[0x29] + 4))(param_1,auStack_48,local_14,0);
          }
          FUN_00013f7c(param_1,local_14,&local_50,&local_58,&local_60,0);
          if (((((param_1[2] & 0x200U) == 0) && (local_14 != 0)) &&
              (local_50 != 0 || iStack_4c != 0)) &&
             (local_18 = FUN_00014640(param_1,local_14,local_50,iStack_4c,local_24), local_18 != 0))
          goto LAB_00014ce0;
          if ((param_1[2] & 0x800U) == 0) {
            if (((local_58 != 0 || iStack_54 != 0) &&
                (((param_1[2] & 0x200U) == 0 || (local_14 == 0)))) &&
               (local_18 = FUN_0001d6a0(param_1[1],local_20,local_58,iStack_54,local_20,local_34),
               local_18 != 0)) goto LAB_00014ce0;
            if (local_60 != 0 || iStack_5c != 0) {
              if ((*(uint *)(param_1[4] + 0x60) & 0x80) == 0) {
                uVar3 = 0x20;
              }
              else {
                uVar3 = *(undefined2 *)(param_1[4] + 0xfe);
              }
              uVar2 = FUN_00042d5c(0x400 << (*(uint *)(param_1[4] + 0x18) & 0xff),uVar3);
              local_38 = FUN_00042c94(local_14,uVar2);
              local_18 = FUN_0001d6a0(param_1[1],1,local_60,iStack_5c,1,
                                      local_34 + local_38 * param_1[5]);
              if (local_18 != 0) goto LAB_00014ce0;
              local_18 = 0;
            }
          }
        }
        if ((param_1[0x29] != 0) && (*(int *)(param_1[0x29] + 8) != 0)) {
          (**(code **)(param_1[0x29] + 8))(param_1,auStack_48,0);
        }
      }
      *(undefined2 *)(param_1[4] + 0x5a) = 0;
      *(short *)(param_1[4] + 0x3a) = (short)local_2c;
      *(undefined4 *)(param_1[4] + 0x60) = local_30;
      local_18 = FUN_000153d4(param_1,local_24);
      if (local_18 != 0) {
        return local_18;
      }
      iVar1 = 0;
      if (((((param_2 & 1) != 0) ||
           (local_18 = (**(code **)(*(int *)(param_1[1] + 4) + 0x1c))(param_1[1]), iVar1 = local_18,
           local_18 == 0)) &&
          (local_18 = iVar1, local_18 = FUN_000143a4(param_1,local_24), local_18 == 0)) &&
         (param_1[2] = param_1[2] & 0xfffffffb, (param_2 & 1) == 0)) {
        local_18 = (**(code **)(*(int *)(param_1[1] + 4) + 0x1c))(param_1[1]);
      }
    }
LAB_00014ce0:
    *(short *)(param_1[4] + 0x3a) = (short)local_2c;
  }
  else {
    local_18 = 0x7f2bb701;
  }
  return local_18;
}



/* ===== FUN_00014d04 @ 00014d04 size=92 ===== */

int FUN_00014d04(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = FUN_00014d8c(uVar2,0);
  if (iVar1 != 0) {
    FUN_00017af0(uVar2);
  }
  *param_1 = 0;
  return iVar1;
}



/* ===== FUN_00014d60 @ 00014d60 size=44 ===== */

undefined4 FUN_00014d60(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00014d8c(param_1,0);
  return uVar1;
}



/* ===== FUN_00014d8c @ 00014d8c size=596 ===== */

int FUN_00014d8c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  if (*param_1 == 0x7f2bb701) {
    if ((param_1[0xf] == 0) || (local_14 = (*(code *)param_1[0xf])(param_1), local_14 == 0)) {
      if ((*(int *)(param_1[4] + 0x178) != 0 || *(int *)(param_1[4] + 0x17c) != 0) &&
         (*(int *)(*(int *)(param_1[1] + 4) + 0x28) != 0)) {
        (**(code **)(*(int *)(param_1[1] + 4) + 0x28))(param_1[1],&local_1c);
      }
      if (((local_1c != 0) && (*(int *)(local_1c + 0x10) != 0 || *(int *)(local_1c + 0x14) != 0)) &&
         ((param_1[2] & 1U) != 0)) {
        uVar1 = *(uint *)(param_1[4] + 0x178);
        iVar3 = *(int *)(param_1[4] + 0x17c);
        uVar4 = *(uint *)(local_1c + 0x14);
        uVar5 = *(uint *)(local_1c + 0x10) >> 10 | uVar4 << 0x16;
        iVar6 = param_1[4];
        *(uint *)(iVar6 + 0x178) = uVar5 + uVar1;
        *(uint *)(iVar6 + 0x17c) = (uVar4 >> 10) + iVar3 + (uint)CARRY4(uVar5,uVar1);
        local_18 = param_1[8] + 1;
        if ((param_1[2] & 0x800U) == 0) {
          uVar1 = *(uint *)(param_1[4] + 0x178);
          iVar6 = *(int *)(param_1[4] + 0x17c);
          uVar2 = FUN_00042c94(local_18,(uint)param_1[5] >> 10);
          uVar7 = VectorShiftRight(CONCAT44(uVar2,uVar2),0x20);
          iVar3 = param_1[4];
          *(uint *)(iVar3 + 0x178) = (uint)uVar7 + uVar1;
          *(uint *)(iVar3 + 0x17c) =
               (int)((ulonglong)uVar7 >> 0x20) + iVar6 + (uint)CARRY4((uint)uVar7,uVar1);
        }
        if ((param_1[2] & 4U) == 0) {
          param_1[2] = param_1[2] | 0x804;
        }
      }
      if ((((param_1[2] & 4U) == 0) || (local_14 = FUN_0001470c(param_1,param_2), local_14 == 0)) &&
         (local_14 = FUN_0001faa8(param_1), local_14 == 0)) {
        FUN_00017af0(param_1);
        local_14 = 0;
      }
    }
  }
  else {
    local_14 = 0x7f2bb701;
  }
  return local_14;
}



/* ===== FUN_00014fe0 @ 00014fe0 size=60 ===== */

bool FUN_00014fe0(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_0001501c @ 0001501c size=60 ===== */

bool FUN_0001501c(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_00015058 @ 00015058 size=60 ===== */

bool FUN_00015058(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x2000) != 0;
}



/* ===== FUN_00015094 @ 00015094 size=96 ===== */

undefined4 FUN_00015094(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00014fe0(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_000150f4 @ 000150f4 size=148 ===== */

void FUN_000150f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00015058(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      uVar2 = FUN_0002c844(0xffffffff,*(int *)(param_1 + 0x10) + 0x68,0x10);
      *(undefined4 *)(param_1 + 0xa8) = uVar2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x270);
  }
  return;
}



/* ===== FUN_00015188 @ 00015188 size=68 ===== */

undefined4 FUN_00015188(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c844(*(undefined4 *)(param_1 + 0xa8),param_2,0x3fc);
  return uVar1;
}



/* ===== FUN_000151cc @ 000151cc size=112 ===== */

bool FUN_000151cc(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_00015188(param_1,param_2);
    bVar2 = iVar1 == *(int *)(param_2 + 0x3fc);
  }
  return bVar2;
}



/* ===== FUN_0001523c @ 0001523c size=100 ===== */

undefined4 FUN_0001523c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    uVar2 = FUN_00015188(param_1,param_2);
    *(undefined4 *)(param_2 + 0x3fc) = uVar2;
  }
  return 0;
}



/* ===== FUN_000152a0 @ 000152a0 size=92 ===== */

bool FUN_000152a0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)(param_2 + 0x175) == '\x01';
  }
  return bVar2;
}



/* ===== FUN_000152fc @ 000152fc size=64 ===== */

undefined4 FUN_000152fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c844(0xffffffff,param_2,0x3fc,0x3fc,param_2,param_1);
  return uVar1;
}



/* ===== FUN_0001533c @ 0001533c size=152 ===== */

bool FUN_0001533c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 100) & 0x400) == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_000152fc(param_1,param_2);
    bVar2 = iVar1 == *(int *)(param_2 + 0x3fc);
  }
  return bVar2;
}



/* ===== FUN_000153d4 @ 000153d4 size=140 ===== */

undefined4 FUN_000153d4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 100) & 0x400) != 0) {
    uVar1 = FUN_000152fc(param_1,param_2);
    *(undefined4 *)(param_2 + 0x3fc) = uVar1;
  }
  return 0;
}



/* ===== FUN_00015460 @ 00015460 size=168 ===== */

undefined4
FUN_00015460(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = param_5;
  local_10 = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_5 + 0x10) = 0;
  local_20 = param_3;
  uStack_1c = param_4;
  local_18 = param_2;
  local_14 = param_1;
  uVar1 = FUN_0002c844(*(undefined4 *)(param_1 + 0xa8),&local_20,8);
  *param_6 = uVar1;
  uVar1 = FUN_0002c844(*param_6,local_c,*(undefined4 *)(local_14 + 0x14));
  *param_6 = uVar1;
  *(undefined4 *)(param_5 + 0x10) = local_10;
  return 0;
}



/* ===== FUN_00015508 @ 00015508 size=156 ===== */

bool FUN_00015508(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int local_10 [2];
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_00015460(param_1,param_2,param_3,param_4,param_5,local_10);
    if (iVar1 == 0) {
      bVar2 = *(int *)(param_5 + 0x10) == local_10[0];
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



/* ===== FUN_000155a4 @ 000155a4 size=144 ===== */

int FUN_000155a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 local_10 [2];
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00015460(param_1,param_2,param_3,param_4,param_5,local_10);
    if (iVar1 == 0) {
      *(undefined4 *)(param_5 + 0x10) = local_10[0];
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00015634 @ 00015634 size=40 ===== */

undefined2 FUN_00015634(undefined2 param_1)

{
  return param_1;
}



/* ===== FUN_0001565c @ 0001565c size=40 ===== */

undefined2 FUN_0001565c(undefined2 param_1)

{
  return param_1;
}



/* ===== FUN_00015684 @ 00015684 size=492 ===== */

undefined4 FUN_00015684(int param_1,int param_2,undefined4 *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int local_c;
  
  if (param_5 == 0) {
    uVar1 = 0x5634;
  }
  else {
    uVar1 = 0x565c;
  }
  pcVar4 = (code *)(uVar1 | 0x10000);
  iVar2 = (*pcVar4)(*(undefined2 *)(param_2 + 4));
  if ((iVar2 == *(int *)(param_1 + 0x14)) &&
     (iVar3 = (*pcVar4)(*(undefined2 *)(param_2 + 6)), iVar3 == 0)) {
    local_c = 8;
  }
  else {
    if (iVar2 != 0xc) {
      return 0x7f2bb74e;
    }
    iVar2 = (*pcVar4)(*(undefined2 *)(param_2 + 0x10));
    if (iVar2 != *(int *)(param_1 + 0x14) + -0xc) {
      return 0x7f2bb74e;
    }
    if ((*(int *)(param_2 + 0x18) != 0) || (*(char *)(param_2 + 0x1d) != '\b')) {
      return 0x7f2bb74e;
    }
    local_c = 0x20;
  }
  puVar5 = (ushort *)(param_2 + local_c);
  uVar1 = (uint)(*(int *)(param_1 + 0x14) - local_c) >> 3;
  if ((uVar1 < *puVar5) || (uVar1 < puVar5[1])) {
    uVar6 = 0x7f2bb795;
  }
  else {
    if (param_4 != (int *)0x0) {
      *param_4 = local_c;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = puVar5;
    }
    uVar6 = 0;
  }
  return uVar6;
}



/* ===== FUN_00015870 @ 00015870 size=72 ===== */

undefined4 FUN_00015870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015684(param_1,param_2,param_3,param_4,0);
  return uVar1;
}



/* ===== FUN_000158b8 @ 000158b8 size=76 ===== */

void FUN_000158b8(undefined4 param_1,void *param_2)

{
  memset(param_2,0,0xc);
  FUN_000171c4(param_1,0xc,param_2);
  *(undefined2 *)((int)param_2 + 6) = 0xde00;
  return;
}



/* ===== FUN_00015904 @ 00015904 size=400 ===== */

undefined4 FUN_00015904(int param_1,int *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  uint local_10;
  int *local_c;
  
  if (param_4 == 0) {
    uVar1 = 0x5634;
  }
  else {
    uVar1 = 0x565c;
  }
  pcVar3 = (code *)(uVar1 | 0x10000);
  piVar4 = (int *)((int)param_2 + *(int *)(param_1 + 0x14) + -0xc);
  local_10 = (*pcVar3)((short)param_2[1]);
  local_c = param_2;
  while (((local_10 != 0 && ((local_10 & 3) == 0)) &&
         (local_c = (int *)((int)local_c + local_10), local_c < piVar4))) {
    local_10 = (*pcVar3)((short)local_c[1]);
  }
  if (local_c == piVar4) {
    if (((*local_c == 0) && (iVar2 = (*pcVar3)((short)local_c[1]), iVar2 == 0xc)) &&
       (iVar2 = (*pcVar3)(*(undefined2 *)((int)local_c + 6)), iVar2 == 0xde00)) {
      if (param_3 != (uint *)0x0) {
        *param_3 = (uint)local_c;
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 0x7f2bb795;
    }
  }
  else {
    uVar5 = 0x7f2bb795;
  }
  return uVar5;
}



/* ===== FUN_00015a94 @ 00015a94 size=72 ===== */

bool FUN_00015a94(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00015904(param_1,param_2,0,0);
  return iVar1 == 0;
}



/* ===== FUN_00015adc @ 00015adc size=220 ===== */

int FUN_00015adc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_a0;
  int local_9c;
  undefined1 auStack_94 [100];
  undefined4 local_30;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_a0 = param_2;
  local_9c = param_1;
  local_c = param_3;
  local_10 = FUN_0001c9f4(param_1,param_2,auStack_94);
  if (local_10 == 0) {
    local_14 = local_30;
    uVar1 = FUN_0002c844(*(undefined4 *)(local_9c + 0xa8),&local_a0,4);
    *param_4 = uVar1;
    uVar1 = FUN_0002c844(*param_4,&local_14,4);
    *param_4 = uVar1;
    uVar1 = FUN_0002c844(*param_4,local_c,param_5);
    *param_4 = uVar1;
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_00015bb8 @ 00015bb8 size=172 ===== */

bool FUN_00015bb8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_00015904(param_1,param_3,&local_14,1);
  if (local_c == 0) {
    iVar1 = FUN_00015adc(param_1,param_2,param_3,&local_10,local_14 - param_3);
    if (iVar1 == 0) {
      bVar2 = *(int *)(local_14 + 8) == local_10;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



/* ===== FUN_00015c64 @ 00015c64 size=160 ===== */

int FUN_00015c64(undefined4 param_1,undefined4 param_2,int param_3)

{
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = FUN_00015904(param_1,param_3,&local_14,1);
  if ((local_c == 0) &&
     (local_c = FUN_00015adc(param_1,param_2,param_3,&local_10,local_14 - param_3), local_c == 0)) {
    *(undefined4 *)(local_14 + 8) = local_10;
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_00015d04 @ 00015d04 size=312 ===== */

int FUN_00015d04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5,
                int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 local_a8;
  int local_a4;
  undefined1 auStack_9c [100];
  undefined4 local_38;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_10 = param_6 * 8 + param_5;
  local_14 = *(undefined4 *)(param_7 + 4);
  *(undefined4 *)(param_7 + 4) = 0;
  local_a8 = param_2;
  local_a4 = param_1;
  local_c = param_3;
  local_18 = FUN_0001c9f4(param_1,param_2,auStack_9c);
  if (local_18 == 0) {
    local_1c = local_38;
    uVar1 = FUN_0002c844(*(undefined4 *)(local_a4 + 0xa8),&local_a8,4);
    *param_4 = uVar1;
    uVar1 = FUN_0002c844(*param_4,&local_1c,4);
    *param_4 = uVar1;
    uVar1 = FUN_0002c844(*param_4,local_c,local_10);
    *param_4 = uVar1;
    uVar1 = FUN_0002c844(*param_4,param_7,8);
    *param_4 = uVar1;
    *(undefined4 *)(param_7 + 4) = local_14;
    local_18 = 0;
  }
  return local_18;
}



/* ===== FUN_00015e3c @ 00015e3c size=280 ===== */

bool FUN_00015e3c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  int local_24;
  ushort *local_20;
  int local_1c;
  ushort *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = FUN_00015684(param_1,param_3,&local_20,&local_24,1);
  if (local_c == 0) {
    local_10 = (uint)*local_20;
    local_14 = (uint)local_20[1];
    if (*(int *)(param_1 + 0x14) - 8U < local_10 * 8 + local_24) {
      bVar2 = false;
    }
    else {
      local_18 = local_20 + local_10 * 4;
      iVar1 = FUN_00015d04(param_1,param_2,param_3,&local_1c,local_24,local_14,local_18);
      if (iVar1 == 0) {
        bVar2 = *(int *)(local_18 + 2) == local_1c;
      }
      else {
        bVar2 = false;
      }
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



/* ===== FUN_00015f54 @ 00015f54 size=280 ===== */

int FUN_00015f54(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_24;
  ushort *local_20;
  undefined4 local_1c;
  ushort *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_c = FUN_00015684(param_1,param_3,&local_20,&local_24,1);
  if (local_c == 0) {
    local_10 = (uint)*local_20;
    local_14 = (uint)local_20[1];
    if (*(int *)(param_1 + 0x14) - 8U < local_10 * 8 + local_24) {
      local_c = 0x7f2bb795;
    }
    else {
      local_18 = local_20 + local_10 * 4;
      local_c = FUN_00015d04(param_1,param_2,param_3,&local_1c,local_24,local_14,local_18);
      if (local_c == 0) {
        *(undefined4 *)(local_18 + 2) = local_1c;
      }
    }
  }
  return local_c;
}



/* ===== FUN_0001606c @ 0001606c size=196 ===== */

undefined4 FUN_0001606c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00015904(param_1,param_3,0,1);
    if (iVar1 == 0) {
      uVar2 = FUN_00015bb8(param_1,param_2,param_3);
    }
    else {
      iVar1 = FUN_00015684(param_1,param_3,0,0,1);
      if (iVar1 == 0) {
        uVar2 = FUN_00015e3c(param_1,param_2,param_3);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00016130 @ 00016130 size=228 ===== */

undefined4 FUN_00016130(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00015904(param_1,param_3,0,1);
    if (iVar1 == 0) {
      uVar2 = FUN_00015c64(param_1,param_2,param_3);
    }
    else {
      iVar1 = FUN_00015684(param_1,param_3,0,0,1);
      if (iVar1 == 0) {
        uVar2 = FUN_00015f54(param_1,param_2,param_3);
      }
      else if ((*(uint *)(param_1 + 8) & 0x200000) == 0) {
        uVar2 = 0x7f2bb795;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00016214 @ 00016214 size=60 ===== */

int FUN_00016214(int param_1)

{
  return param_1 + (*(ushort *)(param_1 + 4) + 1) * 0xc;
}



/* ===== FUN_00016250 @ 00016250 size=236 ===== */

int FUN_00016250(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_a0;
  int local_9c;
  undefined1 auStack_94 [100];
  undefined4 local_30;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = (*(ushort *)(param_3 + 4) + 1) * 0xc;
  local_a0 = param_2;
  local_9c = param_1;
  local_10 = FUN_0001c9f4(param_1,param_2,auStack_94);
  if (local_10 == 0) {
    local_14 = local_30;
    uVar1 = FUN_0002c844(*(undefined4 *)(local_9c + 0xa8),&local_a0,4);
    *param_4 = uVar1;
    uVar1 = FUN_0002c844(*param_4,&local_14,4);
    *param_4 = uVar1;
    uVar1 = FUN_0002c844(*param_4,param_3,local_c);
    *param_4 = uVar1;
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_0001633c @ 0001633c size=164 ===== */

bool FUN_0001633c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  int local_18 [2];
  int local_10;
  int *local_c;
  
  local_c = (int *)FUN_00016214(param_3);
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    local_10 = *local_c;
    iVar1 = FUN_00016250(param_1,param_2,param_3,local_18);
    if (iVar1 == 0) {
      bVar2 = local_10 == local_18[0];
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



/* ===== FUN_000163e0 @ 000163e0 size=144 ===== */

int FUN_000163e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 *local_c;
  
  local_c = (undefined4 *)FUN_00016214(param_3);
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00016250(param_1,param_2,param_3,local_14);
    if (iVar1 == 0) {
      *local_c = local_14[0];
    }
  }
  return iVar1;
}



/* ===== FUN_00016470 @ 00016470 size=228 ===== */

bool FUN_00016470(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_10;
  uint local_c;
  
  iVar2 = FUN_00012f84(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar3 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = *(ushort *)(iVar2 + 0x1a);
    local_c = (uint)uVar1;
    local_10 = FUN_0002c844(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
    if (*(ushort *)(*(int *)(param_1 + 0x10) + 0xfe) < 0x3c) {
      local_10 = local_10 & 0xffff;
    }
    else {
      local_c = CONCAT22(*(undefined2 *)(iVar2 + 0x3a),uVar1);
    }
    bVar4 = local_c == local_10;
  }
  return bVar4;
}



/* ===== FUN_00016554 @ 00016554 size=192 ===== */

undefined4 FUN_00016554(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00012f84(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar2 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar3 = FUN_0002c844(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
    *(short *)(iVar1 + 0x1a) = (short)uVar3;
    if (0x3b < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
      *(short *)(iVar1 + 0x3a) = (short)((uint)uVar3 >> 0x10);
    }
  }
  return 0;
}



/* ===== FUN_00016614 @ 00016614 size=228 ===== */

bool FUN_00016614(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_10;
  uint local_c;
  
  iVar2 = FUN_00012f84(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar3 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = *(ushort *)(iVar2 + 0x18);
    local_c = (uint)uVar1;
    local_10 = FUN_0002c844(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
    if (*(ushort *)(*(int *)(param_1 + 0x10) + 0xfe) < 0x3a) {
      local_10 = local_10 & 0xffff;
    }
    else {
      local_c = CONCAT22(*(undefined2 *)(iVar2 + 0x38),uVar1);
    }
    bVar4 = local_c == local_10;
  }
  return bVar4;
}



/* ===== FUN_000166f8 @ 000166f8 size=192 ===== */

undefined4 FUN_000166f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00012f84(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar2 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar3 = FUN_0002c844(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
    *(short *)(iVar1 + 0x18) = (short)uVar3;
    if (0x39 < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
      *(short *)(iVar1 + 0x38) = (short)((uint)uVar3 >> 0x10);
    }
  }
  return 0;
}



/* ===== FUN_000167b8 @ 000167b8 size=328 ===== */

undefined4 FUN_000167b8(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 local_28;
  int local_24;
  undefined4 local_1c;
  undefined2 local_16;
  uint local_14;
  int local_10;
  undefined2 local_a;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
    local_14 = 0x80;
  }
  else {
    local_14 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x58);
  }
  local_a = 0;
  local_16 = *(undefined2 *)(param_3 + 0x7c);
  *(undefined2 *)(param_3 + 0x7c) = 0;
  if (param_5 != 0) {
    local_a = *(undefined2 *)(param_3 + 0x82);
    *(undefined2 *)(param_3 + 0x82) = 0;
  }
  local_1c = *(undefined4 *)(param_3 + 100);
  local_28 = param_2;
  local_24 = param_1;
  local_10 = param_3;
  uVar1 = FUN_0002c844(*(undefined4 *)(param_1 + 0xa8),&local_28,4);
  *param_4 = uVar1;
  uVar1 = FUN_0002c844(*param_4,&local_1c,4);
  *param_4 = uVar1;
  uVar1 = FUN_0002c844(*param_4,local_10,local_14);
  *param_4 = uVar1;
  *(undefined2 *)(param_3 + 0x7c) = local_16;
  if (param_5 != 0) {
    *(undefined2 *)(param_3 + 0x82) = local_a;
  }
  return 0;
}



/* ===== FUN_00016900 @ 00016900 size=380 ===== */

undefined4 FUN_00016900(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_24 [3];
  int local_18;
  char *local_14;
  uint local_10;
  uint local_c;
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    if (((*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) ||
        (*(ushort *)(*(int *)(param_1 + 0x10) + 0x58) < 0x81)) || (*(ushort *)(param_3 + 0x80) < 4))
    {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    local_c = (uint)*(ushort *)(param_3 + 0x7c);
    iVar1 = FUN_000167b8(param_1,param_2,param_3,local_24,local_18);
    if (iVar1 == 0) {
      if (local_18 == 0) {
        local_24[0] = local_24[0] & 0xffff;
      }
      else {
        local_c = local_c | (uint)*(ushort *)(param_3 + 0x82) << 0x10;
      }
      if (local_c == local_24[0]) {
        uVar2 = 1;
      }
      else {
        local_14 = param_3;
        for (local_10 = 0; local_10 < 0x80; local_10 = local_10 + 1) {
          if (*local_14 != '\0') {
            return 0;
          }
          local_14 = local_14 + 1;
        }
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_00016a7c @ 00016a7c size=252 ===== */

int FUN_00016a7c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_14 [8];
  int local_c;
  
  iVar1 = FUN_0001501c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if (((*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) ||
        (*(ushort *)(*(int *)(param_1 + 0x10) + 0x58) < 0x81)) || (*(ushort *)(param_3 + 0x80) < 4))
    {
      local_c = 0;
    }
    else {
      local_c = 1;
    }
    iVar1 = FUN_000167b8(param_1,param_2,param_3,local_14,local_c);
    if (iVar1 == 0) {
      *(short *)(param_3 + 0x7c) = (short)local_14._0_4_;
      if (local_c != 0) {
        *(short *)(param_3 + 0x82) = SUB42(local_14._0_4_,2);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00016b78 @ 00016b78 size=424 ===== */

undefined2 FUN_00016b78(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  undefined2 local_16;
  uint local_14;
  int local_10;
  undefined2 local_a;
  
  local_28 = param_2;
  local_24 = param_1;
  local_10 = FUN_00012f84(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  if ((*(uint *)(*(int *)(local_24 + 0x10) + 0x60) & 0x80) == 0) {
    local_14 = 0x20;
  }
  else {
    local_14 = (uint)*(ushort *)(*(int *)(local_24 + 0x10) + 0xfe);
  }
  local_a = 0;
  iVar1 = FUN_0001501c(*(undefined4 *)(local_24 + 0x10));
  if (iVar1 == 0) {
    local_20 = 0x1e;
    local_a = FUN_0002c440(0xffffffff,*(int *)(local_24 + 0x10) + 0x68,0x10);
    local_a = FUN_0002c440(local_a,&local_28,4);
    local_a = FUN_0002c440(local_a,local_10,local_20);
    local_20 = local_20 + 2;
    if (local_20 < local_14) {
      local_a = FUN_0002c440(local_a,local_10 + local_20,local_14 - local_20);
    }
  }
  else {
    local_16 = *(undefined2 *)(local_10 + 0x1e);
    *(undefined2 *)(local_10 + 0x1e) = 0;
    local_1c = FUN_0002c844(*(undefined4 *)(local_24 + 0xa8),&local_28,4);
    local_a = FUN_0002c844(local_1c,local_10,local_14);
    *(undefined2 *)(local_10 + 0x1e) = local_16;
  }
  return local_a;
}



/* ===== FUN_00016d20 @ 00016d20 size=108 ===== */

undefined4 FUN_00016d20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00015094(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00013a14(param_1,param_2);
    iVar2 = FUN_00016b78(param_1,param_2);
    if (iVar1 != iVar2) {
      return 0;
    }
  }
  return 1;
}



/* ===== FUN_00016d8c @ 00016d8c size=88 ===== */

void FUN_00016d8c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00015094(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00016b78(param_1,param_2);
    FUN_00013a58(param_1,param_2,uVar2);
  }
  return;
}



/* ===== FUN_00016de4 @ 00016de4 size=164 ===== */

int FUN_00016de4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  
  uVar2 = param_2 * param_3 + 1;
  local_c = uVar2 + param_2;
  do {
    local_c = local_c - 1;
    if (local_c < uVar2) {
      return param_2;
    }
    iVar1 = FUN_0001872c(param_1,local_c);
  } while (iVar1 == 0);
  return (local_c - uVar2) + 1;
}



/* ===== FUN_00016e88 @ 00016e88 size=596 ===== */

undefined4 FUN_00016e88(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_18;
  
  iVar7 = *(int *)(param_1 + 0x10);
  bVar1 = false;
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar8 = 0x7f2bb727;
  }
  else {
    iVar2 = FUN_00015094(param_1);
    if (iVar2 == 0) {
      uVar8 = 0;
    }
    else {
      local_18 = 0;
      while( true ) {
        if (*(uint *)(param_1 + 0x1c) <= local_18) break;
        iVar2 = FUN_00013a14(param_1,local_18);
        iVar3 = FUN_00013764(param_1,local_18);
        iVar4 = FUN_00013860(param_1,local_18);
        iVar5 = FUN_0001356c(param_1,local_18);
        iVar6 = FUN_00013470(param_1,local_18);
        if ((iVar6 == *(int *)(iVar7 + 0x20)) && (local_18 != *(int *)(param_1 + 0x1c) - 1U)) {
          FUN_00013944(param_1,local_18,2);
        }
        if (iVar5 == *(int *)(iVar7 + 0x28)) {
          FUN_00013944(param_1,local_18,1);
          FUN_000137e0(param_1,local_18,*(undefined4 *)(iVar7 + 0x28));
        }
        else {
          iVar6 = *(int *)(iVar7 + 0x28);
          iVar5 = FUN_00016de4(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar7 + 0x28),
                               local_18);
          FUN_000139a4(param_1,local_18,1);
          FUN_000137e0(param_1,local_18,iVar6 - iVar5);
        }
        FUN_00016d8c(param_1,local_18);
        iVar5 = FUN_00013860(param_1,local_18);
        if (iVar4 != iVar5) {
          bVar1 = true;
        }
        iVar4 = FUN_00013764(param_1,local_18);
        if (iVar3 != iVar4) {
          bVar1 = true;
        }
        iVar3 = FUN_00013a14(param_1,local_18);
        if (iVar2 != iVar3) {
          bVar1 = true;
        }
        local_18 = local_18 + 1;
      }
      if (bVar1) {
        FUN_00018d14(param_1);
      }
      uVar8 = 0;
    }
  }
  return uVar8;
}



/* ===== FUN_000170dc @ 000170dc size=60 ===== */

bool FUN_000170dc(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_00017118 @ 00017118 size=172 ===== */

undefined4 FUN_00017118(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_2 + 4);
  if (*(uint *)(param_1 + 0x14) < 0x10000) {
    *param_3 = uVar1;
  }
  else if ((uVar1 == 0xffff) || (uVar1 == 0)) {
    *param_3 = *(uint *)(param_1 + 0x14);
  }
  else {
    *param_3 = uVar1 & 0xfffc | (uVar1 & 3) << 0x10;
  }
  return 0;
}



/* ===== FUN_000171c4 @ 000171c4 size=260 ===== */

undefined4 FUN_000171c4(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (((*(uint *)(param_1 + 0x14) < param_2) || (0x40000 < *(uint *)(param_1 + 0x14))) ||
     ((param_2 & 3) != 0)) {
    uVar1 = 0x16;
  }
  else if (param_2 < 0x10000) {
    *(ushort *)(param_3 + 4) = (ushort)param_2;
    uVar1 = 0;
  }
  else {
    if (param_2 == *(uint *)(param_1 + 0x14)) {
      if (*(int *)(param_1 + 0x14) == 0x10000) {
        *(undefined2 *)(param_3 + 4) = 0xffff;
      }
      else {
        *(undefined2 *)(param_3 + 4) = 0;
      }
    }
    else {
      *(ushort *)(param_3 + 4) = (ushort)param_2 & 0xfffc | (ushort)(param_2 >> 0x10) & 3;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000172c8 @ 000172c8 size=244 ===== */

bool FUN_000172c8(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint local_1c;
  uint local_10;
  int local_c;
  
  local_1c = param_3;
  do {
    if ((param_4 <= local_1c) || (*(int *)(param_1 + 0x14) - 0xcU < local_1c)) {
      return local_1c == param_4;
    }
    local_c = param_2 + local_1c;
    iVar1 = FUN_00017118(param_1,local_c,&local_10);
    if (iVar1 != 0) {
      return false;
    }
    local_1c = local_1c + local_10;
  } while (((7 < local_10) && ((local_10 & 3) == 0)) &&
          (iVar1 = FUN_000190d8(local_c), iVar1 + 7 < (int)local_10));
  return false;
}



/* ===== FUN_000173bc @ 000173bc size=372 ===== */

int FUN_000173bc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  if (*param_1 == 0x7f2bb701) {
    local_10 = FUN_0001d2b8(param_1,param_2);
    if (local_10 == 0) {
      local_28 = param_2;
      local_24 = param_3;
      if (param_4 == 0) {
        local_c = local_10;
        local_c = FUN_00018a74(param_1[5],local_20);
        if (local_c != 0) {
          return local_c;
        }
      }
      else {
        local_c = 0;
        local_20[0] = param_4;
      }
      local_18 = param_5;
      local_14 = param_6;
      local_10 = 0;
      local_c = FUN_0002a368(param_1,param_2,8,0,FUN_000175f0,&local_28);
      if (param_4 == 0) {
        FUN_00018c58(local_20);
      }
      if (local_c == 0x7f2bb79d) {
        FUN_00019644(param_1,param_2,&local_28);
        local_c = 0;
      }
      if (local_c != 0) {
        local_10 = local_c;
      }
    }
  }
  else {
    local_10 = 0x7f2bb701;
  }
  return local_10;
}



/* ===== FUN_00017530 @ 00017530 size=92 ===== */

undefined4
FUN_00017530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*param_7)(param_3,param_4,param_5,param_6,param_7[1]);
  return uVar1;
}



/* ===== FUN_0001758c @ 0001758c size=100 ===== */

undefined4
FUN_0001758c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_6;
  local_10 = param_5;
  uVar1 = FUN_000173bc(param_1,param_2,param_3,param_4,FUN_00017530,&local_10);
  return uVar1;
}



/* ===== FUN_000175f0 @ 000175f0 size=1280 ===== */

uint FUN_000175f0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_stack_0000000c;
  uint local_4c;
  uint local_48;
  uint local_44;
  int *local_40;
  uint local_3c;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_34 = in_stack_0000000c;
  local_14 = 0;
  local_18 = 0;
  local_38 = 0;
  local_1c = 0;
  local_20 = 0;
  local_2c = 0;
  local_30 = 0;
  if (param_4 < 0) {
    local_30 = 0;
  }
  else {
    if (param_3 == 0 && param_4 == 0) {
      local_28 = 1;
    }
    else {
      local_28 = 3;
    }
    local_3c = (uint)((in_stack_0000000c[1] & 8) != 0);
    if (local_3c == 0) {
      uVar1 = FUN_0002c938(param_1,in_stack_0000000c[2],*param_2,param_2[1],in_stack_0000000c[2],0,
                           *in_stack_0000000c);
      local_34[6] = uVar1;
      if (local_34[6] != 0) {
        return 2;
      }
      local_24 = *(uint *)(param_1 + 0x14);
    }
    else {
      local_24 = in_stack_0000000c[3];
    }
    iVar2 = FUN_000170dc(*(undefined4 *)(param_1 + 0x10));
    if (iVar2 != 0) {
      local_2c = 0xc;
    }
    while (local_14 < local_24 - 8) {
      local_40 = (int *)(local_34[2] + local_14);
      iVar2 = FUN_00017118(param_1,local_40,&local_4c);
      if (iVar2 != 0) {
        return 2;
      }
      if ((((local_24 < local_4c + local_14) || (local_4c < 8)) || ((local_4c & 3) != 0)) ||
         (iVar2 = FUN_000190d8(local_40), (int)local_4c <= iVar2 + 7)) {
        local_34[6] = 0x7f2bb723;
        return 2;
      }
      if (*local_40 == 0) {
        if (((local_3c == 0) && (local_14 == local_24 - local_2c)) &&
           ((local_2c == *(ushort *)(local_40 + 1) && (*(short *)((int)local_40 + 6) == -0x2200))))
        {
          if ((local_34[1] & 4) != 0) {
            local_28 = 5;
            goto LAB_00017874;
          }
        }
        else if ((local_34[1] & 1) != 0) goto LAB_00017874;
      }
      else {
LAB_00017874:
        iVar2 = local_28;
        if (local_14 < local_18) {
          iVar2 = 4;
        }
        local_38 = (*(code *)local_34[4])
                             (*local_34,iVar2,local_40,local_14,local_24,local_34[2],local_34[5]);
        if (local_28 < 3) {
          local_28 = local_28 + 1;
        }
        if ((local_38 & 1) != 0) {
          iVar2 = FUN_00017118(param_1,local_40,&local_4c);
          if (iVar2 != 0) {
            return 2;
          }
          local_1c = local_1c + 1;
        }
        if ((local_38 & 2) != 0) {
          local_20 = local_20 + 1;
          break;
        }
      }
      if (local_18 == local_14) {
        local_18 = local_18 + local_4c;
      }
      if ((local_34[1] & 2) == 0) {
LAB_00017a30:
        local_14 = local_14 + local_4c;
      }
      else {
        iVar2 = FUN_000190d8(local_40);
        local_44 = iVar2 + 0xbU & 0xfffffffc;
        if (local_44 == local_4c) goto LAB_00017a30;
        local_48 = local_14 + local_4c;
        local_14 = local_14 + local_44;
        while ((local_14 < local_48 &&
               (iVar2 = FUN_000172c8(param_1,local_34[2],local_14,local_48), iVar2 == 0))) {
          local_14 = local_14 + 4;
        }
      }
    }
    if (local_1c != 0) {
      if (local_3c == 0) {
        uVar1 = FUN_0002cae0(param_1,local_34[2],*param_2,param_2[1],local_34[2],0,*local_34);
        local_34[6] = uVar1;
        if (local_34[6] != 0) {
          return 2;
        }
      }
      else {
        local_30 = 8;
      }
    }
    if (local_20 != 0) {
      local_30 = local_30 | 2;
    }
  }
  return local_30;
}



/* ===== FUN_00017af0 @ 00017af0 size=648 ===== */

void FUN_00017af0(int *param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  undefined4 extraout_r1_08;
  undefined4 extraout_r1_09;
  undefined4 extraout_r1_10;
  undefined4 extraout_r1_11;
  undefined4 extraout_r1_12;
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb701)) {
    local_c = param_1;
    if ((param_1[0x22] != param_1[1]) && (param_1[0x22] != 0)) {
      (**(code **)(*(int *)(param_1[0x22] + 4) + 0xc))(param_1[0x22]);
      param_2 = extraout_r1;
    }
    if (local_c[1] != 0) {
      (**(code **)(*(int *)(local_c[1] + 4) + 0xc))(local_c[1]);
      param_2 = extraout_r1_00;
    }
    if (local_c[3] != 0) {
      FUN_00018c58(local_c + 3);
      param_2 = extraout_r1_01;
    }
    if (local_c[4] != 0) {
      FUN_00018c58(local_c + 4);
      param_2 = extraout_r1_02;
    }
    if (local_c[0x15] != 0) {
      FUN_00018c58(local_c + 0x15);
      param_2 = extraout_r1_03;
    }
    if (local_c[9] != 0) {
      FUN_00018c58(local_c + 9);
      param_2 = extraout_r1_04;
    }
    if (local_c[0xc] != 0) {
      FUN_00028158(local_c[0xc]);
      param_2 = extraout_r1_05;
    }
    if (local_c[0xb] != 0) {
      FUN_00028134(local_c[0xb]);
      param_2 = extraout_r1_06;
    }
    if (local_c[0x16] != 0) {
      FUN_00018c58(local_c + 0x16);
      param_2 = extraout_r1_07;
    }
    if (local_c[0x12] != 0) {
      FUN_00017de8(local_c[0x12]);
      param_2 = extraout_r1_08;
    }
    local_c[0x12] = 0;
    if (local_c[0x13] != 0) {
      FUN_00017e0c(local_c[0x13]);
      param_2 = extraout_r1_09;
    }
    if (local_c[0x21] != 0) {
      FUN_0001a87c(local_c[0x21]);
      param_2 = extraout_r1_10;
    }
    if (local_c[0x25] != 0) {
      FUN_00018c58(local_c + 0x25);
      param_2 = extraout_r1_11;
    }
    if (local_c[0x26] != 0) {
      FUN_00018c58(local_c + 0x26);
      param_2 = extraout_r1_12;
    }
    *local_c = 0;
    FUN_0001ddd0(0,param_2,0,0,0,0,0);
    FUN_00018c58(&local_c);
  }
  return;
}



/* ===== FUN_00017d78 @ 00017d78 size=112 ===== */

void FUN_00017d78(int *param_1)

{
  int *local_c;
  
  if (*param_1 == 0x7f2bb702) {
    local_c = param_1;
    if (param_1[3] != 0) {
      FUN_00018c58(param_1 + 3);
    }
    local_c[3] = 0;
    FUN_00018c58(&local_c);
  }
  return;
}



/* ===== FUN_00017de8 @ 00017de8 size=36 ===== */

void FUN_00017de8(undefined4 param_1)

{
  FUN_00017d78(param_1);
  return;
}



/* ===== FUN_00017e0c @ 00017e0c size=192 ===== */

void FUN_00017e0c(int *param_1)

{
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb70c)) {
    local_c = param_1;
    if (param_1[7] != 0) {
      FUN_00018c58(param_1 + 7);
    }
    local_c[7] = 0;
    if ((local_c[1] != 0) && (*(int **)(local_c[1] + 0x4c) == local_c)) {
      *(undefined4 *)(local_c[1] + 0x4c) = 0;
    }
    *local_c = 0;
    FUN_00018c58(&local_c);
  }
  return;
}



/* ===== FUN_00017ecc @ 00017ecc size=108 ===== */

void FUN_00017ecc(uint param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_2 + (param_1 >> 3));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_1 & 7));
  return;
}



/* ===== FUN_00017f38 @ 00017f38 size=116 ===== */

void FUN_00017f38(uint param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_2 + (param_1 >> 3));
  *pbVar1 = ~(byte)(1 << (param_1 & 7)) & *pbVar1;
  return;
}



/* ===== FUN_00017fac @ 00017fac size=116 ===== */

void FUN_00017fac(uint param_1,int param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_1 & 7));
  return;
}



/* ===== FUN_00018020 @ 00018020 size=124 ===== */

void FUN_00018020(uint param_1,int param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
  *pbVar1 = ~(byte)(1 << (param_1 & 7)) & *pbVar1;
  return;
}



/* ===== FUN_000180cc @ 000180cc size=84 ===== */

uint FUN_000180cc(uint param_1)

{
  return param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}



/* ===== FUN_00018120 @ 00018120 size=116 ===== */

undefined8 FUN_00018120(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_000180cc(param_2);
  uVar2 = FUN_000180cc(param_1);
  return CONCAT44(uVar2,uVar1);
}



/* ===== FUN_00018194 @ 00018194 size=48 ===== */

undefined4 FUN_00018194(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037ac8(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000181c4 @ 000181c4 size=48 ===== */

undefined4 FUN_000181c4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037c30(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000181f4 @ 000181f4 size=48 ===== */

undefined4 FUN_000181f4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037960(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00018224 @ 00018224 size=48 ===== */

undefined4 FUN_00018224(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037ac8(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00018254 @ 00018254 size=48 ===== */

undefined4 FUN_00018254(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037c30(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00018284 @ 00018284 size=48 ===== */

undefined4 FUN_00018284(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037960(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000182b4 @ 000182b4 size=44 ===== */

void FUN_000182b4(undefined4 param_1,undefined4 param_2)

{
  FUN_00037ac8(param_1,param_2);
  return;
}



/* ===== FUN_000182e0 @ 000182e0 size=44 ===== */

void FUN_000182e0(undefined4 param_1,undefined4 param_2)

{
  FUN_00037c30(param_1,param_2);
  return;
}



/* ===== FUN_0001830c @ 0001830c size=48 ===== */

undefined4 FUN_0001830c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037960(param_1,param_2);
  return uVar1;
}



/* ===== FUN_0001833c @ 0001833c size=44 ===== */

void FUN_0001833c(undefined4 param_1,undefined4 param_2)

{
  FUN_00037ac8(param_1,param_2);
  return;
}



/* ===== FUN_00018368 @ 00018368 size=44 ===== */

void FUN_00018368(undefined4 param_1,undefined4 param_2)

{
  FUN_00037c30(param_1,param_2);
  return;
}



/* ===== FUN_00018394 @ 00018394 size=48 ===== */

undefined4 FUN_00018394(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037960(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000183c4 @ 000183c4 size=40 ===== */

undefined4 FUN_000183c4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037d98(param_1);
  return uVar1;
}



/* ===== FUN_000183ec @ 000183ec size=40 ===== */

undefined4 FUN_000183ec(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037d98(param_1);
  return uVar1;
}



/* ===== FUN_00018414 @ 00018414 size=40 ===== */

undefined4 FUN_00018414(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037e94(param_1);
  return uVar1;
}



/* ===== FUN_0001843c @ 0001843c size=40 ===== */

undefined4 FUN_0001843c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037e94(param_1);
  return uVar1;
}



/* ===== FUN_00018464 @ 00018464 size=56 ===== */

undefined4 FUN_00018464(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038b4c(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0001849c @ 0001849c size=52 ===== */

void FUN_0001849c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00038cbc(param_1,param_2,param_3);
  return;
}



/* ===== FUN_000184d0 @ 000184d0 size=52 ===== */

void FUN_000184d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00038d84(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00018504 @ 00018504 size=48 ===== */

undefined4 FUN_00018504(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039c04(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00018534 @ 00018534 size=48 ===== */

undefined4 FUN_00018534(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039da8(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00018564 @ 00018564 size=48 ===== */

undefined4 FUN_00018564(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039f4c(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00018594 @ 00018594 size=56 ===== */

undefined4 FUN_00018594(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039c04(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_000185cc @ 000185cc size=56 ===== */

undefined4 FUN_000185cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039da8(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00018604 @ 00018604 size=56 ===== */

undefined4 FUN_00018604(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039f4c(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_0001863c @ 0001863c size=44 ===== */

void FUN_0001863c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00039c04(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00018668 @ 00018668 size=44 ===== */

void FUN_00018668(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00039da8(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00018694 @ 00018694 size=48 ===== */

undefined4 FUN_00018694(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039f4c(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_000186c4 @ 000186c4 size=52 ===== */

void FUN_000186c4(undefined4 param_1,undefined4 param_2)

{
  FUN_00039c04(param_1,param_2,param_2,0);
  return;
}



/* ===== FUN_000186f8 @ 000186f8 size=52 ===== */

void FUN_000186f8(undefined4 param_1,undefined4 param_2)

{
  FUN_00039da8(param_1,param_2,param_2,0);
  return;
}



/* ===== FUN_0001872c @ 0001872c size=56 ===== */

undefined4 FUN_0001872c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039f4c(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00018764 @ 00018764 size=92 ===== */

int FUN_00018764(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_0003b03c(param_1,param_2,param_3,param_4,param_5,param_6,&local_18);
  if (iVar1 == 0) {
    *param_7 = local_18;
    param_7[1] = uStack_14;
  }
  return iVar1;
}



/* ===== FUN_000187c0 @ 000187c0 size=124 ===== */

int FUN_000187c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_0003b03c(param_1,0,param_2,0,param_3,0,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_0001883c @ 0001883c size=92 ===== */

int FUN_0001883c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_0003b35c(param_1,param_2,param_3,param_4,param_5,param_6,&local_18);
  if (iVar1 == 0) {
    *param_7 = local_18;
    param_7[1] = uStack_14;
  }
  return iVar1;
}



/* ===== FUN_00018898 @ 00018898 size=124 ===== */

int FUN_00018898(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_0003b35c(param_1,0,param_2,0,param_3,0,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_00018914 @ 00018914 size=48 ===== */

undefined4 FUN_00018914(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039998(param_1);
  return uVar1;
}



/* ===== FUN_00018944 @ 00018944 size=48 ===== */

undefined4 FUN_00018944(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039998(param_1);
  return uVar1;
}



/* ===== FUN_00018974 @ 00018974 size=48 ===== */

undefined4 FUN_00018974(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039a8c(param_1);
  return uVar1;
}



/* ===== FUN_000189a4 @ 000189a4 size=48 ===== */

undefined4 FUN_000189a4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00039a8c(param_1);
  return uVar1;
}



/* ===== FUN_000189d4 @ 000189d4 size=56 ===== */

undefined4
FUN_000189d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003a694(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}



/* ===== FUN_00018a0c @ 00018a0c size=52 ===== */

void FUN_00018a0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0003a93c(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== FUN_00018a40 @ 00018a40 size=52 ===== */

void FUN_00018a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0003ab9c(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== FUN_00018a74 @ 00018a74 size=88 ===== */

undefined4 FUN_00018a74(size_t param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0x7f2bb746;
  }
  else {
    *param_2 = pvVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00018acc @ 00018acc size=108 ===== */

undefined4 FUN_00018acc(size_t param_1,undefined4 *param_2)

{
  void *__s;
  undefined4 uVar1;
  
  __s = malloc(param_1);
  if (__s == (void *)0x0) {
    uVar1 = 0x7f2bb746;
  }
  else {
    memset(__s,0,param_1);
    *param_2 = __s;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00018b38 @ 00018b38 size=128 ===== */

undefined4 FUN_00018b38(uint param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || ((int)((ulonglong)param_2 * (ulonglong)param_1 >> 0x20) == 0)) {
    uVar1 = FUN_00018a74(param_2 * param_1,param_3);
  }
  else {
    uVar1 = 0x7f2bb746;
  }
  return uVar1;
}



/* ===== FUN_00018bb8 @ 00018bb8 size=160 ===== */

undefined4 FUN_00018bb8(uint param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || ((int)((ulonglong)param_2 * (ulonglong)param_1 >> 0x20) == 0)) {
    pvVar1 = calloc(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0x7f2bb746;
    }
    else {
      *param_3 = pvVar1;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x7f2bb746;
  }
  return uVar2;
}



/* ===== FUN_00018c58 @ 00018c58 size=76 ===== */

undefined4 FUN_00018c58(undefined4 *param_1)

{
  free((void *)*param_1);
  *param_1 = 0;
  return 0;
}



/* ===== FUN_00018ca4 @ 00018ca4 size=112 ===== */

undefined4 FUN_00018ca4(undefined4 param_1,size_t param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = realloc((void *)*param_3,param_2);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0x7f2bb746;
  }
  else {
    *param_3 = pvVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00018d14 @ 00018d14 size=52 ===== */

void FUN_00018d14(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 6;
  return;
}



/* ===== FUN_00018d48 @ 00018d48 size=52 ===== */

void FUN_00018d48(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



/* ===== FUN_00018e3c @ 00018e3c size=52 ===== */

void FUN_00018e3c(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x12;
  return;
}



/* ===== FUN_00018e70 @ 00018e70 size=52 ===== */

void FUN_00018e70(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x22;
  return;
}



/* ===== FUN_00018ea4 @ 00018ea4 size=44 ===== */

uint FUN_00018ea4(int param_1)

{
  return *(uint *)(param_1 + 8) & 0x10;
}



/* ===== FUN_00018ed0 @ 00018ed0 size=44 ===== */

uint FUN_00018ed0(int param_1)

{
  return *(uint *)(param_1 + 8) & 0x20;
}



/* ===== FUN_00018efc @ 00018efc size=56 ===== */

undefined4 FUN_00018efc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000128bc(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00018f34 @ 00018f34 size=68 ===== */

undefined4 FUN_00018f34(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00042c94(param_2 + -1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28));
  return uVar1;
}



/* ===== FUN_00018f78 @ 00018f78 size=56 ===== */

undefined4 FUN_00018f78(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00012928(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00018fb0 @ 00018fb0 size=56 ===== */

undefined4 FUN_00018fb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000129a0(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00018fe8 @ 00018fe8 size=56 ===== */

undefined4 FUN_00018fe8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00012af4(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00019020 @ 00019020 size=80 ===== */

int FUN_00019020(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00042c94(param_1 + -1,param_2);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ===== FUN_00019070 @ 00019070 size=104 ===== */

longlong FUN_00019070(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  if (param_1 == 0 && param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_00043218(param_1 + -1,param_2 - (uint)(param_1 == 0),param_3,param_4);
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* ===== FUN_000190d8 @ 000190d8 size=44 ===== */

ushort FUN_000190d8(int param_1)

{
  return *(ushort *)(param_1 + 6) & 0xff;
}



/* ===== FUN_00019104 @ 00019104 size=92 ===== */

void FUN_00019104(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xff00 | param_2 & 0xff;
  return;
}



/* ===== FUN_00019190 @ 00019190 size=88 ===== */

void FUN_00019190(int param_1,short param_2)

{
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xff | param_2 << 8;
  return;
}



/* ===== FUN_00019230 @ 00019230 size=120 ===== */

int FUN_00019230(size_t param_1,uint param_2,void **param_3)

{
  int iVar1;
  size_t local_18;
  
  local_18 = param_2;
  if (param_2 < 8) {
    local_18 = 8;
  }
  iVar1 = posix_memalign(param_3,local_18,param_1);
  if (iVar1 == 0xc) {
    iVar1 = 0x7f2bb746;
  }
  return iVar1;
}



/* ===== FUN_000192a8 @ 000192a8 size=60 ===== */

bool FUN_000192a8(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_000192e4 @ 000192e4 size=60 ===== */

bool FUN_000192e4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 2) != 0;
}



/* ===== FUN_00019320 @ 00019320 size=60 ===== */

bool FUN_00019320(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x40) != 0;
}



/* ===== FUN_0001935c @ 0001935c size=204 ===== */

int FUN_0001935c(undefined4 *param_1)

{
  undefined4 local_10;
  int local_c;
  
  local_c = FUN_0002fafc(*param_1,param_1[1],&local_10);
  if (local_c == 0) {
    local_c = FUN_0002ed1c(local_10);
    if ((local_c == 0) &&
       (local_c = FUN_0002f674(local_10,"system.data",param_1[3],param_1[2]), local_c == 0)) {
      local_c = FUN_0002e204(local_10);
    }
    FUN_0002fc1c(&local_10);
  }
  return local_c;
}



/* ===== FUN_00019428 @ 00019428 size=256 ===== */

int FUN_00019428(undefined4 *param_1)

{
  undefined4 local_10;
  int local_c;
  
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = FUN_0002fafc(*param_1,param_1[1],&local_10);
  if (local_c == 0) {
    local_c = FUN_0002ed1c(local_10);
    if ((local_c == 0) &&
       (local_c = FUN_0002f258(local_10,"system.data",param_1 + 3,param_1 + 2),
       local_c == 0x7f2bb7a2)) {
      param_1[2] = 0;
      param_1[3] = 0;
      local_c = 0;
    }
    FUN_0002fc1c(&local_10);
  }
  return local_c;
}



/* ===== FUN_00019528 @ 00019528 size=88 ===== */

undefined4 FUN_00019528(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *local_c;
  
  local_1c[0] = 0;
  local_10 = 0;
  local_c = local_1c;
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = FUN_0001935c(&local_18);
  return uVar1;
}



/* ===== FUN_00019580 @ 00019580 size=196 ===== */

int FUN_00019580(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [32];
  uint local_6c;
  int local_c;
  
  local_c = FUN_0001c9f4(param_1,param_2,auStack_8c);
  if (local_c == 0) {
    if ((local_6c & 0x10000000) == 0) {
      local_c = 0x7f2bb7a5;
    }
    else {
      local_9c = param_1;
      local_98 = param_2;
      local_c = FUN_00019428(&local_9c);
      if (local_c == 0) {
        *param_3 = local_94 + 0x3c;
        local_c = FUN_00018c58(auStack_90);
      }
    }
  }
  return local_c;
}



/* ===== FUN_00019644 @ 00019644 size=1256 ===== */

uint FUN_00019644(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_1c4;
  undefined4 local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined2 local_1ae;
  undefined1 local_1ac;
  undefined1 local_1ab;
  undefined1 local_1aa;
  ushort local_ac [16];
  uint local_8c;
  undefined4 local_84;
  undefined1 auStack_80 [84];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined8 local_18;
  uint local_c;
  
  local_c = 2;
  local_18 = 0;
  local_20 = *(undefined4 *)(param_3 + 8);
  local_24 = *(undefined4 *)(param_3 + 0xc);
  local_28 = *(undefined4 *)(param_3 + 4);
  *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 8;
  local_1c = param_3;
  uVar1 = FUN_0001c9f4(param_1,param_2,local_ac);
  *(undefined4 *)(local_1c + 0x18) = uVar1;
  if (*(int *)(local_1c + 0x18) == 0) {
    if ((local_8c & 0x10000000) == 0) {
      *(undefined4 *)(local_1c + 0x18) = 0x7f2bb7a5;
    }
    else if ((local_ac[0] & 0xf000) == 0x4000) {
      local_c = 0;
      local_1ae = 1;
      local_1b4 = param_2;
      FUN_000171c4(param_1,0xc,&local_1b4);
      local_1ac = 0x2e;
      local_1ab = 0;
      *(undefined4 **)(local_1c + 8) = &local_1b4;
      FUN_00017118(param_1,&local_1b4,local_1c + 0xc);
      uVar2 = (uint)local_18;
      iVar3 = local_18._4_4_;
      bVar4 = 0xfffffffe < (uint)local_18;
      local_18._0_4_ = (uint)local_18 + 1;
      local_18._4_4_ = local_18._4_4_ + (uint)bVar4;
      uVar2 = FUN_000175f0(param_1,0,uVar2,iVar3,0,0,param_3);
      local_c = local_c | uVar2;
      if ((local_c & 2) == 0) {
        local_1b4 = local_84;
        local_1ae = 2;
        FUN_000171c4(param_1,0xc,&local_1b4);
        local_1ac = 0x2e;
        local_1ab = 0x2e;
        local_1aa = 0;
        *(undefined4 **)(local_1c + 8) = &local_1b4;
        FUN_00017118(param_1,&local_1b4,local_1c + 0xc);
        iVar3 = local_18._4_4_;
        uVar2 = (uint)local_18;
        local_18 = CONCAT44(local_18._4_4_ + (uint)(0xfffffffe < (uint)local_18),(uint)local_18 + 1)
        ;
        uVar2 = FUN_000175f0(param_1,0,uVar2,iVar3,0,0,param_3);
        local_c = local_c | uVar2;
        if ((local_c & 8) != 0) {
          local_84 = local_1b4;
          iVar3 = FUN_0001cfb0(param_1,param_2,local_ac);
          if (iVar3 != 0) goto LAB_00019aec;
          local_c = local_c & 0xfffffff7;
          local_2c = 0;
        }
        if ((local_c & 2) == 0) {
          *(undefined1 **)(local_1c + 8) = auStack_80;
          *(undefined4 *)(local_1c + 0xc) = 0x38;
          uVar2 = (uint)local_18;
          iVar3 = local_18._4_4_;
          local_18 = CONCAT44(local_18._4_4_ + (uint)(0xfffffffe < (uint)local_18),
                              (uint)local_18 + 1);
          uVar2 = FUN_000175f0(param_1,0,uVar2,iVar3,0,0,param_3);
          local_c = local_c | uVar2;
          if ((local_c & 8) != 0) {
            uVar1 = FUN_0001cfb0(param_1,param_2,local_ac);
            *(undefined4 *)(local_1c + 0x18) = uVar1;
            if (*(int *)(local_1c + 0x18) != 0) {
              local_c = local_c | 2;
            }
            local_c = local_c & 0xfffffff7;
          }
          if ((local_c & 2) == 0) {
            local_1c4 = param_1;
            local_1c0 = param_2;
            uVar1 = FUN_00019428(&local_1c4);
            *(undefined4 *)(local_1c + 0x18) = uVar1;
            if (*(int *)(local_1c + 0x18) == 0) {
              if (local_1bc != 0) {
                *(undefined4 *)(local_1c + 8) = local_1b8;
                *(int *)(local_1c + 0xc) = local_1bc;
                uVar2 = (uint)local_18;
                iVar3 = local_18._4_4_;
                local_18 = CONCAT44(local_18._4_4_ + (uint)(0xfffffffe < (uint)local_18),
                                    (uint)local_18 + 1);
                uVar2 = FUN_000175f0(param_1,0,uVar2,iVar3,0,0,param_3);
                local_c = local_c | uVar2;
                if ((local_c & 8) != 0) {
                  uVar1 = FUN_0001935c(&local_1c4);
                  *(undefined4 *)(local_1c + 0x18) = uVar1;
                  if (*(int *)(local_1c + 0x18) != 0) {
                    local_c = local_c | 2;
                  }
                }
              }
              FUN_00018c58(&local_1b8);
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(local_1c + 0x18) = 0x7f2bb74a;
    }
  }
LAB_00019aec:
  *(undefined4 *)(local_1c + 8) = local_20;
  *(undefined4 *)(local_1c + 0xc) = local_24;
  *(undefined4 *)(local_1c + 4) = local_28;
  return local_c & 0xfffffff5;
}



/* ===== FUN_00019b2c @ 00019b2c size=188 ===== */

int FUN_00019b2c(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  int local_c;
  
  local_c = FUN_0002fafc(param_1,param_2,&local_10);
  if (local_c == 0) {
    local_c = FUN_0002ed1c(local_10);
    if ((local_c == 0) && (local_c = FUN_0002f9ec(local_10,"system.data"), local_c == 0)) {
      local_c = FUN_0002e204(local_10);
    }
    FUN_0002fc1c(&local_10);
  }
  return local_c;
}



/* ===== FUN_00019be8 @ 00019be8 size=632 ===== */

int FUN_00019be8(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  
  local_18 = 0;
  local_1c = 0;
  iVar1 = FUN_000192a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    local_18 = 0xc;
  }
  iVar1 = FUN_000192e4(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    local_1c = 2;
  }
  *param_3 = param_2;
  local_c = param_3;
  FUN_00019104(param_3,1);
  FUN_00019190(local_c,local_1c);
  *(undefined1 *)(local_c + 2) = 0x2e;
  local_28 = (*(int *)(param_1 + 0x14) - local_18) + -0xc;
  *(undefined2 *)(local_c + 1) = 0xc;
  local_c = (undefined4 *)((int)param_3 + (uint)*(ushort *)(local_c + 1));
  *(undefined2 *)(local_c + 1) = 0xc;
  *local_c = *param_4;
  FUN_00019104(local_c,2);
  FUN_00019190(local_c,local_1c);
  *(undefined1 *)(local_c + 2) = 0x2e;
  *(undefined1 *)((int)local_c + 9) = 0x2e;
  local_14 = 0x18;
  local_c = param_3 + 6;
  memcpy(param_3 + 6,param_4 + 1,param_5 - 4);
  iVar1 = local_10;
  do {
    local_10 = iVar1;
    local_20 = local_c;
    local_10 = FUN_00017118(param_1,local_c,&local_28);
    if (local_10 != 0) {
      return local_10;
    }
    local_14 = local_14 + local_28;
    local_c = (undefined4 *)((int)param_3 + local_14);
    iVar1 = 0;
  } while (local_14 < param_5 + 0x14);
  local_28 = ((*(int *)(param_1 + 0x14) - local_18) - local_14) + local_28;
  local_10 = FUN_000171c4(param_1,local_28,local_20);
  if ((local_10 == 0) && (local_18 != 0)) {
    local_24 = (int)param_3 + *(int *)(param_1 + 0x14) + -0xc;
    FUN_000158b8(param_1,local_24);
  }
  return local_10;
}



/* ===== FUN_00019e60 @ 00019e60 size=540 ===== */

int FUN_00019e60(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  local_c = FUN_00018acc(*(undefined4 *)(param_1 + 0x14),&local_1c);
  if (local_c == 0) {
    uVar2 = FUN_00019be8(param_1,param_2,local_1c,param_4,param_5);
    local_c = (int)uVar2;
    if ((local_c == 0) &&
       (local_c = FUN_00025ae4(param_1,(int)((ulonglong)uVar2 >> 0x20),0,0,0,&local_18),
       local_c == 0)) {
      uVar3 = 0;
      local_c = FUN_0002cae0(param_1,local_1c,local_18,uStack_14,local_1c,0,param_2);
      if (local_c == 0) {
        iVar1 = FUN_00019320(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x80000;
        }
        *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xefffffff;
        local_c = FUN_0003b988(param_1,param_3,1,0);
        if (local_c == 0) {
          *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x14);
          local_c = FUN_0002bbb8(param_1,param_2,param_3,0,2,uVar3,0,0,&local_18);
          if ((local_c == 0) && (local_c = FUN_0001cfb0(param_1,param_2,param_3), local_c == 0)) {
            FUN_000271a0(param_1,local_18,1);
          }
        }
      }
    }
    FUN_00018c58(&local_1c);
  }
  return local_c;
}



/* ===== FUN_0001a07c @ 0001a07c size=324 ===== */

int FUN_0001a07c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  memset((void *)(param_3 + 0x28),0,0x3c);
  iVar1 = FUN_00019320(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfff7ffff;
    local_c = FUN_0002ff98(param_1,param_2,param_3,&local_14);
    if (local_c != 0) {
      return local_c;
    }
    FUN_0002fe94(local_14);
  }
  *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xefffffff;
  *(undefined4 *)(param_3 + 4) = 0;
  local_c = FUN_0001cfb0(param_1,param_2,param_3);
  if ((local_c == 0) && (local_c = FUN_00035d8c(param_1,param_2,1,&local_10), local_c == 0)) {
    local_c = FUN_00036a0c(local_10,param_4,param_5,0);
    FUN_0003633c(local_10);
  }
  return local_c;
}



/* ===== FUN_0001a1c0 @ 0001a1c0 size=596 ===== */

int FUN_0001a1c0(int *param_1,undefined4 param_2)

{
  void *local_a4;
  int *local_a0;
  undefined4 local_9c;
  size_t local_98;
  void *local_94;
  ushort local_90 [16];
  uint local_70;
  undefined1 auStack_68 [88];
  int local_10;
  int local_c;
  
  local_a4 = (void *)0x0;
  if (*param_1 == 0x7f2bb701) {
    local_c = FUN_0001c9f4(param_1,param_2,local_90);
    if (local_c == 0) {
      if ((local_70 & 0x10000000) == 0) {
        local_c = 0x7f2bb7a5;
      }
      else {
        local_a0 = param_1;
        local_9c = param_2;
        local_c = FUN_00019428(&local_a0);
        if (local_c == 0) {
          local_10 = local_98 + 0x3c;
          local_c = FUN_00018a74(local_10,&local_a4);
          if (local_c == 0) {
            memcpy(local_a4,auStack_68,0x3c);
            if (local_98 != 0) {
              memcpy((void *)((int)local_a4 + 0x3c),local_94,local_98);
            }
            memset(auStack_68,0,0x3c);
            local_c = FUN_0001cfb0(param_1,param_2,local_90);
            if (((local_c == 0) && (local_c = FUN_00019b2c(param_1,param_2), local_c == 0)) &&
               (local_c = FUN_0001c9f4(param_1,param_2,local_90), local_c == 0)) {
              if ((local_90[0] & 0xf000) == 0x4000) {
                local_c = FUN_00019e60(param_1,param_2,local_90,local_a4,local_10);
              }
              else {
                local_c = FUN_0001a07c(param_1,param_2,local_90,local_a4,local_10);
              }
            }
          }
          if (local_a4 != (void *)0x0) {
            FUN_00018c58(&local_a4);
          }
          FUN_00018c58(&local_94);
        }
      }
    }
  }
  else {
    local_c = 0x7f2bb701;
  }
  return local_c;
}



/* ===== FUN_0001a414 @ 0001a414 size=264 ===== */

int FUN_0001a414(undefined4 param_1,undefined4 param_2,undefined1 *param_3,void *param_4,
                int *param_5)

{
  int iVar1;
  undefined1 *local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  size_t local_94;
  void *local_90;
  undefined1 auStack_8c [128];
  int local_c;
  
  local_ac = param_3;
  if (param_3 == (undefined1 *)0x0) {
    iVar1 = FUN_0001c9f4(param_1,param_2,auStack_8c);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_ac = auStack_8c;
    local_c = 0;
  }
  local_9c = param_1;
  local_98 = param_2;
  local_c = FUN_00019428(&local_9c);
  if (local_c == 0) {
    memcpy(param_4,local_ac + 0x28,0x3c);
    if (local_94 != 0) {
      memcpy((void *)((int)param_4 + 0x3c),local_90,local_94);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = local_94 + 0x3c;
    }
    FUN_00018c58(&local_90);
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_0001a51c @ 0001a51c size=492 ===== */

int FUN_0001a51c(undefined4 param_1,undefined4 param_2,undefined1 *param_3,void *param_4,
                uint param_5)

{
  int iVar1;
  undefined1 *local_b4;
  uint local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined1 auStack_90 [128];
  int local_10;
  int local_c;
  
  local_b4 = param_3;
  if (param_3 == (undefined1 *)0x0) {
    iVar1 = FUN_0001c9f4(param_1,param_2,auStack_90);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_b4 = auStack_90;
    local_10 = 0;
  }
  if (param_5 < 0x3d) {
    memcpy(local_b4 + 0x28,param_4,param_5);
    local_10 = FUN_0001cfb0(param_1,param_2,local_b4);
  }
  else {
    local_10 = FUN_0002f408(param_1,param_2,&local_a4);
    if ((local_10 == 0) && (local_10 = FUN_00019580(param_1,param_2,&local_a8), local_10 == 0)) {
      if (local_a8 < 0x3c) {
        local_c = 0x3c - local_a8;
      }
      else {
        local_c = 0;
      }
      if ((param_5 == local_a8) || (param_5 <= local_a8 + local_a4 + local_c)) {
        memcpy(local_b4 + 0x28,param_4,0x3c);
        local_10 = FUN_0001cfb0(param_1,param_2,local_b4);
        if (local_10 == 0) {
          if (param_5 < 0x3d) {
            local_98 = 0;
          }
          else {
            local_98 = param_5 - 0x3c;
          }
          local_94 = (int)param_4 + 0x3c;
          local_a0 = param_1;
          local_9c = param_2;
          local_10 = FUN_0001935c(&local_a0);
        }
      }
      else {
        local_10 = 0x7f2bb7a7;
      }
    }
  }
  return local_10;
}



/* ===== FUN_0001a708 @ 0001a708 size=60 ===== */

bool FUN_0001a708(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_0001a744 @ 0001a744 size=60 ===== */

bool FUN_0001a744(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0001a780 @ 0001a780 size=96 ===== */

undefined4 FUN_0001a780(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001a744(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0001a708(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0001a7e0 @ 0001a7e0 size=156 ===== */

undefined4 FUN_0001a7e0(int param_1)

{
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    for (local_c = 0; local_c < *(uint *)(*(int *)(param_1 + 0x84) + 0x14); local_c = local_c + 1) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x84) + 0x1c) + local_c * 8) = 0;
    }
    *(undefined8 *)(*(int *)(param_1 + 0x84) + 8) = 0;
  }
  return 0;
}



/* ===== FUN_0001a87c @ 0001a87c size=220 ===== */

void FUN_0001a87c(int *param_1)

{
  int *local_14 [2];
  uint local_c;
  
  param_1[6] = param_1[6] + -1;
  if (param_1[6] == 0) {
    local_14[0] = param_1;
    if (*param_1 != 0) {
      FUN_00018c58(param_1);
    }
    for (local_c = 0; local_c < (uint)local_14[0][5]; local_c = local_c + 1) {
      FUN_00018c58(local_14[0][7] + local_c * 8 + 4);
    }
    if (local_14[0][7] != 0) {
      FUN_00018c58(local_14[0] + 7);
    }
    local_14[0][2] = 0;
    local_14[0][3] = 0;
    FUN_00018c58(local_14);
  }
  return;
}



/* ===== FUN_0001a958 @ 0001a958 size=496 ===== */

int FUN_0001a958(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int local_10;
  uint local_c;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    local_10 = FUN_00018a74(0x20,param_1 + 0x84);
    if (local_10 == 0) {
      memset(*(void **)(param_1 + 0x84),0,0x20);
      local_10 = FUN_00018a74(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x84));
      if (local_10 == 0) {
        *(undefined8 *)(*(int *)(param_1 + 0x84) + 8) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x10) = 0xffffffff;
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x14) = param_2;
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x18) = 1;
        local_10 = FUN_00018b38(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x14),8,
                                *(int *)(param_1 + 0x84) + 0x1c);
        if (local_10 == 0) {
          local_c = 0;
          while( true ) {
            if (*(uint *)(*(int *)(param_1 + 0x84) + 0x14) <= local_c) {
              FUN_0001a7e0(param_1);
              return 0;
            }
            if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
              uVar1 = 0x80;
            }
            else {
              uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x58);
            }
            local_10 = FUN_00018a74(uVar1,*(int *)(*(int *)(param_1 + 0x84) + 0x1c) + local_c * 8 +
                                          4);
            if (local_10 != 0) break;
            local_c = local_c + 1;
          }
        }
      }
      FUN_0001a87c(*(undefined4 *)(param_1 + 0x84));
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_0001ab48 @ 0001ab48 size=1068 ===== */

int FUN_0001ab48(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  if (*param_1 == 0x7f2bb701) {
    if (param_1[0x12] == 0) {
      local_14 = param_1[0xd];
      param_1[0xd] = 0;
      local_18 = FUN_0002167c(param_1,param_1 + 0x12);
      if ((local_18 != 0) && (param_1[0x12] != 0)) {
        FUN_00017de8(param_1[0x12]);
        param_1[0x12] = 0;
      }
      param_1[0xd] = local_14;
    }
    local_18 = FUN_00018a74(0x68,&local_20);
    if (local_18 == 0) {
      memset(local_20,0,0x68);
      puVar1 = local_20;
      *local_20 = 0x7f2bb704;
      local_20[1] = param_1;
      if (*(int *)(param_1[4] + 0x4c) == 0) {
        uVar4 = 0x80;
      }
      else {
        uVar4 = (uint)*(ushort *)(param_1[4] + 0x58);
      }
      local_20[0xc] = uVar4;
      local_20[0xe] = 0;
      local_20[6] = 0;
      local_20[9] = param_1[7] + -1;
      if (param_2 == 0) {
        param_2 = 8;
      }
      local_20[10] = param_2;
      uVar6 = FUN_00013354(local_20[1],local_20[6]);
      *(undefined8 *)(puVar1 + 4) = uVar6;
      local_20[7] = *(undefined4 *)(*(int *)(local_20[1] + 0x10) + 0x28);
      local_20[8] = *(undefined4 *)(local_20[1] + 0x28);
      iVar2 = FUN_0001a780(param_1);
      if (iVar2 != 0) {
        local_1c = FUN_00013764(param_1,local_20[6]);
        if (local_1c < (uint)local_20[7]) {
          local_20[7] = local_20[7] - local_1c;
        }
        else {
          local_20[7] = 0;
        }
        iVar5 = local_20[7];
        iVar2 = FUN_00042c94(param_1[5],local_20[0xc]);
        puVar1 = local_20;
        uVar3 = FUN_00042c94(local_20[0xc] * (iVar5 + iVar2 + -1),param_1[5]);
        puVar1[8] = uVar3;
      }
      local_18 = FUN_0001d87c(param_1[1],local_20[10],local_20 + 0xb);
      local_20[0x10] = 0;
      local_20[0x11] = 0;
      local_20[0x12] = 0;
      if (local_18 == 0) {
        local_18 = FUN_00018a74(local_20[0xc] + local_20[10],local_20 + 0xf);
        if (local_18 == 0) {
          memset((void *)(local_20[0xf] + local_20[0xc]),0,local_20[10]);
          if ((*(int *)(local_20[1] + 0x48) != 0) &&
             (*(int *)(*(int *)(local_20[1] + 0x48) + 4) != 0)) {
            local_20[0x13] = local_20[0x13] | 1;
          }
          iVar2 = FUN_0001a780(param_1);
          if (iVar2 != 0) {
            local_20[0x13] = local_20[0x13] | 0x10;
          }
          *param_3 = local_20;
          local_18 = 0;
        }
        else {
          FUN_00018c58(local_20 + 0xb);
          FUN_00018c58(&local_20);
        }
      }
      else {
        FUN_00018c58(&local_20);
      }
    }
  }
  else {
    local_18 = 0x7f2bb701;
  }
  return local_18;
}



/* ===== FUN_0001af74 @ 0001af74 size=140 ===== */

void FUN_0001af74(int *param_1)

{
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb704)) {
    local_c = param_1;
    FUN_00018c58(param_1 + 0xb);
    local_c[0xb] = 0;
    FUN_00018c58(local_c + 0xf);
    local_c[0xf] = 0;
    FUN_00018c58(&local_c);
  }
  return;
}



/* ===== FUN_0001b100 @ 0001b100 size=408 ===== */

undefined4 FUN_0001b100(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar4 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  uVar6 = FUN_00013354(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(int *)(param_1 + 8) = *(int *)(*(int *)(iVar4 + 0x10) + 0x28) * *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar4 + 0x28);
  iVar1 = FUN_0001a780(iVar4);
  if (iVar1 != 0) {
    uVar2 = FUN_00013764(iVar4,*(undefined4 *)(param_1 + 0x18));
    if (uVar2 < *(uint *)(param_1 + 0x1c)) {
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar1 = FUN_00042c94(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(param_1 + 0x30));
    uVar3 = FUN_00042c94(*(int *)(param_1 + 0x30) * (iVar5 + iVar1 + -1),
                         *(undefined4 *)(iVar4 + 0x14));
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  return 0;
}



/* ===== FUN_0001b298 @ 0001b298 size=92 ===== */

undefined4 FUN_0001b298(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x18) = param_2 + -1;
  *(int *)(param_1 + 0x24) = *(int *)(*(int *)(param_1 + 4) + 0x1c) - param_2;
  uVar1 = FUN_0001b100(param_1);
  return uVar1;
}



/* ===== FUN_0001b2f4 @ 0001b2f4 size=496 ===== */

undefined4 FUN_0001b2f4(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x48);
  if (uVar1 != 0 || iVar2 != 0) {
    do {
      if (iVar2 == 0 && uVar1 <= *(uint *)(*(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0x48) * 4)) {
        if (iVar2 != 0 || uVar1 != *(uint *)(*(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0x48) * 4))
        {
          uVar4 = (uint)*(undefined8 *)param_2;
          if ((int)((ulonglong)*(undefined8 *)param_2 >> 0x20) + iVar2 + (uint)CARRY4(uVar4,uVar1)
              == 0 && uVar4 + uVar1 <=
                      *(uint *)(*(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0x48) * 4)) {
            return 0;
          }
          iVar2 = *(int *)(*(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0x48) * 4) - uVar1;
          *param_2 = iVar2;
          param_2[1] = iVar2 >> 0x1f;
          return 0;
        }
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 2;
        *param_2 = 1;
        param_2[1] = 0;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        if (*(int *)(param_1 + 0x48) < *(int *)(iVar3 + 4)) {
          return 0;
        }
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffe;
        return 0;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    } while (*(int *)(param_1 + 0x48) < *(int *)(iVar3 + 4));
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffe;
  }
  return 0;
}



/* ===== FUN_0001b4e4 @ 0001b4e4 size=464 ===== */

bool FUN_0001b4e4(int param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint local_18;
  uint local_14;
  
  if (((*(uint *)(param_2 + 0x10) & 0x10000000) == 0) &&
     ((*(uint *)(param_2 + 0x10) & 0x80000) == 0)) {
    if ((((*param_2 & 0xf000) == 0x8000) || ((*param_2 & 0xf000) == 0xa000)) ||
       ((*param_2 & 0xf000) == 0x4000)) {
      if (((*param_2 & 0xf000) == 0xa000) &&
         (*(int *)(param_2 + 0x36) == 0 && *(uint *)(param_2 + 2) < 0x3d)) {
        bVar3 = false;
      }
      else if (param_2[0xd] == 0) {
        bVar3 = false;
      }
      else {
        local_18 = 0;
        for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
          if (*(int *)(param_2 + (local_14 + 10) * 2) != 0) {
            if (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) <=
                *(uint *)(param_2 + (local_14 + 10) * 2)) {
              uVar2 = *(uint *)(param_2 + (local_14 + 10) * 2);
              uVar4 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
              iVar1 = (int)((ulonglong)uVar4 >> 0x20);
              bVar3 = iVar1 == 0;
              if (iVar1 == 0) {
                bVar3 = (uint)uVar4 <= uVar2;
              }
              if (!bVar3) goto LAB_0001b67c;
            }
            local_18 = local_18 + 1;
          }
LAB_0001b67c:
        }
        bVar3 = 7 < local_18;
      }
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* ===== FUN_0001b6b4 @ 0001b6b4 size=92 ===== */

undefined4 FUN_0001b6b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(uint *)(param_1 + 0x20) & 0x80000) == 0) ||
     (iVar1 = FUN_0002fda0(param_1 + 0x28,0x3c), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0001b710 @ 0001b710 size=968 ===== */

void FUN_0001b710(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined2 uVar4;
  uint uVar5;
  void *__s;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  if ((*(uint *)(param_1 + 0x4c) & 0x20) != 0) {
    local_10 = *(uint *)(param_1 + 0x1c);
    uVar5 = *(uint *)(*(int *)(param_1 + 4) + 0x14);
    lVar1 = (ulonglong)uVar5 * (ulonglong)param_3;
    uVar5 = FUN_00043218((int)lVar1,uVar5 * param_4 + (int)((ulonglong)lVar1 >> 0x20),
                         *(int *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 0x1f);
    if (uVar5 < local_10) {
      local_10 = uVar5;
    }
    local_1c = *(int *)(param_1 + 0x2c);
    local_c = *(int *)(param_1 + 8) + 1;
    local_14 = 0;
    local_18 = 0;
    __s = (void *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30));
    memset(__s,0,*(size_t *)(param_1 + 0x28));
    if (*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x4c) == 0) {
      uVar4 = 0x80;
    }
    else {
      uVar4 = *(undefined2 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x58);
    }
    uVar5 = FUN_00042d5c(0x400 << (*(uint *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x18) & 0xff),
                         uVar4);
    if (1 < uVar5) {
      while (local_10 != 0) {
        iVar2 = FUN_00042c94(local_1c - *(int *)(param_1 + 0x2c),
                             *(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
        iVar3 = FUN_00016900(*(undefined4 *)(param_1 + 4),local_c,local_1c);
        if (iVar3 == 0) {
          local_18 = local_18 + 1;
          local_14 = local_14 + 1;
        }
        else {
          iVar3 = FUN_0001b6b4(local_1c);
          if ((iVar3 != 0) ||
             (iVar3 = FUN_0001b4e4(*(undefined4 *)(param_1 + 4),local_1c), iVar3 != 0)) {
            local_14 = local_14 + 1;
          }
        }
        if (uVar5 >> 1 < local_14) {
          *(byte *)((int)__s + iVar2) = *(byte *)((int)__s + iVar2) | 2;
          FUN_00042d3c(local_c + -1,uVar5);
          local_20 = uVar5 - extraout_r1;
          if (local_10 < local_20) {
            local_20 = local_10;
          }
          local_10 = local_10 - local_20;
          local_1c = local_1c + local_20 * *(int *)(param_1 + 0x30);
          local_c = local_c + local_20;
          local_14 = 0;
          local_18 = 0;
        }
        else {
          FUN_00042d3c(local_c,uVar5);
          if (extraout_r1_00 == 0) {
            if (local_18 == 0) {
              *(byte *)((int)__s + iVar2) = *(byte *)((int)__s + iVar2) | 1;
            }
            local_14 = 0;
            local_18 = 0;
          }
          local_10 = local_10 - 1;
          local_1c = local_1c + *(int *)(param_1 + 0x30);
          local_c = local_c + 1;
        }
      }
    }
  }
  return;
}



/* ===== FUN_0001bad8 @ 0001bad8 size=536 ===== */

int FUN_0001bad8(int param_1)

{
  uint uVar1;
  uint local_18;
  int iStack_14;
  int local_c;
  
  local_18 = *(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x20) < local_18) {
    local_18 = *(uint *)(param_1 + 0x20);
  }
  iStack_14 = 0;
  if ((*(uint *)(param_1 + 0x4c) & 2) != 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 4;
    }
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffd;
  }
  if (((*(uint *)(param_1 + 0x4c) & 1) == 0) ||
     (local_c = FUN_0001b2f4(param_1,&local_18), local_c == 0)) {
    if (((*(uint *)(param_1 + 0x4c) & 2) == 0) &&
       (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0)) {
      local_c = FUN_0001d5d4(*(undefined4 *)(*(int *)(param_1 + 4) + 4),
                             *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x10),
                             *(undefined4 *)(param_1 + 0x14),local_18,
                             *(undefined4 *)(param_1 + 0x2c));
      if (local_c != 0) {
        return 0x7f2bb721;
      }
    }
    else {
      memset(*(void **)(param_1 + 0x2c),0,*(int *)(*(int *)(param_1 + 4) + 0x14) * local_18);
    }
    FUN_0001b710(param_1);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x38) = local_18 * *(int *)(*(int *)(param_1 + 4) + 0x14);
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - local_18;
    if (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) {
      uVar1 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = local_18 + uVar1;
      *(uint *)(param_1 + 0x14) =
           iStack_14 + *(int *)(param_1 + 0x14) + (uint)CARRY4(local_18,uVar1);
    }
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_0001bcf0 @ 0001bcf0 size=1576 ===== */

int FUN_0001bcf0(int *param_1,int *param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int extraout_r1_00;
  undefined2 uVar2;
  int iVar3;
  void *local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0;
  if (*param_1 == 0x7f2bb704) {
    if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
      local_1c = 0x80;
    }
    else {
      local_1c = (uint)*(ushort *)(*(int *)(param_1[1] + 0x10) + 0x58);
    }
    local_20 = param_1[0xf] + param_1[0xc];
    local_28 = param_3;
    if (param_1[7] != 0) goto LAB_0001be4c;
    do {
      do {
        if ((param_1[0x10] != 0) &&
           (local_14 = (*(code *)param_1[0x10])(param_1[1],param_1,param_1[6],param_1[0x11]),
           local_14 != 0)) {
          return local_14;
        }
        if (param_1[9] == 0) {
          *param_2 = 0;
          return 0;
        }
        local_14 = FUN_0001b100(param_1);
        if (local_14 != 0) {
          return local_14;
        }
LAB_0001be4c:
      } while ((((param_1[0x13] & 0x10U) != 0) &&
               (iVar3 = FUN_000138ec(param_1[1],param_1[6],1), iVar3 != 0)) || (param_1[7] == 0));
      if (param_1[4] != 0 || param_1[5] != 0) {
        if (param_1[0xe] < param_1[0xc]) {
          if (param_1[0xe] != 0) {
            memcpy((void *)param_1[0xf],(void *)param_1[0xd],param_1[0xe]);
          }
          local_18 = param_1[0xe];
          local_14 = FUN_0001bad8(param_1);
          if (local_14 != 0) {
            return local_14;
          }
        }
        if (((int)param_4 < (int)local_1c) && (iVar3 = FUN_00018a74(local_1c,&local_28), iVar3 != 0)
           ) {
          return iVar3;
        }
        local_14 = 0;
        FUN_00042d3c(param_1[2],*(undefined4 *)(*(int *)(param_1[1] + 0x10) + 0x28));
        if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
          uVar2 = 0x80;
        }
        else {
          uVar2 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
        }
        uVar1 = FUN_00042d5c(0x400 << (*(uint *)(*(int *)(param_1[1] + 0x10) + 0x18) & 0xff),uVar2);
        uVar1 = FUN_00042c94(extraout_r1,uVar1);
        FUN_00042d3c(uVar1,param_1[10]);
        local_24 = extraout_r1_00;
        if (local_18 == 0) {
          if ((((*(byte *)(local_20 + extraout_r1_00) & 1) == 0) &&
              ((*(uint *)(param_1[1] + 8) & 0x200000) == 0)) &&
             (iVar3 = FUN_00016900(param_1[1],param_1[2] + 1,param_1[0xd]), iVar3 == 0)) {
            local_14 = 0x7f2bb792;
          }
          memcpy(local_28,(void *)param_1[0xd],local_1c);
          param_1[0xd] = param_1[0xd] + param_1[0xc];
          param_1[0xe] = param_1[0xe] - param_1[0xc];
          if ((param_1[0x13] & 2U) != 0) {
            local_14 = 0x7f2bb742;
          }
        }
        else {
          memcpy((void *)(param_1[0xf] + local_18),(void *)param_1[0xd],param_1[0xc] - local_18);
          param_1[0xd] = param_1[0xd] + (param_1[0xc] - local_18);
          param_1[0xe] = param_1[0xe] - (param_1[0xc] - local_18);
          if ((((*(byte *)(local_20 + local_24) & 1) == 0) &&
              ((*(uint *)(param_1[1] + 8) & 0x200000) == 0)) &&
             (iVar3 = FUN_00016900(param_1[1],param_1[2] + 1,param_1[0xf]), iVar3 == 0)) {
            local_14 = 0x7f2bb792;
          }
          memcpy(local_28,(void *)param_1[0xf],local_1c);
          if ((param_1[0x13] & 4U) != 0) {
            local_14 = 0x7f2bb742;
          }
          param_1[0x13] = param_1[0x13] & 0xfffffffb;
        }
        if (((*(byte *)(local_20 + local_24) & 2) != 0) &&
           ((local_14 == 0 || (local_14 == 0x7f2bb792)))) {
          local_14 = 0x7f2bb7a9;
        }
        param_1[7] = param_1[7] + -1;
        param_1[2] = param_1[2] + 1;
        *param_2 = param_1[2];
        if (param_3 == local_28) {
          return local_14;
        }
        memcpy(param_3,local_28,param_4);
        FUN_00018c58(&local_28);
        return local_14;
      }
    } while ((param_1[0x13] & 8U) != 0);
    iVar3 = 0x7f2bb73b;
  }
  else {
    iVar3 = 0x7f2bb704;
  }
  return iVar3;
}



/* ===== FUN_0001c318 @ 0001c318 size=60 ===== */

undefined4 FUN_0001c318(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001bcf0(param_1,param_2,param_3,0x80);
  return uVar1;
}



/* ===== FUN_0001c354 @ 0001c354 size=1696 ===== */

int FUN_0001c354(int *param_1,uint param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined2 uVar5;
  int iVar6;
  void *__src;
  size_t sVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  size_t local_28;
  int local_24;
  size_t local_20;
  uint local_1c;
  void *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1[4] + 0x4c) == 0) {
    local_28 = 0x80;
  }
  else {
    local_28 = (size_t)*(ushort *)(param_1[4] + 0x58);
  }
  if (*param_1 == 0x7f2bb701) {
    if ((param_1[0x10] == 0) ||
       ((((param_4 != 0x80 && (*(int *)(param_1[4] + 0x4c) != 0)) &&
         (*(short *)(param_1[4] + 0x58) != 0x80)) ||
        (iVar6 = (*(code *)param_1[0x10])(param_1,param_2,param_3), iVar6 == 0x7f2bb741)))) {
      if ((param_2 == 0) || (*(uint *)param_1[4] < param_2)) {
        iVar6 = 0x7f2bb729;
      }
      else if ((param_1[0x21] != 0) || (iVar6 = FUN_0001a958(param_1,4), iVar6 == 0)) {
        for (local_1c = 0; local_1c < *(uint *)(param_1[0x21] + 0x14); local_1c = local_1c + 1) {
          if (param_2 == *(uint *)(*(int *)(param_1[0x21] + 0x1c) + local_1c * 8)) {
            if ((int)local_28 <= (int)param_4) {
              param_4 = local_28;
            }
            memcpy(param_3,*(void **)(*(int *)(param_1[0x21] + 0x1c) + local_1c * 8 + 4),param_4);
            return 0;
          }
        }
        if ((param_1[2] & 0x2000U) == 0) {
          uVar3 = FUN_00042c94(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
          if ((uint)param_1[7] < uVar3) {
            return 0x7f2bb729;
          }
          FUN_00042d3c(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
          if (*(int *)(param_1[4] + 0x4c) == 0) {
            local_14 = 0x80;
          }
          else {
            local_14 = (uint)*(ushort *)(param_1[4] + 0x58);
          }
          local_14 = extraout_r1_00 * local_14;
          uVar1 = local_14 >> (*(int *)(param_1[4] + 0x18) + 10U & 0xff);
          lVar10 = FUN_00013354(param_1,uVar3);
          if (lVar10 == 0) {
            return 0x7f2bb73b;
          }
          lVar10 = FUN_00013354(param_1,uVar3);
          lVar9 = VectorShiftRight(CONCAT44(uVar1,uVar1),0x20);
          lVar10 = lVar10 + lVar9;
          local_24 = param_1[1];
        }
        else {
          if (*(int *)(param_1[4] + 0x4c) == 0) {
            uVar5 = 0x80;
          }
          else {
            uVar5 = *(undefined2 *)(param_1[4] + 0x58);
          }
          uVar2 = FUN_00042c94(param_1[5],uVar5);
          uVar3 = FUN_00042c94(*(undefined4 *)(param_1[0x16] + 0x120),param_1[5]);
          uVar4 = FUN_00042c94(param_2 - 1,uVar2);
          uVar8 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x20);
          lVar10 = CONCAT44((int)((ulonglong)uVar8 >> 0x20) + (uint)CARRY4((uint)uVar8,uVar3),
                            (uint)uVar8 + uVar3);
          FUN_00042d3c(param_2 - 1,uVar2);
          if (*(int *)(param_1[4] + 0x4c) == 0) {
            local_14 = 0x80;
          }
          else {
            local_14 = (uint)*(ushort *)(param_1[4] + 0x58);
          }
          local_14 = extraout_r1 * local_14;
          local_24 = param_1[0x22];
        }
        local_14 = local_14 & (0x400 << (*(uint *)(param_1[4] + 0x18) & 0xff)) - 1U;
        FUN_00042d3c(*(int *)(param_1[0x21] + 0x10) + 1,*(undefined4 *)(param_1[0x21] + 0x14));
        __src = *(void **)(*(int *)(param_1[0x21] + 0x1c) + extraout_r1_01 * 8 + 4);
        local_18 = __src;
        while( true ) {
          uStack_c = (undefined4)((ulonglong)lVar10 >> 0x20);
          local_10 = (undefined4)lVar10;
          if (local_28 == 0) break;
          local_20 = local_28;
          if ((uint)param_1[5] < local_28 + local_14) {
            local_20 = param_1[5] - local_14;
          }
          if (lVar10 != *(longlong *)(param_1[0x21] + 8)) {
            iVar6 = FUN_0001d5d4(local_24,uStack_c,local_10,uStack_c,1,*(undefined4 *)param_1[0x21])
            ;
            if (iVar6 != 0) {
              return iVar6;
            }
            *(longlong *)(param_1[0x21] + 8) = lVar10;
          }
          memcpy(local_18,(void *)(*(int *)param_1[0x21] + local_14),local_20);
          local_14 = 0;
          local_28 = local_28 - local_20;
          local_18 = (void *)((int)local_18 + local_20);
          lVar10 = lVar10 + 1;
        }
        if (*(int *)(param_1[4] + 0x4c) == 0) {
          sVar7 = 0x80;
        }
        else {
          sVar7 = (size_t)*(ushort *)(param_1[4] + 0x58);
        }
        iVar6 = FUN_00016900(param_1,param_2,__src);
        if (iVar6 != 0) {
          *(int *)(param_1[0x21] + 0x10) = extraout_r1_01;
          *(uint *)(*(int *)(param_1[0x21] + 0x1c) + extraout_r1_01 * 8) = param_2;
        }
        if ((int)sVar7 <= (int)param_4) {
          param_4 = sVar7;
        }
        memcpy(param_3,__src,param_4);
        if (((param_1[2] & 0x200000U) != 0) || (iVar6 != 0)) {
          iVar6 = 0;
        }
        else {
          iVar6 = 0x7f2bb792;
        }
      }
    }
  }
  else {
    iVar6 = 0x7f2bb701;
  }
  return iVar6;
}



/* ===== FUN_0001c9f4 @ 0001c9f4 size=60 ===== */

undefined4 FUN_0001c9f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001c354(param_1,param_2,param_3,0x80);
  return uVar1;
}



/* ===== FUN_0001ca30 @ 0001ca30 size=1408 ===== */

int FUN_0001ca30(int *param_1,uint param_2,void *param_3,size_t param_4)

{
  size_t __n;
  int iVar1;
  int extraout_r1;
  longlong lVar2;
  longlong lVar3;
  void *local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  size_t local_28;
  size_t local_24;
  uint local_20;
  void *local_1c;
  int local_18;
  uint local_14;
  undefined8 local_10;
  
  local_18 = 0;
  if (*(int *)(param_1[4] + 0x4c) == 0) {
    local_28 = 0x80;
  }
  else {
    local_28 = (size_t)*(ushort *)(param_1[4] + 0x58);
  }
  if (*param_1 != 0x7f2bb701) {
    return 0x7f2bb701;
  }
  if ((param_1[0x11] != 0) &&
     (local_18 = (*(code *)param_1[0x11])(param_1,param_2,param_3), local_18 != 0x7f2bb741)) {
    return local_18;
  }
  if ((param_2 == 0) || (*(uint *)param_1[4] < param_2)) {
    return 0x7f2bb729;
  }
  local_18 = FUN_00018a74(local_28,&local_38);
  if (local_18 != 0) {
    return local_18;
  }
  iVar1 = 0;
  if ((int)param_4 < (int)local_28) {
    local_2c = param_1[2];
    param_1[2] = param_1[2] | 0x200000;
    local_18 = FUN_0001c354(param_1,param_2,local_38,local_28);
    param_1[2] = local_2c & 0x200000 | param_1[2] & 0xffdfffffU;
    iVar1 = local_18;
    if (local_18 != 0) goto LAB_0001cf94;
  }
  local_18 = iVar1;
  if (param_1[0x21] == 0) {
    local_18 = FUN_0001a958(param_1,4);
    if (local_18 != 0) goto LAB_0001cf94;
  }
  else {
    for (local_20 = 0; local_20 < *(uint *)(param_1[0x21] + 0x14); local_20 = local_20 + 1) {
      if (param_2 == *(uint *)(*(int *)(param_1[0x21] + 0x1c) + local_20 * 8)) {
        __n = param_4;
        if ((int)local_28 <= (int)param_4) {
          __n = local_28;
        }
        memcpy(*(void **)(*(int *)(param_1[0x21] + 0x1c) + local_20 * 8 + 4),param_3,__n);
        break;
      }
    }
  }
  if ((int)local_28 <= (int)param_4) {
    param_4 = local_28;
  }
  memcpy(local_38,param_3,param_4);
  if ((param_1[2] & 1U) == 0) {
    local_18 = 0x7f2bb715;
    local_10 = CONCAT44(local_10._4_4_,(undefined4)local_10);
  }
  else {
    local_18 = FUN_00016a7c(param_1,param_2,local_38);
    if (local_18 == 0) {
      local_30 = FUN_00042c94(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
      FUN_00042d3c(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
      if (*(int *)(param_1[4] + 0x4c) == 0) {
        local_14 = 0x80;
      }
      else {
        local_14 = (uint)*(ushort *)(param_1[4] + 0x58);
      }
      local_14 = extraout_r1 * local_14;
      local_34 = local_14 >> (*(int *)(param_1[4] + 0x18) + 10U & 0xff);
      lVar3 = FUN_00013354(param_1,local_30);
      if (lVar3 == 0) {
        local_18 = 0x7f2bb73b;
        local_10 = CONCAT44(local_10._4_4_,(undefined4)local_10);
      }
      else {
        lVar3 = FUN_00013354(param_1,local_30);
        lVar2 = VectorShiftRight(CONCAT44(local_34,local_34),0x20);
        lVar3 = lVar3 + lVar2;
        local_14 = local_14 & (0x400 << (*(uint *)(param_1[4] + 0x18) & 0xff)) - 1U;
        local_1c = local_38;
        while( true ) {
          local_10._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          local_10._0_4_ = (undefined4)lVar3;
          if (local_28 == 0) break;
          local_24 = local_28;
          if ((uint)param_1[5] < local_28 + local_14) {
            local_24 = param_1[5] - local_14;
          }
          if (lVar3 != *(longlong *)(param_1[0x21] + 8)) {
            local_18 = FUN_0001d5d4(param_1[1],param_1[1],(undefined4)local_10,local_10._4_4_,1,
                                    *(undefined4 *)param_1[0x21]);
            local_10 = lVar3;
            if (local_18 != 0) goto LAB_0001cf94;
            *(longlong *)(param_1[0x21] + 8) = local_10;
            local_18 = 0;
            lVar3 = local_10;
          }
          local_10 = lVar3;
          memcpy((void *)(*(int *)param_1[0x21] + local_14),local_1c,local_24);
          local_18 = FUN_0001d6a0(param_1[1],param_1[1],(undefined4)local_10,local_10._4_4_,1,
                                  *(undefined4 *)param_1[0x21]);
          if (local_18 != 0) goto LAB_0001cf94;
          local_14 = 0;
          local_1c = (void *)((int)local_1c + local_24);
          local_28 = local_28 - local_24;
          lVar3 = local_10 + 1;
        }
        param_1[2] = param_1[2] | 2;
        local_10 = lVar3;
      }
    }
  }
LAB_0001cf94:
  FUN_00018c58(&local_38);
  return local_18;
}



/* ===== FUN_0001cfb0 @ 0001cfb0 size=60 ===== */

undefined4 FUN_0001cfb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001ca30(param_1,param_2,param_3,0x80);
  return uVar1;
}



/* ===== FUN_0001cfec @ 0001cfec size=420 ===== */

undefined4 FUN_0001cfec(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 uVar1;
  void *__s;
  size_t __size;
  time_t tVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
    __size = 0x80;
  }
  else {
    __size = (size_t)*(ushort *)(*(int *)(param_1 + 0x10) + 0x58);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    tVar2 = time((time_t *)0x0);
  }
  else {
    tVar2 = *(time_t *)(param_1 + 0x60);
  }
  if (*(int *)((int)param_3 + 0xc) == 0) {
    *(time_t *)((int)param_3 + 0xc) = tVar2;
  }
  if (*(int *)((int)param_3 + 0x10) == 0) {
    *(time_t *)((int)param_3 + 0x10) = tVar2;
  }
  if (*(int *)((int)param_3 + 8) == 0) {
    *(time_t *)((int)param_3 + 8) = tVar2;
  }
  if (__size == 0x80) {
    uVar1 = FUN_0001ca30(param_1,param_2,param_3,0x80);
  }
  else {
    __s = malloc(__size);
    if (__s == (void *)0x0) {
      uVar1 = 0xc;
    }
    else {
      memset(__s,0,__size);
      memcpy(__s,param_3,0x80);
      *(undefined2 *)((int)__s + 0x80) = 0x20;
      if (*(int *)((int)__s + 0x90) == 0) {
        *(time_t *)((int)__s + 0x90) = tVar2;
      }
      uVar1 = FUN_0001ca30(param_1,param_2,__s,__size);
      free(__s);
    }
  }
  return uVar1;
}



/* ===== FUN_0001d190 @ 0001d190 size=296 ===== */

int FUN_0001d190(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 auStack_90 [10];
  undefined4 auStack_68 [23];
  int local_c;
  
  if (*param_1 == 0x7f2bb701) {
    if (*(uint *)param_1[4] < param_2) {
      iVar1 = 0x7f2bb729;
    }
    else if ((param_1[0xd] == 0) ||
            (iVar1 = (*(code *)param_1[0xd])(param_1,param_2,param_3), iVar1 != 0)) {
      iVar1 = FUN_0001c9f4(param_1,param_2,auStack_90);
      if (iVar1 == 0) {
        for (local_c = 0; local_c < 0xf; local_c = local_c + 1) {
          *(undefined4 *)(param_3 + local_c * 4) = auStack_90[local_c + 10];
        }
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7f2bb701;
  }
  return iVar1;
}



/* ===== FUN_0001d2b8 @ 0001d2b8 size=248 ===== */

int FUN_0001d2b8(int *param_1,uint param_2)

{
  ushort local_8c [64];
  int local_c;
  
  if (*param_1 == 0x7f2bb701) {
    if (*(uint *)param_1[4] < param_2) {
      local_c = 0x7f2bb729;
    }
    else if (((param_1[0xe] == 0) ||
             (local_c = (*(code *)param_1[0xe])(param_1,param_2), local_c == 0x7f2bb741)) &&
            (local_c = FUN_0001c9f4(param_1,param_2,local_8c), local_c == 0)) {
      if ((local_8c[0] & 0xf000) == 0x4000) {
        local_c = 0;
      }
      else {
        local_c = 0x7f2bb74a;
      }
    }
  }
  else {
    local_c = 0x7f2bb701;
  }
  return local_c;
}



/* ===== FUN_0001d3b0 @ 0001d3b0 size=404 ===== */

int FUN_0001d3b0(int *param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  char *pcVar2;
  char *local_18;
  char *local_14;
  char *local_10;
  int local_c;
  
  local_c = 0;
  if (*param_1 == 0x7f2bb705) {
    if (param_2 == (char *)0x0) {
      local_c = 0;
    }
    else if (*(int *)(param_1[1] + 0x24) == 0) {
      local_c = 0x7f2bb747;
    }
    else {
      sVar1 = strlen(param_2);
      __dest = malloc(sVar1 + 1);
      if (__dest == (char *)0x0) {
        local_c = 0x7f2bb746;
      }
      else {
        strcpy(__dest,param_2);
        local_14 = __dest;
        while ((local_14 != (char *)0x0 && (*local_14 != '\0'))) {
          pcVar2 = strchr(local_14,0x26);
          local_10 = pcVar2;
          if (pcVar2 != (char *)0x0) {
            local_10 = pcVar2 + 1;
            *pcVar2 = '\0';
          }
          pcVar2 = strchr(local_14,0x3d);
          local_18 = pcVar2;
          if (pcVar2 != (char *)0x0) {
            local_18 = pcVar2 + 1;
            *pcVar2 = '\0';
          }
          local_c = (**(code **)(param_1[1] + 0x24))(param_1,local_14,local_18);
          if (local_c != 0) break;
          local_14 = local_10;
        }
        free(__dest);
      }
    }
  }
  else {
    local_c = 0x7f2bb705;
  }
  return local_c;
}



/* ===== FUN_0001d544 @ 0001d544 size=144 ===== */

undefined4 FUN_0001d544(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb705) {
    if (*(int *)(param_1[1] + 0x20) == 0) {
      uVar1 = 0x7f2bb750;
    }
    else {
      uVar1 = (**(code **)(param_1[1] + 0x20))(param_1,param_2,param_3,param_4);
    }
  }
  else {
    uVar1 = 0x7f2bb705;
  }
  return uVar1;
}



/* ===== FUN_0001d5d4 @ 0001d5d4 size=204 ===== */

undefined4
FUN_0001d5d4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb705) {
    if (*(int *)(param_1[1] + 0x2c) == 0) {
      if (param_4 == 0) {
        uVar1 = (**(code **)(param_1[1] + 0x14))(param_1,param_3,param_5,param_6);
      }
      else {
        uVar1 = 0x7f2bb787;
      }
    }
    else {
      uVar1 = (**(code **)(param_1[1] + 0x2c))
                        (param_1,*(code **)(param_1[1] + 0x2c),param_3,param_4,param_5,param_6);
    }
  }
  else {
    uVar1 = 0x7f2bb705;
  }
  return uVar1;
}



/* ===== FUN_0001d6a0 @ 0001d6a0 size=204 ===== */

undefined4
FUN_0001d6a0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb705) {
    if (*(int *)(param_1[1] + 0x30) == 0) {
      if (param_4 == 0) {
        uVar1 = (**(code **)(param_1[1] + 0x18))(param_1,param_3,param_5,param_6);
      }
      else {
        uVar1 = 0x7f2bb787;
      }
    }
    else {
      uVar1 = (**(code **)(param_1[1] + 0x30))
                        (param_1,*(code **)(param_1[1] + 0x30),param_3,param_4,param_5,param_6);
    }
  }
  else {
    uVar1 = 0x7f2bb705;
  }
  return uVar1;
}



/* ===== FUN_0001d76c @ 0001d76c size=136 ===== */

undefined4
FUN_0001d76c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb705) {
    if (*(int *)(param_1[1] + 0x34) == 0) {
      uVar1 = 0x7f2bb750;
    }
    else {
      uVar1 = (**(code **)(param_1[1] + 0x34))
                        (param_1,*(code **)(param_1[1] + 0x34),param_3,param_4,param_5,param_6);
    }
  }
  else {
    uVar1 = 0x7f2bb705;
  }
  return uVar1;
}



/* ===== FUN_0001d7f4 @ 0001d7f4 size=136 ===== */

undefined4
FUN_0001d7f4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb705) {
    if (*(int *)(param_1[1] + 0x3c) == 0) {
      uVar1 = 0x7f2bb750;
    }
    else {
      uVar1 = (**(code **)(param_1[1] + 0x3c))
                        (param_1,*(code **)(param_1[1] + 0x3c),param_3,param_4,param_5,param_6);
    }
  }
  else {
    uVar1 = 0x7f2bb705;
  }
  return uVar1;
}



/* ===== FUN_0001d87c @ 0001d87c size=176 ===== */

undefined4 FUN_0001d87c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  if (param_2 == 0) {
    local_c = *(int *)(param_1 + 0xc);
  }
  else if (param_2 < 1) {
    local_c = -param_2;
  }
  else {
    local_c = param_2 * *(int *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar1 = FUN_00018a74(local_c,param_3);
  }
  else {
    uVar1 = FUN_00019230(local_c,*(undefined4 *)(param_1 + 0x60),param_3);
  }
  return uVar1;
}



/* ===== FUN_0001d92c @ 0001d92c size=100 ===== */

undefined4
FUN_0001d92c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x38) == 0) {
    uVar2 = 0x7f2bb781;
  }
  else {
    pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x38);
    uVar2 = (*pcVar1)(param_1,pcVar1,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}



/* ===== FUN_0001d990 @ 0001d990 size=52 ===== */

void FUN_0001d990(int param_1)

{
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
  return;
}



/* ===== FUN_0001d9c4 @ 0001d9c4 size=60 ===== */

bool FUN_0001d9c4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 8) != 0;
}



/* ===== FUN_0001da00 @ 0001da00 size=60 ===== */

bool FUN_0001da00(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x40) != 0;
}



/* ===== FUN_0001da3c @ 0001da3c size=460 ===== */

int FUN_0001da3c(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t *local_18;
  int local_14;
  
  if (param_2 < 0x400) {
    local_14 = 0x7f2bb755;
  }
  else {
    local_14 = FUN_00018a74(*(undefined4 *)(param_1 + 0x14),&local_18);
    if (local_14 == 0) {
      memset(local_18,0,*(size_t *)(param_1 + 0x14));
      puVar1 = local_18;
      uVar3 = htonl(0xc03b3998);
      puVar2 = local_18;
      *puVar1 = uVar3;
      if ((param_3 & 1) == 0) {
        uVar3 = htonl(4);
        puVar2[1] = uVar3;
      }
      else {
        uVar3 = htonl(3);
        puVar2[1] = uVar3;
      }
      puVar1 = local_18;
      uVar3 = htonl(*(uint32_t *)(param_1 + 0x14));
      puVar2 = local_18;
      puVar1[3] = uVar3;
      uVar3 = htonl(param_2);
      puVar1 = local_18;
      puVar2[4] = uVar3;
      uVar3 = htonl(1);
      puVar2 = local_18;
      puVar1[0x10] = uVar3;
      uVar3 = htonl(1);
      puVar1 = local_18;
      puVar2[5] = uVar3;
      uVar3 = htonl(1);
      puVar1[6] = uVar3;
      memcpy(local_18 + 0xc,(void *)(*(int *)(param_1 + 0x10) + 0x68),0x10);
      iVar4 = FUN_0001d9c4(*(undefined4 *)(param_1 + 0x10));
      if (iVar4 != 0) {
        local_18[0x10] = 0;
        iVar4 = FUN_0001e808(*(undefined4 *)(param_1 + 0x14));
        puVar1 = local_18;
        uVar3 = htonl(iVar4 + 1);
        puVar1[5] = uVar3;
      }
      *param_4 = local_18;
      local_14 = 0;
    }
  }
  return local_14;
}



/* ===== FUN_0001dc08 @ 0001dc08 size=456 ===== */

int FUN_0001dc08(int param_1,char *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  void *local_1c;
  ssize_t local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_1c = (void *)0x0;
  local_c = FUN_0001da3c(param_1,param_3,param_4,&local_1c);
  if (local_c == 0) {
    local_14 = open(param_2,1);
    if (local_14 < 0) {
      piVar1 = __errno_location();
      local_c = *piVar1;
    }
    else {
      local_c = 0x7f2bb725;
      local_18 = write(local_14,local_1c,*(size_t *)(param_1 + 0x14));
      if (local_18 < 0) {
        piVar1 = __errno_location();
        local_c = *piVar1;
      }
      else if (local_18 == *(int *)(param_1 + 0x14)) {
        memset(local_1c,0,*(size_t *)(param_1 + 0x14));
        if ((param_4 & 2) == 0) {
          for (local_10 = 1; local_10 < param_3; local_10 = local_10 + 1) {
            local_18 = write(local_14,local_1c,*(size_t *)(param_1 + 0x14));
            if (local_18 < 0) {
              piVar1 = __errno_location();
              local_c = *piVar1;
              goto LAB_0001ddac;
            }
            if (local_18 != *(int *)(param_1 + 0x14)) goto LAB_0001ddac;
          }
        }
        local_c = 0;
      }
LAB_0001ddac:
      close(local_14);
    }
    FUN_00018c58(&local_1c);
  }
  return local_c;
}



/* ===== FUN_0001ddd0 @ 0001ddd0 size=884 ===== */

int FUN_0001ddd0(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,uint *param_6,
                int *param_7)

{
  int iVar1;
  void *__s;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  bool bVar2;
  undefined8 uVar3;
  uint local_38;
  uint uStack_34;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1 == 0) {
    if (DAT_0005a380 != (void *)0x0) {
      free(DAT_0005a380);
      DAT_0005a380 = (void *)0x0;
      DAT_0005a384 = 0;
    }
  }
  else if ((0 < param_5) &&
          (iVar1 = FUN_0001d7f4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,
                                param_4,param_5,param_5 >> 0x1f), iVar1 != 0)) {
    if ((DAT_0005a384 < param_5) &&
       (iVar1 = FUN_00042d5c(0x400000,*(undefined4 *)(param_1 + 0x14)), DAT_0005a384 < iVar1)) {
      local_1c = param_5;
      iVar1 = FUN_00042d5c(0x400000,*(undefined4 *)(param_1 + 0x14));
      if (iVar1 < param_5) {
        local_1c = FUN_00042d5c(0x400000,*(undefined4 *)(param_1 + 0x14));
      }
      __s = realloc(DAT_0005a380,local_1c * *(int *)(param_1 + 0x14));
      if (__s == (void *)0x0) {
        return 0x7f2bb746;
      }
      DAT_0005a384 = local_1c;
      DAT_0005a380 = __s;
      memset(__s,0,local_1c * *(int *)(param_1 + 0x14));
    }
    local_14 = 0;
    local_38 = param_3;
    uStack_34 = param_4;
    while (local_14 < param_5) {
      FUN_00043218(local_38,uStack_34,DAT_0005a384,DAT_0005a384 >> 0x1f);
      local_18 = DAT_0005a384;
      if (extraout_r2 == 0 && extraout_r3 == 0) {
        local_18 = param_5 - local_14;
        if (DAT_0005a384 < local_18) {
          local_18 = DAT_0005a384;
        }
      }
      else {
        FUN_00043218(local_38,uStack_34,DAT_0005a384,DAT_0005a384 >> 0x1f);
        local_18 = local_18 - extraout_r2_00;
        if (param_5 - local_14 < local_18) {
          local_18 = param_5 - local_14;
        }
      }
      iVar1 = FUN_0001d6a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),local_38,
                           uStack_34,local_18,DAT_0005a380);
      if (iVar1 != 0) {
        if (param_7 != (int *)0x0) {
          *param_7 = local_18;
        }
        if (param_6 != (uint *)0x0) {
          *param_6 = local_38;
          param_6[1] = uStack_34;
          return iVar1;
        }
        return iVar1;
      }
      local_14 = local_14 + local_18;
      uVar3 = VectorShiftRight(CONCAT44(local_18,local_18),0x20);
      bVar2 = CARRY4((uint)uVar3,local_38);
      local_38 = (uint)uVar3 + local_38;
      uStack_34 = (int)((ulonglong)uVar3 >> 0x20) + uStack_34 + (uint)bVar2;
    }
  }
  return 0;
}



/* ===== FUN_0001e144 @ 0001e144 size=116 ===== */

int FUN_0001e144(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_0001ddd0(param_1,param_3,param_2,0,param_3,local_18,param_5);
  if (iVar1 != 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_0001e1b8 @ 0001e1b8 size=484 ===== */

undefined4 FUN_0001e1b8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  uVar7 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
  uVar6 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x20);
  uVar5 = iVar1 - ((int)((ulonglong)uVar6 >> 0x20) + (uint)((uint)uVar7 < (uint)uVar6));
  local_14 = FUN_000128bc(param_1,iVar1,(uint)uVar7 - (uint)uVar6 >> 1 | uVar5 * -0x80000000,
                          uVar5 >> 1);
  uVar5 = 1 << *(sbyte *)(*(int *)(param_1 + 0x10) + 0x174);
  if ((*(char *)(*(int *)(param_1 + 0x10) + 0x174) == '\0') || (local_14 <= uVar5)) {
    if (local_14 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = local_14 - 1;
    }
  }
  else {
    local_14 = -uVar5 & local_14;
    while ((local_14 < *(uint *)(param_1 + 0x1c) &&
           (iVar1 = FUN_00013470(param_1,local_14), iVar1 == 0))) {
      local_14 = local_14 + 1;
    }
    if (local_14 == *(uint *)(param_1 + 0x1c)) {
      local_14 = 0;
    }
    local_18 = local_14;
  }
  uVar5 = local_14;
  if (local_14 + 1 < *(uint *)(param_1 + 0x1c)) {
    uVar5 = local_14 + 1;
  }
  local_14 = local_18;
  while (local_1c = local_18 + 1, local_1c <= uVar5) {
    uVar2 = FUN_00013470(param_1,local_1c);
    uVar3 = FUN_00013470(param_1,local_14);
    local_18 = local_1c;
    if (uVar3 < uVar2) {
      local_14 = local_1c;
    }
  }
  uVar4 = FUN_00012928(param_1,local_14);
  return uVar4;
}



/* ===== FUN_0001e39c @ 0001e39c size=824 ===== */

int FUN_0001e39c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                int param_6,uint param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined2 local_9c [2];
  undefined4 local_98;
  time_t local_90;
  time_t local_8c;
  undefined2 local_82;
  int local_80;
  uint local_7c;
  undefined1 auStack_74 [68];
  undefined4 local_30;
  undefined4 local_1c;
  undefined8 local_18;
  uint local_10;
  int local_c;
  
  uVar2 = CONCAT44(param_6,param_5);
  local_10 = 2;
  local_c = FUN_0001da3c(param_1,param_3,param_7,&local_1c);
  if (local_c == 0) {
    local_c = FUN_00022ac8(param_1);
    if ((local_c == 0) && (local_c = FUN_0001c9f4(param_1,param_2,local_9c), local_c == 0)) {
      if (local_80 == 0) {
        if (param_6 == -1 && param_5 == -1) {
          uVar2 = FUN_0001e1b8(param_1);
        }
        param_6 = (int)((ulonglong)uVar2 >> 0x20);
        iVar1 = FUN_0001da00(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 0) {
          local_7c = local_7c | 0x80000;
        }
        if ((param_7 & 2) == 0) {
          local_10 = local_10 | 1;
        }
        local_18 = (ulonglong)param_3 * (ulonglong)*(uint *)(param_1 + 0x14);
        if (*(int *)(param_1 + 0x60) == 0) {
          local_90 = time((time_t *)0x0);
        }
        else {
          local_90 = *(time_t *)(param_1 + 0x60);
        }
        local_82 = 1;
        local_9c[0] = 0x8180;
        local_8c = local_90;
        local_c = FUN_00013bac(param_1,local_9c,(undefined4)local_18,local_18._4_4_);
        if ((((local_c == 0) &&
             (local_c = FUN_000359bc(param_1,local_10,param_2,local_9c,uVar2,0,param_3,0),
             local_c == 0)) && (local_c = FUN_0001cfec(param_1,param_2,local_9c), local_c == 0)) &&
           ((local_c = FUN_0002bbb8(param_1,param_2,local_9c,0,0,param_6,0,0,&local_a8),
            local_c == 0 &&
            (local_c = FUN_0001d6a0(*(undefined4 *)(param_1 + 4),1,local_a8,uStack_a4,1,local_1c),
            local_c == 0)))) {
          memcpy((void *)(*(int *)(param_1 + 0x10) + 0x10c),auStack_74,0x3c);
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x148) = local_30;
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14c) = local_98;
          *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xfd) = 1;
          FUN_00018d14(param_1);
        }
      }
      else {
        local_c = 0x11;
      }
    }
    FUN_00018c58(&local_1c);
  }
  return local_c;
}



/* ===== FUN_0001e808 @ 0001e808 size=56 ===== */

undefined4 FUN_0001e808(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x400) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_0001e840 @ 0001e840 size=772 ===== */

int FUN_0001e840(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t local_480 [256];
  stat sStack_80;
  uint local_24;
  uint32_t *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  iVar1 = stat(*(char **)(param_2 + 0xc),&sStack_80);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    local_1c = *piVar2;
  }
  else if ((sStack_80.st_mode & 0xf000) == 0x6000) {
    local_18 = FUN_0001e808(*(undefined4 *)(param_2 + 0x14));
    local_1c = FUN_0001d5d4(*(undefined4 *)(param_2 + 4),local_18 >> 0x1f,local_18,local_18 >> 0x1f,
                            0xfffffc00,local_480);
    if (local_1c == 0) {
      local_20 = local_480;
      uVar3 = ntohl(0xc03b3998);
      if ((local_480[0] == uVar3) && (uVar4 = local_20[1], uVar3 = ntohl(4), uVar4 == uVar3)) {
        uVar3 = ntohl(local_20[3]);
        if (uVar3 == *(uint32_t *)(param_1 + 0x14)) {
          local_24 = ntohl(local_20[0x10]);
          local_14 = 0;
          while ((local_14 < local_24 &&
                 (iVar1 = memcmp((void *)(*(int *)(param_1 + 0x10) + 0x68),
                                 local_20 + local_14 * 4 + 0x40,0x10), iVar1 != 0))) {
            local_14 = local_14 + 1;
          }
          if (local_24 <= local_14) {
            memcpy(local_20 + local_24 * 4 + 0x40,(void *)(*(int *)(param_1 + 0x10) + 0x68),0x10);
            uVar3 = htonl(local_24 + 1);
            local_20[0x10] = uVar3;
          }
          local_1c = FUN_0001d6a0(*(undefined4 *)(param_2 + 4),local_18 >> 0x1f,local_18,
                                  local_18 >> 0x1f,0xfffffc00,local_480);
          if (local_1c == 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe0) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe4) = (undefined4)sStack_80.st_rdev;
            memcpy((void *)(*(int *)(param_1 + 0x10) + 0xd0),local_20 + 0xc,0x10);
            memset((void *)(*(int *)(param_1 + 0x10) + 0x10c),0,0x44);
            FUN_0001d990(*(undefined4 *)(param_1 + 0x10));
            FUN_00018d14(param_1);
            local_1c = 0;
          }
        }
        else {
          local_1c = 0x7f2bb722;
        }
      }
      else {
        local_1c = 0x7f2bb754;
      }
    }
  }
  else {
    local_1c = 0x7f2bb753;
  }
  return local_1c;
}



/* ===== FUN_0001eb44 @ 0001eb44 size=972 ===== */

int FUN_0001eb44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  uint local_478;
  uint local_474;
  char acStack_470 [4];
  char acStack_46c [4];
  char acStack_468 [1016];
  stat sStack_70;
  int local_14;
  __ino_t local_10;
  int local_c;
  
  local_14 = -1;
  if ((param_5 & 4) == 0) {
    local_c = FUN_0003c7d0(*(undefined4 *)(param_1 + 0xc),&local_474,acStack_470,0x3f6);
    if (local_c != 0) {
      return local_c;
    }
  }
  else {
    local_474 = 0;
  }
  if ((local_474 & 1) == 0) {
    if (((local_474 & 0x10) == 0) || ((*(uint *)(param_1 + 8) & 0x4000) != 0)) {
      local_10 = 8;
      local_c = FUN_0001e39c(param_1,8,param_2,param_4,param_3,param_4,param_5);
      if (local_c != 0) {
        return local_c;
      }
LAB_0001ee8c:
      *(__ino_t *)(*(int *)(param_1 + 0x10) + 0xe0) = local_10;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe4) = 0;
      memset((void *)(*(int *)(param_1 + 0x10) + 0xd0),0,0x10);
      FUN_0001d990(*(undefined4 *)(param_1 + 0x10));
      FUN_00018d14(param_1);
      return 0;
    }
    local_c = 0x10;
  }
  else {
    local_478 = 0;
    sVar1 = strlen(acStack_470);
    *(undefined4 *)(acStack_470 + sVar1) = s___journal_00045490._0_4_;
    *(undefined4 *)(acStack_46c + sVar1) = s___journal_00045490._4_4_;
    *(undefined2 *)(acStack_468 + sVar1) = s___journal_00045490._8_2_;
    local_14 = open(acStack_470,0);
    if (-1 < local_14) {
      local_c = ioctl(local_14,0x40046602,&local_478);
      close(local_14);
      if (local_c != 0) {
        return local_c;
      }
    }
    local_14 = open(acStack_470,0x41,0x180);
    if (local_14 < 0) {
      piVar2 = __errno_location();
      return *piVar2;
    }
    local_c = FUN_0001dc08(param_1,acStack_470,param_2,param_5 & 0xfffffffd);
    if (local_c == 0) {
      iVar3 = fstat(local_14,&sStack_70);
      if (iVar3 < 0) {
        piVar2 = __errno_location();
        local_c = *piVar2;
      }
      else {
        iVar3 = ioctl(local_14,0x80046601,&local_478);
        if (iVar3 < 0) {
          piVar2 = __errno_location();
          local_c = *piVar2;
        }
        else {
          local_478 = local_478 | 0x50;
          local_c = ioctl(local_14,0x40046602,&local_478);
          if (local_c == 0) {
            iVar3 = close(local_14);
            if (-1 < iVar3) {
              local_10 = sStack_70.st_ino;
              memset((void *)(*(int *)(param_1 + 0x10) + 0x10c),0,0x44);
              goto LAB_0001ee8c;
            }
            piVar2 = __errno_location();
            local_c = *piVar2;
            local_14 = -1;
          }
          else {
            piVar2 = __errno_location();
            local_c = *piVar2;
          }
        }
      }
    }
  }
  if (-1 < local_14) {
    close(local_14);
  }
  return local_c;
}



/* ===== FUN_0001ef10 @ 0001ef10 size=68 ===== */

undefined4 FUN_0001ef10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001eb44(param_1,param_2,0xffffffff,0xffffffff,param_3);
  return uVar1;
}



/* ===== FUN_0001ef54 @ 0001ef54 size=60 ===== */

bool FUN_0001ef54(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x100) != 0;
}



/* ===== FUN_0001ef90 @ 0001ef90 size=712 ===== */

int FUN_0001ef90(int param_1,undefined4 param_2,uint param_3,uint param_4,void *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ssize_t sVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  int local_c;
  
  local_c = 0;
  if (param_4 != 0 || *(uint *)(*(int *)(param_1 + 0x10) + 0x14) < param_3) {
    uVar8 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
    uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
    bVar7 = uVar5 <= param_4;
    if (param_4 == uVar5) {
      bVar7 = (uint)uVar8 <= param_3;
    }
    if (!bVar7) {
      if (*(int *)(param_1 + 0x9c) < 1) {
        iVar2 = open(*(char **)(param_1 + 0xc),0x10002);
        *(int *)(param_1 + 0x9c) = iVar2;
        if (*(int *)(param_1 + 0x9c) < 0) {
          return 0x7f2bb790;
        }
      }
      if (*(int *)(param_1 + 0x98) == 0) {
        uVar3 = FUN_0003b820(*(undefined4 *)(param_1 + 0x9c));
        local_c = FUN_00019230(*(undefined4 *)(param_1 + 0x14),uVar3,param_1 + 0x98);
        if (local_c != 0) {
          return local_c;
        }
      }
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x14) * (ulonglong)param_3;
      iVar2 = *(uint *)(param_1 + 0x14) * param_4 + (int)((ulonglong)lVar1 >> 0x20);
      lVar9 = FUN_0003c9c8(*(undefined4 *)(param_1 + 0x9c),iVar2,(int)lVar1,iVar2,0);
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x14) * (ulonglong)param_3;
      if (lVar9 != CONCAT44(*(uint *)(param_1 + 0x14) * param_4 + (int)((ulonglong)lVar1 >> 0x20),
                            (int)lVar1)) {
        return 0x7f2bb745;
      }
      sVar4 = read(*(int *)(param_1 + 0x9c),*(void **)(param_1 + 0x98),*(size_t *)(param_1 + 0x14));
      if (sVar4 != *(int *)(param_1 + 0x14)) {
        return 0x7f2bb724;
      }
      piVar6 = *(int **)(param_1 + 0x98);
      if (((*(uint *)(param_1 + 8) & 0x200000) == 0) &&
         (iVar2 = FUN_000151cc(param_1,piVar6), iVar2 == 0)) {
        local_c = 0x7f2bb79a;
      }
      if ((param_5 != (void *)0x0) && (param_5 != *(void **)(param_1 + 0x98))) {
        memcpy(param_5,*(void **)(param_1 + 0x98),*(size_t *)(param_1 + 0x14));
      }
      if (*piVar6 == 0x4d4d50) {
        return local_c;
      }
      return 0x7f2bb78a;
    }
  }
  return 0x7f2bb78d;
}



/* ===== FUN_0001f258 @ 0001f258 size=324 ===== */

int FUN_0001f258(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  timeval local_20;
  int local_18;
  int local_14;
  
  local_14 = param_5;
  local_18 = 0;
  gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  *(__time_t *)(local_14 + 8) = local_20.tv_sec;
  *(__time_t *)(local_14 + 0xc) = local_20.tv_sec >> 0x1f;
  *(__time_t *)(param_1 + 0xa0) = local_20.tv_sec;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x16c) != 0 ||
      *(uint *)(*(int *)(param_1 + 0x10) + 0x14) <= *(uint *)(*(int *)(param_1 + 0x10) + 0x168)) {
    puVar4 = (uint *)(*(int *)(param_1 + 0x10) + 0x168);
    uVar3 = *puVar4;
    uVar5 = *(uint *)(*(int *)(param_1 + 0x10) + 0x16c);
    lVar1 = *(longlong *)puVar4;
    lVar7 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
    uVar2 = (uint)((ulonglong)lVar7 >> 0x20);
    bVar6 = uVar2 <= uVar5;
    if (uVar5 == uVar2) {
      bVar6 = (uint)lVar7 <= uVar3;
    }
    if (!bVar6 || lVar7 == lVar1) {
      local_18 = FUN_0001523c(param_1,local_14);
      if (local_18 != 0) {
        return local_18;
      }
      local_18 = FUN_0001d6a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,
                              param_4,0xfffffc00,param_5);
      (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x1c))(*(undefined4 *)(param_1 + 4));
      return local_18;
    }
  }
  return 0x7f2bb78d;
}



/* ===== FUN_0001f39c @ 0001f39c size=196 ===== */

uint FUN_0001f39c(void)

{
  __pid_t _Var1;
  __uid_t _Var2;
  timeval local_1c;
  uint local_14;
  
  gettimeofday(&local_1c,(__timezone_ptr_t)0x0);
  _Var1 = getpid();
  _Var2 = getuid();
  srandom(_Var2 ^ _Var1 << 0x10 ^ local_1c.tv_sec ^ local_1c.tv_usec);
  gettimeofday(&local_1c,(__timezone_ptr_t)0x0);
  for (local_14 = (local_1c.tv_usec ^ local_1c.tv_sec) & 0x1f; local_14 != 0;
      local_14 = local_14 - 1) {
    random();
  }
  do {
    local_14 = random();
  } while (0xe24d4d4f < local_14);
  return local_14;
}



/* ===== FUN_0001f460 @ 0001f460 size=344 ===== */

int FUN_0001f460(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 0x94) == 0) &&
     (iVar1 = FUN_00018a74(*(undefined4 *)(param_1 + 0x14),param_1 + 0x94), iVar1 != 0)) {
    return iVar1;
  }
  memset(*(void **)(param_1 + 0x94),0,*(size_t *)(param_1 + 0x14));
  puVar2 = *(undefined4 **)(param_1 + 0x94);
  *puVar2 = 0x4d4d50;
  puVar2[1] = 0xff4d4d50;
  *(undefined8 *)(puVar2 + 2) = 0;
  gethostname((char *)(puVar2 + 4),0x40);
  strncpy((char *)(puVar2 + 0x14),*(char **)(param_1 + 0xc),0x20);
  *(undefined2 *)(puVar2 + 0x1c) = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x166);
  if (*(ushort *)(puVar2 + 0x1c) < 5) {
    *(undefined2 *)(puVar2 + 0x1c) = 5;
  }
  iVar1 = FUN_0001f258(param_1,*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                       *(undefined4 *)(param_1 + 0x94));
  return iVar1;
}



/* ===== FUN_0001f5b8 @ 0001f5b8 size=44 ===== */

undefined4 FUN_0001f5b8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fc00(param_1,0);
  return uVar1;
}



/* ===== FUN_0001f5e4 @ 0001f5e4 size=84 ===== */

undefined4 FUN_0001f5e4(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    uVar1 = 0x7f2bb715;
  }
  else {
    uVar1 = FUN_0001f460(param_1);
  }
  return uVar1;
}



/* ===== FUN_0001f638 @ 0001f638 size=292 ===== */

int FUN_0001f638(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  
  uVar1 = CONCAT44(param_2,local_c);
  local_10 = *(int *)(param_1 + 0x10);
  if (*(short *)(local_10 + 0x166) == 0) {
    *(undefined2 *)(local_10 + 0x166) = 5;
  }
  else if (300 < *(ushort *)(local_10 + 0x166)) {
    return 0x7f2bb747;
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_00018a74(*(undefined4 *)(param_1 + 0x14),param_1 + 0x94);
    if ((int)uVar1 != 0) {
      return (int)uVar1;
    }
  }
  local_c = (int)uVar1;
  local_c = FUN_00025da0(param_1,(int)((ulonglong)uVar1 >> 0x20),0,0,*(undefined4 *)(param_1 + 0x94)
                         ,&local_18);
  if (local_c == 0) {
    *(undefined4 *)(local_10 + 0x168) = local_18;
    *(undefined4 *)(local_10 + 0x16c) = uStack_14;
    local_c = FUN_0001f460(param_1);
  }
  return local_c;
}



/* ===== FUN_0001f75c @ 0001f75c size=844 ===== */

int FUN_0001f75c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  uint local_c;
  
  if ((*(int *)(param_1 + 0x94) == 0) &&
     (iVar1 = FUN_00018a74(*(undefined4 *)(param_1 + 0x14),param_1 + 0x94), iVar1 != 0)) {
    return iVar1;
  }
  iVar1 = FUN_0001ef90(param_1,*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                       *(undefined4 *)(param_1 + 0x94));
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x94);
  local_c = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x166);
  if (local_c < 5) {
    local_c = 5;
  }
  uVar3 = *(uint *)(iVar1 + 4);
  if (uVar3 != 0xff4d4d50) {
    if (uVar3 == 0xe24d4d50) {
      return 0x7f2bb78c;
    }
    if (0xe24d4d50 < uVar3) {
      return 0x7f2bb78e;
    }
    if (local_c < *(ushort *)(iVar1 + 0x70)) {
      local_c = (uint)*(ushort *)(iVar1 + 0x70);
    }
    sleep(local_c * 2 + 1);
    iVar2 = FUN_0001ef90(param_1,*(undefined4 *)(param_1 + 0x94),
                         *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                         *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                         *(undefined4 *)(param_1 + 0x94));
    if (iVar2 != 0) {
      return iVar2;
    }
    if (uVar3 != *(uint *)(iVar1 + 4)) {
      return 0x7f2bb78b;
    }
  }
  local_10 = 0;
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    iVar2 = FUN_0001f39c();
    *(int *)(iVar1 + 4) = iVar2;
    gethostname((char *)(iVar1 + 0x10),0x40);
    strncpy((char *)(iVar1 + 0x50),*(char **)(param_1 + 0xc),0x20);
    local_10 = FUN_0001f258(param_1,*(undefined4 *)(param_1 + 0x94),
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                            *(undefined4 *)(param_1 + 0x94));
    if (local_10 == 0) {
      sleep(local_c * 2 + 1);
      local_10 = FUN_0001ef90(param_1,*(undefined4 *)(param_1 + 0x94),
                              *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                              *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                              *(undefined4 *)(param_1 + 0x94));
      if (local_10 == 0) {
        if (iVar2 == *(int *)(iVar1 + 4)) {
          *(undefined4 *)(iVar1 + 4) = 0xe24d4d50;
          local_10 = FUN_0001f258(param_1,*(undefined4 *)(param_1 + 0x94),
                                  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                                  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                                  *(undefined4 *)(param_1 + 0x94));
          if (local_10 == 0) {
            local_10 = 0;
          }
        }
        else {
          local_10 = 0x7f2bb78b;
        }
      }
    }
  }
  return local_10;
}



/* ===== FUN_0001faa8 @ 0001faa8 size=344 ===== */

int FUN_0001faa8(int param_1)

{
  int iVar1;
  void *__s2;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0001ef54(*(undefined4 *)(param_1 + 0x10));
  if ((((iVar1 != 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) &&
      ((*(uint *)(param_1 + 8) & 0x100000) == 0)) &&
     (local_c = FUN_0001ef90(param_1,*(undefined4 *)(param_1 + 0x94),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                             *(undefined4 *)(param_1 + 0x94)), local_c == 0)) {
    __s2 = *(void **)(param_1 + 0x98);
    iVar1 = memcmp(*(void **)(param_1 + 0x94),__s2,0x400);
    if (iVar1 == 0) {
      *(undefined4 *)((int)__s2 + 4) = 0xff4d4d50;
      local_c = FUN_0001f258(param_1,*(undefined4 *)(param_1 + 0x98),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                             *(undefined4 *)(param_1 + 0x98));
    }
    else {
      local_c = 0x7f2bb78f;
    }
  }
  if (0 < *(int *)(param_1 + 0x9c)) {
    close(*(int *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  }
  return local_c;
}



/* ===== FUN_0001fc00 @ 0001fc00 size=376 ===== */

int FUN_0001fc00(int param_1,int param_2)

{
  int iVar1;
  timeval local_1c;
  void *local_14;
  void *local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0001ef54(*(undefined4 *)(param_1 + 0x10));
  if (((iVar1 == 0) || ((*(uint *)(param_1 + 8) & 1) == 0)) ||
     ((*(uint *)(param_1 + 8) & 0x100000) != 0)) {
    local_c = 0;
  }
  else {
    gettimeofday(&local_1c,(__timezone_ptr_t)0x0);
    if ((param_2 == 0) && (local_1c.tv_sec - *(int *)(param_1 + 0xa0) < 0x3c)) {
      local_c = 0;
    }
    else {
      local_c = FUN_0001ef90(param_1,0,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),0);
      if (local_c == 0) {
        local_10 = *(void **)(param_1 + 0x94);
        local_14 = *(void **)(param_1 + 0x98);
        iVar1 = memcmp(local_10,local_14,0x400);
        if (iVar1 == 0) {
          *(__time_t *)((int)local_10 + 8) = local_1c.tv_sec;
          *(__time_t *)((int)local_10 + 0xc) = local_1c.tv_sec >> 0x1f;
          *(undefined4 *)((int)local_10 + 4) = 0xe24d4d50;
          local_c = FUN_0001f258(param_1,*(undefined4 *)(param_1 + 0x94),
                                 *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                                 *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                                 *(undefined4 *)(param_1 + 0x94));
        }
        else {
          local_c = 0x7f2bb78f;
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_0001fd78 @ 0001fd78 size=60 ===== */

bool FUN_0001fd78(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_0001fdb4 @ 0001fdb4 size=60 ===== */

bool FUN_0001fdb4(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x200) != 0;
}



/* ===== FUN_0001fdf0 @ 0001fdf0 size=60 ===== */

bool FUN_0001fdf0(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0001fe2c @ 0001fe2c size=60 ===== */

bool FUN_0001fe2c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 8) != 0;
}



/* ===== FUN_0001fe68 @ 0001fe68 size=60 ===== */

bool FUN_0001fe68(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x10) != 0;
}



/* ===== FUN_0001fea4 @ 0001fea4 size=60 ===== */

bool FUN_0001fea4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x80) != 0;
}



/* ===== FUN_0001fee0 @ 0001fee0 size=60 ===== */

bool FUN_0001fee0(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x100) != 0;
}



/* ===== FUN_0001ff1c @ 0001ff1c size=96 ===== */

undefined4 FUN_0001ff1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001fdf0(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0001fd78(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0001ff7c @ 0001ff7c size=636 ===== */

longlong FUN_0001ff7c(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint local_18;
  uint local_14;
  
  local_18 = 0;
  if (((param_5 == 0) && (*(int *)(param_1 + 0x14) == 0x400)) &&
     (1 < 1 << (*(uint *)(param_1 + 100) & 0xff))) {
    local_18 = 1;
  }
  iVar1 = FUN_0001fe68(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) || (param_5 < *(uint *)(*(int *)(param_1 + 0x10) + 0x104))) {
    uVar4 = local_18 + param_5 + param_3;
    lVar9 = CONCAT44(param_4 + (uint)CARRY4(param_5,param_3) +
                     (uint)CARRY4(local_18,param_5 + param_3) + (uint)(0xfffffffe < uVar4),uVar4 + 1
                    );
  }
  else {
    if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x60) & 0x80) == 0) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0xfe);
    }
    iVar1 = FUN_00042d5c(0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0xff),uVar5);
    iVar1 = param_5 * iVar1;
    iVar2 = FUN_00013e50(param_1,iVar1);
    local_14 = (uint)(iVar2 != 0);
    lVar9 = FUN_00012928(param_1,iVar1);
    if (param_4 != 0 || param_3 != *(uint *)(*(int *)(param_1 + 0x10) + 0x14)) {
      uVar4 = local_14 + (uint)lVar9;
      uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + 0x20);
      uVar7 = (int)((ulonglong)lVar9 >> 0x20) + (uint)CARRY4(local_14,(uint)lVar9) +
              (uint)CARRY4(uVar4,uVar6);
      uVar10 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
      uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
      bVar8 = uVar3 <= uVar7;
      if (uVar7 == uVar3) {
        bVar8 = (uint)uVar10 <= uVar4 + uVar6;
      }
      if (!bVar8) {
        lVar9 = lVar9 + (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x20);
        iVar1 = FUN_00013e50(param_1,iVar1 + 1);
        if (iVar1 == 0) {
          local_14 = 0;
        }
        else {
          local_14 = 1;
        }
      }
    }
    lVar9 = lVar9 + (ulonglong)local_14 + (ulonglong)local_18;
  }
  return lVar9;
}



/* ===== FUN_000201f8 @ 000201f8 size=76 ===== */

undefined4 FUN_000201f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001ff7c(param_1,param_3,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_00020244 @ 00020244 size=88 ===== */

undefined4
FUN_00020244(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002029c(param_1,0,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_0002029c @ 0002029c size=4204 ===== */

int FUN_0002029c(char *param_1,char *param_2,uint param_3,int param_4,int param_5,int *param_6,
                undefined4 *param_7)

{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_70;
  char *local_68;
  undefined4 *local_5c;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  char *local_40;
  uint local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  local_38 = 0;
  if (*param_6 != 0x7f2bb707) {
    return 0x7f2bb707;
  }
  local_14 = FUN_00018a74(0xbc,&local_5c);
  if (local_14 != 0) {
    return local_14;
  }
  memset(local_5c,0,0xbc);
  *local_5c = 0x7f2bb701;
  local_5c[2] = param_3;
  local_5c[2] = local_5c[2] | 0x200;
  local_5c[0x17] = 0x12;
  sVar2 = strlen(param_1);
  local_14 = FUN_00018a74(sVar2 + 1,local_5c + 3);
  if (local_14 == 0) {
    strcpy((char *)local_5c[3],param_1);
    local_40 = strchr((char *)local_5c[3],0x3f);
    local_68 = param_2;
    if ((param_2 == (char *)0x0) && (local_40 != (char *)0x0)) {
      local_68 = local_40 + 1;
      *local_40 = '\0';
      local_40 = local_68;
    }
    local_24 = (uint)((param_3 & 1) != 0);
    if ((param_3 & 0x4000) != 0) {
      local_24 = local_24 | 2;
    }
    if ((param_3 & 0x80000) != 0) {
      local_24 = local_24 | 4;
    }
    local_14 = (*(code *)param_6[2])(local_5c[3],local_24,local_5c + 1);
    if (local_14 == 0) {
      iVar3 = 0;
      if (local_68 != (char *)0x0) {
        local_14 = FUN_0001d3b0(local_5c[1],local_68);
        iVar3 = local_14;
        if (local_14 != 0) goto LAB_000212c8;
      }
      local_14 = iVar3;
      local_5c[0x22] = local_5c[1];
      *(undefined4 **)(local_5c[1] + 0x5c) = local_5c;
      local_14 = FUN_0001d87c(local_5c[1],0xfffffc00,local_5c + 4);
      if (local_14 == 0) {
        local_70 = param_4;
        if ((param_3 & 0x2000) != 0) {
          local_14 = FUN_00018a74(0x14c,local_5c + 0x16);
          if (local_14 != 0) goto LAB_000212c8;
          local_14 = (**(code **)(*(int *)(local_5c[1] + 4) + 0x14))
                               (local_5c[1],0,0xfffffeb4,local_5c[0x16]);
          if (local_14 != 0) goto LAB_000212c8;
          if (*(int *)local_5c[0x16] != 0x7f2bb710) {
            return 0x7f2bb710;
          }
          local_70 = 1;
          param_5 = *(int *)(local_5c[0x16] + 0xcc);
        }
        local_14 = 0;
        if (local_70 == 0) {
          (**(code **)(*(int *)(local_5c[1] + 4) + 0x10))(local_5c[1],0x400);
          local_70 = 1;
          local_30 = 0;
          local_14 = FUN_00018a74(0x400,local_5c + 0x15);
          if (local_14 != 0) goto LAB_000212c8;
        }
        else {
          if (param_5 == 0) {
            local_14 = 0x7f2bb747;
            local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
            local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
            goto LAB_000212c8;
          }
          (**(code **)(*(int *)(local_5c[1] + 4) + 0x10))(local_5c[1],param_5);
          local_30 = (ulonglong)local_70;
          local_5c[0x15] = 0;
        }
        local_14 = (**(code **)(*(int *)(local_5c[1] + 4) + 0x14))
                             (local_5c[1],local_70,0xfffffc00,local_5c[4]);
        if (local_14 == 0) {
          if (local_5c[0x15] != 0) {
            memcpy((void *)local_5c[0x15],(void *)local_5c[4],0x400);
          }
          if ((local_5c[2] & 0x200000) == 0) {
            local_14 = 0;
            iVar3 = FUN_000152a0(local_5c,local_5c[4]);
            if (iVar3 == 0) {
              local_14 = 0x7f2bb799;
            }
            iVar3 = FUN_0001533c(local_5c,local_5c[4]);
            if (iVar3 == 0) {
              local_14 = 0x7f2bb798;
            }
          }
          if ((local_5c[2] & 0x40) == 0) {
            if (*(short *)(local_5c[4] + 0x38) != -0x10ad) {
              local_14 = 0x7f2bb713;
            }
            if (local_14 == 0) {
              if (*(uint *)(local_5c[4] + 0x4c) < 2) {
                if ((param_3 & 0x400) == 0) {
                  local_20 = *(uint *)(local_5c[4] + 0x60);
                  if ((local_20 & 0xfffe5c21) != 0) {
                    local_14 = 0x7f2bb743;
                    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                    local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                    goto LAB_000212c8;
                  }
                  local_20 = *(uint *)(local_5c[4] + 100);
                  if ((param_3 & 0x8000) != 0) {
                    local_20 = local_20 & 0xfffff7ff;
                  }
                  if (((param_3 & 1) != 0) && ((local_20 & 0xffffc884) != 0)) {
                    local_14 = 0x7f2bb744;
                    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                    local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                    goto LAB_000212c8;
                  }
                  if ((param_3 & 0x1000) == 0) {
                    iVar3 = FUN_0001fe2c(local_5c[4]);
                    if (iVar3 != 0) {
                      local_14 = 0x7f2bb743;
                      local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                      local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                      goto LAB_000212c8;
                    }
                  }
                }
                if (*(uint *)(local_5c[4] + 0x18) < 7) {
                  iVar3 = FUN_0001fdb4(local_5c[4]);
                  if ((iVar3 == 0) || ((param_3 & 0x20000) != 0)) {
                    iVar3 = FUN_0001fdb4(local_5c[4]);
                    if ((iVar3 == 0) &&
                       (*(int *)(local_5c[4] + 0x18) != *(int *)(local_5c[4] + 0x1c))) {
                      local_14 = 0x7f2bb73c;
                      local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                      local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                    }
                    else {
                      local_5c[5] = 0x400 << (*(uint *)(local_5c[4] + 0x18) & 0xff);
                      local_5c[6] = local_5c[5];
                      if (*(int *)(local_5c[4] + 0x4c) == 0) {
                        local_44 = 0x80;
                      }
                      else {
                        local_44 = (uint)*(ushort *)(local_5c[4] + 0x58);
                      }
                      if (((local_44 < 0x80) || ((uint)local_5c[5] < local_44)) ||
                         ((local_44 & local_44 - 1) != 0)) {
                        local_14 = 0x7f2bb73c;
                        local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                        local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                      }
                      else {
                        iVar3 = FUN_0001fea4(local_5c[4]);
                        if (iVar3 == 0) {
                          if ((*(short *)(local_5c[4] + 0xfe) != 0) &&
                             (*(short *)(local_5c[4] + 0xfe) != 0x20)) {
                            local_14 = 0x7f2bb791;
                            goto LAB_000212c8;
                          }
                        }
                        else if (*(ushort *)(local_5c[4] + 0xfe) < 0x40) {
                          local_14 = 0x7f2bb791;
                          local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                          local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                          goto LAB_000212c8;
                        }
                        local_5c[0x19] = *(int *)(local_5c[4] + 0x1c) - *(int *)(local_5c[4] + 0x18)
                        ;
                        if (*(int *)(local_5c[4] + 0x20) ==
                            *(int *)(local_5c[4] + 0x24) << (local_5c[0x19] & 0xff)) {
                          if (*(int *)(local_5c[4] + 0x4c) == 0) {
                            uVar5 = 0x80;
                          }
                          else {
                            uVar5 = (uint)*(ushort *)(local_5c[4] + 0x58);
                          }
                          local_5c[10] = (*(int *)(local_5c[4] + 0x28) * uVar5 +
                                         (0x400 << (*(uint *)(local_5c[4] + 0x18) & 0xff))) - 1 >>
                                         (*(int *)(local_5c[4] + 0x18) + 10U & 0xff);
                          if ((param_5 == 0) || (param_5 == local_5c[5])) {
                            (**(code **)(*(int *)(local_5c[1] + 4) + 0x10))(local_5c[1],local_5c[5])
                            ;
                            iVar3 = FUN_0001fe2c(local_5c[4]);
                            if (iVar3 != 0) {
                              local_5c[7] = 0;
                              *param_7 = local_5c;
                              return 0;
                            }
                            if (*(int *)(local_5c[4] + 0x28) == 0) {
                              local_14 = 0x7f2bb73c;
                              local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                            }
                            else {
                              FUN_000150f4(local_5c);
                              local_48 = *(uint *)(local_5c[4] + 0x20);
                              if ((local_48 != 0) &&
                                 (iVar3 = FUN_00042d5c(0x400 << (*(uint *)(local_5c[4] + 0x1c) &
                                                                0xff),
                                                       0x400 << (*(uint *)(local_5c[4] + 0x18) &
                                                                0xff)),
                                 local_48 <= (uint)(iVar3 * 0xfff8))) {
                                uVar5 = local_5c[10];
                                if (*(int *)(local_5c[4] + 0x4c) == 0) {
                                  uVar6 = 0x80;
                                }
                                else {
                                  uVar6 = *(undefined2 *)(local_5c[4] + 0x58);
                                }
                                iVar3 = FUN_00042d5c(0x400 << (*(uint *)(local_5c[4] + 0x18) & 0xff)
                                                     ,uVar6);
                                if (uVar5 <= 0x10000U - iVar3) {
                                  if ((*(uint *)(local_5c[4] + 0x60) & 0x80) == 0) {
                                    uVar6 = 0x20;
                                  }
                                  else {
                                    uVar6 = *(undefined2 *)(local_5c[4] + 0xfe);
                                  }
                                  iVar3 = FUN_00042d5c(0x400 << (*(uint *)(local_5c[4] + 0x18) &
                                                                0xff),uVar6);
                                  if (iVar3 != 0) {
                                    uVar5 = *(uint *)(local_5c[4] + 0x14);
                                    uVar9 = FUN_00012c48(local_5c[4]);
                                    iVar3 = (int)((ulonglong)uVar9 >> 0x20);
                                    bVar8 = iVar3 == 0;
                                    if (iVar3 == 0) {
                                      bVar8 = (uint)uVar9 <= uVar5;
                                    }
                                    if (!bVar8) {
                                      uVar9 = FUN_00012c48(local_5c[4]);
                                      local_50 = FUN_00019070((uint)uVar9 -
                                                              *(uint *)(local_5c[4] + 0x14),
                                                              (int)((ulonglong)uVar9 >> 0x20) -
                                                              (uint)((uint)uVar9 <
                                                                    *(uint *)(local_5c[4] + 0x14)),
                                                              local_48,0);
                                      if ((int)((ulonglong)local_50 >> 0x20) == 0) {
                                        local_5c[7] = (int)local_50;
                                        if (*(int *)(local_5c[4] + 0x28) * local_5c[7] -
                                            *(int *)local_5c[4] == 0) {
                                          uVar7 = local_5c[7];
                                          if ((*(uint *)(local_5c[4] + 0x60) & 0x80) == 0) {
                                            uVar6 = 0x20;
                                          }
                                          else {
                                            uVar6 = *(undefined2 *)(local_5c[4] + 0xfe);
                                          }
                                          uVar4 = FUN_00042d5c(0x400 << (*(uint *)(local_5c[4] +
                                                                                  0x18) & 0xff),
                                                               uVar6);
                                          puVar1 = local_5c;
                                          uVar7 = FUN_00019020(uVar7,uVar4);
                                          puVar1[8] = uVar7;
                                          local_14 = FUN_00018b38(local_5c[8],local_5c[5],
                                                                  local_5c + 9);
                                          if (local_14 == 0) {
                                            if ((int)local_30 == 0 && local_30._4_4_ == 0) {
                                              local_30 = (ulonglong)*(uint *)(local_5c[4] + 0x14);
                                            }
                                            if (((int)local_30 == 0 && local_30._4_4_ == 0) &&
                                               (local_5c[5] == 0x400)) {
                                              local_38 = 1;
                                            }
                                            local_34 = local_5c[9];
                                            iVar3 = FUN_0001fe68(local_5c[4]);
                                            if (iVar3 == 0) {
                                              local_1c = local_5c[8];
                                            }
                                            else {
                                              local_1c = *(uint *)(local_5c[4] + 0x104);
                                              if ((uint)local_5c[8] < local_1c) {
                                                local_1c = local_5c[8];
                                              }
                                            }
                                            if (local_1c != 0) {
                                              local_14 = (**(code **)(*(int *)(local_5c[1] + 4) +
                                                                     0x14))(local_5c[1],
                                                                            (int)local_30 + local_38
                                                                            + 1,local_1c,local_34);
                                              if (local_14 != 0) goto LAB_000212c8;
                                              local_34 = local_34 + local_1c * local_5c[5];
                                              local_14 = 0;
                                            }
                                            for (local_18 = local_1c; local_18 < (uint)local_5c[8];
                                                local_18 = local_18 + 1) {
                                              uVar9 = FUN_0001ff7c(local_5c,local_5c,(int)local_30,
                                                                   local_30._4_4_,local_18);
                                              local_58 = uVar9;
                                              FUN_0001d92c(local_5c[1],local_5c[1],(int)uVar9,
                                                           (int)((ulonglong)uVar9 >> 0x20),1,0);
                                            }
                                            for (local_18 = local_1c; local_18 < (uint)local_5c[8];
                                                local_18 = local_18 + 1) {
                                              uVar9 = FUN_0001ff7c(local_5c,local_5c,(int)local_30,
                                                                   local_30._4_4_,local_18);
                                              local_58 = uVar9;
                                              local_14 = FUN_0001d5d4(local_5c[1],local_5c[1],
                                                                      (int)uVar9,
                                                                      (int)((ulonglong)uVar9 >> 0x20
                                                                           ),1,local_34);
                                              if (local_14 != 0) goto LAB_000212c8;
                                              local_34 = local_34 + local_5c[5];
                                              local_14 = 0;
                                            }
                                            local_5c[0x14] = (uint)*(ushort *)(local_5c[4] + 0x164);
                                            if (1 < local_70) {
                                              iVar3 = FUN_0001ff1c(local_5c);
                                              if (iVar3 != 0) {
                                                for (local_3c = 0; local_3c < (uint)local_5c[7];
                                                    local_3c = local_3c + 1) {
                                                  FUN_000139a4(local_5c,local_3c,2);
                                                  FUN_000139a4(local_5c,local_3c,1);
                                                  FUN_000137e0(local_5c,local_3c,0);
                                                  FUN_00016d8c(local_5c,local_3c);
                                                }
                                                if ((local_5c[2] & 1) != 0) {
                                                  FUN_00018d14(local_5c);
                                                }
                                              }
                                            }
                                            iVar3 = FUN_0001fee0(local_5c[4]);
                                            if (((iVar3 != 0) && ((param_3 & 0x100000) == 0)) &&
                                               ((param_3 & 0x4001) != 0)) {
                                              local_14 = FUN_0001f75c(local_5c);
                                              if (local_14 != 0) {
                                                local_5c[2] = local_5c[2] | 0x100000;
                                                FUN_0001faa8(local_5c);
                                                goto LAB_000212c8;
                                              }
                                            }
                                            local_5c[2] = local_5c[2] & 0xfffeffff;
                                            *param_7 = local_5c;
                                            return 0;
                                          }
                                        }
                                        else {
                                          local_14 = 0x7f2bb73c;
                                        }
                                      }
                                      else {
                                        local_14 = 0x7f2bb73c;
                                        local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                                      }
                                      goto LAB_000212c8;
                                    }
                                  }
                                }
                              }
                              local_14 = 0x7f2bb73c;
                              local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                            }
                          }
                          else {
                            local_14 = 0x7f2bb722;
                            local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                            local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                          }
                        }
                        else {
                          local_14 = 0x7f2bb73c;
                          local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                          local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                        }
                      }
                    }
                  }
                  else {
                    local_14 = 0x7f2bb789;
                    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                    local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                  }
                }
                else {
                  local_14 = 0x7f2bb73c;
                  local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                  local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                }
              }
              else {
                local_14 = 0x7f2bb714;
                local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
              }
            }
          }
          else {
            local_14 = 0x7f2bb750;
            local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
            local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
          }
        }
      }
    }
  }
LAB_000212c8:
  if ((param_3 & 0x10000) == 0) {
    FUN_00017af0(local_5c);
    local_5c = (undefined4 *)0x0;
  }
  *param_7 = local_5c;
  return local_14;
}



/* ===== FUN_000213f8 @ 000213f8 size=360 ===== */

int FUN_000213f8(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x2000) == 0) {
    iVar1 = 0x7f2bb75c;
  }
  else {
    iVar1 = (**(code **)(*(int *)(param_2 + 4) + 0x10))(param_2,*(undefined4 *)(param_1 + 0x14));
    if (iVar1 == 0) {
      if ((param_2 == *(int *)(param_1 + 0x88)) || (param_2 == *(int *)(param_1 + 4))) {
        iVar1 = 0;
      }
      else {
        if ((*(int *)(param_1 + 0x88) != *(int *)(param_1 + 4)) && (*(int *)(param_1 + 0x88) != 0))
        {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x88) + 4) + 0xc))
                    (*(undefined4 *)(param_1 + 0x88));
        }
        if (*(int *)(param_1 + 4) != 0) {
          (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xc))(*(undefined4 *)(param_1 + 4));
        }
        *(int *)(param_1 + 0x88) = param_2;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x88);
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x35;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffdfff;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_00021560 @ 00021560 size=60 ===== */

bool FUN_00021560(int param_1)

{
  return (*(uint *)(param_1 + 100) & 8) != 0;
}



/* ===== FUN_0002159c @ 0002159c size=224 ===== */

undefined4
FUN_0002159c(int param_1,uint *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if ((-1 < param_4) && (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) <= *param_2)) {
    uVar3 = *param_2;
    uVar5 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    bVar4 = iVar2 == 0;
    if (iVar2 == 0) {
      bVar4 = (uint)uVar5 <= uVar3;
    }
    if (!bVar4) {
      uVar1 = FUN_00027aa4(*param_7,*param_2,*param_7,*param_2,param_3);
      param_7[1] = uVar1;
      if (param_7[1] == 0) {
        return 0;
      }
      return 2;
    }
  }
  return 0;
}



/* ===== FUN_0002167c @ 0002167c size=396 ===== */

int FUN_0002167c(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_98 [28];
  int local_7c;
  uint local_78;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  if (*param_1 != 0x7f2bb701) {
    return 0x7f2bb701;
  }
  if (*param_2 == 0) {
    local_10 = FUN_0001c9f4(param_1,1,auStack_98);
    if (local_10 != 0) {
      return local_10;
    }
    local_c = local_7c;
    iVar1 = FUN_00021560(param_1[4]);
    if ((iVar1 == 0) || ((local_78 & 0x40000) == 0)) {
      local_c = FUN_00042c94(local_c,(uint)param_1[5] >> 9);
    }
    local_c = local_c + 0x14;
    if (local_c < 0x32) {
      local_c = 0x32;
    }
    if (50000 < local_c) {
      local_c = 500;
    }
    local_10 = FUN_00027724(param_2,local_c);
    if (local_10 != 0) {
      return local_10;
    }
  }
  local_18 = *param_2;
  local_14 = 0;
  iVar1 = FUN_0002aef0(param_1,1,8,0,FUN_0002159c,&local_18);
  if (iVar1 != 0) {
    local_14 = iVar1;
  }
  return local_14;
}



/* ===== FUN_00021808 @ 00021808 size=60 ===== */

bool FUN_00021808(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_00021844 @ 00021844 size=60 ===== */

bool FUN_00021844(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_00021880 @ 00021880 size=96 ===== */

undefined4 FUN_00021880(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00021844(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00021808(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_000218e0 @ 000218e0 size=1544 ===== */

int FUN_000218e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint extraout_r2;
  int extraout_r3;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *local_48;
  void *local_44;
  undefined8 local_40;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int iStack_24;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_44 = (void *)0x0;
  local_48 = (void *)0x0;
  local_28 = *(uint *)(param_1[4] + 0x14) >> (param_1[0x19] & 0xffU);
  iStack_24 = 0;
  local_2c = 1;
  if (*param_1 != 0x7f2bb701) {
    return 0x7f2bb701;
  }
  if ((param_1[2] & 1U) == 0) {
    return 0x7f2bb715;
  }
  local_30 = FUN_00021880(param_1);
  local_14 = 0;
  local_18 = 0;
  if (param_3 == 0) {
LAB_000219f4:
    if (param_2 != 0) {
      local_18 = *(int *)(param_1[4] + 0x28) + 7U >> 3;
      local_1c = FUN_0001d87c(param_1[1],0,&local_48);
      if (local_1c != 0) goto LAB_00021ea8;
      memset(local_48,0xff,param_1[5]);
    }
    for (local_c = 0; local_c < (uint)param_1[7]; local_c = local_c + 1) {
      if (param_3 != 0) {
        if (local_30 == 0) {
LAB_00021a98:
          local_1c = FUN_00028bf4(param_1[0xc],param_1[0xc],local_28,iStack_24,local_14 << 3,
                                  local_44);
          if (local_1c != 0) goto LAB_00021ea8;
          if (local_c == param_1[7] - 1U) {
            uVar5 = FUN_00012c48(param_1[4]);
            FUN_00043218((uint)uVar5 - *(uint *)(param_1[4] + 0x14),
                         (int)((ulonglong)uVar5 >> 0x20) -
                         (uint)((uint)uVar5 < *(uint *)(param_1[4] + 0x14)),
                         *(undefined4 *)(param_1[4] + 0x20),0);
            iVar1 = (1 << (param_1[0x19] & 0xffU)) + -1;
            uVar5 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
            uVar3 = (int)((ulonglong)uVar5 >> 0x20) + extraout_r3 +
                    (uint)CARRY4((uint)uVar5,extraout_r2);
            uVar2 = param_1[0x19];
            local_34 = (uint)uVar5 + extraout_r2 >> (uVar2 & 0xff) | uVar3 << (0x20 - uVar2 & 0xff)
                       | uVar3 >> (uVar2 - 0x20 & 0xff);
            uVar2 = local_34;
            if (local_34 != 0) {
              while (local_10 = uVar2, local_10 < (uint)(param_1[5] << 3)) {
                FUN_00028c34(local_10,local_44);
                uVar2 = local_10 + 1;
              }
            }
          }
          local_1c = FUN_000166f8(param_1,local_c,local_44,local_14);
          if (local_1c != 0) {
            return local_1c;
          }
          FUN_00016d8c(param_1,local_c);
          param_1[2] = param_1[2] | 4;
          lVar6 = FUN_000130a4(param_1,local_c);
          local_40 = lVar6;
          if (lVar6 != 0) {
            local_1c = FUN_0001d6a0(param_1[1],param_1[1],(int)lVar6,(int)((ulonglong)lVar6 >> 0x20)
                                    ,1,local_44);
            if (local_1c != 0) {
              local_1c = 0x7f2bb71d;
              goto LAB_00021ea8;
            }
          }
        }
        else {
          iVar1 = FUN_000138ec(param_1,local_c,2);
          if (iVar1 == 0) goto LAB_00021a98;
        }
        uVar5 = VectorShiftRight(CONCAT44(local_14 << 3,local_14 << 3),0x20);
        bVar4 = CARRY4((uint)uVar5,local_28);
        local_28 = (uint)uVar5 + local_28;
        iStack_24 = (int)((ulonglong)uVar5 >> 0x20) + iStack_24 + (uint)bVar4;
      }
      if (param_2 != 0) {
        if (local_30 == 0) {
LAB_00021cf4:
          local_1c = FUN_00028adc(param_1[0xb],local_48,local_2c,0,local_18 << 3,local_48);
          if (local_1c != 0) goto LAB_00021ea8;
          local_1c = FUN_00016554(param_1,local_c,local_48,local_18);
          if (local_1c != 0) goto LAB_00021ea8;
          FUN_00016d8c(param_1,local_c);
          param_1[2] = param_1[2] | 4;
          lVar6 = FUN_00013238(param_1,local_c);
          local_40 = lVar6;
          if (lVar6 != 0) {
            local_1c = FUN_0001d6a0(param_1[1],param_1[1],(int)lVar6,(int)((ulonglong)lVar6 >> 0x20)
                                    ,1,local_48);
            if (local_1c != 0) {
              local_1c = 0x7f2bb71b;
              goto LAB_00021ea8;
            }
          }
        }
        else {
          iVar1 = FUN_000138ec(param_1,local_c,1);
          if (iVar1 == 0) goto LAB_00021cf4;
        }
        local_2c = local_2c + local_18 * 8;
      }
    }
    if (param_3 != 0) {
      param_1[2] = param_1[2] & 0xffffffdf;
      FUN_00018c58(&local_44);
    }
    if (param_2 != 0) {
      param_1[2] = param_1[2] & 0xffffffef;
      FUN_00018c58(&local_48);
    }
    local_1c = 0;
  }
  else {
    local_14 = *(uint *)(param_1[4] + 0x24) >> 3;
    local_1c = FUN_0001d87c(param_1[1],0,&local_44);
    if (local_1c == 0) {
      memset(local_44,0xff,param_1[5]);
      goto LAB_000219f4;
    }
LAB_00021ea8:
    if (local_48 != (void *)0x0) {
      FUN_00018c58(&local_48);
    }
    if (local_44 != (void *)0x0) {
      FUN_00018c58(&local_44);
    }
  }
  return local_1c;
}



/* ===== FUN_00021ee8 @ 00021ee8 size=272 ===== */

undefined4 FUN_00021ee8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint local_c;
  
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  for (local_c = 0; local_c < *(uint *)(param_1 + 0x1c); local_c = local_c + 1) {
    iVar1 = FUN_000138ec(param_1,local_c,2);
    if (iVar1 != 0) {
      FUN_00026b2c(param_1,local_c,uVar3);
      lVar4 = FUN_00013354(param_1,local_c);
      uVar2 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        FUN_0003a93c(uVar3,uVar2,(int)lVar4,uVar2,*(undefined4 *)(param_1 + 0x28));
      }
      lVar4 = FUN_000130a4(param_1,local_c);
      uVar2 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        FUN_00018504(uVar3,uVar2,(int)lVar4,uVar2);
      }
      lVar4 = FUN_00013238(param_1,local_c);
      uVar2 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        FUN_00018504(uVar3,uVar2,(int)lVar4,uVar2);
      }
    }
  }
  return 0;
}



/* ===== FUN_00021ff8 @ 00021ff8 size=2576 ===== */

int FUN_00021ff8(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  char *local_50;
  void *local_4c;
  void *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  uint local_30;
  int iStack_2c;
  undefined8 local_28;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  local_48 = (void *)0x0;
  local_4c = (void *)0x0;
  local_14 = *(uint *)(param_1[4] + 0x24) >> 3;
  local_18 = *(uint *)(param_1[4] + 0x28) >> 3;
  local_30 = *(uint *)(param_1[4] + 0x14) >> (param_1[0x19] & 0xffU);
  iStack_2c = 0;
  local_3c = 1;
  if (*param_1 != 0x7f2bb701) {
    return 0x7f2bb701;
  }
  if ((param_1[5] < (int)local_14) || (param_1[5] < (int)local_18)) {
    return 0x7f2bb73c;
  }
  param_1[0xf] = (int)FUN_00022b50;
  local_44 = FUN_00021880(param_1);
  sVar4 = strlen((char *)param_1[3]);
  local_10 = FUN_00018a74(sVar4 + 0x50,&local_50);
  if (local_10 != 0) {
    return local_10;
  }
  if (param_3 == 0) {
    local_14 = 0;
    local_10 = 0;
LAB_00022200:
    if (param_2 == 0) {
      local_18 = 0;
    }
    else {
      if (param_1[0xb] != 0) {
        FUN_00028134(param_1[0xb]);
      }
      uVar3 = s_inode_bitmap_for_000454b0._12_4_;
      uVar2 = s_inode_bitmap_for_000454b0._8_4_;
      uVar1 = s_inode_bitmap_for_000454b0._4_4_;
      *(undefined4 *)local_50 = s_inode_bitmap_for_000454b0._0_4_;
      *(undefined4 *)(local_50 + 4) = uVar1;
      *(undefined4 *)(local_50 + 8) = uVar2;
      *(undefined4 *)(local_50 + 0xc) = uVar3;
      *(undefined2 *)(local_50 + 0x10) = s_inode_bitmap_for_000454b0._16_2_;
      strcat(local_50,(char *)param_1[3]);
      local_10 = FUN_000281d0(param_1,local_50,param_1 + 0xb);
      if ((local_10 != 0) || (local_10 = FUN_0001d87c(param_1[1],0,&local_4c), local_10 != 0))
      goto LAB_00022960;
    }
    FUN_00018c58(&local_50);
    if ((param_1[2] & 0x2000U) == 0) {
      for (local_c = 0; local_c < (uint)param_1[7]; local_c = local_c + 1) {
        if (local_48 != (void *)0x0) {
          local_28 = FUN_000130a4(param_1,local_c);
          if (((local_44 != 0) && (iVar6 = FUN_000138ec(param_1,local_c,2), iVar6 != 0)) &&
             (iVar6 = FUN_00016d20(param_1,local_c), iVar6 != 0)) {
            local_28 = 0;
          }
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) {
            memset(local_48,0,local_14);
          }
          else {
            local_10 = FUN_0001d5d4(param_1[1],param_1[1],(uint)local_28,local_28._4_4_,1,local_48);
            if (local_10 != 0) {
              local_10 = 0x7f2bb71e;
              goto LAB_00022960;
            }
            if (((param_1[2] & 0x200000U) == 0) &&
               (iVar6 = FUN_00016614(param_1,local_c,local_48,local_14), iVar6 == 0)) {
              local_10 = 0x7f2bb79c;
              goto LAB_00022960;
            }
          }
          local_1c = local_14 << 3;
          local_10 = FUN_00028b68(param_1[0xc],param_1[0xc],local_30,iStack_2c,local_1c,local_48);
          if (local_10 != 0) goto LAB_00022960;
          uVar8 = VectorShiftRight(CONCAT44(local_14 << 3,local_14 << 3),0x20);
          bVar7 = CARRY4((uint)uVar8,local_30);
          local_30 = (uint)uVar8 + local_30;
          iStack_2c = (int)((ulonglong)uVar8 >> 0x20) + iStack_2c + (uint)bVar7;
          local_10 = 0;
        }
        if (local_4c != (void *)0x0) {
          local_28 = FUN_00013238(param_1,local_c);
          if (((local_44 != 0) && (iVar6 = FUN_000138ec(param_1,local_c,1), iVar6 != 0)) &&
             (iVar6 = FUN_00016d20(param_1,local_c), iVar6 != 0)) {
            local_28 = 0;
          }
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) {
            memset(local_4c,0,local_18);
          }
          else {
            local_10 = FUN_0001d5d4(param_1[1],param_1[1],(uint)local_28,local_28._4_4_,1,local_4c);
            if (local_10 != 0) {
              local_10 = 0x7f2bb71c;
              goto LAB_00022960;
            }
            if (((param_1[2] & 0x200000U) == 0) &&
               (iVar6 = FUN_00016470(param_1,local_c,local_4c,local_18), iVar6 == 0)) {
              local_10 = 0x7f2bb793;
              goto LAB_00022960;
            }
          }
          local_1c = local_18 << 3;
          local_10 = FUN_00028a50(param_1[0xb],local_1c,local_3c,0,local_1c,local_4c);
          if (local_10 != 0) goto LAB_00022960;
          local_3c = local_3c + local_18 * 8;
          local_10 = 0;
        }
      }
      if ((param_3 != 0) && (local_10 = FUN_00021ee8(param_1), local_10 != 0)) goto LAB_00022960;
    }
    else {
      uVar5 = FUN_00042c94(*(undefined4 *)(param_1[0x16] + 0x124),param_1[5]);
      local_28 = (ulonglong)uVar5;
      local_40 = *(uint *)param_1[4];
      for (; 0 < (int)local_18; local_18 = local_18 - param_1[5]) {
        local_28 = CONCAT44(local_28._4_4_ + (uint)(0xfffffffe < (uint)local_28),(uint)local_28 + 1)
        ;
        local_10 = FUN_0001d5d4(param_1[0x22]);
        if (local_10 != 0) goto LAB_00022960;
        local_1c = param_1[5] << 3;
        if (local_40 < local_1c) {
          local_1c = local_40;
        }
        local_10 = FUN_00028a50(param_1[0xb],local_1c,local_3c,0,local_1c,local_4c);
        if (local_10 != 0) goto LAB_00022960;
        local_3c = local_3c + param_1[5] * 8;
        local_40 = local_40 + param_1[5] * -8;
        local_10 = 0;
      }
      uVar5 = FUN_00042c94(*(undefined4 *)(param_1[0x16] + 0x128),param_1[5]);
      local_28 = (ulonglong)uVar5;
      local_38 = (ulonglong)(uint)param_1[7] * (ulonglong)*(uint *)(param_1[4] + 0x24);
      for (; 0 < (int)local_14; local_14 = local_14 - param_1[5]) {
        local_28 = CONCAT44(local_28._4_4_ + (uint)(0xfffffffe < (uint)local_28),(uint)local_28 + 1)
        ;
        local_10 = FUN_0001d5d4(param_1[0x22]);
        if (local_10 != 0) goto LAB_00022960;
        local_1c = param_1[5] << 3;
        if (local_38._4_4_ == 0 && (uint)local_38 < local_1c) {
          local_1c = (uint)local_38;
        }
        local_10 = FUN_00028b68(param_1[0xc],param_1[0xc],local_30,iStack_2c,local_1c,local_48);
        if (local_10 != 0) goto LAB_00022960;
        uVar8 = VectorShiftRight(CONCAT44(param_1[5] << 3,param_1[5] << 3),0x20);
        bVar7 = CARRY4((uint)uVar8,local_30);
        local_30 = (uint)uVar8 + local_30;
        iStack_2c = (int)((ulonglong)uVar8 >> 0x20) + iStack_2c + (uint)bVar7;
        uVar8 = VectorShiftRight(CONCAT44(param_1[5] << 3,param_1[5] << 3),0x20);
        local_38 = CONCAT44(local_38._4_4_ -
                            ((int)((ulonglong)uVar8 >> 0x20) + (uint)((uint)local_38 < (uint)uVar8))
                            ,(uint)local_38 - (uint)uVar8);
        local_10 = 0;
      }
    }
    if (local_4c != (void *)0x0) {
      FUN_00018c58(&local_4c);
    }
    if (local_48 != (void *)0x0) {
      FUN_00018c58(&local_48);
    }
    local_10 = 0;
  }
  else {
    if (param_1[0xc] != 0) {
      FUN_00028158(param_1[0xc]);
    }
    uVar3 = s_block_bitmap_for_0004549c._12_4_;
    uVar2 = s_block_bitmap_for_0004549c._8_4_;
    uVar1 = s_block_bitmap_for_0004549c._4_4_;
    *(undefined4 *)local_50 = s_block_bitmap_for_0004549c._0_4_;
    *(undefined4 *)(local_50 + 4) = uVar1;
    *(undefined4 *)(local_50 + 8) = uVar2;
    *(undefined4 *)(local_50 + 0xc) = uVar3;
    *(undefined2 *)(local_50 + 0x10) = s_block_bitmap_for_0004549c._16_2_;
    strcat(local_50,(char *)param_1[3]);
    local_10 = FUN_00028354(param_1,local_50,param_1 + 0xc);
    if ((local_10 == 0) && (local_10 = FUN_0001d87c(param_1[1],0,&local_48), local_10 == 0))
    goto LAB_00022200;
LAB_00022960:
    if (param_3 != 0) {
      FUN_00018c58(param_1 + 0xc);
      param_1[0xc] = 0;
    }
    if (param_2 != 0) {
      FUN_00018c58(param_1 + 0xb);
      param_1[0xb] = 0;
    }
    if (local_4c != (void *)0x0) {
      FUN_00018c58(&local_4c);
    }
    if (local_48 != (void *)0x0) {
      FUN_00018c58(&local_48);
    }
    if (local_50 != (char *)0x0) {
      FUN_00018c58(&local_50);
    }
  }
  return local_10;
}



/* ===== FUN_00022a08 @ 00022a08 size=48 ===== */

undefined4 FUN_00022a08(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021ff8(param_1,1,0);
  return uVar1;
}



/* ===== FUN_00022a38 @ 00022a38 size=48 ===== */

undefined4 FUN_00022a38(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021ff8(param_1,0,1);
  return uVar1;
}



/* ===== FUN_00022a68 @ 00022a68 size=48 ===== */

undefined4 FUN_00022a68(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000218e0(param_1,1,0);
  return uVar1;
}



/* ===== FUN_00022a98 @ 00022a98 size=48 ===== */

undefined4 FUN_00022a98(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000218e0(param_1,0,1);
  return uVar1;
}



/* ===== FUN_00022ac8 @ 00022ac8 size=136 ===== */

undefined4 FUN_00022ac8(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(param_1 + 0x30) == 0)) {
    uVar1 = FUN_00021ff8(param_1,*(int *)(param_1 + 0x2c) == 0,*(int *)(param_1 + 0x30) == 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022b50 @ 00022b50 size=184 ===== */

undefined4 FUN_00022b50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x2c) == 0) || (iVar1 = FUN_00018ea4(param_1), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if ((*(int *)(param_1 + 0x30) == 0) || (iVar2 = FUN_00018ed0(param_1), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  if ((iVar1 == 0) && (iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_000218e0(param_1,iVar1,iVar2);
  }
  return uVar3;
}



/* ===== FUN_00022c08 @ 00022c08 size=56 ===== */

bool FUN_00022c08(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_00022ce0 @ 00022ce0 size=144 ===== */

undefined4 FUN_00022ce0(undefined4 param_1)

{
  __uid_t _Var1;
  __uid_t _Var2;
  __gid_t _Var3;
  __gid_t _Var4;
  int iVar5;
  undefined4 uVar6;
  
  _Var1 = getuid();
  _Var2 = geteuid();
  if (_Var1 == _Var2) {
    _Var3 = getgid();
    _Var4 = getegid();
    if (_Var3 == _Var4) {
      iVar5 = prctl(3,0,0,0,0);
      if (iVar5 == 0) {
        return 0;
      }
      uVar6 = secure_getenv(param_1);
      return uVar6;
    }
  }
  return 0;
}



/* ===== FUN_00022d70 @ 00022d70 size=1148 ===== */

int FUN_00022d70(int param_1,int param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  uint uVar1;
  int *piVar2;
  ssize_t sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint local_24;
  void *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  local_1c = 0;
  local_20 = param_6;
  local_24 = 0;
  if (param_5 < 0) {
    local_18 = -param_5;
  }
  else {
    local_18 = param_5 * *(int *)(param_1 + 0xc);
  }
  uVar1 = *(uint *)(param_2 + 0xf0);
  *(uint *)(param_2 + 0xf0) = local_18 + uVar1;
  *(uint *)(param_2 + 0xf4) =
       ((int)local_18 >> 0x1f) + *(int *)(param_2 + 0xf4) + (uint)CARRY4(local_18,uVar1);
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar1);
  iVar4 = uVar6 + *(uint *)(param_2 + 0x18);
  iVar5 = param_3 * ((int)uVar1 >> 0x1f) + uVar1 * param_4 +
          (int)((ulonglong)param_3 * (ulonglong)uVar1 >> 0x20) + *(int *)(param_2 + 0x1c) +
          (uint)CARRY4(uVar6,*(uint *)(param_2 + 0x18));
  if ((*(uint *)(param_2 + 8) & 8) == 0) {
    if (((*(int *)(param_1 + 0x60) == 0) ||
        ((((uint)param_6 & *(int *)(param_1 + 0x60) - 1U) == 0 &&
         ((local_18 & *(int *)(param_1 + 0x60) - 1U) == 0)))) &&
       (uVar1 = pread64(*(int *)(param_2 + 4),param_6,local_18,CONCAT44(iVar5,iVar4)),
       uVar1 == local_18)) {
      return 0;
    }
    local_1c = 0;
    lVar7 = FUN_0003c9c8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),iVar4,iVar5,0);
    if (lVar7 != CONCAT44(iVar5,iVar4)) {
      piVar2 = __errno_location();
      if (*piVar2 == 0) {
        local_14 = 0x7f2bb745;
      }
      else {
        piVar2 = __errno_location();
        local_14 = *piVar2;
      }
      goto LAB_00023154;
    }
    if ((*(int *)(param_1 + 0x60) != 0) &&
       ((((uint)param_6 & *(int *)(param_1 + 0x60) - 1U) != 0 ||
        ((local_18 & *(int *)(param_1 + 0x60) - 1U) != 0)))) goto LAB_00023140;
    local_1c = read(*(int *)(param_2 + 4),param_6,local_18);
    if (local_1c == local_18) {
      return 0;
    }
  }
  else {
    lVar7 = FUN_0003c9c8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),iVar4,iVar5,0);
    if (lVar7 != CONCAT44(iVar5,iVar4)) {
      piVar2 = __errno_location();
      if (*piVar2 == 0) {
        local_14 = 0x7f2bb745;
      }
      else {
        piVar2 = __errno_location();
        local_14 = *piVar2;
      }
      goto LAB_00023154;
    }
LAB_00023140:
    while( true ) {
      if ((int)local_18 < 1) {
        return 0;
      }
      sVar3 = read(*(int *)(param_2 + 4),*(void **)(param_2 + 0xe0),*(size_t *)(param_1 + 0xc));
      if (sVar3 != *(int *)(param_1 + 0xc)) break;
      local_1c = local_18;
      if (*(int *)(param_1 + 0xc) < (int)local_18) {
        local_1c = *(size_t *)(param_1 + 0xc);
      }
      memcpy(local_20,*(void **)(param_2 + 0xe0),local_1c);
      local_24 = local_24 + local_1c;
      local_18 = local_18 - local_1c;
      local_20 = (void *)((int)local_20 + local_1c);
    }
    local_1c = local_24;
    local_20 = (void *)((int)local_20 - local_24);
    local_18 = local_18 + local_24;
  }
  if ((int)local_1c < 0) {
    piVar2 = __errno_location();
    local_14 = *piVar2;
    local_1c = 0;
  }
  else {
    local_14 = 0x7f2bb724;
  }
LAB_00023154:
  if ((-1 < (int)local_1c) && ((int)local_1c < (int)local_18)) {
    memset((void *)((int)local_20 + local_1c),0,local_18 - local_1c);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    local_14 = (**(code **)(param_1 + 0x10))
                         (param_1,param_3,param_5,local_20,local_18,local_1c,local_14);
  }
  return local_14;
}



/* ===== FUN_000231ec @ 000231ec size=1344 ===== */

int FUN_000231ec(int param_1,int param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  void *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int iStack_1c;
  uint local_14;
  
  local_24 = 0;
  local_2c = param_6;
  if (param_5 == 1) {
    local_14 = *(uint *)(param_1 + 0xc);
  }
  else if (param_5 < 0) {
    local_14 = -param_5;
  }
  else {
    local_14 = *(int *)(param_1 + 0xc) * param_5;
  }
  uVar1 = *(uint *)(param_2 + 0xf8);
  *(uint *)(param_2 + 0xf8) = local_14 + uVar1;
  *(uint *)(param_2 + 0xfc) =
       ((int)local_14 >> 0x1f) + *(int *)(param_2 + 0xfc) + (uint)CARRY4(local_14,uVar1);
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar1);
  local_20 = uVar3 + *(uint *)(param_2 + 0x18);
  iStack_1c = param_3 * ((int)uVar1 >> 0x1f) + uVar1 * param_4 +
              (int)((ulonglong)param_3 * (ulonglong)uVar1 >> 0x20) + *(int *)(param_2 + 0x1c) +
              (uint)CARRY4(uVar3,*(uint *)(param_2 + 0x18));
  if ((*(uint *)(param_2 + 8) & 8) == 0) {
    if (((*(int *)(param_1 + 0x60) == 0) ||
        ((((uint)param_6 & *(int *)(param_1 + 0x60) - 1U) == 0 &&
         ((local_14 & *(int *)(param_1 + 0x60) - 1U) == 0)))) &&
       (local_24 = pwrite64(*(int *)(param_2 + 4),param_6,local_14,CONCAT44(iStack_1c,local_20)),
       local_24 == local_14)) {
      return 0;
    }
    lVar5 = FUN_0003c9c8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),local_20,
                         iStack_1c,0);
    if (lVar5 != CONCAT44(iStack_1c,local_20)) {
      piVar2 = __errno_location();
      if (*piVar2 == 0) {
        local_28 = 0x7f2bb745;
      }
      else {
        piVar2 = __errno_location();
        local_28 = *piVar2;
      }
      goto LAB_000236d4;
    }
    if ((*(int *)(param_1 + 0x60) == 0) ||
       ((((uint)param_6 & *(int *)(param_1 + 0x60) - 1U) == 0 &&
        ((local_14 & *(int *)(param_1 + 0x60) - 1U) == 0)))) {
      local_24 = write(*(int *)(param_2 + 4),param_6,local_14);
      if ((int)local_24 < 0) {
        piVar2 = __errno_location();
        local_28 = *piVar2;
      }
      else {
        if (local_24 == local_14) {
          return 0;
        }
LAB_000234cc:
        local_28 = 0x7f2bb725;
      }
      goto LAB_000236d4;
    }
  }
  else {
    lVar5 = FUN_0003c9c8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),local_20,
                         iStack_1c,0);
    if (lVar5 != CONCAT44(iStack_1c,local_20)) {
      piVar2 = __errno_location();
      if (*piVar2 == 0) {
        local_28 = 0x7f2bb745;
      }
      else {
        piVar2 = __errno_location();
        local_28 = *piVar2;
      }
      goto LAB_000236d4;
    }
  }
  while( true ) {
    if ((int)local_14 < 1) {
      return 0;
    }
    if (((int)local_14 < *(int *)(param_1 + 0xc)) &&
       (local_24 = read(*(int *)(param_2 + 4),*(void **)(param_2 + 0xe0),*(size_t *)(param_1 + 0xc))
       , local_24 != *(uint *)(param_1 + 0xc))) {
      if ((int)local_24 < 0) {
        piVar2 = __errno_location();
        local_28 = *piVar2;
        goto LAB_000236d4;
      }
      memset((void *)(*(int *)(param_2 + 0xe0) + local_24),0,*(int *)(param_1 + 0xc) - local_24);
    }
    local_24 = local_14;
    if (*(int *)(param_1 + 0xc) < (int)local_14) {
      local_24 = *(size_t *)(param_1 + 0xc);
    }
    memcpy(*(void **)(param_2 + 0xe0),local_2c,local_24);
    lVar5 = FUN_0003c9c8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),local_20,
                         iStack_1c,0);
    if (lVar5 != CONCAT44(iStack_1c,local_20)) break;
    local_24 = write(*(int *)(param_2 + 4),*(void **)(param_2 + 0xe0),*(size_t *)(param_1 + 0xc));
    if ((int)local_24 < 0) {
      piVar2 = __errno_location();
      local_28 = *piVar2;
      goto LAB_000236d4;
    }
    if (local_24 != *(uint *)(param_1 + 0xc)) goto LAB_000234cc;
    local_14 = local_14 - local_24;
    local_2c = (void *)((int)local_2c + local_24);
    bVar4 = CARRY4(local_24,local_20);
    local_20 = local_24 + local_20;
    iStack_1c = ((int)local_24 >> 0x1f) + iStack_1c + (uint)bVar4;
  }
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    local_28 = 0x7f2bb745;
  }
  else {
    piVar2 = __errno_location();
    local_28 = *piVar2;
  }
LAB_000236d4:
  if (*(int *)(param_1 + 0x14) != 0) {
    local_28 = (**(code **)(param_1 + 0x14))
                         (param_1,param_3,param_5,local_2c,local_14,local_24,local_28);
  }
  return local_28;
}



/* ===== FUN_0002372c @ 0002372c size=332 ===== */

int FUN_0002372c(int param_1,int param_2)

{
  int iVar1;
  int local_14;
  int *local_10;
  int local_c;
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  local_14 = 0;
  local_10 = (int *)(param_2 + 0x20);
  while( true ) {
    if (7 < local_14) {
      if ((*(int *)(param_1 + 0x60) != 0) || ((*(uint *)(param_2 + 8) & 8) != 0)) {
        if (*(int *)(param_2 + 0xe0) != 0) {
          FUN_00018c58(param_2 + 0xe0);
        }
        local_c = FUN_0001d87c(param_1,0,param_2 + 0xe0);
      }
      return local_c;
    }
    local_10[2] = 0;
    local_10[3] = 0;
    local_10[4] = 0;
    *(byte *)(local_10 + 5) = *(byte *)(local_10 + 5) & 0xfe;
    *(byte *)(local_10 + 5) = *(byte *)(local_10 + 5) & 0xfd;
    if (*local_10 != 0) {
      FUN_00018c58(local_10);
    }
    iVar1 = FUN_0001d87c(param_1,0,local_10);
    if (iVar1 != 0) break;
    local_14 = local_14 + 1;
    local_10 = local_10 + 6;
    local_c = 0;
  }
  return iVar1;
}



/* ===== FUN_00023878 @ 00023878 size=216 ===== */

void FUN_00023878(int param_1)

{
  int local_10;
  int *local_c;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_c = (int *)(param_1 + 0x20);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    local_c[2] = 0;
    local_c[3] = 0;
    local_c[4] = 0;
    *(byte *)(local_c + 5) = *(byte *)(local_c + 5) & 0xfe;
    *(byte *)(local_c + 5) = *(byte *)(local_c + 5) & 0xfd;
    if (*local_c != 0) {
      FUN_00018c58(local_c);
    }
    local_c = local_c + 6;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_00018c58(param_1 + 0xe0);
  }
  return;
}



/* ===== FUN_00023950 @ 00023950 size=328 ===== */

int FUN_00023950(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_10 = 0;
  local_18 = 0;
  local_c = param_1 + 0x20;
  do {
    if (7 < local_18) {
      if (param_5 != (int *)0x0) {
        if (local_10 != 0) {
          local_14 = local_10;
        }
        *param_5 = local_14;
      }
      return 0;
    }
    if ((*(byte *)(local_c + 0x14) & 2) == 0) {
      if (local_10 == 0) {
        local_10 = local_c;
      }
    }
    else {
      if (param_4 == *(int *)(local_c + 0xc) && param_3 == *(int *)(local_c + 8)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(undefined4 *)(local_c + 0x10) = *(undefined4 *)(param_1 + 0x10);
        return local_c;
      }
      if ((local_14 == 0) || (*(int *)(local_c + 0x10) < *(int *)(local_14 + 0x10))) {
        local_14 = local_c;
      }
    }
    local_18 = local_18 + 1;
    local_c = local_c + 0x18;
  } while( true );
}



/* ===== FUN_00023a98 @ 00023a98 size=204 ===== */

void FUN_00023a98(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  if (((*(byte *)(param_3 + 5) & 1) != 0) && ((*(byte *)(param_3 + 5) & 2) != 0)) {
    FUN_000231ec(param_1,param_2,param_3[2],param_3[3],1,*param_3);
  }
  *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
  *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) & 0xfe;
  param_3[2] = param_5;
  param_3[3] = param_6;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  param_3[4] = *(undefined4 *)(param_2 + 0x10);
  return;
}



/* ===== FUN_00023b64 @ 00023b64 size=284 ===== */

int FUN_00023b64(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int local_14;
  int local_10;
  undefined4 *local_c;
  
  local_10 = 0;
  local_c = (undefined4 *)(param_2 + 0x20);
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    iVar1 = local_10;
    if ((*(byte *)(local_c + 5) & 2) != 0) {
      if (param_3 != 0) {
        *(byte *)(local_c + 5) = *(byte *)(local_c + 5) & 0xfd;
      }
      if (((*(byte *)(local_c + 5) & 1) != 0) &&
         (iVar1 = FUN_000231ec(param_1,param_2,local_c[2],local_c[3],1,*local_c), iVar1 == 0)) {
        *(byte *)(local_c + 5) = *(byte *)(local_c + 5) & 0xfe;
        iVar1 = local_10;
      }
    }
    local_10 = iVar1;
    local_c = local_c + 6;
  }
  return local_10;
}



/* ===== FUN_00023c80 @ 00023c80 size=88 ===== */

int FUN_00023c80(char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = open64(param_1,param_2);
  }
  else {
    iVar1 = open64(param_1,param_2,param_3);
  }
  return iVar1;
}



/* ===== FUN_00023cd8 @ 00023cd8 size=48 ===== */

int FUN_00023cd8(char *param_1,stat64 *param_2)

{
  int iVar1;
  
  iVar1 = stat64(param_1,param_2);
  return iVar1;
}



/* ===== FUN_00023d08 @ 00023d08 size=48 ===== */

int FUN_00023d08(int param_1,stat64 *param_2)

{
  int iVar1;
  
  iVar1 = fstat64(param_1,param_2);
  return iVar1;
}



/* ===== FUN_00023d38 @ 00023d38 size=1236 ===== */

/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int FUN_00023d38(char *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  uint local_234;
  rlimit64 local_228;
  int local_218;
  int local_214;
  utsname uStack_210;
  undefined1 auStack_88 [16];
  undefined4 local_78;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  
  local_1c = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  iVar2 = FUN_00022ce0("UNIX_IO_FORCE_BOUNCE");
  local_234 = param_3;
  if (iVar2 != 0) {
    local_234 = param_3 | 8;
  }
  local_14 = FUN_00018a74(100,&local_1c);
  if (local_14 == 0) {
    memset(local_1c,0,100);
    *local_1c = 0x7f2bb705;
    local_14 = FUN_00018a74(0x100,&local_20);
    if (local_14 == 0) {
      local_1c[1] = param_5;
      sVar3 = strlen(param_1);
      local_14 = FUN_00018a74(sVar3 + 1,local_1c + 2);
      if (local_14 == 0) {
        strcpy((char *)local_1c[2],param_1);
        local_1c[0x16] = local_20;
        local_1c[3] = 0x400;
        local_1c[4] = 0;
        local_1c[5] = 0;
        local_1c[6] = 1;
        memset(local_20,0,0x100);
        puVar1 = local_1c;
        *local_20 = 0x7f2bb706;
        local_20[0x3a] = 2;
        local_20[2] = local_234;
        local_20[1] = param_2;
        if ((local_234 & 4) != 0) {
          uVar4 = FUN_0003b820(local_20[1]);
          puVar1[0x18] = uVar4;
        }
        iVar2 = FUN_00023d08(local_20[1],auStack_88);
        if (iVar2 == 0) {
          iVar2 = FUN_00022c08(local_78);
          if (iVar2 == 0) {
            local_1c[7] = local_1c[7] | 2;
          }
          else {
            local_1c[7] = local_1c[7] | 4;
          }
        }
        local_214 = 0;
        iVar2 = ioctl(local_20[1],0x127c,&local_214);
        if ((iVar2 == 0) && (local_214 != 0)) {
          local_1c[7] = local_1c[7] | 2;
        }
        local_14 = FUN_0002372c(local_1c,local_20);
        if (local_14 == 0) {
          if ((local_234 & 1) != 0) {
            local_218 = 0;
            local_18 = ioctl(local_20[1],0x125e,&local_218);
            if ((local_18 == 0) && (local_218 != 0)) {
              local_14 = 1;
              local_18 = 0;
              goto LAB_00024180;
            }
          }
          if (((((((local_234 & 1) != 0) && (iVar2 = uname(&uStack_210), iVar2 == 0)) &&
                (uStack_210.release[0] == '2')) &&
               ((uStack_210.release[1] == '.' && (uStack_210.release[2] == '4')))) &&
              ((uStack_210.release[3] == '.' &&
               ((uStack_210.release[4] == '1' && (0x2f < (byte)uStack_210.release[5])))))) &&
             (((byte)uStack_210.release[5] < 0x38 &&
              ((iVar2 = FUN_00023d08(local_20[1],auStack_88), iVar2 == 0 &&
               (iVar2 = FUN_00022c08(local_78), iVar2 != 0)))))) {
            local_228.rlim_max = 0xffffffff;
            local_228.rlim_cur._0_4_ = 0xffffffff;
            local_228.rlim_cur._4_4_ = 0;
            setrlimit64(RLIMIT_FSIZE,&local_228);
            getrlimit64(RLIMIT_FSIZE,&local_228);
            if ((uint)local_228.rlim_cur < (uint)local_228.rlim_max) {
              local_228.rlim_cur._0_4_ = (uint)local_228.rlim_max;
              local_228.rlim_cur._4_4_ = local_228.rlim_max._4_4_;
              setrlimit64(RLIMIT_FSIZE,&local_228);
            }
          }
          *param_4 = local_1c;
          return 0;
        }
      }
    }
  }
LAB_00024180:
  if (local_20 != (undefined4 *)0x0) {
    if (-1 < (int)local_20[1]) {
      close(local_20[1]);
    }
    FUN_00023878(local_20);
    FUN_00018c58(&local_20);
  }
  if (local_1c != (undefined4 *)0x0) {
    if (local_1c[2] != 0) {
      FUN_00018c58(local_1c + 2);
    }
    FUN_00018c58(&local_1c);
  }
  return local_14;
}



/* ===== FUN_0002420c @ 0002420c size=216 ===== */

undefined4 FUN_0002420c(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  
  iVar1 = atoi(param_1);
  uVar2 = fcntl64(iVar1,1);
  if (uVar2 == 0xffffffff) {
    uVar3 = 0xfffffff7;
  }
  else {
    bVar4 = (uVar2 & 2) != 0;
    if ((uVar2 & 0x80) != 0) {
      bVar4 = bVar4 | 2;
    }
    if ((uVar2 & 0x10000) != 0) {
      bVar4 = bVar4 | 4;
    }
    uVar3 = FUN_00023d38(param_1,iVar1,bVar4,param_3,DAT_0005a274);
  }
  return uVar3;
}



/* ===== FUN_000242e4 @ 000242e4 size=228 ===== */

int FUN_000242e4(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c;
  
  if (param_1 == 0) {
    iVar2 = 0x7f2bb73a;
  }
  else {
    local_c = (param_2 & 1) << 1;
    if ((param_2 & 2) != 0) {
      local_c = local_c | 0x80;
    }
    if ((param_2 & 4) != 0) {
      local_c = local_c | 0x10000;
    }
    iVar2 = FUN_00023c80(param_1,local_c,0);
    if (iVar2 < 0) {
      piVar1 = __errno_location();
      iVar2 = *piVar1;
    }
    else {
      iVar2 = FUN_00023d38(param_1,iVar2,param_2,param_3,DAT_0005a1f8);
    }
  }
  return iVar2;
}



/* ===== FUN_000243c8 @ 000243c8 size=296 ===== */

int FUN_000243c8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *local_14;
  int *local_10;
  int local_c;
  
  local_c = 0;
  if (*param_1 == 0x7f2bb705) {
    local_10 = (int *)param_1[0x16];
    if (*local_10 == 0x7f2bb706) {
      param_1[6] = param_1[6] + -1;
      if (param_1[6] < 1) {
        local_14 = param_1;
        local_c = FUN_00023b64(param_1,local_10,0);
        iVar1 = close(local_10[1]);
        if (iVar1 < 0) {
          piVar2 = __errno_location();
          local_c = *piVar2;
        }
        FUN_00023878(local_10);
        FUN_00018c58(local_14 + 0x16);
        if (local_14[2] != 0) {
          FUN_00018c58(local_14 + 2);
        }
        FUN_00018c58(&local_14);
      }
      else {
        local_c = 0;
      }
    }
    else {
      local_c = 0x7f2bb706;
    }
  }
  else {
    local_c = 0x7f2bb705;
  }
  return local_c;
}



/* ===== FUN_000244f0 @ 000244f0 size=236 ===== */

int FUN_000244f0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 == 0x7f2bb705) {
    piVar2 = (int *)param_1[0x16];
    if (*piVar2 == 0x7f2bb706) {
      if (param_2 != param_1[3]) {
        iVar1 = FUN_00023b64(param_1,piVar2,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        param_1[3] = param_2;
        FUN_00023878(piVar2);
        iVar1 = FUN_0002372c(param_1,piVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = 0;
    }
    else {
      iVar1 = 0x7f2bb706;
    }
  }
  else {
    iVar1 = 0x7f2bb705;
  }
  return iVar1;
}



/* ===== FUN_000245dc @ 000245dc size=864 ===== */

int FUN_000245dc(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  int iVar1;
  bool bVar2;
  uint local_48;
  int iStack_44;
  undefined4 *local_38 [4];
  int local_28;
  undefined4 *local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  void *local_14;
  
  if (*param_1 == 0x7f2bb705) {
    local_20 = (int *)param_1[0x16];
    if (*local_20 == 0x7f2bb706) {
      if ((param_5 < 0) || (4 < param_5)) {
        local_28 = FUN_00023b64(param_1,local_20,0);
        if (local_28 == 0) {
          local_28 = FUN_00022d70(param_1,local_20,param_3,param_4,param_5,param_6);
        }
      }
      else {
        local_14 = param_6;
        local_48 = param_3;
        iStack_44 = param_4;
        while (0 < param_5) {
          local_24 = (undefined4 *)FUN_00023950(local_20);
          if (local_24 == (undefined4 *)0x0) {
            if (param_5 == 1) {
              local_24 = local_38[0];
              FUN_00023a98(param_1,local_20,local_38[0],iStack_44,local_48,iStack_44);
              local_28 = FUN_00022d70(param_1,local_20,local_48,iStack_44,1,*local_24);
              if (local_28 != 0) {
                *(byte *)(local_24 + 5) = *(byte *)(local_24 + 5) & 0xfd;
                return local_28;
              }
              memcpy(local_14,(void *)*local_24,param_1[3]);
              return 0;
            }
            local_18 = 1;
            while (((int)local_18 < param_5 &&
                   (iVar1 = FUN_00023950(local_20,local_38 + local_18,local_48 + local_18,
                                         iStack_44 + ((int)local_18 >> 0x1f) +
                                         (uint)CARRY4(local_48,local_18),local_38 + local_18),
                   iVar1 == 0))) {
              local_18 = local_18 + 1;
            }
            local_28 = FUN_00022d70(param_1,local_20,local_48,iStack_44,local_18,local_14);
            if (local_28 != 0) {
              return local_28;
            }
            for (local_1c = 0; local_1c < (int)local_18; local_1c = local_1c + 1) {
              param_5 = param_5 + -1;
              local_24 = local_38[local_1c];
              bVar2 = 0xfffffffe < local_48;
              FUN_00023a98(param_1,local_20,local_24,iStack_44,local_48,iStack_44);
              memcpy((void *)*local_24,local_14,param_1[3]);
              local_14 = (void *)((int)local_14 + param_1[3]);
              local_48 = local_48 + 1;
              iStack_44 = iStack_44 + (uint)bVar2;
            }
          }
          else {
            memcpy(local_14,(void *)*local_24,param_1[3]);
            param_5 = param_5 + -1;
            bVar2 = 0xfffffffe < local_48;
            local_48 = local_48 + 1;
            iStack_44 = iStack_44 + (uint)bVar2;
            local_14 = (void *)((int)local_14 + param_1[3]);
          }
        }
        local_28 = 0;
      }
    }
    else {
      local_28 = 0x7f2bb706;
    }
  }
  else {
    local_28 = 0x7f2bb705;
  }
  return local_28;
}



/* ===== FUN_0002493c @ 0002493c size=80 ===== */

undefined4 FUN_0002493c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000245dc(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002498c @ 0002498c size=524 ===== */

int FUN_0002498c(int *param_1,int param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  uint local_30;
  int iStack_2c;
  int *local_20;
  uint local_1c;
  int *local_18;
  void *local_14;
  int local_10;
  int *local_c;
  
  local_10 = 0;
  if (*param_1 == 0x7f2bb705) {
    local_18 = (int *)param_1[0x16];
    if (*local_18 == 0x7f2bb706) {
      if ((param_5 < 0) || (4 < param_5)) {
        local_10 = FUN_00023b64(param_1,local_18,1);
        if (local_10 == 0) {
          local_10 = FUN_000231ec(param_1,local_18,param_3,param_4,param_5,param_6);
        }
      }
      else {
        local_1c = param_1[7] & 1;
        if (local_1c != 0) {
          uVar2 = FUN_000231ec(param_1,local_18,param_3,param_4,param_5,param_6);
          param_2 = (int)((ulonglong)uVar2 >> 0x20);
          local_10 = (int)uVar2;
        }
        local_14 = param_6;
        local_30 = param_3;
        iStack_2c = param_4;
        for (; 0 < param_5; param_5 = param_5 + -1) {
          local_c = (int *)FUN_00023950(local_18,param_2,local_30,iStack_2c,&local_20);
          if (local_c == (int *)0x0) {
            local_c = local_20;
            FUN_00023a98(param_1,local_18,local_20,iStack_2c,local_30,iStack_2c);
          }
          if (local_14 != (void *)*local_c) {
            memcpy((void *)*local_c,local_14,param_1[3]);
          }
          *(byte *)(local_c + 5) = *(byte *)(local_c + 5) & 0xfe | local_1c == 0;
          bVar1 = 0xfffffffe < local_30;
          local_30 = local_30 + 1;
          param_2 = iStack_2c + (uint)bVar1;
          local_14 = (void *)((int)local_14 + param_1[3]);
          iStack_2c = param_2;
        }
      }
    }
    else {
      local_10 = 0x7f2bb706;
    }
  }
  else {
    local_10 = 0x7f2bb705;
  }
  return local_10;
}



/* ===== FUN_00024b98 @ 00024b98 size=224 ===== */

int FUN_00024b98(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = *(int **)(param_1 + 0x58);
  if (*piVar2 == 0x7f2bb706) {
    uVar4 = *(uint *)(param_1 + 0xc);
    uVar1 = (uint)((ulonglong)param_3 * (ulonglong)uVar4);
    uVar5 = *(uint *)(param_1 + 0xc);
    iVar3 = posix_fadvise64(piVar2[1],
                            CONCAT44(param_3 * ((int)uVar4 >> 0x1f) + uVar4 * param_4 +
                                     (int)((ulonglong)param_3 * (ulonglong)uVar4 >> 0x20) +
                                     piVar2[7] + (uint)CARRY4(uVar1,piVar2[6]),uVar1 + piVar2[6]),
                            CONCAT44(param_5 * ((int)uVar5 >> 0x1f) + uVar5 * param_6 +
                                     (int)((ulonglong)param_5 * (ulonglong)uVar5 >> 0x20),
                                     (int)((ulonglong)param_5 * (ulonglong)uVar5)),3);
  }
  else {
    iVar3 = 0x7f2bb706;
  }
  return iVar3;
}



/* ===== FUN_00024c78 @ 00024c78 size=80 ===== */

undefined4 FUN_00024c78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002498c(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00024cc8 @ 00024cc8 size=380 ===== */

int FUN_00024cc8(int *param_1,uint param_2,size_t param_3,void *param_4)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  __off64_t _Var5;
  
  if (*param_1 == 0x7f2bb705) {
    piVar3 = (int *)param_1[0x16];
    if (*piVar3 == 0x7f2bb706) {
      if (param_1[0x18] == 0) {
        iVar2 = FUN_00023b64(param_1,piVar3,1);
        if (iVar2 == 0) {
          uVar4 = (uint)*(undefined8 *)(piVar3 + 6);
          _Var5 = lseek64(piVar3[1],
                          CONCAT44((int)((ulonglong)*(undefined8 *)(piVar3 + 6) >> 0x20) +
                                   (uint)CARRY4(uVar4,param_2),uVar4 + param_2),0);
          if (_Var5 < 0) {
            piVar3 = __errno_location();
            iVar2 = *piVar3;
          }
          else {
            sVar1 = write(piVar3[1],param_4,param_3);
            if ((int)sVar1 < 0) {
              piVar3 = __errno_location();
              iVar2 = *piVar3;
            }
            else if (sVar1 == param_3) {
              iVar2 = 0;
            }
            else {
              iVar2 = 0x7f2bb725;
            }
          }
        }
      }
      else {
        iVar2 = 0x7f2bb750;
      }
    }
    else {
      iVar2 = 0x7f2bb706;
    }
  }
  else {
    iVar2 = 0x7f2bb705;
  }
  return iVar2;
}



/* ===== FUN_00024e44 @ 00024e44 size=200 ===== */

int FUN_00024e44(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 0x7f2bb705) {
    piVar3 = (int *)param_1[0x16];
    if (*piVar3 == 0x7f2bb706) {
      iVar2 = FUN_00023b64(param_1,piVar3,0);
      if ((iVar2 == 0) && (iVar1 = fsync(piVar3[1]), iVar1 != 0)) {
        piVar3 = __errno_location();
        iVar2 = *piVar3;
      }
    }
    else {
      iVar2 = 0x7f2bb706;
    }
  }
  else {
    iVar2 = 0x7f2bb705;
  }
  return iVar2;
}



/* ===== FUN_00024f0c @ 00024f0c size=284 ===== */

undefined4 FUN_00024f0c(int *param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char *local_1c;
  int local_18;
  int iStack_14;
  int *local_c;
  
  if (*param_1 == 0x7f2bb705) {
    local_c = (int *)param_1[0x16];
    if (*local_c == 0x7f2bb706) {
      iVar1 = strcmp(param_2,"offset");
      if (iVar1 == 0) {
        if (param_3 == (char *)0x0) {
          uVar2 = 0x7f2bb747;
        }
        else {
          uVar3 = strtoull(param_3,&local_1c,0);
          if (*local_1c == '\0') {
            local_18 = (int)uVar3;
            iStack_14 = (int)(uVar3 >> 0x20);
            local_c[6] = local_18;
            local_c[7] = iStack_14;
            if (local_c[7] < 0) {
              uVar2 = 0x7f2bb747;
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0x7f2bb747;
          }
        }
      }
      else {
        uVar2 = 0x7f2bb747;
      }
    }
    else {
      uVar2 = 0x7f2bb706;
    }
  }
  else {
    uVar2 = 0x7f2bb705;
  }
  return uVar2;
}



/* ===== FUN_00025028 @ 00025028 size=512 ===== */

int FUN_00025028(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  int iStack_24;
  int *local_20;
  int local_1c;
  
  if (*param_1 == 0x7f2bb705) {
    local_20 = (int *)param_1[0x16];
    if (*local_20 == 0x7f2bb706) {
      if ((param_1[7] & 4U) == 0) {
        uVar5 = param_1[3];
        uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
        uVar4 = param_1[3];
        local_1c = fallocate64(local_20[1],3,
                               CONCAT44(param_3 * ((int)uVar5 >> 0x1f) + uVar5 * param_4 +
                                        (int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) +
                                        local_20[7] + (uint)CARRY4(uVar3,local_20[6]),
                                        uVar3 + local_20[6]),
                               CONCAT44(param_5 * ((int)uVar4 >> 0x1f) + uVar4 * param_6 +
                                        (int)((ulonglong)param_5 * (ulonglong)uVar4 >> 0x20),
                                        (int)((ulonglong)param_5 * (ulonglong)uVar4)));
      }
      else {
        uVar3 = param_1[3];
        uVar5 = (uint)((ulonglong)uVar3 * (ulonglong)param_3);
        local_30 = uVar5 + local_20[6];
        iStack_2c = ((int)uVar3 >> 0x1f) * param_3 + uVar3 * param_4 +
                    (int)((ulonglong)uVar3 * (ulonglong)param_3 >> 0x20) + local_20[7] +
                    (uint)CARRY4(uVar5,local_20[6]);
        uVar3 = param_1[3];
        local_28 = (undefined4)((ulonglong)uVar3 * (ulonglong)param_5);
        iStack_24 = ((int)uVar3 >> 0x1f) * param_5 + uVar3 * param_6 +
                    (int)((ulonglong)uVar3 * (ulonglong)param_5 >> 0x20);
        local_1c = ioctl(local_20[1],0x1277,&local_30);
      }
      if (local_1c < 0) {
        piVar1 = __errno_location();
        if (*piVar1 == 0x5f) {
          iVar2 = 0x7f2bb750;
        }
        else {
          piVar1 = __errno_location();
          iVar2 = *piVar1;
        }
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x7f2bb706;
    }
  }
  else {
    iVar2 = 0x7f2bb705;
  }
  return iVar2;
}



/* ===== FUN_00025228 @ 00025228 size=820 ===== */

int FUN_00025228(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  stat64 sStack_88;
  int *local_20;
  int local_1c;
  
  if (*param_1 != 0x7f2bb705) {
    return 0x7f2bb705;
  }
  local_20 = (int *)param_1[0x16];
  if (*local_20 != 0x7f2bb706) {
    return 0x7f2bb706;
  }
  iVar2 = FUN_00022ce0("UNIX_IO_NOZEROOUT");
  if (iVar2 != 0) {
    return 0x7f2bb750;
  }
  if ((param_1[7] & 4U) != 0) {
    return 0x7f2bb750;
  }
  if (param_5 == 0 && param_6 == 0) {
    return 0;
  }
  local_1c = fstat64(local_20[1],&sStack_88);
  if (local_1c == 0) {
    uVar4 = param_1[3];
    lVar1 = (ulonglong)uVar4 * (ulonglong)(param_3 + param_5);
    uVar6 = (uint)lVar1;
    uVar4 = uVar4 * (param_4 + param_6 + (uint)CARRY4(param_3,param_5)) +
            (param_3 + param_5) * ((int)uVar4 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20) +
            local_20[7] + (uint)CARRY4(uVar6,local_20[6]);
    bVar7 = uVar4 <= sStack_88.st_size._4_4_;
    if (sStack_88.st_size._4_4_ == uVar4) {
      bVar7 = uVar6 + local_20[6] <= (uint)sStack_88.st_size;
    }
    iVar2 = 0;
    if (!bVar7) {
      uVar4 = param_1[3];
      lVar1 = (ulonglong)uVar4 * (ulonglong)(param_3 + param_5);
      uVar6 = (uint)lVar1;
      local_1c = ftruncate64(local_20[1],
                             CONCAT44(uVar4 * (param_4 + param_6 + (uint)CARRY4(param_3,param_5)) +
                                      (param_3 + param_5) * ((int)uVar4 >> 0x1f) +
                                      (int)((ulonglong)lVar1 >> 0x20) + local_20[7] +
                                      (uint)CARRY4(uVar6,local_20[6]),uVar6 + local_20[6]));
      iVar2 = local_1c;
      if (local_1c != 0) goto LAB_000254fc;
    }
    local_1c = iVar2;
    uVar6 = param_1[3];
    uVar4 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
    uVar5 = param_1[3];
    local_1c = fallocate64(local_20[1],3,
                           CONCAT44(param_3 * ((int)uVar6 >> 0x1f) + uVar6 * param_4 +
                                    (int)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20) +
                                    local_20[7] + (uint)CARRY4(uVar4,local_20[6]),
                                    uVar4 + local_20[6]),
                           CONCAT44(param_5 * ((int)uVar5 >> 0x1f) + uVar5 * param_6 +
                                    (int)((ulonglong)param_5 * (ulonglong)uVar5 >> 0x20),
                                    (int)((ulonglong)param_5 * (ulonglong)uVar5)));
    if (local_1c != 0) {
      uVar6 = param_1[3];
      uVar4 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
      uVar5 = param_1[3];
      local_1c = fallocate64(local_20[1],0x10,
                             CONCAT44(param_3 * ((int)uVar6 >> 0x1f) + uVar6 * param_4 +
                                      (int)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20) +
                                      local_20[7] + (uint)CARRY4(uVar4,local_20[6]),
                                      uVar4 + local_20[6]),
                             CONCAT44(param_5 * ((int)uVar5 >> 0x1f) + uVar5 * param_6 +
                                      (int)((ulonglong)param_5 * (ulonglong)uVar5 >> 0x20),
                                      (int)((ulonglong)param_5 * (ulonglong)uVar5)));
    }
  }
LAB_000254fc:
  if (-1 < local_1c) {
    return 0;
  }
  piVar3 = __errno_location();
  if (*piVar3 == 0x5f) {
    return 0x7f2bb750;
  }
  piVar3 = __errno_location();
  return *piVar3;
}



/* ===== FUN_0002555c @ 0002555c size=60 ===== */

bool FUN_0002555c(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_00025598 @ 00025598 size=60 ===== */

bool FUN_00025598(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_000255d4 @ 000255d4 size=96 ===== */

undefined4 FUN_000255d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00025598(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0002555c(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00025634 @ 00025634 size=148 ===== */

void FUN_00025634(int param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 < *(uint *)(param_1 + 0x1c)) && (iVar1 = FUN_000255d4(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_000138ec(param_1,param_2,2), iVar1 != 0)) {
    FUN_000139a4(param_1,param_2,2);
    FUN_00016d8c(param_1,param_2);
    FUN_00018d14(param_1);
    FUN_00018e70(param_1);
  }
  return;
}



/* ===== FUN_000256c8 @ 000256c8 size=268 ===== */

void FUN_000256c8(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((param_3 < *(uint *)(param_1 + 0x1c)) && (iVar1 = FUN_000255d4(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_000138ec(param_1,param_3,1), iVar1 != 0)) {
    local_10 = param_3 * *(int *)(*(int *)(param_1 + 0x10) + 0x28);
    local_c = 0;
    while( true ) {
      local_10 = local_10 + 1;
      if (*(uint *)(*(int *)(param_1 + 0x10) + 0x28) <= local_c) break;
      FUN_000186f8(param_2,local_10);
      local_c = local_c + 1;
    }
    FUN_000139a4(param_1,param_3,1);
    FUN_000139a4(param_1,param_3,2);
    FUN_00016d8c(param_1,param_3);
    FUN_00018e3c(param_1);
    FUN_00018d14(param_1);
  }
  return;
}



/* ===== FUN_000257d4 @ 000257d4 size=784 ===== */

undefined4 FUN_000257d4(int *param_1,int param_2,undefined4 param_3,int param_4,uint *param_5)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  uint uVar3;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (*param_1 == 0x7f2bb701) {
    if (param_4 == 0) {
      param_4 = param_1[0xb];
    }
    if (param_4 == 0) {
      uVar2 = 0x7f2bb727;
    }
    else {
      if (param_2 != 0) {
        local_18 = FUN_00042c94(param_2 + -1,*(undefined4 *)(param_1[4] + 0x28));
        local_c = local_18 * *(int *)(param_1[4] + 0x28) + 1;
      }
      if (*(int *)(param_1[4] + 0x4c) == 0) {
        uVar3 = 0xb;
      }
      else {
        uVar3 = *(uint *)(param_1[4] + 0x54);
      }
      if (local_c < uVar3) {
        if (*(int *)(param_1[4] + 0x4c) == 0) {
          local_c = 0xb;
        }
        else {
          local_c = *(uint *)(param_1[4] + 0x54);
        }
      }
      if (*(uint *)param_1[4] < local_c) {
        uVar2 = 0x7f2bb749;
      }
      else {
        local_10 = local_c;
        iVar1 = local_20;
        do {
          local_20 = iVar1;
          FUN_00042d3c(local_10 - 1,*(undefined4 *)(param_1[4] + 0x28));
          local_1c = extraout_r1;
          local_18 = FUN_00042c94(local_10 - 1,*(undefined4 *)(param_1[4] + 0x28));
          FUN_000256c8(param_1,param_4,local_18,local_18,param_4,param_3);
          local_14 = local_10 + (*(int *)(param_1[4] + 0x28) - local_1c);
          if ((local_10 < local_c) && (local_c <= local_14)) {
            local_14 = local_c - 1;
          }
          if (*(uint *)param_1[4] < local_14) {
            local_14 = *(uint *)param_1[4];
          }
          local_20 = FUN_000187c0(param_4,local_10,local_14,&local_24);
          if (local_20 == 0) {
            local_10 = local_24;
            break;
          }
          if (local_20 != 2) {
            return 0x7f2bb749;
          }
          local_10 = local_14 + 1;
          if (*(uint *)param_1[4] < local_10) {
            if (*(int *)(param_1[4] + 0x4c) == 0) {
              local_10 = 0xb;
            }
            else {
              local_10 = *(uint *)(param_1[4] + 0x54);
            }
          }
          iVar1 = 2;
        } while (local_10 != local_c);
        iVar1 = FUN_00018604(param_4,local_10);
        if (iVar1 == 0) {
          *param_5 = local_10;
          uVar2 = 0;
        }
        else {
          uVar2 = 0x7f2bb749;
        }
      }
    }
  }
  else {
    uVar2 = 0x7f2bb701;
  }
  return uVar2;
}



/* ===== FUN_00025ae4 @ 00025ae4 size=592 ===== */

int FUN_00025ae4(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint local_30;
  uint uStack_2c;
  undefined8 local_20;
  code *local_18;
  int local_14;
  
  local_20 = 0;
  if (*param_1 != 0x7f2bb701) {
    return 0x7f2bb701;
  }
  if ((param_5 == 0) && (param_1[0x23] != 0)) {
    local_18 = (code *)param_1[0x23];
    param_1[0x23] = 0;
    uVar4 = (*local_18)(param_1,local_18,param_3,param_4,&local_20);
    param_1[0x23] = (int)local_18;
    goto LAB_00025cd0;
  }
  if (param_5 == 0) {
    param_5 = param_1[0xc];
  }
  if (param_5 == 0) {
    return 0x7f2bb728;
  }
  if (param_3 == 0 && param_4 == 0) {
LAB_00025be0:
    local_30 = *(uint *)(param_1[4] + 0x14);
    uStack_2c = 0;
  }
  else {
    uVar4 = FUN_00012c48(param_1[4]);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    bVar3 = uVar2 <= param_4;
    if (param_4 == uVar2) {
      bVar3 = (uint)uVar4 <= param_3;
    }
    local_30 = param_3;
    uStack_2c = param_4;
    if (bVar3) goto LAB_00025be0;
  }
  uVar2 = -(1 << (param_1[0x19] & 0xffU));
  local_30 = uVar2 & local_30;
  uStack_2c = (int)uVar2 >> 0x1f & uStack_2c;
  uVar4 = FUN_00012c48(param_1[4]);
  uVar4 = FUN_00018764(param_5,&local_20,local_30,uStack_2c,(int)uVar4 + -1,
                       (int)((ulonglong)uVar4 >> 0x20) - (uint)((int)uVar4 == 0),&local_20);
  local_14 = (int)uVar4;
  if ((local_14 == 2) &&
     (uVar4 = CONCAT44(uStack_2c,local_14),
     uStack_2c != 0 || local_30 != *(uint *)(param_1[4] + 0x14))) {
    uVar4 = FUN_00018764(param_5,0,*(undefined4 *)(param_1[4] + 0x14),0,local_30 - 1,
                         uStack_2c - (local_30 == 0),&local_20);
  }
LAB_00025cd0:
  local_14 = (int)uVar4;
  if (local_14 == 2) {
    local_14 = 0x7f2bb748;
  }
  else if (local_14 == 0) {
    uVar1 = FUN_000128bc(param_1,(int)((ulonglong)uVar4 >> 0x20),(undefined4)local_20,local_20._4_4_
                        );
    FUN_00025634(param_1,uVar1);
    *param_6 = (undefined4)local_20;
    param_6[1] = local_20._4_4_;
    local_14 = 0;
  }
  return local_14;
}



/* ===== FUN_00025d34 @ 00025d34 size=108 ===== */

int FUN_00025d34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_00025ae4(param_1,param_3,param_2,0,param_3,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_00025da0 @ 00025da0 size=368 ===== */

int FUN_00025da0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,void *param_5,
                undefined4 *param_6)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  uVar1 = CONCAT44(param_2,local_c);
  if (*(int *)(param_1 + 0x8c) == 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar1 = FUN_00022a38(param_1);
      if ((int)uVar1 != 0) {
        return (int)uVar1;
      }
    }
    local_c = (int)uVar1;
    local_c = FUN_00025ae4(param_1,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4,0,&local_18);
  }
  else {
    local_c = (**(code **)(param_1 + 0x8c))
                        (param_1,*(code **)(param_1 + 0x8c),param_3,param_4,&local_18);
  }
  if (local_c == 0) {
    if (param_5 == (void *)0x0) {
      local_c = FUN_0001ddd0(param_1,1,local_18,uStack_14,1,0,0);
    }
    else {
      memset(param_5,0,*(size_t *)(param_1 + 0x14));
      local_c = FUN_0001d6a0(*(undefined4 *)(param_1 + 4),1,local_18,uStack_14,1,param_5);
    }
    if (local_c == 0) {
      FUN_00027018(param_1,1,local_18,uStack_14,1);
      *param_6 = local_18;
      param_6[1] = uStack_14;
    }
  }
  return local_c;
}



/* ===== FUN_00025f10 @ 00025f10 size=108 ===== */

int FUN_00025f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_00025da0(param_1,param_3,param_2,0,param_3,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_00025f7c @ 00025f7c size=520 ===== */

undefined4
FUN_00025f7c(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,int param_8,uint *param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  uint local_20;
  uint uStack_1c;
  
  if (*param_1 == 0x7f2bb701) {
    if (param_8 == 0) {
      param_8 = param_1[0xc];
    }
    if (param_8 == 0) {
      uVar4 = 0x7f2bb728;
    }
    else {
      local_20 = param_3;
      uStack_1c = param_4;
      if (param_3 == 0 && param_4 == 0) {
        local_20 = *(uint *)(param_1[4] + 0x14);
        uStack_1c = 0;
      }
      if (param_5 == 0 && param_6 == 0) {
        param_5 = param_3;
        param_6 = param_4;
      }
      if (param_7 == 0) {
        param_7 = 1;
      }
      uVar1 = FUN_000286e8(param_8);
      uVar1 = 1 << (uVar1 & 0xff);
      local_20 = -uVar1 & local_20;
      uStack_1c = (int)-uVar1 >> 0x1f & uStack_1c;
      param_5 = -uVar1 & param_5;
      param_6 = (int)-uVar1 >> 0x1f & param_6;
      do {
        uVar5 = (uStack_1c + ((int)param_7 >> 0x1f) + (uint)CARRY4(local_20,param_7)) -
                (uint)(local_20 + param_7 == 0);
        uVar7 = FUN_00012c48(param_1[4]);
        uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
        bVar6 = uVar3 <= uVar5;
        if (uVar5 == uVar3) {
          bVar6 = (uint)uVar7 <= (local_20 + param_7) - 1;
        }
        if (bVar6) {
          bVar6 = param_4 <= param_6;
          if (param_6 == param_4) {
            bVar6 = param_3 <= param_5;
          }
          if (bVar6 && (param_6 != param_4 || param_5 != param_3)) {
            return 0x7f2bb748;
          }
          local_20 = *(uint *)(param_1[4] + 0x14);
          uStack_1c = 0;
          uVar3 = param_6;
        }
        iVar2 = FUN_000189d4(param_8,uVar3,local_20,uStack_1c,param_7);
        if (iVar2 != 0) {
          *param_9 = local_20;
          param_9[1] = uStack_1c;
          return 0;
        }
        bVar6 = CARRY4(uVar1,local_20);
        local_20 = uVar1 + local_20;
        uStack_1c = ((int)uVar1 >> 0x1f) + uStack_1c + (uint)bVar6;
      } while (uStack_1c != param_6 || local_20 != param_5);
      uVar4 = 0x7f2bb748;
    }
  }
  else {
    uVar4 = 0x7f2bb701;
  }
  return uVar4;
}



/* ===== FUN_00026184 @ 00026184 size=140 ===== */

int FUN_00026184(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_00025f7c(param_1,0,param_2,0,param_3,0,param_4,param_5,local_18);
  if (iVar1 == 0) {
    *param_6 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_00026288 @ 00026288 size=476 ===== */

ulonglong FUN_00026288(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                      int param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 local_3c;
  uint local_38;
  int iStack_34;
  undefined8 uStack_30;
  sbyte local_19;
  int local_18;
  uint local_14;
  
  local_3c = 0;
  if (((param_3 != 0) && (lVar2 = FUN_00012af4(param_1,param_3), lVar2 != 0)) &&
     ((*(uint *)(param_3 + 0x20) & 0x10000000) == 0)) {
    if ((*(uint *)(param_3 + 0x20) & 0x80000) == 0) {
      if (*(int *)(param_3 + 0x28) != 0) {
        return (ulonglong)*(uint *)(param_3 + 0x28);
      }
    }
    else {
      local_18 = FUN_0002ff98(param_1,param_2,param_3,&local_3c);
      if (((local_18 == 0) && (local_18 = FUN_00031008(local_3c,0,param_5,param_6), local_18 == 0))
         && (local_18 = FUN_00030374(local_3c,0,&local_38), local_18 == 0)) {
        FUN_0002fe94(local_3c);
        uVar1 = param_5 - (uint)uStack_30;
        return CONCAT44((param_6 -
                        ((int)((ulonglong)uStack_30 >> 0x20) + (uint)(param_5 < (uint)uStack_30))) +
                        iStack_34 + (uint)CARRY4(uVar1,local_38),uVar1 + local_38);
      }
    }
  }
  FUN_0002fe94(local_3c);
  local_19 = *(sbyte *)(*(int *)(param_1 + 0x10) + 0x174);
  local_14 = FUN_00018f34(param_1,param_2);
  if (local_19 != 0) {
    local_14 = local_14 & -(1 << local_19);
  }
  uVar3 = FUN_00012928(param_1,local_14);
  return uVar3;
}



/* ===== FUN_00026464 @ 00026464 size=1172 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00026464(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                int param_7,uint *param_8,uint *param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  uint local_60;
  uint uStack_5c;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  code *local_3c;
  undefined8 local_38;
  int local_2c;
  uint local_28;
  uint uStack_24;
  int local_1c;
  
  local_2c = 0;
  local_38 = FUN_00012c48(param_1[4]);
  if (*param_1 != 0x7f2bb701) {
    return 0x7f2bb701;
  }
  if ((param_5 == 0 && param_6 == 0) || ((param_2 & 0xfffffffc) != 0)) {
    return 0x7f2bb747;
  }
  if ((param_7 == 0) && (param_1[0x2d] != 0)) {
    local_3c = (code *)param_1[0x2d];
    param_1[0x2d] = 0;
    iVar2 = (*local_3c)(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9);
    param_1[0x2d] = (int)local_3c;
    if (iVar2 != 0) {
      return iVar2;
    }
    local_48 = *param_8;
    uStack_44 = param_8[1];
    local_50 = *param_9 + *param_8;
    uStack_4c = param_9[1] + param_8[1] + (uint)CARRY4(*param_9,*param_8);
    local_1c = 0;
    goto LAB_000267cc;
  }
  if (param_7 == 0) {
    param_7 = param_1[0xc];
  }
  if (param_7 == 0) {
    return 0x7f2bb728;
  }
  if (param_3 == 0 && param_4 == 0) {
LAB_000265f0:
    local_60 = *(uint *)(param_1[4] + 0x14);
    uStack_5c = 0;
  }
  else {
    uVar8 = FUN_00012c48(param_1[4]);
    uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
    bVar7 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar7 = (uint)uVar8 <= param_3;
    }
    local_60 = param_3;
    uStack_5c = param_4;
    if (bVar7) goto LAB_000265f0;
  }
  local_48 = local_60;
  uStack_44 = uStack_5c;
  lVar1 = local_38;
  while( true ) {
    while( true ) {
      local_38._4_4_ = (uint)((ulonglong)lVar1 >> 0x20);
      local_38._0_4_ = (uint)lVar1;
      if (local_2c != 0) {
        bVar7 = uStack_44 <= uStack_5c;
        if (uStack_5c == uStack_44) {
          bVar7 = local_48 <= local_60;
        }
        if (!bVar7) {
          return 0x7f2bb748;
        }
      }
      iVar2 = (uint)local_38 + -1;
      iVar6 = local_38._4_4_ - ((uint)local_38 == 0);
      local_38 = lVar1;
      local_1c = FUN_00018764(param_7,uStack_44,local_48,uStack_44,iVar2,iVar6,&local_48);
      if (local_1c != 2) break;
      if ((param_2 & 1) != 0) {
        return 0x7f2bb748;
      }
      if (uStack_44 == 0 && *(uint *)(param_1[4] + 0x14) == local_48) {
        return 0x7f2bb748;
      }
      local_48 = *(uint *)(param_1[4] + 0x14);
      uStack_44 = 0;
      local_1c = 2;
      lVar1 = local_38;
    }
    if (local_1c != 0) {
      return local_1c;
    }
    if (((param_2 & 1) != 0) && (uStack_5c != uStack_44 || local_60 != local_48)) {
      return 0x7f2bb748;
    }
    local_28 = (uint)local_38 - 1;
    uStack_24 = local_38._4_4_ - ((uint)local_38 == 0);
    uVar3 = (param_5 + local_48) - 1;
    uVar5 = (param_6 + uStack_44 + (uint)CARRY4(param_5,local_48)) - (uint)(param_5 + local_48 == 0)
    ;
    bVar7 = uVar5 <= uStack_24;
    if (uStack_24 == uVar5) {
      bVar7 = uVar3 <= local_28;
    }
    if (bVar7 && (uStack_24 != uVar5 || local_28 != uVar3)) {
      local_28 = uVar3;
      uStack_24 = uVar5;
    }
    local_1c = FUN_0001883c(param_7,uStack_44,local_48,uStack_44,local_28,uStack_24,&local_50);
    if (local_1c == 2) {
      local_50 = local_28 + 1;
      uStack_4c = uStack_24 + (0xfffffffe < local_28);
    }
    else if (local_1c != 0) {
      return local_1c;
    }
    if ((param_2 & 2) == 0) break;
    uVar3 = uStack_4c - (uStack_44 + (local_50 < local_48));
    bVar7 = uVar3 <= param_6;
    if (param_6 == uVar3) {
      bVar7 = local_50 - local_48 <= param_5;
    }
    if (!bVar7 || param_6 == uVar3 && param_5 == local_50 - local_48) break;
    if ((param_2 & 1) != 0) {
      return 0x7f2bb748;
    }
    local_48 = local_50;
    uStack_44 = uStack_4c;
    bVar7 = uStack_4c <= local_38._4_4_;
    if (local_38._4_4_ == uStack_4c) {
      bVar7 = local_50 <= (uint)local_38;
    }
    lVar1 = local_38;
    if (!bVar7 || local_38 == CONCAT44(uStack_4c,local_50)) {
      if (local_2c != 0) {
        return 0x7f2bb748;
      }
      local_2c = 1;
      local_48 = *(uint *)(param_1[4] + 0x14);
      uStack_44 = 0;
    }
  }
  *param_8 = local_48;
  param_8[1] = uStack_44;
  *param_9 = local_50 - local_48;
  param_9[1] = uStack_4c - (uStack_44 + (local_50 < local_48));
LAB_000267cc:
  local_28 = local_48;
  uStack_24 = uStack_44;
  while( true ) {
    bVar7 = uStack_4c <= uStack_24;
    if (uStack_24 == uStack_4c) {
      bVar7 = local_50 <= local_28;
    }
    if (bVar7) break;
    uVar4 = FUN_000128bc(param_1,uStack_24,local_28,uStack_24);
    FUN_00025634(param_1,uVar4);
    bVar7 = CARRY4(*(uint *)(param_1[4] + 0x20),local_28);
    local_28 = *(uint *)(param_1[4] + 0x20) + local_28;
    uStack_24 = uStack_24 + bVar7;
  }
  return 0;
}



/* ===== FUN_00026970 @ 00026970 size=384 ===== */

int FUN_00026970(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                undefined4 *param_6)

{
  bool bVar1;
  uint local_18;
  int iStack_14;
  int local_10;
  undefined4 local_c;
  
  local_c = 2;
  if (*param_1 == 0x7f2bb701) {
    if ((param_5 == 0) || ((param_2 & 0xfffffffc) != 0)) {
      local_10 = 0x7f2bb747;
    }
    else {
      if ((param_2 & 1) != 0) {
        local_c = 3;
      }
      local_10 = FUN_00026464(param_1,local_c,param_3,param_4,param_5,0,0,param_6,&local_18);
      if (local_10 == 0) {
        bVar1 = iStack_14 == 0;
        if (iStack_14 == 0) {
          bVar1 = local_18 <= param_5;
        }
        if (!bVar1 || iStack_14 == 0 && param_5 == local_18) {
          if (((param_2 & 2) == 0) ||
             (local_10 = FUN_0001ddd0(param_1,param_5,*param_6,param_6[1],param_5,0,0),
             local_10 == 0)) {
            FUN_00027258(param_1,param_5,*param_6,param_6[1],param_5,1);
          }
        }
        else {
          local_10 = 0x7f2bb748;
        }
      }
    }
  }
  else {
    local_10 = 0x7f2bb701;
  }
  return local_10;
}



/* ===== FUN_00026af0 @ 00026af0 size=60 ===== */

bool FUN_00026af0(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x10) != 0;
}



/* ===== FUN_00026b2c @ 00026b2c size=476 ===== */

int FUN_00026b2c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar2;
  undefined4 extraout_r1_01;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_34;
  int local_30;
  int iStack_2c;
  uint local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  uint local_18;
  uint local_14;
  
  FUN_00013f7c(param_1,param_2,&local_20,&local_28,&local_30,&local_34);
  uVar7 = FUN_00026af0(*(undefined4 *)(param_1 + 0x10));
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 == 0) {
    local_14 = *(int *)(param_1 + 0x20) + (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0xce);
  }
  else {
    local_14 = *(uint *)(*(int *)(param_1 + 0x10) + 0x104);
  }
  if ((local_20 != 0 || iStack_1c != 0) || (param_2 == 0)) {
    FUN_00018504(param_3,uVar3,local_20,iStack_1c);
    uVar3 = extraout_r1;
  }
  if (((param_2 == 0) && (*(int *)(param_1 + 0x14) == 0x400)) &&
     (1 < 1 << (*(uint *)(param_1 + 100) & 0xff))) {
    FUN_00018504(param_3,uVar3,0,0);
    uVar3 = extraout_r1_00;
  }
  if (local_28 != 0 || iStack_24 != 0) {
    local_18 = local_14;
    uVar4 = local_14 + local_28;
    uVar5 = ((int)local_14 >> 0x1f) + iStack_24 + (uint)CARRY4(local_14,local_28);
    uVar7 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
    uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
    bVar6 = uVar2 <= uVar5;
    if (uVar5 == uVar2) {
      bVar6 = (uint)uVar7 <= uVar4;
    }
    if (bVar6) {
      iVar1 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
      local_18 = iVar1 - local_28;
    }
    FUN_0003a93c(param_3,local_18,local_28,iStack_24,local_18);
    uVar3 = extraout_r1_01;
  }
  if (local_30 != 0 || iStack_2c != 0) {
    FUN_00018504(param_3,uVar3,local_30,iStack_2c);
  }
  iVar1 = FUN_00012a34(param_1,param_2);
  return (iVar1 - (*(int *)(param_1 + 0x28) + local_34)) + -2;
}



/* ===== FUN_00026d08 @ 00026d08 size=60 ===== */

bool FUN_00026d08(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_00026d44 @ 00026d44 size=60 ===== */

bool FUN_00026d44(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_00026d80 @ 00026d80 size=96 ===== */

undefined4 FUN_00026d80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00026d44(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00026d08(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00026de0 @ 00026de0 size=512 ===== */

void FUN_00026de0(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00018f34(param_1,param_2);
  if (**(uint **)(param_1 + 0x10) < param_2) {
    FUN_00042b78("ext2fs_inode_alloc_stats2",0,"Illegal inode number: %lu",param_2);
  }
  else {
    if (param_3 < 1) {
      FUN_000185cc(*(undefined4 *)(param_1 + 0x2c),param_2);
    }
    else {
      FUN_00018594(*(undefined4 *)(param_1 + 0x2c),param_2);
    }
    iVar2 = FUN_0001356c(param_1,iVar1);
    FUN_000135e8(param_1,iVar1,iVar2 - param_3);
    if (param_4 != 0) {
      iVar2 = FUN_00013668(param_1,iVar1);
      FUN_000136e4(param_1,iVar1,iVar2 + param_3);
    }
    FUN_000139a4(param_1,iVar1,1);
    iVar2 = FUN_00026d80(param_1);
    if (iVar2 != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x28);
      iVar2 = FUN_00013764(param_1,iVar1);
      if ((iVar3 - iVar2) + iVar1 * *(int *)(*(int *)(param_1 + 0x10) + 0x28) + 1U <= param_2) {
        FUN_000137e0(param_1,iVar1,*(int *)(*(int *)(param_1 + 0x10) + 0x28) * (iVar1 + 1) - param_2
                    );
      }
      FUN_00016d8c(param_1,iVar1);
    }
    *(int *)(*(int *)(param_1 + 0x10) + 0x10) = *(int *)(*(int *)(param_1 + 0x10) + 0x10) - param_3;
    FUN_00018d14(param_1);
    FUN_00018e3c(param_1);
  }
  return;
}



/* ===== FUN_00026fe0 @ 00026fe0 size=56 ===== */

void FUN_00026fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00026de0(param_1,param_2,param_3,0);
  return;
}



/* ===== FUN_00027018 @ 00027018 size=392 ===== */

void FUN_00027018(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_000128bc(param_1,param_2,param_3,param_4);
  uVar6 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  bVar5 = uVar4 <= param_4;
  if (param_4 == uVar4) {
    bVar5 = (uint)uVar6 <= param_3;
  }
  if (bVar5) {
    FUN_00042b78("ext2fs_block_alloc_stats",0,"Illegal block number: %lu",param_3);
  }
  else {
    if (param_5 < 1) {
      FUN_00018534(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4);
    }
    else {
      FUN_00018504(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4);
    }
    iVar3 = FUN_00013470(param_1,uVar2);
    FUN_000134ec(param_1,uVar2,iVar3 - param_5);
    FUN_000139a4(param_1,uVar2,2);
    FUN_00016d8c(param_1,uVar2);
    uVar1 = -param_5;
    uVar4 = 1 << (*(uint *)(param_1 + 100) & 0xff);
    iVar3 = uVar4 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar4 >> 0x1f) +
            (int)((ulonglong)uVar4 * (ulonglong)uVar1 >> 0x20);
    FUN_00012f3c(*(undefined4 *)(param_1 + 0x10),iVar3,(int)((ulonglong)uVar4 * (ulonglong)uVar1),
                 iVar3);
    FUN_00018d14(param_1);
    FUN_00018e70(param_1);
    if (*(int *)(param_1 + 0x90) != 0) {
      (**(code **)(param_1 + 0x90))(param_1,*(code **)(param_1 + 0x90),param_3,param_4,param_5);
    }
  }
  return;
}



/* ===== FUN_000271a0 @ 000271a0 size=64 ===== */

void FUN_000271a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00027018(param_1,param_3,param_2,0,param_3);
  return;
}



/* ===== FUN_00027258 @ 00027258 size=728 ===== */

void FUN_00027258(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint local_38;
  int iStack_34;
  uint local_18;
  int local_14;
  
  uVar5 = param_4 + (uint)CARRY4(param_5,param_3);
  lVar8 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
  uVar4 = (uint)((ulonglong)lVar8 >> 0x20);
  bVar7 = uVar4 <= uVar5;
  if (uVar5 == uVar4) {
    bVar7 = (uint)lVar8 <= param_5 + param_3;
  }
  if (bVar7 && lVar8 != CONCAT44(uVar5,param_5 + param_3)) {
    FUN_00042b78("ext2fs_block_alloc_stats_range",0,"Illegal block range: %llu (%u) ",param_4,
                 param_3,param_4,param_5);
  }
  else if (param_6 != 0) {
    local_38 = param_3;
    if ((int)param_6 < 1) {
      FUN_0003ab9c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4,
                   param_5);
      param_6 = 0xffffffff;
      iVar3 = extraout_r1_00;
      iStack_34 = param_4;
    }
    else {
      FUN_0003a93c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4,
                   param_5);
      param_6 = 1;
      iVar3 = extraout_r1;
      iStack_34 = param_4;
    }
    for (; param_5 != 0; param_5 = param_5 - local_18) {
      uVar1 = FUN_000128bc(param_1,iVar3,local_38,iStack_34);
      uVar9 = FUN_000129a0(param_1,uVar1);
      uVar5 = (uint)((ulonglong)uVar9 >> 0x20);
      uVar4 = (uint)uVar9;
      local_18 = param_5;
      local_14 = 0;
      uVar6 = iStack_34 + (uint)CARRY4(local_38,param_5);
      bVar7 = uVar6 <= uVar5;
      if (uVar5 == uVar6) {
        bVar7 = local_38 + param_5 <= uVar4;
      }
      if (!bVar7) {
        local_18 = (uVar4 - local_38) + 1;
        local_14 = (uVar5 - (iStack_34 + (uint)(uVar4 < local_38))) +
                   (uint)(0xfffffffe < uVar4 - local_38);
      }
      iVar2 = FUN_00013470(param_1,uVar1);
      iVar3 = 1 << (*(uint *)(param_1 + 100) & 0xff);
      iVar3 = FUN_00043218((int)((ulonglong)param_6 * (ulonglong)local_18),
                           ((int)param_6 >> 0x1f) * local_18 + param_6 * local_14 +
                           (int)((ulonglong)param_6 * (ulonglong)local_18 >> 0x20),iVar3,
                           iVar3 >> 0x1f);
      FUN_000134ec(param_1,uVar1,iVar2 - iVar3);
      FUN_000139a4(param_1,uVar1,2);
      FUN_00016d8c(param_1,uVar1);
      uVar4 = -param_6;
      iVar3 = ((int)uVar4 >> 0x1f) * local_18 + uVar4 * local_14 +
              (int)((ulonglong)uVar4 * (ulonglong)local_18 >> 0x20);
      FUN_00012f3c(*(undefined4 *)(param_1 + 0x10),iVar3,
                   (int)((ulonglong)uVar4 * (ulonglong)local_18),iVar3);
      bVar7 = CARRY4(local_18,local_38);
      local_38 = local_18 + local_38;
      iVar3 = iStack_34;
      iStack_34 = local_14 + iStack_34 + (uint)bVar7;
    }
    FUN_00018d14(param_1);
    FUN_00018e70(param_1);
    if (*(int *)(param_1 + 0xb8) != 0) {
      (**(code **)(param_1 + 0xb8))(param_1,*(code **)(param_1 + 0xb8),local_38,iStack_34,0,param_6)
      ;
    }
  }
  return;
}



/* ===== FUN_000275a8 @ 000275a8 size=324 ===== */

int FUN_000275a8(int param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  undefined4 *local_10;
  int local_c;
  
  local_c = FUN_00018a74(0x14,&local_10);
  if (local_c == 0) {
    memset(local_10,0,0x14);
    *local_10 = 0x7f2bb702;
    if (param_1 == 0) {
      param_1 = 10;
    }
    local_10[2] = param_1;
    local_10[1] = param_2;
    local_c = FUN_00018b38(local_10[2],4,local_10 + 3);
    if (local_c == 0) {
      if (param_3 == (void *)0x0) {
        memset((void *)local_10[3],0,local_10[2] << 2);
      }
      else {
        memcpy((void *)local_10[3],param_3,local_10[2] << 2);
      }
      *param_4 = local_10;
      local_c = 0;
    }
    else {
      FUN_00018c58(&local_10);
    }
  }
  return local_c;
}



/* ===== FUN_000276ec @ 000276ec size=56 ===== */

undefined4 FUN_000276ec(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000275a8(param_2,0,0,param_1);
  return uVar1;
}



/* ===== FUN_00027724 @ 00027724 size=56 ===== */

undefined4 FUN_00027724(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000275a8(param_2,0,0,param_1);
  return uVar1;
}



/* ===== FUN_0002775c @ 0002775c size=112 ===== */

int FUN_0002775c(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_000275a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 0xc),param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(*param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000277cc @ 000277cc size=48 ===== */

undefined4 FUN_000277cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002775c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000277fc @ 000277fc size=680 ===== */

int FUN_000277fc(int *param_1,uint param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  
  if (*param_1 == 0x7f2bb702) {
    if (param_1[2] <= param_1[1]) {
      iVar1 = param_1[2];
      param_1[2] = param_1[2] + 100;
      iVar1 = FUN_00018ca4(iVar1 << 2,param_1[2] << 2,param_1 + 3);
      if (iVar1 != 0) {
        param_1[2] = param_1[2] + -100;
        return iVar1;
      }
    }
    if ((param_1[1] == 0) || (param_2 != *(uint *)(param_1[3] + (param_1[1] + -1) * 4))) {
      if ((param_1[1] == 0) || (*(uint *)(param_1[3] + (param_1[1] + -1) * 4) < param_2)) {
        iVar1 = param_1[1];
        param_1[1] = iVar1 + 1;
        *(uint *)(param_1[3] + iVar1 * 4) = param_2;
        iVar1 = 0;
      }
      else {
        local_10 = param_1[1];
        for (local_c = 0; local_c < param_1[1]; local_c = local_c + 1) {
          if (param_2 == *(uint *)(param_1[3] + local_c * 4)) {
            return 0;
          }
          if (param_2 < *(uint *)(param_1[3] + local_c * 4)) {
            local_10 = local_c;
            break;
          }
        }
        for (local_c = param_1[1]; local_10 < local_c; local_c = local_c + -1) {
          *(undefined4 *)(param_1[3] + local_c * 4) =
               *(undefined4 *)(param_1[3] + (local_c + 0x3fffffff) * 4);
        }
        *(uint *)(param_1[3] + local_10 * 4) = param_2;
        param_1[1] = param_1[1] + 1;
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7f2bb702;
  }
  return iVar1;
}



/* ===== FUN_00027aa4 @ 00027aa4 size=48 ===== */

undefined4 FUN_00027aa4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000277fc(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00027ad4 @ 00027ad4 size=376 ===== */

uint FUN_00027ad4(int *param_1,uint param_2)

{
  uint uVar1;
  uint local_10;
  uint local_c;
  
  if (*param_1 == 0x7f2bb702) {
    if (param_1[1] == 0) {
      local_10 = 0xffffffff;
    }
    else {
      local_c = 0;
      local_10 = param_1[1] - 1;
      if (param_2 == *(uint *)param_1[3]) {
        local_10 = 0;
      }
      else {
        uVar1 = local_c;
        if (param_2 != *(uint *)(param_1[3] + local_10 * 4)) {
          while (((local_c = uVar1, (int)local_c < (int)local_10 &&
                  (uVar1 = local_c + local_10 >> 1, uVar1 != local_c)) && (uVar1 != local_10))) {
            if (param_2 == *(uint *)(param_1[3] + uVar1 * 4)) {
              return uVar1;
            }
            if (param_2 < *(uint *)(param_1[3] + uVar1 * 4)) {
              local_10 = uVar1;
              uVar1 = local_c;
            }
          }
          local_10 = 0xffffffff;
        }
      }
    }
  }
  else {
    local_10 = 0xffffffff;
  }
  return local_10;
}



/* ===== FUN_00027c4c @ 00027c4c size=68 ===== */

bool FUN_00027c4c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00027ad4(param_1,param_2);
  return -1 < iVar1;
}



/* ===== FUN_00027c90 @ 00027c90 size=48 ===== */

undefined4 FUN_00027c90(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00027c4c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00027cc0 @ 00027cc0 size=216 ===== */

undefined4 FUN_00027cc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_c = FUN_00027ad4(param_1,param_2);
    if (local_c < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      for (; local_c < *(int *)(param_1 + 4) + -1; local_c = local_c + 1) {
        *(undefined4 *)(*(int *)(param_1 + 0xc) + local_c * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xc) + (local_c + 1) * 4);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_00027d98 @ 00027d98 size=44 ===== */

void FUN_00027d98(undefined4 param_1,undefined4 param_2)

{
  FUN_00027cc0(param_1,param_2);
  return;
}



/* ===== FUN_00027dc4 @ 00027dc4 size=164 ===== */

int FUN_00027dc4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *local_10 [2];
  
  if (*param_1 == 0x7f2bb702) {
    iVar1 = FUN_00018a74(0xc,local_10);
    if (iVar1 == 0) {
      *local_10[0] = 0x7f2bb703;
      local_10[0][1] = param_1;
      local_10[0][2] = 0;
      *param_2 = local_10[0];
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7f2bb702;
  }
  return iVar1;
}



/* ===== FUN_00027e68 @ 00027e68 size=48 ===== */

undefined4 FUN_00027e68(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00027dc4(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00027e98 @ 00027e98 size=208 ===== */

undefined4 FUN_00027e98(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 == 0x7f2bb703) {
    piVar3 = (int *)param_1[1];
    if (*piVar3 == 0x7f2bb702) {
      if (param_1[2] < piVar3[1]) {
        iVar1 = piVar3[3];
        iVar4 = param_1[2];
        param_1[2] = iVar4 + 1;
        *param_2 = *(undefined4 *)(iVar1 + iVar4 * 4);
        uVar2 = 1;
      }
      else {
        *param_2 = 0;
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00027f68 @ 00027f68 size=48 ===== */

undefined4 FUN_00027f68(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00027e98(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00027f98 @ 00027f98 size=92 ===== */

void FUN_00027f98(int *param_1)

{
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb703)) {
    param_1[1] = 0;
    local_c = param_1;
    FUN_00018c58(&local_c);
  }
  return;
}



/* ===== FUN_00027ff4 @ 00027ff4 size=36 ===== */

void FUN_00027ff4(undefined4 param_1)

{
  FUN_00027f98(param_1);
  return;
}



/* ===== FUN_00028018 @ 00028018 size=196 ===== */

undefined4 FUN_00028018(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0x7f2bb702) {
    if (*param_2 == 0x7f2bb702) {
      if (param_1[1] == param_2[1]) {
        iVar1 = memcmp((void *)param_1[3],(void *)param_2[3],param_1[1] << 2);
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0x7f2bb702;
    }
  }
  else {
    uVar2 = 0x7f2bb702;
  }
  return uVar2;
}



/* ===== FUN_000280dc @ 000280dc size=48 ===== */

undefined4 FUN_000280dc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00028018(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00028134 @ 00028134 size=36 ===== */

void FUN_00028134(undefined4 param_1)

{
  FUN_000392e0(param_1);
  return;
}



/* ===== FUN_00028158 @ 00028158 size=36 ===== */

void FUN_00028158(undefined4 param_1)

{
  FUN_000392e0(param_1);
  return;
}



/* ===== FUN_0002817c @ 0002817c size=48 ===== */

undefined4 FUN_0002817c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003944c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000281ac @ 000281ac size=36 ===== */

void FUN_000281ac(undefined4 param_1)

{
  FUN_0003a5d4(param_1);
  return;
}



/* ===== FUN_000281d0 @ 000281d0 size=388 ===== */

/* WARNING: Removing unreachable block (ram,0x000282f8) */

undefined4 FUN_000281d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == 0x7f2bb701) {
    param_1[0xf] = (int)FUN_00022b50;
    iVar2 = param_1[7] * *(int *)(param_1[4] + 0x28);
    if ((param_1[2] & 0x20000U) == 0) {
      uVar1 = FUN_000375a4(0x7f2bb709,param_1,1,*(undefined4 *)param_1[4],iVar2,param_2,0,param_3);
    }
    else {
      uVar1 = FUN_00038ee4(param_1,0x7f2bb76f,(short)param_1[0x1a],0,1,0,*(undefined4 *)param_1[4],0
                           ,iVar2,0,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x7f2bb701;
  }
  return uVar1;
}



/* ===== FUN_00028354 @ 00028354 size=496 ===== */

undefined4 FUN_00028354(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  
  if (*param_1 == 0x7f2bb701) {
    param_1[0xf] = (int)FUN_00022b50;
    uVar1 = *(uint *)(param_1[4] + 0x14) >> (param_1[0x19] & 0xffU);
    uVar9 = FUN_00012c48(param_1[4]);
    uVar7 = (int)((ulonglong)uVar9 >> 0x20) - (uint)((int)uVar9 == 0);
    uVar3 = param_1[0x19];
    uVar4 = (int)uVar9 - 1U >> (uVar3 & 0xff) | uVar7 << (0x20 - uVar3 & 0xff) |
            uVar7 >> (uVar3 - 0x20 & 0xff);
    uVar7 = uVar7 >> (uVar3 & 0xff);
    lVar2 = (ulonglong)(uint)param_1[7] * (ulonglong)*(uint *)(param_1[4] + 0x24) + (ulonglong)uVar1
    ;
    iVar8 = (int)lVar2;
    iVar5 = iVar8 + -1;
    iVar8 = (int)((ulonglong)lVar2 >> 0x20) - (uint)(iVar8 == 0);
    if ((param_1[2] & 0x20000U) == 0) {
      if ((uVar7 == 0) && (iVar8 == 0)) {
        uVar6 = FUN_000375a4(0x7f2bb708,param_1,uVar1,uVar4,iVar5,param_2,0,param_3);
      }
      else {
        uVar6 = 0x7f2bb789;
      }
    }
    else {
      uVar6 = FUN_00038ee4(param_1,0x7f2bb76e,(short)param_1[0x1a],0,uVar1,0,uVar4,uVar7,iVar5,iVar8
                           ,param_2,param_3);
    }
  }
  else {
    uVar6 = 0x7f2bb701;
  }
  return uVar6;
}



/* ===== FUN_00028544 @ 00028544 size=420 ===== */

int FUN_00028544(int *param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_30 [2];
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*param_1 == 0x7f2bb701) {
    param_1[0xf] = (int)FUN_00022b50;
    if (param_1[0x19] == 0) {
      iVar2 = FUN_00028354(param_1,param_2,param_3);
    }
    else if ((param_1[2] & 0x20000U) == 0) {
      iVar2 = 0x7f2bb789;
    }
    else {
      local_18 = *(undefined4 *)(param_1[4] + 0x14);
      uStack_14 = 0;
      uVar3 = FUN_00012c48(param_1[4]);
      local_20 = (int)uVar3 + -1;
      iStack_1c = (int)((ulonglong)uVar3 >> 0x20) - (uint)((int)uVar3 == 0);
      lVar1 = (ulonglong)(uint)param_1[7] * (ulonglong)*(uint *)(param_1[4] + 0x20) +
              CONCAT44(uStack_14,local_18);
      iVar2 = (int)lVar1;
      local_28 = iVar2 + -1;
      iStack_24 = (int)((ulonglong)lVar1 >> 0x20) - (uint)(iVar2 == 0);
      iVar2 = FUN_00038ee4(param_1,0x7f2bb76e,(short)param_1[0x1a],uStack_14,local_18,uStack_14,
                           local_20,iStack_1c,local_28,iStack_24,param_2,local_30);
      if (iVar2 == 0) {
        *(undefined4 *)(local_30[0] + 0x28) = 0;
        *param_3 = local_30[0];
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = 0x7f2bb701;
  }
  return iVar2;
}



/* ===== FUN_000286e8 @ 000286e8 size=128 ===== */

int FUN_000286e8(int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    iVar1 = param_1[10];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00028768 @ 00028768 size=104 ===== */

undefined4 FUN_00028768(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_18 [4];
  
  uVar1 = FUN_0003982c(param_1,0x7f2bb734,param_2,0,local_18);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_18[0];
  }
  return uVar1;
}



/* ===== FUN_000287d0 @ 000287d0 size=76 ===== */

undefined4 FUN_000287d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000380a0(param_1,0x7f2bb708,0x7f2bb733,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0002881c @ 0002881c size=64 ===== */

undefined4
FUN_0002881c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003982c(param_1,0x7f2bb733,param_3,param_4,param_5);
  return uVar1;
}



/* ===== FUN_0002885c @ 0002885c size=36 ===== */

void FUN_0002885c(undefined4 param_1)

{
  FUN_00039b80(param_1);
  return;
}



/* ===== FUN_00028880 @ 00028880 size=36 ===== */

void FUN_00028880(undefined4 param_1)

{
  FUN_00039b80(param_1);
  return;
}



/* ===== FUN_000288a4 @ 000288a4 size=64 ===== */

undefined4 FUN_000288a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038130(0x7f2bb709,param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_000288e4 @ 000288e4 size=56 ===== */

undefined4
FUN_000288e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003971c(param_5,param_2,param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002891c @ 0002891c size=64 ===== */

undefined4 FUN_0002891c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038130(0x7f2bb708,param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0002895c @ 0002895c size=56 ===== */

undefined4
FUN_0002895c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003971c(param_5,param_2,param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00028994 @ 00028994 size=56 ===== */

undefined4 FUN_00028994(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003a3d0(0x7f2bb738,param_1,param_2);
  return uVar1;
}



/* ===== FUN_000289cc @ 000289cc size=56 ===== */

undefined4 FUN_000289cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003a3d0(0x7f2bb739,param_1,param_2);
  return uVar1;
}



/* ===== FUN_00028a04 @ 00028a04 size=76 ===== */

undefined4 FUN_00028a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000385bc(param_1,0x7f2bb709,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00028a50 @ 00028a50 size=64 ===== */

undefined4
FUN_00028a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003a0f0(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_00028a90 @ 00028a90 size=76 ===== */

undefined4 FUN_00028a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000384fc(param_1,0x7f2bb709,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00028adc @ 00028adc size=64 ===== */

undefined4
FUN_00028adc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003a260(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_00028b1c @ 00028b1c size=76 ===== */

undefined4 FUN_00028b1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000385bc(param_1,0x7f2bb708,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00028b68 @ 00028b68 size=64 ===== */

undefined4
FUN_00028b68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003a0f0(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_00028ba8 @ 00028ba8 size=76 ===== */

undefined4 FUN_00028ba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000384fc(param_1,0x7f2bb708,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00028bf4 @ 00028bf4 size=64 ===== */

undefined4
FUN_00028bf4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003a260(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_00028c34 @ 00028c34 size=152 ===== */

uint FUN_00028c34(uint param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_2 + (param_1 >> 3));
  uVar1 = 1 << (param_1 & 7);
  bVar2 = *pbVar3;
  *pbVar3 = *pbVar3 | (byte)uVar1;
  return uVar1 & bVar2;
}



/* ===== FUN_00028ccc @ 00028ccc size=160 ===== */

uint FUN_00028ccc(uint param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_2 + (param_1 >> 3));
  uVar1 = 1 << (param_1 & 7);
  bVar2 = *pbVar3;
  *pbVar3 = ~(byte)uVar1 & *pbVar3;
  return uVar1 & bVar2;
}



/* ===== FUN_00028d6c @ 00028d6c size=104 ===== */

uint FUN_00028d6c(uint param_1,int param_2)

{
  return 1 << (param_1 & 7) & (uint)*(byte *)(param_2 + (param_1 >> 3));
}



/* ===== FUN_00028dd4 @ 00028dd4 size=108 ===== */

void FUN_00028dd4(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00042b78(0,param_1,&DAT_000455dc,param_2);
  }
  else {
    FUN_00042b78(0,param_1,"#%lu for %s",param_2,param_3);
  }
  return;
}



/* ===== FUN_00028e40 @ 00028e40 size=160 ===== */

uint FUN_00028e40(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
  uVar1 = 1 << (param_1 & 7);
  bVar2 = *pbVar3;
  *pbVar3 = *pbVar3 | (byte)uVar1;
  return uVar1 & bVar2;
}



/* ===== FUN_00028ee0 @ 00028ee0 size=168 ===== */

uint FUN_00028ee0(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
  uVar1 = 1 << (param_1 & 7);
  bVar2 = *pbVar3;
  *pbVar3 = ~(byte)uVar1 & *pbVar3;
  return uVar1 & bVar2;
}



/* ===== FUN_00028f88 @ 00028f88 size=112 ===== */

uint FUN_00028f88(uint param_1,int param_2,int param_3)

{
  return 1 << (param_1 & 7) & (uint)*(byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
}



/* ===== FUN_00028ff8 @ 00028ff8 size=104 ===== */

uint FUN_00028ff8(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55);
  uVar1 = (param_1 & 0x33) + (param_1 >> 2 & 0x33);
  return (uVar1 >> 4) + uVar1 & 0xf;
}



/* ===== FUN_00029060 @ 00029060 size=180 ===== */

uint FUN_00029060(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55555555);
  uVar1 = (param_1 & 0x33333333) + (param_1 >> 2 & 0x33333333);
  uVar1 = (uVar1 >> 4) + uVar1 & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  return (uVar1 >> 0x10) + uVar1 & 0xff;
}



/* ===== FUN_00029114 @ 00029114 size=288 ===== */

int FUN_00029114(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint local_20;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_14 = 0;
  local_c = param_1;
  for (local_20 = param_2; (((uint)local_c & 3) != 0 && (local_20 != 0)); local_20 = local_20 - 1) {
    iVar1 = FUN_00028ff8(*(undefined1 *)local_c);
    local_14 = local_14 + iVar1;
    local_c = (undefined4 *)((int)local_c + 1);
  }
  local_10 = local_c;
  for (; 4 < local_20; local_20 = local_20 - 4) {
    iVar1 = FUN_00029060(*local_10);
    local_14 = local_14 + iVar1;
    local_10 = local_10 + 1;
  }
  local_c = local_10;
  for (; local_20 != 0; local_20 = local_20 - 1) {
    iVar1 = FUN_00028ff8(*(undefined1 *)local_c);
    local_14 = local_14 + iVar1;
    local_c = (undefined4 *)((int)local_c + 1);
  }
  return local_14;
}



/* ===== FUN_00029234 @ 00029234 size=1580 ===== */

uint FUN_00029234(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  uint local_38 [3];
  uint local_2c;
  uint local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = 0;
  local_18 = 0;
  local_28 = *(uint *)(*param_4 + 0x14) >> 2;
  if (((param_4[5] & 2U) == 0) && ((param_4[5] & 4U) == 0)) {
    local_38[0] = *param_1;
    local_38[1] = 0;
    local_14 = (*(code *)param_4[1])
                         (*param_4,local_38,0xffffffff,0xffffffff,param_2,0,param_3,param_4[10]);
    *param_1 = local_38[0];
  }
  if (((param_4[5] & 8U) == 0) || ((local_14 & 1) == 0)) {
    if ((*param_1 == 0) || ((local_14 & 2) != 0)) {
      uVar1 = param_4[2];
      param_4[2] = local_28 + uVar1;
      param_4[3] = ((int)local_28 >> 0x1f) + param_4[3] + (uint)CARRY4(local_28,uVar1);
    }
    else {
      uVar1 = *param_1;
      uVar4 = FUN_00012c48(*(undefined4 *)(*param_4 + 0x10));
      iVar2 = (int)((ulonglong)uVar4 >> 0x20);
      bVar3 = iVar2 == 0;
      if (iVar2 == 0) {
        bVar3 = (uint)uVar4 <= uVar1;
      }
      if ((bVar3) || (*param_1 < *(uint *)(*(int *)(*param_4 + 0x10) + 0x14))) {
        param_4[6] = 0x7f2bb735;
        local_14 = local_14 | 4;
      }
      else {
        iVar2 = FUN_0003be34(*param_4,*param_1,param_4[7]);
        param_4[6] = iVar2;
        if (param_4[6] == 0) {
          local_24 = (uint *)param_4[7];
          local_20 = 0;
          if ((param_4[5] & 1U) == 0) {
            local_1c = 0;
            while (local_1c < (int)local_28) {
              if (*local_24 != 0) {
                local_38[0] = *local_24;
                local_38[1] = 0;
                local_2c = (*(code *)param_4[1])
                                     (*param_4,local_38,param_4[2],param_4[3],*param_1,0,local_20,
                                      param_4[10]);
                *local_24 = local_38[0];
                local_18 = local_18 | local_2c;
                if ((local_2c & 2) != 0) {
                  local_14 = local_14 | 2;
                  break;
                }
              }
              local_20 = local_20 + 4;
              local_1c = local_1c + 1;
              uVar1 = param_4[2];
              param_4[2] = uVar1 + 1;
              param_4[3] = param_4[3] + (uint)(0xfffffffe < uVar1);
              local_24 = local_24 + 1;
            }
          }
          else {
            local_1c = 0;
            while (local_1c < (int)local_28) {
              local_38[0] = *local_24;
              local_38[1] = 0;
              local_2c = (*(code *)param_4[1])
                                   (*param_4,local_38,param_4[2],param_4[3],*param_1,0,local_20,
                                    param_4[10]);
              *local_24 = local_38[0];
              local_18 = local_18 | local_2c;
              if ((local_2c & 2) != 0) {
                local_14 = local_14 | 2;
                break;
              }
              local_20 = local_20 + 4;
              local_1c = local_1c + 1;
              uVar1 = param_4[2];
              param_4[2] = uVar1 + 1;
              param_4[3] = param_4[3] + (uint)(0xfffffffe < uVar1);
              local_24 = local_24 + 1;
            }
          }
          if (((param_4[5] & 8U) == 0) || ((local_18 & 1) == 0)) {
            if ((local_18 & 1) != 0) {
              iVar2 = FUN_0003bee4(*param_4,*param_1,param_4[7]);
              param_4[6] = iVar2;
              if (param_4[6] != 0) {
                local_14 = local_14 | 6;
              }
            }
            if ((((param_4[5] & 2U) != 0) && ((param_4[5] & 4U) == 0)) && ((local_14 & 2) == 0)) {
              local_38[0] = *param_1;
              local_38[1] = 0;
              uVar1 = (*(code *)param_4[1])
                                (*param_4,local_38,0xffffffff,0xffffffff,param_2,0,param_3,
                                 param_4[10]);
              local_14 = local_14 | uVar1;
              *param_1 = local_38[0];
            }
            if (((param_4[5] & 8U) != 0) && ((local_14 & 1) != 0)) {
              param_4[6] = 0x7f2bb76b;
              local_14 = local_14 | 6;
            }
          }
          else {
            param_4[6] = 0x7f2bb76b;
            local_14 = local_18 | 6;
          }
        }
        else {
          local_14 = local_14 | 4;
        }
      }
    }
  }
  else {
    param_4[6] = 0x7f2bb76b;
    local_14 = local_14 | 6;
  }
  return local_14;
}



/* ===== FUN_00029860 @ 00029860 size=1372 ===== */

uint FUN_00029860(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  uint local_38 [3];
  uint local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = 0;
  local_18 = 0;
  local_28 = *(uint *)(*param_4 + 0x14) >> 2;
  if ((param_4[5] & 6U) == 0) {
    local_38[0] = *param_1;
    local_38[1] = 0;
    local_14 = (*(code *)param_4[1])
                         (*param_4,local_38,0xfffffffe,0xffffffff,param_2,0,param_3,param_4[10]);
    *param_1 = local_38[0];
  }
  if (((param_4[5] & 8U) == 0) || ((local_14 & 1) == 0)) {
    if ((*param_1 == 0) || ((local_14 & 2) != 0)) {
      uVar1 = param_4[2];
      local_28 = local_28 * local_28;
      param_4[2] = local_28 + uVar1;
      param_4[3] = ((int)local_28 >> 0x1f) + param_4[3] + (uint)CARRY4(local_28,uVar1);
    }
    else {
      uVar1 = *param_1;
      uVar4 = FUN_00012c48(*(undefined4 *)(*param_4 + 0x10));
      iVar2 = (int)((ulonglong)uVar4 >> 0x20);
      bVar3 = iVar2 == 0;
      if (iVar2 == 0) {
        bVar3 = (uint)uVar4 <= uVar1;
      }
      if ((bVar3) || (*param_1 < *(uint *)(*(int *)(*param_4 + 0x10) + 0x14))) {
        param_4[6] = 0x7f2bb736;
        local_14 = local_14 | 4;
      }
      else {
        iVar2 = FUN_0003be34(*param_4,*param_1,param_4[8]);
        param_4[6] = iVar2;
        if (param_4[6] == 0) {
          local_24 = (int *)param_4[8];
          local_20 = 0;
          if ((param_4[5] & 1U) == 0) {
            for (local_1c = 0; local_1c < (int)local_28; local_1c = local_1c + 1) {
              if (*local_24 == 0) {
                uVar1 = param_4[2];
                param_4[2] = local_28 + uVar1;
                param_4[3] = ((int)local_28 >> 0x1f) + param_4[3] + (uint)CARRY4(local_28,uVar1);
              }
              else {
                local_2c = FUN_00029234(local_24,*param_1,local_20,param_4);
                local_18 = local_18 | local_2c;
                if ((local_2c & 6) != 0) {
                  local_14 = local_14 | local_2c & 6;
                  break;
                }
                local_20 = local_20 + 4;
              }
              local_24 = local_24 + 1;
            }
          }
          else {
            for (local_1c = 0; local_1c < (int)local_28; local_1c = local_1c + 1) {
              local_2c = FUN_00029234(local_24,*param_1,local_20,param_4);
              local_18 = local_18 | local_2c;
              if ((local_2c & 6) != 0) {
                local_14 = local_14 | local_2c & 6;
                break;
              }
              local_20 = local_20 + 4;
              local_24 = local_24 + 1;
            }
          }
          if (((param_4[5] & 8U) == 0) || ((local_18 & 1) == 0)) {
            if ((local_18 & 1) != 0) {
              iVar2 = FUN_0003bee4(*param_4,*param_1,param_4[8]);
              param_4[6] = iVar2;
              if (param_4[6] != 0) {
                local_14 = local_14 | 6;
              }
            }
            if ((((param_4[5] & 2U) != 0) && ((param_4[5] & 4U) == 0)) && ((local_14 & 2) == 0)) {
              local_38[0] = *param_1;
              local_38[1] = 0;
              uVar1 = (*(code *)param_4[1])
                                (*param_4,local_38,0xfffffffe,0xffffffff,param_2,0,param_3,
                                 param_4[10]);
              local_14 = local_14 | uVar1;
              *param_1 = local_38[0];
            }
            if (((param_4[5] & 8U) != 0) && ((local_14 & 1) != 0)) {
              param_4[6] = 0x7f2bb76b;
              local_14 = local_14 | 6;
            }
          }
          else {
            param_4[6] = 0x7f2bb76b;
            local_14 = local_18 | 6;
          }
        }
        else {
          local_14 = local_14 | 4;
        }
      }
    }
  }
  else {
    param_4[6] = 0x7f2bb76b;
    local_14 = local_14 | 6;
  }
  return local_14;
}



/* ===== FUN_00029dbc @ 00029dbc size=1452 ===== */

uint FUN_00029dbc(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  uint local_40 [3];
  uint local_34;
  uint local_30;
  int *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  local_1c = 0;
  local_20 = 0;
  local_30 = *(uint *)(*param_4 + 0x14) >> 2;
  if ((param_4[5] & 6U) == 0) {
    local_40[0] = *param_1;
    local_40[1] = 0;
    local_1c = (*(code *)param_4[1])
                         (*param_4,local_40,0xfffffffd,0xffffffff,param_2,0,param_3,param_4[10]);
    *param_1 = local_40[0];
  }
  if (((param_4[5] & 8U) == 0) || ((local_1c & 1) == 0)) {
    if ((*param_1 == 0) || ((local_1c & 2) != 0)) {
      uVar4 = param_4[2];
      iVar3 = (int)local_30 >> 0x1f;
      uVar1 = (ulonglong)local_30 * (ulonglong)local_30;
      lVar2 = (ulonglong)local_30 * (uVar1 & 0xffffffff);
      uVar5 = (uint)lVar2;
      param_4[2] = uVar5 + uVar4;
      param_4[3] = local_30 * (local_30 * iVar3 + local_30 * iVar3 + (int)(uVar1 >> 0x20)) +
                   (int)uVar1 * iVar3 + (int)((ulonglong)lVar2 >> 0x20) + param_4[3] +
                   (uint)CARRY4(uVar5,uVar4);
    }
    else {
      uVar4 = *param_1;
      uVar7 = FUN_00012c48(*(undefined4 *)(*param_4 + 0x10));
      iVar3 = (int)((ulonglong)uVar7 >> 0x20);
      bVar6 = iVar3 == 0;
      if (iVar3 == 0) {
        bVar6 = (uint)uVar7 <= uVar4;
      }
      if ((bVar6) || (*param_1 < *(uint *)(*(int *)(*param_4 + 0x10) + 0x14))) {
        param_4[6] = 0x7f2bb737;
        local_1c = local_1c | 4;
      }
      else {
        iVar3 = FUN_0003be34(*param_4,*param_1,param_4[9]);
        param_4[6] = iVar3;
        if (param_4[6] == 0) {
          local_2c = (int *)param_4[9];
          local_28 = 0;
          if ((param_4[5] & 1U) == 0) {
            for (local_24 = 0; local_24 < (int)local_30; local_24 = local_24 + 1) {
              if (*local_2c == 0) {
                uVar4 = param_4[2];
                uVar5 = local_30 * local_30;
                param_4[2] = uVar5 + uVar4;
                param_4[3] = ((int)uVar5 >> 0x1f) + param_4[3] + (uint)CARRY4(uVar5,uVar4);
              }
              else {
                local_34 = FUN_00029860(local_2c,*param_1,local_28,param_4);
                local_20 = local_20 | local_34;
                if ((local_34 & 6) != 0) {
                  local_1c = local_1c | local_34 & 6;
                  break;
                }
                local_28 = local_28 + 4;
              }
              local_2c = local_2c + 1;
            }
          }
          else {
            for (local_24 = 0; local_24 < (int)local_30; local_24 = local_24 + 1) {
              local_34 = FUN_00029860(local_2c,*param_1,local_28,param_4);
              local_20 = local_20 | local_34;
              if ((local_34 & 6) != 0) {
                local_1c = local_1c | local_34 & 6;
                break;
              }
              local_28 = local_28 + 4;
              local_2c = local_2c + 1;
            }
          }
          if (((param_4[5] & 8U) == 0) || ((local_20 & 1) == 0)) {
            if ((local_20 & 1) != 0) {
              iVar3 = FUN_0003bee4(*param_4,*param_1,param_4[9]);
              param_4[6] = iVar3;
              if (param_4[6] != 0) {
                local_1c = local_1c | 6;
              }
            }
            if ((((param_4[5] & 2U) != 0) && ((param_4[5] & 4U) == 0)) && ((local_1c & 2) == 0)) {
              local_40[0] = *param_1;
              local_40[1] = 0;
              uVar4 = (*(code *)param_4[1])
                                (*param_4,local_40,0xfffffffd,0xffffffff,param_2,0,param_3,
                                 param_4[10]);
              local_1c = local_1c | uVar4;
              *param_1 = local_40[0];
            }
            if (((param_4[5] & 8U) != 0) && ((local_1c & 1) != 0)) {
              param_4[6] = 0x7f2bb76b;
              local_1c = local_1c | 6;
            }
          }
          else {
            param_4[6] = 0x7f2bb76b;
            local_1c = local_20 | 6;
          }
        }
        else {
          local_1c = local_1c | 4;
        }
      }
    }
  }
  else {
    param_4[6] = 0x7f2bb76b;
    local_1c = local_1c | 6;
  }
  return local_1c;
}



/* ===== FUN_0002a368 @ 0002a368 size=2812 ===== */

int FUN_0002a368(int *param_1,undefined4 param_2,uint param_3,int param_4,code *param_5,
                undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint local_fc;
  undefined4 local_f4;
  int local_f0 [2];
  int *local_e8;
  code *local_e4;
  uint local_e0;
  int iStack_dc;
  uint local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  ushort local_b8 [16];
  uint local_98;
  int local_94;
  int local_60;
  int local_5c;
  int local_58 [3];
  int local_4c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined8 local_20;
  uint local_18;
  int local_14;
  
  local_18 = 0;
  if (*param_1 != 0x7f2bb701) {
    return 0x7f2bb701;
  }
  local_d0 = FUN_0001c9f4(param_1,param_2,local_b8);
  if (local_d0 != 0) {
    return local_d0;
  }
  if ((local_98 & 0x10000000) != 0) {
    return 0x7f2bb79d;
  }
  if ((((param_3 & 0x1000) != 0) && ((local_b8[0] & 0xf000) != 0x4000)) && (local_4c != 0)) {
    return 0x7f2bb752;
  }
  local_30 = (uint)param_1[5] >> 2;
  local_e4 = param_5;
  local_c0 = param_6;
  local_e0 = 0;
  iStack_dc = 0;
  local_e8 = param_1;
  local_d4 = param_3;
  iVar1 = param_4;
  if (param_4 == 0) {
    local_34 = FUN_00018b38(3,param_1[5],&local_cc);
    iVar1 = local_cc;
    if (local_34 != 0) {
      return local_34;
    }
  }
  local_cc = iVar1;
  local_c8 = local_cc + param_1[5];
  local_c4 = local_c8 + param_1[5];
  if (((*(int *)(param_1[4] + 0x48) == 1) && ((param_3 & 4) == 0)) && (local_94 != 0)) {
    local_f0[0] = local_94;
    local_f0[1] = 0;
    uVar2 = (*local_e4)(param_1,local_f0,0xfffffffc,0xffffffff,0,0,param_6);
    local_18 = local_18 | uVar2;
    local_94 = local_f0[0];
    if ((local_18 & 2) == 0) {
      if (((local_d4 & 8) == 0) || ((local_18 & 1) == 0)) goto LAB_0002a5b8;
      local_d0 = 0x7f2bb76b;
      local_18 = local_18 | 6;
    }
  }
  else {
LAB_0002a5b8:
    if ((local_98 & 0x80000) == 0) {
      for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
        if ((*(int *)(local_b8 + (local_14 + 10) * 2) != 0) || ((param_3 & 1) != 0)) {
          local_f0[0] = *(int *)(local_b8 + (local_14 + 10) * 2);
          local_f0[1] = 0;
          uVar2 = (*local_e4)(param_1,local_f0,local_e0,iStack_dc,0,local_14,param_6);
          local_18 = local_18 | uVar2;
          *(int *)(local_b8 + (local_14 + 10) * 2) = local_f0[0];
          if ((local_18 & 2) != 0) goto LAB_0002add0;
        }
        bVar3 = 0xfffffffe < local_e0;
        local_e0 = local_e0 + 1;
        iStack_dc = iStack_dc + (uint)bVar3;
      }
      if (((local_d4 & 8) == 0) || ((local_18 & 1) == 0)) {
        if ((local_60 == 0) && ((param_3 & 1) == 0)) {
          bVar3 = CARRY4(local_30,local_e0);
          local_e0 = local_30 + local_e0;
          iStack_dc = ((int)local_30 >> 0x1f) + iStack_dc + (uint)bVar3;
        }
        else {
          uVar2 = FUN_00029234(&local_60,0,0xc,&local_e8);
          local_18 = local_18 | uVar2;
          if ((local_18 & 2) != 0) goto LAB_0002add0;
        }
        if ((local_5c == 0) && ((param_3 & 1) == 0)) {
          uVar2 = local_30 * local_30;
          bVar3 = CARRY4(uVar2,local_e0);
          local_e0 = uVar2 + local_e0;
          iStack_dc = ((int)uVar2 >> 0x1f) + iStack_dc + (uint)bVar3;
        }
        else {
          uVar2 = FUN_00029860(&local_5c,0,0xd,&local_e8);
          local_18 = local_18 | uVar2;
          if ((local_18 & 2) != 0) goto LAB_0002add0;
        }
        if ((local_58[0] != 0) || ((param_3 & 1) != 0)) {
          uVar2 = FUN_00029dbc(local_58,0,0xe,&local_e8);
          local_18 = local_18 | uVar2;
        }
      }
      else {
        local_d0 = 0x7f2bb76b;
        local_18 = local_18 | 6;
      }
    }
    else {
      local_20 = 0;
      local_24 = 1;
      local_d0 = FUN_0002ff98(param_1,param_2,local_b8,&local_f4);
      if (local_d0 == 0) {
        do {
          do {
            while( true ) {
              if (local_24 == 0) {
                local_d0 = 0;
              }
              else {
                local_d0 = FUN_00030374(local_f4,local_24,&local_110);
              }
              if (local_d0 != 0) {
                if ((local_d0 == 0x7f2bb77c) && (local_d0 = 0, (param_3 & 1) != 0))
                goto LAB_0002a670;
                goto LAB_0002ab18;
              }
              local_24 = 9;
              local_130 = CONCAT44(local_10c,local_110);
              if ((local_fc & 1) == 0) break;
              local_28 = (uint)((local_fc & 2) != 0);
              local_34 = FUN_00030374(local_f4,9,&local_128);
              uVar2 = uStack_104 + CARRY4(local_108,local_100);
              bVar3 = local_20._4_4_ <= uVar2;
              if (uVar2 == local_20._4_4_) {
                bVar3 = (uint)local_20 <= local_108 + local_100;
              }
              if (bVar3 && (uVar2 != local_20._4_4_ || local_108 + local_100 != (uint)local_20)) {
                bVar3 = local_20._4_4_ <= uStack_104;
                if (uStack_104 == local_20._4_4_) {
                  bVar3 = (uint)local_20 <= local_108;
                }
                if (bVar3 && (uStack_104 != local_20._4_4_ || local_108 != (uint)local_20)) {
                  local_20 = (ulonglong)local_108;
                }
                local_130 = CONCAT44(local_130._4_4_ +
                                     (uint)CARRY4((uint)local_130,(uint)local_20 - local_108),
                                     (uint)local_130 + ((uint)local_20 - local_108));
                local_20 = CONCAT44(uStack_104,local_108);
                for (local_2c = 0; local_2c < local_100; local_2c = local_2c + 1) {
                  local_138 = (uint)local_130;
                  local_134 = local_130._4_4_;
                  local_38 = (*local_e4)(param_1,&local_138,(uint)local_20,local_20._4_4_,0,0,
                                         param_6);
                  local_18 = local_18 | local_38;
                  if (((local_d4 & 8) != 0) && ((local_18 & 1) != 0)) {
                    local_d0 = 0x7f2bb76b;
                    local_18 = local_18 | 6;
                    goto LAB_0002ab18;
                  }
                  if ((local_38 & 1) != 0) {
                    local_d0 = FUN_00032328(local_f4,local_20._4_4_,(uint)local_20,local_20._4_4_,
                                            local_138,local_134,local_28);
                    if (local_d0 != 0) goto LAB_0002ab18;
                  }
                  if ((local_18 & 2) != 0) goto LAB_0002ab18;
                  local_130 = CONCAT44(local_130._4_4_ + (uint)(0xfffffffe < (uint)local_130),
                                       (uint)local_130 + 1);
                  local_20 = CONCAT44(local_20._4_4_ + (0xfffffffe < (uint)local_20),
                                      (uint)local_20 + 1);
                }
                if (local_34 == 0) {
                  local_110 = local_128;
                  local_10c = uStack_124;
                  local_108 = uStack_120;
                  uStack_104 = uStack_11c;
                  local_100 = local_118;
                  local_fc = uStack_114;
                  local_24 = 0;
                }
              }
            }
          } while (((local_d4 & 4) != 0) ||
                  ((((local_fc & 4) != 0 || ((local_d4 & 2) != 0)) &&
                   (((local_fc & 4) == 0 || ((local_d4 & 2) == 0))))));
          uVar2 = (*local_e4)(param_1,&local_130,0xffffffff,0xffffffff,0,0,param_6);
          local_18 = local_18 | uVar2;
          if ((local_18 & 1) != 0) {
            local_110 = (uint)local_130;
            local_10c = local_130._4_4_;
            local_d0 = FUN_000314d8(local_f4,0,&local_110);
            if (local_d0 != 0) break;
          }
        } while ((local_18 & 2) == 0);
LAB_0002ab18:
        FUN_0002fe94(local_f4);
        local_18 = local_18 | 4;
        goto LAB_0002ae20;
      }
    }
  }
LAB_0002add0:
  if (((local_18 & 1) != 0) && (local_34 = FUN_0001cfb0(param_1,param_2,local_b8), local_34 != 0)) {
    local_18 = local_18 | 4;
    local_d0 = local_34;
  }
LAB_0002ae20:
  if (param_4 == 0) {
    FUN_00018c58(&local_cc);
  }
  if ((local_18 & 4) == 0) {
    local_d0 = 0;
  }
  return local_d0;
LAB_0002a670:
  local_130 = 0;
  local_38 = (*local_e4)(param_1,&local_130,(uint)local_20,local_20._4_4_,0,0,param_6);
  local_18 = local_18 | local_38;
  if (((local_d4 & 8) != 0) && ((local_18 & 1) != 0)) {
    local_d0 = 0x7f2bb76b;
    local_18 = local_18 | 6;
    goto LAB_0002ab18;
  }
  if ((local_38 & 1) == 0) goto LAB_0002ab18;
  uVar2 = (uint)local_20;
  iVar1 = local_20._4_4_;
  local_20 = CONCAT44(local_20._4_4_ + (0xfffffffe < (uint)local_20),(uint)local_20 + 1);
  local_d0 = FUN_00032328(local_f4,0,uVar2,iVar1,(int)local_130,local_130._4_4_,0);
  if ((local_d0 != 0) || ((local_18 & 2) != 0)) goto LAB_0002ab18;
  if ((uint)local_130 == 0 && local_130._4_4_ == 0) goto LAB_0002ab18;
  goto LAB_0002a670;
}



/* ===== FUN_0002ae64 @ 0002ae64 size=140 ===== */

undefined4
FUN_0002ae64(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 local_1c [2];
  undefined4 *local_14;
  
  local_14 = param_8;
  local_1c[0] = *param_2;
  uVar1 = (*(code *)*param_8)(param_1,local_1c,param_3,param_4,param_5,param_7,param_8[1]);
  *param_2 = local_1c[0];
  param_2[1] = 0;
  return uVar1;
}



/* ===== FUN_0002aef0 @ 0002aef0 size=100 ===== */

undefined4
FUN_0002aef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_6;
  local_10 = param_5;
  uVar1 = FUN_0002a368(param_1,param_2,param_3,param_4,FUN_0002ae64,&local_10);
  return uVar1;
}



/* ===== FUN_0002af54 @ 0002af54 size=80 ===== */

undefined4
FUN_0002af54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*param_7)(param_1,param_2,param_3,param_7[1],param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002afa4 @ 0002afa4 size=104 ===== */

undefined4
FUN_0002afa4(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_6;
  local_10 = param_5;
  uVar1 = FUN_0002aef0(param_1,param_2,param_3 | 0x1000,param_4,FUN_0002af54,&local_10);
  return uVar1;
}



/* ===== FUN_0002b00c @ 0002b00c size=60 ===== */

bool FUN_0002b00c(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x200) != 0;
}



/* ===== FUN_0002b048 @ 0002b048 size=544 ===== */

int FUN_0002b048(int param_1,uint param_2,int param_3,int param_4,int *param_5,int param_6,
                int *param_7)

{
  int iVar1;
  int local_18;
  int local_14;
  
  if (param_3 == 0) {
    if ((param_2 & 2) == 0) {
      *param_7 = 0;
      local_14 = 0;
    }
    else {
      local_14 = 0x7f2bb75f;
    }
  }
  else {
    local_14 = (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14))
                         (*(undefined4 *)(param_1 + 4),param_3,1,param_4);
    if (local_14 == 0) {
      if ((param_2 & 2) == 0) {
        local_18 = *(int *)(param_4 + param_6 * 4);
        if ((local_18 == 0) && ((param_2 & 1) != 0)) {
          local_18 = param_3;
          if (param_6 != 0) {
            local_18 = *(int *)(param_4 + (param_6 + 0x3fffffff) * 4);
          }
          local_14 = FUN_00025f10(param_1,local_18,param_4 + *(int *)(param_1 + 0x14),&local_18);
          if (local_14 != 0) {
            return local_14;
          }
          *(int *)(param_4 + param_6 * 4) = local_18;
          iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x18))
                            (*(undefined4 *)(param_1 + 4),param_3,1,param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          *param_5 = *param_5 + 1;
        }
        *param_7 = local_18;
        local_14 = 0;
      }
      else {
        local_18 = *param_7;
        *(int *)(param_4 + param_6 * 4) = local_18;
        local_14 = (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x18))
                             (*(undefined4 *)(param_1 + 4),param_3,1,param_4);
      }
    }
  }
  return local_14;
}



/* ===== FUN_0002b268 @ 0002b268 size=232 ===== */

int FUN_0002b268(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_1c = 0;
  local_14 = *(uint *)(param_1 + 0x14) >> 2;
  uVar1 = FUN_00042c94(param_6,local_14);
  local_18 = FUN_0002b048(param_1,param_2 & 0xfffffffd,param_3,param_4,param_5,uVar1,&local_1c);
  uVar1 = local_1c;
  if (local_18 == 0) {
    FUN_00042d3c(param_6,local_14);
    local_18 = FUN_0002b048(param_1,param_2,uVar1,param_4,param_5,extraout_r1,param_7);
  }
  return local_18;
}



/* ===== FUN_0002b350 @ 0002b350 size=232 ===== */

int FUN_0002b350(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_1c = 0;
  local_14 = *(uint *)(param_1 + 0x14) >> 2;
  uVar1 = FUN_00042c94(param_6,local_14);
  local_18 = FUN_0002b268(param_1,param_2 & 0xfffffffd,param_3,param_4,param_5,uVar1,&local_1c);
  uVar1 = local_1c;
  if (local_18 == 0) {
    FUN_00042d3c(param_6,local_14);
    local_18 = FUN_0002b048(param_1,param_2,uVar1,param_4,param_5,extraout_r1,param_7);
  }
  return local_18;
}



/* ===== FUN_0002b438 @ 0002b438 size=432 ===== */

undefined4
FUN_0002b438(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            uint param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 local_28;
  uint local_20;
  uint uStack_1c;
  uint local_14;
  
  local_28 = 0;
  iVar2 = FUN_0002b00c(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar1 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
    local_20 = uVar1 & param_5;
    uStack_1c = (int)uVar1 >> 0x1f & param_6;
    for (local_14 = 0; (int)local_14 < 1 << (*(uint *)(param_1 + 100) & 0xff);
        local_14 = local_14 + 1) {
      if (param_6 != uStack_1c + ((int)local_14 >> 0x1f) + (uint)CARRY4(local_20,local_14) ||
          param_5 != local_20 + local_14) {
        FUN_0002b6c4(param_1,param_2,param_3,param_4,0,0,local_20 + local_14,
                     uStack_1c + ((int)local_14 >> 0x1f) + (uint)CARRY4(local_20,local_14),0,0,
                     &local_28);
        if ((uint)local_28 != 0 || local_28._4_4_ != 0) break;
      }
    }
    if ((uint)local_28 != 0 || local_28._4_4_ != 0) {
      *param_7 = (param_5 - local_20) + ((uint)local_28 - local_14);
      param_7[1] = (param_6 - (uStack_1c + (param_5 < local_20))) +
                   (local_28._4_4_ - (((int)local_14 >> 0x1f) + (uint)((uint)local_28 < local_14)))
                   + (uint)CARRY4(param_5 - local_20,(uint)local_28 - local_14);
    }
  }
  return 0;
}



/* ===== FUN_0002b5e8 @ 0002b5e8 size=220 ===== */

int FUN_0002b5e8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined8 *param_7)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  *param_7 = 0;
  iVar1 = FUN_0002b00c(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) || ((*(uint *)(param_3 + 0x20) & 0x80000) == 0)) {
    local_c = 0;
  }
  else {
    local_c = FUN_0002ff98(param_1,param_2,param_3,&local_10);
    if (local_c == 0) {
      local_c = FUN_0002b438(param_1,param_2,param_3,local_10,param_5,param_6,param_7);
      FUN_0002fe94(local_10);
    }
  }
  return local_c;
}



/* ===== FUN_0002b6c4 @ 0002b6c4 size=928 ===== */

int FUN_0002b6c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,uint param_6,uint param_7,uint param_8,uint *param_9,
                int *param_10,int *param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 local_40;
  uint local_38;
  int iStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_14 = 0;
  local_1c = (int)param_6 >> 2 & 1;
  if ((param_6 & 2) != 0) {
    iVar2 = FUN_00032328(param_4,local_1c,param_7,param_8,*param_11,param_11[1],local_1c);
    return iVar2;
  }
  local_18 = FUN_00031268(param_4,param_2,param_7,param_8);
  if (local_18 == 0) {
    iVar2 = FUN_00030374(param_4,0,&local_38);
    if (iVar2 != 0) {
      return iVar2;
    }
    local_20 = param_7 - local_30;
    bVar6 = uStack_2c <= param_8;
    if (param_8 == uStack_2c) {
      bVar6 = local_30 <= param_7;
    }
    local_18 = 0;
    if ((bVar6) && (local_20 <= local_28)) {
      uVar7 = VectorShiftRight(CONCAT44(local_20,local_20),0x20);
      *param_11 = (uint)uVar7 + local_38;
      param_11[1] = (int)((ulonglong)uVar7 >> 0x20) + iStack_34 + (uint)CARRY4((uint)uVar7,local_38)
      ;
      if ((param_9 != (uint *)0x0) && ((local_24 & 2) != 0)) {
        *param_9 = *param_9 | 1;
      }
    }
  }
  else {
    if (local_18 != 0x7f2bb784) {
      return local_18;
    }
    local_18 = 0x7f2bb784;
  }
  if ((*param_11 == 0 && param_11[1] == 0) && ((param_6 & 1) != 0)) {
    FUN_0002b438(param_1,param_2,param_3,param_4,param_7,param_8,&local_40);
    if ((uint)local_40 == 0 && local_40._4_4_ == 0) {
      local_18 = FUN_0002b6c4(param_1,param_2,param_3,param_4,param_5,0,param_7 - 1,
                              param_8 - (param_7 == 0),0,param_10,&local_40);
      uVar7 = CONCAT44(local_40._4_4_,(uint)local_40);
      if (local_18 != 0) {
        uVar7 = FUN_00026288(param_1,param_2,param_3,param_8,param_7,param_8);
      }
      local_40._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
      local_40._0_4_ = (uint)uVar7;
      iVar2 = FUN_00025da0(param_1,param_5,(uint)local_40,local_40._4_4_,param_5,&local_40);
      local_40 = uVar7;
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar1 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
      uVar4 = (uint)local_40 & uVar1;
      uVar5 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
      uVar3 = uVar5 & param_7;
      local_40._0_4_ = uVar4 + uVar3;
      local_40._4_4_ =
           (local_40._4_4_ & (int)uVar1 >> 0x1f) + ((int)uVar5 >> 0x1f & param_8) +
           (uint)CARRY4(uVar4,uVar3);
      local_14 = local_14 + 1;
      local_18 = 0;
    }
    local_18 = FUN_00032328(param_4,local_1c,param_7,param_8,(uint)local_40,local_40._4_4_,local_1c)
    ;
    if (local_18 != 0) {
      FUN_00027018(param_1,0xffffffff,(uint)local_40,local_40._4_4_,0xffffffff);
      return local_18;
    }
    iVar2 = FUN_0001c9f4(param_1,param_2,param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    *param_10 = *param_10 + local_14;
    *param_11 = (uint)local_40;
    param_11[1] = local_40._4_4_;
  }
  return 0;
}



/* ===== FUN_0002ba64 @ 0002ba64 size=340 ===== */

bool FUN_0002ba64(int param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_4 == 0 && param_3 != 0xffffffff) {
    if ((*(uint *)(param_2 + 0x20) & 0x80000) == 0) {
      uVar2 = *(uint *)(param_1 + 0x14) >> 2;
      lVar1 = ((ulonglong)uVar2 * (ulonglong)uVar2 & 0xffffffff) * (ulonglong)uVar2;
      lVar1 = (ulonglong)uVar2 * (ulonglong)uVar2 + (ulonglong)uVar2 +
              CONCAT44((int)((ulonglong)uVar2 * (ulonglong)uVar2 >> 0x20) * uVar2 +
                       (int)((ulonglong)lVar1 >> 0x20),(int)lVar1) + 0xc;
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      bVar3 = uVar2 <= param_4;
      if (param_4 == uVar2) {
        bVar3 = (uint)lVar1 <= param_3;
      }
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}



/* ===== FUN_0002bbb8 @ 0002bbb8 size=1992 ===== */

int FUN_0002bbb8(int param_1,undefined4 param_2,undefined1 *param_3,int param_4,uint param_5,
                undefined4 param_6,uint param_7,uint param_8,undefined4 *param_9,int *param_10)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_c0;
  undefined1 *local_bc;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined1 auStack_9c [128];
  uint local_1c;
  int local_18;
  int local_14;
  
  local_a0 = 0;
  local_ac = 0;
  local_14 = 0;
  local_b0 = 0;
  local_18 = 0;
  if ((param_5 & 2) == 0) {
    param_10[0] = 0;
    param_10[1] = 0;
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = 0;
  }
  local_bc = param_3;
  if (param_3 == (undefined1 *)0x0) {
    iVar1 = FUN_0001c9f4(param_1,param_2,auStack_9c);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_bc = auStack_9c;
  }
  local_14 = 0;
  local_1c = *(uint *)(param_1 + 0x14) >> 2;
  iVar1 = FUN_0002ba64(param_1,local_bc,param_7,param_8);
  if (iVar1 != 0) {
    return 0x7f2bb752;
  }
  if ((*(uint *)(local_bc + 0x20) & 0x10000000) != 0) {
    return 0x7f2bb7a6;
  }
  local_c0 = param_4;
  if (param_4 == 0) {
    iVar1 = FUN_00018b38(2,*(undefined4 *)(param_1 + 0x14),&local_ac);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_c0 = local_ac;
    local_14 = 0;
  }
  if ((*(uint *)(local_bc + 0x20) & 0x80000) == 0) {
    if (param_8 == 0 && param_7 < 0xc) {
      if ((param_5 & 2) == 0) {
        *param_10 = *(int *)(local_bc + (param_7 + 10) * 4);
        param_10[1] = 0;
        if (param_7 == 0 && param_8 == 0) {
          local_a4 = FUN_00026288(param_1,param_2,local_bc,param_8,param_7,param_8);
        }
        else {
          local_a4 = *(int *)(local_bc + (param_7 + 9) * 4);
        }
        if (((*param_10 == 0 && param_10[1] == 0) && ((param_5 & 1) != 0)) &&
           (local_14 = FUN_00025f10(param_1,local_a4,local_c0,&local_a4), local_14 == 0)) {
          *(int *)(local_bc + (param_7 + 10) * 4) = local_a4;
          local_b0 = local_b0 + 1;
          *param_10 = local_a4;
          param_10[1] = 0;
        }
      }
      else {
        local_a4 = *param_10;
        *(int *)(local_bc + (param_7 + 10) * 4) = local_a4;
        local_18 = local_18 + 1;
      }
    }
    else {
      uVar2 = param_7 - 0xc;
      local_a8 = *param_10;
      if (param_8 == param_7 < 0xc && uVar2 < local_1c) {
        local_a4 = *(int *)(local_bc + 0x58);
        if (local_a4 == 0) {
          if ((param_5 & 1) == 0) {
            if ((param_5 & 2) != 0) {
              local_14 = 0x7f2bb75f;
            }
            goto LAB_0002c298;
          }
          local_a4 = *(int *)(local_bc + 0x54);
          local_14 = FUN_00025f10(param_1,local_a4,local_c0,&local_a4);
          if (local_14 != 0) goto LAB_0002c298;
          *(int *)(local_bc + 0x58) = local_a4;
          local_b0 = local_b0 + 1;
        }
        local_14 = FUN_0002b048(param_1,param_5,local_a4,local_c0,&local_b0,uVar2,&local_a8);
        if (local_14 == 0) {
          *param_10 = local_a8;
          param_10[1] = 0;
        }
      }
      else {
        uVar3 = uVar2 - local_1c;
        if (param_8 - (param_7 < 0xc) != (uint)(uVar2 < local_1c) || local_1c * local_1c <= uVar3) {
          iVar1 = local_1c * local_1c;
          local_a4 = *(int *)(local_bc + 0x60);
          if (local_a4 == 0) {
            if ((param_5 & 1) == 0) {
              if ((param_5 & 2) != 0) {
                local_14 = 0x7f2bb75f;
              }
              goto LAB_0002c298;
            }
            local_a4 = *(int *)(local_bc + 0x5c);
            local_14 = FUN_00025f10(param_1,local_a4,local_c0,&local_a4);
            if (local_14 != 0) goto LAB_0002c298;
            *(int *)(local_bc + 0x60) = local_a4;
            local_b0 = local_b0 + 1;
          }
          local_14 = FUN_0002b350(param_1,param_5,local_a4,local_c0,&local_b0,uVar3 - iVar1,
                                  &local_a8);
          if (local_14 == 0) {
            *param_10 = local_a8;
            param_10[1] = 0;
          }
          goto LAB_0002c298;
        }
        local_a4 = *(int *)(local_bc + 0x5c);
        if (local_a4 == 0) {
          if ((param_5 & 1) == 0) {
            if ((param_5 & 2) != 0) {
              local_14 = 0x7f2bb75f;
            }
            goto LAB_0002c298;
          }
          local_a4 = *(int *)(local_bc + 0x58);
          local_14 = FUN_00025f10(param_1,local_a4,local_c0,&local_a4);
          if (local_14 != 0) goto LAB_0002c298;
          *(int *)(local_bc + 0x5c) = local_a4;
          local_b0 = local_b0 + 1;
        }
        local_14 = FUN_0002b268(param_1,param_5,local_a4,local_c0,&local_b0,uVar3,&local_a8);
        if (local_14 == 0) {
          *param_10 = local_a8;
          param_10[1] = 0;
        }
      }
    }
  }
  else {
    local_14 = FUN_0002ff98(param_1,param_2,local_bc,&local_a0);
    if (local_14 == 0) {
      local_14 = FUN_0002b6c4(param_1,param_2,local_bc,local_a0,local_c0,param_5,param_7,param_8,
                              param_9,&local_b0,param_10);
    }
  }
LAB_0002c298:
  if (((*param_10 != 0 || param_10[1] != 0) && (local_14 == 0)) && ((param_5 & 8) != 0)) {
    local_14 = FUN_0001ddd0(param_1,1,*param_10,param_10[1],1,0,0);
  }
  if (local_ac != 0) {
    FUN_00018c58(&local_ac);
  }
  if (local_a0 != 0) {
    FUN_0002fe94(local_a0);
  }
  if ((local_14 == 0) && ((local_b0 != 0 || (local_18 != 0)))) {
    FUN_0003b988(param_1,local_bc,local_b0,local_b0 >> 0x1f);
    local_14 = FUN_0001cfb0(param_1,param_2,local_bc);
  }
  return local_14;
}



/* ===== FUN_0002c380 @ 0002c380 size=192 ===== */

/* WARNING: Removing unreachable block (ram,0x0002c41c) */

int FUN_0002c380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_7;
  iVar1 = FUN_0002bbb8(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    *param_7 = uVar2;
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0002c440 @ 0002c440 size=152 ===== */

uint FUN_0002c440(uint param_1,byte *param_2,int param_3)

{
  int local_1c;
  uint local_14;
  byte *local_c;
  
  local_1c = param_3;
  local_14 = param_1;
  local_c = param_2;
  while (local_1c != 0) {
    local_14 = (uint)*(ushort *)(&DAT_000455e4 + ((local_14 ^ *local_c) & 0xff) * 2) ^
               local_14 >> 8 & 0xff;
    local_1c = local_1c + -1;
    local_c = local_c + 1;
  }
  return local_14;
}



/* ===== FUN_0002c4d8 @ 0002c4d8 size=808 ===== */

uint FUN_0002c4d8(uint param_1,byte *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_44;
  byte *local_40;
  uint local_3c;
  byte *local_10;
  uint *local_c;
  
  local_44 = param_3;
  local_40 = param_2;
  local_3c = param_1;
  if (((uint)param_2 & 3) != 0) {
    while (local_40 = param_2, param_3 != 0) {
      local_40 = param_2 + 1;
      local_3c = local_3c >> 8 ^ *(uint *)(param_4 + ((local_3c ^ *param_2) & 0xff) * 4);
      local_44 = local_44 - 1;
      if (local_44 == 0) break;
      param_2 = local_40;
      param_3 = (uint)local_40 & 3;
    }
  }
  uVar1 = local_44 & 7;
  local_c = (uint *)(local_40 + -4);
  for (local_44 = local_44 >> 3; local_44 != 0; local_44 = local_44 - 1) {
    local_3c = local_c[1] ^ local_3c;
    local_c = local_c + 2;
    uVar2 = *local_c;
    local_3c = *(uint *)(param_4 + (uVar2 >> 0x18) * 4) ^
               *(uint *)(param_4 + 0xc00 + (uVar2 & 0xff) * 4) ^
               *(uint *)(param_4 + 0x800 + (uVar2 >> 8 & 0xff) * 4) ^
               *(uint *)(param_4 + 0x400 + (uVar2 >> 0x10 & 0xff) * 4) ^
               *(uint *)(param_4 + 0x1000 + (local_3c >> 0x18) * 4) ^
               *(uint *)(param_4 + 0x1c00 + (local_3c & 0xff) * 4) ^
               *(uint *)(param_4 + 0x1800 + (local_3c >> 8 & 0xff) * 4) ^
               *(uint *)(param_4 + 0x1400 + (local_3c >> 0x10 & 0xff) * 4);
  }
  if (uVar1 != 0) {
    local_10 = (byte *)((int)local_c + 3);
    local_44 = uVar1;
    do {
      local_10 = local_10 + 1;
      local_3c = local_3c >> 8 ^ *(uint *)(param_4 + ((local_3c ^ *local_10) & 0xff) * 4);
      local_44 = local_44 - 1;
    } while (local_44 != 0);
  }
  return local_3c;
}



/* ===== FUN_0002c800 @ 0002c800 size=68 ===== */

undefined4 FUN_0002c800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c4d8(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002c844 @ 0002c844 size=76 ===== */

undefined4 FUN_0002c844(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c800(param_1,param_2,param_3,&DAT_000477e4,0x82f63b78);
  return uVar1;
}



/* ===== FUN_0002c890 @ 0002c890 size=92 ===== */

undefined4 FUN_0002c890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000180cc(param_1);
  uVar1 = FUN_0002c4d8(uVar1,param_2,param_3,param_4);
  uVar1 = FUN_000180cc(uVar1);
  return uVar1;
}



/* ===== FUN_0002c8ec @ 0002c8ec size=76 ===== */

undefined4 FUN_0002c8ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c890(param_1,param_2,param_3,&DAT_000457e4,0x4c11db7);
  return uVar1;
}



/* ===== FUN_0002c938 @ 0002c938 size=196 ===== */

int FUN_0002c938(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  int local_c;
  
  bVar1 = false;
  local_c = FUN_0001d5d4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4,1
                         ,param_5);
  if (local_c == 0) {
    if (((*(uint *)(param_1 + 8) & 0x200000) == 0) &&
       (iVar2 = FUN_0001606c(param_1,param_7,param_5), iVar2 == 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      local_c = 0x7f2bb796;
    }
  }
  return local_c;
}



/* ===== FUN_0002c9fc @ 0002c9fc size=72 ===== */

undefined4
FUN_0002c9fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c938(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return uVar1;
}



/* ===== FUN_0002ca44 @ 0002ca44 size=80 ===== */

undefined4 FUN_0002ca44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c9fc(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002ca94 @ 0002ca94 size=76 ===== */

undefined4 FUN_0002ca94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c9fc(param_1,param_3,param_2,0,param_3,0);
  return uVar1;
}



/* ===== FUN_0002cae0 @ 0002cae0 size=124 ===== */

int FUN_0002cae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_c;
  
  local_c = FUN_00016130(param_1,param_7,param_5);
  if (local_c == 0) {
    local_c = FUN_0001d6a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4
                           ,1,param_5);
  }
  return local_c;
}



/* ===== FUN_0002cb5c @ 0002cb5c size=72 ===== */

undefined4
FUN_0002cb5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002cae0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return uVar1;
}



/* ===== FUN_0002cba4 @ 0002cba4 size=80 ===== */

undefined4 FUN_0002cba4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002cb5c(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002cbf4 @ 0002cbf4 size=76 ===== */

undefined4 FUN_0002cbf4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002cb5c(param_1,param_3,param_2,0,param_3,0);
  return uVar1;
}



/* ===== FUN_0002cc40 @ 0002cc40 size=60 ===== */

bool FUN_0002cc40(int param_1)

{
  return (*(uint *)(param_1 + 0x5c) & 8) != 0;
}



/* ===== FUN_0002cc7c @ 0002cc7c size=60 ===== */

bool FUN_0002cc7c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x8000) != 0;
}



/* ===== FUN_0002ccb8 @ 0002ccb8 size=260 ===== */

uint FUN_0002ccb8(byte *param_1,uint *param_2)

{
  uint *local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = param_1 + 0x10;
  for (local_14 = 0; (int)local_14 < (int)(uint)*param_1; local_14 = local_14 + 1) {
    local_c = (uint)*local_10 ^ (local_c >> 0x1b | local_c << 5);
    local_10 = local_10 + 1;
  }
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) != 0)) {
    local_18 = param_2;
    for (local_14 = *(int *)(param_1 + 8) + 3U >> 2; local_14 != 0; local_14 = local_14 - 1) {
      local_c = *local_18 ^ (local_c >> 0x10 | local_c << 0x10);
      local_18 = local_18 + 1;
    }
  }
  return local_c;
}



/* ===== FUN_0002cdbc @ 0002cdbc size=112 ===== */

undefined4 FUN_0002cdbc(int *param_1)

{
  undefined4 uVar1;
  
  if (((*param_1 == -0x15ff0000) || (*param_1 == -0x15fe0000)) && (param_1[2] == 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x7f2bb7a1;
  }
  return uVar1;
}



/* ===== FUN_0002ce2c @ 0002ce2c size=216 ===== */

int FUN_0002ce2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int local_10;
  
  bVar1 = false;
  local_10 = FUN_0001d5d4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4,
                          1,param_5);
  if (local_10 == 0) {
    if (((*(uint *)(param_1 + 8) & 0x200000) == 0) &&
       (iVar2 = FUN_00015508(param_1,param_6,param_3,param_4,param_5), iVar2 == 0)) {
      bVar1 = true;
    }
    local_10 = FUN_0002cdbc(param_5);
    if ((local_10 == 0) && (bVar1)) {
      local_10 = 0x7f2bb797;
    }
  }
  return local_10;
}



/* ===== FUN_0002cf04 @ 0002cf04 size=64 ===== */

undefined4
FUN_0002cf04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002ce2c(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}



/* ===== FUN_0002cf44 @ 0002cf44 size=68 ===== */

undefined4 FUN_0002cf44(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002cf04(param_1,param_3,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_0002cf88 @ 0002cf88 size=152 ===== */

int FUN_0002cf88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_000155a4(param_1,param_6,param_3,param_4,param_5);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_0001d6a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4
                           ,1,param_5), iVar1 == 0)) {
    FUN_00018d48(param_1);
  }
  return iVar1;
}



/* ===== FUN_0002d020 @ 0002d020 size=64 ===== */

undefined4
FUN_0002d020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002cf88(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}



/* ===== FUN_0002d060 @ 0002d060 size=68 ===== */

undefined4 FUN_0002d060(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002d020(param_1,param_3,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_0002d0a4 @ 0002d0a4 size=368 ===== */

int FUN_0002d0a4(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6,
                undefined4 *param_7,undefined4 param_8)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  uVar3 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
  uVar1 = (uint)((ulonglong)uVar3 >> 0x20);
  bVar2 = uVar1 <= param_4;
  if (param_4 == uVar1) {
    bVar2 = (uint)uVar3 <= param_3;
  }
  if ((bVar2) || (param_4 == 0 && param_3 < *(uint *)(*(int *)(param_1 + 0x10) + 0x14))) {
    local_c = 0x7f2bb75a;
  }
  else {
    uVar1 = param_4;
    if (param_5 == 0) {
      uVar3 = FUN_00018a74(*(undefined4 *)(param_1 + 0x14),&local_14);
      uVar1 = (uint)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        return (int)uVar3;
      }
      param_5 = local_14;
      local_c = 0;
    }
    uVar3 = FUN_0002ce2c(param_1,uVar1,param_3,param_4,param_5,param_8);
    local_c = (int)uVar3;
    if (local_c == 0) {
      local_10 = param_5;
      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + param_6;
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = *(undefined4 *)(param_5 + 4);
      }
      local_c = FUN_0002cf88(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4,param_5,param_8
                            );
    }
    if (local_14 != 0) {
      FUN_00018c58(&local_14);
    }
  }
  return local_c;
}



/* ===== FUN_0002d214 @ 0002d214 size=80 ===== */

undefined4
FUN_0002d214(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002d0a4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return uVar1;
}



/* ===== FUN_0002d264 @ 0002d264 size=88 ===== */

undefined4
FUN_0002d264(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002d214(param_1,param_3,param_2,0,param_3,param_4,param_5);
  return uVar1;
}



/* ===== FUN_0002d2bc @ 0002d2bc size=180 ===== */

int FUN_0002d2bc(int param_1,int param_2)

{
  void *local_10;
  int local_c;
  
  local_c = FUN_00018bb8(*(int *)(param_1 + 0xc) + param_2,0xc,&local_10);
  if (local_c == 0) {
    memcpy(local_10,*(void **)(param_1 + 8),*(int *)(param_1 + 0xc) * 0xc);
    FUN_00018c58(param_1 + 8);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
    *(void **)(param_1 + 8) = local_10;
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_0002d370 @ 0002d370 size=396 ===== */

int FUN_0002d370(int *param_1,int *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int local_2c;
  int local_28;
  char *local_24;
  char *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  
  if (*param_1 == 0) {
    local_1c = 1;
  }
  else if (*param_2 == 0) {
    local_1c = -1;
  }
  else {
    local_18 = param_2;
    local_14 = param_1;
    iVar1 = strcmp((char *)*param_1,"system.data");
    if (iVar1 == 0) {
      local_1c = -1;
    }
    else {
      iVar1 = strcmp((char *)*local_18,"system.data");
      if (iVar1 == 0) {
        local_1c = 1;
      }
      else {
        local_20 = (char *)*local_14;
        local_24 = (char *)*local_18;
        local_2c = 0;
        local_28 = 0;
        FUN_0002d56c(*local_14,&local_20,&local_28);
        FUN_0002d56c(*local_18,&local_24,&local_2c);
        local_1c = local_28 - local_2c;
        if (local_1c == 0) {
          sVar2 = strlen(local_20);
          sVar3 = strlen(local_24);
          local_1c = sVar2 - sVar3;
          if (local_1c == 0) {
            local_1c = strcmp(local_20,local_24);
          }
        }
      }
    }
  }
  return local_1c;
}



/* ===== FUN_0002d4fc @ 0002d4fc size=112 ===== */

int FUN_0002d4fc(int param_1)

{
  int *local_c;
  
  local_c = &DAT_0005a278;
  while( true ) {
    if (local_c[1] == 0) {
      return 0;
    }
    if (param_1 == *local_c) break;
    local_c = local_c + 2;
  }
  return local_c[1];
}



/* ===== FUN_0002d56c @ 0002d56c size=200 ===== */

undefined4 FUN_0002d56c(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  int iVar2;
  char *__s2;
  undefined4 *local_14;
  
  local_14 = &DAT_0005a278;
  while( true ) {
    if (local_14[1] == 0) {
      return 0;
    }
    __s2 = (char *)local_14[1];
    sVar1 = strlen((char *)local_14[1]);
    iVar2 = strncmp(param_1,__s2,sVar1);
    if (iVar2 == 0) break;
    local_14 = local_14 + 2;
  }
  sVar1 = strlen((char *)local_14[1]);
  *param_2 = param_1 + sVar1;
  *param_3 = *local_14;
  return 1;
}



/* ===== FUN_0002d634 @ 0002d634 size=620 ===== */

int FUN_0002d634(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  bool bVar3;
  undefined8 uVar4;
  undefined1 *local_cc;
  undefined1 auStack_c0 [160];
  int *local_20;
  int *local_1c;
  undefined8 local_18;
  int local_c;
  
  local_20 = (int *)0x0;
  local_cc = param_3;
  if (param_3 == (undefined1 *)0x0) {
    iVar1 = FUN_0001c354(param_1,param_2,auStack_c0,0xa0);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_cc = auStack_c0;
    local_c = 0;
  }
  local_18 = FUN_00013aa8(param_1,local_cc);
  if (local_18 == 0) {
    local_c = 0;
  }
  else {
    if ((int)((ulonglong)local_18 >> 0x20) != 0 ||
        *(uint *)(*(int *)(param_1 + 0x10) + 0x14) <= (uint)local_18) {
      uVar4 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
      uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
      bVar3 = uVar2 <= local_18._4_4_;
      if (local_18._4_4_ == uVar2) {
        bVar3 = (uint)uVar4 <= (uint)local_18;
      }
      if (!bVar3) {
        uVar4 = FUN_00018a74(*(undefined4 *)(param_1 + 0x14),&local_20);
        local_c = (int)uVar4;
        if (local_c != 0) {
          return local_c;
        }
        uVar4 = FUN_0002ce2c(param_1,(int)((ulonglong)uVar4 >> 0x20),(uint)local_18,local_18._4_4_,
                             local_20,param_2);
        local_c = (int)uVar4;
        if (local_c == 0) {
          local_1c = local_20;
          if (*local_20 == -0x15fe0000) {
            local_20[1] = local_20[1] + -1;
            local_c = FUN_0002cf88(param_1,(int)((ulonglong)uVar4 >> 0x20),(uint)local_18,
                                   local_18._4_4_,local_20,param_2);
            if (local_c == 0) {
              FUN_00013b3c(param_1,local_cc,0,0);
              if (local_1c[1] == 0) {
                FUN_00027018(param_1,extraout_r1,(uint)local_18,local_18._4_4_,0xffffffff);
              }
              local_c = FUN_0003bb44(param_1,local_cc,1,0);
              if ((local_c == 0) && (local_cc == auStack_c0)) {
                local_c = FUN_0001ca30(param_1,param_2,auStack_c0,0xa0);
              }
            }
          }
          else {
            local_c = 0x7f2bb7a1;
          }
        }
        FUN_00018c58(&local_20);
        return local_c;
      }
    }
    local_c = 0x7f2bb75a;
  }
  return local_c;
}



/* ===== FUN_0002d8a0 @ 0002d8a0 size=580 ===== */

int FUN_0002d8a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 local_28;
  int *local_1c;
  undefined8 local_18;
  int *local_10;
  int local_c;
  
  local_1c = (int *)0x0;
  local_28 = FUN_00013aa8(param_1,param_3);
  iVar1 = (int)((ulonglong)local_28 >> 0x20);
  if (local_28 == 0) {
    local_c = FUN_0003b988(param_1,param_3,1,0);
    if (local_c != 0) {
      return local_c;
    }
LAB_0002da34:
    local_18 = FUN_00026288(param_1,param_2,param_3,local_c,0);
    uVar2 = (undefined4)((ulonglong)local_18 >> 0x20);
    local_c = FUN_00025da0(param_1,uVar2,(int)local_18,uVar2,0,&local_28);
    if (local_c == 0) {
      FUN_00013b3c(param_1,param_3,(uint)local_28,local_28._4_4_);
    }
LAB_0002daa4:
    if (local_1c != (int *)0x0) {
      FUN_00018c58(&local_1c);
    }
  }
  else {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
    bVar4 = iVar1 == 0;
    if (iVar1 == 0) {
      bVar4 = (uint)local_28 <= uVar3;
    }
    if (!bVar4 || iVar1 == 0 && uVar3 == (uint)local_28) {
      lVar5 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
      uVar3 = (uint)((ulonglong)lVar5 >> 0x20);
      bVar4 = local_28._4_4_ <= uVar3;
      if (uVar3 == local_28._4_4_) {
        bVar4 = (uint)local_28 <= (uint)lVar5;
      }
      if (bVar4 && lVar5 != local_28) {
        local_c = FUN_00018a74(*(undefined4 *)(param_1 + 0x14),&local_1c);
        if (local_c != 0) {
          return local_c;
        }
        local_c = FUN_0002ce2c(param_1,local_1c,(uint)local_28,local_28._4_4_,local_1c,param_2);
        local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
        if (local_c == 0) {
          local_10 = local_1c;
          if (*local_1c == -0x15fe0000) {
            local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
            if (local_1c[1] != 1) {
              local_1c[1] = local_1c[1] + -1;
              local_c = FUN_0002cf88(param_1,local_1c,(uint)local_28,local_28._4_4_,local_1c,param_2
                                    );
              if (local_c == 0) goto LAB_0002da34;
            }
          }
          else {
            local_c = 0x7f2bb7a1;
            local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
          }
        }
        goto LAB_0002daa4;
      }
    }
    local_c = 0x7f2bb75a;
  }
  return local_c;
}



/* ===== FUN_0002dae4 @ 0002dae4 size=96 ===== */

uint FUN_0002dae4(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 4) {
    uVar1 = 0xffffffff;
  }
  else if ((param_1 - 4 & 7) == 0) {
    uVar1 = param_1 - 4 >> 3;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0002db44 @ 0002db44 size=400 ===== */

undefined4 FUN_0002db44(int *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  
  local_c = param_1 + 1;
  if (param_1 == (int *)0x0) {
    uVar2 = 0x16;
  }
  else if (param_2 < 4) {
    uVar2 = 0xc;
  }
  else if (*param_1 == 2) {
    iVar1 = FUN_0002dae4(param_2);
    *param_3 = 1;
    if (iVar1 < 1) {
      uVar2 = 0x16;
    }
    else {
      local_14 = param_3 + 1;
      local_10 = 4;
      piVar3 = local_c + iVar1 * 2;
      for (; local_c != piVar3; local_c = local_c + 2) {
        *(short *)local_14 = (short)*local_c;
        *(undefined2 *)((int)local_14 + 2) = *(undefined2 *)((int)local_c + 2);
        switch((short)*local_c) {
        case 1:
        case 4:
        case 0x10:
        case 0x20:
          local_14 = local_14 + 1;
          local_10 = local_10 + 4;
          break;
        case 2:
        case 8:
          local_14[1] = local_c[1];
          local_14 = local_14 + 2;
          local_10 = local_10 + 8;
        }
      }
      *param_4 = local_10;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x16;
  }
  return uVar2;
}



/* ===== FUN_0002dd54 @ 0002dd54 size=436 ===== */

int FUN_0002dd54(int *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int local_30;
  undefined4 *local_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  undefined4 *local_c;
  
  if (((param_1 == (int *)0x0) || (param_2 < 4)) || (*param_1 != 1)) {
    local_18 = 0x16;
  }
  else {
    local_14 = param_1;
    local_18 = FUN_00018a74(param_2 << 1,&local_24);
    if (local_18 == 0) {
      local_1c = local_24;
      *local_24 = 2;
      local_c = local_24 + 1;
      local_10 = param_1 + 1;
      local_30 = param_2 - 4;
      while (local_30 != 0) {
        local_20 = local_10;
        *(short *)local_c = (short)*local_10;
        *(undefined2 *)((int)local_c + 2) = *(undefined2 *)((int)local_10 + 2);
        switch(*(undefined2 *)local_c) {
        case 1:
        case 4:
        case 0x10:
        case 0x20:
          local_c[1] = 0;
          local_10 = local_10 + 1;
          local_30 = local_30 + -4;
          break;
        case 2:
        case 8:
          local_c[1] = local_10[1];
          local_10 = local_10 + 2;
          local_30 = local_30 + -8;
          break;
        default:
          FUN_00018c58(&local_24);
          return 0x16;
        }
        local_c = local_c + 2;
      }
      *param_3 = local_24;
      *param_4 = (int)local_c - (int)local_24;
      local_18 = 0;
    }
  }
  return local_18;
}



/* ===== FUN_0002df88 @ 0002df88 size=636 ===== */

undefined4
FUN_0002df88(int param_1,undefined4 *param_2,byte *param_3,size_t param_4,short param_5,int param_6)

{
  size_t sVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 local_28 [4];
  char *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  int *local_c;
  
  local_c = (int *)*param_2;
  local_14 = param_3 + param_4;
  local_10 = param_3;
  memset(param_3,0,param_4);
  for (; local_c < (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0xc);
      local_c = local_c + 3) {
    if (*local_c != 0) {
      local_24 = (char *)*local_c;
      local_18 = FUN_0002d56c(*local_c,&local_24,local_28);
      sVar1 = strlen(local_24);
      local_1c = sVar1 + 0x13 & 0xfffffffc;
      local_20 = local_c[2] + 3U & 0xfffffffc;
      if (local_14 + -local_20 < local_10 + local_1c + 4) break;
      sVar1 = strlen(local_24);
      *local_10 = (byte)sVar1;
      if (local_18 == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = local_28[0];
      }
      local_10[1] = bVar3;
      *(short *)(local_10 + 2) = (((short)local_14 - (short)local_20) - (short)param_3) + param_5;
      local_10[4] = 0;
      local_10[5] = 0;
      local_10[6] = 0;
      local_10[7] = 0;
      *(int *)(local_10 + 8) = local_c[2];
      local_14 = local_14 + -local_20;
      memcpy(local_10 + 0x10,local_24,(uint)*local_10);
      memcpy(local_14,(void *)local_c[1],*(size_t *)(local_10 + 8));
      if (param_6 == 0) {
        local_10[0xc] = 0;
        local_10[0xd] = 0;
        local_10[0xe] = 0;
        local_10[0xf] = 0;
      }
      else {
        uVar2 = FUN_0002ccb8(local_10,local_14);
        *(undefined4 *)(local_10 + 0xc) = uVar2;
      }
      local_10 = local_10 + (*local_10 + 0x13 & 0xfffffffc);
      local_10[0] = 0;
      local_10[1] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
    }
  }
  *param_2 = local_c;
  return 0;
}



/* ===== FUN_0002e204 @ 0002e204 size=1488 ===== */

int FUN_0002e204(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *local_3c;
  int local_38;
  void *local_34;
  undefined8 local_30;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  size_t local_14;
  int local_10;
  uint local_c;
  
  local_3c = (undefined4 *)0x0;
  if (*param_1 != 0x7f2bb7a8) {
    return 0x7f2bb7a8;
  }
  if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
    local_c = 0x80;
  }
  else {
    local_c = (uint)*(ushort *)(*(int *)(param_1[1] + 0x10) + 0x58);
  }
  if (local_c < 0xa0) {
    local_c = 0xa0;
  }
  local_10 = FUN_00018acc(local_c,&local_38);
  if (local_10 != 0) {
    return local_10;
  }
  if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
  }
  local_10 = FUN_0001c354(param_1[1],param_1[5],local_38,uVar1);
  if (local_10 != 0) goto LAB_0002e7ac;
  if (((*(short *)(local_38 + 0x80) == 0) && (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) != 0)) &&
     (0x80 < *(ushort *)(*(int *)(param_1[1] + 0x10) + 0x58))) {
    local_18 = local_38;
    local_14 = (size_t)*(ushort *)(*(int *)(param_1[1] + 0x10) + 0x15e);
    if (local_14 == 0) {
      local_14 = 4;
    }
    memset((void *)(local_38 + 0x80),0,local_14);
    *(short *)(local_38 + 0x80) = (short)local_14;
  }
  if ((*(ushort *)(local_38 + 0x80) & 3) != 0) {
    local_10 = 0x7f2bb7b1;
    goto LAB_0002e7ac;
  }
  local_34 = (void *)param_1[2];
  qsort(local_34,param_1[3],0xc,FUN_0002d370);
  if (1 < *(ushort *)(local_38 + 0x80)) {
    if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
      uVar2 = 0x80;
    }
    else {
      uVar2 = (uint)*(ushort *)(*(int *)(param_1[1] + 0x10) + 0x58);
    }
    if (*(ushort *)(local_38 + 0x80) + 0x84 < uVar2) {
      *(undefined4 *)(local_38 + *(ushort *)(local_38 + 0x80) + 0x80) = 0xea020000;
      if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(ushort *)(*(int *)(param_1[1] + 0x10) + 0x58) - 0x80;
      }
      local_1c = (iVar3 - (uint)*(ushort *)(local_38 + 0x80)) + -4;
      local_20 = (undefined4 *)(local_38 + *(ushort *)(local_38 + 0x80) + 0x84);
      local_10 = FUN_0002df88(param_1,&local_34,local_20,local_1c,0,0);
      if (local_10 != 0) goto LAB_0002e7ac;
      local_10 = 0;
    }
  }
  if (local_34 < (void *)(param_1[2] + param_1[4] * 0xc)) {
    local_10 = FUN_00018acc(*(undefined4 *)(param_1[1] + 0x14),&local_3c);
    if (local_10 != 0) goto LAB_0002e7ac;
    local_1c = *(int *)(param_1[1] + 0x14) + -0x20;
    local_20 = local_3c + 8;
    local_10 = FUN_0002df88(param_1,&local_34,local_20,local_1c,(int)local_20 - (int)local_3c,1);
    if (local_10 == 0) {
      if (local_34 < (void *)(param_1[2] + param_1[3] * 0xc)) {
        local_10 = 0x7f2bb7a3;
        local_30 = CONCAT44(local_30._4_4_,(undefined4)local_30);
      }
      else {
        local_24 = local_3c;
        *local_3c = 0xea020000;
        local_3c[1] = 1;
        local_3c[2] = 1;
        local_10 = FUN_0002d8a0(param_1[1],param_1[5],local_38);
        if (local_10 == 0) {
          local_30 = FUN_00013aa8(param_1[1],local_38);
          local_10 = FUN_0002cf88(param_1[1],param_1[1],(int)local_30,
                                  (int)((ulonglong)local_30 >> 0x20),local_3c,param_1[5]);
          if (local_10 == 0) {
            local_10 = 0;
            goto LAB_0002e6b4;
          }
        }
      }
    }
  }
  else {
LAB_0002e6b4:
    lVar4 = FUN_00013aa8(param_1[1],local_38);
    local_30 = lVar4;
    if ((local_3c == (undefined4 *)0x0) && (lVar4 != 0)) {
      local_10 = FUN_0002d634(param_1[1],param_1[5],local_38);
      if (local_10 != 0) goto LAB_0002e7ac;
    }
    if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
      uVar1 = 0x80;
    }
    else {
      uVar1 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
    }
    local_10 = FUN_0001ca30(param_1[1],param_1[5],local_38,uVar1);
  }
  FUN_00018c58(&local_3c);
LAB_0002e7ac:
  FUN_00018c58(&local_38);
  param_1[7] = 0;
  return local_10;
}



/* ===== FUN_0002e7d4 @ 0002e7d4 size=1132 ===== */

int FUN_0002e7d4(int param_1,byte *param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  char *__s;
  size_t __n;
  uint uVar3;
  uint local_18;
  byte *local_14;
  byte *local_10;
  int *local_c;
  
  for (local_c = *(int **)(param_1 + 8); local_18 = param_3, local_14 = param_2, *local_c != 0;
      local_c = local_c + 3) {
  }
  for (; (uVar3 = param_3, local_10 = param_2, 0xf < local_18 &&
         (uVar3 = param_3, *(int *)local_14 != 0));
      local_14 = local_14 + (*local_14 + 0x13 & 0xfffffffc)) {
    if (local_18 - 0x10 < (*local_14 + 3 & 0xfffffffc)) {
      return 0x7f2bb79e;
    }
    local_18 = (local_18 - 0x10) - (*local_14 + 3 & 0xfffffffc);
  }
  while( true ) {
    local_18 = uVar3;
    if ((local_18 < 0x10) || (*(int *)local_10 == 0)) {
      return 0;
    }
    uVar3 = (local_18 - 0x10) - (*local_10 + 3 & 0xfffffffc);
    if (uVar3 < *(uint *)(local_10 + 8)) {
      return 0x7f2bb79f;
    }
    if (param_2 + (param_3 - param_4) <
        (byte *)((uint)*(ushort *)(local_10 + 2) + *(int *)(local_10 + 8))) {
      return 0x7f2bb7aa;
    }
    if ((*(int *)(local_10 + 8) != 0) &&
       ((byte *)(param_4 + (uint)*(ushort *)(local_10 + 2)) < local_14 + 4)) {
      return 0x7f2bb7aa;
    }
    if (*(int *)(local_10 + 4) != 0) {
      return 0x7f2bb75a;
    }
    iVar1 = FUN_0002ccb8(local_10,param_4 + (uint)*(ushort *)(local_10 + 2));
    if ((*(int *)(local_10 + 0xc) != 0) && (iVar1 != *(int *)(local_10 + 0xc))) break;
    iVar1 = *(int *)(local_10 + 8);
    if (local_c == (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0xc)) {
      iVar2 = FUN_0002d2bc(param_1,4);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_c = (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0xc + -0x30);
    }
    __s = (char *)FUN_0002d4fc(local_10[1]);
    if (__s == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(__s);
    }
    iVar2 = FUN_00018acc(*local_10 + __n + 1,local_c);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (__s != (char *)0x0) {
      memcpy((void *)*local_c,__s,__n);
    }
    if (*local_10 != 0) {
      memcpy((void *)(*local_c + __n),local_10 + 0x10,(uint)*local_10);
    }
    iVar2 = FUN_00018a74(*(undefined4 *)(local_10 + 8),local_c + 1);
    if (iVar2 != 0) {
      return iVar2;
    }
    local_c[2] = *(int *)(local_10 + 8);
    memcpy((void *)local_c[1],(void *)(param_4 + (uint)*(ushort *)(local_10 + 2)),
           *(size_t *)(local_10 + 8));
    local_c = local_c + 3;
    *param_5 = *param_5 + 1;
    local_10 = local_10 + (*local_10 + 0x13 & 0xfffffffc);
    uVar3 = uVar3 - iVar1;
  }
  return 0x7f2bb7a0;
}



/* ===== FUN_0002ec40 @ 0002ec40 size=220 ===== */

void FUN_0002ec40(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 8);
  for (local_c = 0; local_c < *(uint *)(param_1 + 0xc); local_c = local_c + 1) {
    if (*(int *)(iVar1 + local_c * 0xc) != 0) {
      FUN_00018c58(iVar1 + local_c * 0xc);
    }
    if (*(int *)(iVar1 + local_c * 0xc + 4) != 0) {
      FUN_00018c58(iVar1 + local_c * 0xc + 4);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* ===== FUN_0002ed1c @ 0002ed1c size=1084 ===== */

int FUN_0002ed1c(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined8 local_20;
  int *local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_30 = (int *)0x0;
  if (*param_1 != 0x7f2bb7a8) {
    return 0x7f2bb7a8;
  }
  if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
    local_c = 0x80;
  }
  else {
    local_c = (uint)*(ushort *)(*(int *)(param_1[1] + 0x10) + 0x58);
  }
  if (local_c < 0xa0) {
    local_c = 0xa0;
  }
  local_10 = FUN_00018acc(local_c,&local_28);
  if (local_10 != 0) {
    return local_10;
  }
  if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
  }
  local_10 = FUN_0001c354(param_1[1],param_1[5],local_28,uVar1);
  if (local_10 != 0) goto LAB_0002f13c;
  FUN_0002ec40(param_1);
  if (1 < *(ushort *)(local_28 + 0x80)) {
    if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
      uVar2 = 0x80;
    }
    else {
      uVar2 = (uint)*(ushort *)(*(int *)(param_1[1] + 0x10) + 0x58);
    }
    if (*(ushort *)(local_28 + 0x80) + 0x84 < uVar2) {
      if ((*(ushort *)(local_28 + 0x80) & 3) != 0) {
        local_10 = 0x7f2bb7b1;
        goto LAB_0002f13c;
      }
      local_2c = *(int *)(local_28 + *(ushort *)(local_28 + 0x80) + 0x80);
      if (local_2c == -0x15fe0000) {
        if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(ushort *)(*(int *)(param_1[1] + 0x10) + 0x58) - 0x80;
        }
        local_14 = (iVar3 - (uint)*(ushort *)(local_28 + 0x80)) + -4;
        local_18 = (int *)(local_28 + *(ushort *)(local_28 + 0x80) + 0x84);
        local_10 = FUN_0002e7d4(param_1,local_18,local_14,local_18,param_1 + 4);
        if (local_10 != 0) goto LAB_0002f13c;
        local_10 = 0;
      }
    }
  }
  local_20 = FUN_00013aa8(param_1[1],local_28);
  if (local_20 == 0) {
LAB_0002f0ec:
    FUN_00018c58(&local_30);
    FUN_00018c58(&local_28);
    return 0;
  }
  if ((int)((ulonglong)local_20 >> 0x20) != 0 ||
      *(uint *)(*(int *)(param_1[1] + 0x10) + 0x14) <= (uint)local_20) {
    uVar5 = FUN_00012c48(*(undefined4 *)(param_1[1] + 0x10));
    uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
    bVar4 = uVar2 <= local_20._4_4_;
    if (local_20._4_4_ == uVar2) {
      bVar4 = (uint)uVar5 <= (uint)local_20;
    }
    if (!bVar4) {
      local_10 = FUN_00018a74(*(undefined4 *)(param_1[1] + 0x14),&local_30);
      if (local_10 == 0) {
        local_10 = FUN_0002ce2c(param_1[1],param_1[1],(uint)local_20,local_20._4_4_,local_30,
                                param_1[5]);
        if (local_10 == 0) {
          local_24 = local_30;
          if (*local_30 == -0x15fe0000) {
            local_14 = *(int *)(param_1[1] + 0x14) + -0x20;
            local_18 = local_30 + 8;
            local_10 = FUN_0002e7d4(param_1,local_18,local_14,local_30,param_1 + 4);
            if (local_10 == 0) {
              FUN_00018c58(&local_30);
              goto LAB_0002f0ec;
            }
          }
          else {
            local_10 = 0x7f2bb7a1;
          }
        }
        FUN_00018c58(&local_30);
      }
      goto LAB_0002f13c;
    }
  }
  local_10 = 0x7f2bb75a;
LAB_0002f13c:
  FUN_00018c58(&local_28);
  return local_10;
}



/* ===== FUN_0002f158 @ 0002f158 size=256 ===== */

undefined4 FUN_0002f158(int *param_1,code *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *local_14;
  
  if (*param_1 == 0x7f2bb7a8) {
    for (local_14 = (int *)param_1[2]; local_14 < (int *)(param_1[2] + param_1[3] * 0xc);
        local_14 = local_14 + 3) {
      if (*local_14 != 0) {
        uVar1 = (*param_2)(*local_14,local_14[1],local_14[2],param_3);
        if ((uVar1 & 2) != 0) {
          param_1[7] = 1;
        }
        if ((uVar1 & 1) != 0) {
          return 0;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x7f2bb7a8;
  }
  return uVar2;
}



/* ===== FUN_0002f258 @ 0002f258 size=432 ===== */

int FUN_0002f258(int *param_1,char *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  void *local_14;
  int local_10;
  int *local_c;
  
  if (*param_1 == 0x7f2bb7a8) {
    for (local_c = (int *)param_1[2]; local_c < (int *)(param_1[2] + param_1[3] * 0xc);
        local_c = local_c + 3) {
      if ((*local_c != 0) && (iVar1 = strcmp((char *)*local_c,param_2), iVar1 == 0)) {
        if (((param_1[6] & 1U) == 0) &&
           ((iVar1 = strcmp(param_2,"system.posix_acl_default"), iVar1 == 0 ||
            (iVar1 = strcmp(param_2,"system.posix_acl_access"), iVar1 == 0)))) {
          iVar1 = FUN_0002dd54(local_c[1],local_c[2],param_3,param_4);
          return iVar1;
        }
        local_10 = FUN_00018a74(local_c[2],&local_14);
        if (local_10 != 0) {
          return local_10;
        }
        memcpy(local_14,(void *)local_c[1],local_c[2]);
        *param_3 = local_14;
        *param_4 = local_c[2];
        return 0;
      }
    }
    iVar1 = 0x7f2bb7a2;
  }
  else {
    iVar1 = 0x7f2bb7a8;
  }
  return iVar1;
}



/* ===== FUN_0002f408 @ 0002f408 size=620 ===== */

int FUN_0002f408(int param_1,undefined4 param_2,uint *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  byte *local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  byte *local_c;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
    local_14 = 0x80;
  }
  else {
    local_14 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x58);
  }
  if (local_14 < 0xa0) {
    local_14 = 0xa0;
  }
  local_18 = FUN_00018acc(local_14,&local_24);
  if (local_18 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
      uVar1 = 0x80;
    }
    else {
      uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x58);
    }
    local_18 = FUN_0001c354(param_1,param_2,local_24,uVar1);
    if (local_18 == 0) {
      if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
        uVar2 = 0x80;
      }
      else {
        uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x58);
      }
      if (*(ushort *)(local_24 + 0x80) + 0x84 < uVar2) {
        if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
          local_10 = 0xffffffdc;
        }
        else {
          local_10 = *(ushort *)(*(int *)(param_1 + 0x10) + 0x58) - 0xa4;
        }
        if (*(int *)(local_24 + *(ushort *)(local_24 + 0x80) + 0x80) == -0x15fe0000) {
          local_1c = (byte *)(local_24 + *(ushort *)(local_24 + 0x80) + 0x84);
          for (local_c = local_1c; *(int *)local_c != 0;
              local_c = local_c + (*local_c + 0x13 & 0xfffffffc)) {
            if (((*(int *)(local_c + 4) == 0) && (*(int *)(local_c + 8) != 0)) &&
               (local_20 = (uint)*(ushort *)(local_c + 2), local_20 < local_10)) {
              local_10 = local_20;
            }
          }
          *param_3 = (local_10 - ((int)local_c - (int)local_1c)) - 4;
        }
        else {
          *param_3 = local_10 - 0x18 & 0xfffffffc;
        }
      }
      else {
        local_18 = 0x7f2bb7a7;
      }
    }
    FUN_00018c58(&local_24);
  }
  return local_18;
}



/* ===== FUN_0002f674 @ 0002f674 size=888 ===== */

int FUN_0002f674(int *param_1,char *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  size_t sVar2;
  size_t local_28;
  void *local_24;
  char *local_20;
  int *local_1c;
  void *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  
  if (*param_1 != 0x7f2bb7a8) {
    return 0x7f2bb7a8;
  }
  local_10 = (int *)0x0;
  local_28 = param_4;
  local_24 = param_3;
  local_20 = param_2;
  local_1c = param_1;
  local_14 = FUN_00018a74(param_4,&local_18);
  if (local_14 != 0) {
    return local_14;
  }
  if (((local_1c[6] & 1U) == 0) &&
     ((iVar1 = strcmp(local_20,"system.posix_acl_default"), iVar1 == 0 ||
      (iVar1 = strcmp(local_20,"system.posix_acl_access"), iVar1 == 0)))) {
    local_14 = FUN_0002db44(local_24,local_28,local_18,&local_28);
    if (local_14 != 0) goto LAB_0002f9d0;
  }
  else {
    memcpy(local_18,local_24,local_28);
  }
  for (local_c = (int *)local_1c[2]; local_c < (int *)(local_1c[2] + local_1c[3] * 0xc);
      local_c = local_c + 3) {
    if (*local_c == 0) {
      local_10 = local_c;
    }
    else {
      iVar1 = strcmp((char *)*local_c,local_20);
      if (iVar1 == 0) {
        FUN_00018c58(local_c + 1);
        local_c[1] = (int)local_18;
        local_c[2] = local_28;
        local_1c[7] = 1;
        return 0;
      }
    }
  }
  if (local_10 == (int *)0x0) {
    local_14 = FUN_0002d2bc(local_1c,4);
    if (local_14 == 0) {
      local_c = (int *)(local_1c[2] + local_1c[3] * 0xc + -0x30);
      sVar2 = strlen(local_20);
      local_14 = FUN_00018a74(sVar2 + 1,local_c);
      if (local_14 == 0) {
        strcpy((char *)*local_c,local_20);
        local_14 = FUN_00018a74(local_28,local_c + 1);
        if (local_14 == 0) {
          memcpy((void *)local_c[1],local_24,local_28);
          local_c[2] = local_28;
          local_1c[7] = 1;
          local_1c[4] = local_1c[4] + 1;
          return 0;
        }
      }
    }
  }
  else {
    sVar2 = strlen(local_20);
    local_14 = FUN_00018a74(sVar2 + 1,local_10);
    if (local_14 == 0) {
      strcpy((char *)*local_10,local_20);
      local_10[1] = (int)local_18;
      local_10[2] = local_28;
      local_1c[7] = 1;
      local_1c[4] = local_1c[4] + 1;
      return 0;
    }
  }
LAB_0002f9d0:
  FUN_00018c58(&local_18);
  return local_14;
}



/* ===== FUN_0002f9ec @ 0002f9ec size=272 ===== */

undefined4 FUN_0002f9ec(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *local_c;
  
  if (*param_1 == 0x7f2bb7a8) {
    for (local_c = (int *)param_1[2]; local_c < (int *)(param_1[2] + param_1[3] * 0xc);
        local_c = local_c + 3) {
      if ((*local_c != 0) && (iVar1 = strcmp((char *)*local_c,param_2), iVar1 == 0)) {
        FUN_00018c58(local_c);
        FUN_00018c58(local_c + 1);
        local_c[2] = 0;
        param_1[7] = 1;
        param_1[4] = param_1[4] + -1;
        return 0;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x7f2bb7a8;
  }
  return uVar2;
}



/* ===== FUN_0002fafc @ 0002fafc size=288 ===== */

int FUN_0002fafc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *local_10;
  int local_c;
  
  iVar1 = FUN_0002cc40(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0002cc7c(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    local_c = 0x7f2bb7a4;
  }
  else {
    local_c = FUN_00018acc(0x20,&local_10);
    if (local_c == 0) {
      *local_10 = 0x7f2bb7a8;
      local_10[3] = 4;
      local_c = FUN_00018bb8(local_10[3],0xc,local_10 + 2);
      if (local_c == 0) {
        local_10[4] = 0;
        local_10[5] = param_2;
        local_10[1] = param_1;
        *param_3 = local_10;
        local_c = 0;
      }
      else {
        FUN_00018c58(&local_10);
      }
    }
  }
  return local_c;
}



/* ===== FUN_0002fc1c @ 0002fc1c size=160 ===== */

int FUN_0002fc1c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0x7f2bb7a8) {
    if ((piVar1[7] == 0) || (iVar2 = FUN_0002e204(piVar1), iVar2 == 0)) {
      FUN_0002ec40(piVar1);
      FUN_00018c58(piVar1 + 2);
      FUN_00018c58(param_1);
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x7f2bb7a8;
  }
  return iVar2;
}



/* ===== FUN_0002fda0 @ 0002fda0 size=244 ===== */

undefined4 FUN_0002fda0(short *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == -0xcf6) {
    if ((ushort)param_1[2] < (ushort)param_1[1]) {
      uVar2 = 0x7f2bb777;
    }
    else {
      iVar1 = FUN_00042c94(param_2 + -0xc,0xc);
      if ((iVar1 < (int)(uint)(ushort)param_1[2]) || ((int)(uint)(ushort)param_1[2] < iVar1 + -2)) {
        uVar2 = 0x7f2bb777;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0x7f2bb777;
  }
  return uVar2;
}



/* ===== FUN_0002fe94 @ 0002fe94 size=200 ===== */

void FUN_0002fe94(int param_1)

{
  int local_14 [2];
  int local_c;
  
  if (param_1 != 0) {
    local_14[0] = param_1;
    if (*(int *)(param_1 + 0xa0) != 0) {
      for (local_c = 1; local_c < *(int *)(local_14[0] + 0x9c); local_c = local_c + 1) {
        if (*(int *)(*(int *)(local_14[0] + 0xa0) + local_c * 0x28) != 0) {
          FUN_00018c58(*(int *)(local_14[0] + 0xa0) + local_c * 0x28);
        }
      }
      FUN_00018c58(local_14[0] + 0xa0);
    }
    FUN_00018c58(local_14);
  }
  return;
}



/* ===== FUN_0002ff5c @ 0002ff5c size=60 ===== */

undefined4 FUN_0002ff5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002ff98(param_1,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_0002ff98 @ 0002ff98 size=988 ===== */

int FUN_0002ff98(int *param_1,uint param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *local_20;
  ushort *local_1c;
  int local_18;
  int local_14;
  
  if (*param_1 != 0x7f2bb701) {
    return 0x7f2bb701;
  }
  if ((param_3 == 0) && ((param_2 == 0 || (*(uint *)param_1[4] < param_2)))) {
    return 0x7f2bb729;
  }
  local_14 = FUN_00018a74(0xa4,&local_20);
  if (local_14 != 0) {
    return local_14;
  }
  memset(local_20,0,0xa4);
  local_20[2] = param_2;
  local_20[1] = param_1;
  if (param_3 == 0) {
    local_20[3] = local_20 + 4;
    local_14 = FUN_0001c9f4(param_1,param_2,local_20[3]);
    if (local_14 != 0) goto LAB_00030358;
  }
  else {
    local_20[3] = param_3;
  }
  iVar2 = local_20[3];
  local_1c = (ushort *)(iVar2 + 0x28);
  local_18 = 0;
  while ((local_18 < 0xf && (*(int *)(local_20[3] + (local_18 + 10) * 4) == 0))) {
    local_18 = local_18 + 1;
  }
  if (0xe < local_18) {
    *local_1c = 0xf30a;
    *(undefined2 *)(iVar2 + 0x2e) = 0;
    *(undefined2 *)(iVar2 + 0x2a) = 0;
    local_18 = 4;
    *(undefined2 *)(iVar2 + 0x2c) = 4;
    *(uint *)(local_20[3] + 0x20) = *(uint *)(local_20[3] + 0x20) | 0x80000;
  }
  if ((*(uint *)(local_20[3] + 0x20) & 0x80000) == 0) {
    local_14 = 0x7f2bb77b;
  }
  else {
    local_14 = FUN_0002fda0(local_1c,0x3c);
    if (local_14 == 0) {
      local_20[0x26] = (uint)local_1c[3];
      local_20[0x24] = (uint)*local_1c;
      local_20[0x27] = local_20[0x26] + 1;
      FUN_00018acc(local_20[0x27] * 0x28,local_20 + 0x28);
      *(int *)local_20[0x28] = local_20[3] + 0x28;
      iVar2 = local_20[0x28];
      *(uint *)(iVar2 + 4) = (uint)local_1c[1];
      *(undefined4 *)(local_20[0x28] + 0xc) = *(undefined4 *)(iVar2 + 4);
      *(uint *)(local_20[0x28] + 8) = (uint)local_1c[2];
      *(undefined4 *)(local_20[0x28] + 0x20) = 0;
      iVar4 = param_1[5] + *(uint *)(local_20[3] + 4);
      uVar3 = (*(int *)(local_20[3] + 0x6c) + (uint)CARRY4(param_1[5],*(uint *)(local_20[3] + 4))) -
              (uint)(iVar4 == 0);
      uVar1 = *(int *)(param_1[4] + 0x18) + 10;
      iVar2 = local_20[0x28];
      *(uint *)(iVar2 + 0x18) =
           iVar4 - 1U >> (uVar1 & 0xff) | uVar3 << (0x20 - uVar1 & 0xff) |
           uVar3 >> (*(int *)(param_1[4] + 0x18) - 0x16U & 0xff);
      *(uint *)(iVar2 + 0x1c) = uVar3 >> (uVar1 & 0xff);
      *(undefined4 *)(local_20[0x28] + 0x10) = 1;
      local_20[0x25] = 0;
      *local_20 = 0x7f2bb712;
      *param_4 = local_20;
      return 0;
    }
  }
LAB_00030358:
  FUN_0002fe94(local_20);
  return local_14;
}



/* ===== FUN_00030374 @ 00030374 size=2804 ===== */

int FUN_00030374(int *param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_24;
  int local_20;
  undefined4 *local_18;
  int *local_14;
  
  bVar2 = false;
  if (*param_1 == 0x7f2bb712) {
    if (param_1[0x28] == 0) {
      iVar4 = 0x7f2bb780;
    }
    else {
      param_2 = param_2 & 0xf;
      local_24 = param_2;
      do {
        piVar5 = (int *)(param_1[0x28] + param_1[0x25] * 0x28);
        if ((param_2 == 9) || (param_2 == 7)) {
          if (param_1[0x25] < param_1[0x26]) {
            if (piVar5[4] == 0) {
              piVar5[4] = piVar5[4] + 1;
              local_24 = 0xc;
            }
            else if (piVar5[3] < 1) {
              if (param_1[0x25] < 1) {
                return 0x7f2bb77c;
              }
              local_24 = 0xb;
            }
            else {
              local_24 = 5;
            }
          }
          else if (piVar5[3] < 1) {
            if (param_1[0x25] < 1) {
              return 0x7f2bb77c;
            }
            local_24 = 0xb;
          }
          else {
            local_24 = 5;
          }
        }
        if ((param_2 == 10) || (param_2 == 8)) {
          if (param_1[0x25] < param_1[0x26]) {
            if (piVar5[4] < 1) {
              if (piVar5[3] < piVar5[1] + -1) {
                local_24 = 6;
              }
              else {
                if (param_1[0x25] < 1) {
                  return 0x7f2bb77d;
                }
                local_24 = 0xb;
              }
            }
            else {
              local_24 = 0xd;
            }
          }
          else if (piVar5[3] < piVar5[1] + -1) {
            local_24 = 6;
          }
          else {
            if (param_1[0x25] < 1) {
              return 0x7f2bb77d;
            }
            local_24 = 0xb;
          }
        }
        if (param_2 == 2) {
          if ((param_1[0x25] < param_1[0x26]) && (piVar5[3] == 0)) {
            local_24 = 0xc;
          }
          else {
            local_24 = 4;
          }
        }
        local_14 = piVar5;
        switch(local_24) {
        case 0:
          local_18 = (undefined4 *)piVar5[8];
          break;
        case 1:
          param_1[0x25] = 0;
          local_14 = (int *)(param_1[0x28] + param_1[0x25] * 0x28);
        case 3:
          local_14[3] = local_14[1];
          local_14[8] = 0;
        case 5:
          if (local_14[3] < 1) {
            return 0x7f2bb77c;
          }
          if (local_14[8] == 0) {
            iVar4 = *local_14;
          }
          else {
            iVar4 = local_14[8];
          }
          local_18 = (undefined4 *)(iVar4 + 0xc);
          local_14[3] = local_14[3] + -1;
          local_14[8] = (int)local_18;
          local_14[4] = 0;
          break;
        default:
          return 0x7f2bb781;
        case 4:
          piVar5[8] = *piVar5 + (*(ushort *)(*piVar5 + 2) + 1) * 0xc + -0xc;
          local_18 = (undefined4 *)piVar5[8];
          piVar5[3] = 0;
          piVar5[4] = 0;
          break;
        case 6:
          if ((piVar5[8] == 0) || (piVar5[1] <= piVar5[3] + 1)) {
            return 0x7f2bb77d;
          }
          local_18 = (undefined4 *)(piVar5[8] + -0xc);
          piVar5[8] = (int)local_18;
          piVar5[3] = piVar5[3] + 1;
          if (param_1[0x25] < param_1[0x26]) {
            piVar5[4] = 1;
          }
          break;
        case 0xb:
          if (param_1[0x25] < 1) {
            return 0x7f2bb77e;
          }
          param_1[0x25] = param_1[0x25] + -1;
          local_18 = (undefined4 *)piVar5[-2];
          local_14 = piVar5 + -10;
          if ((param_2 == 10) || (param_2 == 8)) {
            piVar5[-6] = 0;
          }
          break;
        case 0xc:
        case 0xd:
          if ((piVar5[8] == 0) || (param_1[0x26] <= param_1[0x25])) {
            return 0x7f2bb77f;
          }
          iVar4 = piVar5[8];
          local_14 = piVar5 + 10;
          if ((*local_14 == 0) &&
             (iVar3 = FUN_00018a74(*(undefined4 *)(param_1[1] + 0x14),local_14), iVar3 != 0)) {
            return iVar3;
          }
          if (((*(uint *)(param_1[1] + 8) & 0x2000) == 0) ||
             (*(int *)(param_1[1] + 4) == *(int *)(param_1[1] + 0x88))) {
            iVar3 = FUN_0001d5d4(*(undefined4 *)(param_1[1] + 4),*(undefined4 *)(param_1[1] + 4),
                                 *(undefined4 *)(iVar4 + 4),*(undefined2 *)(iVar4 + 8),1,*local_14);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          else {
            memset((void *)*local_14,0,*(size_t *)(param_1[1] + 0x14));
          }
          param_1[0x25] = param_1[0x25] + 1;
          iVar6 = *local_14;
          iVar3 = FUN_0002fda0(iVar6,*(undefined4 *)(param_1[1] + 0x14));
          if (iVar3 != 0) {
            param_1[0x25] = param_1[0x25] + -1;
            return iVar3;
          }
          if (((*(uint *)(param_1[1] + 8) & 0x200000) == 0) &&
             (iVar3 = FUN_0001633c(param_1[1],param_1[2],iVar6), iVar3 == 0)) {
            bVar2 = true;
          }
          piVar5[0xb] = (uint)*(ushort *)(iVar6 + 2);
          piVar5[0xd] = piVar5[0xb];
          piVar5[0xc] = (uint)*(ushort *)(iVar6 + 4);
          if (piVar5[3] < 1) {
            piVar5[0x10] = piVar5[6];
            piVar5[0x11] = piVar5[7];
          }
          else {
            piVar5[0x10] = *(int *)(iVar4 + 0xc);
            piVar5[0x11] = 0;
          }
          if (local_24 == 0xc) {
            local_18 = (undefined4 *)(iVar6 + 0xc);
            piVar5[0x12] = (int)local_18;
            piVar5[0xd] = piVar5[0xb] + -1;
            piVar5[0xe] = 0;
          }
          else {
            local_18 = (undefined4 *)(iVar6 + (*(ushort *)(iVar6 + 2) + 1) * 0xc + -0xc);
            piVar5[0x12] = (int)local_18;
            piVar5[0xd] = 0;
            if (param_1[0x25] < param_1[0x26]) {
              piVar5[0xe] = 1;
            }
          }
        }
        if (local_18 == (undefined4 *)0x0) {
          return 0x7f2bb780;
        }
        param_3[5] = 0;
        if (param_1[0x25] == param_1[0x26]) {
          uVar1 = *(ushort *)((int)local_18 + 6);
          *param_3 = local_18[2];
          param_3[1] = (uint)uVar1;
          param_3[2] = *local_18;
          param_3[3] = 0;
          param_3[4] = (uint)*(ushort *)(local_18 + 1);
          param_3[5] = param_3[5] | 1;
          if (0x8000 < (uint)param_3[4]) {
            param_3[4] = param_3[4] + -0x8000;
            param_3[5] = param_3[5] | 2;
          }
        }
        else {
          uVar1 = *(ushort *)(local_18 + 2);
          *param_3 = local_18[1];
          param_3[1] = (uint)uVar1;
          param_3[2] = *local_18;
          param_3[3] = 0;
          if (local_14[3] < 1) {
            local_20 = local_14[6];
          }
          else {
            local_20 = local_18[3];
          }
          param_3[4] = local_20 - param_3[2];
        }
        if (local_14[4] != 0) {
          param_3[5] = param_3[5] | 4;
        }
      } while ((((param_2 == 7) || (param_2 == 8)) && (param_1[0x25] != param_1[0x26])) ||
              ((param_2 == 2 && ((param_1[0x25] != param_1[0x26] || (local_14[3] != 0))))));
      if (bVar2) {
        iVar4 = 0x7f2bb794;
      }
      else {
        iVar4 = 0;
      }
    }
  }
  else {
    iVar4 = 0x7f2bb712;
  }
  return iVar4;
}



/* ===== FUN_00030ea0 @ 00030ea0 size=360 ===== */

int FUN_00030ea0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar2 = FUN_0001cfb0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0xc));
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x94) * 0x28 + -8);
    uVar4 = *(undefined4 *)(iVar2 + 4);
    uVar1 = *(undefined2 *)(iVar2 + 8);
    iVar2 = FUN_000163e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x94) * 0x28)
                        );
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
      iVar2 = FUN_0001d6a0(uVar3,uVar3,uVar4,uVar1,1,
                           *(undefined4 *)
                            (*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x94) * 0x28));
    }
  }
  return iVar2;
}



/* ===== FUN_00031008 @ 00031008 size=608 ===== */

int FUN_00031008(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_28 [8];
  uint local_20;
  uint uStack_1c;
  undefined4 local_18;
  int local_c;
  
  local_c = FUN_00030374(param_1,1,auStack_28);
  if (local_c == 0) {
    local_c = 0;
    if (*(int *)(param_1 + 0x98) < param_2) {
      local_c = 0x7f2bb781;
    }
    else {
LAB_0003108c:
      do {
        while (param_2 == *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x94)) {
          bVar3 = uStack_1c <= param_4;
          if (param_4 == uStack_1c) {
            bVar3 = local_20 <= param_3;
          }
          if (bVar3) {
            uVar4 = VectorShiftRight(CONCAT44(local_18,local_18),0x20);
            uVar2 = (int)((ulonglong)uVar4 >> 0x20) + uStack_1c + (uint)CARRY4((uint)uVar4,local_20)
            ;
            bVar3 = uVar2 <= param_4;
            if (param_4 == uVar2) {
              bVar3 = (uint)uVar4 + local_20 <= param_3;
            }
            if (!bVar3) {
              return 0;
            }
          }
          bVar3 = uStack_1c <= param_4;
          if (param_4 == uStack_1c) {
            bVar3 = local_20 <= param_3;
          }
          if (!bVar3) {
            FUN_00030374(param_1,6,auStack_28);
            return 0x7f2bb784;
          }
          iVar1 = FUN_00030374(param_1,5,auStack_28);
          if (iVar1 == 0x7f2bb77c) {
            return 0x7f2bb784;
          }
          if (iVar1 != 0) {
            return iVar1;
          }
          local_c = 0;
        }
        local_c = FUN_00030374(param_1,5,auStack_28);
        if (local_c != 0x7f2bb77c) {
          if (local_c != 0) {
            return local_c;
          }
          if (param_4 != uStack_1c || param_3 != local_20) {
            bVar3 = uStack_1c <= param_4;
            if (param_4 == uStack_1c) {
              bVar3 = local_20 <= param_3;
            }
            if (bVar3 && (param_4 != uStack_1c || param_3 != local_20)) {
              local_c = 0;
              goto LAB_0003108c;
            }
            local_c = FUN_00030374(param_1,6,auStack_28);
            if (local_c != 0) {
              return local_c;
            }
          }
        }
        local_c = FUN_00030374(param_1,0xc,auStack_28);
      } while (local_c == 0);
    }
  }
  else if (local_c == 0x7f2bb77c) {
    local_c = 0x7f2bb784;
  }
  return local_c;
}



/* ===== FUN_00031268 @ 00031268 size=52 ===== */

undefined4 FUN_00031268(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00031008(param_1,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0003129c @ 0003129c size=572 ===== */

int FUN_0003129c(int *param_1)

{
  int iVar1;
  undefined1 auStack_68 [4];
  int local_64;
  int local_58;
  undefined1 auStack_38 [8];
  int local_30;
  int iStack_2c;
  int local_28;
  int local_1c;
  int local_18;
  int iStack_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (*param_1 == 0x7f2bb712) {
    if ((*(uint *)(param_1[1] + 8) & 1) == 0) {
      local_c = 0x7f2bb715;
    }
    else if (param_1[0x28] == 0) {
      local_c = 0x7f2bb780;
    }
    else {
      local_10 = param_1[0x28] + param_1[0x25] * 0x28;
      if (*(int *)(local_10 + 0x20) == 0) {
        local_c = 0x7f2bb780;
      }
      else {
        local_c = FUN_00030374(param_1,0,auStack_38);
        if (local_c == 0) {
          local_18 = local_30;
          iStack_14 = iStack_2c;
          local_c = FUN_00033384(param_1,auStack_68);
          if (local_c == 0) {
            local_1c = local_58 - local_64;
            local_c = 0;
            while ((iVar1 = local_c, 0 < param_1[0x25] &&
                   (*(int *)(local_10 + 0xc) == *(int *)(local_10 + 4) + -1))) {
              local_c = FUN_00030374(param_1,0xb,auStack_38);
              if (local_c != 0) {
                return local_c;
              }
              iVar1 = 0;
              if (iStack_14 == iStack_2c && local_18 == local_30) break;
              local_10 = param_1[0x28] + param_1[0x25] * 0x28;
              local_28 = local_28 + (local_30 - local_18);
              local_30 = local_18;
              iStack_2c = iStack_14;
              local_c = FUN_000314d8(param_1,0,auStack_38);
              if (local_c != 0) {
                return local_c;
              }
              FUN_00030ea0(param_1);
            }
            local_c = iVar1;
            local_c = FUN_00031008(param_1,local_1c,local_18,iStack_14);
          }
        }
      }
    }
  }
  else {
    local_c = 0x7f2bb712;
  }
  return local_c;
}



/* ===== FUN_000314d8 @ 000314d8 size=524 ===== */

undefined4 FUN_000314d8(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 == 0x7f2bb712) {
    if ((*(uint *)(param_1[1] + 8) & 1) == 0) {
      uVar1 = 0x7f2bb715;
    }
    else if (param_1[0x28] == 0) {
      uVar1 = 0x7f2bb780;
    }
    else {
      iVar2 = param_1[0x28] + param_1[0x25] * 0x28;
      if (*(int *)(iVar2 + 0x20) == 0) {
        uVar1 = 0x7f2bb780;
      }
      else {
        if (param_1[0x25] == param_1[0x26]) {
          puVar3 = *(undefined4 **)(iVar2 + 0x20);
          *puVar3 = param_3[2];
          puVar3[2] = *param_3;
          *(short *)((int)puVar3 + 6) = (short)param_3[1];
          if ((param_3[5] & 2) == 0) {
            if (0x8000 < (uint)param_3[4]) {
              return 0x7f2bb786;
            }
            *(short *)(puVar3 + 1) = (short)param_3[4];
          }
          else {
            if (0x7fff < (uint)param_3[4]) {
              return 0x7f2bb786;
            }
            *(short *)(puVar3 + 1) = (short)param_3[4] + -0x8000;
          }
        }
        else {
          puVar3 = *(undefined4 **)(iVar2 + 0x20);
          puVar3[1] = *param_3;
          *(short *)(puVar3 + 2) = (short)param_3[1];
          *puVar3 = param_3[2];
          *(undefined2 *)((int)puVar3 + 10) = 0;
        }
        FUN_00030ea0(param_1);
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0x7f2bb712;
  }
  return uVar1;
}



/* ===== FUN_000316e4 @ 000316e4 size=128 ===== */

undefined4 FUN_000316e4(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint local_c;
  
  local_c = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = 0;
  }
  else {
    do {
      if (*(int *)(local_c + 0xc) != 0) {
        return 0;
      }
      local_c = local_c - 0x28;
    } while (*(uint *)(param_1 + 0xa0) <= local_c);
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_00031764 @ 00031764 size=2320 ===== */

int FUN_00031764(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [4];
  int local_bc;
  int local_b0;
  int *local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_64;
  int local_60;
  undefined4 uStack_5c;
  void *local_54;
  int local_50;
  int local_4c;
  int local_48;
  void *local_44;
  int local_40;
  undefined4 uStack_3c;
  int local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  void *local_24;
  undefined8 local_20;
  int local_14;
  
  local_14 = 0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_24 = (void *)0x0;
  local_8c = (int *)0x0;
  local_30 = 0;
  if (*param_1 != 0x7f2bb712) {
    return 0x7f2bb712;
  }
  if ((*(uint *)(param_1[1] + 8) & 1) == 0) {
    return 0x7f2bb715;
  }
  if (param_1[0x28] == 0) {
    return 0x7f2bb780;
  }
  local_14 = FUN_00030374(param_1,0,&local_88);
  if (local_14 == 0) {
    local_14 = FUN_00033384(param_1,auStack_c0);
    if (local_14 == 0) {
      local_34 = local_b0 - local_bc;
      local_40 = local_80;
      uStack_3c = uStack_7c;
      local_28 = (int *)(param_1[0x28] + param_1[0x25] * 0x28);
      local_44 = (void *)*local_28;
      if (param_1[0x25] == param_1[0x26]) {
        local_48 = (int)local_44 + 0xc;
        uVar3 = CONCAT24(*(undefined2 *)((int)local_44 + 0x12),*(undefined4 *)((int)local_44 + 0x14)
                        );
      }
      else {
        local_4c = (int)local_44 + 0xc;
        uVar3 = *(undefined6 *)((int)local_44 + 0x10);
      }
      uVar1 = 1 << (*(uint *)(param_1[1] + 100) & 0xff);
      local_20._0_4_ = (uint)uVar3;
      local_20._4_4_ = (uint)(ushort)((uint6)uVar3 >> 0x20);
      bVar5 = (uint)local_20 < uVar1;
      uVar2 = -(1 << (*(uint *)(param_1[1] + 100) & 0xff));
      local_20._0_4_ = uVar2 & (uint)local_20 - uVar1;
      local_20._4_4_ = (int)uVar2 >> 0x1f & local_20._4_4_ - (((int)uVar1 >> 0x1f) + (uint)bVar5);
      iVar4 = 0;
      if ((param_1[0x25] != 0) &&
         (*(int *)(param_1[0x28] + param_1[0x25] * 0x28 + -0x20) <=
          *(int *)(param_1[0x28] + param_1[0x25] * 0x28 + -0x24))) {
        local_14 = FUN_00030374(param_1,0xb,&local_88);
        if (local_14 != 0) goto LAB_00032044;
        local_14 = FUN_00031764(param_1,param_2);
        if (local_14 != 0) goto LAB_00032044;
        local_14 = FUN_00031008(param_1,local_34,local_40,uStack_3c);
        iVar4 = local_14;
        if (local_14 != 0) goto LAB_00032044;
      }
      local_14 = iVar4;
      local_28 = (int *)(param_1[0x28] + param_1[0x25] * 0x28);
      if (local_28[8] == 0) {
        return 0x7f2bb780;
      }
      if (param_2 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_000316e4(param_1,local_28);
      }
      local_44 = (void *)*local_28;
      if (param_1[0x25] == 0) {
        local_30 = 1;
        local_2c = (uint)*(ushort *)((int)local_44 + 2);
        local_14 = FUN_00018acc((param_1[0x27] + 1) * 0x28,&local_8c);
        if (local_14 != 0) goto LAB_00032044;
      }
      else if (local_50 == 0) {
        local_2c = (uint)(*(ushort *)((int)local_44 + 2) >> 1);
      }
      else {
        local_2c = 1;
      }
      if ((local_2c == 0) && (local_50 == 0)) {
        local_14 = 0x7f2bb783;
        local_20 = CONCAT44(local_20._4_4_,(uint)local_20);
      }
      else {
        local_24 = malloc(*(size_t *)(param_1[1] + 0x14));
        uVar6 = CONCAT44(local_20._4_4_,(uint)local_20);
        if (local_24 == (void *)0x0) {
          local_14 = 0xc;
          local_20 = uVar6;
        }
        else {
          if ((uint)local_20 == 0 && local_20._4_4_ == 0) {
            uVar6 = FUN_00026288(param_1[1],param_1[2],param_1[3],param_1[3],0);
          }
          local_20._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
          local_20._0_4_ = (uint)uVar6;
          local_14 = FUN_00025da0(param_1[1],param_1[1],(uint)local_20,local_20._4_4_,local_24,
                                  &local_70);
          local_20 = uVar6;
          if (local_14 == 0) {
            local_54 = local_24;
            memcpy(local_24,local_44,0xc);
            *(short *)((int)local_54 + 2) = (short)local_2c;
            *(short *)((int)local_54 + 4) = (short)((*(int *)(param_1[1] + 0x14) - 0xcU) / 0xc);
            memcpy((void *)((int)local_54 + 0xc),
                   (void *)((int)local_44 + ((*(ushort *)((int)local_44 + 2) - local_2c) + 1) * 0xc)
                   ,local_2c * 0xc);
            local_60 = *(int *)((int)local_54 + 0xc);
            uStack_5c = 0;
            local_14 = FUN_000163e0(param_1[1],param_1[2],local_54);
            if (local_14 == 0) {
              local_14 = FUN_0001d6a0(*(undefined4 *)(param_1[1] + 4),1,local_70,uStack_6c,1,
                                      local_24);
              if (local_14 == 0) {
                if (param_1[0x25] == 0) {
                  memcpy(local_8c,local_28,param_1[0x27] * 0x28);
                  param_1[0x28] = (int)local_8c;
                  local_8c = local_28;
                  local_28 = (int *)param_1[0x28];
                  local_28[1] = 1;
                  local_28[3] = local_28[2] + -1;
                  param_1[0x26] = param_1[0x26] + 1;
                  param_1[0x27] = param_1[0x27] + 1;
                  *(short *)((int)local_44 + 6) = (short)param_1[0x26];
                }
                else {
                  local_28[1] = local_28[1] - local_2c;
                  local_28[3] = local_28[3] - local_2c;
                }
                *(short *)((int)local_44 + 2) = (short)local_28[1];
                local_14 = FUN_00030ea0(param_1);
                if (local_14 == 0) {
                  if (local_30 == 0) {
                    local_14 = FUN_00030374(param_1,0xb,&local_88);
                    local_64 = local_60 - local_80;
                    local_78 = local_78 - local_64;
                    local_14 = FUN_000314d8(param_1,0,&local_88);
                    if (local_14 != 0) goto LAB_00032044;
                    local_80 = local_60;
                    uStack_7c = uStack_5c;
                    local_88 = local_70;
                    uStack_84 = uStack_6c;
                    local_78 = local_64;
                    local_14 = FUN_000320a0(param_1,1,&local_88);
                  }
                  else {
                    local_14 = FUN_00030374(param_1,3,&local_88);
                    if (local_14 != 0) goto LAB_00032044;
                    local_80 = local_60;
                    uStack_7c = uStack_5c;
                    local_88 = local_70;
                    uStack_84 = uStack_6c;
                    local_78 = *(int *)(param_1[0x28] + 0x18) - local_60;
                    local_14 = FUN_000314d8(param_1,0,&local_88);
                  }
                  if (local_14 == 0) {
                    local_14 = FUN_00031008(param_1,local_34,local_40,uStack_3c);
                    if (local_14 == 0) {
                      FUN_0003b988(param_1[1],param_1[3],1,0);
                      local_14 = FUN_0001cfb0(param_1[1],param_1[2],param_1[3]);
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
LAB_00032044:
  if (local_8c != (int *)0x0) {
    FUN_00018c58(&local_8c);
  }
  free(local_24);
  return local_14;
}



/* ===== FUN_00032074 @ 00032074 size=44 ===== */

undefined4 FUN_00032074(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00031764(param_1,0);
  return uVar1;
}



/* ===== FUN_000320a0 @ 000320a0 size=648 ===== */

int FUN_000320a0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int local_14;
  void *local_10;
  int *local_c;
  
  if (*param_1 == 0x7f2bb712) {
    if ((*(uint *)(param_1[1] + 8) & 1) == 0) {
      local_14 = 0x7f2bb715;
    }
    else if (param_1[0x28] == 0) {
      local_14 = 0x7f2bb780;
    }
    else {
      local_c = (int *)(param_1[0x28] + param_1[0x25] * 0x28);
      if (local_c[2] <= local_c[1]) {
        if ((param_2 & 2) != 0) {
          return 0x7f2bb782;
        }
        iVar1 = FUN_00031764(param_1,1);
        if (iVar1 != 0) {
          return iVar1;
        }
        local_c = (int *)(param_1[0x28] + param_1[0x25] * 0x28);
      }
      if (local_c[8] == 0) {
        local_10 = (void *)(*local_c + 0xc);
        local_c[3] = -1;
      }
      else {
        local_10 = (void *)local_c[8];
        if ((param_2 & 1) != 0) {
          local_10 = (void *)((int)local_10 + 0xc);
          local_c[3] = local_c[3] + -1;
        }
      }
      local_c[8] = (int)local_10;
      if (-1 < local_c[3]) {
        memmove((void *)((int)local_10 + 0xc),local_10,(local_c[3] + 1) * 0xc);
      }
      local_c[3] = local_c[3] + 1;
      local_c[1] = local_c[1] + 1;
      *(short *)(*local_c + 2) = (short)local_c[1];
      local_14 = FUN_000314d8(param_1,0,param_3);
      if ((local_14 == 0) && (local_14 = FUN_00030ea0(param_1), local_14 == 0)) {
        local_14 = 0;
      }
      else {
        FUN_000330b8(param_1,0);
      }
    }
  }
  else {
    local_14 = 0x7f2bb712;
  }
  return local_14;
}



/* ===== FUN_00032328 @ 00032328 size=3472 ===== */

int FUN_00032328(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6,
                uint param_7)

{
  int iVar1;
  undefined4 extraout_r1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_108;
  int iStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  undefined1 auStack_f0 [4];
  int local_ec;
  int local_e0;
  int local_c0;
  int iStack_bc;
  uint local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  int iStack_a4;
  uint local_a0;
  int iStack_9c;
  uint local_98;
  uint local_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int local_80;
  uint local_7c;
  uint local_78;
  int iStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  int local_4c;
  uint local_48;
  uint uStack_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 1;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_30 = 0x8000;
  if (*param_1 != 0x7f2bb712) {
    return 0x7f2bb712;
  }
  if ((*(uint *)(param_1[1] + 8) & 1) == 0) {
    return 0x7f2bb715;
  }
  if (param_1[0x28] == 0) {
    return 0x7f2bb780;
  }
  local_3c = param_1[0x28] + param_1[0x25] * 0x28;
  bVar2 = (param_7 & 1) != 0;
  if (bVar2) {
    local_30 = 0x7fff;
  }
  local_2c = (uint)bVar2;
  if (param_5 != 0 || param_6 != 0) {
    local_b0 = 1;
    local_c0 = param_5;
    iStack_bc = param_6;
    local_ac = 1;
    local_b8 = param_3;
    uStack_b4 = param_4;
    if (local_2c != 0) {
      local_ac = 3;
    }
  }
  if ((param_1[0x26] == 0) && (*(int *)(local_3c + 4) == 0)) {
    iVar1 = FUN_000320a0(param_1,0,&local_c0);
    return iVar1;
  }
  local_14 = FUN_00030374(param_1,0,&local_78);
  if (local_14 != 0) {
    if (local_14 != 0x7f2bb780) {
      return local_14;
    }
    memset(&local_78,0,0x18);
  }
  uVar3 = FUN_00033384(param_1,auStack_f0);
  local_14 = (int)uVar3;
  if (local_14 != 0) {
    return local_14;
  }
  local_1c = local_e0 - local_ec;
  local_48 = local_70;
  uStack_44 = uStack_6c;
  local_14 = FUN_00031268(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
  if (local_14 != 0) {
    if (local_14 != 0x7f2bb784) goto LAB_00033078;
    local_14 = 0;
    local_18 = 0;
    if (param_5 == 0 && param_6 == 0) goto LAB_00033078;
  }
  local_14 = FUN_00030374(param_1,0,&local_78);
  if (local_14 == 0) {
    if ((local_64 & 2) != 0) {
      local_20 = 1;
    }
    uVar3 = FUN_00030374(param_1,7,&local_90);
    local_14 = (int)uVar3;
    if (local_14 == 0) {
      local_38 = 1;
      if ((local_7c & 2) != 0) {
        local_28 = 1;
      }
    }
    else {
      local_38 = 0;
      if (local_14 != 0x7f2bb77c) goto LAB_00033078;
    }
    local_14 = FUN_00031268(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
    if ((local_14 == 0) || (local_14 == 0x7f2bb784)) {
      uVar3 = FUN_00030374(param_1,8,&local_a8);
      local_14 = (int)uVar3;
      if (local_14 == 0) {
        local_34 = 1;
        if ((local_94 & 2) != 0) {
          local_24 = 1;
        }
      }
      else {
        local_34 = 0;
        if (local_14 != 0x7f2bb77d) goto LAB_00033078;
      }
      local_14 = FUN_00031268(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
      if (((local_14 == 0) || (local_14 == 0x7f2bb784)) &&
         ((local_18 == 0 ||
          ((local_2c != local_20 ||
           (param_6 !=
            (param_4 - (uStack_6c + (param_3 < local_70))) + iStack_74 +
            (uint)CARRY4(param_3 - local_70,local_78) || param_5 != (param_3 - local_70) + local_78)
           ))))) {
        if (local_18 == 0) {
          if ((((param_4 == uStack_6c + CARRY4(local_68,local_70) && param_3 == local_68 + local_70)
               && (param_6 == iStack_74 + (uint)CARRY4(local_68,local_78) &&
                   param_5 == local_68 + local_78)) && (local_2c == local_20)) &&
             ((int)local_68 < local_30 + -1)) {
            local_68 = local_68 + 1;
            local_14 = FUN_000314d8(param_1,0,&local_78);
          }
          else if (((param_4 == uStack_6c - (local_70 == 0) && param_3 == local_70 - 1) &&
                   (param_6 == iStack_74 - (uint)(local_78 == 0) && param_5 == local_78 - 1)) &&
                  ((local_2c == local_20 && ((int)local_68 < local_30 + -1)))) {
            local_68 = local_68 + 1;
            bVar2 = local_70 == 0;
            local_70 = local_70 - 1;
            uStack_6c = uStack_6c - bVar2;
            bVar2 = local_78 == 0;
            local_78 = local_78 - 1;
            iStack_74 = iStack_74 - (uint)bVar2;
            local_14 = FUN_000314d8(param_1,0,&local_78);
          }
          else if (((local_38 == 0) ||
                   (param_4 != iStack_84 - (uint)(local_88 == 0) || param_3 != local_88 - 1U)) ||
                  ((param_6 != iStack_8c - (uint)(local_90 == 0) || param_5 != local_90 + -1 ||
                   ((local_2c != local_28 || (local_30 + -1 <= local_80)))))) {
            bVar2 = uStack_6c <= param_4;
            if (param_4 == uStack_6c) {
              bVar2 = local_70 <= param_3;
            }
            if (bVar2) {
              local_14 = FUN_000320a0(param_1,1,&local_c0);
            }
            else {
              local_14 = FUN_000320a0(param_1,0,&local_c0);
            }
          }
          else {
            local_14 = FUN_00030374(param_1,7,&local_90);
            if (local_14 != 0) goto LAB_00033078;
            local_80 = local_80 + 1;
            bVar2 = local_88 == 0;
            local_88 = local_88 + -1;
            iStack_84 = iStack_84 - (uint)bVar2;
            bVar2 = local_90 == 0;
            local_90 = local_90 + -1;
            iStack_8c = iStack_8c - (uint)bVar2;
            local_14 = FUN_000314d8(param_1,0,&local_90);
          }
          if (local_14 == 0) {
            local_14 = FUN_0003129c(param_1);
          }
        }
        else if ((param_4 == uStack_6c && param_3 == local_70) && (local_68 == 1)) {
          if (param_5 == 0 && param_6 == 0) {
            local_14 = FUN_000330b8(param_1,0);
            if ((local_14 == 0) && (local_4c = FUN_0003129c(param_1), local_4c != 0x7f2bb780)) {
              local_14 = local_4c;
            }
          }
          else {
            local_14 = FUN_000314d8(param_1,0,&local_c0);
          }
        }
        else if (param_4 ==
                 (uStack_6c + CARRY4(local_68,local_70)) - (uint)(local_68 + local_70 == 0) &&
                 param_3 == (local_68 + local_70) - 1) {
          if (param_5 != 0 || param_6 != 0) {
            if ((((local_38 == 0) ||
                 (param_4 != iStack_84 - (uint)(local_88 == 0) || param_3 != local_88 - 1U)) ||
                (param_6 != iStack_8c - (uint)(local_90 == 0) || param_5 != local_90 + -1)) ||
               ((local_2c != local_28 || (local_30 + -1 <= local_80)))) {
              local_14 = FUN_000320a0(param_1,1,&local_c0);
            }
            else {
              local_14 = FUN_00030374(param_1,7,&local_90);
              if (local_14 != 0) goto LAB_00033078;
              local_80 = local_80 + 1;
              bVar2 = local_88 == 0;
              local_88 = local_88 + -1;
              iStack_84 = iStack_84 - (uint)bVar2;
              bVar2 = local_90 == 0;
              local_90 = local_90 + -1;
              iStack_8c = iStack_8c - (uint)bVar2;
              local_14 = FUN_000314d8(param_1,0,&local_90);
              if (local_14 != 0) goto LAB_00033078;
            }
            if (local_14 != 0) goto LAB_00033078;
            uVar3 = FUN_0003129c(param_1);
            local_14 = (int)uVar3;
            if (((local_14 != 0) ||
                (local_14 = FUN_00031268(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4),
                local_14 != 0)) || (local_14 = FUN_00030374(param_1,0,&local_78), local_14 != 0))
            goto LAB_00033078;
          }
          local_68 = local_68 - 1;
          local_14 = FUN_000314d8(param_1,0,&local_78);
        }
        else if (param_4 == uStack_6c && param_3 == local_70) {
          if (param_5 != 0 || param_6 != 0) {
            if ((((local_34 == 0) ||
                 (param_4 != iStack_9c + (uint)CARRY4(local_98,local_a0) ||
                  param_3 != local_98 + local_a0)) ||
                (param_6 != iStack_a4 + (uint)CARRY4(local_98,local_a8) ||
                 param_5 != local_98 + local_a8)) ||
               ((local_2c != local_24 || (local_30 + -1 <= (int)local_98)))) {
              local_14 = FUN_000320a0(param_1,0,&local_c0);
            }
            else {
              local_14 = FUN_00030374(param_1,8,&local_a8);
              if (local_14 != 0) goto LAB_00033078;
              local_98 = local_98 + 1;
              local_14 = FUN_000314d8(param_1,0,&local_a8);
            }
            if (((local_14 != 0) || (local_14 = FUN_0003129c(param_1), local_14 != 0)) ||
               (local_14 = FUN_00030374(param_1,7,&local_78), local_14 != 0)) goto LAB_00033078;
          }
          bVar2 = 0xfffffffe < local_78;
          local_78 = local_78 + 1;
          iStack_74 = iStack_74 + (uint)bVar2;
          bVar2 = 0xfffffffe < local_70;
          local_70 = local_70 + 1;
          uStack_6c = uStack_6c + bVar2;
          local_68 = local_68 - 1;
          local_14 = FUN_000314d8(param_1,0,&local_78);
          if (local_14 == 0) {
            local_14 = FUN_0003129c(param_1);
          }
        }
        else {
          local_58 = local_70;
          uStack_54 = uStack_6c;
          local_5c = local_68;
          local_108 = local_78;
          iStack_104 = iStack_74;
          uStack_100 = local_70;
          uStack_fc = uStack_6c;
          local_f8 = local_68;
          uStack_f4 = local_64;
          local_68 = param_3 - local_70;
          local_14 = FUN_000314d8(param_1,0,&local_78);
          if (local_14 == 0) {
            iVar1 = 0;
            if (param_5 != 0 || param_6 != 0) {
              uVar3 = FUN_000320a0(param_1,1,&local_c0);
              local_14 = (int)uVar3;
              iVar1 = local_14;
              if (local_14 != 0) {
                local_60 = FUN_00031268(param_1,(int)((ulonglong)uVar3 >> 0x20),local_58,uStack_54);
                if (local_60 == 0) {
                  FUN_000314d8(param_1,0,&local_108);
                }
                goto LAB_00033078;
              }
            }
            local_14 = iVar1;
            bVar2 = CARRY4(local_68 + 1,local_78);
            local_78 = local_68 + 1 + local_78;
            iStack_74 = iStack_74 + (uint)bVar2;
            bVar2 = CARRY4(local_68 + 1,local_70);
            local_70 = local_68 + 1 + local_70;
            uStack_6c = uStack_6c + bVar2;
            local_68 = (local_5c - local_68) - 1;
            uVar3 = FUN_000320a0(param_1,1,&local_78);
            local_14 = (int)uVar3;
            if (local_14 != 0) {
              if (param_5 != 0 || param_6 != 0) {
                uVar4 = FUN_00031268(param_1,(int)((ulonglong)uVar3 >> 0x20),local_b8,uStack_b4);
                uVar3 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),local_14);
                local_60 = (int)uVar4;
                if (local_60 == 0) {
                  FUN_000330b8(param_1,0);
                  uVar3 = CONCAT44(extraout_r1,local_14);
                }
              }
              local_14 = (int)uVar3;
              local_60 = FUN_00031268(param_1,(int)((ulonglong)uVar3 >> 0x20),local_58,uStack_54);
              if (local_60 == 0) {
                FUN_000314d8(param_1,0,&local_108);
              }
            }
          }
        }
      }
    }
  }
LAB_00033078:
  if (param_1[0x26] < local_1c) {
    local_1c = param_1[0x26];
  }
  FUN_00031008(param_1,local_1c,local_48,uStack_44);
  return local_14;
}



/* ===== FUN_000330b8 @ 000330b8 size=716 ===== */

int FUN_000330b8(int *param_1,uint param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  int local_1c;
  int local_18;
  void *local_14;
  int *local_10;
  int local_c;
  
  local_c = 0;
  if (*param_1 == 0x7f2bb712) {
    if ((*(uint *)(param_1[1] + 8) & 1) == 0) {
      local_c = 0x7f2bb715;
    }
    else if (param_1[0x28] == 0) {
      local_c = 0x7f2bb780;
    }
    else {
      local_10 = (int *)(param_1[0x28] + param_1[0x25] * 0x28);
      if (local_10[8] == 0) {
        local_c = 0x7f2bb780;
      }
      else {
        local_14 = (void *)local_10[8];
        if (local_10[3] == 0) {
          local_18 = local_10[8] + -0xc;
          local_10[8] = local_18;
        }
        else {
          memmove(local_14,(void *)((int)local_14 + 0xc),local_10[3] * 0xc);
          local_10[3] = local_10[3] + -1;
        }
        local_10[1] = local_10[1] + -1;
        if (local_10[1] == 0) {
          local_10[8] = 0;
        }
        if ((local_10[1] == 0) && (param_1[0x25] != 0)) {
          if (((param_2 & 1) == 0) && (local_c = FUN_00030374(param_1,0xb,&local_38), local_c == 0))
          {
            local_c = FUN_000330b8(param_1,param_2);
            *(uint *)(param_1[3] + 0x1c) =
                 *(int *)(param_1[3] + 0x1c) -
                 ((uint)(*(int *)(param_1[1] + 0x14) << (*(uint *)(param_1[1] + 100) & 0xff)) >> 9);
            local_c = FUN_0001cfb0(param_1[1],param_1[2],param_1[3]);
            FUN_00027018(param_1[1],0xffffffff,local_38,uStack_34,0xffffffff);
          }
        }
        else {
          local_1c = *local_10;
          *(short *)(local_1c + 2) = (short)local_10[1];
          if ((local_10[1] == 0) && (param_1[0x25] == 0)) {
            *(undefined2 *)(local_1c + 6) = 0;
            param_1[0x26] = 0;
          }
          local_c = FUN_00030ea0(param_1);
        }
      }
    }
  }
  else {
    local_c = 0x7f2bb712;
  }
  return local_c;
}



/* ===== FUN_00033384 @ 00033384 size=376 ===== */

undefined4 FUN_00033384(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*param_1 == 0x7f2bb712) {
    memset(param_2,0,0x30);
    piVar2 = (int *)(param_1[0x28] + param_1[0x25] * 0x28);
    if (piVar2 != (int *)0x0) {
      if (piVar2[8] == 0) {
        *param_2 = 0;
      }
      else {
        *param_2 = (uint)(piVar2[8] - *piVar2) / 0xc;
      }
      param_2[2] = piVar2[1];
      param_2[3] = piVar2[2];
      param_2[5] = (piVar2[2] - piVar2[1]) * 0xc;
    }
    param_2[1] = param_1[0x25];
    param_2[4] = param_1[0x26];
    param_2[6] = 0xffffffff;
    param_2[7] = 0;
    param_2[8] = 0xffffffff;
    param_2[9] = 0xffff;
    param_2[10] = 0x8000;
    param_2[0xb] = 0x7fff;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x7f2bb712;
  }
  return uVar1;
}



/* ===== FUN_000334fc @ 000334fc size=96 ===== */

int FUN_000334fc(uint param_1)

{
  undefined4 local_14;
  undefined4 local_c;
  
  local_c = 0;
  while (local_14 = param_1 >> 1, local_14 != 0) {
    local_c = local_c + 1;
    param_1 = local_14;
  }
  return local_c;
}



/* ===== FUN_0003355c @ 0003355c size=280 ===== */

int FUN_0003355c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(int *)(*(int *)(param_1 + 4) + 0x14) - 0xc;
  iVar4 = uVar3 * -0x55555555;
  if ((DAT_0005a388 == 0) || (iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x14), iVar4 != DAT_0005a388)
     ) {
    iVar4 = FUN_000334fc(0xffffffff,param_2,iVar4);
    iVar1 = FUN_000334fc(4);
    uVar2 = FUN_000334fc(uVar3 / 0xc);
    iVar4 = FUN_00042d5c(iVar4 - iVar1,uVar2);
    DAT_0005a38c = iVar4 + 1;
    DAT_0005a388 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  }
  return DAT_0005a38c;
}



/* ===== FUN_00033674 @ 00033674 size=36 ===== */

void FUN_00033674(void)

{
  return;
}



/* ===== FUN_00033698 @ 00033698 size=196 ===== */

undefined4
FUN_00033698(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = 1 << (*(uint *)(param_1 + 100) & 0xff);
  iVar2 = 1 << (*(uint *)(param_1 + 100) & 0xff);
  uVar4 = FUN_00043218(param_5 + uVar1 + -1,
                       (param_6 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(param_5,uVar1)) -
                       (uint)(param_5 + uVar1 == 0),iVar2,iVar2 >> 0x1f);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  FUN_00027258(param_1,uVar3,param_3,param_4,(int)uVar4 * (1 << (*(uint *)(param_1 + 100) & 0xff)),1
              );
  uVar3 = FUN_0003b988(param_1,param_2,(int)uVar4,uVar3);
  return uVar3;
}



/* ===== FUN_0003375c @ 0003375c size=7272 ===== */

int FUN_0003375c(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                uint *param_6,uint *param_7,undefined4 param_8,uint param_9,uint param_10,
                uint param_11,uint param_12,uint param_13,uint param_14)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint local_98;
  int iStack_94;
  uint local_90;
  uint uStack_8c;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_1c;
  
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  lVar9 = 0;
  local_40 = 0;
  uStack_3c = 0;
  if ((param_2 & 8) == 0) {
    lVar9 = FUN_00043218(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 0x6c),
                         *(undefined4 *)(param_1 + 0x14),0);
  }
  local_38._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
  local_38._0_4_ = (uint)lVar9;
  uVar3 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
  uVar2 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
  param_13 = param_9 & uVar2 | uVar3 & param_13;
  param_14 = param_10 & (int)uVar2 >> 0x1f | (int)uVar3 >> 0x1f & param_14;
  local_4c = -(1 << (*(uint *)(param_1 + 100) & 0xff)) & 0x7fff;
  local_50 = -(1 << (*(uint *)(param_1 + 100) & 0xff)) & 0x8000;
  iVar1 = local_44;
  if ((param_6 != (uint *)0x0) && (1 < 1 << (*(uint *)(param_1 + 100) & 0xff))) {
    if ((param_6[5] & 2) == 0) {
      uVar3 = local_50 - param_6[4];
    }
    else {
      uVar3 = local_4c - param_6[4];
    }
    local_28 = (ulonglong)uVar3;
    bVar8 = param_12 == 0;
    if (param_12 == 0) {
      bVar8 = param_11 <= uVar3;
    }
    if (bVar8 && (param_12 != 0 || uVar3 != param_11)) {
      local_28 = CONCAT44(param_12,param_11);
    }
    if ((uint)local_28 != 0 || local_28._4_4_ != 0) {
      uVar3 = 1 << (*(uint *)(param_1 + 100) & 0xff);
      uVar2 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
      uVar6 = param_9 & uVar2;
      uVar4 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
      local_40 = uVar4 & uVar3 - uVar6;
      uVar3 = (int)uVar4 >> 0x1f &
              ((int)uVar3 >> 0x1f) - ((param_10 & (int)uVar2 >> 0x1f) + (uint)(uVar3 < uVar6));
      uStack_3c = uVar3;
      if (local_40 != 0 || uVar3 != 0) {
        bVar8 = local_28._4_4_ <= uVar3;
        if (uVar3 == local_28._4_4_) {
          bVar8 = (uint)local_28 <= local_40;
        }
        if (bVar8 && (uVar3 != local_28._4_4_ || local_40 != (uint)local_28)) {
          local_40 = (uint)local_28;
          uStack_3c = local_28._4_4_;
        }
        if ((param_2 & 8) == 0) {
          iVar5 = param_6[4] + param_6[2];
          uVar3 = iVar5 - 1;
          uVar2 = (param_6[3] + (uint)CARRY4(param_6[4],param_6[2])) - (uint)(iVar5 == 0);
          local_30 = CONCAT44(uVar2,uVar3);
          bVar8 = uVar2 <= local_38._4_4_;
          if (local_38._4_4_ == uVar2) {
            bVar8 = uVar3 <= (uint)local_38;
          }
          if (bVar8) {
            uVar4 = uStack_3c + uVar2 + (uint)CARRY4(local_40,uVar3);
            bVar8 = uVar4 <= local_38._4_4_;
            if (local_38._4_4_ == uVar4) {
              bVar8 = local_40 + uVar3 <= (uint)local_38;
            }
            if (!bVar8 || lVar9 == CONCAT44(uVar4,local_40 + uVar3)) {
              local_40 = (uint)local_38 - uVar3;
              local_38._4_4_ = local_38._4_4_ - (uVar2 + ((uint)local_38 < uVar3));
              uStack_3c = local_38._4_4_;
            }
          }
          uVar3 = local_38._4_4_;
          if (local_40 == 0 && uStack_3c == 0) goto LAB_00033bc0;
        }
        local_38 = lVar9;
        local_44 = FUN_00031268(param_5,uVar3,param_6[2],param_6[3]);
        iVar1 = local_44;
        lVar9 = local_38;
        if (local_44 == 0) {
          param_6[4] = param_6[4] + local_40;
          bVar8 = CARRY4(local_40,param_9);
          param_9 = local_40 + param_9;
          param_10 = uStack_3c + param_10 + (uint)bVar8;
          bVar8 = param_11 < local_40;
          param_11 = param_11 - local_40;
          param_12 = param_12 - (uStack_3c + bVar8);
          bVar8 = CARRY4(local_40,param_13);
          param_13 = local_40 + param_13;
          param_14 = uStack_3c + param_14 + (uint)bVar8;
          FUN_00033674("ext_falloc clus left+",param_6);
          local_44 = FUN_000314d8(param_5,0,param_6);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003129c(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = 0;
          lVar9 = local_38;
          if ((param_6[5] & 2) == 0) {
            uVar3 = *param_6 + param_6[4];
            iVar1 = FUN_0001ddd0(param_1,local_40,uVar3 - local_40,
                                 (param_6[1] + (uint)CARRY4(*param_6,param_6[4])) -
                                 (uStack_3c + (uVar3 < local_40)),local_40,0,0);
            lVar9 = local_38;
            if (iVar1 != 0) {
              return iVar1;
            }
          }
        }
      }
    }
  }
LAB_00033bc0:
  local_44 = iVar1;
  iVar1 = local_44;
  if ((param_7 != (uint *)0x0) && (1 < 1 << (*(uint *)(param_1 + 100) & 0xff))) {
    if ((param_7[5] & 2) == 0) {
      uVar3 = local_50 - param_7[4];
    }
    else {
      uVar3 = local_4c - param_7[4];
    }
    local_28 = (ulonglong)uVar3;
    bVar8 = param_12 == 0;
    if (param_12 == 0) {
      bVar8 = param_11 <= uVar3;
    }
    if (bVar8 && (param_12 != 0 || uVar3 != param_11)) {
      local_28 = CONCAT44(param_12,param_11);
    }
    if ((uint)local_28 != 0 || local_28._4_4_ != 0) {
      uVar3 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
      local_40 = uVar3 & param_7[2];
      uStack_3c = (int)uVar3 >> 0x1f & param_7[3];
      if (local_40 != 0 || uStack_3c != 0) {
        local_38 = lVar9;
        local_44 = FUN_00031268(param_5,param_7[3],param_7[2],param_7[3]);
        if (local_44 != 0) {
          return local_44;
        }
        bVar8 = local_28._4_4_ <= uStack_3c;
        if (uStack_3c == local_28._4_4_) {
          bVar8 = (uint)local_28 <= local_40;
        }
        if (bVar8 && (uStack_3c != local_28._4_4_ || local_40 != (uint)local_28)) {
          local_40 = (uint)local_28;
          uStack_3c = local_28._4_4_;
        }
        uVar3 = param_7[2];
        param_7[2] = uVar3 - local_40;
        param_7[3] = param_7[3] - (uStack_3c + (uVar3 < local_40));
        uVar3 = *param_7;
        *param_7 = uVar3 - local_40;
        param_7[1] = param_7[1] - (uStack_3c + (uVar3 < local_40));
        param_7[4] = param_7[4] + local_40;
        bVar8 = param_11 < local_40;
        param_11 = param_11 - local_40;
        param_12 = param_12 - (uStack_3c + bVar8);
        FUN_00033674("ext_falloc clus right+",param_7);
        local_44 = FUN_000314d8(param_5,0,param_7);
        if (local_44 != 0) {
          return local_44;
        }
        local_44 = FUN_0003129c(param_5);
        if (local_44 != 0) {
          return local_44;
        }
        iVar1 = 0;
        lVar9 = local_38;
        if ((param_7[5] & 2) == 0) {
          iVar1 = FUN_0001ddd0(param_1,local_40,*param_7,param_7[1],local_40,0,0);
          lVar9 = local_38;
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
    }
  }
  local_44 = iVar1;
  if ((((((param_6 != (uint *)0x0) && (param_7 != (uint *)0x0)) &&
        (((param_7[5] ^ param_6[5]) & 2) == 0)) && (((param_2 & 2) == 0 || ((param_6[5] & 2) == 0)))
       ) && (((param_2 & 4) == 0 || ((param_6[5] & 2) != 0)))) &&
     (((param_6[5] & 2) != 0 || (((param_2 & 1) != 0 && ((param_2 & 2) != 0)))))) {
    uVar3 = param_6[4] + param_11;
    uVar2 = param_7[4] + uVar3;
    iVar1 = param_12 + CARRY4(param_6[4],param_11) + (uint)CARRY4(param_7[4],uVar3);
    local_30 = CONCAT44(iVar1,uVar2);
    uVar3 = local_50;
    if ((param_6[5] & 2) != 0) {
      uVar3 = local_4c;
    }
    if (iVar1 == 0 && uVar2 <= uVar3) {
      local_38 = lVar9;
      local_44 = FUN_00031268(param_5,iVar1,param_6[2],param_6[3]);
      lVar9 = local_38;
      if (local_44 == 0) {
        local_58 = param_6[4] + *param_6;
        uStack_54 = param_6[1] + (uint)CARRY4(param_6[4],*param_6);
        uVar3 = *param_7 - local_58;
        local_44 = FUN_00026464(param_1,3,local_58,uStack_54,uVar3 + 1,
                                (param_7[1] - (uStack_54 + (*param_7 < local_58))) +
                                (uint)(0xfffffffe < uVar3),0,&local_90,&local_98);
        lVar9 = local_38;
        if ((local_44 == 0) &&
           (uStack_8c + iStack_94 + (uint)CARRY4(local_90,local_98) == param_7[1] &&
            local_90 + local_98 == *param_7)) {
          local_44 = FUN_00033698(param_1,param_4,local_90,uStack_8c,local_98,iStack_94);
          if (local_44 != 0) {
            return local_44;
          }
          param_6[4] = (uint)local_30;
          FUN_00033674("ext_falloc merge",param_6);
          local_44 = FUN_000314d8(param_5,0,param_6);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003129c(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_00030374(param_5,7,&local_70);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_000330b8(param_5,0);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003129c(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          uVar3 = param_6[1];
          uVar2 = param_6[2];
          uVar4 = param_6[3];
          *param_7 = *param_6;
          param_7[1] = uVar3;
          param_7[2] = uVar2;
          param_7[3] = uVar4;
          uVar3 = param_6[5];
          param_7[4] = param_6[4];
          param_7[5] = uVar3;
          if (((param_6[5] & 2) == 0) && ((param_2 & 1) != 0)) {
            iVar1 = FUN_0001ddd0(param_1,uVar3,param_9,param_10,param_11,0,0);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
          return 0;
        }
      }
    }
  }
  local_38._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
  local_38._0_4_ = (uint)lVar9;
  iVar1 = local_44;
  if (param_6 != (uint *)0x0) {
    if ((param_6[5] & 2) == 0) {
      if ((param_2 & 1) == 0) {
        local_28 = 0;
      }
      else {
        local_28 = (ulonglong)(local_50 - param_6[4]);
      }
    }
    else {
      local_28 = (ulonglong)(local_4c - param_6[4]);
    }
    if ((((param_2 & 2) == 0) || ((param_6[5] & 2) == 0)) &&
       (((param_2 & 4) == 0 || ((param_6[5] & 2) != 0)))) {
      bVar8 = param_12 == 0;
      if (param_12 == 0) {
        bVar8 = param_11 <= (uint)local_28;
      }
      if (bVar8 && (param_12 != 0 || (uint)local_28 != param_11)) {
        local_28 = CONCAT44(param_12,param_11);
      }
      iVar5 = param_6[4] + param_6[2];
      uVar3 = iVar5 - 1;
      uVar2 = (param_6[3] + (uint)CARRY4(param_6[4],param_6[2])) - (uint)(iVar5 == 0);
      local_30 = CONCAT44(uVar2,uVar3);
      if ((param_2 & 8) == 0) {
        bVar8 = uVar2 <= local_38._4_4_;
        if (local_38._4_4_ == uVar2) {
          bVar8 = uVar3 <= (uint)local_38;
        }
        if (bVar8) {
          uVar4 = local_28._4_4_ + uVar2 + (uint)CARRY4((uint)local_28,uVar3);
          bVar8 = uVar4 <= local_38._4_4_;
          if (local_38._4_4_ == uVar4) {
            bVar8 = (uint)local_28 + uVar3 <= (uint)local_38;
          }
          if (!bVar8 || lVar9 == CONCAT44(uVar4,(uint)local_28 + uVar3)) {
            local_28 = CONCAT44(local_38._4_4_ - (uVar2 + ((uint)local_38 < uVar3)),
                                (uint)local_38 - uVar3);
          }
        }
      }
      if ((uint)local_28 != 0 || local_28._4_4_ != 0) {
        local_38 = lVar9;
        if (1 < 1 << (*(uint *)(param_1 + 100) & 0xff)) {
          iVar1 = FUN_0002b5e8(param_1,param_3,param_4,local_28._4_4_,(uint)local_28 + uVar3,
                               local_28._4_4_ + uVar2 + (uint)CARRY4((uint)local_28,uVar3),&local_90
                              );
          if (iVar1 != 0) {
            return iVar1;
          }
          if (local_90 != 0 || uStack_8c != 0) {
            uVar2 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
            uVar3 = uVar2 & (uint)local_30 + (uint)local_28;
            iVar1 = (uint)local_28 - uVar3;
            local_28 = CONCAT44((local_28._4_4_ -
                                (((int)uVar2 >> 0x1f &
                                 local_30._4_4_ + local_28._4_4_ +
                                 (uint)CARRY4((uint)local_30,(uint)local_28)) +
                                (uint)((uint)local_28 < uVar3))) - (uint)(iVar1 == 0),iVar1 + -1);
          }
          local_44 = 0;
          iVar1 = 0;
          lVar9 = local_38;
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) goto LAB_00034574;
        }
        iVar1 = param_6[4] + *param_6;
        iVar5 = param_6[1] + (uint)CARRY4(param_6[4],*param_6);
        local_30 = CONCAT44(iVar5,iVar1);
        local_44 = FUN_00026464(param_1,3,iVar1,iVar5,(uint)local_28,local_28._4_4_,0,&local_90,
                                &local_98);
        iVar1 = local_44;
        lVar9 = local_38;
        if (local_44 == 0) {
          uVar10 = FUN_00033698(param_1,param_4,local_90,uStack_8c,local_98,iStack_94);
          local_44 = (int)uVar10;
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_00031268(param_5,(int)((ulonglong)uVar10 >> 0x20),param_6[2],param_6[3]);
          if (local_44 != 0) {
            return local_44;
          }
          bVar8 = CARRY4(local_98,param_9);
          param_9 = local_98 + param_9;
          param_10 = iStack_94 + param_10 + (uint)bVar8;
          bVar8 = param_11 < local_98;
          param_11 = param_11 - local_98;
          param_12 = param_12 - (iStack_94 + (uint)bVar8);
          param_6[4] = param_6[4] + local_98;
          FUN_00033674("ext_falloc left+",param_6);
          local_44 = FUN_000314d8(param_5,0,param_6);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003129c(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = 0;
          lVar9 = local_38;
          if (((param_6[5] & 2) == 0) && ((param_2 & 1) != 0)) {
            iVar1 = FUN_0001ddd0(param_1,0,local_90,uStack_8c,local_98,0,0);
            lVar9 = local_38;
            if (iVar1 != 0) {
              return iVar1;
            }
          }
        }
      }
    }
  }
LAB_00034574:
  local_44 = iVar1;
  iVar1 = local_44;
  local_38 = lVar9;
  if (param_7 != (uint *)0x0) {
    if ((param_7[5] & 2) == 0) {
      if ((param_2 & 1) == 0) {
        local_28 = 0;
      }
      else {
        local_28 = (ulonglong)(local_50 - param_7[4]);
      }
    }
    else {
      local_28 = (ulonglong)(local_4c - param_7[4]);
    }
    if ((((param_2 & 2) == 0) || ((param_7[5] & 2) == 0)) &&
       (((param_2 & 4) == 0 || ((param_7[5] & 2) != 0)))) {
      bVar8 = param_12 == 0;
      if (param_12 == 0) {
        bVar8 = param_11 <= (uint)local_28;
      }
      if (bVar8 && (param_12 != 0 || (uint)local_28 != param_11)) {
        local_28 = CONCAT44(param_12,param_11);
      }
      if ((uint)local_28 != 0 || local_28._4_4_ != 0) {
        if (1 < 1 << (*(uint *)(param_1 + 100) & 0xff)) {
          iVar1 = FUN_0002b5e8(param_1,param_3,param_4,local_28._4_4_,param_7[2] - (uint)local_28,
                               param_7[3] - (local_28._4_4_ + (param_7[2] < (uint)local_28)),
                               &local_90);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (local_90 != 0 || uStack_8c != 0) {
            uVar6 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
            uVar2 = param_7[2] - (uint)local_28 & uVar6;
            uVar3 = 1 << (*(uint *)(param_1 + 100) & 0xff);
            uVar4 = uVar2 - uVar3;
            local_28 = CONCAT44(((param_7[3] - (local_28._4_4_ + (param_7[2] < (uint)local_28)) &
                                 (int)uVar6 >> 0x1f) -
                                (((int)uVar3 >> 0x1f) + (uint)(uVar2 < uVar3))) + local_28._4_4_ +
                                (uint)CARRY4(uVar4,(uint)local_28),uVar4 + (uint)local_28);
          }
          local_44 = 0;
          iVar1 = 0;
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) goto LAB_000349a0;
        }
        local_44 = FUN_00026464(param_1,3,*param_7 - (uint)local_28,
                                param_7[1] - (local_28._4_4_ + (*param_7 < (uint)local_28)),
                                (uint)local_28,local_28._4_4_,0,&local_90,&local_98);
        iVar1 = local_44;
        if (local_44 == 0) {
          uVar3 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
          uVar4 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
          uVar2 = uVar4 & local_90;
          uVar10 = FUN_00033698(param_1,param_4,uVar3 & local_90,(int)uVar3 >> 0x1f & uStack_8c,
                                local_98 + uVar2,
                                iStack_94 + ((int)uVar4 >> 0x1f & uStack_8c) +
                                (uint)CARRY4(local_98,uVar2));
          local_44 = (int)uVar10;
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_00031268(param_5,(int)((ulonglong)uVar10 >> 0x20),param_7[2],param_7[3]);
          if (local_44 != 0) {
            return local_44;
          }
          bVar8 = param_11 < local_98;
          param_11 = param_11 - local_98;
          param_12 = param_12 - (iStack_94 + (uint)bVar8);
          uVar3 = param_7[2];
          param_7[2] = uVar3 - local_98;
          param_7[3] = param_7[3] - (iStack_94 + (uint)(uVar3 < local_98));
          uVar3 = *param_7;
          *param_7 = uVar3 - local_98;
          param_7[1] = param_7[1] - (iStack_94 + (uint)(uVar3 < local_98));
          param_7[4] = param_7[4] + local_98;
          FUN_00033674("ext_falloc right+",param_7);
          local_44 = FUN_000314d8(param_5,0,param_7);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003129c(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = 0;
          if (((param_7[5] & 2) == 0) && ((param_2 & 1) != 0)) {
            iVar1 = FUN_0001ddd0(param_1,0,local_90,uStack_8c,local_98 + local_40,0,0);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
        }
      }
    }
  }
LAB_000349a0:
  local_44 = iVar1;
  iVar1 = local_44;
  if ((param_11 != 0 || param_12 != 0) &&
     (uVar3 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1,
     (param_9 & uVar3) != 0 || (param_10 & (int)uVar3 >> 0x1f) != 0)) {
    uVar3 = 1 << (*(uint *)(param_1 + 100) & 0xff);
    uVar4 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
    uVar7 = param_9 & uVar4;
    uVar6 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
    uVar2 = uVar6 & uVar3 - uVar7;
    uVar3 = (int)uVar6 >> 0x1f &
            ((int)uVar3 >> 0x1f) - ((param_10 & (int)uVar4 >> 0x1f) + (uint)(uVar3 < uVar7));
    _local_40 = CONCAT44(uVar3,uVar2);
    bVar8 = param_12 <= uVar3;
    if (uVar3 == param_12) {
      bVar8 = param_11 <= uVar2;
    }
    if (bVar8 && (uVar3 != param_12 || uVar2 != param_11)) {
      _local_40 = CONCAT44(param_12,param_11);
    }
    local_68 = param_9;
    uStack_64 = param_10;
    local_44 = FUN_0002b5e8(param_1,param_3,param_4,param_10,param_9,param_10,&local_90);
    if (local_44 != 0) {
      return local_44;
    }
    iVar1 = 0;
    if (local_90 != 0 || uStack_8c != 0) {
      local_70 = local_90;
      uStack_6c = uStack_8c;
      local_60 = local_40;
      if ((param_2 & 2) == 0) {
        local_5c = 2;
      }
      else {
        local_5c = 0;
      }
      FUN_00033674("ext_falloc iclus left+",&local_70);
      FUN_00031268(param_5,extraout_r1,local_68,uStack_64);
      local_44 = FUN_00030374(param_5,0,auStack_88);
      if (local_44 == 0x7f2bb780) {
        local_80 = 0;
      }
      else if (local_44 != 0) {
        return local_44;
      }
      bVar8 = uStack_64 <= local_80._4_4_;
      if (local_80._4_4_ == uStack_64) {
        bVar8 = local_68 <= (uint)local_80;
      }
      local_1c = (uint)(!bVar8 || local_80._4_4_ == uStack_64 && (uint)local_80 == local_68);
      local_44 = FUN_000320a0(param_5,local_1c,&local_70);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003129c(param_5);
      if (local_44 != 0) {
        return local_44;
      }
      iVar1 = 0;
      if (((local_5c & 2) == 0) && ((param_2 & 1) != 0)) {
        iVar1 = FUN_0001ddd0(param_1,0,local_70,uStack_6c,local_60,0,0);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      local_44 = iVar1;
      bVar8 = CARRY4(local_40,param_9);
      param_9 = local_40 + param_9;
      param_10 = uStack_3c + param_10 + (uint)bVar8;
      bVar8 = param_11 < local_40;
      param_11 = param_11 - local_40;
      param_12 = param_12 - (uStack_3c + bVar8);
      iVar1 = local_44;
    }
  }
  local_44 = iVar1;
  local_58 = param_11 + param_9;
  uStack_54 = param_12 + param_10 + (uint)CARRY4(param_11,param_9);
  iVar1 = local_44;
  if ((param_11 != 0 || param_12 != 0) &&
     (uVar3 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1,
     (local_58 & uVar3) != 0 || (uStack_54 & (int)uVar3 >> 0x1f) != 0)) {
    uVar2 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
    uVar3 = uVar2 & local_58;
    uVar2 = (int)uVar2 >> 0x1f & uStack_54;
    _local_40 = CONCAT44(uVar2,uVar3);
    bVar8 = param_12 <= uVar2;
    if (uVar2 == param_12) {
      bVar8 = param_11 <= uVar3;
    }
    if (bVar8 && (uVar2 != param_12 || uVar3 != param_11)) {
      _local_40 = CONCAT44(param_12,param_11);
    }
    uVar3 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
    local_68 = local_58 & uVar3;
    uStack_64 = uStack_54 & (int)uVar3 >> 0x1f;
    local_44 = FUN_0002b5e8(param_1,param_3,param_4,uStack_64,local_68,uStack_64,&local_90);
    if (local_44 != 0) {
      return local_44;
    }
    iVar1 = 0;
    if (local_90 != 0 || uStack_8c != 0) {
      local_70 = local_90;
      uStack_6c = uStack_8c;
      local_60 = local_40;
      if ((param_2 & 2) == 0) {
        local_5c = 2;
      }
      else {
        local_5c = 0;
      }
      FUN_00033674("ext_falloc iclus right+",&local_70);
      FUN_00031268(param_5,extraout_r1_00,local_68,uStack_64);
      local_44 = FUN_00030374(param_5,0,auStack_88);
      if (local_44 == 0x7f2bb780) {
        local_80 = 0;
      }
      else if (local_44 != 0) {
        return local_44;
      }
      bVar8 = uStack_64 <= local_80._4_4_;
      if (local_80._4_4_ == uStack_64) {
        bVar8 = local_68 <= (uint)local_80;
      }
      local_1c = (uint)(!bVar8 || local_80._4_4_ == uStack_64 && (uint)local_80 == local_68);
      local_44 = FUN_000320a0(param_5,local_1c,&local_70);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003129c(param_5);
      if (local_44 != 0) {
        return local_44;
      }
      iVar1 = 0;
      if (((local_5c & 2) == 0) && ((param_2 & 1) != 0)) {
        iVar1 = FUN_0001ddd0(param_1,0,local_70,uStack_6c,local_60,0,0);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      local_44 = iVar1;
      bVar8 = param_11 < local_40;
      param_11 = param_11 - local_40;
      param_12 = param_12 - (uStack_3c + bVar8);
      iVar1 = local_44;
    }
  }
  local_44 = iVar1;
  if (param_11 == 0 && param_12 == 0) {
    local_44 = 0;
  }
  else {
    local_68 = param_9;
    uStack_64 = param_10;
    if ((param_2 & 2) == 0) {
      local_48 = local_4c;
      local_5c = 2;
    }
    else {
      local_48 = local_50;
      local_5c = 0;
    }
    local_90 = param_13;
    uStack_8c = param_14;
    local_58 = param_11;
    uStack_54 = param_12;
    local_30 = 0;
    while( true ) {
      bVar8 = uStack_54 <= local_30._4_4_;
      if (local_30._4_4_ == uStack_54) {
        bVar8 = local_58 <= (uint)local_30;
      }
      if (bVar8) break;
      uVar3 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
      local_40 = uVar3 & local_68;
      uStack_3c = (int)uVar3 >> 0x1f & uStack_64;
      uVar3 = param_11 + local_40;
      iVar1 = param_12 + uStack_3c + (uint)CARRY4(param_11,local_40);
      bVar8 = iVar1 == 0;
      if (iVar1 == 0) {
        bVar8 = uVar3 <= local_48;
      }
      uVar2 = local_48;
      iVar5 = 0;
      if (bVar8 && (iVar1 != 0 || local_48 != uVar3)) {
        uVar2 = uVar3;
        iVar5 = iVar1;
      }
      local_28 = CONCAT44(iVar5,uVar2);
      uVar3 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
      local_44 = FUN_00026464(param_1,0,uVar3 & local_90,(int)uVar3 >> 0x1f & uStack_8c,uVar2,iVar5,
                              0,&local_90,&local_98);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_00033698(param_1,param_4,local_90,uStack_8c,local_98,iStack_94);
      if (local_44 != 0) {
        return local_44;
      }
      local_70 = local_40 + local_90;
      uStack_6c = uStack_3c + uStack_8c + (uint)CARRY4(local_40,local_90);
      local_60 = local_98 - local_40;
      FUN_00033674("ext_falloc create",&local_70);
      FUN_00031268(param_5,extraout_r1_01,local_68,uStack_64);
      local_44 = FUN_00030374(param_5,0,auStack_88);
      if (local_44 == 0x7f2bb780) {
        local_80 = 0;
      }
      else if (local_44 != 0) {
        return local_44;
      }
      bVar8 = uStack_64 <= local_80._4_4_;
      if (local_80._4_4_ == uStack_64) {
        bVar8 = local_68 <= (uint)local_80;
      }
      local_1c = (uint)(!bVar8 || local_80._4_4_ == uStack_64 && (uint)local_80 == local_68);
      local_44 = FUN_000320a0(param_5,local_1c,&local_70);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003129c(param_5);
      if (local_44 != 0) {
        return local_44;
      }
      iVar1 = 0;
      if (((local_5c & 2) == 0) && ((param_2 & 1) != 0)) {
        iVar1 = FUN_0001ddd0(param_1,0,local_90,uStack_8c,local_98,0,0);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      local_44 = iVar1;
      local_30 = CONCAT44((iStack_94 - (uStack_3c + (local_98 < local_40))) + local_30._4_4_ +
                          (uint)CARRY4(local_98 - local_40,(uint)local_30),
                          (local_98 - local_40) + (uint)local_30);
      bVar8 = CARRY4(local_40 - local_98,param_11);
      param_11 = (local_40 - local_98) + param_11;
      param_12 = (uStack_3c - (iStack_94 + (uint)(local_40 < local_98))) + param_12 + (uint)bVar8;
      bVar8 = CARRY4(local_98 - local_40,local_68);
      local_68 = (local_98 - local_40) + local_68;
      uStack_64 = (iStack_94 - (uStack_3c + (local_98 < local_40))) + uStack_64 + (uint)bVar8;
      bVar8 = CARRY4(local_90,local_98 - local_40);
      local_90 = local_90 + (local_98 - local_40);
      uStack_8c = uStack_8c + (iStack_94 - (uStack_3c + (local_98 < local_40))) + (uint)bVar8;
      lVar9 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
      uVar3 = (uint)((ulonglong)lVar9 >> 0x20);
      bVar8 = uStack_8c <= uVar3;
      if (uVar3 == uStack_8c) {
        bVar8 = local_90 <= (uint)lVar9;
      }
      if (!bVar8 || lVar9 == CONCAT44(uStack_8c,local_90)) {
        local_90 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
        uStack_8c = 0;
      }
    }
  }
  return local_44;
}



/* ===== FUN_000353c4 @ 000353c4 size=1528 ===== */

int FUN_000353c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6,uint param_7,uint param_8,uint param_9,int param_10)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  uint local_90;
  int iStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_5c;
  int local_58;
  int iStack_54;
  uint local_50;
  uint uStack_4c;
  undefined8 local_48;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  int local_1c;
  uint *local_18;
  uint *local_14;
  
  local_30 = 0;
  uStack_2c = 0;
  local_40 = (param_9 + param_7) - 1;
  uStack_3c = (param_10 + param_8 + (uint)CARRY4(param_9,param_7)) - (uint)(param_9 + param_7 == 0);
  local_1c = FUN_0002ff98(param_1,param_3,param_4,&local_5c);
  if (local_1c != 0) {
    return local_1c;
  }
  while( true ) {
    FUN_00031268(local_5c,local_5c,param_7,param_8);
    local_1c = FUN_00030374(local_5c,0,&local_78);
    if (local_1c == 0x7f2bb780) break;
    local_48 = CONCAT44(local_48._4_4_,(int)local_48);
    if (local_1c != 0) goto LAB_000359a0;
    FUN_00033674("ext_falloc initial",&local_78);
    local_50 = local_68 + local_70;
    uStack_4c = uStack_6c + CARRY4(local_68,local_70);
    bVar5 = uStack_6c <= param_8;
    if (param_8 == uStack_6c) {
      bVar5 = local_70 <= param_7;
    }
    if (bVar5) {
      bVar5 = param_8 <= uStack_4c;
      if (uStack_4c == param_8) {
        bVar5 = param_7 <= local_50;
      }
      if (bVar5) {
        local_14 = &local_78;
        local_28 = local_50;
        uStack_24 = uStack_4c;
      }
      else {
        local_28 = param_7;
        uStack_24 = param_8;
        local_14 = (uint *)0x0;
      }
      param_5 = (local_28 - local_70) + local_78;
      param_6 = (uStack_24 - (uStack_6c + (local_28 < local_70))) + iStack_74 +
                (uint)CARRY4(local_28 - local_70,local_78);
      local_38 = local_28 - local_50;
      uStack_34 = uStack_24 - (uStack_4c + (local_28 < local_50));
      iVar2 = local_1c;
      goto LAB_000356b8;
    }
    param_5 = (param_7 - local_70) + local_78;
    param_6 = (param_8 - (uStack_6c + (param_7 < local_70))) + iStack_74 +
              (uint)CARRY4(param_7 - local_70,local_78);
    local_1c = FUN_0003375c(param_1,param_2,param_3,param_4,local_5c,0,&local_78);
    if (local_1c != 0) goto LAB_000359a0;
    local_1c = 0;
  }
  local_48 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
  lVar6 = CONCAT44(param_6,param_5);
  uVar1 = local_48;
  if (param_6 == -1 && param_5 == -1) {
    lVar6 = FUN_00026288(param_1,param_3,param_4,param_8,param_7,param_8);
    uVar1 = local_48;
  }
  param_6 = (int)((ulonglong)lVar6 >> 0x20);
  param_5 = (int)lVar6;
  local_48._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_48._0_4_ = (int)uVar1;
  iVar2 = (int)local_48 + -1;
  iVar3 = local_48._4_4_ - (uint)((int)local_48 == 0);
  local_48 = uVar1;
  local_1c = FUN_00018764(*(undefined4 *)(param_1 + 0x30),param_6,param_5,param_6,iVar2,iVar3,
                          &param_5);
  _param_5 = lVar6;
  _param_5 = _param_5 + CONCAT44(param_8,param_7);
  local_1c = FUN_0003375c(param_1,param_2,param_3,param_4,local_5c,0,0);
  goto LAB_000359a0;
LAB_000356b8:
  do {
    local_1c = iVar2;
    local_1c = FUN_00030374(local_5c,7,&local_90);
    FUN_00033674("ext_falloc next",&local_90);
    if (local_1c == 0) {
      bVar5 = uStack_6c <= uStack_84;
      if (uStack_84 == uStack_6c) {
        bVar5 = local_70 <= local_88;
      }
      if (!bVar5 || uStack_84 == uStack_6c && local_88 == local_70) {
        local_1c = 0x7f2bb77c;
      }
    }
    if ((local_1c != 0) &&
       (local_48 = CONCAT44(local_48._4_4_,(int)local_48), local_1c != 0x7f2bb77c)) break;
    if (local_1c == 0x7f2bb77c) {
LAB_00035760:
      local_30 = local_40;
      uStack_2c = uStack_3c;
      local_18 = (uint *)0x0;
    }
    else {
      uVar4 = uStack_3c + (0xfffffffe < local_40);
      bVar5 = uVar4 <= uStack_84;
      if (uStack_84 == uVar4) {
        bVar5 = local_40 + 1 <= local_88;
      }
      if (bVar5 && (uStack_84 != uVar4 || local_88 != local_40 + 1)) goto LAB_00035760;
      local_30 = local_88 - 1;
      uStack_2c = uStack_84 - (local_88 == 0);
      local_18 = &local_90;
    }
    if (local_1c != 0x7f2bb77c) {
      uVar4 = uStack_2c - (uStack_84 + (local_30 < local_88));
      bVar5 = uVar4 <= uStack_34;
      if (uStack_34 == uVar4) {
        bVar5 = local_30 - local_88 <= local_38;
      }
      if (bVar5 && (uStack_34 != uVar4 || local_38 != local_30 - local_88)) {
        param_5 = (local_28 - local_88) + local_90;
        param_6 = (uStack_24 - (uStack_84 + (local_28 < local_88))) + iStack_8c +
                  (uint)CARRY4(local_28 - local_88,local_90);
        local_38 = local_30 - local_88;
        uStack_34 = uStack_2c - (uStack_84 + (local_30 < local_88));
      }
    }
    local_1c = 0;
    bVar5 = uStack_2c <= uStack_24;
    if (uStack_24 == uStack_2c) {
      bVar5 = local_30 <= local_28;
    }
    if (!bVar5 || uStack_24 == uStack_2c && local_28 == local_30) {
      local_58 = (local_30 - local_28) + 1;
      iStack_54 = (uStack_2c - (uStack_24 + (local_30 < local_28))) +
                  (uint)(0xfffffffe < local_30 - local_28);
      local_1c = FUN_0003375c(param_1,param_2,param_3,param_4,local_5c,local_14,local_18);
      local_48 = CONCAT44(local_48._4_4_,(int)local_48);
      if (local_1c != 0) break;
    }
    local_48 = CONCAT44(local_48._4_4_,(int)local_48);
    if (uStack_2c == uStack_3c && local_30 == local_40) break;
    local_1c = FUN_00031268(local_5c,local_5c,local_88,uStack_84);
    local_48 = CONCAT44(local_48._4_4_,(int)local_48);
    if (local_1c != 0) break;
    local_50 = local_80 + local_88;
    uStack_4c = uStack_84 + CARRY4(local_80,local_88);
    local_78 = local_90;
    iStack_74 = iStack_8c;
    local_70 = local_88;
    uStack_6c = uStack_84;
    local_68 = local_80;
    uStack_64 = uStack_7c;
    local_14 = &local_78;
    param_5 = (local_50 - local_88) + local_90;
    param_6 = (uStack_4c - (uStack_84 + (local_50 < local_88))) + iStack_8c +
              (uint)CARRY4(local_50 - local_88,local_90);
    local_38 = 0;
    uStack_34 = 0;
    bVar5 = uStack_3c <= uStack_2c;
    if (uStack_2c == uStack_3c) {
      bVar5 = local_40 <= local_30;
    }
    local_28 = local_50;
    uStack_24 = uStack_4c;
    iVar2 = 0;
    local_48 = CONCAT44(local_48._4_4_,(int)local_48);
  } while (!bVar5);
LAB_000359a0:
  FUN_0002fe94(local_5c);
  return local_1c;
}



/* ===== FUN_000359bc @ 000359bc size=568 ===== */

int FUN_000359bc(int param_1,uint param_2,undefined4 param_3,undefined1 *param_4,undefined4 param_5,
                undefined4 param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 *local_b8;
  int local_a8;
  int iStack_a4;
  undefined1 auStack_9c [128];
  int local_1c;
  uint local_18;
  uint uStack_14;
  
  if ((((param_2 & 2) == 0) || ((param_2 & 4) == 0)) && ((param_2 & 0xfffffff0) == 0)) {
    lVar4 = FUN_00012c48(*(undefined4 *)(param_1 + 0x10));
    uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
    bVar3 = uVar2 <= param_10;
    if (param_10 == uVar2) {
      bVar3 = (uint)lVar4 <= param_9;
    }
    if (bVar3 && lVar4 != CONCAT44(param_10,param_9)) {
      local_1c = 0x7f2bb748;
    }
    else if (param_9 == 0 && param_10 == 0) {
      local_1c = 0;
    }
    else {
      local_b8 = param_4;
      if (param_4 == (undefined1 *)0x0) {
        iVar1 = FUN_0001c9f4(param_1,param_3,auStack_9c);
        if (iVar1 != 0) {
          return iVar1;
        }
        local_b8 = auStack_9c;
        local_1c = 0;
      }
      if ((*(uint *)(local_b8 + 0x20) & 0x80000) == 0) {
        local_18 = param_7;
        uStack_14 = param_8;
        while( true ) {
          uVar2 = param_10 + param_8 + (uint)CARRY4(param_9,param_7);
          bVar3 = uVar2 <= uStack_14;
          if (uStack_14 == uVar2) {
            bVar3 = param_9 + param_7 <= local_18;
          }
          if (bVar3) goto LAB_00035bc4;
          local_1c = FUN_0002bbb8(param_1,param_3,local_b8,0,0);
          if ((local_1c != 0) ||
             ((local_a8 == 0 && iStack_a4 == 0 &&
              (local_1c = FUN_0002bbb8(param_1,param_3,local_b8,0,0xd), local_1c != 0)))) break;
          bVar3 = 0xfffffffe < local_18;
          local_18 = local_18 + 1;
          uStack_14 = uStack_14 + bVar3;
        }
      }
      else {
        local_1c = FUN_000353c4(param_1,param_2,param_3,local_b8,param_5,param_6,param_7,param_8,
                                param_9,param_10);
LAB_00035bc4:
        if (local_b8 == auStack_9c) {
          FUN_0001cfb0(param_1,param_3,local_b8);
        }
      }
    }
  }
  else {
    local_1c = 0x7f2bb747;
  }
  return local_1c;
}



/* ===== FUN_00035bf4 @ 00035bf4 size=408 ===== */

int FUN_00035bf4(int param_1,undefined4 param_2,void *param_3,uint param_4,undefined4 *param_5)

{
  undefined4 *local_10;
  int local_c;
  
  if (((param_4 & 3) != 0) && ((*(uint *)(param_1 + 8) & 1) == 0)) {
    return 0x7f2bb715;
  }
  local_c = FUN_00018a74(0xb0,&local_10);
  if (local_c != 0) {
    return local_c;
  }
  memset(local_10,0,0xb0);
  *local_10 = 0x7f2bb70f;
  local_10[1] = param_1;
  local_10[2] = param_2;
  local_10[0x23] = param_4 & 0xff;
  if (param_3 == (void *)0x0) {
    local_c = FUN_0001c9f4(param_1,param_2,local_10 + 3);
    if (local_c != 0) goto LAB_00035d50;
  }
  else {
    memcpy(local_10 + 3,param_3,0x80);
  }
  local_c = FUN_00018b38(3,*(undefined4 *)(param_1 + 0x14),local_10 + 0x2a);
  if (local_c == 0) {
    *param_5 = local_10;
    return 0;
  }
LAB_00035d50:
  if (local_10[0x2a] != 0) {
    FUN_00018c58(local_10 + 0x2a);
  }
  FUN_00018c58(&local_10);
  return local_c;
}



/* ===== FUN_00035d8c @ 00035d8c size=72 ===== */

undefined4 FUN_00035d8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00035bf4(param_1,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00035eac @ 00035eac size=660 ===== */

int FUN_00035eac(int *param_1)

{
  int iVar1;
  int iVar2;
  uint local_1c;
  
  if (*param_1 == 0x7f2bb70f) {
    iVar2 = param_1[1];
    if (((param_1[0x23] & 0x2000U) == 0) || ((param_1[0x23] & 0x4000U) == 0)) {
      iVar1 = 0;
    }
    else if (((((param_1[0x28] == 0 && param_1[0x29] == 0) || ((param_1[0xb] & 0x80000U) == 0)) ||
              ((iVar1 = FUN_0002bbb8(iVar2,param_1[2],param_1 + 3,
                                     param_1[0x2a] + *(int *)(iVar2 + 0x14),0), iVar1 == 0 &&
               (((local_1c & 1) == 0 ||
                (iVar1 = FUN_0002bbb8(iVar2,param_1[2],param_1 + 3,
                                      param_1[0x2a] + *(int *)(iVar2 + 0x14),2), iVar1 == 0)))))) &&
             ((param_1[0x28] != 0 || param_1[0x29] != 0 ||
              (iVar1 = FUN_0002bbb8(iVar2,param_1[2],param_1 + 3,
                                    param_1[0x2a] + *(int *)(iVar2 + 0x14),param_1[2] != 0),
              iVar1 == 0)))) &&
            (iVar1 = FUN_0001d6a0(*(undefined4 *)(iVar2 + 4),1,param_1[0x28],param_1[0x29],1,
                                  param_1[0x2a]), iVar1 == 0)) {
      param_1[0x23] = param_1[0x23] & 0xffffbfff;
    }
  }
  else {
    iVar1 = 0x7f2bb70f;
  }
  return iVar1;
}



/* ===== FUN_00036140 @ 00036140 size=164 ===== */

int FUN_00036140(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_00043218(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0);
  if (lVar2 != *(longlong *)(param_1 + 0x98)) {
    iVar1 = FUN_00035eac(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffdfff;
  }
  *(longlong *)(param_1 + 0x98) = lVar2;
  return 0;
}



/* ===== FUN_000361e4 @ 000361e4 size=344 ===== */

int FUN_000361e4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = *(int *)(param_1 + 4);
  if ((*(uint *)(param_1 + 0x8c) & 0x2000) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x98);
    uVar3 = *(undefined4 *)(param_1 + 0x9c);
    iVar1 = param_1 + 0xa0;
    puVar4 = &local_14;
    local_10 = FUN_0002bbb8(local_c,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
                            *(int *)(param_1 + 0xa8) + *(int *)(local_c + 0x14),0);
    if (local_10 != 0) {
      return local_10;
    }
    if (param_2 == 0) {
      if ((*(int *)(param_1 + 0xa0) == 0 && *(int *)(param_1 + 0xa4) == 0) || ((local_14 & 1) != 0))
      {
        memset(*(void **)(param_1 + 0xa8),0,*(size_t *)(local_c + 0x14));
      }
      else {
        iVar1 = FUN_0001d5d4(*(undefined4 *)(local_c + 4),1,*(undefined4 *)(param_1 + 0xa0),
                             *(undefined4 *)(param_1 + 0xa4),1,*(undefined4 *)(param_1 + 0xa8),uVar2
                             ,uVar3,puVar4,iVar1);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
    }
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 0x2000;
  }
  return 0;
}



/* ===== FUN_0003633c @ 0003633c size=128 ===== */

undefined4 FUN_0003633c(int *param_1)

{
  int *local_14 [2];
  undefined4 local_c;
  
  if (*param_1 == 0x7f2bb70f) {
    local_14[0] = param_1;
    local_c = FUN_00035eac(param_1);
    if (local_14[0][0x2a] != 0) {
      FUN_00018c58(local_14[0] + 0x2a);
    }
    FUN_00018c58(local_14);
  }
  else {
    local_c = 0x7f2bb70f;
  }
  return local_c;
}



/* ===== FUN_000363bc @ 000363bc size=340 ===== */

int FUN_000363bc(int param_1,void *param_2,uint param_3,size_t *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_18;
  int local_14;
  undefined4 local_10;
  size_t local_c;
  
  local_c = 0;
  local_10 = *(undefined4 *)(param_1 + 4);
  local_14 = FUN_0001a414(local_10,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
                          *(undefined4 *)(param_1 + 0xa8),&local_18);
  if (local_14 == 0) {
    if (*(int *)(param_1 + 0x94) == 0 && *(uint *)(param_1 + 0x90) < local_18) {
      local_c = local_18 - *(int *)(param_1 + 0x90);
      if (param_3 < local_c) {
        local_c = param_3;
      }
      memcpy(param_2,(void *)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0x90)),local_c);
      uVar1 = *(uint *)(param_1 + 0x90);
      uVar2 = VectorShiftRight(CONCAT44(local_c,local_c),0x20);
      *(uint *)(param_1 + 0x90) = (uint)uVar2 + uVar1;
      *(uint *)(param_1 + 0x94) =
           (int)((ulonglong)uVar2 >> 0x20) + *(int *)(param_1 + 0x94) +
           (uint)CARRY4((uint)uVar2,uVar1);
    }
    if (param_4 != (size_t *)0x0) {
      *param_4 = local_c;
    }
  }
  return local_14;
}



/* ===== FUN_00036510 @ 00036510 size=660 ===== */

int FUN_00036510(int *param_1,void *param_2,uint param_3,int *param_4)

{
  int extraout_r2;
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint local_44;
  void *local_28;
  int local_24;
  uint local_20;
  int local_1c;
  
  local_1c = 0;
  local_24 = 0;
  if (*param_1 == 0x7f2bb70f) {
    iVar2 = param_1[1];
    local_44 = param_3;
    local_28 = param_2;
    if ((param_1[0xb] & 0x10000000U) == 0) {
      while( true ) {
        bVar3 = (uint)param_1[0x1e] <= (uint)param_1[0x25];
        if (param_1[0x25] == param_1[0x1e]) {
          bVar3 = (uint)param_1[4] <= (uint)param_1[0x24];
        }
        if ((((bVar3) || (local_44 == 0)) || (local_1c = FUN_00036140(param_1), local_1c != 0)) ||
           (local_1c = FUN_000361e4(param_1,0), local_1c != 0)) break;
        FUN_00043218(param_1[0x24],param_1[0x25],*(undefined4 *)(iVar2 + 0x14),0);
        local_20 = *(int *)(iVar2 + 0x14) - extraout_r2;
        if (local_44 < local_20) {
          local_20 = local_44;
        }
        uVar1 = param_1[4] - param_1[0x24];
        if (param_1[0x1e] == param_1[0x25] + (uint)((uint)param_1[4] < (uint)param_1[0x24]) &&
            uVar1 < local_20) {
          local_20 = uVar1;
        }
        memcpy(local_28,(void *)(param_1[0x2a] + extraout_r2),local_20);
        uVar1 = param_1[0x24];
        param_1[0x24] = local_20 + uVar1;
        param_1[0x25] = param_1[0x25] + (uint)CARRY4(local_20,uVar1);
        local_28 = (void *)((int)local_28 + local_20);
        local_24 = local_24 + local_20;
        local_44 = local_44 - local_20;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = local_24;
      }
    }
    else {
      local_1c = FUN_000363bc(param_1,param_2,param_3,param_4);
    }
  }
  else {
    local_1c = 0x7f2bb70f;
  }
  return local_1c;
}



/* ===== FUN_000367a4 @ 000367a4 size=616 ===== */

int FUN_000367a4(int param_1,void *param_2,int param_3,size_t *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint local_24 [2];
  int local_1c;
  undefined4 local_18;
  size_t local_14;
  
  local_14 = 0;
  local_18 = *(undefined4 *)(param_1 + 4);
  local_1c = FUN_0001a414(local_18,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
                          *(undefined4 *)(param_1 + 0xa8),local_24);
  if (local_1c == 0) {
    if (*(int *)(param_1 + 0x94) == 0 && *(uint *)(param_1 + 0x90) < local_24[0]) {
      local_14 = param_3 - *(int *)(param_1 + 0x90);
      memcpy((void *)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0x90)),param_2,local_14);
      local_1c = FUN_0001a51c(local_18,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
                              *(undefined4 *)(param_1 + 0xa8),local_14);
      if (local_1c != 0x7f2bb7a7) {
        if (local_1c != 0) {
          return local_1c;
        }
        uVar1 = *(uint *)(param_1 + 0x90);
        uVar3 = VectorShiftRight(CONCAT44(local_14,local_14),0x20);
        *(uint *)(param_1 + 0x90) = (uint)uVar3 + uVar1;
        *(uint *)(param_1 + 0x94) =
             (int)((ulonglong)uVar3 >> 0x20) + *(int *)(param_1 + 0x94) +
             (uint)CARRY4((uint)uVar3,uVar1);
        if (local_14 != 0) {
          uVar1 = *(uint *)(param_1 + 0x78);
          bVar2 = *(uint *)(param_1 + 0x94) <= uVar1;
          if (uVar1 == *(uint *)(param_1 + 0x94)) {
            bVar2 = *(uint *)(param_1 + 0x90) <= *(uint *)(param_1 + 0x10);
          }
          if (!bVar2) {
            FUN_000371d0(param_1,uVar1,*(undefined4 *)(param_1 + 0x90),
                         *(undefined4 *)(param_1 + 0x94));
          }
        }
        if (param_4 != (size_t *)0x0) {
          *param_4 = local_14;
        }
        return 0;
      }
    }
    else {
      local_1c = 0;
    }
    local_1c = FUN_0001a1c0(local_18,*(undefined4 *)(param_1 + 8));
    if ((local_1c == 0) &&
       (local_1c = FUN_0001c9f4(local_18,*(undefined4 *)(param_1 + 8),param_1 + 0xc), local_1c == 0)
       ) {
      local_1c = 0x7f2bb7a7;
    }
  }
  return local_1c;
}



/* ===== FUN_00036a0c @ 00036a0c size=864 ===== */

int FUN_00036a0c(int *param_1,void *param_2,uint param_3,int *param_4)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint local_3c;
  void *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  local_14 = 0;
  local_1c = 0;
  if (*param_1 == 0x7f2bb70f) {
    iVar2 = param_1[1];
    if ((param_1[0x23] & 1U) == 0) {
      local_14 = 0x7f2bb74d;
    }
    else {
      local_3c = param_3;
      local_20 = param_2;
      if ((param_1[0xb] & 0x10000000U) != 0) {
        iVar1 = FUN_000367a4(param_1,param_2,param_3,param_4);
        if (iVar1 != 0x7f2bb7a7) {
          return iVar1;
        }
        local_14 = 0;
      }
      while ((local_3c != 0 && (local_14 = FUN_00036140(param_1), local_14 == 0))) {
        FUN_00043218(param_1[0x24],param_1[0x25],*(undefined4 *)(iVar2 + 0x14),0);
        local_18 = *(int *)(iVar2 + 0x14) - extraout_r2;
        if (local_3c < local_18) {
          local_18 = local_3c;
        }
        local_14 = FUN_000361e4(param_1,local_18 == *(size_t *)(iVar2 + 0x14));
        if ((local_14 != 0) ||
           ((param_1[0x28] == 0 && param_1[0x29] == 0 &&
            (local_14 = FUN_0002bbb8(iVar2,param_1[2],param_1 + 3,
                                     param_1[0x2a] + *(int *)(iVar2 + 0x14),param_1[2] != 0),
            local_14 != 0)))) break;
        param_1[0x23] = param_1[0x23] | 0x4000;
        memcpy((void *)(param_1[0x2a] + extraout_r2),local_20,local_18);
        uVar3 = param_1[0x24];
        uVar5 = VectorShiftRight(CONCAT44(local_18,local_18),0x20);
        param_1[0x24] = (uint)uVar5 + uVar3;
        param_1[0x25] =
             (int)((ulonglong)uVar5 >> 0x20) + param_1[0x25] + (uint)CARRY4((uint)uVar5,uVar3);
        local_20 = (void *)((int)local_20 + local_18);
        local_1c = local_1c + local_18;
        local_3c = local_3c - local_18;
      }
      if (local_1c != 0) {
        uVar3 = param_1[0x1e];
        bVar4 = (uint)param_1[0x25] <= uVar3;
        if (uVar3 == param_1[0x25]) {
          bVar4 = (uint)param_1[0x24] <= (uint)param_1[4];
        }
        if ((!bVar4) &&
           (iVar2 = FUN_000371d0(param_1,uVar3,param_1[0x24],param_1[0x25]), local_14 == 0)) {
          local_14 = iVar2;
        }
      }
      if (param_4 != (int *)0x0) {
        *param_4 = local_1c;
      }
    }
  }
  else {
    local_14 = 0x7f2bb70f;
  }
  return local_14;
}



/* ===== FUN_00036d6c @ 00036d6c size=276 ===== */

undefined4
FUN_00036d6c(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == 0x7f2bb70f) {
    if (param_5 == 0) {
      param_1[0x24] = param_3;
      param_1[0x25] = param_4;
    }
    else if (param_5 == 1) {
      *(ulonglong *)(param_1 + 0x24) =
           CONCAT44(param_4 + param_1[0x25] + (uint)CARRY4(param_3,param_1[0x24]),
                    param_3 + param_1[0x24]);
    }
    else {
      if (param_5 != 2) {
        return 0x7f2bb747;
      }
      param_1[0x24] = param_3 + param_1[4];
      param_1[0x25] = param_4 + param_1[0x1e] + (uint)CARRY4(param_3,param_1[4]);
    }
    if (param_6 != (int *)0x0) {
      iVar2 = param_1[0x25];
      *param_6 = param_1[0x24];
      param_6[1] = iVar2;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x7f2bb70f;
  }
  return uVar1;
}



/* ===== FUN_00036e80 @ 00036e80 size=124 ===== */

undefined4
FUN_00036e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20[0] = 0;
  uStack_c = 0;
  local_10 = param_2;
  uVar1 = FUN_00036d6c(param_1,param_2,param_2,0,param_3,local_20);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (undefined4)local_20[0];
  }
  return uVar1;
}



/* ===== FUN_00036efc @ 00036efc size=140 ===== */

undefined4 FUN_00036efc(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == 0x7f2bb70f) {
    iVar2 = param_1[0x1e];
    *param_2 = param_1[4];
    param_2[1] = iVar2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x7f2bb70f;
  }
  return uVar1;
}



/* ===== FUN_00036f88 @ 00036f88 size=100 ===== */

undefined4 FUN_00036f88(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  int iStack_c;
  
  iVar1 = FUN_00036efc(param_1,&local_10);
  if (iVar1 == 0) {
    if (iStack_c != 0) {
      local_10 = 0;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_00036fec @ 00036fec size=484 ===== */

int FUN_00036fec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r2;
  int extraout_r3;
  undefined4 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  int *piVar4;
  uint local_34;
  int local_30;
  int iStack_2c;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(param_1 + 4);
  local_24 = 0;
  FUN_00043218(param_3,param_4,*(undefined4 *)(local_18 + 0x14),0);
  if (extraout_r2 == 0 && extraout_r3 == 0) {
    local_14 = 0;
  }
  else {
    local_20 = extraout_r2;
    local_14 = FUN_00036140(param_1);
    if (local_14 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar2 = FUN_00043218(param_3,param_4,*(undefined4 *)(local_18 + 0x14),0);
      piVar4 = &local_30;
      puVar3 = &local_34;
      local_14 = FUN_0002bbb8(local_18,uVar1,0,0,0);
      if (local_14 == 0) {
        if ((local_30 == 0 && iStack_2c == 0) || ((local_34 & 1) != 0)) {
          local_14 = 0;
        }
        else {
          local_14 = FUN_00018a74(*(undefined4 *)(local_18 + 0x14),&local_24);
          if (local_14 == 0) {
            local_14 = FUN_0001d5d4(*(undefined4 *)(local_18 + 4),1,local_30,iStack_2c,1,local_24,
                                    uVar2,puVar3,piVar4);
            if (local_14 == 0) {
              memset((void *)(local_24 + local_20),0,*(int *)(local_18 + 0x14) - local_20);
              local_14 = FUN_0001d6a0(*(undefined4 *)(local_18 + 4),1,local_30,iStack_2c,1,local_24)
              ;
            }
            FUN_00018c58(&local_24);
          }
        }
      }
    }
  }
  return local_14;
}



/* ===== FUN_000371d0 @ 000371d0 size=652 ===== */

int FUN_000371d0(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  
  if (*param_1 == 0x7f2bb70f) {
    if (param_3 != 0 || param_4 != 0) {
      iVar5 = param_1[1];
      uVar11 = FUN_00043218(param_3 - 1,param_4 - (uint)(param_3 == 0),
                            *(undefined4 *)(param_1[1] + 0x14),0);
      iVar5 = FUN_0002ba64(iVar5,param_1 + 3,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      if (iVar5 != 0) {
        return 0x7f2bb752;
      }
    }
    iVar8 = param_3 + *(uint *)(param_1[1] + 0x14);
    uVar6 = (param_4 + (uint)CARRY4(param_3,*(uint *)(param_1[1] + 0x14))) - (uint)(iVar8 == 0);
    iVar5 = *(int *)(*(int *)(param_1[1] + 0x10) + 0x18);
    uVar1 = iVar5 + 10;
    uVar4 = iVar8 - 1U >> (uVar1 & 0xff) | uVar6 << (0x20 - uVar1 & 0xff) |
            uVar6 >> (iVar5 - 0x16U & 0xff);
    uVar6 = uVar6 >> (uVar1 & 0xff);
    iVar9 = param_1[4] + *(uint *)(param_1[1] + 0x14);
    uVar7 = (param_1[0x1e] + (uint)CARRY4(param_1[4],*(uint *)(param_1[1] + 0x14))) -
            (uint)(iVar9 == 0);
    iVar8 = *(int *)(*(int *)(param_1[1] + 0x10) + 0x18);
    uVar2 = iVar8 + 10;
    uVar1 = uVar7 >> (uVar2 & 0xff);
    uVar11 = FUN_00013bac(param_1[1],param_1 + 3,param_3,param_4);
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    iVar5 = (int)uVar11;
    if (iVar5 == 0) {
      if (param_1[2] != 0) {
        uVar11 = FUN_0001cfb0(param_1[1],param_1[2],param_1 + 3);
        uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 != 0) {
          return (int)uVar11;
        }
      }
      iVar5 = FUN_00036fec(param_1,uVar3,param_3,param_4);
      if (iVar5 == 0) {
        bVar10 = uVar1 <= uVar6;
        if (uVar6 == uVar1) {
          bVar10 = (iVar9 - 1U >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff) |
                   uVar7 >> (iVar8 - 0x16U & 0xff)) <= uVar4;
        }
        if (bVar10) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0003d9f8(param_1[1],param_1[2],param_1 + 3,0,uVar4,uVar6,0xffffffffffffffff);
        }
      }
    }
  }
  else {
    iVar5 = 0x7f2bb70f;
  }
  return iVar5;
}



/* ===== FUN_0003745c @ 0003745c size=56 ===== */

undefined4 FUN_0003745c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000371d0(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00037494 @ 00037494 size=140 ===== */

void FUN_00037494(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00042b78(0,*(int *)(param_1 + 0x1c) + param_2,&DAT_0004993c,param_3);
  }
  else {
    FUN_00042b78(0,*(int *)(param_1 + 0x1c) + param_2,"#%lu for %s",param_3,
                 *(undefined4 *)(param_1 + 0x14));
  }
  return;
}



/* ===== FUN_00037520 @ 00037520 size=132 ===== */

undefined4 FUN_00037520(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) ||
     (((*param_1 != 0x7f2bb70a && (*param_1 != 0x7f2bb709)) && (*param_1 != 0x7f2bb708)))) {
    uVar1 = 0x7f2bb70a;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000375a4 @ 000375a4 size=556 ===== */

int FUN_000375a4(int param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,
                void *param_7,undefined4 *param_8)

{
  size_t sVar1;
  int *local_14;
  size_t local_10;
  int local_c;
  
  local_c = FUN_00018a74(0x3c,&local_14);
  if (local_c == 0) {
    *local_14 = param_1;
    local_14[1] = param_2;
    local_14[2] = param_3;
    local_14[3] = param_4;
    local_14[4] = param_5;
    if (param_1 == 0x7f2bb708) {
      local_14[7] = 0x7f2bb72d;
    }
    else if (param_1 == 0x7f2bb709) {
      local_14[7] = 0x7f2bb730;
    }
    else {
      local_14[7] = 0x7f2bb73d;
    }
    if (param_6 == (char *)0x0) {
      local_14[5] = 0;
      local_c = 0;
    }
    else {
      sVar1 = strlen(param_6);
      local_c = FUN_00018a74(sVar1 + 1,local_14 + 5);
      if (local_c != 0) {
        FUN_00018c58(&local_14);
        return local_c;
      }
      strcpy((char *)local_14[5],param_6);
    }
    local_10 = ((uint)(local_14[4] - local_14[2]) >> 3) + 8 & 0xfffffffc;
    local_c = FUN_00018a74(local_10,local_14 + 6);
    if (local_c == 0) {
      if (param_7 == (void *)0x0) {
        memset((void *)local_14[6],0,local_10);
      }
      else {
        memcpy((void *)local_14[6],param_7,local_10);
      }
      *param_8 = local_14;
      local_c = 0;
    }
    else {
      FUN_00018c58(local_14 + 5);
      FUN_00018c58(&local_14);
    }
  }
  return local_c;
}



/* ===== FUN_000377d0 @ 000377d0 size=100 ===== */

undefined4
FUN_000377d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000375a4(0x7f2bb70a,0,param_1,param_2,param_3,param_4,0,param_5);
  return uVar1;
}



/* ===== FUN_00037834 @ 00037834 size=132 ===== */

undefined4 FUN_00037834(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000375a4(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                       param_2);
  return uVar1;
}



/* ===== FUN_000378b8 @ 000378b8 size=168 ===== */

void FUN_000378b8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *local_c;
  
  local_c = param_1;
  iVar1 = FUN_00037520(param_1);
  if (iVar1 == 0) {
    *local_c = 0;
    if (local_c[5] != 0) {
      FUN_00018c58(local_c + 5);
      local_c[5] = 0;
    }
    if (local_c[6] != 0) {
      FUN_00018c58(local_c + 6);
      local_c[6] = 0;
    }
    FUN_00018c58(&local_c);
  }
  return;
}



/* ===== FUN_00037960 @ 00037960 size=360 ===== */

undefined4 FUN_00037960(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[3] < param_2)) {
      FUN_00037494(param_1,2,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00028d6c(param_2 - param_1[2],param_1[6]);
    }
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00042b78(0,0x7f2bb70a,"test_bitmap(%lu)",param_2);
      return 0;
    }
    FUN_0003adfc(param_1,"ext2fs_test_generic_bitmap");
    uVar1 = FUN_00039f4c(param_1,extraout_r1,param_2,0);
  }
  return uVar1;
}



/* ===== FUN_00037ac8 @ 00037ac8 size=360 ===== */

undefined4 FUN_00037ac8(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[3] < param_2)) {
      FUN_00037494(param_1,0,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00028c34(param_2 - param_1[2],param_1[6]);
    }
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00042b78(0,0x7f2bb70a,"mark_bitmap(%lu)",param_2);
      return 0;
    }
    FUN_0003adfc(param_1,"ext2fs_mark_generic_bitmap");
    uVar1 = FUN_00039c04(param_1,extraout_r1,param_2,0);
  }
  return uVar1;
}



/* ===== FUN_00037c30 @ 00037c30 size=360 ===== */

undefined4 FUN_00037c30(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[3] < param_2)) {
      FUN_00037494(param_1,1,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00028ccc(param_2 - param_1[2],param_1[6]);
    }
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00042b78(0,0x7f2bb70a,"mark_bitmap(%lu)",param_2);
      return 0;
    }
    FUN_0003adfc(param_1,"ext2fs_unmark_generic_bitmap");
    uVar1 = FUN_00039da8(param_1,extraout_r1,param_2,0);
  }
  return uVar1;
}



/* ===== FUN_00037d98 @ 00037d98 size=252 ===== */

int FUN_00037d98(int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    iVar1 = param_1[2];
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00042b78(0,0x7f2bb70a,"get_bitmap_start");
      return 0;
    }
    FUN_0003adfc(param_1,"ext2fs_get_generic_bitmap_start");
    iVar1 = FUN_00039998(param_1);
  }
  return iVar1;
}



/* ===== FUN_00037e94 @ 00037e94 size=252 ===== */

int FUN_00037e94(int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    iVar1 = param_1[3];
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00042b78(0,0x7f2bb70a,"get_bitmap_end");
      return 0;
    }
    FUN_0003adfc(param_1,"ext2fs_get_generic_bitmap_end");
    iVar1 = FUN_00039a8c(param_1);
  }
  return iVar1;
}



/* ===== FUN_00037f90 @ 00037f90 size=272 ===== */

void FUN_00037f90(int *param_1)

{
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    memset((void *)param_1[6],0,((uint)(param_1[4] - param_1[2]) >> 3) + 1);
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00042b78(0,0x7f2bb70a,"clear_generic_bitmap");
      return;
    }
    FUN_0003adfc(param_1,"ext2fs_clear_generic_bitmap");
    FUN_00039b80(param_1);
  }
  return;
}



/* ===== FUN_000380a0 @ 000380a0 size=144 ===== */

int FUN_000380a0(int *param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  if ((param_2 == *param_1) && (param_2 = param_3, param_4 <= (uint)param_1[4])) {
    if (param_5 != (int *)0x0) {
      *param_5 = param_1[3];
    }
    param_1[3] = param_4;
    param_2 = 0;
  }
  return param_2;
}



/* ===== FUN_00038130 @ 00038130 size=456 ===== */

int FUN_00038130(int param_1,uint param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_c;
  
  if ((param_4 != (int *)0x0) && (param_1 == *param_4)) {
    if ((uint)param_4[3] < param_2) {
      local_c = param_4[4];
      if (param_2 < local_c) {
        local_c = param_2;
      }
      for (; (uint)param_4[3] < local_c; local_c = local_c - 1) {
        FUN_00028ccc(local_c - param_4[2],param_4[6]);
      }
    }
    if (param_3 == param_4[4]) {
      param_4[3] = param_2;
      param_1 = 0;
    }
    else {
      uVar1 = ((uint)(param_4[4] - param_4[2]) >> 3) + 1;
      uVar2 = ((uint)(param_3 - param_4[2]) >> 3) + 1;
      if ((uVar1 == uVar2) || (param_1 = FUN_00018ca4(uVar1,uVar2,param_4 + 6), param_1 == 0)) {
        if (uVar1 < uVar2) {
          memset((void *)(param_4[6] + uVar1),0,uVar2 - uVar1);
        }
        param_4[3] = param_2;
        param_4[4] = param_3;
        param_1 = 0;
      }
    }
  }
  return param_1;
}



/* ===== FUN_000382f8 @ 000382f8 size=364 ===== */

int FUN_000382f8(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint local_14;
  
  if ((((param_3 != (int *)0x0) && (param_1 == *param_3)) && (param_4 != (int *)0x0)) &&
     (((param_1 == *param_4 && (param_1 = param_2, param_3[2] == param_4[2])) &&
      ((param_3[3] == param_4[3] &&
       (iVar1 = memcmp((void *)param_3[6],(void *)param_4[6],(uint)(param_3[3] - param_3[2]) >> 3),
       iVar1 == 0)))))) {
    for (local_14 = param_3[3] - (param_3[3] - param_3[2] & 7U); local_14 <= (uint)param_3[3];
        local_14 = local_14 + 1) {
      iVar1 = FUN_0001830c(param_3,local_14);
      iVar2 = FUN_0001830c(param_4,local_14);
      if (iVar1 != iVar2) {
        return param_2;
      }
    }
    param_1 = 0;
  }
  return param_1;
}



/* ===== FUN_00038464 @ 00038464 size=152 ===== */

void FUN_00038464(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = *(int *)(param_1 + 0xc) + 1;
  local_10 = local_c - *(int *)(param_1 + 8);
  for (; (local_c <= *(uint *)(param_1 + 0x10) && (*(uint *)(param_1 + 0xc) < local_c));
      local_c = local_c + 1) {
    FUN_00028c34(local_10,*(undefined4 *)(param_1 + 0x18));
    local_10 = local_10 + 1;
  }
  return;
}



/* ===== FUN_000384fc @ 000384fc size=192 ===== */

int FUN_000384fc(int *param_1,int param_2,uint param_3,int param_4,void *param_5)

{
  if ((param_1 != (int *)0x0) && (param_2 == *param_1)) {
    if ((param_3 < (uint)param_1[2]) || ((uint)param_1[4] < (param_3 + param_4) - 1)) {
      param_2 = 0x7f2bb747;
    }
    else {
      memcpy(param_5,(void *)(param_1[6] + (param_3 >> 3)),param_4 + 7U >> 3);
      param_2 = 0;
    }
  }
  return param_2;
}



/* ===== FUN_000385bc @ 000385bc size=192 ===== */

int FUN_000385bc(int *param_1,int param_2,uint param_3,int param_4,void *param_5)

{
  if ((param_1 != (int *)0x0) && (param_2 == *param_1)) {
    if ((param_3 < (uint)param_1[2]) || ((uint)param_1[4] < (param_3 + param_4) - 1)) {
      param_2 = 0x7f2bb747;
    }
    else {
      memcpy((void *)(param_1[6] + (param_3 >> 3)),param_5,param_4 + 7U >> 3);
      param_2 = 0;
    }
  }
  return param_2;
}



/* ===== FUN_0003867c @ 0003867c size=172 ===== */

bool FUN_0003867c(void *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  uint local_10;
  void *local_c;
  
  local_10 = param_2;
  local_c = param_1;
  while( true ) {
    if (local_10 < 0x100) {
      if (local_10 == 0) {
        bVar2 = true;
      }
      else {
        iVar1 = memcmp(local_c,&DAT_00049a5c,local_10);
        bVar2 = iVar1 == 0;
      }
      return bVar2;
    }
    iVar1 = memcmp(local_c,&DAT_00049a5c,0x100);
    if (iVar1 != 0) break;
    local_10 = local_10 - 0x100;
    local_c = (void *)((int)local_c + 0x100);
  }
  return false;
}



/* ===== FUN_00038728 @ 00038728 size=604 ===== */

undefined4 FUN_00038728(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_18 = 0;
  local_1c = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  uVar3 = param_2 - *(int *)(param_1 + 8);
  local_c = uVar3 >> 3;
  uVar3 = uVar3 & 7;
  local_14 = param_3;
  if (uVar3 != 0) {
    local_20 = 8 - uVar3;
    if (param_3 < 8 - uVar3) {
      local_24 = (param_3 + uVar3) - 1;
      local_20 = param_3;
    }
    else {
      local_24 = 7;
    }
    for (local_28 = local_20; 0 < (int)local_28; local_28 = local_28 - 1) {
      local_18 = local_18 | 1 << (local_24 & 0xff);
      local_24 = local_24 - 1;
    }
    if ((local_18 & *(byte *)(iVar2 + local_c)) != 0) {
      return 0;
    }
    if (param_3 <= 8 - uVar3) {
      return 1;
    }
    local_c = local_c + 1;
    local_14 = param_3 - local_20;
    param_3 = param_3 - local_20;
  }
  local_10 = param_3 >> 3;
  local_14 = local_14 & 7;
  local_24 = local_14;
  if (local_14 != 0) {
    while (local_24 = local_24 - 1, -1 < (int)local_24) {
      local_1c = local_1c | 1 << (local_24 & 0xff);
    }
    if ((local_1c & *(byte *)(iVar2 + local_c + local_10)) != 0) {
      return 0;
    }
    if (local_10 == 0) {
      return 1;
    }
  }
  uVar1 = FUN_0003867c(iVar2 + local_c,local_10);
  return uVar1;
}



/* ===== FUN_00038984 @ 00038984 size=228 ===== */

undefined4 FUN_00038984(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  if (((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < param_3)) ||
     (local_18 = param_2, param_3 < param_2)) {
    FUN_00037494(param_1,2,param_2);
    uVar2 = 0x16;
  }
  else {
    for (; local_18 <= param_3; local_18 = local_18 + 1) {
      iVar1 = FUN_00028d6c(local_18 - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        *param_4 = local_18;
        return 0;
      }
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* ===== FUN_00038a68 @ 00038a68 size=228 ===== */

undefined4 FUN_00038a68(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  if (((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < param_3)) ||
     (local_18 = param_2, param_3 < param_2)) {
    FUN_00037494(param_1,2,param_2);
    uVar2 = 0x16;
  }
  else {
    for (; local_18 <= param_3; local_18 = local_18 + 1) {
      iVar1 = FUN_00028d6c(local_18 - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if (iVar1 != 0) {
        *param_4 = local_18;
        return 0;
      }
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* ===== FUN_00038b4c @ 00038b4c size=184 ===== */

undefined4 FUN_00038b4c(int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb708) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[4] < (param_3 + param_2) - 1)) {
      FUN_00028dd4(0x7f2bb72f,param_2,param_1[5]);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00038728(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x7f2bb708;
  }
  return uVar1;
}



/* ===== FUN_00038c04 @ 00038c04 size=184 ===== */

undefined4 FUN_00038c04(int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb709) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[4] < (param_3 + param_2) - 1)) {
      FUN_00028dd4(0x7f2bb732,param_2,param_1[5]);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00038728(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x7f2bb709;
  }
  return uVar1;
}



/* ===== FUN_00038cbc @ 00038cbc size=200 ===== */

void FUN_00038cbc(int param_1,uint param_2,int param_3)

{
  undefined4 local_c;
  
  if ((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < (param_3 + param_2) - 1)) {
    FUN_00028dd4(0x7f2bb72d,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  else {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      FUN_00017ecc((local_c + param_2) - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    }
  }
  return;
}



/* ===== FUN_00038d84 @ 00038d84 size=200 ===== */

void FUN_00038d84(int param_1,uint param_2,int param_3)

{
  undefined4 local_c;
  
  if ((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < (param_3 + param_2) - 1)) {
    FUN_00028dd4(0x7f2bb72e,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  else {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      FUN_00017f38((local_c + param_2) - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    }
  }
  return;
}



/* ===== FUN_00038e50 @ 00038e50 size=148 ===== */

void FUN_00038e50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_00042b78(0,*(int *)(param_1 + 0x34) + param_2,"#%llu",param_4,param_3,param_4);
  }
  else {
    FUN_00042b78(0,*(int *)(param_1 + 0x34) + param_2,"#%llu for %s",param_4,param_3,param_4,
                 *(undefined4 *)(param_1 + 0x2c));
  }
  return;
}



/* ===== FUN_00038ee4 @ 00038ee4 size=764 ===== */

int FUN_00038ee4(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9,int param_10,char *param_11,undefined4 *param_12
                )

{
  int iVar1;
  size_t sVar2;
  int local_24;
  uint local_18;
  int *local_14;
  int local_10;
  undefined *local_c;
  
  local_24 = param_3;
  if (param_3 == 0) {
    local_24 = 1;
  }
  if (local_24 == 2) {
    local_c = &DAT_0005a2fc;
  }
  else if (local_24 == 3) {
    local_10 = FUN_0003b67c(param_1,&local_18);
    if ((local_10 == 0) && (local_18 <= **(uint **)(param_1 + 0x10) / 0x140)) {
      local_c = &DAT_0005a2fc;
    }
    else {
      local_c = &DAT_0005a2b8;
    }
  }
  else {
    if (local_24 != 1) {
      return 0x16;
    }
    local_c = &DAT_0005a2b8;
  }
  local_10 = FUN_00018acc(0x48,&local_14);
  if (local_10 == 0) {
    iVar1 = gettimeofday((timeval *)(local_14 + 0xf),(__timezone_ptr_t)0x0);
    if (iVar1 == -1) {
      perror("gettimeofday");
      FUN_00018c58(&local_14);
      local_10 = 1;
    }
    else {
      local_14[0xe] = local_24;
      *local_14 = param_2;
      local_14[1] = param_1;
      local_14[4] = param_5;
      local_14[5] = param_6;
      local_14[6] = param_7;
      local_14[7] = param_8;
      local_14[8] = param_9;
      local_14[9] = param_10;
      local_14[2] = (int)local_c;
      local_14[10] = 0;
      if (param_2 == 0x7f2bb76e) {
        local_14[0xd] = 0x7f2bb72d;
        local_14[10] = *(int *)(param_1 + 100);
      }
      else if (param_2 == 0x7f2bb76f) {
        local_14[0xd] = 0x7f2bb730;
      }
      else {
        local_14[0xd] = 0x7f2bb73d;
      }
      if (param_11 == (char *)0x0) {
        local_14[0xb] = 0;
      }
      else {
        sVar2 = strlen(param_11);
        local_10 = FUN_00018a74(sVar2 + 1,local_14 + 0xb);
        if (local_10 != 0) {
          FUN_00018c58(&local_14);
          return local_10;
        }
        strcpy((char *)local_14[0xb],param_11);
      }
      local_10 = (**(code **)(local_14[2] + 4))(param_1,local_14);
      if (local_10 == 0) {
        *param_12 = local_14;
        local_10 = 0;
      }
      else {
        FUN_00018c58(local_14 + 0xb);
        FUN_00018c58(&local_14);
      }
    }
  }
  return local_10;
}



/* ===== FUN_000391e0 @ 000391e0 size=248 ===== */

void FUN_000391e0(int param_1)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  timeval local_20;
  double dStack_18;
  undefined4 *local_c;
  
  local_c = (undefined4 *)(param_1 + 0x38);
  iVar1 = gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  if (iVar1 == -1) {
    perror("gettimeofday");
  }
  else {
    dVar4 = (double)VectorSignedToFloat(local_20.tv_sec,(byte)(in_fpscr >> 0x16) & 3);
    dVar2 = (double)VectorSignedToFloat(local_20.tv_usec,(byte)(in_fpscr >> 0x16) & 3);
    dVar5 = (double)VectorSignedToFloat(local_c[1],(byte)(in_fpscr >> 0x16) & 3);
    dVar3 = (double)VectorSignedToFloat(local_c[2],(byte)(in_fpscr >> 0x16) & 3);
    dStack_18 = (dVar4 + dVar2 * DAT_000392d8) - (dVar5 + dVar3 * DAT_000392d8);
    fprintf(stderr,"\n[+] %s bitmap (type %d)\n",*(undefined4 *)(param_1 + 0x2c),*local_c);
    fwrite("=================================================\n",1,0x32,stderr);
  }
  return;
}



/* ===== FUN_000392e0 @ 000392e0 size=364 ===== */

void FUN_000392e0(int *param_1)

{
  char *pcVar1;
  int *local_c;
  
  if (param_1 != (int *)0x0) {
    local_c = param_1;
    if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
      FUN_000378b8(param_1);
    }
    else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
      pcVar1 = getenv("E2FSPROGS_BITMAP_STATS");
      if (pcVar1 != (char *)0x0) {
        FUN_000391e0(local_c);
        (**(code **)(local_c[2] + 0x38))(local_c);
      }
      (**(code **)(local_c[2] + 8))(local_c);
      if (local_c[0xb] != 0) {
        FUN_00018c58(local_c + 0xb);
        local_c[0xb] = 0;
      }
      *local_c = 0;
      FUN_00018c58(&local_c);
    }
  }
  return;
}



/* ===== FUN_0003944c @ 0003944c size=720 ===== */

int FUN_0003944c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  int *local_18;
  char *local_14;
  char *local_10;
  int local_c;
  
  if (param_1 == (int *)0x0) {
    local_c = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    local_c = FUN_00037834(param_1,param_2);
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    local_c = FUN_00018acc(0x48,&local_18);
    if (local_c == 0) {
      iVar2 = gettimeofday((timeval *)(local_18 + 0xf),(__timezone_ptr_t)0x0);
      if (iVar2 == -1) {
        perror("gettimeofday");
        FUN_00018c58(&local_18);
        local_c = 1;
      }
      else {
        local_18[0xe] = param_1[0xe];
        *local_18 = *param_1;
        local_18[1] = param_1[1];
        iVar2 = param_1[5];
        local_18[4] = param_1[4];
        local_18[5] = iVar2;
        iVar2 = param_1[7];
        local_18[6] = param_1[6];
        local_18[7] = iVar2;
        iVar2 = param_1[9];
        local_18[8] = param_1[8];
        local_18[9] = iVar2;
        local_18[2] = param_1[2];
        local_18[0xd] = param_1[0xd];
        local_18[10] = param_1[10];
        local_10 = (char *)param_1[0xb];
        if (local_10 != (char *)0x0) {
          sVar3 = strlen(local_10);
          local_c = FUN_00018a74(sVar3 + 10,&local_14);
          uVar1 = s_copy_of_00049bec._4_4_;
          if (local_c != 0) {
            FUN_00018c58(&local_18);
            return local_c;
          }
          *(undefined4 *)local_14 = s_copy_of_00049bec._0_4_;
          *(undefined4 *)(local_14 + 4) = uVar1;
          local_14[8] = s_copy_of_00049bec[8];
          strcat(local_14,local_10);
          local_18[0xb] = (int)local_14;
        }
        local_c = (**(code **)(param_1[2] + 0xc))(param_1,local_18);
        if (local_c == 0) {
          *param_2 = local_18;
          local_c = 0;
        }
        else {
          FUN_00018c58(local_18 + 0xb);
          FUN_00018c58(&local_18);
        }
      }
    }
  }
  else {
    local_c = 0x16;
  }
  return local_c;
}



/* ===== FUN_0003971c @ 0003971c size=272 ===== */

undefined4
FUN_0003971c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    uVar1 = FUN_00038130(*param_1,param_3,param_5,param_1);
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar1 = (**(code **)(param_1[2] + 0x10))
                      (param_1,*(code **)(param_1[2] + 0x10),param_3,param_4,param_5,param_6);
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}



/* ===== FUN_0003982c @ 0003982c size=364 ===== */

undefined4 FUN_0003982c(int *param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_10 [2];
  
  if (param_1 == (int *)0x0) {
    param_2 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    param_2 = FUN_000380a0(param_1,*param_1,param_2,param_3,local_10);
    if (param_5 != (int *)0x0) {
      *param_5 = local_10[0];
      param_5[1] = 0;
    }
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar1 = param_1[9];
    bVar3 = uVar1 <= param_4;
    if (param_4 == uVar1) {
      bVar3 = (uint)param_1[8] <= param_3;
    }
    if (!bVar3 || param_4 == uVar1 && param_3 == param_1[8]) {
      if (param_5 != (int *)0x0) {
        iVar2 = param_1[7];
        *param_5 = param_1[6];
        param_5[1] = iVar2;
      }
      param_1[6] = param_3;
      param_1[7] = param_4;
      param_2 = 0;
    }
  }
  else {
    param_2 = 0x16;
  }
  return param_2;
}



/* ===== FUN_00039998 @ 00039998 size=244 ===== */

undefined8 FUN_00039998(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0x16;
    iVar2 = 0;
  }
  else {
    if (*param_1 != 0x7f2bb70a) {
      if (*param_1 != 0x7f2bb708) {
        if (*param_1 != 0x7f2bb709) {
          if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
            iVar1 = param_1[4];
            iVar2 = param_1[5];
          }
          else {
            iVar1 = 0x16;
            iVar2 = 0;
          }
          goto LAB_00039a7c;
        }
      }
    }
    iVar1 = FUN_00037d98(param_1);
    iVar2 = 0;
  }
LAB_00039a7c:
  return CONCAT44(iVar2,iVar1);
}



/* ===== FUN_00039a8c @ 00039a8c size=244 ===== */

undefined8 FUN_00039a8c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0x16;
    iVar2 = 0;
  }
  else {
    if (*param_1 != 0x7f2bb70a) {
      if (*param_1 != 0x7f2bb708) {
        if (*param_1 != 0x7f2bb709) {
          if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
            iVar1 = param_1[6];
            iVar2 = param_1[7];
          }
          else {
            iVar1 = 0x16;
            iVar2 = 0;
          }
          goto LAB_00039b70;
        }
      }
    }
    iVar1 = FUN_00037e94(param_1);
    iVar2 = 0;
  }
LAB_00039b70:
  return CONCAT44(iVar2,iVar1);
}



/* ===== FUN_00039b80 @ 00039b80 size=132 ===== */

void FUN_00039b80(int *param_1)

{
  if (((*param_1 != 0x7f2bb70a) && (*param_1 != 0x7f2bb708)) && (*param_1 != 0x7f2bb709)) {
    (**(code **)(param_1[2] + 0x34))(param_1);
    return;
  }
  FUN_00037f90(param_1);
  return;
}



/* ===== FUN_00039c04 @ 00039c04 size=420 ===== */

undefined4 FUN_00039c04(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 == 0) {
      uVar3 = FUN_00037ac8(param_1,param_3);
    }
    else {
      FUN_00037494(param_1,0,0xffffffff);
      uVar3 = 0;
    }
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar1 = param_1[10];
    uVar2 = param_3 >> (uVar1 & 0xff) | param_4 << (0x20 - uVar1 & 0xff) |
            param_4 >> (uVar1 - 0x20 & 0xff);
    param_4 = param_4 >> (uVar1 & 0xff);
    bVar4 = (uint)param_1[5] <= param_4;
    if (param_4 == param_1[5]) {
      bVar4 = (uint)param_1[4] <= uVar2;
    }
    if (bVar4) {
      uVar1 = param_1[7];
      bVar4 = uVar1 <= param_4;
      if (param_4 == uVar1) {
        bVar4 = (uint)param_1[6] <= uVar2;
      }
      if (!bVar4 || param_4 == uVar1 && uVar2 == param_1[6]) {
        uVar3 = (**(code **)(param_1[2] + 0x14))
                          (param_1,*(code **)(param_1[2] + 0x14),uVar2,param_4);
        return uVar3;
      }
    }
    FUN_00038e50(param_1,0,uVar2,param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00039da8 @ 00039da8 size=420 ===== */

undefined4 FUN_00039da8(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 == 0) {
      uVar3 = FUN_00037c30(param_1,param_3);
    }
    else {
      FUN_00037494(param_1,1,0xffffffff);
      uVar3 = 0;
    }
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar1 = param_1[10];
    uVar2 = param_3 >> (uVar1 & 0xff) | param_4 << (0x20 - uVar1 & 0xff) |
            param_4 >> (uVar1 - 0x20 & 0xff);
    param_4 = param_4 >> (uVar1 & 0xff);
    bVar4 = (uint)param_1[5] <= param_4;
    if (param_4 == param_1[5]) {
      bVar4 = (uint)param_1[4] <= uVar2;
    }
    if (bVar4) {
      uVar1 = param_1[7];
      bVar4 = uVar1 <= param_4;
      if (param_4 == uVar1) {
        bVar4 = (uint)param_1[6] <= uVar2;
      }
      if (!bVar4 || param_4 == uVar1 && uVar2 == param_1[6]) {
        uVar3 = (**(code **)(param_1[2] + 0x18))
                          (param_1,*(code **)(param_1[2] + 0x18),uVar2,param_4);
        return uVar3;
      }
    }
    FUN_00038e50(param_1,1,uVar2,param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00039f4c @ 00039f4c size=420 ===== */

undefined4 FUN_00039f4c(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 == 0) {
      uVar3 = FUN_00037960(param_1,param_3);
    }
    else {
      FUN_00037494(param_1,2,0xffffffff);
      uVar3 = 0;
    }
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar1 = param_1[10];
    uVar2 = param_3 >> (uVar1 & 0xff) | param_4 << (0x20 - uVar1 & 0xff) |
            param_4 >> (uVar1 - 0x20 & 0xff);
    param_4 = param_4 >> (uVar1 & 0xff);
    bVar4 = (uint)param_1[5] <= param_4;
    if (param_4 == param_1[5]) {
      bVar4 = (uint)param_1[4] <= uVar2;
    }
    if (bVar4) {
      uVar1 = param_1[7];
      bVar4 = uVar1 <= param_4;
      if (param_4 == uVar1) {
        bVar4 = (uint)param_1[6] <= uVar2;
      }
      if (!bVar4 || param_4 == uVar1 && uVar2 == param_1[6]) {
        uVar3 = (**(code **)(param_1[2] + 0x1c))
                          (param_1,*(code **)(param_1[2] + 0x1c),uVar2,param_4);
        return uVar3;
      }
    }
    FUN_00038e50(param_1,2,uVar2,param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0003a0f0 @ 0003a0f0 size=368 ===== */

undefined4
FUN_0003a0f0(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 + (uint)CARRY4(param_3,param_5) == (uint)(param_3 + param_5 == 0)) {
      uVar1 = FUN_000385bc(param_1,*param_1,param_3,param_5,param_6);
    }
    else {
      FUN_00037494(param_1,1,0xffffffff);
      uVar1 = 0x16;
    }
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar1 = (**(code **)(param_1[2] + 0x2c))
                      (param_1,*(code **)(param_1[2] + 0x2c),param_3,param_4,param_5,param_6);
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}



/* ===== FUN_0003a260 @ 0003a260 size=368 ===== */

undefined4
FUN_0003a260(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 + (uint)CARRY4(param_3,param_5) == (uint)(param_3 + param_5 == 0)) {
      uVar1 = FUN_000384fc(param_1,*param_1,param_3,param_5,param_6);
    }
    else {
      FUN_00037494(param_1,1,0xffffffff);
      uVar1 = 0x16;
    }
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar1 = (**(code **)(param_1[2] + 0x30))
                      (param_1,*(code **)(param_1[2] + 0x30),param_3,param_4,param_5,param_6);
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}



/* ===== FUN_0003a3d0 @ 0003a3d0 size=516 ===== */

undefined4 FUN_0003a3d0(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint local_20;
  uint uStack_1c;
  
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    param_1 = 0x16;
  }
  else if (*param_2 == *param_3) {
    if (((*param_2 == 0x7f2bb70a) || (*param_2 == 0x7f2bb708)) || (*param_2 == 0x7f2bb709)) {
      param_1 = FUN_000382f8(*param_2,param_1,param_2,param_3);
    }
    else if (((*param_2 == 0x7f2bb76d) || (*param_2 == 0x7f2bb76e)) || (*param_2 == 0x7f2bb76f)) {
      if ((param_2[5] == param_3[5] && param_2[4] == param_3[4]) &&
         (param_2[7] == param_3[7] && param_2[6] == param_3[6])) {
        uVar2 = param_2[6] - (int)*(undefined8 *)(param_2 + 4) & 7;
        local_20 = param_2[6] - uVar2;
        uStack_1c = param_2[7] - (uint)((uint)param_2[6] < uVar2);
        while( true ) {
          uVar2 = param_2[7];
          bVar3 = uVar2 <= uStack_1c;
          if (uStack_1c == uVar2) {
            bVar3 = (uint)param_2[6] <= local_20;
          }
          if (bVar3 && (uStack_1c != uVar2 || local_20 != param_2[6])) break;
          uVar4 = FUN_00039f4c(param_2,uStack_1c,local_20,uStack_1c);
          iVar1 = FUN_00039f4c(param_3,(int)((ulonglong)uVar4 >> 0x20),local_20,uStack_1c);
          if ((int)uVar4 != iVar1) {
            return param_1;
          }
          bVar3 = 0xfffffffe < local_20;
          local_20 = local_20 + 1;
          uStack_1c = uStack_1c + bVar3;
        }
        param_1 = 0;
      }
    }
    else {
      param_1 = 0x16;
    }
  }
  else {
    param_1 = 0x16;
  }
  return param_1;
}



/* ===== FUN_0003a5d4 @ 0003a5d4 size=192 ===== */

void FUN_0003a5d4(int *param_1)

{
  if (((*param_1 != 0x7f2bb70a) && (*param_1 != 0x7f2bb708)) && (*param_1 != 0x7f2bb709)) {
    (**(code **)(param_1[2] + 0x20))
              (param_1,*(code **)(param_1[2] + 0x20),param_1[6] + 1,
               param_1[7] + (uint)(0xfffffffe < (uint)param_1[6]),
               param_1[8] - (int)*(undefined8 *)(param_1 + 6));
    return;
  }
  FUN_00038464(param_1);
  return;
}



/* ===== FUN_0003a694 @ 0003a694 size=680 ===== */

uint FUN_0003a694(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  uVar9 = VectorShiftRight(CONCAT44(param_5,param_5),0x20);
  uVar4 = (uint)uVar9 + param_3;
  if (param_1 == (int *)0x0) {
    uVar4 = 0x16;
  }
  else if (param_5 == 1) {
    iVar1 = FUN_00039f4c(param_1,param_4,param_3,param_4);
    uVar4 = (uint)(iVar1 == 0);
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 + CARRY4(param_3,param_5) == (uint)(param_3 + param_5 == 0)) {
      uVar4 = FUN_00038b4c(param_1,param_3,param_5);
    }
    else {
      FUN_00037494(param_1,1,0xffffffff);
      uVar4 = 0x16;
    }
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar2 = param_1[10];
    uVar5 = param_3 >> (uVar2 & 0xff) | param_4 << (0x20 - uVar2 & 0xff) |
            param_4 >> (uVar2 - 0x20 & 0xff);
    uVar2 = param_4 >> (uVar2 & 0xff);
    uVar6 = (1 << (param_1[10] & 0xffU)) - 1;
    uVar7 = ((int)uVar6 >> 0x1f) +
            (int)((ulonglong)uVar9 >> 0x20) + param_4 + (uint)CARRY4((uint)uVar9,param_3) +
            (uint)CARRY4(uVar6,uVar4);
    uVar3 = param_1[10];
    uVar4 = (uVar6 + uVar4 >> (uVar3 & 0xff) | uVar7 << (0x20 - uVar3 & 0xff) |
            uVar7 >> (uVar3 - 0x20 & 0xff)) - uVar5;
    bVar8 = (uint)param_1[5] <= uVar2;
    if (uVar2 == param_1[5]) {
      bVar8 = (uint)param_1[4] <= uVar5;
    }
    if (bVar8) {
      uVar3 = (uVar5 + uVar4) - 1;
      uVar6 = (uVar2 + CARRY4(uVar5,uVar4)) - (uint)(uVar5 + uVar4 == 0);
      uVar7 = param_1[7];
      bVar8 = uVar7 <= uVar6;
      if (uVar6 == uVar7) {
        bVar8 = (uint)param_1[6] <= uVar3;
      }
      if (!bVar8 || uVar6 == uVar7 && uVar3 == param_1[6]) {
        uVar4 = (**(code **)(param_1[2] + 0x28))
                          (param_1,*(code **)(param_1[2] + 0x28),uVar5,uVar2,uVar4);
        return uVar4;
      }
    }
    FUN_00028dd4(0x7f2bb72f,uVar5,param_1[0xb]);
    uVar4 = 0x16;
  }
  else {
    uVar4 = 0x16;
  }
  return uVar4;
}



/* ===== FUN_0003a93c @ 0003a93c size=608 ===== */

void FUN_0003a93c(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = VectorShiftRight(CONCAT44(param_5,param_5),0x20);
  uVar3 = (uint)uVar8 + param_3;
  if (param_1 != (int *)0x0) {
    if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
      if (param_4 + CARRY4(param_3,param_5) != (uint)(param_3 + param_5 == 0)) {
        FUN_00037494(param_1,1,0xffffffff);
        return;
      }
      FUN_00038cbc(param_1,param_3,param_5);
    }
    if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
      uVar1 = param_1[10];
      uVar4 = param_3 >> (uVar1 & 0xff) | param_4 << (0x20 - uVar1 & 0xff) |
              param_4 >> (uVar1 - 0x20 & 0xff);
      uVar1 = param_4 >> (uVar1 & 0xff);
      uVar5 = (1 << (param_1[10] & 0xffU)) - 1;
      uVar6 = ((int)uVar5 >> 0x1f) +
              (int)((ulonglong)uVar8 >> 0x20) + param_4 + (uint)CARRY4((uint)uVar8,param_3) +
              (uint)CARRY4(uVar5,uVar3);
      uVar2 = param_1[10];
      uVar3 = (uVar5 + uVar3 >> (uVar2 & 0xff) | uVar6 << (0x20 - uVar2 & 0xff) |
              uVar6 >> (uVar2 - 0x20 & 0xff)) - uVar4;
      bVar7 = (uint)param_1[5] <= uVar1;
      if (uVar1 == param_1[5]) {
        bVar7 = (uint)param_1[4] <= uVar4;
      }
      if (bVar7) {
        uVar2 = (uVar4 + uVar3) - 1;
        uVar5 = (uVar1 + CARRY4(uVar4,uVar3)) - (uint)(uVar4 + uVar3 == 0);
        uVar6 = param_1[7];
        bVar7 = uVar6 <= uVar5;
        if (uVar5 == uVar6) {
          bVar7 = (uint)param_1[6] <= uVar2;
        }
        if (!bVar7 || uVar5 == uVar6 && uVar2 == param_1[6]) {
          (**(code **)(param_1[2] + 0x20))(param_1,*(code **)(param_1[2] + 0x20),uVar4,uVar1,uVar3);
          return;
        }
      }
      FUN_00028dd4(0x7f2bb72d,uVar4,param_1[0xb]);
    }
  }
  return;
}



/* ===== FUN_0003ab9c @ 0003ab9c size=608 ===== */

void FUN_0003ab9c(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = VectorShiftRight(CONCAT44(param_5,param_5),0x20);
  uVar3 = (uint)uVar8 + param_3;
  if (param_1 != (int *)0x0) {
    if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
      if (param_4 + CARRY4(param_3,param_5) != (uint)(param_3 + param_5 == 0)) {
        FUN_00037494(param_1,1,0xffffffff);
        return;
      }
      FUN_00038d84(param_1,param_3,param_5);
    }
    if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
      uVar1 = param_1[10];
      uVar4 = param_3 >> (uVar1 & 0xff) | param_4 << (0x20 - uVar1 & 0xff) |
              param_4 >> (uVar1 - 0x20 & 0xff);
      uVar1 = param_4 >> (uVar1 & 0xff);
      uVar5 = (1 << (param_1[10] & 0xffU)) - 1;
      uVar6 = ((int)uVar5 >> 0x1f) +
              (int)((ulonglong)uVar8 >> 0x20) + param_4 + (uint)CARRY4((uint)uVar8,param_3) +
              (uint)CARRY4(uVar5,uVar3);
      uVar2 = param_1[10];
      uVar3 = (uVar5 + uVar3 >> (uVar2 & 0xff) | uVar6 << (0x20 - uVar2 & 0xff) |
              uVar6 >> (uVar2 - 0x20 & 0xff)) - uVar4;
      bVar7 = (uint)param_1[5] <= uVar1;
      if (uVar1 == param_1[5]) {
        bVar7 = (uint)param_1[4] <= uVar4;
      }
      if (bVar7) {
        uVar2 = (uVar4 + uVar3) - 1;
        uVar5 = (uVar1 + CARRY4(uVar4,uVar3)) - (uint)(uVar4 + uVar3 == 0);
        uVar6 = param_1[7];
        bVar7 = uVar6 <= uVar5;
        if (uVar5 == uVar6) {
          bVar7 = (uint)param_1[6] <= uVar2;
        }
        if (!bVar7 || uVar5 == uVar6 && uVar2 == param_1[6]) {
          (**(code **)(param_1[2] + 0x24))(param_1,*(code **)(param_1[2] + 0x24),uVar4,uVar1,uVar3);
          return;
        }
      }
      FUN_00028dd4(0x7f2bb72e,uVar4,param_1[0xb]);
    }
  }
  return;
}



/* ===== FUN_0003adfc @ 0003adfc size=132 ===== */

void FUN_0003adfc(int param_1,undefined4 param_2)

{
  if ((param_1 == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    FUN_00042b78(0,0x7f2bb70a,"called %s with 64-bit bitmap",param_2);
  }
  else {
    FUN_00042b78(0,0x7f2bb70a,"called %s with 64-bit bitmap for %s",param_2,
                 *(undefined4 *)(param_1 + 0x2c));
  }
  return;
}



/* ===== FUN_0003ae80 @ 0003ae80 size=444 ===== */

int FUN_0003ae80(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint uStack_14;
  
  local_20 = *param_2;
  iVar2 = *(int *)(param_1 + 100);
  iVar1 = FUN_000286e8(local_20);
  if (iVar2 == iVar1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00028354(param_1,"converted cluster bitmap",&local_40);
    if (iVar1 == 0) {
      local_18 = *(uint *)(local_20 + 0x10);
      uStack_14 = *(uint *)(local_20 + 0x14);
      local_30 = *(undefined4 *)(local_20 + 0x18);
      uStack_2c = *(undefined4 *)(local_20 + 0x1c);
      *(undefined4 *)(local_20 + 0x18) = *(undefined4 *)(local_20 + 0x20);
      *(undefined4 *)(local_20 + 0x1c) = *(undefined4 *)(local_20 + 0x24);
      local_38 = *(undefined4 *)(local_40 + 0x18);
      uStack_34 = *(undefined4 *)(local_40 + 0x1c);
      *(undefined4 *)(local_40 + 0x18) = *(undefined4 *)(local_40 + 0x20);
      *(undefined4 *)(local_40 + 0x1c) = *(undefined4 *)(local_40 + 0x24);
      local_1c = 0;
      local_3c = 1 << (*(uint *)(param_1 + 100) & 0xff);
      local_24 = 0;
      while( true ) {
        bVar3 = *(uint *)(local_20 + 0x24) <= uStack_14;
        if (uStack_14 == *(uint *)(local_20 + 0x24)) {
          bVar3 = *(uint *)(local_20 + 0x20) <= local_18;
        }
        if (bVar3) break;
        iVar1 = FUN_00018564(local_20,uStack_14,local_18,uStack_14);
        if (iVar1 == 0) {
          bVar3 = 0xfffffffe < local_18;
          local_18 = local_18 + 1;
          uStack_14 = uStack_14 + bVar3;
          local_1c = local_1c + 1;
          if (local_3c <= local_1c) {
            local_1c = 0;
          }
        }
        else {
          FUN_00018504(local_40,local_40,local_18,uStack_14);
          uVar4 = VectorShiftRight(CONCAT44(local_3c - local_1c,local_3c - local_1c),0x20);
          bVar3 = CARRY4((uint)uVar4,local_18);
          local_18 = (uint)uVar4 + local_18;
          uStack_14 = (int)((ulonglong)uVar4 >> 0x20) + uStack_14 + (uint)bVar3;
          local_1c = 0;
        }
      }
      *(undefined4 *)(local_20 + 0x18) = local_30;
      *(undefined4 *)(local_20 + 0x1c) = uStack_2c;
      *(undefined4 *)(local_40 + 0x18) = local_38;
      *(undefined4 *)(local_40 + 0x1c) = uStack_34;
      FUN_00028158(local_20);
      *param_2 = local_40;
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0003b03c @ 0003b03c size=800 ===== */

int FUN_0003b03c(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6
                ,uint *param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  if (param_1 == (int *)0x0) {
    iVar2 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    local_34 = 0;
    if ((param_4 == 0) && (param_6 == 0)) {
      iVar2 = FUN_00038984(param_1,param_3,param_5,&local_34);
      if (iVar2 == 0) {
        *param_7 = local_34;
        param_7[1] = 0;
      }
    }
    else {
      FUN_00037494(param_1,2,param_3);
      iVar2 = 0x16;
    }
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar1 = param_1[10];
    local_18 = param_3 >> (uVar1 & 0xff) | param_4 << (0x20 - uVar1 & 0xff) |
               param_4 >> (uVar1 - 0x20 & 0xff);
    uStack_14 = param_4 >> (uVar1 & 0xff);
    uVar1 = param_1[10];
    local_20 = param_5 >> (uVar1 & 0xff) | param_6 << (0x20 - uVar1 & 0xff) |
               param_6 >> (uVar1 - 0x20 & 0xff);
    uStack_1c = param_6 >> (uVar1 & 0xff);
    bVar4 = (uint)param_1[5] <= uStack_14;
    if (uStack_14 == param_1[5]) {
      bVar4 = (uint)param_1[4] <= local_18;
    }
    if (bVar4) {
      uVar1 = param_1[7];
      bVar4 = uVar1 <= uStack_1c;
      if (uStack_1c == uVar1) {
        bVar4 = (uint)param_1[6] <= local_20;
      }
      if (!bVar4 || uStack_1c == uVar1 && local_20 == param_1[6]) {
        bVar4 = param_6 <= param_4;
        if (param_4 == param_6) {
          bVar4 = param_5 <= param_3;
        }
        if (!bVar4 || param_4 == param_6 && param_3 == param_5) {
          uVar1 = local_18;
          uVar3 = uStack_14;
          if (*(int *)(param_1[2] + 0x3c) == 0) {
            while( true ) {
              uStack_2c = uVar3;
              local_30 = uVar1;
              bVar4 = uStack_2c <= uStack_1c;
              if (uStack_1c == uStack_2c) {
                bVar4 = local_30 <= local_20;
              }
              if (!bVar4) {
                return 2;
              }
              iVar2 = (**(code **)(param_1[2] + 0x1c))
                                (param_1,*(code **)(param_1[2] + 0x1c),local_30,uStack_2c);
              if (iVar2 == 0) break;
              uVar1 = local_30 + 1;
              uVar3 = uStack_2c + (0xfffffffe < local_30);
            }
          }
          else {
            iVar2 = (**(code **)(param_1[2] + 0x3c))
                              (param_1,*(code **)(param_1[2] + 0x3c),local_18,uStack_14,local_20,
                               uStack_1c,&local_30);
            if (iVar2 != 0) {
              return iVar2;
            }
          }
          uVar1 = param_1[10];
          uVar3 = uStack_2c << (uVar1 & 0xff) | local_30 << (uVar1 - 0x20 & 0xff) |
                  local_30 >> (0x20 - uVar1 & 0xff);
          local_30 = local_30 << (uVar1 & 0xff);
          bVar4 = uVar3 <= param_4;
          if (param_4 == uVar3) {
            bVar4 = local_30 <= param_3;
          }
          if (!bVar4) {
            param_3 = local_30;
            param_4 = uVar3;
          }
          *param_7 = param_3;
          param_7[1] = param_4;
          return 0;
        }
      }
    }
    FUN_00038e50(param_1,2,param_3,param_4);
    iVar2 = 0x16;
  }
  else {
    iVar2 = 0x16;
  }
  return iVar2;
}



/* ===== FUN_0003b35c @ 0003b35c size=800 ===== */

int FUN_0003b35c(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6
                ,uint *param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  if (param_1 == (int *)0x0) {
    iVar2 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    local_34 = 0;
    if ((param_4 == 0) && (param_6 == 0)) {
      iVar2 = FUN_00038a68(param_1,param_3,param_5,&local_34);
      if (iVar2 == 0) {
        *param_7 = local_34;
        param_7[1] = 0;
      }
    }
    else {
      FUN_00037494(param_1,2,param_3);
      iVar2 = 0x16;
    }
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    uVar1 = param_1[10];
    local_18 = param_3 >> (uVar1 & 0xff) | param_4 << (0x20 - uVar1 & 0xff) |
               param_4 >> (uVar1 - 0x20 & 0xff);
    uStack_14 = param_4 >> (uVar1 & 0xff);
    uVar1 = param_1[10];
    local_20 = param_5 >> (uVar1 & 0xff) | param_6 << (0x20 - uVar1 & 0xff) |
               param_6 >> (uVar1 - 0x20 & 0xff);
    uStack_1c = param_6 >> (uVar1 & 0xff);
    bVar4 = (uint)param_1[5] <= uStack_14;
    if (uStack_14 == param_1[5]) {
      bVar4 = (uint)param_1[4] <= local_18;
    }
    if (bVar4) {
      uVar1 = param_1[7];
      bVar4 = uVar1 <= uStack_1c;
      if (uStack_1c == uVar1) {
        bVar4 = (uint)param_1[6] <= local_20;
      }
      if (!bVar4 || uStack_1c == uVar1 && local_20 == param_1[6]) {
        bVar4 = param_6 <= param_4;
        if (param_4 == param_6) {
          bVar4 = param_5 <= param_3;
        }
        if (!bVar4 || param_4 == param_6 && param_3 == param_5) {
          uVar1 = local_18;
          uVar3 = uStack_14;
          if (*(int *)(param_1[2] + 0x40) == 0) {
            while( true ) {
              uStack_2c = uVar3;
              local_30 = uVar1;
              bVar4 = uStack_2c <= uStack_1c;
              if (uStack_1c == uStack_2c) {
                bVar4 = local_30 <= local_20;
              }
              if (!bVar4) {
                return 2;
              }
              iVar2 = (**(code **)(param_1[2] + 0x1c))
                                (param_1,*(code **)(param_1[2] + 0x1c),local_30,uStack_2c);
              if (iVar2 != 0) break;
              uVar1 = local_30 + 1;
              uVar3 = uStack_2c + (0xfffffffe < local_30);
            }
          }
          else {
            iVar2 = (**(code **)(param_1[2] + 0x40))
                              (param_1,*(code **)(param_1[2] + 0x40),local_18,uStack_14,local_20,
                               uStack_1c,&local_30);
            if (iVar2 != 0) {
              return iVar2;
            }
          }
          uVar1 = param_1[10];
          uVar3 = uStack_2c << (uVar1 & 0xff) | local_30 << (uVar1 - 0x20 & 0xff) |
                  local_30 >> (0x20 - uVar1 & 0xff);
          local_30 = local_30 << (uVar1 & 0xff);
          bVar4 = uVar3 <= param_4;
          if (param_4 == uVar3) {
            bVar4 = local_30 <= param_3;
          }
          if (!bVar4) {
            param_3 = local_30;
            param_4 = uVar3;
          }
          *param_7 = param_3;
          param_7[1] = param_4;
          return 0;
        }
      }
    }
    FUN_00038e50(param_1,2,param_3,param_4);
    iVar2 = 0x16;
  }
  else {
    iVar2 = 0x16;
  }
  return iVar2;
}



/* ===== FUN_0003b67c @ 0003b67c size=272 ===== */

undefined4 FUN_0003b67c(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  
  if (*param_1 == 0x7f2bb701) {
    local_10 = 0;
    uVar3 = *(uint *)(param_1[4] + 0x28);
    local_c = 0;
    while( true ) {
      if ((uint)param_1[7] <= local_c) break;
      uVar1 = FUN_00013668(param_1,local_c);
      if (uVar3 < uVar1) {
        uVar1 = uVar3 >> 3;
      }
      else {
        uVar1 = FUN_00013668(param_1,local_c);
      }
      local_10 = local_10 + uVar1;
      local_c = local_c + 1;
    }
    if (*(uint *)param_1[4] < local_10) {
      local_10 = *(uint *)param_1[4];
    }
    *param_2 = local_10;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x7f2bb701;
  }
  return uVar2;
}



/* ===== FUN_0003b78c @ 0003b78c size=148 ===== */

int FUN_0003b78c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00023c80(param_1,0,0);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  }
  else {
    iVar3 = ioctl(iVar1,0x1268,param_2);
    if (iVar3 < 0) {
      *param_2 = 0;
      close(iVar1);
      iVar1 = 0;
    }
    else {
      close(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0003b820 @ 0003b820 size=152 ===== */

int FUN_0003b820(int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = ioctl(param_1,0x1268,&local_c);
  if (iVar1 < 0) {
    local_c = 0;
  }
  if (local_c < 1) {
    local_c = sysconf(0x1e);
  }
  if (local_c < 1) {
    local_c = getpagesize();
  }
  if (local_c < 1) {
    local_c = 0x1000;
  }
  return local_c;
}



/* ===== FUN_0003b8b8 @ 0003b8b8 size=148 ===== */

int FUN_0003b8b8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00023c80(param_1,0,0);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  }
  else {
    iVar3 = ioctl(iVar1,0x127b,param_2);
    if (iVar3 < 0) {
      *param_2 = 0;
      close(iVar1);
      iVar1 = 0;
    }
    else {
      close(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0003b94c @ 0003b94c size=60 ===== */

bool FUN_0003b94c(int param_1)

{
  return (*(uint *)(param_1 + 100) & 8) != 0;
}



/* ===== FUN_0003b988 @ 0003b988 size=444 ===== */

undefined4 FUN_0003b988(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_28;
  int local_24;
  uint uStack_14;
  
  uVar5 = *(uint *)(param_2 + 0x1c);
  uStack_14 = 0;
  iVar3 = FUN_0003b94c(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 != 0) {
    uStack_14 = (uint)*(ushort *)(param_2 + 0x74);
  }
  iVar3 = FUN_0003b94c(*(undefined4 *)(param_1 + 0x10));
  if ((iVar3 == 0) ||
     (local_28 = param_3, local_24 = param_4, (*(uint *)(param_2 + 0x20) & 0x40000) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x14) >> 9;
    lVar2 = (ulonglong)uVar1 * (ulonglong)param_3;
    local_28 = (uint)lVar2;
    local_24 = uVar1 * param_4 + (int)((ulonglong)lVar2 >> 0x20);
  }
  uVar1 = 1 << (*(uint *)(param_1 + 100) & 0xff);
  uVar4 = (uint)((ulonglong)uVar1 * (ulonglong)local_28);
  iVar6 = uVar1 * local_24 + ((int)uVar1 >> 0x1f) * local_28 +
          (int)((ulonglong)uVar1 * (ulonglong)local_28 >> 0x20) + uStack_14 +
          (uint)CARRY4(uVar4,uVar5);
  iVar3 = FUN_0003b94c(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    if (iVar6 != 0) {
      return 0x4b;
    }
  }
  else {
    *(short *)(param_2 + 0x74) = (short)iVar6;
  }
  *(uint *)(param_2 + 0x1c) = uVar4 + uVar5;
  return 0;
}



/* ===== FUN_0003bb44 @ 0003bb44 size=436 ===== */

undefined4 FUN_0003bb44(int param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_14;
  
  uVar5 = *(uint *)(param_2 + 0x1c);
  uStack_14 = 0;
  iVar2 = FUN_0003b94c(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uStack_14 = (uint)*(ushort *)(param_2 + 0x74);
  }
  iVar2 = FUN_0003b94c(*(undefined4 *)(param_1 + 0x10));
  if ((iVar2 == 0) ||
     (local_28 = param_3, local_24 = param_4, (*(uint *)(param_2 + 0x20) & 0x40000) == 0)) {
    uVar3 = *(uint *)(param_1 + 0x14) >> 9;
    lVar1 = (ulonglong)uVar3 * (ulonglong)param_3;
    local_28 = (uint)lVar1;
    local_24 = uVar3 * param_4 + (int)((ulonglong)lVar1 >> 0x20);
  }
  uVar3 = 1 << (*(uint *)(param_1 + 100) & 0xff);
  uVar4 = (uint)((ulonglong)uVar3 * (ulonglong)local_28);
  uVar3 = uVar3 * local_24 + ((int)uVar3 >> 0x1f) * local_28 +
          (int)((ulonglong)uVar3 * (ulonglong)local_28 >> 0x20);
  bVar7 = uStack_14 <= uVar3;
  if (uVar3 == uStack_14) {
    bVar7 = uVar5 <= uVar4;
  }
  if (!bVar7 || uVar3 == uStack_14 && uVar4 == uVar5) {
    iVar2 = FUN_0003b94c(*(undefined4 *)(param_1 + 0x10));
    if (iVar2 != 0) {
      *(ushort *)(param_2 + 0x74) = (short)uStack_14 - ((short)uVar3 + (ushort)(uVar5 < uVar4));
    }
    *(uint *)(param_2 + 0x1c) = uVar5 - uVar4;
    uVar6 = 0;
  }
  else {
    uVar6 = 0x4b;
  }
  return uVar6;
}



/* ===== FUN_0003bcf8 @ 0003bcf8 size=316 ===== */

undefined4 FUN_0003bcf8(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  int local_14;
  
  iVar3 = FUN_0003b94c(*(undefined4 *)(param_1 + 0x10));
  if ((iVar3 == 0) ||
     (local_18 = param_3, local_14 = param_4, (*(uint *)(param_2 + 0x20) & 0x40000) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x14) >> 9;
    lVar2 = (ulonglong)uVar1 * (ulonglong)param_3;
    local_18 = (uint)lVar2;
    local_14 = uVar1 * param_4 + (int)((ulonglong)lVar2 >> 0x20);
  }
  uVar1 = 1 << (*(uint *)(param_1 + 100) & 0xff);
  iVar4 = uVar1 * local_14 + ((int)uVar1 >> 0x1f) * local_18 +
          (int)((ulonglong)uVar1 * (ulonglong)local_18 >> 0x20);
  *(int *)(param_2 + 0x1c) = (int)((ulonglong)uVar1 * (ulonglong)local_18);
  iVar3 = FUN_0003b94c(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    if (iVar4 != 0) {
      return 0x4b;
    }
  }
  else {
    *(short *)(param_2 + 0x74) = (short)iVar4;
  }
  return 0;
}



/* ===== FUN_0003be34 @ 0003be34 size=176 ===== */

int FUN_0003be34(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 8) & 0x2000) == 0) ||
     (*(int *)(param_1 + 4) == *(int *)(param_1 + 0x88))) {
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14))
                      (*(undefined4 *)(param_1 + 4),param_2,1,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    memset(param_3,0,*(size_t *)(param_1 + 0x14));
  }
  return 0;
}



/* ===== FUN_0003bee4 @ 0003bee4 size=108 ===== */

undefined4 FUN_0003bee4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x2000) == 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x18))
                      (*(undefined4 *)(param_1 + 4),param_2,1,param_3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0003bf50 @ 0003bf50 size=56 ===== */

bool FUN_0003bf50(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_0003bf88 @ 0003bf88 size=228 ===== */

undefined4
FUN_0003bf88(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  uint uVar1;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int local_10;
  int local_c;
  
  memset(&local_f8,0,0xe8);
  uVar1 = gnu_dev_major(CONCAT44(param_4,param_3));
  if (uVar1 == 7) {
    local_c = open(param_1,0);
    if (local_c < 0) {
      return 0xffffffff;
    }
    local_10 = ioctl(local_c,0x4c05,&local_f8);
    close(local_c);
    if (local_10 < 0) {
      return 0xffffffff;
    }
    if ((param_6 == iStack_f4 && param_5 == local_f8) && (iStack_ec == 0 && param_7 == local_f0)) {
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_0003c06c @ 0003c06c size=1124 ===== */

int FUN_0003c06c(undefined4 param_1,char *param_2,uint *param_3,char *param_4,size_t param_5)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  stat local_88;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  __ino_t local_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int local_c;
  
  local_c = 0;
  local_18 = 0;
  iStack_14 = 0;
  local_20 = 0;
  iStack_1c = 0;
  local_24 = 0;
  *param_3 = 0;
  local_28 = setmntent(param_1,&DAT_00049c58);
  if (local_28 == 0) {
    piVar1 = __errno_location();
    if (*piVar1 != 2) {
      piVar1 = __errno_location();
      return *piVar1;
    }
    pcVar2 = getenv("EXT2FS_NO_MTAB_OK");
    if (pcVar2 != (char *)0x0) {
      return 0;
    }
    return 0x7f2bb788;
  }
  iVar3 = stat(param_2,&local_88);
  if (iVar3 == 0) {
    iVar3 = FUN_0003bf50(local_88.st_mode);
    if (iVar3 == 0) {
      local_18 = (int)local_88.st_dev;
      iStack_14 = local_88.st_dev._4_4_;
      local_24 = local_88.st_ino;
    }
    else {
      local_20 = (int)local_88.st_rdev;
      iStack_1c = local_88.st_rdev._4_4_;
    }
  }
  do {
    while( true ) {
      do {
        do {
          local_2c = (undefined4 *)getmntent(local_28);
          if (local_2c == (undefined4 *)0x0) goto LAB_0003c2a8;
        } while (*(char *)*local_2c != '/');
        iVar3 = strcmp(param_2,(char *)*local_2c);
        if (iVar3 == 0) goto LAB_0003c2a8;
        iVar3 = stat((char *)*local_2c,&local_88);
      } while (iVar3 != 0);
      iVar3 = FUN_0003bf50(local_88.st_mode);
      if (iVar3 == 0) break;
      if (((local_20 != 0 || iStack_1c != 0) &&
          (iStack_1c == local_88.st_rdev._4_4_ && local_20 == (int)local_88.st_rdev)) ||
         (iVar3 = FUN_0003bf88(*local_2c,local_88.st_rdev._4_4_,(int)local_88.st_rdev,
                               local_88.st_rdev._4_4_,local_18,iStack_14,local_24), iVar3 == 1))
      goto LAB_0003c2a8;
    }
  } while (((local_18 == 0 && iStack_14 == 0) ||
           (iStack_14 != local_88.st_dev._4_4_ || local_18 != (int)local_88.st_dev)) ||
          (local_24 != local_88.st_ino));
LAB_0003c2a8:
  if (local_2c == (undefined4 *)0x0) {
    if (((local_20 == 0 && iStack_1c == 0) || (iVar3 = stat("/",&local_88), iVar3 != 0)) ||
       (iStack_1c != local_88.st_dev._4_4_ || local_20 != (int)local_88.st_dev)) goto LAB_0003c4b8;
    *param_3 = 1;
    if (param_4 != (char *)0x0) {
      strncpy(param_4,"/",param_5);
    }
LAB_0003c420:
    *param_3 = *param_3 | 2;
    local_30 = open("/.ismount-test-file",0x42,0x180);
    if (local_30 < 0) {
      piVar1 = __errno_location();
      if (*piVar1 == 0x1e) {
        *param_3 = *param_3 | 4;
      }
    }
    else {
      close(local_30);
    }
    unlink("/.ismount-test-file");
  }
  else {
    iVar3 = stat((char *)local_2c[1],&local_88);
    if (iVar3 < 0) {
      piVar1 = __errno_location();
      local_c = *piVar1;
      if (local_c == 2) {
        local_c = 0;
      }
      goto LAB_0003c4b8;
    }
    if ((local_20 != 0 || iStack_1c != 0) &&
       (iStack_1c != local_88.st_dev._4_4_ || local_20 != (int)local_88.st_dev)) goto LAB_0003c4b8;
    *param_3 = 1;
    iVar3 = hasmntopt(local_2c,&DAT_00049c74);
    if (iVar3 != 0) {
      *param_3 = *param_3 | 4;
    }
    if (param_4 != (char *)0x0) {
      strncpy(param_4,(char *)local_2c[1],param_5);
    }
    iVar3 = strcmp((char *)local_2c[1],"/");
    if (iVar3 == 0) goto LAB_0003c420;
  }
  local_c = 0;
LAB_0003c4b8:
  endmntent(local_28);
  return local_c;
}



/* ===== FUN_0003c4d0 @ 0003c4d0 size=152 ===== */

undefined4 FUN_0003c4d0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0003c06c("/proc/mounts",param_1,param_2,param_3,param_4);
  if ((iVar1 == 0) && (*param_2 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0003c06c("/etc/mtab",param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



/* ===== FUN_0003c568 @ 0003c568 size=616 ===== */

int FUN_0003c568(char *param_1)

{
  int iVar1;
  char *pcVar2;
  stat sStack_478;
  char local_41c [1024];
  char *local_1c;
  FILE *local_18;
  int local_14;
  undefined8 local_10;
  
  local_14 = 0;
  local_10 = 0;
  iVar1 = stat(param_1,&sStack_478);
  if ((iVar1 == 0) && (iVar1 = FUN_0003bf50(sStack_478.st_mode), iVar1 != 0)) {
    local_10 = CONCAT44(sStack_478.st_rdev._4_4_,(int)sStack_478.st_rdev);
  }
  local_18 = fopen("/proc/swaps","r");
  if (local_18 == (FILE *)0x0) {
    local_14 = 0;
  }
  else {
    pcVar2 = fgets(local_41c,0x400,local_18);
    if (pcVar2 != (char *)0x0) {
      if (local_41c[0] == '\0') goto LAB_0003c788;
      iVar1 = strncmp(local_41c,"Filename\t",9);
      if (iVar1 == 0) goto LAB_0003c788;
      do {
        local_1c = strchr(local_41c,0x20);
        if (local_1c != (char *)0x0) {
          *local_1c = '\0';
        }
        local_1c = strchr(local_41c,9);
        if (local_1c != (char *)0x0) {
          *local_1c = '\0';
        }
        iVar1 = strcmp(local_41c,param_1);
        if (iVar1 == 0) {
          local_14 = local_14 + 1;
          break;
        }
        if ((((int)local_10 != 0 || local_10._4_4_ != 0) &&
            (iVar1 = stat(local_41c,&sStack_478), iVar1 == 0)) &&
           (iVar1 = FUN_0003bf50(sStack_478.st_mode), iVar1 != 0)) {
          if (local_10._4_4_ == sStack_478.st_rdev._4_4_ && (int)local_10 == (int)sStack_478.st_rdev
             ) {
            local_14 = local_14 + 1;
            break;
          }
        }
LAB_0003c788:
        pcVar2 = fgets(local_41c,0x400,local_18);
      } while (pcVar2 != (char *)0x0);
    }
    fclose(local_18);
  }
  return local_14;
}



/* ===== FUN_0003c7d0 @ 0003c7d0 size=448 ===== */

int FUN_0003c7d0(char *param_1,uint *param_2,char *param_3,size_t param_4)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  stat sStack_68;
  int local_10;
  int local_c;
  
  local_c = 0;
  pcVar1 = getenv("EXT2FS_PRETEND_RO_MOUNT");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = getenv("EXT2FS_PRETEND_RW_MOUNT");
    if (pcVar1 == (char *)0x0) {
      iVar2 = FUN_0003c568(param_1);
      if (iVar2 == 0) {
        local_c = FUN_0003c4d0(param_1,param_2,param_3,param_4);
      }
      else {
        *param_2 = 9;
        strncpy(param_3,"<swap>",param_4);
      }
      if (local_c == 0) {
        iVar2 = stat(param_1,&sStack_68);
        if ((iVar2 == 0) && (iVar2 = FUN_0003bf50(sStack_68.st_mode), iVar2 != 0)) {
          local_10 = open(param_1,0x80);
          if (local_10 < 0) {
            piVar3 = __errno_location();
            if (*piVar3 == 0x10) {
              *param_2 = *param_2 | 0x10;
            }
          }
          else {
            close(local_10);
          }
        }
        local_c = 0;
      }
    }
    else {
      *param_2 = 1;
      pcVar1 = getenv("EXT2FS_PRETEND_ROOTFS");
      if (pcVar1 != (char *)0x0) {
        *param_2 = 2;
      }
      local_c = 0;
    }
  }
  else {
    *param_2 = 5;
    pcVar1 = getenv("EXT2FS_PRETEND_ROOTFS");
    if (pcVar1 != (char *)0x0) {
      *param_2 = 2;
    }
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_0003c990 @ 0003c990 size=56 ===== */

undefined4 FUN_0003c990(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003c7d0(param_1,param_2,0,0);
  return uVar1;
}



/* ===== FUN_0003c9c8 @ 0003c9c8 size=252 ===== */

__off64_t FUN_0003c9c8(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  __off_t _Var2;
  __off64_t _Var3;
  int local_10;
  int iStack_c;
  
  if (DAT_0005a390 == 0) {
    _Var3 = lseek64(param_1,CONCAT44(param_4,param_3),param_5);
    local_10 = (int)_Var3;
    iStack_c = (int)((ulonglong)_Var3 >> 0x20);
    if (iStack_c != -1 || local_10 != -1) {
      return _Var3;
    }
    piVar1 = __errno_location();
    if (*piVar1 != 0x26) {
      return _Var3;
    }
    DAT_0005a390 = DAT_0005a390 + 1;
  }
  if ((int)-(param_4 + (uint)(0x7fffffff < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(0x7fffffff < param_3)))) {
    _Var2 = lseek(param_1,param_3,param_5);
    _Var3 = VectorShiftRight(CONCAT44(_Var2,_Var2),0x20);
  }
  else {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
    _Var3 = -1;
  }
  return _Var3;
}



/* ===== FUN_0003cac4 @ 0003cac4 size=116 ===== */

undefined4 FUN_0003cac4(char *param_1,int param_2)

{
  int local_10;
  char *local_c;
  
  local_10 = param_2;
  local_c = param_1;
  while( true ) {
    if (local_10 < 1) {
      return 1;
    }
    if (*local_c != '\0') break;
    local_10 = local_10 + -1;
    local_c = local_c + 1;
  }
  return 0;
}



/* ===== FUN_0003cb38 @ 0003cb38 size=668 ===== */

int FUN_0003cb38(int param_1,undefined4 param_2,int param_3,int *param_4,int param_5,
                undefined4 param_6,uint param_7,uint param_8,uint param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int *local_58;
  int local_2c;
  uint local_28;
  uint uStack_24;
  int local_1c;
  
  local_2c = 0;
  uVar3 = param_5 * (*(int *)(*(int *)(param_1 + 0x10) + 0x18) + 8);
  uVar4 = 0 << (uVar3 & 0xff) | 1 << (uVar3 - 0x20 & 0xff) | 1U >> (0x20 - uVar3 & 0xff);
  uVar3 = 1 << (uVar3 & 0xff);
  local_28 = 0;
  uStack_24 = 0;
  local_58 = param_4;
  for (local_1c = 0; local_1c < param_11; local_1c = local_1c + 1) {
    uVar5 = param_10 + param_8 + (uint)CARRY4(param_9,param_7);
    bVar6 = uVar5 <= uStack_24;
    if (uStack_24 == uVar5) {
      bVar6 = param_9 + param_7 <= local_28;
    }
    if (bVar6) break;
    if (*local_58 != 0) {
      uVar5 = uVar4 + uStack_24 + (uint)CARRY4(uVar3,local_28);
      bVar6 = uVar5 <= param_8;
      if (param_8 == uVar5) {
        bVar6 = uVar3 + local_28 <= param_7;
      }
      if (!bVar6) {
        iVar2 = *local_58;
        if (0 < param_5) {
          iVar1 = FUN_0003be34(param_1,iVar2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_0003cb38(param_1,param_2,param_3 + *(int *)(param_1 + 0x14),param_3,
                               param_5 + -1);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_0003bee4(param_1,iVar2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_0003cac4(param_3,*(undefined4 *)(param_1 + 0x14));
          if (iVar1 == 0) goto LAB_0003cd68;
        }
        FUN_000271a0(param_1,iVar2,0xffffffff);
        *local_58 = 0;
        local_2c = local_2c + 1;
      }
    }
LAB_0003cd68:
    local_58 = local_58 + 1;
    bVar6 = CARRY4(uVar3,local_28);
    local_28 = uVar3 + local_28;
    uStack_24 = uVar4 + uStack_24 + (uint)bVar6;
  }
  iVar2 = FUN_0003bb44(param_1,param_2,local_2c,local_2c >> 0x1f);
  return iVar2;
}



/* ===== FUN_0003cdd4 @ 0003cdd4 size=688 ===== */

int FUN_0003cdd4(int param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                uint param_6,int param_7)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  int local_44;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_34 = 0;
  local_1c = 0xc;
  local_20 = param_2 + 0x28;
  local_28 = 0xc;
  local_24 = 0;
  if (param_5._4_4_ == 0) {
    if ((param_7 == 0 && param_6 != 0xffffffff) &&
       ((param_7 - (uint)(param_6 < (uint)param_5)) + (uint)(0xfffffffe < param_6 - (uint)param_5)
        == 0 && param_6 - (uint)param_5 != 0xfffffffe)) {
      local_2c = (param_6 - (uint)param_5) + 1;
    }
    else {
      local_2c = ~(uint)param_5;
    }
    local_44 = param_3;
    if (param_3 == 0) {
      iVar2 = FUN_00018b38(3,*(undefined4 *)(param_1 + 0x14),&local_34);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_44 = local_34;
      local_14 = 0;
    }
    local_30 = *(uint *)(param_1 + 0x14) >> 2;
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      bVar3 = local_24 <= param_5._4_4_;
      if (param_5._4_4_ == local_24) {
        bVar3 = local_28 <= (uint)param_5;
      }
      if (bVar3) {
        param_5 = CONCAT44(param_5._4_4_ - (local_24 + ((uint)param_5 < local_28)),
                           (uint)param_5 - local_28);
      }
      else {
        local_14 = FUN_0003cb38(param_1,param_2,local_44,local_20,local_18);
        if (local_14 != 0) goto LAB_0003d05c;
        if (local_24 != 0 || local_2c <= local_28) break;
        local_2c = local_2c + ((uint)param_5 - local_28);
        param_5 = 0;
        local_14 = 0;
      }
      local_20 = local_20 + local_1c * 4;
      if (local_18 == 0) {
        local_1c = 1;
        local_28 = 1;
        local_24 = 0;
      }
      uVar1 = (ulonglong)local_28;
      local_28 = (uint)(local_30 * uVar1);
      local_24 = local_30 * local_24 + (int)(local_30 * uVar1 >> 0x20);
    }
    local_14 = 0;
LAB_0003d05c:
    if (local_34 != 0) {
      FUN_00018c58(&local_34);
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



/* ===== FUN_0003d084 @ 0003d084 size=788 ===== */

int FUN_0003d084(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                uint param_6,uint param_7,uint param_8,uint param_9,int *param_10)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  int local_28;
  int iStack_24;
  int local_1c;
  uint local_18;
  int local_14;
  
  local_14 = 0;
  local_1c = 0;
  if (*(int *)(param_1 + 100) == 0) {
    *param_10 = *param_10 + param_9;
    while (param_9 != 0) {
      FUN_00027018(param_1);
      param_9 = param_9 - 1;
    }
    return local_1c;
  }
  uVar2 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
  uVar1 = (int)uVar2 >> 0x1f;
  if ((param_7 & uVar2) != 0 || (param_8 & uVar1) != 0) {
    uVar4 = FUN_0002b5e8(param_1,param_2,param_3,param_6,param_5,param_6,&local_28);
    local_1c = (int)uVar4;
    if (local_1c != 0) goto LAB_0003d370;
    if (local_28 == 0 && iStack_24 == 0) {
      FUN_00027018(param_1,(int)((ulonglong)uVar4 >> 0x20),param_7,param_8,0xffffffff);
      local_14 = local_14 + 1;
    }
    local_18 = (1 << (*(uint *)(param_1 + 100) & 0xff)) -
               (param_7 & (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1U);
    if (param_9 < local_18) {
      local_18 = param_9;
    }
    param_9 = param_9 - local_18;
    bVar3 = CARRY4(local_18,param_7);
    param_7 = local_18 + param_7;
    param_8 = param_8 + bVar3;
    bVar3 = CARRY4(local_18,param_5);
    param_5 = local_18 + param_5;
    uVar1 = param_6;
    param_6 = param_6 + bVar3;
  }
  for (; (param_9 != 0 && ((uint)(1 << (*(uint *)(param_1 + 100) & 0xff)) <= param_9));
      param_9 = param_9 - local_18) {
    FUN_00027018(param_1,uVar1,param_7,param_8,0xffffffff);
    local_14 = local_14 + 1;
    local_18 = 1 << (*(uint *)(param_1 + 100) & 0xff);
    bVar3 = CARRY4(local_18,param_7);
    param_7 = local_18 + param_7;
    param_8 = param_8 + bVar3;
    bVar3 = CARRY4(local_18,param_5);
    param_5 = local_18 + param_5;
    uVar1 = param_6;
    param_6 = param_6 + bVar3;
  }
  if (param_9 != 0) {
    uVar4 = FUN_0002b5e8(param_1,param_2,param_3,param_6,param_5,param_6,&local_28);
    local_1c = (int)uVar4;
    if ((local_1c == 0) && (local_28 == 0 && iStack_24 == 0)) {
      FUN_00027018(param_1,(int)((ulonglong)uVar4 >> 0x20),param_7,param_8,0xffffffff);
      local_14 = local_14 + 1;
    }
  }
LAB_0003d370:
  *param_10 = *param_10 + local_14;
  return local_1c;
}



/* ===== FUN_0003d398 @ 0003d398 size=1484 ===== */

int FUN_0003d398(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                uint param_5,uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_a8 [8];
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int local_74;
  uint local_70;
  int iStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  int iStack_1c;
  int local_14;
  
  local_54 = 0;
  local_74 = 0;
  local_14 = FUN_0002ff98(param_1,param_2,param_3,&local_54);
  if (local_14 != 0) {
    return local_14;
  }
  FUN_00031268(local_54,local_54,param_5,param_6);
  local_14 = FUN_00030374(local_54,0,&local_70);
  if (local_14 != 0x7f2bb780) {
    do {
      if (local_14 != 0) goto LAB_0003d948;
      local_30 = 7;
      local_40 = local_60 + local_68;
      uStack_3c = uStack_64 + CARRY4(local_60,local_68);
      bVar5 = uStack_64 <= param_6;
      if (param_6 == uStack_64) {
        bVar5 = local_68 <= param_5;
      }
      if (!bVar5 || param_6 == uStack_64 && param_5 == local_68) {
        bVar5 = uStack_64 <= param_8;
        if (param_8 == uStack_64) {
          bVar5 = local_68 <= param_7;
        }
        local_14 = 0;
        if (!bVar5) goto LAB_0003d8c4;
        bVar5 = param_8 <= uStack_3c;
        if (uStack_3c == param_8) {
          bVar5 = param_7 <= local_40;
        }
        local_2c = local_60;
        if (bVar5 && (uStack_3c != param_8 || local_40 != param_7)) {
          local_2c = (param_7 - local_68) + 1;
        }
        uVar4 = local_2c + local_70;
        iVar1 = iStack_6c + (uint)CARRY4(local_2c,local_70);
        uVar2 = local_2c + local_68;
        uVar3 = uStack_64 + CARRY4(local_2c,local_68);
        local_60 = local_60 - local_2c;
        local_28 = local_68;
        uStack_24 = uStack_64;
        local_20 = local_70;
        iStack_1c = iStack_6c;
        local_14 = 0;
LAB_0003d6d0:
        uStack_64 = uVar3;
        local_68 = uVar2;
        iStack_6c = iVar1;
        local_70 = uVar4;
        if (local_60 == 0) {
          local_14 = FUN_00030374(local_54,0,auStack_a8);
          if (local_14 != 0) goto LAB_0003d948;
          local_50 = local_a0;
          uStack_4c = uStack_9c;
          local_14 = FUN_00030374(local_54,7,auStack_a8);
          if (local_14 == 0x7f2bb77c) {
            local_38 = local_50;
            uStack_34 = uStack_4c;
          }
          else {
            if (local_14 != 0) goto LAB_0003d948;
            local_38 = local_a0;
            uStack_34 = uStack_9c;
          }
          local_14 = FUN_00031268(local_54,local_54,local_50,uStack_4c);
          if (((local_14 != 0) || (local_14 = FUN_000330b8(local_54,0), local_14 != 0)) ||
             ((local_14 = FUN_0003129c(local_54), local_14 != 0 && (local_14 != 0x7f2bb780))))
          goto LAB_0003d948;
          local_14 = 0;
          FUN_00031268(local_54,local_54,local_38,uStack_34);
          local_30 = 0;
        }
        else {
          local_14 = FUN_000314d8(local_54,0,&local_70);
          if (local_14 != 0) goto LAB_0003d948;
          local_14 = FUN_0003129c(local_54);
        }
        if ((local_14 != 0) ||
           (local_14 = FUN_0003d084(param_1,param_2,param_3,uStack_24,local_28,uStack_24,local_20,
                                    iStack_1c,local_2c,&local_74), local_14 != 0))
        goto LAB_0003d948;
      }
      else {
        uVar4 = uStack_3c - (local_40 == 0);
        bVar5 = uVar4 <= param_8;
        if (param_8 == uVar4) {
          bVar5 = local_40 - 1 <= param_7;
        }
        if (!bVar5) {
          uVar4 = (param_7 - local_68) + local_70;
          local_90 = uVar4 + 1;
          iStack_8c = (param_8 - (uStack_64 + (param_7 < local_68))) + iStack_6c +
                      (uint)CARRY4(param_7 - local_68,local_70) + (uint)(0xfffffffe < uVar4);
          local_88 = param_7 + 1;
          iStack_84 = param_8 + (0xfffffffe < param_7);
          local_80 = (local_40 - param_7) + -1;
          local_60 = param_5 - local_68;
          local_20 = local_60 + local_70;
          iStack_1c = iStack_6c + (uint)CARRY4(local_60,local_70);
          local_28 = local_60 + local_68;
          uStack_24 = uStack_64 + CARRY4(local_60,local_68);
          local_2c = (param_7 - param_5) + 1;
          local_14 = FUN_000320a0(local_54,1,&local_90);
          if (((local_14 == 0) && (local_14 = FUN_0003129c(local_54), local_14 == 0)) &&
             (local_14 = FUN_00031268(local_54,local_54,local_68,uStack_64), uVar4 = local_70,
             iVar1 = iStack_6c, uVar2 = local_68, uVar3 = uStack_64, local_14 == 0))
          goto LAB_0003d6d0;
          goto LAB_0003d948;
        }
        bVar5 = uStack_3c <= param_6;
        if (param_6 == uStack_3c) {
          bVar5 = local_40 <= param_5;
        }
        if (!bVar5) {
          local_44 = param_5 - local_68;
          local_20 = local_44 + local_70;
          iStack_1c = iStack_6c + (uint)CARRY4(local_44,local_70);
          local_28 = local_44 + local_68;
          uStack_24 = uStack_64 + CARRY4(local_44,local_68);
          local_2c = local_60 - local_44;
          uVar4 = local_70;
          iVar1 = iStack_6c;
          uVar2 = local_68;
          uVar3 = uStack_64;
          local_60 = local_44;
          local_14 = 0;
          goto LAB_0003d6d0;
        }
      }
      local_14 = 0;
      local_14 = FUN_00030374(local_54,local_30,&local_70);
      if ((local_14 == 0x7f2bb77c) || (local_14 == 0x7f2bb780)) goto LAB_0003d8c4;
    } while( true );
  }
  local_14 = 0;
LAB_0003d948:
  FUN_0002fe94(local_54);
  return local_14;
LAB_0003d8c4:
  local_14 = FUN_0003bb44(param_1,param_3,local_74,local_74 >> 0x1f);
  goto LAB_0003d948;
}



/* ===== FUN_0003d964 @ 0003d964 size=148 ===== */

int FUN_0003d964(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  
  if (param_5 == 0 && param_6 == 0) {
    memset((void *)(param_3 + 0x28),0,0x3c);
    *(undefined4 *)(param_3 + 4) = 0;
    iVar1 = FUN_0001cfb0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_00019b2c(param_1,param_2);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0003d9f8 @ 0003d9f8 size=328 ===== */

int FUN_0003d9f8(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
                uint param_5,uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  bool bVar2;
  undefined1 *local_9c;
  undefined1 auStack_8c [128];
  int local_c;
  
  bVar2 = param_8 <= param_6;
  if (param_6 == param_8) {
    bVar2 = param_7 <= param_5;
  }
  if (!bVar2 || param_6 == param_8 && param_5 == param_7) {
    local_9c = param_3;
    if (param_3 == (undefined1 *)0x0) {
      iVar1 = FUN_0001c9f4(param_1,param_2,auStack_8c);
      if (iVar1 != 0) {
        return iVar1;
      }
      local_9c = auStack_8c;
      local_c = 0;
    }
    if ((*(uint *)(local_9c + 0x20) & 0x10000000) == 0) {
      if ((*(uint *)(local_9c + 0x20) & 0x80000) == 0) {
        local_c = FUN_0003cdd4(param_1,local_9c,param_4,param_6,param_5,param_6,param_7,param_8);
      }
      else {
        local_c = FUN_0003d398(param_1,param_2,local_9c,param_6,param_5,param_6,param_7,param_8);
      }
      if (local_c == 0) {
        local_c = FUN_0001cfb0(param_1,param_2,local_9c);
      }
    }
    else {
      local_c = FUN_0003d964(param_1,param_2,local_9c,param_6,param_5,param_6,param_7,param_8);
    }
  }
  else {
    local_c = 0x16;
  }
  return local_c;
}



/* ===== FUN_0003db40 @ 0003db40 size=196 ===== */

int FUN_0003db40(int param_1)

{
  uint uVar1;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_00018a74(4,&local_14);
  if (local_c == 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    local_10 = (*(uint *)(param_1 + 0x20) - uVar1 >> 3 |
               (*(int *)(param_1 + 0x24) -
               ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
               (uint)(*(uint *)(param_1 + 0x20) < uVar1))) * 0x20000000) + 1;
    local_c = FUN_00018a74(local_10,local_14);
    if (local_c == 0) {
      *(undefined4 *)(param_1 + 0x30) = local_14;
      local_c = 0;
    }
    else {
      FUN_00018c58(&local_14);
    }
  }
  return local_c;
}



/* ===== FUN_0003dc04 @ 0003dc04 size=156 ===== */

int FUN_0003dc04(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0003db40(param_2);
  if (iVar1 == 0) {
    uVar2 = (uint)*(undefined8 *)(param_2 + 0x10);
    memset((void *)**(undefined4 **)(param_2 + 0x30),0,
           (*(uint *)(param_2 + 0x20) - uVar2 >> 3 |
           (*(int *)(param_2 + 0x24) -
           ((int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
           (uint)(*(uint *)(param_2 + 0x20) < uVar2))) * 0x20000000) + 1);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0003dca0 @ 0003dca0 size=116 ===== */

void FUN_0003dca0(int param_1)

{
  int *local_c;
  
  local_c = *(int **)(param_1 + 0x30);
  if (local_c != (int *)0x0) {
    if (*local_c != 0) {
      FUN_00018c58(local_c);
      *local_c = 0;
    }
    FUN_00018c58(&local_c);
  }
  return;
}



/* ===== FUN_0003dd14 @ 0003dd14 size=172 ===== */

int FUN_0003dd14(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  iVar1 = FUN_0003db40(param_2);
  if (iVar1 == 0) {
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x10);
    memcpy((void *)**(undefined4 **)(param_2 + 0x30),(void *)*puVar2,
           (*(uint *)(param_1 + 0x20) - uVar3 >> 3 |
           (*(int *)(param_1 + 0x24) -
           ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
           (uint)(*(uint *)(param_1 + 0x20) < uVar3))) * 0x20000000) + 1);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0003ddc0 @ 0003ddc0 size=484 ===== */

int FUN_0003ddc0(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_10;
  uint uStack_c;
  
  piVar1 = *(int **)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x1c);
  bVar5 = uVar2 <= param_4;
  if (param_4 == uVar2) {
    bVar5 = *(uint *)(param_1 + 0x18) <= param_3;
  }
  if (bVar5 && (param_4 != uVar2 || param_3 != *(uint *)(param_1 + 0x18))) {
    local_10 = *(uint *)(param_1 + 0x20);
    uStack_c = *(uint *)(param_1 + 0x24);
    bVar5 = param_4 <= uStack_c;
    if (uStack_c == param_4) {
      bVar5 = param_3 <= local_10;
    }
    if (bVar5 && (uStack_c != param_4 || local_10 != param_3)) {
      local_10 = param_3;
      uStack_c = param_4;
    }
    while( true ) {
      uVar2 = *(uint *)(param_1 + 0x1c);
      bVar5 = uVar2 <= uStack_c;
      if (uStack_c == uVar2) {
        bVar5 = *(uint *)(param_1 + 0x18) <= local_10;
      }
      if (!bVar5 || uStack_c == uVar2 && local_10 == *(uint *)(param_1 + 0x18)) break;
      FUN_00028ee0(local_10 - *(uint *)(param_1 + 0x10),
                   uStack_c -
                   (*(int *)(param_1 + 0x14) + (uint)(local_10 < *(uint *)(param_1 + 0x10))),*piVar1
                  );
      bVar5 = local_10 == 0;
      local_10 = local_10 - 1;
      uStack_c = uStack_c - bVar5;
    }
  }
  if (param_6 == *(int *)(param_1 + 0x24) && param_5 == *(uint *)(param_1 + 0x20)) {
    *(uint *)(param_1 + 0x18) = param_3;
    *(uint *)(param_1 + 0x1c) = param_4;
    iVar3 = 0;
  }
  else {
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
    uVar2 = (*(uint *)(param_1 + 0x20) - uVar2 >> 3 |
            (*(int *)(param_1 + 0x24) -
            ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
            (uint)(*(uint *)(param_1 + 0x20) < uVar2))) * 0x20000000) + 1;
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
    uVar4 = (param_5 - uVar4 >> 3 |
            (param_6 -
            ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + (uint)(param_5 < uVar4))) *
            0x20000000) + 1;
    if ((uVar2 == uVar4) || (iVar3 = FUN_00018ca4(uVar2,uVar4,piVar1), iVar3 == 0)) {
      if (uVar2 < uVar4) {
        memset((void *)(*piVar1 + uVar2),0,uVar4 - uVar2);
      }
      *(uint *)(param_1 + 0x18) = param_3;
      *(uint *)(param_1 + 0x1c) = param_4;
      *(uint *)(param_1 + 0x20) = param_5;
      *(int *)(param_1 + 0x24) = param_6;
      iVar3 = 0;
    }
  }
  return iVar3;
}



/* ===== FUN_0003dfa4 @ 0003dfa4 size=100 ===== */

undefined4 FUN_0003dfa4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00028e40(param_3 - *(uint *)(param_1 + 0x10),
                       param_4 - (*(int *)(param_1 + 0x14) +
                                 (uint)(param_3 < *(uint *)(param_1 + 0x10))),
                       **(undefined4 **)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_0003e008 @ 0003e008 size=100 ===== */

undefined4 FUN_0003e008(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00028ee0(param_3 - *(uint *)(param_1 + 0x10),
                       param_4 - (*(int *)(param_1 + 0x14) +
                                 (uint)(param_3 < *(uint *)(param_1 + 0x10))),
                       **(undefined4 **)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_0003e06c @ 0003e06c size=100 ===== */

undefined4 FUN_0003e06c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00028f88(param_3 - *(uint *)(param_1 + 0x10),
                       param_4 - (*(int *)(param_1 + 0x14) +
                                 (uint)(param_3 < *(uint *)(param_1 + 0x10))),
                       **(undefined4 **)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_0003e0d0 @ 0003e0d0 size=156 ===== */

void FUN_0003e0d0(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 local_14;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  for (local_14 = 0; local_14 < param_5; local_14 = local_14 + 1) {
    FUN_00017fac((local_14 + param_3) - *(uint *)(param_1 + 0x10),
                 (param_4 + (uint)CARRY4(local_14,param_3)) -
                 (*(int *)(param_1 + 0x14) + (uint)(local_14 + param_3 < *(uint *)(param_1 + 0x10)))
                 ,*puVar1);
  }
  return;
}



/* ===== FUN_0003e16c @ 0003e16c size=156 ===== */

void FUN_0003e16c(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 local_14;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  for (local_14 = 0; local_14 < param_5; local_14 = local_14 + 1) {
    FUN_00018020((local_14 + param_3) - *(uint *)(param_1 + 0x10),
                 (param_4 + (uint)CARRY4(local_14,param_3)) -
                 (*(int *)(param_1 + 0x14) + (uint)(local_14 + param_3 < *(uint *)(param_1 + 0x10)))
                 ,*puVar1);
  }
  return;
}



/* ===== FUN_0003e208 @ 0003e208 size=660 ===== */

undefined4 FUN_0003e208(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  
  local_20 = 0;
  local_24 = 0;
  iVar3 = **(int **)(param_1 + 0x30);
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3 - uVar4;
  local_10 = uVar2 >> 3 |
             (param_4 -
             ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + (uint)(param_3 < uVar4)))
             * 0x20000000;
  uVar2 = uVar2 & 7;
  local_1c = param_5;
  if (uVar2 != 0) {
    local_28 = 8 - uVar2;
    if (param_5 < 8 - uVar2) {
      local_28 = param_5;
      local_2c = (param_5 + uVar2) - 1;
    }
    else {
      local_2c = 7;
    }
    for (local_30 = local_28; 0 < (int)local_30; local_30 = local_30 - 1) {
      local_20 = local_20 | 1 << (local_2c & 0xff);
      local_2c = local_2c - 1;
    }
    if ((local_20 & *(byte *)(iVar3 + local_10)) != 0) {
      return 0;
    }
    if (param_5 <= 8 - uVar2) {
      return 1;
    }
    local_10 = local_10 + 1;
    local_1c = param_5 - local_28;
    param_5 = param_5 - local_28;
  }
  local_18 = param_5 >> 3;
  local_1c = local_1c & 7;
  local_2c = local_1c;
  if (local_1c != 0) {
    while (local_2c = local_2c - 1, -1 < (int)local_2c) {
      local_24 = local_24 | 1 << (local_2c & 0xff);
    }
    if ((local_24 & *(byte *)(iVar3 + local_10 + local_18)) != 0) {
      return 0;
    }
    if (local_18 == 0) {
      return 1;
    }
  }
  uVar1 = FUN_0003867c(iVar3 + local_10,local_18);
  return uVar1;
}



/* ===== FUN_0003e49c @ 0003e49c size=104 ===== */

undefined4
FUN_0003e49c(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  memcpy((void *)(**(int **)(param_1 + 0x30) + (param_3 >> 3 | param_4 << 0x1d)),param_6,
         param_5 + 7U >> 3);
  return 0;
}



/* ===== FUN_0003e504 @ 0003e504 size=104 ===== */

undefined4
FUN_0003e504(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  memcpy(param_6,(void *)(**(int **)(param_1 + 0x30) + (param_3 >> 3 | param_4 << 0x1d)),
         param_5 + 7U >> 3);
  return 0;
}



/* ===== FUN_0003e56c @ 0003e56c size=112 ===== */

void FUN_0003e56c(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  memset((void *)**(undefined4 **)(param_1 + 0x30),0,
         (*(uint *)(param_1 + 0x20) - uVar1 >> 3 |
         (*(int *)(param_1 + 0x24) -
         ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
         (uint)(*(uint *)(param_1 + 0x20) < uVar1))) * 0x20000000) + 1);
  return;
}



/* ===== FUN_0003e5dc @ 0003e5dc size=112 ===== */

void FUN_0003e5dc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar2 = *(int *)(param_1 + 0x24) -
          ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
          (uint)(*(uint *)(param_1 + 0x20) < uVar1));
  uVar1 = *(uint *)(param_1 + 0x20) - uVar1 >> 3 | uVar2 * 0x20000000;
  fprintf(stderr,"%16llu Bytes used by bitarray\n",uVar1 + 5,
          (uVar2 >> 3) + (uint)(0xfffffffa < uVar1));
  return;
}



/* ===== FUN_0003e64c @ 0003e64c size=816 ===== */

undefined4
FUN_0003e64c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int *param_7)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_1c;
  int *local_18;
  uint local_10;
  uint local_c;
  
  piVar2 = *(int **)(param_1 + 0x30);
  local_c = param_3 - *(int *)(param_1 + 0x10);
  bVar1 = false;
  for (local_10 = (param_5 - param_3) + 1; ((local_c & 7) != 0 && (local_10 != 0));
      local_10 = local_10 - 1) {
    iVar3 = FUN_00028f88(local_c,0,*piVar2,*piVar2,param_3,param_4);
    if (iVar3 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = (uint)uVar5;
      *param_7 = uVar4 + local_c;
      param_7[1] = (int)((ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar4,local_c);
      return 0;
    }
    local_c = local_c + 1;
  }
  if (local_10 != 0) {
    local_18 = (int *)(*piVar2 + (local_c >> 3));
    while( true ) {
      if ((local_10 < 8) || (((uint)local_18 & 7) == 0)) goto LAB_0003e7bc;
      if ((char)*local_18 != -1) break;
      local_18 = (int *)((int)local_18 + 1);
      local_10 = local_10 - 8;
      local_c = local_c + 8;
    }
    bVar1 = true;
LAB_0003e7bc:
    if (!bVar1) {
      uVar4 = local_10 >> 6;
      local_1c = uVar4;
      for (; (local_1c != 0 && (local_18[1] == -1 && *local_18 == -1)); local_18 = local_18 + 2) {
        local_1c = local_1c - 1;
      }
      local_10 = local_10 + (uVar4 - local_1c) * -0x40;
      iVar3 = uVar4 - local_1c;
      uVar4 = local_10 >> 3;
      local_1c = uVar4;
      for (; (local_1c != 0 && ((char)*local_18 == -1)); local_18 = (int *)((int)local_18 + 1)) {
        local_1c = local_1c - 1;
      }
      local_c = local_c + iVar3 * 0x40 + (uVar4 - local_1c) * 8;
      local_10 = local_10 + (uVar4 - local_1c) * -8;
    }
    while (local_10 != 0) {
      iVar3 = FUN_00028f88(local_c,0,*piVar2,*piVar2,param_3,param_4);
      if (iVar3 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        uVar4 = (uint)uVar5;
        *param_7 = uVar4 + local_c;
        param_7[1] = (int)((ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar4,local_c);
        return 0;
      }
      local_c = local_c + 1;
      local_10 = local_10 - 1;
    }
  }
  return 2;
}



/* ===== FUN_0003e97c @ 0003e97c size=804 ===== */

undefined4
FUN_0003e97c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int *param_7)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_1c;
  int *local_18;
  uint local_10;
  uint local_c;
  
  piVar2 = *(int **)(param_1 + 0x30);
  local_c = param_3 - *(int *)(param_1 + 0x10);
  bVar1 = false;
  for (local_10 = (param_5 - param_3) + 1; ((local_c & 7) != 0 && (local_10 != 0));
      local_10 = local_10 - 1) {
    iVar3 = FUN_00028f88(local_c,0,*piVar2,*piVar2,param_3,param_4);
    if (iVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = (uint)uVar5;
      *param_7 = uVar4 + local_c;
      param_7[1] = (int)((ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar4,local_c);
      return 0;
    }
    local_c = local_c + 1;
  }
  if (local_10 != 0) {
    local_18 = (int *)(*piVar2 + (local_c >> 3));
    while( true ) {
      if ((local_10 < 8) || (((uint)local_18 & 7) == 0)) goto LAB_0003eaec;
      if ((char)*local_18 != '\0') break;
      local_18 = (int *)((int)local_18 + 1);
      local_10 = local_10 - 8;
      local_c = local_c + 8;
    }
    bVar1 = true;
LAB_0003eaec:
    if (!bVar1) {
      uVar4 = local_10 >> 6;
      local_1c = uVar4;
      for (; (local_1c != 0 && (*local_18 == 0 && local_18[1] == 0)); local_18 = local_18 + 2) {
        local_1c = local_1c - 1;
      }
      local_10 = local_10 + (uVar4 - local_1c) * -0x40;
      iVar3 = uVar4 - local_1c;
      uVar4 = local_10 >> 3;
      local_1c = uVar4;
      for (; (local_1c != 0 && ((char)*local_18 == '\0')); local_18 = (int *)((int)local_18 + 1)) {
        local_1c = local_1c - 1;
      }
      local_c = local_c + iVar3 * 0x40 + (uVar4 - local_1c) * 8;
      local_10 = local_10 + (uVar4 - local_1c) * -8;
    }
    while (local_10 != 0) {
      iVar3 = FUN_00028f88(local_c,0,*piVar2,*piVar2,param_3,param_4);
      if (iVar3 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        uVar4 = (uint)uVar5;
        *param_7 = uVar4 + local_c;
        param_7[1] = (int)((ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar4,local_c);
        return 0;
      }
      local_c = local_c + 1;
      local_10 = local_10 - 1;
    }
  }
  return 2;
}



/* ===== FUN_0003eca0 @ 0003eca0 size=56 ===== */

bool FUN_0003eca0(int *param_1)

{
  return *param_1 == 0;
}



/* ===== FUN_0003ecd8 @ 0003ecd8 size=92 ===== */

void FUN_0003ecd8(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_1[1];
  *param_3 = (int)param_1;
  return;
}



/* ===== FUN_0003ed34 @ 0003ed34 size=36 ===== */

undefined4 FUN_0003ed34(undefined4 param_1)

{
  return param_1;
}



/* ===== FUN_0003ed58 @ 0003ed58 size=104 ===== */

void FUN_0003ed58(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int local_10;
  int local_c;
  
  local_c = FUN_00018a74(0x20,&local_10);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(local_10 + 0x10) = param_3;
  *(undefined4 *)(local_10 + 0x14) = param_4;
  *(undefined4 *)(local_10 + 0x18) = param_5;
  *(undefined4 *)(local_10 + 0x1c) = param_6;
  *param_1 = local_10;
  return;
}



/* ===== FUN_0003edc0 @ 0003edc0 size=140 ===== */

void FUN_0003edc0(int param_1,int param_2)

{
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 4) == param_2) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 8) == param_2) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) == param_2) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  local_10 = param_2;
  local_c = param_1;
  FUN_00018c58(&local_10);
  return;
}



/* ===== FUN_0003ee4c @ 0003ee4c size=132 ===== */

int FUN_0003ee4c(int param_1)

{
  int iVar1;
  undefined4 *local_10 [2];
  
  iVar1 = FUN_00018a74(0x10,local_10);
  if (iVar1 == 0) {
    *local_10[0] = 0;
    local_10[0][2] = 0;
    local_10[0][3] = 0;
    local_10[0][1] = 0;
    *(undefined4 **)(param_1 + 0x30) = local_10[0];
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0003eed0 @ 0003eed0 size=68 ===== */

int FUN_0003eed0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0003ee4c(param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0003ef14 @ 0003ef14 size=116 ===== */

void FUN_0003ef14(undefined4 param_1)

{
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_00041b70(param_1);
  while (local_c != 0) {
    local_10 = FUN_00041c30(local_c);
    local_14 = FUN_0003ed34(local_c);
    FUN_0004169c(local_c,param_1);
    FUN_00018c58(&local_14);
    local_c = local_10;
  }
  return;
}



/* ===== FUN_0003ef88 @ 0003ef88 size=72 ===== */

void FUN_0003ef88(int param_1)

{
  undefined4 local_c;
  
  local_c = *(undefined4 *)(param_1 + 0x30);
  FUN_0003ef14(local_c);
  FUN_00018c58(&local_c);
  return;
}



/* ===== FUN_0003efd0 @ 0003efd0 size=340 ===== */

int FUN_0003efd0(int param_1,int param_2)

{
  void *local_2c;
  void *local_28;
  void *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_18 = FUN_0003ee4c(param_2);
  if (local_18 == 0) {
    local_1c = *(int *)(param_1 + 0x30);
    local_20 = *(int **)(param_2 + 0x30);
    *(undefined4 *)(local_1c + 8) = 0;
    local_20[2] = 0;
    for (local_c = FUN_00041b70(local_1c); local_c != 0; local_c = FUN_00041c30(local_c)) {
      local_24 = (void *)FUN_0003ed34(local_c);
      local_18 = FUN_00018a74(0x20,&local_2c);
      if (local_18 != 0) {
        return local_18;
      }
      memcpy(local_2c,local_24,0x20);
      local_28 = local_2c;
      local_14 = local_20;
      local_10 = 0;
      if (*local_20 != 0) {
        local_10 = FUN_00041bd0(local_20);
        local_14 = (int *)(local_10 + 4);
      }
      FUN_0003ecd8(local_28,local_10,local_14);
      FUN_00041084(local_28,local_20);
    }
  }
  return local_18;
}



/* ===== FUN_0003f124 @ 0003f124 size=240 ===== */

void FUN_0003f124(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_18;
  int local_14;
  
  local_14 = FUN_00041bd0(param_3);
  while( true ) {
    if (local_14 == 0) {
      return;
    }
    local_18 = FUN_0003ed34(local_14);
    iVar2 = *(uint *)(local_18 + 0x18) + *(uint *)(local_18 + 0x10);
    uVar1 = (*(int *)(local_18 + 0x1c) + *(int *)(local_18 + 0x14) +
            (uint)CARRY4(*(uint *)(local_18 + 0x18),*(uint *)(local_18 + 0x10))) -
            (uint)(iVar2 == 0);
    bVar3 = uVar1 <= param_2;
    if (param_2 == uVar1) {
      bVar3 = iVar2 - 1U <= param_1;
    }
    if (bVar3) break;
    bVar3 = *(uint *)(local_18 + 0x14) <= param_2;
    if (param_2 == *(uint *)(local_18 + 0x14)) {
      bVar3 = *(uint *)(local_18 + 0x10) <= param_1;
    }
    if (bVar3) {
      uVar1 = param_1 - *(uint *)(local_18 + 0x10);
      *(uint *)(local_18 + 0x18) = uVar1 + 1;
      *(uint *)(local_18 + 0x1c) =
           (param_2 - (*(int *)(local_18 + 0x14) + (uint)(param_1 < *(uint *)(local_18 + 0x10)))) +
           (uint)(0xfffffffe < uVar1);
    }
    else {
      FUN_0004169c(local_14,param_3);
      FUN_00018c58(&local_18);
      local_14 = FUN_00041bd0(param_3);
    }
  }
  return;
}



/* ===== FUN_0003f214 @ 0003f214 size=280 ===== */

undefined4
FUN_0003f214(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar4 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 4) = 0;
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x1c);
  bVar6 = uVar2 <= param_4;
  if (param_4 == uVar2) {
    bVar6 = uVar1 <= param_3;
  }
  uVar3 = param_3;
  uVar5 = param_4;
  if (bVar6 && (param_4 != uVar2 || param_3 != uVar1)) {
    uVar3 = uVar1;
    uVar5 = uVar2;
  }
  FUN_0003f124(uVar3 - *(uint *)(param_1 + 0x10),
               uVar5 - (*(int *)(param_1 + 0x14) + (uint)(uVar3 < *(uint *)(param_1 + 0x10))),iVar4)
  ;
  *(uint *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  *(undefined4 *)(param_1 + 0x24) = param_6;
  bVar6 = *(uint *)(param_1 + 0x24) <= *(uint *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 0x1c) == *(uint *)(param_1 + 0x24)) {
    bVar6 = *(uint *)(param_1 + 0x20) <= *(uint *)(param_1 + 0x18);
  }
  if (!bVar6) {
    uVar1 = *(uint *)(param_1 + 0x18) - *(uint *)(param_1 + 0x10);
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x18);
    FUN_0003f5b8(uVar1 + 1,
                 (*(int *)(param_1 + 0x1c) -
                 (*(int *)(param_1 + 0x14) +
                 (uint)(*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x10)))) +
                 (uint)(0xfffffffe < uVar1),*(uint *)(param_1 + 0x20) - uVar2,
                 *(int *)(param_1 + 0x24) -
                 ((int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20) +
                 (uint)(*(uint *)(param_1 + 0x20) < uVar2)),iVar4);
  }
  return 0;
}



/* ===== FUN_0003f32c @ 0003f32c size=652 ===== */

undefined4 FUN_0003f32c(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int *local_10;
  int local_c;
  
  iVar2 = param_1[2];
  local_10 = param_1;
  if (iVar2 != 0) {
    bVar4 = *(uint *)(iVar2 + 0x14) <= param_4;
    if (param_4 == *(uint *)(iVar2 + 0x14)) {
      bVar4 = *(uint *)(iVar2 + 0x10) <= param_3;
    }
    if (bVar4) {
      uVar5 = (uint)*(undefined8 *)(iVar2 + 0x18);
      uVar3 = (int)((ulonglong)*(undefined8 *)(iVar2 + 0x18) >> 0x20) + *(int *)(iVar2 + 0x14) +
              (uint)CARRY4(uVar5,*(uint *)(iVar2 + 0x10));
      bVar4 = uVar3 <= param_4;
      if (param_4 == uVar3) {
        bVar4 = uVar5 + *(uint *)(iVar2 + 0x10) <= param_3;
      }
      if (!bVar4) {
        return 1;
      }
    }
    local_c = param_1[3];
    if (local_c == 0) {
      iVar1 = FUN_00041c30(iVar2);
      if (iVar1 != 0) {
        local_c = FUN_0003ed34(iVar1);
      }
      param_1[3] = local_c;
    }
    if (local_c != 0) {
      uVar5 = (uint)*(undefined8 *)(iVar2 + 0x18);
      uVar3 = (int)((ulonglong)*(undefined8 *)(iVar2 + 0x18) >> 0x20) + *(int *)(iVar2 + 0x14) +
              (uint)CARRY4(uVar5,*(uint *)(iVar2 + 0x10));
      bVar4 = uVar3 <= param_4;
      if (param_4 == uVar3) {
        bVar4 = uVar5 + *(uint *)(iVar2 + 0x10) <= param_3;
      }
      if (bVar4) {
        bVar4 = *(uint *)(local_c + 0x14) <= param_4;
        if (param_4 == *(uint *)(local_c + 0x14)) {
          bVar4 = *(uint *)(local_c + 0x10) <= param_3;
        }
        if (!bVar4) {
          return 0;
        }
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      bVar4 = *(uint *)(iVar2 + 0x14) <= param_4;
      if (param_4 == *(uint *)(iVar2 + 0x14)) {
        bVar4 = *(uint *)(iVar2 + 0x10) <= param_3;
      }
      if (bVar4) {
        uVar5 = (uint)*(undefined8 *)(iVar2 + 0x18);
        uVar3 = (int)((ulonglong)*(undefined8 *)(iVar2 + 0x18) >> 0x20) + *(int *)(iVar2 + 0x14) +
                (uint)CARRY4(uVar5,*(uint *)(iVar2 + 0x10));
        bVar4 = uVar3 <= param_4;
        if (param_4 == uVar3) {
          bVar4 = uVar5 + *(uint *)(iVar2 + 0x10) <= param_3;
        }
        if (!bVar4) {
          return 1;
        }
      }
    }
  }
  while( true ) {
    while( true ) {
      if (*local_10 == 0) {
        return 0;
      }
      iVar2 = FUN_0003ed34(*local_10);
      bVar4 = *(uint *)(iVar2 + 0x14) <= param_4;
      if (param_4 == *(uint *)(iVar2 + 0x14)) {
        bVar4 = *(uint *)(iVar2 + 0x10) <= param_3;
      }
      if (bVar4) break;
      local_10 = (int *)(*local_10 + 8);
    }
    uVar5 = (uint)*(undefined8 *)(iVar2 + 0x18);
    uVar3 = (int)((ulonglong)*(undefined8 *)(iVar2 + 0x18) >> 0x20) + *(int *)(iVar2 + 0x14) +
            (uint)CARRY4(uVar5,*(uint *)(iVar2 + 0x10));
    bVar4 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar4 = uVar5 + *(uint *)(iVar2 + 0x10) <= param_3;
    }
    if (!bVar4) break;
    local_10 = (int *)(*local_10 + 4);
  }
  param_1[2] = iVar2;
  param_1[3] = 0;
  return 1;
}



/* ===== FUN_0003f5b8 @ 0003f5b8 size=1092 ===== */

uint FUN_0003f5b8(uint param_1,uint param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint local_50;
  int iStack_4c;
  uint local_48;
  uint uStack_44;
  int local_3c;
  int local_38;
  int *local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  
  local_34 = param_5;
  local_1c = 0;
  local_20 = param_5;
  local_30 = 0;
  param_5[3] = 0;
  local_2c = param_5[1];
  if (local_2c != 0) {
    bVar4 = *(uint *)(local_2c + 0x14) <= param_2;
    if (param_2 == *(uint *)(local_2c + 0x14)) {
      bVar4 = *(uint *)(local_2c + 0x10) <= param_1;
    }
    if (bVar4) {
      uVar1 = *(uint *)(local_2c + 0x18) + *(uint *)(local_2c + 0x10);
      uVar2 = *(int *)(local_2c + 0x1c) + *(int *)(local_2c + 0x14) +
              (uint)CARRY4(*(uint *)(local_2c + 0x18),*(uint *)(local_2c + 0x10));
      bVar4 = uVar2 <= param_2;
      if (param_2 == uVar2) {
        bVar4 = uVar1 <= param_1;
      }
      if (!bVar4 || param_2 == uVar2 && param_1 == uVar1) {
LAB_0003f6e0:
        uVar3 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
        uVar1 = *(uint *)(local_2c + 0x18) + *(uint *)(local_2c + 0x10);
        uVar2 = *(int *)(local_2c + 0x1c) + *(int *)(local_2c + 0x14) +
                (uint)CARRY4(*(uint *)(local_2c + 0x18),*(uint *)(local_2c + 0x10));
        bVar4 = uVar2 <= uVar3;
        if (uVar3 == uVar2) {
          bVar4 = uVar1 <= param_1 + param_3;
        }
        if (!bVar4 || uVar3 == uVar2 && param_1 + param_3 == uVar1) {
          return 1;
        }
        local_30 = (uint)(param_2 !=
                          *(int *)(local_2c + 0x1c) + *(int *)(local_2c + 0x14) +
                          (uint)CARRY4(*(uint *)(local_2c + 0x18),*(uint *)(local_2c + 0x10)) ||
                         param_1 != *(uint *)(local_2c + 0x18) + *(uint *)(local_2c + 0x10));
        uVar1 = param_1 - *(uint *)(local_2c + 0x10);
        local_50 = uVar1 + param_3;
        iStack_4c = (param_2 -
                    (*(int *)(local_2c + 0x14) + (uint)(param_1 < *(uint *)(local_2c + 0x10)))) +
                    param_4 + (uint)CARRY4(uVar1,param_3);
        local_48 = *(uint *)(local_2c + 0x10);
        uStack_44 = *(uint *)(local_2c + 0x14);
        local_3c = local_2c;
        local_24 = local_2c;
        goto LAB_0003f88c;
      }
    }
  }
  while (*local_20 != 0) {
    local_1c = *local_20;
    local_2c = FUN_0003ed34(local_1c);
    bVar4 = *(uint *)(local_2c + 0x14) <= param_2;
    if (param_2 == *(uint *)(local_2c + 0x14)) {
      bVar4 = *(uint *)(local_2c + 0x10) <= param_1;
    }
    if (bVar4) {
      uVar1 = *(uint *)(local_2c + 0x18) + *(uint *)(local_2c + 0x10);
      uVar2 = *(int *)(local_2c + 0x1c) + *(int *)(local_2c + 0x14) +
              (uint)CARRY4(*(uint *)(local_2c + 0x18),*(uint *)(local_2c + 0x10));
      bVar4 = uVar2 <= param_2;
      if (param_2 == uVar2) {
        bVar4 = uVar1 <= param_1;
      }
      if (!bVar4 || param_2 == uVar2 && param_1 == uVar1) goto LAB_0003f6e0;
      local_20 = (int *)(*local_20 + 4);
    }
    else {
      local_20 = (int *)(*local_20 + 8);
    }
  }
  FUN_0003ed58(&local_3c,&local_3c,param_1,param_2,param_3,param_4);
  local_24 = local_3c;
  FUN_0003ecd8(local_3c,local_1c,local_20);
  FUN_00041084(local_24,local_34);
  param_5[1] = local_3c;
  local_28 = FUN_00041cf4(local_24);
  local_50 = param_3;
  iStack_4c = param_4;
  local_48 = param_1;
  uStack_44 = param_2;
  if ((local_28 != 0) &&
     (local_2c = FUN_0003ed34(local_28),
     param_2 ==
     *(int *)(local_2c + 0x1c) + *(int *)(local_2c + 0x14) +
     (uint)CARRY4(*(uint *)(local_2c + 0x18),*(uint *)(local_2c + 0x10)) &&
     param_1 == *(uint *)(local_2c + 0x18) + *(uint *)(local_2c + 0x10))) {
    local_48 = *(uint *)(local_2c + 0x10);
    uStack_44 = *(uint *)(local_2c + 0x14);
    local_50 = *(uint *)(local_2c + 0x18) + param_3;
    iStack_4c = *(int *)(local_2c + 0x1c) + param_4 +
                (uint)CARRY4(*(uint *)(local_2c + 0x18),param_3);
    FUN_0004169c(local_28,local_34);
    FUN_0003edc0(param_5,local_2c);
  }
LAB_0003f88c:
  local_28 = FUN_00041c30(local_24);
  do {
    if (local_28 == 0) {
LAB_0003f9d4:
      *(uint *)(local_3c + 0x10) = local_48;
      *(uint *)(local_3c + 0x14) = uStack_44;
      *(uint *)(local_3c + 0x18) = local_50;
      *(int *)(local_3c + 0x1c) = iStack_4c;
      return local_30;
    }
    local_38 = FUN_00041c30(local_28);
    local_2c = FUN_0003ed34(local_28);
    uVar1 = *(int *)(local_2c + 0x1c) + *(int *)(local_2c + 0x14) +
            (uint)CARRY4(*(uint *)(local_2c + 0x18),*(uint *)(local_2c + 0x10));
    bVar4 = uVar1 <= uStack_44;
    if (uStack_44 == uVar1) {
      bVar4 = *(uint *)(local_2c + 0x18) + *(uint *)(local_2c + 0x10) <= local_48;
    }
    if (!bVar4) {
      uVar1 = uStack_44 + iStack_4c + (uint)CARRY4(local_48,local_50);
      bVar4 = *(uint *)(local_2c + 0x14) <= uVar1;
      if (uVar1 == *(uint *)(local_2c + 0x14)) {
        bVar4 = *(uint *)(local_2c + 0x10) <= local_48 + local_50;
      }
      if (!bVar4) goto LAB_0003f9d4;
      uVar2 = uStack_44 + iStack_4c + (uint)CARRY4(local_48,local_50);
      uVar1 = *(int *)(local_2c + 0x1c) + *(int *)(local_2c + 0x14) +
              (uint)CARRY4(*(uint *)(local_2c + 0x18),*(uint *)(local_2c + 0x10));
      bVar4 = uVar1 <= uVar2;
      if (uVar2 == uVar1) {
        bVar4 = *(uint *)(local_2c + 0x18) + *(uint *)(local_2c + 0x10) <= local_48 + local_50;
      }
      if (!bVar4) {
        uVar1 = *(uint *)(local_2c + 0x10) + *(uint *)(local_2c + 0x18);
        bVar4 = CARRY4(local_50,local_48);
        uVar3 = local_50 + local_48;
        uVar2 = uVar1 - uVar3;
        bVar5 = CARRY4(uVar2,local_50);
        local_50 = uVar2 + local_50;
        iStack_4c = *(int *)(local_2c + 0x14) + *(int *)(local_2c + 0x1c) +
                    (uint)CARRY4(*(uint *)(local_2c + 0x10),*(uint *)(local_2c + 0x18)) +
                    ((-uStack_44 - (uint)bVar4) - (uint)(uVar1 < uVar3)) + (uint)bVar5;
        FUN_0004169c(local_28,local_34);
        FUN_0003edc0(param_5,local_2c);
        goto LAB_0003f9d4;
      }
      FUN_0004169c(local_28,local_34);
      FUN_0003edc0(param_5,local_2c);
    }
    local_28 = local_38;
  } while( true );
}



/* ===== FUN_0003f9fc @ 0003f9fc size=1028 ===== */

undefined4 FUN_0003f9fc(uint param_1,uint param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_2c;
  int *local_28;
  int local_24;
  
  local_24 = 0;
  local_28 = param_5;
  local_2c = 0;
  iVar1 = FUN_0003eca0(param_5);
  if (iVar1 != 0) {
    return 0;
  }
LAB_0003fc9c:
  do {
    iVar1 = local_24;
    if (*local_28 == 0) {
LAB_0003fddc:
      while( true ) {
        do {
          local_24 = iVar1;
          if (local_24 == 0) {
            return local_2c;
          }
          iVar1 = FUN_00041c30(local_24);
          iVar2 = FUN_0003ed34(local_24);
          uVar3 = *(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x14) +
                  (uint)CARRY4(*(uint *)(iVar2 + 0x18),*(uint *)(iVar2 + 0x10));
          bVar7 = uVar3 <= param_2;
          if (param_2 == uVar3) {
            bVar7 = *(uint *)(iVar2 + 0x18) + *(uint *)(iVar2 + 0x10) <= param_1;
          }
        } while (bVar7);
        uVar3 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
        bVar7 = *(uint *)(iVar2 + 0x14) <= uVar3;
        if (uVar3 == *(uint *)(iVar2 + 0x14)) {
          bVar7 = *(uint *)(iVar2 + 0x10) <= param_1 + param_3;
        }
        if (!bVar7) break;
        uVar6 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
        uVar3 = *(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x14) +
                (uint)CARRY4(*(uint *)(iVar2 + 0x18),*(uint *)(iVar2 + 0x10));
        bVar7 = uVar3 <= uVar6;
        if (uVar6 == uVar3) {
          bVar7 = *(uint *)(iVar2 + 0x18) + *(uint *)(iVar2 + 0x10) <= param_1 + param_3;
        }
        if (!bVar7) {
          uVar3 = *(uint *)(iVar2 + 0x18);
          uVar6 = *(uint *)(iVar2 + 0x10) - (param_3 + param_1);
          *(uint *)(iVar2 + 0x18) = uVar6 + uVar3;
          *(uint *)(iVar2 + 0x1c) =
               (*(int *)(iVar2 + 0x14) -
               (param_4 + param_2 + (uint)CARRY4(param_3,param_1) +
               (uint)(*(uint *)(iVar2 + 0x10) < param_3 + param_1))) + *(int *)(iVar2 + 0x1c) +
               (uint)CARRY4(uVar6,uVar3);
          *(uint *)(iVar2 + 0x10) = param_3 + param_1;
          *(uint *)(iVar2 + 0x14) = param_4 + param_2 + (uint)CARRY4(param_3,param_1);
          return 1;
        }
        FUN_0004169c(local_24,param_5);
        FUN_0003edc0(param_5,iVar2);
        local_2c = 1;
      }
      return local_2c;
    }
    local_24 = *local_28;
    iVar2 = FUN_0003ed34(local_24);
    bVar7 = *(uint *)(iVar2 + 0x14) <= param_2;
    if (param_2 == *(uint *)(iVar2 + 0x14)) {
      bVar7 = *(uint *)(iVar2 + 0x10) <= param_1;
    }
    if (!bVar7) {
      local_28 = (int *)(*local_28 + 8);
      goto LAB_0003fc9c;
    }
    uVar3 = *(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x14) +
            (uint)CARRY4(*(uint *)(iVar2 + 0x18),*(uint *)(iVar2 + 0x10));
    bVar7 = uVar3 <= param_2;
    if (param_2 == uVar3) {
      bVar7 = *(uint *)(iVar2 + 0x18) + *(uint *)(iVar2 + 0x10) <= param_1;
    }
    if (bVar7) {
      local_28 = (int *)(*local_28 + 4);
    }
    else {
      uVar3 = *(uint *)(iVar2 + 0x14);
      bVar7 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        bVar7 = *(uint *)(iVar2 + 0x10) <= param_1;
      }
      if (bVar7 && (param_2 != uVar3 || param_1 != *(uint *)(iVar2 + 0x10))) {
        uVar6 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
        uVar3 = *(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x14) +
                (uint)CARRY4(*(uint *)(iVar2 + 0x18),*(uint *)(iVar2 + 0x10));
        bVar7 = uVar3 <= uVar6;
        if (uVar6 == uVar3) {
          bVar7 = *(uint *)(iVar2 + 0x18) + *(uint *)(iVar2 + 0x10) <= param_1 + param_3;
        }
        if (!bVar7) {
          uVar4 = param_3 + param_1;
          iVar5 = param_4 + param_2 + (uint)CARRY4(param_3,param_1);
          uVar6 = *(uint *)(iVar2 + 0x18);
          iVar1 = *(int *)(iVar2 + 0x1c);
          uVar3 = *(uint *)(iVar2 + 0x10) + uVar6;
          *(uint *)(iVar2 + 0x18) = param_1 - *(uint *)(iVar2 + 0x10);
          *(uint *)(iVar2 + 0x1c) =
               param_2 - (*(int *)(iVar2 + 0x14) + (uint)(param_1 < *(uint *)(iVar2 + 0x10)));
          FUN_0003f5b8(uVar4,iVar5,uVar3 - uVar4,
                       (*(int *)(iVar2 + 0x14) + iVar1 + (uint)CARRY4(*(uint *)(iVar2 + 0x10),uVar6)
                       ) - (iVar5 + (uint)(uVar3 < uVar4)),param_5);
          return 1;
        }
      }
      uVar6 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
      uVar3 = *(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x14) +
              (uint)CARRY4(*(uint *)(iVar2 + 0x18),*(uint *)(iVar2 + 0x10));
      bVar7 = uVar3 <= uVar6;
      if (uVar6 == uVar3) {
        bVar7 = *(uint *)(iVar2 + 0x18) + *(uint *)(iVar2 + 0x10) <= param_1 + param_3;
      }
      if (bVar7) {
        *(uint *)(iVar2 + 0x18) = param_1 - *(uint *)(iVar2 + 0x10);
        *(uint *)(iVar2 + 0x1c) =
             param_2 - (*(int *)(iVar2 + 0x14) + (uint)(param_1 < *(uint *)(iVar2 + 0x10)));
        local_2c = 1;
      }
      if (*(int *)(iVar2 + 0x18) == 0 && *(int *)(iVar2 + 0x1c) == 0) {
        iVar1 = FUN_00041c30(iVar2);
        FUN_0004169c(iVar2,param_5);
        FUN_0003edc0(param_5,iVar2);
        goto LAB_0003fddc;
      }
      if (param_2 == *(uint *)(iVar2 + 0x14) && param_1 == *(uint *)(iVar2 + 0x10)) {
        uVar3 = *(uint *)(iVar2 + 0x10);
        *(uint *)(iVar2 + 0x10) = param_3 + uVar3;
        *(uint *)(iVar2 + 0x14) = param_4 + *(int *)(iVar2 + 0x14) + (uint)CARRY4(param_3,uVar3);
        uVar3 = *(uint *)(iVar2 + 0x18);
        *(uint *)(iVar2 + 0x18) = uVar3 - param_3;
        *(uint *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) - (param_4 + (uint)(uVar3 < param_3));
        return 1;
      }
    }
  } while( true );
}



/* ===== FUN_0003fe00 @ 0003fe00 size=104 ===== */

undefined4 FUN_0003fe00(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0003f5b8(param_3 - uVar2,
                       param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                                 (uint)(param_3 < uVar2)),1,0,*(undefined4 *)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_0003fe68 @ 0003fe68 size=104 ===== */

undefined4 FUN_0003fe68(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0003f9fc(param_3 - uVar2,
                       param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                                 (uint)(param_3 < uVar2)),1,0,*(undefined4 *)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_0003fed0 @ 0003fed0 size=88 ===== */

undefined4 FUN_0003fed0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0003f32c(*(undefined4 *)(param_1 + 0x30),param_4,param_3 - uVar2,
                       param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                                 (uint)(param_3 < uVar2)));
  return uVar1;
}



/* ===== FUN_0003ff28 @ 0003ff28 size=100 ===== */

void FUN_0003ff28(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  FUN_0003f5b8(param_3 - uVar1,
               param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                         (uint)(param_3 < uVar1)),param_5,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



/* ===== FUN_0003ff8c @ 0003ff8c size=100 ===== */

void FUN_0003ff8c(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  FUN_0003f9fc(param_3 - uVar1,
               param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                         (uint)(param_3 < uVar1)),param_5,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



/* ===== FUN_0003fff0 @ 0003fff0 size=472 ===== */

undefined4 FUN_0003fff0(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 local_18;
  int local_14;
  int *local_10;
  int local_c;
  
  local_c = 0;
  local_18 = 1;
  local_10 = *(int **)(param_1 + 0x30);
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar3 = param_3 - uVar4;
  uVar4 = param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                    (uint)(param_3 < uVar4));
  if ((param_5 == 0) || (iVar1 = FUN_0003eca0(local_10), iVar1 != 0)) {
    local_18 = 1;
  }
  else {
    while (*local_10 != 0) {
      local_c = *local_10;
      iVar1 = FUN_0003ed34(local_c);
      bVar6 = *(uint *)(iVar1 + 0x14) <= uVar4;
      if (uVar4 == *(uint *)(iVar1 + 0x14)) {
        bVar6 = *(uint *)(iVar1 + 0x10) <= uVar3;
      }
      if (bVar6) {
        uVar7 = (uint)*(undefined8 *)(iVar1 + 0x18);
        uVar5 = (int)((ulonglong)*(undefined8 *)(iVar1 + 0x18) >> 0x20) + *(int *)(iVar1 + 0x14) +
                (uint)CARRY4(uVar7,*(uint *)(iVar1 + 0x10));
        bVar6 = uVar5 <= uVar4;
        if (uVar4 == uVar5) {
          bVar6 = uVar7 + *(uint *)(iVar1 + 0x10) <= uVar3;
        }
        if (!bVar6) {
          return 0;
        }
        local_10 = (int *)(*local_10 + 4);
      }
      else {
        local_10 = (int *)(*local_10 + 8);
      }
    }
    local_14 = local_c;
    do {
      if (local_14 == 0) {
        return 1;
      }
      iVar1 = FUN_00041c30(local_14);
      iVar2 = FUN_0003ed34(local_14);
      uVar7 = (uint)*(undefined8 *)(iVar2 + 0x18);
      uVar5 = (int)((ulonglong)*(undefined8 *)(iVar2 + 0x18) >> 0x20) + *(int *)(iVar2 + 0x14) +
              (uint)CARRY4(uVar7,*(uint *)(iVar2 + 0x10));
      bVar6 = uVar5 <= uVar4;
      if (uVar4 == uVar5) {
        bVar6 = uVar7 + *(uint *)(iVar2 + 0x10) <= uVar3;
      }
      local_14 = iVar1;
    } while (bVar6);
    uVar8 = VectorShiftRight(CONCAT44(param_5,param_5),0x20);
    uVar5 = (uint)uVar8 + uVar3;
    uVar3 = (int)((ulonglong)uVar8 >> 0x20) + uVar4 + (uint)CARRY4((uint)uVar8,uVar3);
    uVar4 = *(uint *)(iVar2 + 0x14);
    bVar6 = uVar4 <= uVar3;
    if (uVar3 == uVar4) {
      bVar6 = *(uint *)(iVar2 + 0x10) <= uVar5;
    }
    if (bVar6 && (uVar3 != uVar4 || uVar5 != *(uint *)(iVar2 + 0x10))) {
      local_18 = 0;
    }
  }
  return local_18;
}



/* ===== FUN_000401c8 @ 000401c8 size=488 ===== */

undefined4
FUN_000401c8(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0xffffffff;
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  local_14 = 0;
  do {
    if (param_5 <= local_14) {
      if (local_18 != 0xffffffff) {
        FUN_0003f5b8((local_18 + param_3) - *(uint *)(param_1 + 0x10),
                     (((int)local_18 >> 0x1f) + param_4 + (uint)CARRY4(local_18,param_3)) -
                     (*(int *)(param_1 + 0x14) +
                     (uint)(local_18 + param_3 < *(uint *)(param_1 + 0x10))),param_5 - local_18,0,
                     uVar3);
      }
      return 0;
    }
    if ((local_14 & 7) == 0) {
      cVar1 = *(char *)(param_6 + (local_14 >> 3));
      if (cVar1 == -1) {
        if (local_18 == 0xffffffff) {
          local_18 = local_14;
        }
        local_14 = local_14 + 7;
      }
      else {
        if ((cVar1 != '\0') || (local_18 != 0xffffffff)) goto LAB_00040284;
        local_14 = local_14 + 7;
      }
    }
    else {
LAB_00040284:
      iVar2 = FUN_00028d6c(local_14,param_6);
      if (iVar2 == 0) {
        if (local_18 != 0xffffffff) {
          FUN_0003f5b8((local_18 + param_3) - *(uint *)(param_1 + 0x10),
                       (((int)local_18 >> 0x1f) + param_4 + (uint)CARRY4(local_18,param_3)) -
                       (*(int *)(param_1 + 0x14) +
                       (uint)(local_18 + param_3 < *(uint *)(param_1 + 0x10))),local_14 - local_18,0
                       ,uVar3);
          local_18 = 0xffffffff;
        }
      }
      else if (local_18 == 0xffffffff) {
        local_18 = local_14;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_000403b0 @ 000403b0 size=964 ===== */

undefined4
FUN_000403b0(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  int iStack_24;
  int *local_20;
  int local_1c;
  
  local_1c = 0;
  local_20 = *(int **)(param_1 + 0x30);
  uVar3 = param_3 - *(uint *)(param_1 + 0x10);
  uVar4 = param_4 - (*(int *)(param_1 + 0x14) + (uint)(param_3 < *(uint *)(param_1 + 0x10)));
  iVar1 = FUN_0003eca0(local_20);
  if (iVar1 != 0) {
    return 0;
  }
  while (*local_20 != 0) {
    local_1c = *local_20;
    iVar1 = FUN_0003ed34(local_1c);
    bVar7 = *(uint *)(iVar1 + 0x14) <= uVar4;
    if (uVar4 == *(uint *)(iVar1 + 0x14)) {
      bVar7 = *(uint *)(iVar1 + 0x10) <= uVar3;
    }
    if (bVar7) {
      uVar5 = *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x14) +
              (uint)CARRY4(*(uint *)(iVar1 + 0x18),*(uint *)(iVar1 + 0x10));
      bVar7 = uVar5 <= uVar4;
      if (uVar4 == uVar5) {
        bVar7 = *(uint *)(iVar1 + 0x18) + *(uint *)(iVar1 + 0x10) <= uVar3;
      }
      if (!bVar7) break;
      local_20 = (int *)(*local_20 + 4);
    }
    else {
      local_20 = (int *)(*local_20 + 8);
    }
  }
  memset(param_6,0,param_5 + 7 >> 3);
LAB_00040750:
  if (local_1c == 0) {
    return 0;
  }
  iVar1 = FUN_00041c30(local_1c);
  iVar2 = FUN_0003ed34(local_1c);
  local_30 = *(uint *)(iVar2 + 0x10);
  uStack_2c = *(uint *)(iVar2 + 0x14);
  local_28 = *(uint *)(iVar2 + 0x18);
  iStack_24 = *(int *)(iVar2 + 0x1c);
  uVar5 = uVar4 + CARRY4(uVar3,param_5);
  bVar7 = uVar5 <= uStack_2c;
  if (uStack_2c == uVar5) {
    bVar7 = uVar3 + param_5 <= local_30;
  }
  if (bVar7) {
    return 0;
  }
  bVar7 = uVar4 <= uStack_2c;
  if (uStack_2c == uVar4) {
    bVar7 = uVar3 <= local_30;
  }
  local_1c = iVar1;
  if (!bVar7) goto code_r0x00040540;
  goto LAB_00040590;
code_r0x00040540:
  uVar5 = iStack_24 + uStack_2c + (uint)CARRY4(local_28,local_30);
  bVar7 = uVar5 <= uVar4;
  if (uVar4 == uVar5) {
    bVar7 = local_28 + local_30 <= uVar3;
  }
  if (!bVar7 || uVar4 == uVar5 && uVar3 == local_28 + local_30) {
    bVar7 = CARRY4(local_30 - uVar3,local_28);
    local_28 = (local_30 - uVar3) + local_28;
    iStack_24 = (uStack_2c - (uVar4 + (local_30 < uVar3))) + iStack_24 + (uint)bVar7;
    local_30 = uVar3;
    uStack_2c = uVar4;
LAB_00040590:
    uVar6 = uStack_2c + iStack_24 + (uint)CARRY4(local_30,local_28);
    uVar5 = uVar4 + CARRY4(uVar3,param_5);
    bVar7 = uVar5 <= uVar6;
    if (uVar6 == uVar5) {
      bVar7 = uVar3 + param_5 <= local_30 + local_28;
    }
    if (bVar7 && (uVar6 != uVar5 || local_30 + local_28 != uVar3 + param_5)) {
      local_28 = (param_5 + uVar3) - local_30;
      iStack_24 = (uVar4 + CARRY4(param_5,uVar3)) - (uStack_2c + (param_5 + uVar3 < local_30));
    }
    while (local_28 != 0 || iStack_24 != 0) {
      if ((iStack_24 == 0 && local_28 < 8) || ((local_30 - uVar3 & 7) != 0)) {
        FUN_00017fac(local_30 - uVar3,uStack_2c - (uVar4 + (local_30 < uVar3)),param_6);
        bVar7 = 0xfffffffe < local_30;
        local_30 = local_30 + 1;
        uStack_2c = uStack_2c + bVar7;
        bVar7 = local_28 == 0;
        local_28 = local_28 - 1;
        iStack_24 = iStack_24 - (uint)bVar7;
      }
      else {
        uVar6 = local_28 >> 3;
        memset((void *)((int)param_6 +
                       (local_30 - uVar3 >> 3 |
                       (uStack_2c - (uVar4 + (local_30 < uVar3))) * 0x20000000)),0xff,
               uVar6 | iStack_24 << 0x1d);
        uVar5 = uVar6 * 8;
        bVar7 = CARRY4(uVar5,local_30);
        local_30 = uVar5 + local_30;
        uStack_2c = ((int)uVar5 >> 0x1f) + uStack_2c + (uint)bVar7;
        bVar7 = local_28 < uVar6 * 8;
        local_28 = local_28 + uVar6 * -8;
        iStack_24 = iStack_24 - (((int)(uVar6 * 8) >> 0x1f) + (uint)bVar7);
      }
    }
  }
  goto LAB_00040750;
}



/* ===== FUN_00040774 @ 00040774 size=88 ===== */

void FUN_00040774(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  FUN_0003ef14(iVar1);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}



/* ===== FUN_000407cc @ 000407cc size=476 ===== */

undefined4
FUN_000407cc(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6,
            int *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *local_14;
  
  local_14 = *(int **)(param_1 + 0x30);
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3 - uVar3;
  uVar4 = param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                    (uint)(param_3 < uVar3));
  uVar5 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar3 = param_5 - uVar5;
  uVar5 = param_6 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                    (uint)(param_5 < uVar5));
  bVar8 = uVar5 <= uVar4;
  if (uVar4 == uVar5) {
    bVar8 = uVar3 <= uVar2;
  }
  if (!bVar8 || uVar4 == uVar5 && uVar2 == uVar3) {
    iVar1 = FUN_0003eca0(local_14);
    if (iVar1 == 0) {
      while (*local_14 != 0) {
        iVar1 = FUN_0003ed34(*local_14);
        bVar8 = *(uint *)(iVar1 + 0x14) <= uVar4;
        if (uVar4 == *(uint *)(iVar1 + 0x14)) {
          bVar8 = *(uint *)(iVar1 + 0x10) <= uVar2;
        }
        if (bVar8) {
          uVar9 = (uint)*(undefined8 *)(iVar1 + 0x18);
          uVar7 = (int)((ulonglong)*(undefined8 *)(iVar1 + 0x18) >> 0x20) + *(int *)(iVar1 + 0x14) +
                  (uint)CARRY4(uVar9,*(uint *)(iVar1 + 0x10));
          bVar8 = uVar7 <= uVar4;
          if (uVar4 == uVar7) {
            bVar8 = uVar9 + *(uint *)(iVar1 + 0x10) <= uVar2;
          }
          if (!bVar8) {
            uVar4 = (uint)*(undefined8 *)(iVar1 + 0x18);
            uVar2 = (int)((ulonglong)*(undefined8 *)(iVar1 + 0x18) >> 0x20) + *(int *)(iVar1 + 0x14)
                    + (uint)CARRY4(uVar4,*(uint *)(iVar1 + 0x10));
            bVar8 = uVar2 <= uVar5;
            if (uVar5 == uVar2) {
              bVar8 = uVar4 + *(uint *)(iVar1 + 0x10) <= uVar3;
            }
            if (bVar8) {
              uVar10 = *(undefined8 *)(iVar1 + 0x10);
              uVar3 = *(uint *)(iVar1 + 0x18);
              iVar1 = *(int *)(iVar1 + 0x1c);
              uVar4 = (uint)uVar10;
              uVar2 = uVar4 + uVar3;
              uVar11 = *(undefined8 *)(param_1 + 0x10);
              uVar5 = (uint)uVar11;
              *param_7 = uVar5 + uVar2;
              param_7[1] = (int)((ulonglong)uVar11 >> 0x20) +
                           (int)((ulonglong)uVar10 >> 0x20) + iVar1 + (uint)CARRY4(uVar4,uVar3) +
                           (uint)CARRY4(uVar5,uVar2);
              return 0;
            }
            return 2;
          }
          local_14 = (int *)(*local_14 + 4);
        }
        else {
          local_14 = (int *)(*local_14 + 8);
        }
      }
      *(ulonglong *)param_7 =
           CONCAT44(uVar4 + *(int *)(param_1 + 0x14) + (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x10))
                    ,uVar2 + *(uint *)(param_1 + 0x10));
      uVar6 = 0;
    }
    else {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 0x16;
  }
  return uVar6;
}



/* ===== FUN_000409a8 @ 000409a8 size=524 ===== */

undefined4
FUN_000409a8(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6,
            int *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  int local_1c;
  int *local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = *(int **)(param_1 + 0x30);
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3 - uVar3;
  uVar4 = param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                    (uint)(param_3 < uVar3));
  uVar5 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar3 = param_5 - uVar5;
  uVar5 = param_6 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                    (uint)(param_5 < uVar5));
  bVar8 = uVar5 <= uVar4;
  if (uVar4 == uVar5) {
    bVar8 = uVar3 <= uVar2;
  }
  if (!bVar8 || uVar4 == uVar5 && uVar2 == uVar3) {
    iVar1 = FUN_0003eca0(local_18);
    if (iVar1 == 0) {
      while (*local_18 != 0) {
        local_14 = *local_18;
        iVar1 = FUN_0003ed34(local_14);
        bVar8 = *(uint *)(iVar1 + 0x14) <= uVar4;
        if (uVar4 == *(uint *)(iVar1 + 0x14)) {
          bVar8 = *(uint *)(iVar1 + 0x10) <= uVar2;
        }
        if (bVar8) {
          uVar9 = (uint)*(undefined8 *)(iVar1 + 0x18);
          uVar7 = (int)((ulonglong)*(undefined8 *)(iVar1 + 0x18) >> 0x20) + *(int *)(iVar1 + 0x14) +
                  (uint)CARRY4(uVar9,*(uint *)(iVar1 + 0x10));
          bVar8 = uVar7 <= uVar4;
          if (uVar4 == uVar7) {
            bVar8 = uVar9 + *(uint *)(iVar1 + 0x10) <= uVar2;
          }
          if (!bVar8) {
            *(ulonglong *)param_7 =
                 CONCAT44(uVar4 + *(int *)(param_1 + 0x14) +
                          (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x10)),
                          uVar2 + *(uint *)(param_1 + 0x10));
            return 0;
          }
          local_18 = (int *)(*local_18 + 4);
        }
        else {
          local_18 = (int *)(*local_18 + 8);
        }
      }
      local_1c = FUN_0003ed34(local_14);
      uVar7 = *(uint *)(local_1c + 0x14);
      bVar8 = uVar7 <= uVar4;
      if (uVar4 == uVar7) {
        bVar8 = *(uint *)(local_1c + 0x10) <= uVar2;
      }
      if (bVar8 && (uVar4 != uVar7 || uVar2 != *(uint *)(local_1c + 0x10))) {
        iVar1 = FUN_00041c30(local_14);
        if (iVar1 == 0) {
          return 2;
        }
        local_1c = FUN_0003ed34(iVar1);
      }
      bVar8 = *(uint *)(local_1c + 0x14) <= uVar5;
      if (uVar5 == *(uint *)(local_1c + 0x14)) {
        bVar8 = *(uint *)(local_1c + 0x10) <= uVar3;
      }
      if (bVar8) {
        uVar2 = *(uint *)(local_1c + 0x10);
        iVar1 = *(int *)(local_1c + 0x14);
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        uVar3 = (uint)uVar10;
        *param_7 = uVar3 + uVar2;
        param_7[1] = (int)((ulonglong)uVar10 >> 0x20) + iVar1 + (uint)CARRY4(uVar3,uVar2);
        uVar6 = 0;
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 0x16;
  }
  return uVar6;
}



/* ===== FUN_00040bb4 @ 00040bb4 size=656 ===== */

void FUN_00040bb4(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  int iStack_24;
  int local_1c;
  
  local_28 = 0;
  iStack_24 = 0;
  local_30 = 0;
  local_38 = 0xffffffff;
  local_40 = 0;
  iStack_3c = 0;
  uVar6 = 0;
  local_1c = FUN_00041b70(*(undefined4 *)(param_1 + 0x30));
  while( true ) {
    if (local_1c == 0) break;
    iVar1 = FUN_0003ed34(local_1c);
    bVar3 = 0xfffffffe < local_28;
    local_28 = local_28 + 1;
    iStack_24 = iStack_24 + (uint)bVar3;
    bVar3 = *(uint *)(iVar1 + 0x1c) <= local_30._4_4_;
    if (local_30._4_4_ == *(uint *)(iVar1 + 0x1c)) {
      bVar3 = *(uint *)(iVar1 + 0x18) <= (uint)local_30;
    }
    if (!bVar3) {
      local_30 = *(undefined8 *)(iVar1 + 0x18);
    }
    uVar2 = *(uint *)(iVar1 + 0x1c);
    bVar3 = uVar2 <= local_38._4_4_;
    if (local_38._4_4_ == uVar2) {
      bVar3 = *(uint *)(iVar1 + 0x18) <= (uint)local_38;
    }
    if (bVar3 && (local_38._4_4_ != uVar2 || (uint)local_38 != *(uint *)(iVar1 + 0x18))) {
      local_38 = *(undefined8 *)(iVar1 + 0x18);
    }
    uVar2 = (uint)*(undefined8 *)(iVar1 + 0x18);
    bVar3 = CARRY4(uVar2,local_40);
    local_40 = uVar2 + local_40;
    iStack_3c = (int)((ulonglong)*(undefined8 *)(iVar1 + 0x18) >> 0x20) + iStack_3c + (uint)bVar3;
    local_1c = FUN_00041c30(local_1c);
  }
  if (local_28 != 0 || iStack_24 != 0) {
    uVar6 = FUN_00043218(local_40,iStack_3c,local_28,iStack_24);
  }
  uStack_44 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_48 = (undefined4)uVar6;
  if (local_38._4_4_ == 0 && (uint)local_38 == 0xffffffff) {
    local_38 = 0;
  }
  dVar4 = (double)FUN_000431a4(local_28 << 8,
                               (iStack_24 << 5 | local_28 >> 0x1b) << 3 |
                               (local_28 & 0x7ffffff) >> 0x18);
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  dVar5 = (double)FUN_000431a4(*(uint *)(param_1 + 0x20) - uVar2,
                               *(int *)(param_1 + 0x24) -
                               ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                               (uint)(*(uint *)(param_1 + 0x20) < uVar2)));
  fprintf(stderr,"%16llu extents (%llu bytes)\n",local_28,iStack_24,local_28 * 0x20 + 0x10,
          (iStack_24 << 5 | local_28 >> 0x1b) + (uint)(0xffffffef < local_28 * 0x20));
  fprintf(stderr,"%16llu bits minimum size\n",(uint)local_38,local_38._4_4_);
  fprintf(stderr,"%16llu bits maximum size\n%16llu bits average size\n",(uint)local_30,
          local_30._4_4_,local_48,uStack_44);
  fprintf(stderr,"%16llu bits set in bitmap (out of %llu)\n",local_40,iStack_3c,
          *(uint *)(param_1 + 0x20) - *(uint *)(param_1 + 0x10),
          *(int *)(param_1 + 0x24) -
          (*(int *)(param_1 + 0x14) + (uint)(*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x10)))
         );
  local_58 = SUB84(dVar4 / dVar5,0);
  uStack_54 = (undefined4)((ulonglong)(dVar4 / dVar5) >> 0x20);
  fprintf(stderr,"%16.4lf memory / bitmap bit memory ratio (bitarray = 1)\n",local_58,uStack_54);
  return;
}



/* ===== FUN_00040e44 @ 00040e44 size=64 ===== */

void FUN_00040e44(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 3 | param_2;
  return;
}



/* ===== FUN_00040e84 @ 00040e84 size=64 ===== */

void FUN_00040e84(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xfffffffe | param_2;
  return;
}



/* ===== FUN_00040ec4 @ 00040ec4 size=224 ===== */

void FUN_00040ec4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_1 & 0xfffffffc;
  param_1[1] = *(uint *)(uVar1 + 8);
  if (param_1[1] != 0) {
    FUN_00040e44(*(undefined4 *)(uVar1 + 8),param_1);
  }
  *(uint **)(uVar1 + 8) = param_1;
  FUN_00040e44(uVar1,uVar2);
  if (uVar2 == 0) {
    *param_2 = uVar1;
  }
  else if (param_1 == *(uint **)(uVar2 + 8)) {
    *(uint *)(uVar2 + 8) = uVar1;
  }
  else {
    *(uint *)(uVar2 + 4) = uVar1;
  }
  FUN_00040e44(param_1,uVar1);
  return;
}



/* ===== FUN_00040fa4 @ 00040fa4 size=224 ===== */

void FUN_00040fa4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = *param_1 & 0xfffffffc;
  param_1[2] = *(uint *)(uVar1 + 4);
  if (param_1[2] != 0) {
    FUN_00040e44(*(undefined4 *)(uVar1 + 4),param_1);
  }
  *(uint **)(uVar1 + 4) = param_1;
  FUN_00040e44(uVar1,uVar2);
  if (uVar2 == 0) {
    *param_2 = uVar1;
  }
  else if (param_1 == *(uint **)(uVar2 + 4)) {
    *(uint *)(uVar2 + 4) = uVar1;
  }
  else {
    *(uint *)(uVar2 + 8) = uVar1;
  }
  FUN_00040e44(param_1,uVar1);
  return;
}



/* ===== FUN_00041084 @ 00041084 size=544 ===== */

void FUN_00041084(uint *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *local_1c;
  uint *local_14;
  
  local_1c = param_1;
  while ((puVar2 = (uint *)(*local_1c & 0xfffffffc), puVar2 != (uint *)0x0 && ((*puVar2 & 1) == 0)))
  {
    puVar1 = (uint *)(*puVar2 & 0xfffffffc);
    local_14 = puVar2;
    if (puVar2 == (uint *)puVar1[2]) {
      puVar3 = (uint *)puVar1[1];
      if ((puVar3 == (uint *)0x0) || ((*puVar3 & 1) != 0)) {
        if (local_1c == (uint *)puVar2[1]) {
          FUN_00040ec4(puVar2,param_2);
          local_14 = local_1c;
          local_1c = puVar2;
        }
        *local_14 = *local_14 | 1;
        *puVar1 = *puVar1 & 0xfffffffe;
        FUN_00040fa4(puVar1,param_2);
      }
      else {
        *puVar3 = *puVar3 | 1;
        *puVar2 = *puVar2 | 1;
        *puVar1 = *puVar1 & 0xfffffffe;
        local_1c = puVar1;
      }
    }
    else {
      puVar3 = (uint *)puVar1[2];
      if ((puVar3 == (uint *)0x0) || ((*puVar3 & 1) != 0)) {
        if (local_1c == (uint *)puVar2[2]) {
          FUN_00040fa4(puVar2,param_2);
          local_14 = local_1c;
          local_1c = puVar2;
        }
        *local_14 = *local_14 | 1;
        *puVar1 = *puVar1 & 0xfffffffe;
        FUN_00040ec4(puVar1,param_2);
      }
      else {
        *puVar3 = *puVar3 | 1;
        *puVar2 = *puVar2 | 1;
        *puVar1 = *puVar1 & 0xfffffffe;
        local_1c = puVar1;
      }
    }
  }
  *(uint *)*param_2 = *(uint *)*param_2 | 1;
  return;
}



/* ===== FUN_000412a4 @ 000412a4 size=1016 ===== */

void FUN_000412a4(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint *local_18;
  uint *local_14;
  uint *local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  do {
    while( true ) {
      if (((local_14 != (uint *)0x0) && ((*local_14 & 1) == 0)) || (local_14 == (uint *)*param_3))
      goto LAB_00041670;
      if (local_14 == (uint *)local_18[2]) break;
      local_c = (uint *)local_18[2];
      if ((*local_c & 1) == 0) {
        *local_c = *local_c | 1;
        *local_18 = *local_18 & 0xfffffffe;
        FUN_00040fa4(local_18,param_3);
        local_c = (uint *)local_18[2];
      }
      if (((local_c[2] != 0) && ((*(uint *)local_c[2] & 1) == 0)) ||
         ((local_c[1] != 0 && ((*(uint *)local_c[1] & 1) == 0)))) {
        if ((local_c[2] == 0) || ((*(uint *)local_c[2] & 1) != 0)) {
          *(uint *)local_c[1] = *(uint *)local_c[1] | 1;
          *local_c = *local_c & 0xfffffffe;
          FUN_00040ec4(local_c,param_3);
          local_c = (uint *)local_18[2];
        }
        FUN_00040e84(local_c,*local_18 & 1);
        *local_18 = *local_18 | 1;
        *(uint *)local_c[2] = *(uint *)local_c[2] | 1;
        FUN_00040fa4(local_18,param_3);
        local_14 = (uint *)*param_3;
LAB_00041670:
        if (local_14 != (uint *)0x0) {
          *local_14 = *local_14 | 1;
        }
        return;
      }
      *local_c = *local_c & 0xfffffffe;
      local_14 = local_18;
      local_18 = (uint *)(*local_18 & 0xfffffffc);
    }
    local_c = (uint *)local_18[1];
    if ((*local_c & 1) == 0) {
      *local_c = *local_c | 1;
      *local_18 = *local_18 & 0xfffffffe;
      FUN_00040ec4(local_18,param_3);
      local_c = (uint *)local_18[1];
    }
    if (((local_c[2] != 0) && ((*(uint *)local_c[2] & 1) == 0)) ||
       ((local_c[1] != 0 && ((*(uint *)local_c[1] & 1) == 0)))) {
      if ((local_c[1] == 0) || ((*(uint *)local_c[1] & 1) != 0)) {
        *(uint *)local_c[2] = *(uint *)local_c[2] | 1;
        *local_c = *local_c & 0xfffffffe;
        FUN_00040fa4(local_c,param_3);
        local_c = (uint *)local_18[1];
      }
      FUN_00040e84(local_c,*local_18 & 1);
      *local_18 = *local_18 | 1;
      *(uint *)local_c[1] = *(uint *)local_c[1] | 1;
      FUN_00040ec4(local_18,param_3);
      local_14 = (uint *)*param_3;
      goto LAB_00041670;
    }
    *local_c = *local_c & 0xfffffffe;
    local_14 = local_18;
    local_18 = (uint *)(*local_18 & 0xfffffffc);
  } while( true );
}



/* ===== FUN_0004169c @ 0004169c size=628 ===== */

void FUN_0004169c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *local_24;
  uint local_14;
  uint *local_10;
  uint local_c;
  
  if (param_1[2] == 0) {
    local_c = param_1[1];
  }
  else {
    if (param_1[1] != 0) {
      puVar1 = (uint *)param_1[1];
      do {
        local_24 = puVar1;
        puVar1 = (uint *)local_24[2];
      } while ((uint *)local_24[2] != (uint *)0x0);
      if ((*param_1 & 0xfffffffc) == 0) {
        *param_2 = (uint)local_24;
      }
      else if (param_1 == *(uint **)((*param_1 & 0xfffffffc) + 8)) {
        *(uint **)((*param_1 & 0xfffffffc) + 8) = local_24;
      }
      else {
        *(uint **)((*param_1 & 0xfffffffc) + 4) = local_24;
      }
      local_c = local_24[1];
      local_10 = (uint *)(*local_24 & 0xfffffffc);
      local_14 = *local_24 & 1;
      if (local_10 == param_1) {
        local_10 = local_24;
      }
      else {
        if (local_c != 0) {
          FUN_00040e44(local_c,local_10);
        }
        local_10[2] = local_c;
        local_24[1] = param_1[1];
        FUN_00040e44(param_1[1],local_24);
      }
      *local_24 = *param_1;
      local_24[2] = param_1[2];
      FUN_00040e44(param_1[2],local_24);
      goto LAB_000418e8;
    }
    local_c = param_1[2];
  }
  local_10 = (uint *)(*param_1 & 0xfffffffc);
  local_14 = *param_1 & 1;
  if (local_c != 0) {
    FUN_00040e44(local_c,local_10);
  }
  if (local_10 == (uint *)0x0) {
    *param_2 = local_c;
  }
  else if (param_1 == (uint *)local_10[2]) {
    local_10[2] = local_c;
  }
  else {
    local_10[1] = local_c;
  }
LAB_000418e8:
  if (local_14 == 1) {
    FUN_000412a4(local_c,local_10,param_2);
  }
  return;
}



/* ===== FUN_00041910 @ 00041910 size=196 ===== */

void FUN_00041910(uint *param_1,code *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *local_14;
  
  local_14 = param_1;
  while( true ) {
    (*param_2)(local_14,param_3);
    puVar1 = (uint *)(*local_14 & 0xfffffffc);
    if (puVar1 == (uint *)0x0) break;
    if ((local_14 == (uint *)puVar1[2]) && (puVar1[1] != 0)) {
      (*param_2)(puVar1[1],param_3);
      local_14 = puVar1;
    }
    else {
      local_14 = puVar1;
      if (puVar1[2] != 0) {
        (*param_2)(puVar1[2],param_3);
      }
    }
  }
  return;
}



/* ===== FUN_000419d4 @ 000419d4 size=112 ===== */

void FUN_000419d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_c = param_1;
    if (*(int *)(param_1 + 4) != 0) {
      local_c = *(int *)(param_1 + 4);
    }
  }
  else {
    local_c = *(int *)(param_1 + 8);
  }
  FUN_00041910(local_c,param_2,param_3);
  return;
}



/* ===== FUN_00041a44 @ 00041a44 size=236 ===== */

uint * FUN_00041a44(uint *param_1)

{
  uint *local_c;
  
  if ((param_1[1] == 0) && (param_1[2] == 0)) {
    local_c = (uint *)(*param_1 & 0xfffffffc);
  }
  else if (param_1[1] == 0) {
    local_c = (uint *)param_1[2];
  }
  else if (param_1[2] == 0) {
    local_c = (uint *)param_1[1];
  }
  else {
    local_c = (uint *)FUN_00041c30(param_1);
    if (local_c[1] == 0) {
      if (param_1 != (uint *)(*local_c & 0xfffffffc)) {
        local_c = (uint *)(*local_c & 0xfffffffc);
      }
    }
    else {
      local_c = (uint *)local_c[1];
    }
  }
  return local_c;
}



/* ===== FUN_00041b30 @ 00041b30 size=64 ===== */

void FUN_00041b30(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    FUN_00041910(param_1,param_2,param_3);
  }
  return;
}



/* ===== FUN_00041b70 @ 00041b70 size=96 ===== */

int FUN_00041b70(int *param_1)

{
  undefined4 local_c;
  
  local_c = *param_1;
  if (local_c == 0) {
    local_c = 0;
  }
  else {
    for (; *(int *)(local_c + 8) != 0; local_c = *(int *)(local_c + 8)) {
    }
  }
  return local_c;
}



/* ===== FUN_00041bd0 @ 00041bd0 size=96 ===== */

int FUN_00041bd0(int *param_1)

{
  undefined4 local_c;
  
  local_c = *param_1;
  if (local_c == 0) {
    local_c = 0;
  }
  else {
    for (; *(int *)(local_c + 4) != 0; local_c = *(int *)(local_c + 4)) {
    }
  }
  return local_c;
}



/* ===== FUN_00041c30 @ 00041c30 size=196 ===== */

uint * FUN_00041c30(uint *param_1)

{
  uint *puVar1;
  bool bVar2;
  uint *local_14;
  
  if (param_1 == (uint *)(*param_1 & 0xfffffffc)) {
    local_14 = (uint *)0x0;
  }
  else {
    local_14 = param_1;
    if (param_1[1] == 0) {
      do {
        puVar1 = (uint *)(*local_14 & 0xfffffffc);
        if (puVar1 == (uint *)0x0) {
          return (uint *)0x0;
        }
        bVar2 = local_14 == (uint *)puVar1[1];
        local_14 = puVar1;
      } while (bVar2);
    }
    else {
      for (local_14 = (uint *)param_1[1]; local_14[2] != 0; local_14 = (uint *)local_14[2]) {
      }
    }
  }
  return local_14;
}



/* ===== FUN_00041cf4 @ 00041cf4 size=196 ===== */

uint * FUN_00041cf4(uint *param_1)

{
  uint *puVar1;
  bool bVar2;
  uint *local_14;
  
  if (param_1 == (uint *)(*param_1 & 0xfffffffc)) {
    local_14 = (uint *)0x0;
  }
  else {
    local_14 = param_1;
    if (param_1[2] == 0) {
      do {
        puVar1 = (uint *)(*local_14 & 0xfffffffc);
        if (puVar1 == (uint *)0x0) {
          return (uint *)0x0;
        }
        bVar2 = local_14 == (uint *)puVar1[2];
        local_14 = puVar1;
      } while (bVar2);
    }
    else {
      for (local_14 = (uint *)param_1[2]; local_14[1] != 0; local_14 = (uint *)local_14[1]) {
      }
    }
  }
  return local_14;
}



/* ===== FUN_00041db8 @ 00041db8 size=216 ===== */

void FUN_00041db8(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1 & 0xfffffffc;
  if (uVar2 == 0) {
    *param_3 = param_2;
  }
  else if (param_1 == *(uint **)(uVar2 + 8)) {
    *(uint **)(uVar2 + 8) = param_2;
  }
  else {
    *(uint **)(uVar2 + 4) = param_2;
  }
  if (param_1[2] != 0) {
    FUN_00040e44(param_1[2],param_2);
  }
  if (param_1[1] != 0) {
    FUN_00040e44(param_1[1],param_2);
  }
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}



/* ===== FUN_00041e90 @ 00041e90 size=28 ===== */

undefined4 FUN_00041e90(void)

{
  return 0;
}



/* ===== FUN_00041eac @ 00041eac size=28 ===== */

undefined4 FUN_00041eac(void)

{
  return 0;
}



/* ===== FUN_00041f0c @ 00041f0c size=1012 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00041f0c(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  char *local_18;
  undefined4 *local_10;
  uint local_c;
  
  local_c = param_1 & 0xff;
  param_1 = param_1 - local_c;
  if (param_1 == 0) {
    pcVar4 = strerror(local_c);
    if (pcVar4 != (char *)0x0) {
      return pcVar4;
    }
  }
  else {
    FUN_00041e90();
    for (local_10 = DAT_0005a394; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_00041eac();
          if (DAT_0005a39c == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_0005a39c)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    for (local_10 = DAT_0005a398; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_00041eac();
          if (DAT_0005a39c == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_0005a39c)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    FUN_00041eac();
  }
  uVar3 = ram0x00049e14;
  uVar2 = s_Unknown_code_00049e08._8_4_;
  uVar1 = s_Unknown_code_00049e08._4_4_;
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  pcVar4 = (char *)(iVar6 + DAT_00042300);
  *(undefined4 *)pcVar4 = s_Unknown_code_00049e08._0_4_;
  *(undefined4 *)(pcVar4 + 4) = uVar1;
  *(undefined4 *)(pcVar4 + 8) = uVar2;
  *(short *)(pcVar4 + 0xc) = (short)uVar3;
  if (param_1 != 0) {
    pcVar4 = (char *)FUN_00042800(param_1);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    strcat((char *)(iVar6 + DAT_00042300),pcVar4);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    sVar5 = strlen((char *)(iVar6 + DAT_00042300));
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined2 *)(sVar5 + iVar6 + DAT_00042300) = DAT_00049e18;
  }
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  for (local_18 = (char *)(iVar6 + DAT_00042300); *local_18 != '\0'; local_18 = local_18 + 1) {
  }
  if (local_c < 100) {
    pcVar4 = local_18;
    if (local_c < 10) goto LAB_000422bc;
  }
  else {
    *local_18 = (char)(local_c / 100) + '0';
    local_c = local_c % 100;
    pcVar4 = local_18 + 1;
  }
  local_18 = pcVar4 + 1;
  *pcVar4 = (char)(local_c / 10) + '0';
  local_c = local_c % 10;
LAB_000422bc:
  *local_18 = (char)local_c + '0';
  local_18[1] = '\0';
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return (char *)(iVar6 + DAT_00042300);
}



/* ===== FUN_00042304 @ 00042304 size=144 ===== */

undefined4 FUN_00042304(undefined4 param_1)

{
  __uid_t _Var1;
  __uid_t _Var2;
  __gid_t _Var3;
  __gid_t _Var4;
  int iVar5;
  undefined4 uVar6;
  
  _Var1 = getuid();
  _Var2 = geteuid();
  if (_Var1 == _Var2) {
    _Var3 = getgid();
    _Var4 = getegid();
    if (_Var3 == _Var4) {
      iVar5 = prctl(3,0,0,0,0);
      if (iVar5 == 0) {
        return 0;
      }
      uVar6 = secure_getenv(param_1);
      return uVar6;
    }
  }
  return 0;
}



/* ===== FUN_00042394 @ 00042394 size=472 ===== */

void FUN_00042394(void)

{
  int *piVar1;
  char *local_1c;
  uint local_18;
  int local_14;
  char *local_10;
  char *local_c;
  
  if ((DAT_0005a3a0 & 0x8000) == 0) {
    local_c = getenv("COMERR_DEBUG");
    if ((local_c != (char *)0x0) &&
       ((DAT_0005a3a0 = strtoul(local_c,&local_1c,0), *local_1c != '\0' ||
        (piVar1 = __errno_location(), *piVar1 != 0)))) {
      DAT_0005a3a0 = 0;
    }
    DAT_0005a3a0 = DAT_0005a3a0 | 0x8000;
    if (DAT_0005a3a0 != 0x8000) {
      local_10 = (char *)FUN_00042304("COMERR_DEBUG_FILE");
      if (local_10 != (char *)0x0) {
        DAT_0005a3a4 = fopen(local_10,"a");
      }
      if (DAT_0005a3a4 == (FILE *)0x0) {
        DAT_0005a3a4 = fopen("/dev/tty","a");
      }
      if (DAT_0005a3a4 == (FILE *)0x0) {
        DAT_0005a3a0 = 0x8000;
      }
      else {
        local_14 = fileno(DAT_0005a3a4);
        if ((-1 < local_14) && (local_18 = fcntl(local_14,1), -1 < (int)local_18)) {
          fcntl(local_14,2,local_18 | 1);
        }
      }
    }
  }
  return;
}



/* ===== FUN_0004256c @ 0004256c size=240 ===== */

int FUN_0004256c(int param_1)

{
  FILE *__stream;
  undefined4 *__ptr;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  __ptr = malloc(8);
  if (__ptr == (undefined4 *)0x0) {
    iVar3 = 0xc;
  }
  else {
    iVar3 = FUN_00041e90();
    if (iVar3 == 0) {
      __ptr[1] = param_1;
      *__ptr = DAT_0005a398;
      DAT_0005a398 = __ptr;
      FUN_00042394();
      __stream = DAT_0005a3a4;
      if ((DAT_0005a3a0 & 1) != 0) {
        uVar2 = FUN_00042800(*(undefined4 *)(param_1 + 4));
        fprintf(__stream,"add_error_table: %s (0x%p)\n",uVar2,param_1);
      }
      FUN_00041eac();
      iVar3 = 0;
    }
    else {
      free(__ptr);
      piVar1 = __errno_location();
      iVar3 = *piVar1;
    }
  }
  return iVar3;
}



/* ===== FUN_0004265c @ 0004265c size=376 ===== */

undefined4 FUN_0004265c(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_18;
  undefined4 *local_14;
  
  local_18 = (undefined4 *)0x0;
  iVar2 = FUN_00041e90();
  if (iVar2 == 0) {
    local_14 = DAT_0005a398;
    FUN_00042394();
    pFVar1 = DAT_0005a3a4;
    for (; local_14 != (undefined4 *)0x0; local_14 = (undefined4 *)*local_14) {
      if (*(int *)(local_14[1] + 4) == *(int *)(param_1 + 4)) {
        if (local_18 == (undefined4 *)0x0) {
          DAT_0005a398 = (undefined4 *)*local_14;
        }
        else {
          *local_18 = *local_14;
        }
        free(local_14);
        pFVar1 = DAT_0005a3a4;
        if ((DAT_0005a3a0 & 1) != 0) {
          uVar3 = FUN_00042800(*(undefined4 *)(param_1 + 4));
          fprintf(pFVar1,"remove_error_table: %s (0x%p)\n",uVar3,param_1);
        }
        FUN_00041eac();
        return 0;
      }
      local_18 = local_14;
    }
    if ((DAT_0005a3a0 & 1) != 0) {
      uVar3 = FUN_00042800(*(undefined4 *)(param_1 + 4));
      fprintf(pFVar1,"remove_error_table FAILED: %s (0x%p)\n",uVar3,param_1);
    }
    FUN_00041eac();
  }
  return 2;
}



/* ===== FUN_000427d4 @ 000427d4 size=44 ===== */

void FUN_000427d4(int param_1)

{
  FUN_0004256c(*(undefined4 *)(param_1 + 4));
  return;
}



/* ===== FUN_00042800 @ 00042800 size=200 ===== */

undefined1 * FUN_00042800(int param_1)

{
  uint uVar1;
  undefined1 *local_10;
  int local_c;
  
  local_10 = &DAT_0005a3a8;
  for (local_c = 4; -1 < local_c; local_c = local_c + -1) {
    uVar1 = (int)(param_1 >> 8 & 0xffffffU) >> (local_c * 6 & 0xffU) & 0x3f;
    if (uVar1 != 0) {
      *local_10 = (&DAT_00049eb3)[uVar1];
      local_10 = local_10 + 1;
    }
  }
  *local_10 = 0;
  return &DAT_0005a3a8;
}



/* ===== FUN_000428c8 @ 000428c8 size=616 ===== */

void FUN_000428c8(char *param_1,int param_2,char *param_3,__gnuc_va_list param_4)

{
  char *pcVar1;
  int iVar2;
  termios tStack_54;
  FILE *local_18;
  FILE *local_14;
  int local_10;
  int local_c;
  
  local_c = 1;
  local_10 = fileno(stderr);
  if (param_1 != (char *)0x0) {
    fputs(param_1,stderr);
    fwrite(&DAT_00049ef4,1,2,stderr);
  }
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_00041f0c(param_2);
    fputs(pcVar1,stderr);
    fputc(0x20,stderr);
  }
  if (param_3 != (char *)0x0) {
    vfprintf(stderr,param_3,param_4);
  }
  iVar2 = isatty(local_10);
  if (iVar2 == 0) {
    local_c = 0;
  }
  else {
    iVar2 = tcgetattr(local_10,&tStack_54);
    if (((iVar2 == 0) && ((tStack_54.c_oflag & 1) != 0)) && ((tStack_54.c_oflag & 4) != 0)) {
      local_c = 0;
    }
  }
  if (local_c != 0) {
    local_14 = stderr;
    if (stderr->_chain == (_IO_FILE *)0x0) {
      fputc(0xd,stderr);
    }
    else if (stderr->_IO_write_base < stderr->_IO_buf_base) {
      pcVar1 = stderr->_IO_write_base;
      stderr->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\r';
    }
    else {
      __fputc_unlocked(0xd,stderr);
    }
  }
  local_18 = stderr;
  if (stderr->_chain == (_IO_FILE *)0x0) {
    fputc(10,stderr);
  }
  else if (stderr->_IO_write_base < stderr->_IO_buf_base) {
    pcVar1 = stderr->_IO_write_base;
    stderr->_IO_write_base = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __fputc_unlocked(10,stderr);
  }
  fflush(stderr);
  return;
}



/* ===== FUN_00042b30 @ 00042b30 size=72 ===== */

void FUN_00042b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_0005a340)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00042b78 @ 00042b78 size=112 ===== */

void FUN_00042b78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  if (DAT_0005a340 == (code *)0x0) {
    DAT_0005a340 = FUN_000428c8;
  }
  uStack_4 = param_4;
  FUN_00042b30(param_1,param_2,param_3,&uStack_4);
  return;
}



/* ===== FUN_00042c94 @ 00042c94 size=168 ===== */

ulonglong FUN_00042c94(uint param_1,uint param_2)

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



/* ===== FUN_00042d3c @ 00042d3c size=32 ===== */

void FUN_00042d3c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00042c94();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00042d5c @ 00042d5c size=220 ===== */

ulonglong FUN_00042d5c(uint param_1,uint param_2)

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



/* ===== FUN_000431a4 @ 000431a4 size=372 ===== */

ulonglong FUN_000431a4(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar11 = 0x432;
  uVar10 = 0;
  if (param_2 >> 0x16 != 0) {
    iVar11 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar11 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar11 = iVar11 + 3;
    }
    iVar11 = iVar11 - ((int)param_2 >> 0x1f);
    uVar10 = param_1 << (0x20U - iVar11 & 0xff);
    param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
    param_2 = param_2 >> iVar11;
    iVar11 = iVar11 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
      iVar11 = iVar11 + 1;
      if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_00042f7c:
    bVar12 = 0x7fffffff < uVar10;
    if (uVar10 == 0x80000000) {
      bVar12 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
                    param_1 + bVar12);
  }
  bVar1 = (byte)(uVar10 >> 0x1f);
  uVar10 = uVar10 << 1;
  uVar3 = param_1 * 2;
  bVar12 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
  iVar11 = iVar11 + -1;
  if ((param_2 & 0x100000) != 0) goto LAB_00042f7c;
  uVar3 = param_1;
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = param_1;
  }
  iVar8 = LZCOUNT(uVar4);
  if (param_2 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar13 = SBORROW4(uVar9,0x20);
  uVar5 = iVar8 - 0x2b;
  bVar12 = uVar5 == 0;
  uVar7 = uVar5;
  uVar6 = uVar5;
  if ((int)uVar9 < 0x20) {
    bVar13 = SCARRY4(uVar5,0xc);
    uVar6 = iVar8 - 0x1f;
    bVar12 = uVar6 == 0;
    uVar7 = uVar9;
    if (!bVar12 && -0xd < (int)uVar5) {
      uVar3 = uVar4 << (uVar9 & 0xff);
      uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
      goto LAB_00042ffc;
    }
  }
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar10 = 0x20 - uVar7;
  }
  uVar4 = uVar4 << (uVar7 & 0xff);
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
    uVar3 = uVar3 << (uVar7 & 0xff);
  }
LAB_00042ffc:
  if ((int)uVar9 <= iVar11) {
    return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
  }
  uVar10 = ~(iVar11 - uVar9);
  if (0x1e < (int)uVar10) {
    return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
  }
  if (uVar10 - 0x13 == 0 || (int)(uVar10 - 0x1f) < -0xc) {
    uVar10 = uVar10 + 1;
    return CONCAT44(uVar4 >> (uVar10 & 0xff),
                    uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
  }
  uVar10 = 0xc - (uVar10 - 0x13);
  return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
}



/* ===== FUN_00043218 @ 00043218 size=76 ===== */

void FUN_00043218(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00043264();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00043264 @ 00043264 size=328 ===== */

undefined8 FUN_00043264(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 000433ac size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0005b000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0005b004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0005b008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 0005b00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0005b010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gethostname @ 0005b014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gethostname(char *__name,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0005b018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0005b01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 0005b020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getmntent @ 0005b024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 0005b028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 0005b02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0005b030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 0005b034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0005b038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0005b03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0005b040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0005b044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0005b048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0005b04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0005b050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0005b054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 0005b058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0005b05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0005b060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0005b064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0005b068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pread64 @ 0005b06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pread64(int __fd,void *__buf,size_t __nbytes,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srandom @ 0005b070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0005b074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0005b078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 0005b07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0005b080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0005b084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0005b088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0005b08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0005b090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0005b094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0005b098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0005b09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 0005b0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setmntent @ 0005b0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void setmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0005b0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0005b0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0005b0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0005b0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0005b0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fallocate64 @ 0005b0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fallocate64(int __fd,int __mode,__off64_t __offset,__off64_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::posix_fadvise64 @ 0005b0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_fadvise64(int __fd,__off64_t __offset,__off64_t __len,int __advise)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0005b0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 0005b0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::uname @ 0005b0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 0005b0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0005b0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setrlimit64 @ 0005b0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0005b0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0005b0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0005b0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0005b0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0005b0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0005b0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0005b0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 0005b0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getrlimit64 @ 0005b0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hasmntopt @ 0005b100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hasmntopt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0005b104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::posix_memalign @ 0005b108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftruncate64 @ 0005b10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate64(int __fd,__off64_t __length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpagesize @ 0005b110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0005b114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 0005b118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0005b11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0005b120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0005b124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 0005b128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pwrite64 @ 0005b12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pwrite64(int __fd,void *__buf,size_t __n,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0005b130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohl @ 0005b134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t ntohl(uint32_t __netlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0005b138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0005b13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0005b140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0005b144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat @ 0005b148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0005b14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 0005b150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0005b154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0005b158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0005b15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0005b160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::endmntent @ 0005b164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void endmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0005b168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


