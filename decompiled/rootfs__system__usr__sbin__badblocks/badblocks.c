// badblocks — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011598 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::longjmp @ 000115bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_0005b00c)(__env);
  return;
}



/* ===== <EXTERNAL>::secure_getenv @ 000115c8 size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_0005b010)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 000115d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0005b014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::setrlimit64 @ 000115e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setrlimit64_0005b018)(__resource);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 000115ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0005b01c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::posix_fadvise64 @ 000115f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_fadvise64(int __fd,__off64_t __offset,__off64_t __len,int __advise)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_posix_fadvise64_0005b020)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 00011604 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_0005b024)();
  return _Var1;
}



/* ===== <EXTERNAL>::sysconf @ 00011610 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0005b028)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::random @ 0001161c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_0005b02c)();
  return lVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011628 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0005b030)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 00011634 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_0005b034)();
  return _Var1;
}



/* ===== <EXTERNAL>::stat64 @ 00011640 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0005b038)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::memmove @ 0001164c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0005b03c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011658 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0005b040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00011664 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0005b044)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::pwrite64 @ 00011670 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pwrite64(int __fd,void *__buf,size_t __n,__off64_t __offset)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_pwrite64_0005b048)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::getegid @ 0001167c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_0005b04c)();
  return _Var1;
}



/* ===== <EXTERNAL>::getpid @ 00011688 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0005b050)();
  return _Var1;
}



/* ===== <EXTERNAL>::getpagesize @ 00011694 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpagesize_0005b054)();
  return iVar1;
}



/* ===== <EXTERNAL>::qsort @ 000116a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0005b058)(__base);
  return;
}



/* ===== <EXTERNAL>::fscanf @ 000116ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0005b05c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 000116b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0005b060)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 000116c4 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0005b064)();
  return;
}



/* ===== <EXTERNAL>::getrlimit64 @ 000116d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getrlimit64_0005b068)(__resource);
  return iVar1;
}



/* ===== <EXTERNAL>::prctl @ 000116dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0005b06c)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 000116e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0005b070)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000116f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0005b074)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011700 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0005b078)(__s);
  return;
}



/* ===== <EXTERNAL>::getuid @ 0001170c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_0005b07c)();
  return _Var1;
}



/* ===== <EXTERNAL>::hasmntopt @ 00011718 size=12 ===== */

void hasmntopt(void)

{
  (*(code *)PTR_hasmntopt_0005b080)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011724 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0005b084)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 00011730 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_0005b088)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 0001173c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0005b08c)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00011748 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0005b090)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011754 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0005b094)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mbstowcs @ 00011760 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbstowcs(wchar_t *__pwcs,char *__s,size_t __n)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbstowcs_0005b098)(__pwcs);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek @ 0001176c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_0005b09c)(__fd);
  return _Var1;
}



/* ===== <EXTERNAL>::abort @ 00011778 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0005b0a0)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 00011784 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_0005b0a4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::alarm @ 00011790 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_0005b0a8)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::uname @ 0001179c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0005b0ac)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::nanosleep @ 000117a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_0005b0b0)(__requested_time);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 000117b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0005b0b4)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 000117c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0005b0b8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fstat @ 000117cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_0005b0bc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000117d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0005b0c0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000117e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0005b0c4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ntohl @ 000117f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t ntohl(uint32_t __netlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohl_0005b0c8)(__netlong);
  return uVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000117fc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0005b0cc)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00011808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0005b0d0)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00011814 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0005b0d4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::pread64 @ 00011820 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pread64(int __fd,void *__buf,size_t __nbytes,__off64_t __offset)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_pread64_0005b0d8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001182c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0005b0dc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011838 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0005b0e0)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011844 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_0005b0e4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 00011850 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_0005b0e8)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::realloc @ 0001185c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0005b0ec)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011868 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0005b0f0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::setmntent @ 00011874 size=12 ===== */

void setmntent(void)

{
  (*(code *)PTR_setmntent_0005b0f4)();
  return;
}



/* ===== <EXTERNAL>::endmntent @ 00011880 size=12 ===== */

void endmntent(void)

{
  (*(code *)PTR_endmntent_0005b0f8)();
  return;
}



/* ===== <EXTERNAL>::strtoull @ 00011898 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_0005b100)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 000118a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0005b104)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 000118b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0005b108)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::getopt @ 000118bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0005b10c)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000118c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0005b110)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fallocate64 @ 000118d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fallocate64(int __fd,int __mode,__off64_t __offset,__off64_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fallocate64_0005b114)
                    (__fd,__mode,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return iVar1;
}



/* ===== <EXTERNAL>::fclose @ 000118e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0005b118)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 000118ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0005b11c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 000118f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_0005b120)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 00011904 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0005b124)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011910 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0005b128)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::gethostname @ 0001191c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gethostname(char *__name,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gethostname_0005b12c)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011928 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0005b130)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::srandom @ 00011934 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
  (*(code *)PTR_srandom_0005b134)(__seed);
  return;
}



/* ===== <EXTERNAL>::fsync @ 00011940 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0005b138)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 0001194c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0005b13c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 00011958 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0005b140)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::getmntent @ 00011964 size=12 ===== */

void getmntent(void)

{
  (*(code *)PTR_getmntent_0005b144)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011970 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0005b148)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 0001197c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0005b14c)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011988 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0005b150)(__status);
  return;
}



/* ===== <EXTERNAL>::setbuf @ 00011994 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
  (*(code *)PTR_setbuf_0005b154)(__stream);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000119a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0005b158)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 000119ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_0005b15c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::_setjmp @ 000119b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR__setjmp_0005b160)(__env);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 000119c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0005b164)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 000119d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_0005b168)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::open @ 000119dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0005b16c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 000119e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0005b170)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::wcswidth @ 000119f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wcswidth(wchar_t *__s,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wcswidth_0005b174)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011a00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0005b178)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00011a0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_0005b17c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::posix_memalign @ 00011a18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_0005b180)(__memptr);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011a24 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0005b184)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011a30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0005b188)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00011a3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0005b18c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00011a48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0005b190)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011a54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0005b194)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011a60 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0005b198)();
  return;
}



/* ===== <EXTERNAL>::ftruncate64 @ 00011a6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate64(int __fd,__off64_t __length)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_ftruncate64_0005b19c)
                    (__fd,in_r1,(int)__length,(int)((ulonglong)__length >> 0x20));
  return iVar1;
}



/* ===== entry @ 00011a78 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0005b0fc)
            (DAT_00011aac,param_2,&stack0x00000004,DAT_00011ab0,DAT_00011aa8,param_1);
  return;
}



/* ===== FUN_00011ab4 @ 00011ab4 size=32 ===== */

void FUN_00011ab4(void)

{
  if (DAT_00011ad8 == DAT_00011ad4) {
    return;
  }
  if (DAT_00011adc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011adc)();
  return;
}



/* ===== _FINI_0 @ 00011b18 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011b54;
  if (*DAT_00011b54 != '\0') {
    return;
  }
  FUN_00011ab4();
  if (DAT_00011b58 != 0) {
    __deregister_frame_info(DAT_00011b5c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011b60 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011b84 != 0) {
    __register_frame_info(DAT_00011b8c,DAT_00011b88);
  }
  if ((DAT_00011b10 - DAT_00011b0c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011b14 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011b14)();
  return;
}



/* ===== FUN_00011b90 @ 00011b90 size=56 ===== */

void FUN_00011b90(void)

{
  fprintf(stderr,
          "Usage: %s [-b block_size] [-i input_file] [-o output_file] [-svwnfBX]\n       [-c blocks_at_once] [-d delay_factor_between_reads] [-e max_bad_blocks]\n       [-p num_passes] [-t test_pattern [-t test_pattern [...]]]\n       device [last_block [first_block]]\n"
          ,DAT_0005b1a8);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011bc8 @ 00011bc8 size=56 ===== */

void FUN_00011bc8(void)

{
  fprintf(stderr,"%s: The -n and -w options are mutually exclusive.\n\n",DAT_0005b1a8);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011c00 @ 00011c00 size=116 ===== */

void * FUN_00011c00(size_t param_1)

{
  int iVar1;
  void *local_c;
  
  local_c = (void *)0x0;
  iVar1 = posix_memalign(&local_c,DAT_0005b1b4,param_1);
  if (iVar1 < 0) {
    local_c = (void *)0x0;
  }
  if (local_c == (void *)0x0) {
    local_c = malloc(param_1);
  }
  return local_c;
}



/* ===== FUN_00011c74 @ 00011c74 size=412 ===== */

undefined4 FUN_00011c74(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00015ee4(DAT_0005b3f8,param_1);
  if (iVar1 == 0) {
    fprintf(DAT_0005b3fc,"%lu\n",param_1);
    fflush(DAT_0005b3fc);
    iVar1 = FUN_00015cf8(DAT_0005b3f8,param_1);
    if (iVar1 != 0) {
      FUN_00043ed8(DAT_0005b1a8,iVar1,"adding to in-memory bad block list");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if ((DAT_0005b404 != 0) && (param_1 < DAT_0005b400)) {
      FUN_000161bc(DAT_0005b404,&DAT_0005b400);
    }
    if (param_2 == 0) {
      DAT_0005b3ec = DAT_0005b3ec + 1;
    }
    else if (param_2 == 1) {
      DAT_0005b3f0 = DAT_0005b3f0 + 1;
    }
    else if (param_2 == 2) {
      DAT_0005b3f4 = DAT_0005b3f4 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00011e10 @ 00011e10 size=304 ===== */

char * FUN_00011e10(int *param_1,int *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*param_1 - *param_2) % 0x3c;
  iVar1 = (*param_1 - *param_2) / 0x3c;
  iVar3 = iVar1 % 0x3c;
  iVar1 = iVar1 / 0x3c;
  if (iVar1 == 0) {
    sprintf(param_3,"%d:%02d",iVar3,iVar2);
  }
  else {
    sprintf(param_3,"%d:%02d:%02d",iVar1,iVar3,iVar2);
  }
  return param_3;
}



/* ===== FUN_00011f40 @ 00011f40 size=156 ===== */

float FUN_00011f40(uint param_1,uint param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  undefined4 local_c;
  
  if (param_2 == 0) {
    local_c = 0.0;
  }
  else if (param_1 < param_2) {
    fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    local_c = (float)(((double)fVar1 * DAT_00011fe0) / (double)fVar2);
  }
  else {
    local_c = 100.0;
  }
  return local_c;
}



/* ===== FUN_00011fe8 @ 00011fe8 size=388 ===== */

void FUN_00011fe8(void)

{
  undefined4 uVar1;
  float fVar2;
  wchar_t awStack_2bc [128];
  char acStack_bc [128];
  undefined1 auStack_3c [32];
  timeval tStack_1c;
  size_t local_14;
  
  gettimeofday(&tStack_1c,(__timezone_ptr_t)0x0);
  fVar2 = (float)FUN_00011f40(DAT_0005b3e4,DAT_0005b3e8);
  uVar1 = FUN_00011e10(&tStack_1c,&DAT_0005b3dc,auStack_3c);
  local_14 = snprintf(acStack_bc,0x80,"%6.2f%% done, %s elapsed. (%d/%d/%d errors)",DAT_0005b3f4,
                      (double)fVar2,uVar1,DAT_0005b3ec,DAT_0005b3f0,DAT_0005b3f4);
  mbstowcs(awStack_2bc,acStack_bc,0x80);
  local_14 = wcswidth(awStack_2bc,0x80);
  if ((int)local_14 < 0) {
    local_14 = strlen(acStack_bc);
  }
  fputs(acStack_bc,stderr);
  memset(acStack_bc,8,local_14);
  acStack_bc[local_14] = '\0';
  fputs(acStack_bc,stderr);
  fflush(stderr);
  return;
}



/* ===== FUN_0001216c @ 0001216c size=80 ===== */

void FUN_0001216c(void)

{
  signal(0xe,FUN_0001216c);
  alarm(1);
  if (DAT_0005b3e8 != 0) {
    FUN_00011fe8();
  }
  return;
}



/* ===== FUN_000121bc @ 000121bc size=152 ===== */

void FUN_000121bc(void)

{
  fflush(DAT_0005b3fc);
  fprintf(stderr,"\n\nInterrupted at block %llu\n",DAT_0005b3e4,0);
  fflush(stderr);
  if (DAT_0005b408 != (__jmp_buf_tag *)0x0) {
                    /* WARNING: Subroutine does not return */
    longjmp(DAT_0005b408,1);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012254 @ 00012254 size=140 ===== */

void FUN_00012254(undefined4 param_1)

{
  DAT_0005b408 = param_1;
  signal(1,FUN_000121bc);
  signal(2,FUN_000121bc);
  signal(0xd,FUN_000121bc);
  signal(0xf,FUN_000121bc);
  signal(10,FUN_000121bc);
  signal(0xc,FUN_000121bc);
  return;
}



/* ===== FUN_000122e0 @ 000122e0 size=104 ===== */

void FUN_000122e0(void)

{
  DAT_0005b408 = 0;
  signal(1,(__sighandler_t)0x0);
  signal(2,(__sighandler_t)0x0);
  signal(0xd,(__sighandler_t)0x0);
  signal(0xf,(__sighandler_t)0x0);
  signal(10,(__sighandler_t)0x0);
  signal(0xc,(__sighandler_t)0x0);
  return;
}



/* ===== FUN_00012348 @ 00012348 size=292 ===== */

void FUN_00012348(int param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint local_14;
  
  local_14 = 0x10000;
  if ((((DAT_0005b3d0 != 0) || ((param_2 & DAT_0005b1b4 - 1U) != 0)) ||
      ((param_3 & DAT_0005b1b4 - 1U) != 0)) || ((param_5 & 0x1ff) != 0)) {
    local_14 = 0;
  }
  if (local_14 != DAT_0005b410) {
    uVar1 = fcntl(param_1,3);
    if (0 < (int)uVar1) {
      iVar2 = fcntl(param_1,4,local_14 | uVar1 & 0xfffeffff);
      if (iVar2 < 0) {
        perror("set_o_direct");
      }
    }
    DAT_0005b410 = local_14;
  }
  return;
}



/* ===== FUN_0001246c @ 0001246c size=640 ===== */

void FUN_0001246c(char *param_1,uint param_2,int param_3)

{
  long lVar1;
  char cVar2;
  uint local_20;
  char local_18 [4];
  uint local_14;
  char *local_10;
  uint local_c;
  
  local_10 = param_1;
  if (param_2 == 0xffffffff) {
    for (; local_10 < param_1 + param_3; local_10 = local_10 + 1) {
      lVar1 = random();
      cVar2 = (char)lVar1;
      if (-1 < -lVar1) {
        cVar2 = -(char)-lVar1;
      }
      *local_10 = cVar2;
    }
    if (DAT_0005b3bc != 0 || DAT_0005b3b4 != 0) {
      fwrite("Testing with random pattern: ",1,0x1d,stderr);
    }
  }
  else {
    local_18[0] = '\0';
    local_c = 0;
    for (local_20 = param_2; (local_c < 4 && (local_20 != 0)); local_20 = local_20 >> 8) {
      local_18[local_c] = (char)local_20;
      local_c = local_c + 1;
    }
    if (local_c == 0) {
      local_14 = 0;
    }
    else {
      local_14 = local_c - 1;
    }
    local_c = local_14;
    for (; local_10 < param_1 + param_3; local_10 = local_10 + 1) {
      *local_10 = local_18[local_c];
      if (local_c == 0) {
        local_c = local_14;
      }
      else {
        local_c = local_c - 1;
      }
    }
    if (DAT_0005b3bc != 0 || DAT_0005b3b4 != 0) {
      fwrite("Testing with pattern 0x",1,0x17,stderr);
      for (local_c = 0; local_c <= local_14; local_c = local_c + 1) {
        fprintf(stderr,"%02x",(uint)(byte)param_1[local_c]);
      }
      fwrite(&DAT_00045480,1,2,stderr);
    }
  }
  return;
}



/* ===== FUN_000126ec @ 000126ec size=880 ===== */

int FUN_000126ec(int param_1,void *param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  timespec local_2c;
  timeval local_24;
  timeval local_1c;
  uint local_14;
  
  iVar1 = (int)param_4 >> 0x1f;
  iVar4 = param_5 * iVar1 + (int)((ulonglong)param_4 * (ulonglong)param_5 >> 0x20);
  FUN_00012348(param_1,param_2,param_4 * param_3,iVar4,
               (int)((ulonglong)param_4 * (ulonglong)param_5),iVar4);
  if (1 < DAT_0005b3b4) {
    FUN_00011fe8();
  }
  lVar5 = FUN_000186f8(param_1,0,(int)((ulonglong)param_4 * (ulonglong)param_5),
                       param_5 * iVar1 + (int)((ulonglong)param_4 * (ulonglong)param_5 >> 0x20),0);
  uVar2 = DAT_0005b1a8;
  if (lVar5 != CONCAT44(param_5 * iVar1 + (int)((ulonglong)param_4 * (ulonglong)param_5 >> 0x20),
                        (int)((ulonglong)param_4 * (ulonglong)param_5))) {
    piVar3 = __errno_location();
    FUN_00043ed8(uVar2,*piVar3,&DAT_00045490,"during seek");
  }
  if (DAT_0005b3d8 != 0) {
    gettimeofday(&local_1c,(__timezone_ptr_t)0x0);
  }
  local_14 = read(param_1,param_2,param_4 * param_3);
  if (DAT_0005b3d8 != 0) {
    gettimeofday(&local_24,(__timezone_ptr_t)0x0);
  }
  if ((int)local_14 < 0) {
    local_14 = 0;
  }
  if ((local_14 & 0x1ff) != 0) {
    fprintf(stderr,"Weird value (%ld) in do_read\n",local_14);
  }
  local_14 = FUN_00044af4(local_14,param_4);
  if ((DAT_0005b3d8 != 0) && (local_14 == param_3)) {
    local_2c.tv_sec = local_24.tv_sec - local_1c.tv_sec;
    local_2c.tv_nsec = (local_24.tv_usec - local_1c.tv_usec) * 1000;
    if (local_2c.tv_nsec < 0) {
      local_2c.tv_nsec = local_2c.tv_nsec + 1000000000;
      local_2c.tv_sec = local_2c.tv_sec + -1;
    }
    local_2c.tv_sec = (uint)(DAT_0005b3d8 * local_2c.tv_sec) / 100;
    local_2c.tv_nsec = (uint)(DAT_0005b3d8 * local_2c.tv_nsec) / 100;
    if (1000000000 < (uint)local_2c.tv_nsec) {
      local_2c.tv_nsec = (uint)local_2c.tv_nsec % 1000000000;
    }
    if ((local_2c.tv_sec != 0) || (local_2c.tv_nsec != 0)) {
      nanosleep(&local_2c,(timespec *)0x0);
    }
  }
  return local_14;
}



/* ===== FUN_00012a5c @ 00012a5c size=452 ===== */

undefined4 FUN_00012a5c(int param_1,void *param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  uint local_14;
  
  iVar1 = (int)param_4 >> 0x1f;
  iVar4 = param_5 * iVar1 + (int)((ulonglong)param_4 * (ulonglong)param_5 >> 0x20);
  FUN_00012348(param_1,param_2,param_4 * param_3,iVar4,
               (int)((ulonglong)param_4 * (ulonglong)param_5),iVar4);
  if (1 < DAT_0005b3b4) {
    FUN_00011fe8();
  }
  lVar5 = FUN_000186f8(param_1,0,(int)((ulonglong)param_4 * (ulonglong)param_5),
                       param_5 * iVar1 + (int)((ulonglong)param_4 * (ulonglong)param_5 >> 0x20),0);
  uVar3 = DAT_0005b1a8;
  if (lVar5 != CONCAT44(param_5 * iVar1 + (int)((ulonglong)param_4 * (ulonglong)param_5 >> 0x20),
                        (int)((ulonglong)param_4 * (ulonglong)param_5))) {
    piVar2 = __errno_location();
    FUN_00043ed8(uVar3,*piVar2,&DAT_00045490,"during seek");
  }
  local_14 = write(param_1,param_2,param_4 * param_3);
  if ((int)local_14 < 0) {
    local_14 = 0;
  }
  if ((local_14 & 0x1ff) != 0) {
    fprintf(stderr,"Weird value (%ld) in do_write\n",local_14);
  }
  uVar3 = FUN_00044af4(local_14,param_4);
  return uVar3;
}



/* ===== FUN_00012c20 @ 00012c20 size=124 ===== */

void FUN_00012c20(void)

{
  int iVar1;
  
  if (DAT_0005b3d0 != 0) {
    iVar1 = FUN_00016388(DAT_0005b40c,1);
    if (iVar1 != 0) {
      FUN_00043ed8(DAT_0005b1a8,iVar1,&DAT_00045490,"during ext2fs_sync_device");
    }
  }
  return;
}



/* ===== FUN_00012c9c @ 00012c9c size=1680 ===== */

uint FUN_00012c9c(undefined4 param_1,uint param_2,size_t param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  void *local_c;
  
  local_14 = 0;
  local_18 = 0xffffffff;
  FUN_00012254(0);
  iVar2 = FUN_000160bc(DAT_0005b3f8,&DAT_0005b404);
  if (iVar2 != 0) {
    FUN_00043ed8(DAT_0005b1a8,iVar2,&DAT_00045490,"while beginning bad block list iteration");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  do {
    FUN_000161bc(DAT_0005b404,&DAT_0005b400);
    if (DAT_0005b400 == 0) break;
  } while (DAT_0005b400 < param_4);
  if (DAT_0005b3c4 == 0) {
    local_c = (void *)FUN_00011c00(param_5 * param_3);
  }
  else {
    local_c = (void *)FUN_00011c00(param_3 * (param_5 + 1));
  }
  if (local_c == (void *)0x0) {
    FUN_00043ed8(DAT_0005b1a8,0xc,&DAT_00045490,"while allocating buffers");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (DAT_0005b3b4 != 0) {
    fprintf(stderr,"Checking blocks %lu to %lu\n",param_4,param_2 - 1);
  }
  if (DAT_0005b3c4 != 0) {
    fwrite("Checking for bad blocks in read-only mode\n",1,0x2a,stderr);
    FUN_0001246c((void *)((int)local_c + param_5 * param_3),*DAT_0005b3cc,param_3);
  }
  FUN_00012c20();
  local_10 = param_5;
  DAT_0005b3e8 = param_2 - 1;
  DAT_0005b3e4 = param_4;
  if ((DAT_0005b3c4 == 0) && ((DAT_0005b3bc != 0 || (DAT_0005b3b4 != 0)))) {
    fwrite("Checking for bad blocks (read-only test): ",1,0x2a,stderr);
  }
  if ((DAT_0005b3bc != 0) && (DAT_0005b3b4 < 2)) {
    FUN_0001216c(0xe);
  }
  do {
    if (param_2 <= DAT_0005b3e4) {
LAB_00013284:
      DAT_0005b3e8 = 0;
      alarm(0);
      if ((DAT_0005b3bc != 0) || (DAT_0005b3b4 != 0)) {
        fputs(DAT_0005b1ac,stderr);
      }
      fflush(stderr);
      free(local_c);
      FUN_00016248(DAT_0005b404);
      FUN_000122e0();
      return local_14;
    }
    if (DAT_0005b1b0 <= local_14) {
      if ((DAT_0005b3bc != 0) || (DAT_0005b3b4 != 0)) {
        fwrite("Too many bad blocks, aborting test\n",1,0x23,stderr);
      }
      goto LAB_00013284;
    }
    if (DAT_0005b400 == 0) {
LAB_0001306c:
      if (param_2 < DAT_0005b3e4 + local_10) {
        local_10 = param_2 - DAT_0005b3e4;
      }
      iVar2 = FUN_000126ec(param_1,local_c,local_10,param_3,DAT_0005b3e4);
      if (DAT_0005b3c4 != 0) {
        for (local_1c = 0; local_1c < iVar2; local_1c = local_1c + 1) {
          iVar3 = memcmp((void *)((int)local_c + param_3 * local_1c),
                         (void *)((int)local_c + param_5 * param_3),param_3);
          if (iVar3 != 0) {
            iVar3 = FUN_00011c74(DAT_0005b3e4 + local_1c,2);
            local_14 = local_14 + iVar3;
          }
        }
      }
      uVar1 = DAT_0005b3e4;
      if ((iVar2 == 0) && (local_10 == 1)) {
        DAT_0005b3e4 = DAT_0005b3e4 + 1;
        iVar3 = FUN_00011c74(uVar1,0);
        local_14 = local_14 + iVar3;
      }
      DAT_0005b3e4 = DAT_0005b3e4 + iVar2;
      if (iVar2 == local_10) {
        if (local_18 == DAT_0005b3e4) {
          local_10 = param_5;
          local_18 = 0xffffffff;
        }
      }
      else {
        local_10 = 1;
        if (local_18 == 0xffffffff) {
          local_18 = param_5 + (DAT_0005b3e4 - iVar2);
        }
      }
    }
    else {
      if (DAT_0005b3e4 != DAT_0005b400) {
        if (DAT_0005b400 < DAT_0005b3e4 + local_10) {
          local_10 = DAT_0005b400 - DAT_0005b3e4;
        }
        goto LAB_0001306c;
      }
      FUN_000161bc(DAT_0005b404,&DAT_0005b400);
      DAT_0005b3e4 = DAT_0005b3e4 + 1;
    }
  } while( true );
}



/* ===== FUN_0001332c @ 0001332c size=2036 ===== */

uint FUN_0001332c(undefined4 param_1,uint param_2,size_t param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  void *local_2c;
  void *local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  
  local_40 = DAT_0004562c;
  uStack_3c = DAT_00045630;
  uStack_38 = DAT_00045634;
  uStack_34 = DAT_00045638;
  local_20 = 0;
  local_24 = 0xffffffff;
  FUN_00012254(0);
  local_28 = (void *)FUN_00011c00(param_5 * param_3 * 2);
  local_2c = (void *)((int)local_28 + param_5 * param_3);
  if (local_28 == (void *)0x0) {
    FUN_00043ed8(DAT_0005b1a8,0xc,&DAT_00045490,"while allocating buffers");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  FUN_00012c20();
  if (DAT_0005b3b4 != 0) {
    fwrite("Checking for bad blocks in read-write mode\n",1,0x2b,stderr);
    fprintf(stderr,"From block %lu to %lu\n",param_4,param_2 - 1);
  }
  if (DAT_0005b3c4 == 0) {
    local_c = &local_40;
    local_18 = 4;
  }
  else {
    local_c = DAT_0005b3cc;
    local_18 = DAT_0005b3c4;
  }
  local_1c = 0;
  do {
    if (local_18 <= local_1c) {
      FUN_000122e0();
      free(local_28);
      return local_20;
    }
    FUN_0001246c(local_28,local_c[local_1c],param_5 * param_3);
    DAT_0005b3e8 = param_2 - 1;
    DAT_0005b3e4 = param_4;
    if ((DAT_0005b3bc != 0) && (DAT_0005b3b4 < 2)) {
      FUN_0001216c(0xe);
    }
    local_14 = param_5;
    while (DAT_0005b3e4 < param_2) {
      if (DAT_0005b1b0 <= local_20) {
        if ((DAT_0005b3bc != 0) || (DAT_0005b3b4 != 0)) {
          fwrite("Too many bad blocks, aborting test\n",1,0x23,stderr);
        }
        break;
      }
      if (param_2 < DAT_0005b3e4 + local_14) {
        local_14 = param_2 - DAT_0005b3e4;
      }
      local_30 = FUN_00012a5c(param_1,local_28,local_14,param_3,DAT_0005b3e4);
      if (1 < DAT_0005b3b4) {
        FUN_00011fe8();
      }
      uVar1 = DAT_0005b3e4;
      if ((local_30 == 0) && (local_14 == 1)) {
        DAT_0005b3e4 = DAT_0005b3e4 + 1;
        iVar2 = FUN_00011c74(uVar1,1);
        local_20 = local_20 + iVar2;
      }
      DAT_0005b3e4 = DAT_0005b3e4 + local_30;
      if (local_30 == local_14) {
        if (local_24 == DAT_0005b3e4) {
          local_14 = param_5;
          local_24 = 0xffffffff;
        }
      }
      else {
        local_14 = 1;
        if (local_24 == 0xffffffff) {
          local_24 = param_5 + (DAT_0005b3e4 - local_30);
        }
      }
    }
    DAT_0005b3e8 = 0;
    alarm(0);
    if (DAT_0005b3bc != 0 || DAT_0005b3b4 != 0) {
      fputs(DAT_0005b1ac,stderr);
    }
    FUN_00012c20();
    if (DAT_0005b3bc != 0 || DAT_0005b3b4 != 0) {
      fwrite("Reading and comparing: ",1,0x17,stderr);
    }
    DAT_0005b3e4 = param_4;
    DAT_0005b3e8 = param_2;
    if ((DAT_0005b3bc != 0) && (DAT_0005b3b4 < 2)) {
      FUN_0001216c(0xe);
    }
    local_14 = param_5;
    while (DAT_0005b3e4 < param_2) {
      if (DAT_0005b1b0 <= local_20) {
        if ((DAT_0005b3bc != 0) || (DAT_0005b3b4 != 0)) {
          fwrite("Too many bad blocks, aborting test\n",1,0x23,stderr);
        }
        break;
      }
      if (param_2 < DAT_0005b3e4 + local_14) {
        local_14 = param_2 - DAT_0005b3e4;
      }
      local_30 = FUN_000126ec(param_1,local_2c,local_14,param_3,DAT_0005b3e4);
      uVar1 = DAT_0005b3e4;
      if ((local_30 == 0) && (local_14 == 1)) {
        DAT_0005b3e4 = DAT_0005b3e4 + 1;
        iVar2 = FUN_00011c74(uVar1,0);
        local_20 = local_20 + iVar2;
      }
      DAT_0005b3e4 = DAT_0005b3e4 + local_30;
      if (local_30 == local_14) {
        if (local_24 == DAT_0005b3e4) {
          local_14 = param_5;
          local_24 = 0xffffffff;
        }
        for (local_10 = 0; local_10 < local_30; local_10 = local_10 + 1) {
          iVar2 = memcmp((void *)((int)local_2c + param_3 * local_10),
                         (void *)((int)local_28 + param_3 * local_10),param_3);
          if (iVar2 != 0) {
            iVar2 = FUN_00011c74(DAT_0005b3e4 + local_10,2);
            local_20 = local_20 + iVar2;
          }
        }
        if (1 < DAT_0005b3b4) {
          FUN_00011fe8();
        }
      }
      else {
        local_14 = 1;
        if (local_24 == 0xffffffff) {
          local_24 = param_5 + (DAT_0005b3e4 - local_30);
        }
      }
    }
    DAT_0005b3e8 = 0;
    alarm(0);
    if (DAT_0005b3bc != 0 || DAT_0005b3b4 != 0) {
      fputs(DAT_0005b1ac,stderr);
    }
    FUN_00012c20();
    local_1c = local_1c + 1;
  } while( true );
}



/* ===== FUN_00013b20 @ 00013b20 size=3148 ===== */

uint FUN_00013b20(undefined4 param_1,uint param_2,size_t param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  __jmp_buf_tag _Stack_178;
  undefined4 local_68;
  uint local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  void *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14;
  
  local_68 = 0xffffffff;
  local_54 = param_5;
  local_58 = 0xffffffff;
  DAT_0005b414 = 0;
  local_5c = FUN_000160bc(DAT_0005b3f8,&DAT_0005b404);
  if (local_5c != 0) {
    FUN_00043ed8(DAT_0005b1a8,local_5c,&DAT_00045490,"while beginning bad block list iteration");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  do {
    FUN_000161bc(DAT_0005b404,&DAT_0005b400);
    if (DAT_0005b400 == 0) break;
  } while (DAT_0005b400 < param_4);
  local_14 = (void *)FUN_00011c00(param_5 * param_3 * 3);
  local_4c = malloc(param_5 << 3);
  if ((local_14 == (void *)0x0) || (local_4c == (void *)0x0)) {
    FUN_00043ed8(DAT_0005b1a8,0xc,&DAT_00045490,"while allocating buffers");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_28 = local_14;
  local_24 = (void *)((int)local_14 + param_5 * param_3);
  local_2c = (void *)((int)local_14 + param_5 * param_3 * 2);
  DAT_0005b418 = 0;
  FUN_00012c20();
  if (DAT_0005b3b4 != 0) {
    fwrite("Checking for bad blocks in non-destructive read-write mode\n",1,0x3b,stderr);
    fprintf(stderr,"From block %lu to %lu\n",param_4,param_2 - 1);
  }
  if ((DAT_0005b3bc != 0) || (1 < DAT_0005b3b4)) {
    fwrite("Checking for bad blocks (non-destructive read-write test)\n",1,0x3a,stderr);
  }
  iVar3 = _setjmp(&_Stack_178);
  if (iVar3 != 0) {
    signal(0xe,(__sighandler_t)0x1);
    fwrite("\nInterrupt caught, cleaning up\n",1,0x1f,stderr);
    local_18 = local_28;
    for (local_34 = 0; local_34 < DAT_0005b418; local_34 = local_34 + 1) {
      FUN_00012a5c(param_1,local_18,*(undefined4 *)((int)local_4c + local_34 * 8 + 4),param_3,
                   *(undefined4 *)((int)local_4c + local_34 * 8));
      local_18 = (void *)((int)local_18 + param_3 * *(int *)((int)local_4c + local_34 * 8 + 4));
    }
    fflush(DAT_0005b3fc);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  FUN_00012254(&_Stack_178);
  if (DAT_0005b3c4 == 0) {
    local_38 = &local_68;
    local_3c = 1;
  }
  else {
    local_38 = DAT_0005b3cc;
    local_3c = DAT_0005b3c4;
  }
  local_40 = 0;
  do {
    if (local_3c <= local_40) {
      FUN_000122e0();
      fflush(stderr);
      free(local_14);
      free(local_4c);
      FUN_00016248(DAT_0005b404);
      return DAT_0005b414;
    }
    FUN_0001246c(local_24,local_38[local_40],param_5 * param_3);
    local_50 = 0;
    DAT_0005b414 = 0;
    local_18 = local_28;
    local_1c = local_24;
    DAT_0005b3e8 = param_2 - 1;
    DAT_0005b3e4 = param_4;
    if ((DAT_0005b3bc != 0) && (DAT_0005b3b4 < 2)) {
      FUN_0001216c(0xe);
    }
LAB_00014674:
    while (DAT_0005b3e4 < param_2) {
      if (DAT_0005b1b0 <= DAT_0005b414) {
        if ((DAT_0005b3bc != 0) || (DAT_0005b3b4 != 0)) {
          fwrite("Too many bad blocks, aborting test\n",1,0x23,stderr);
        }
        break;
      }
      local_44 = local_54 - local_50;
      local_30 = local_44;
      if (DAT_0005b400 == 0) {
LAB_000140c8:
        if (param_2 < DAT_0005b3e4 + local_30) {
          local_30 = param_2 - DAT_0005b3e4;
        }
        local_44 = FUN_000126ec(param_1,local_18,local_30,param_3,DAT_0005b3e4);
        uVar2 = DAT_0005b3e4;
        if (local_44 == 0) {
          if (local_58 == 0xffffffff) {
            local_58 = param_5 + DAT_0005b3e4;
          }
          if (local_54 == 1) {
            DAT_0005b3e4 = DAT_0005b3e4 + 1;
            iVar3 = FUN_00011c74(uVar2,0);
            DAT_0005b414 = iVar3 + DAT_0005b414;
            goto LAB_00014354;
          }
          local_54 = 1;
        }
        else {
          *(uint *)((int)local_4c + DAT_0005b418 * 8) = DAT_0005b3e4;
          *(int *)((int)local_4c + DAT_0005b418 * 8 + 4) = local_44;
          DAT_0005b418 = DAT_0005b418 + 1;
          local_60 = FUN_00012a5c(param_1,local_1c,local_44,param_3,DAT_0005b3e4);
          uVar1 = DAT_0005b1a8;
          if (local_60 != local_44) {
            piVar4 = __errno_location();
            FUN_00043ed8(uVar1,*piVar4,"during test data write, block %lu",DAT_0005b3e4 + local_60);
          }
          local_50 = local_50 + local_44;
          local_18 = (void *)((int)local_18 + param_3 * local_44);
          local_1c = (void *)((int)local_1c + param_3 * local_44);
          DAT_0005b3e4 = DAT_0005b3e4 + local_44;
          if (local_44 == local_30) goto LAB_00014354;
          local_30 = 1;
          if (local_58 == 0xffffffff) {
            local_58 = param_5 + (DAT_0005b3e4 - local_44);
          }
        }
      }
      else {
        if (DAT_0005b3e4 != DAT_0005b400) {
          if (DAT_0005b400 < DAT_0005b3e4 + local_44) {
            local_30 = DAT_0005b400 - DAT_0005b3e4;
          }
          goto LAB_000140c8;
        }
        FUN_000161bc(DAT_0005b404,&DAT_0005b400);
        DAT_0005b3e4 = DAT_0005b3e4 + 1;
LAB_00014354:
        if ((local_50 == local_54) || (param_2 <= DAT_0005b3e4)) {
          if (local_58 <= DAT_0005b3e4) {
            local_54 = param_5;
            local_58 = 0xffffffff;
          }
          FUN_00012c20();
          local_64 = DAT_0005b3e4;
          local_48 = 0;
          local_18 = local_28;
          local_1c = local_24;
          local_20 = local_2c;
          local_30 = 0;
          do {
            if (local_30 == 0) {
              if (DAT_0005b418 <= local_48) goto code_r0x0001463c;
              DAT_0005b3e4 = *(uint *)((int)local_4c + local_48 * 8);
              local_30 = *(int *)((int)local_4c + local_48 * 8 + 4);
              local_48 = local_48 + 1;
            }
            local_44 = FUN_000126ec(param_1,local_20,local_30,param_3,DAT_0005b3e4);
            for (local_34 = 0; local_34 < local_44; local_34 = local_34 + 1) {
              iVar3 = memcmp((void *)((int)local_1c + param_3 * local_34),
                             (void *)((int)local_20 + param_3 * local_34),param_3);
              if (iVar3 != 0) {
                iVar3 = FUN_00011c74(DAT_0005b3e4 + local_34,2);
                DAT_0005b414 = iVar3 + DAT_0005b414;
              }
            }
            if (local_44 < local_30) {
              iVar3 = FUN_00011c74(DAT_0005b3e4 + local_44,0);
              DAT_0005b414 = iVar3 + DAT_0005b414;
              local_44 = local_44 + 1;
            }
            FUN_00012a5c(param_1,local_18,local_44,param_3,DAT_0005b3e4);
            local_18 = (void *)((int)local_18 + param_3 * local_44);
            DAT_0005b3e4 = DAT_0005b3e4 + local_44;
            local_1c = (void *)((int)local_1c + param_3 * local_44);
            local_20 = (void *)((int)local_20 + param_3 * local_44);
            local_30 = local_30 - local_44;
          } while( true );
        }
      }
    }
    DAT_0005b3e8 = 0;
    alarm(0);
    if ((DAT_0005b3bc != 0) || (1 < DAT_0005b3b4)) {
      fputs(DAT_0005b1ac,stderr);
    }
    FUN_00012c20();
    local_40 = local_40 + 1;
  } while( true );
code_r0x0001463c:
  DAT_0005b418 = 0;
  local_50 = 0;
  local_18 = local_28;
  local_1c = local_24;
  DAT_0005b3e4 = local_64;
  goto LAB_00014674;
}



/* ===== FUN_0001476c @ 0001476c size=364 ===== */

void FUN_0001476c(undefined4 param_1)

{
  uint local_10;
  int local_c;
  
  local_c = FUN_000186c0(param_1,&local_10);
  if (local_c == 0) {
    if ((local_10 & 1) == 0) {
      if (((local_10 & 0x10) != 0) && (DAT_0005b3d4 == 0)) {
        fprintf(stderr,"%s is apparently in use by the system; ",param_1);
        if (DAT_0005b3c0 == 0) goto LAB_00014830;
        fwrite("badblocks forced anyway.\n",1,0x19,stderr);
      }
    }
    else {
      fprintf(stderr,"%s is mounted; ",param_1);
      if (DAT_0005b3c0 == 0) {
LAB_00014830:
        fwrite("it\'s not safe to run badblocks!\n",1,0x20,stderr);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      fwrite("badblocks forced anyway.  Hope /etc/mtab is incorrect.\n",1,0x37,stderr);
    }
  }
  else {
    FUN_00043ed8("ext2fs_check_if_mount",local_c,"while determining whether %s is mounted.",param_1)
    ;
  }
  return;
}



/* ===== FUN_000148d8 @ 000148d8 size=192 ===== */

ulong FUN_000148d8(char *param_1,undefined4 param_2)

{
  int *piVar1;
  char *local_10;
  ulong local_c;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  local_c = strtoul(param_1,&local_10,0);
  if (((*local_10 == '\0') && (piVar1 = __errno_location(), *piVar1 == 0)) &&
     ((local_c != 0xffffffff || (piVar1 = __errno_location(), *piVar1 != 0x22)))) {
    return local_c;
  }
  FUN_00043ed8(DAT_0005b1a8,0,"invalid %s - %s",param_2,param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014998 @ 00014998 size=3468 ===== */

undefined4 FUN_00014998(int param_1,char **param_2)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_70;
  int iStack_6c;
  uint local_68;
  uint uStack_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  char *local_50;
  int *local_4c;
  int local_48;
  long local_44;
  code *local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  undefined4 local_28;
  undefined4 local_24;
  FILE *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  local_14 = (char *)0x0;
  local_18 = (char *)0x0;
  local_1c = (char *)0x0;
  local_20 = (FILE *)0x0;
  local_24 = 0x400;
  local_28 = 0x40;
  local_34 = 0;
  local_38 = 0;
  setbuf(stdout,(char *)0x0);
  setbuf(stderr,(char *)0x0);
  uVar2 = time((time_t *)0x0);
  srandom(uVar2);
  local_40 = FUN_00012c9c;
  local_44 = sysconf(0x1e);
  if (0 < local_44) {
    DAT_0005b1b4 = local_44;
  }
  if ((param_1 != 0) && (*param_2 != (char *)0x0)) {
    DAT_0005b1a8 = *param_2;
  }
  while (local_48 = getopt(param_1,param_2,"b:d:e:fi:o:svwnc:p:h:t:BX"), local_48 != -1) {
    switch(local_48) {
    case 0x42:
      DAT_0005b3d0 = 1;
      break;
    default:
      FUN_00011b90();
      break;
    case 0x58:
      DAT_0005b3d4 = DAT_0005b3d4 + 1;
      break;
    case 0x62:
      local_24 = FUN_000148d8(optarg,"block size");
      break;
    case 99:
      local_28 = FUN_000148d8(optarg,"blocks at once");
      break;
    case 100:
      DAT_0005b3d8 = FUN_000148d8(optarg,"read delay factor");
      break;
    case 0x65:
      DAT_0005b1b0 = FUN_000148d8(optarg,"max bad block count");
      if (0x3fffffff < DAT_0005b1b0) {
        FUN_00043ed8(DAT_0005b1a8,0,"Too big max bad blocks count %u - maximum is %u",DAT_0005b1b0,
                     0x3fffffff);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      if (DAT_0005b1b0 == 0) {
        DAT_0005b1b0 = 0x3fffffff;
      }
      break;
    case 0x66:
      DAT_0005b3c0 = DAT_0005b3c0 + 1;
      break;
    case 0x68:
      local_14 = optarg;
      break;
    case 0x69:
      local_18 = optarg;
      break;
    case 0x6e:
      if (DAT_0005b3b8 != 0) {
        FUN_00011bc8();
      }
      local_40 = FUN_00013b20;
      DAT_0005b3b8 = 2;
      break;
    case 0x6f:
      local_1c = optarg;
      break;
    case 0x70:
      local_34 = FUN_000148d8(optarg,"number of clean passes");
      break;
    case 0x73:
      DAT_0005b3bc = 1;
      break;
    case 0x74:
      if (DAT_0005b3c8 <= DAT_0005b3c4) {
        local_4c = realloc(DAT_0005b3cc,(DAT_0005b3c8 + 0x20) * 4);
        if (local_4c == (int *)0x0) {
          FUN_00043ed8(DAT_0005b1a8,0xc,"can\'t allocate memory for test_pattern - %s",optarg);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        DAT_0005b3c8 = DAT_0005b3c8 + 0x20;
        DAT_0005b3cc = local_4c;
      }
      iVar4 = strcmp(optarg,"r");
      if ((iVar4 == 0) || (iVar4 = strcmp(optarg,"random"), iVar4 == 0)) {
        piVar3 = DAT_0005b3cc + DAT_0005b3c4;
        DAT_0005b3c4 = DAT_0005b3c4 + 1;
        *piVar3 = -1;
      }
      else {
        local_3c = FUN_000148d8(optarg,"test pattern");
        if (local_3c == -1) {
          local_3c = 0xffff;
        }
        piVar3 = DAT_0005b3cc + DAT_0005b3c4;
        DAT_0005b3c4 = DAT_0005b3c4 + 1;
        *piVar3 = local_3c;
      }
      break;
    case 0x76:
      DAT_0005b3b4 = DAT_0005b3b4 + 1;
      break;
    case 0x77:
      if (DAT_0005b3b8 != 0) {
        FUN_00011bc8();
      }
      local_40 = FUN_0001332c;
      DAT_0005b3b8 = 1;
    }
  }
  if (DAT_0005b3b8 == 0) {
    if (1 < DAT_0005b3c4) {
      FUN_00043ed8(DAT_0005b1a8,0,&DAT_00045490,
                   "Maximum of one test_pattern may be specified in read-only mode");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if ((DAT_0005b3cc != (int *)0x0) && (*DAT_0005b3cc == -1)) {
      FUN_00043ed8(DAT_0005b1a8,0,&DAT_00045490,
                   "Random test_pattern is not allowed in read-only mode");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  if (param_1 <= optind) {
    FUN_00011b90();
  }
  iVar4 = optind + 1;
  local_50 = param_2[optind];
  optind = iVar4;
  if (iVar4 < param_1) {
    piVar3 = __errno_location();
    *piVar3 = 0;
    uVar2 = FUN_000148d8(param_2[optind],"last block");
    local_68 = uVar2 + 1;
    uStack_64 = (uint)(0xfffffffe < uVar2);
    optind = optind + 1;
  }
  else {
    local_54 = FUN_000164dc(local_50,local_24,&local_68);
    if (local_54 == 0x7f2bb750) {
      FUN_00043ed8(DAT_0005b1a8,0,&DAT_00045490,
                   "Couldn\'t determine device size; you must specify\nthe size manually\n");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (local_54 != 0) {
      FUN_00043ed8(DAT_0005b1a8,local_54,&DAT_00045490,"while trying to determine device size");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  if (optind < param_1) {
    piVar3 = __errno_location();
    *piVar3 = 0;
    uVar2 = FUN_000148d8(param_2[optind],"first block");
    local_30 = (ulonglong)uVar2;
  }
  else {
    local_30 = 0;
  }
  bVar5 = uStack_64 == 0;
  if (uStack_64 == 0) {
    bVar5 = local_68 <= (uint)local_30;
  }
  if (bVar5) {
    FUN_00043ed8(DAT_0005b1a8,0,"invalid starting block (%llu): must be less than %llu",0,
                 (uint)local_30,0,local_68,uStack_64);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (uStack_64 != 0) {
    FUN_00043ed8(DAT_0005b1a8,0x4b,"invalid end block (%llu): must be 32-bit value",uStack_64,
                 local_68,uStack_64);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (DAT_0005b3b8 != 0) {
    FUN_0001476c(local_50);
  }
  gettimeofday((timeval *)&DAT_0005b3dc,(__timezone_ptr_t)0x0);
  if (DAT_0005b3b8 == 0) {
    local_58 = 0x20000;
  }
  else {
    local_58 = 0x20002;
  }
  local_5c = open(local_50,local_58);
  pcVar1 = DAT_0005b1a8;
  if (local_5c == -1) {
    piVar3 = __errno_location();
    FUN_00043ed8(pcVar1,*piVar3,"while trying to open %s",local_50);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar4 = local_5c;
  if ((local_14 != (char *)0x0) &&
     (DAT_0005b40c = open(local_14,local_58), pcVar1 = DAT_0005b1a8, iVar4 = DAT_0005b40c,
     DAT_0005b40c == -1)) {
    piVar3 = __errno_location();
    FUN_00043ed8(pcVar1,*piVar3,"while trying to open %s",local_14);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  DAT_0005b40c = iVar4;
  if (local_18 != (char *)0x0) {
    iVar4 = strcmp(local_18,"-");
    if (iVar4 == 0) {
      local_20 = stdin;
    }
    else {
      local_20 = fopen(local_18,"r");
      pcVar1 = DAT_0005b1a8;
      if (local_20 == (FILE *)0x0) {
        piVar3 = __errno_location();
        FUN_00043ed8(pcVar1,*piVar3,"while trying to open %s",local_18);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
  }
  if ((local_1c == (char *)0x0) || (iVar4 = strcmp(local_1c,"-"), iVar4 == 0)) {
    DAT_0005b3fc = stdout;
  }
  else {
    DAT_0005b3fc = fopen(local_1c,"w");
    pcVar1 = DAT_0005b1a8;
    if (DAT_0005b3fc == (FILE *)0x0) {
      piVar3 = __errno_location();
      FUN_00043ed8(pcVar1,*piVar3,"while trying to open %s",local_1c);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  local_54 = FUN_00015978(&DAT_0005b3f8,0);
  if (local_54 != 0) {
    FUN_00043ed8(DAT_0005b1a8,local_54,&DAT_00045490,"while creating in-memory bad blocks list");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_54 = 0;
  if (local_20 != (FILE *)0x0) {
    while (iVar4 = fscanf(local_20,"%llu\n",&local_70), iVar4 != -1) {
      if (iVar4 == 0) {
        FUN_00043ed8(DAT_0005b1a8,0,&DAT_00045490,"input file - bad format");
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      if (iStack_6c != 0) {
        FUN_00043ed8(DAT_0005b1a8,0x4b,&DAT_00045490,"while adding to in-memory bad block list");
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      DAT_0005b400 = local_70;
      local_54 = FUN_00015cf8(DAT_0005b3f8,local_70);
      if (local_54 != 0) {
        FUN_00043ed8(DAT_0005b1a8,local_54,&DAT_00045490,"while adding to in-memory bad block list")
        ;
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
    if (local_20 != stdin) {
      fclose(local_20);
    }
  }
  do {
    local_60 = (*local_40)(local_5c,local_68,local_24,(uint)local_30,local_28);
    if (local_60 == 0) {
      local_38 = local_38 + 1;
    }
    else {
      local_38 = 0;
    }
    if (DAT_0005b3b4 != 0) {
      fprintf(stderr,"Pass completed, %u bad blocks found. (%d/%d/%d errors)\n",local_60,
              DAT_0005b3ec,DAT_0005b3f0,DAT_0005b3f4);
    }
  } while (local_38 < local_34);
  close(local_5c);
  if (DAT_0005b3fc != stdout) {
    fclose(DAT_0005b3fc);
  }
  free(DAT_0005b3cc);
  return 0;
}



/* ===== FUN_000157fc @ 000157fc size=324 ===== */

int FUN_000157fc(int param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  undefined4 *local_10;
  int local_c;
  
  local_c = FUN_0001744c(0x14,&local_10);
  if (local_c == 0) {
    memset(local_10,0,0x14);
    *local_10 = 0x7f2bb702;
    if (param_1 == 0) {
      param_1 = 10;
    }
    local_10[2] = param_1;
    local_10[1] = param_2;
    local_c = FUN_00017510(local_10[2],4,local_10 + 3);
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
      FUN_00017630(&local_10);
    }
  }
  return local_c;
}



/* ===== FUN_00015940 @ 00015940 size=56 ===== */

undefined4 FUN_00015940(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000157fc(param_2,0,0,param_1);
  return uVar1;
}



/* ===== FUN_00015978 @ 00015978 size=56 ===== */

undefined4 FUN_00015978(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000157fc(param_2,0,0,param_1);
  return uVar1;
}



/* ===== FUN_000159b0 @ 000159b0 size=112 ===== */

int FUN_000159b0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_000157fc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 0xc),param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(*param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00015a20 @ 00015a20 size=48 ===== */

undefined4 FUN_00015a20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000159b0(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00015a50 @ 00015a50 size=680 ===== */

int FUN_00015a50(int *param_1,uint param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  
  if (*param_1 == 0x7f2bb702) {
    if (param_1[2] <= param_1[1]) {
      iVar1 = param_1[2];
      param_1[2] = param_1[2] + 100;
      iVar1 = FUN_0001767c(iVar1 << 2,param_1[2] << 2,param_1 + 3);
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



/* ===== FUN_00015cf8 @ 00015cf8 size=48 ===== */

undefined4 FUN_00015cf8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015a50(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00015d28 @ 00015d28 size=376 ===== */

uint FUN_00015d28(int *param_1,uint param_2)

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



/* ===== FUN_00015ea0 @ 00015ea0 size=68 ===== */

bool FUN_00015ea0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00015d28(param_1,param_2);
  return -1 < iVar1;
}



/* ===== FUN_00015ee4 @ 00015ee4 size=48 ===== */

undefined4 FUN_00015ee4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015ea0(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00015f14 @ 00015f14 size=216 ===== */

undefined4 FUN_00015f14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_c = FUN_00015d28(param_1,param_2);
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



/* ===== FUN_00015fec @ 00015fec size=44 ===== */

void FUN_00015fec(undefined4 param_1,undefined4 param_2)

{
  FUN_00015f14(param_1,param_2);
  return;
}



/* ===== FUN_00016018 @ 00016018 size=164 ===== */

int FUN_00016018(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *local_10 [2];
  
  if (*param_1 == 0x7f2bb702) {
    iVar1 = FUN_0001744c(0xc,local_10);
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



/* ===== FUN_000160bc @ 000160bc size=48 ===== */

undefined4 FUN_000160bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00016018(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000160ec @ 000160ec size=208 ===== */

undefined4 FUN_000160ec(int *param_1,undefined4 *param_2)

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



/* ===== FUN_000161bc @ 000161bc size=48 ===== */

undefined4 FUN_000161bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000160ec(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000161ec @ 000161ec size=92 ===== */

void FUN_000161ec(int *param_1)

{
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb703)) {
    param_1[1] = 0;
    local_c = param_1;
    FUN_00017630(&local_c);
  }
  return;
}



/* ===== FUN_00016248 @ 00016248 size=36 ===== */

void FUN_00016248(undefined4 param_1)

{
  FUN_000161ec(param_1);
  return;
}



/* ===== FUN_0001626c @ 0001626c size=196 ===== */

undefined4 FUN_0001626c(int *param_1,int *param_2)

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



/* ===== FUN_00016330 @ 00016330 size=48 ===== */

undefined4 FUN_00016330(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001626c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00016388 @ 00016388 size=216 ===== */

int FUN_00016388(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = fsync(param_1);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  }
  else if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ioctl(param_1,0x1261,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      iVar3 = ioctl(param_1,0x24b,0);
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else if (iVar1 == 0) {
        piVar2 = __errno_location();
        iVar1 = *piVar2;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_00016460 @ 00016460 size=124 ===== */

undefined4 FUN_00016460(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined1 uStack_9;
  
  FUN_000186f8(param_1,param_2,param_3,param_4,0);
  if (extraout_r1 < 0) {
    uVar2 = 0;
  }
  else {
    sVar1 = read(param_1,&uStack_9,1);
    if (sVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== FUN_000164dc @ 000164dc size=840 ===== */

int FUN_000164dc(undefined4 param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  utsname uStack_1e8;
  undefined4 local_60 [7];
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  int iStack_34;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  uint local_18;
  int iStack_14;
  
  local_28 = 0;
  local_2c = FUN_0001986c(param_1,0,0);
  if (local_2c < 0) {
    piVar2 = __errno_location();
    local_28 = *piVar2;
  }
  else {
    local_24 = 1;
    iVar3 = uname(&uStack_1e8);
    if ((((iVar3 == 0) && (uStack_1e8.release[0] == '2')) && (uStack_1e8.release[1] == '.')) &&
       (((byte)uStack_1e8.release[2] < 0x36 && (uStack_1e8.release[3] == '.')))) {
      local_24 = 0;
    }
    iVar3 = param_2 >> 0x1f;
    if ((local_24 == 0) || (iVar4 = ioctl(local_2c,0x80041272,&local_40), iVar4 < 0)) {
      iVar4 = ioctl(local_2c,0x1260,&local_44);
      if (iVar4 < 0) {
        iVar4 = ioctl(local_2c,0x801c0204,local_60);
        if (iVar4 < 0) {
          uVar7 = FUN_000198f4(local_2c,&uStack_1e8);
          if (((int)uVar7 == 0) && ((uStack_1e8.sysname._16_4_ & 0xf000) == 0x8000)) {
            uVar7 = FUN_00044fb0(uStack_1e8.sysname._48_4_,uStack_1e8.sysname._52_4_,param_2,iVar3);
            *param_3 = uVar7;
          }
          else {
            local_20 = 0;
            local_18 = 0x400;
            iStack_14 = 0;
            iVar4 = (int)((ulonglong)uVar7 >> 0x20);
            while (iVar4 = FUN_00016460(local_2c,iVar4,local_18,iStack_14), iVar4 != 0) {
              local_20 = CONCAT44(iStack_14,local_18);
              bVar6 = CARRY4(local_18,local_18);
              local_18 = local_18 * 2;
              iVar4 = iStack_14;
              iStack_14 = iStack_14 * 2 + (uint)bVar6;
            }
            while( true ) {
              iVar4 = iStack_14 - (uint)(local_18 == 0);
              bVar6 = (uint)local_20 < local_18 - 1;
              if ((int)(local_20._4_4_ - (iVar4 + (uint)bVar6)) < 0 ==
                  (SBORROW4(local_20._4_4_,iVar4) != SBORROW4(local_20._4_4_ - iVar4,(uint)bVar6)))
              break;
              iStack_34 = iStack_14 + local_20._4_4_ + (uint)CARRY4(local_18,(uint)local_20);
              uVar1 = -(iStack_34 >> 0x1f);
              iStack_34 = iStack_34 + (uint)CARRY4(local_18 + (uint)local_20,uVar1);
              local_38 = local_18 + (uint)local_20 + uVar1 >> 1 | iStack_34 * -0x80000000;
              iStack_34 = iStack_34 >> 1;
              iVar4 = FUN_00016460(local_2c,0,local_38,iStack_34);
              if (iVar4 == 0) {
                local_18 = local_38;
                iStack_14 = iStack_34;
              }
              else {
                local_20 = CONCAT44(iStack_34,local_38);
              }
            }
            FUN_00016460(local_2c,local_20._4_4_,0,0);
            local_40 = (uint)local_20 + 1;
            iStack_3c = local_20._4_4_ + (uint)(0xfffffffe < (uint)local_20);
            uVar7 = FUN_00045084(local_40,iStack_3c,param_2,iVar3);
            *param_3 = uVar7;
          }
        }
        else {
          iVar3 = param_2 + 0x1ff;
          if (-1 < param_2) {
            iVar3 = param_2;
          }
          uVar5 = FUN_00044a2c(local_60[0],iVar3 >> 9);
          *(undefined4 *)param_3 = uVar5;
          *(undefined4 *)((int)param_3 + 4) = 0;
        }
      }
      else {
        iVar3 = param_2 + 0x1ff;
        if (-1 < param_2) {
          iVar3 = param_2;
        }
        uVar5 = FUN_00044a2c(local_44,iVar3 >> 9);
        *(undefined4 *)param_3 = uVar5;
        *(undefined4 *)((int)param_3 + 4) = 0;
      }
    }
    else {
      uVar7 = FUN_00045084(local_40,iStack_3c,param_2,iVar3);
      *param_3 = uVar7;
    }
    close(local_2c);
  }
  return local_28;
}



/* ===== FUN_00016824 @ 00016824 size=128 ===== */

int FUN_00016824(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_18;
  int iStack_14;
  
  iVar1 = FUN_000164dc(param_1,param_2,&local_18);
  if (iVar1 == 0) {
    if (iStack_14 == 0) {
      *param_3 = local_18;
      iVar1 = 0;
    }
    else {
      iVar1 = 0x1b;
    }
  }
  return iVar1;
}



/* ===== FUN_000168a4 @ 000168a4 size=108 ===== */

void FUN_000168a4(uint param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_2 + (param_1 >> 3));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_1 & 7));
  return;
}



/* ===== FUN_00016910 @ 00016910 size=116 ===== */

void FUN_00016910(uint param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_2 + (param_1 >> 3));
  *pbVar1 = ~(byte)(1 << (param_1 & 7)) & *pbVar1;
  return;
}



/* ===== FUN_00016984 @ 00016984 size=116 ===== */

void FUN_00016984(uint param_1,int param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_1 & 7));
  return;
}



/* ===== FUN_000169f8 @ 000169f8 size=124 ===== */

void FUN_000169f8(uint param_1,int param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
  *pbVar1 = ~(byte)(1 << (param_1 & 7)) & *pbVar1;
  return;
}



/* ===== FUN_00016aa4 @ 00016aa4 size=84 ===== */

uint FUN_00016aa4(uint param_1)

{
  return param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}



/* ===== FUN_00016af8 @ 00016af8 size=116 ===== */

undefined8 FUN_00016af8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00016aa4(param_2);
  uVar2 = FUN_00016aa4(param_1);
  return CONCAT44(uVar2,uVar1);
}



/* ===== FUN_00016b6c @ 00016b6c size=48 ===== */

undefined4 FUN_00016b6c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020eb4(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00016b9c @ 00016b9c size=48 ===== */

undefined4 FUN_00016b9c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002101c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00016bcc @ 00016bcc size=48 ===== */

undefined4 FUN_00016bcc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020d4c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00016bfc @ 00016bfc size=48 ===== */

undefined4 FUN_00016bfc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020eb4(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00016c2c @ 00016c2c size=48 ===== */

undefined4 FUN_00016c2c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002101c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00016c5c @ 00016c5c size=48 ===== */

undefined4 FUN_00016c5c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020d4c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00016c8c @ 00016c8c size=44 ===== */

void FUN_00016c8c(undefined4 param_1,undefined4 param_2)

{
  FUN_00020eb4(param_1,param_2);
  return;
}



/* ===== FUN_00016cb8 @ 00016cb8 size=44 ===== */

void FUN_00016cb8(undefined4 param_1,undefined4 param_2)

{
  FUN_0002101c(param_1,param_2);
  return;
}



/* ===== FUN_00016ce4 @ 00016ce4 size=48 ===== */

undefined4 FUN_00016ce4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020d4c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00016d14 @ 00016d14 size=44 ===== */

void FUN_00016d14(undefined4 param_1,undefined4 param_2)

{
  FUN_00020eb4(param_1,param_2);
  return;
}



/* ===== FUN_00016d40 @ 00016d40 size=44 ===== */

void FUN_00016d40(undefined4 param_1,undefined4 param_2)

{
  FUN_0002101c(param_1,param_2);
  return;
}



/* ===== FUN_00016d6c @ 00016d6c size=48 ===== */

undefined4 FUN_00016d6c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020d4c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00016d9c @ 00016d9c size=40 ===== */

undefined4 FUN_00016d9c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021184(param_1);
  return uVar1;
}



/* ===== FUN_00016dc4 @ 00016dc4 size=40 ===== */

undefined4 FUN_00016dc4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021184(param_1);
  return uVar1;
}



/* ===== FUN_00016dec @ 00016dec size=40 ===== */

undefined4 FUN_00016dec(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021280(param_1);
  return uVar1;
}



/* ===== FUN_00016e14 @ 00016e14 size=40 ===== */

undefined4 FUN_00016e14(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021280(param_1);
  return uVar1;
}



/* ===== FUN_00016e3c @ 00016e3c size=56 ===== */

undefined4 FUN_00016e3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021f38(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00016e74 @ 00016e74 size=52 ===== */

void FUN_00016e74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000220a8(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00016ea8 @ 00016ea8 size=52 ===== */

void FUN_00016ea8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00022170(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00016edc @ 00016edc size=48 ===== */

undefined4 FUN_00016edc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022fec(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00016f0c @ 00016f0c size=48 ===== */

undefined4 FUN_00016f0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023190(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00016f3c @ 00016f3c size=48 ===== */

undefined4 FUN_00016f3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023334(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00016f6c @ 00016f6c size=56 ===== */

undefined4 FUN_00016f6c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022fec(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00016fa4 @ 00016fa4 size=56 ===== */

undefined4 FUN_00016fa4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023190(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00016fdc @ 00016fdc size=56 ===== */

undefined4 FUN_00016fdc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023334(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00017014 @ 00017014 size=44 ===== */

void FUN_00017014(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00022fec(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00017040 @ 00017040 size=44 ===== */

void FUN_00017040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00023190(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_0001706c @ 0001706c size=48 ===== */

undefined4 FUN_0001706c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023334(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0001709c @ 0001709c size=52 ===== */

void FUN_0001709c(undefined4 param_1,undefined4 param_2)

{
  FUN_00022fec(param_1,param_2,param_2,0);
  return;
}



/* ===== FUN_000170d0 @ 000170d0 size=52 ===== */

void FUN_000170d0(undefined4 param_1,undefined4 param_2)

{
  FUN_00023190(param_1,param_2,param_2,0);
  return;
}



/* ===== FUN_00017104 @ 00017104 size=56 ===== */

undefined4 FUN_00017104(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023334(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_0001713c @ 0001713c size=92 ===== */

int FUN_0001713c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_00024424(param_1,param_2,param_3,param_4,param_5,param_6,&local_18);
  if (iVar1 == 0) {
    *param_7 = local_18;
    param_7[1] = uStack_14;
  }
  return iVar1;
}



/* ===== FUN_00017198 @ 00017198 size=124 ===== */

int FUN_00017198(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_00024424(param_1,0,param_2,0,param_3,0,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_00017214 @ 00017214 size=92 ===== */

int FUN_00017214(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_00024744(param_1,param_2,param_3,param_4,param_5,param_6,&local_18);
  if (iVar1 == 0) {
    *param_7 = local_18;
    param_7[1] = uStack_14;
  }
  return iVar1;
}



/* ===== FUN_00017270 @ 00017270 size=124 ===== */

int FUN_00017270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_00024744(param_1,0,param_2,0,param_3,0,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_000172ec @ 000172ec size=48 ===== */

undefined4 FUN_000172ec(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022d80(param_1);
  return uVar1;
}



/* ===== FUN_0001731c @ 0001731c size=48 ===== */

undefined4 FUN_0001731c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022d80(param_1);
  return uVar1;
}



/* ===== FUN_0001734c @ 0001734c size=48 ===== */

undefined4 FUN_0001734c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022e74(param_1);
  return uVar1;
}



/* ===== FUN_0001737c @ 0001737c size=48 ===== */

undefined4 FUN_0001737c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022e74(param_1);
  return uVar1;
}



/* ===== FUN_000173ac @ 000173ac size=56 ===== */

undefined4
FUN_000173ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023a7c(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}



/* ===== FUN_000173e4 @ 000173e4 size=52 ===== */

void FUN_000173e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00023d24(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== FUN_00017418 @ 00017418 size=52 ===== */

void FUN_00017418(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00023f84(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== FUN_0001744c @ 0001744c size=88 ===== */

undefined4 FUN_0001744c(size_t param_1,undefined4 *param_2)

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



/* ===== FUN_000174a4 @ 000174a4 size=108 ===== */

undefined4 FUN_000174a4(size_t param_1,undefined4 *param_2)

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



/* ===== FUN_00017510 @ 00017510 size=128 ===== */

undefined4 FUN_00017510(uint param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || ((int)((ulonglong)param_2 * (ulonglong)param_1 >> 0x20) == 0)) {
    uVar1 = FUN_0001744c(param_2 * param_1,param_3);
  }
  else {
    uVar1 = 0x7f2bb746;
  }
  return uVar1;
}



/* ===== FUN_00017590 @ 00017590 size=160 ===== */

undefined4 FUN_00017590(uint param_1,uint param_2,undefined4 *param_3)

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



/* ===== FUN_00017630 @ 00017630 size=76 ===== */

undefined4 FUN_00017630(undefined4 *param_1)

{
  free((void *)*param_1);
  *param_1 = 0;
  return 0;
}



/* ===== FUN_0001767c @ 0001767c size=112 ===== */

undefined4 FUN_0001767c(undefined4 param_1,size_t param_2,undefined4 *param_3)

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



/* ===== FUN_000176ec @ 000176ec size=52 ===== */

void FUN_000176ec(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 6;
  return;
}



/* ===== FUN_00017720 @ 00017720 size=52 ===== */

void FUN_00017720(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



/* ===== FUN_00017814 @ 00017814 size=52 ===== */

void FUN_00017814(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x12;
  return;
}



/* ===== FUN_00017848 @ 00017848 size=52 ===== */

void FUN_00017848(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x22;
  return;
}



/* ===== FUN_0001787c @ 0001787c size=44 ===== */

uint FUN_0001787c(int param_1)

{
  return *(uint *)(param_1 + 8) & 0x10;
}



/* ===== FUN_000178a8 @ 000178a8 size=44 ===== */

uint FUN_000178a8(int param_1)

{
  return *(uint *)(param_1 + 8) & 0x20;
}



/* ===== FUN_000178d4 @ 000178d4 size=56 ===== */

undefined4 FUN_000178d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001b270(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_0001790c @ 0001790c size=68 ===== */

undefined4 FUN_0001790c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00044a2c(param_2 + -1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28));
  return uVar1;
}



/* ===== FUN_00017950 @ 00017950 size=56 ===== */

undefined4 FUN_00017950(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001b2dc(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00017988 @ 00017988 size=56 ===== */

undefined4 FUN_00017988(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001b354(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000179c0 @ 000179c0 size=56 ===== */

undefined4 FUN_000179c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001b4a8(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000179f8 @ 000179f8 size=80 ===== */

int FUN_000179f8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00044a2c(param_1 + -1,param_2);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ===== FUN_00017a48 @ 00017a48 size=104 ===== */

longlong FUN_00017a48(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  if (param_1 == 0 && param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_00045084(param_1 + -1,param_2 - (uint)(param_1 == 0),param_3,param_4);
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* ===== FUN_00017ab0 @ 00017ab0 size=44 ===== */

ushort FUN_00017ab0(int param_1)

{
  return *(ushort *)(param_1 + 6) & 0xff;
}



/* ===== FUN_00017adc @ 00017adc size=92 ===== */

void FUN_00017adc(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xff00 | param_2 & 0xff;
  return;
}



/* ===== FUN_00017b68 @ 00017b68 size=88 ===== */

void FUN_00017b68(int param_1,short param_2)

{
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xff | param_2 << 8;
  return;
}



/* ===== FUN_00017c08 @ 00017c08 size=120 ===== */

int FUN_00017c08(size_t param_1,uint param_2,void **param_3)

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



/* ===== FUN_00017c80 @ 00017c80 size=56 ===== */

bool FUN_00017c80(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_00017cb8 @ 00017cb8 size=228 ===== */

undefined4
FUN_00017cb8(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
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



/* ===== FUN_00017d9c @ 00017d9c size=1124 ===== */

int FUN_00017d9c(undefined4 param_1,char *param_2,uint *param_3,char *param_4,size_t param_5)

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
  local_28 = setmntent(param_1,&DAT_00045b20);
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
    iVar3 = FUN_00017c80(local_88.st_mode);
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
          if (local_2c == (undefined4 *)0x0) goto LAB_00017fd8;
        } while (*(char *)*local_2c != '/');
        iVar3 = strcmp(param_2,(char *)*local_2c);
        if (iVar3 == 0) goto LAB_00017fd8;
        iVar3 = stat((char *)*local_2c,&local_88);
      } while (iVar3 != 0);
      iVar3 = FUN_00017c80(local_88.st_mode);
      if (iVar3 == 0) break;
      if (((local_20 != 0 || iStack_1c != 0) &&
          (iStack_1c == local_88.st_rdev._4_4_ && local_20 == (int)local_88.st_rdev)) ||
         (iVar3 = FUN_00017cb8(*local_2c,local_88.st_rdev._4_4_,(int)local_88.st_rdev,
                               local_88.st_rdev._4_4_,local_18,iStack_14,local_24), iVar3 == 1))
      goto LAB_00017fd8;
    }
  } while (((local_18 == 0 && iStack_14 == 0) ||
           (iStack_14 != local_88.st_dev._4_4_ || local_18 != (int)local_88.st_dev)) ||
          (local_24 != local_88.st_ino));
LAB_00017fd8:
  if (local_2c == (undefined4 *)0x0) {
    if (((local_20 == 0 && iStack_1c == 0) || (iVar3 = stat("/",&local_88), iVar3 != 0)) ||
       (iStack_1c != local_88.st_dev._4_4_ || local_20 != (int)local_88.st_dev)) goto LAB_000181e8;
    *param_3 = 1;
    if (param_4 != (char *)0x0) {
      strncpy(param_4,"/",param_5);
    }
LAB_00018150:
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
      goto LAB_000181e8;
    }
    if ((local_20 != 0 || iStack_1c != 0) &&
       (iStack_1c != local_88.st_dev._4_4_ || local_20 != (int)local_88.st_dev)) goto LAB_000181e8;
    *param_3 = 1;
    iVar3 = hasmntopt(local_2c,&DAT_00045b3c);
    if (iVar3 != 0) {
      *param_3 = *param_3 | 4;
    }
    if (param_4 != (char *)0x0) {
      strncpy(param_4,(char *)local_2c[1],param_5);
    }
    iVar3 = strcmp((char *)local_2c[1],"/");
    if (iVar3 == 0) goto LAB_00018150;
  }
  local_c = 0;
LAB_000181e8:
  endmntent(local_28);
  return local_c;
}



/* ===== FUN_00018200 @ 00018200 size=152 ===== */

undefined4 FUN_00018200(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00017d9c("/proc/mounts",param_1,param_2,param_3,param_4);
  if ((iVar1 == 0) && (*param_2 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00017d9c("/etc/mtab",param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



/* ===== FUN_00018298 @ 00018298 size=616 ===== */

int FUN_00018298(char *param_1)

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
  if ((iVar1 == 0) && (iVar1 = FUN_00017c80(sStack_478.st_mode), iVar1 != 0)) {
    local_10 = CONCAT44(sStack_478.st_rdev._4_4_,(int)sStack_478.st_rdev);
  }
  local_18 = fopen("/proc/swaps","r");
  if (local_18 == (FILE *)0x0) {
    local_14 = 0;
  }
  else {
    pcVar2 = fgets(local_41c,0x400,local_18);
    if (pcVar2 != (char *)0x0) {
      if (local_41c[0] == '\0') goto LAB_000184b8;
      iVar1 = strncmp(local_41c,"Filename\t",9);
      if (iVar1 == 0) goto LAB_000184b8;
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
           (iVar1 = FUN_00017c80(sStack_478.st_mode), iVar1 != 0)) {
          if (local_10._4_4_ == sStack_478.st_rdev._4_4_ && (int)local_10 == (int)sStack_478.st_rdev
             ) {
            local_14 = local_14 + 1;
            break;
          }
        }
LAB_000184b8:
        pcVar2 = fgets(local_41c,0x400,local_18);
      } while (pcVar2 != (char *)0x0);
    }
    fclose(local_18);
  }
  return local_14;
}



/* ===== FUN_00018500 @ 00018500 size=448 ===== */

int FUN_00018500(char *param_1,uint *param_2,char *param_3,size_t param_4)

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
      iVar2 = FUN_00018298(param_1);
      if (iVar2 == 0) {
        local_c = FUN_00018200(param_1,param_2,param_3,param_4);
      }
      else {
        *param_2 = 9;
        strncpy(param_3,"<swap>",param_4);
      }
      if (local_c == 0) {
        iVar2 = stat(param_1,&sStack_68);
        if ((iVar2 == 0) && (iVar2 = FUN_00017c80(sStack_68.st_mode), iVar2 != 0)) {
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



/* ===== FUN_000186c0 @ 000186c0 size=56 ===== */

undefined4 FUN_000186c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018500(param_1,param_2,0,0);
  return uVar1;
}



/* ===== FUN_000186f8 @ 000186f8 size=252 ===== */

__off64_t FUN_000186f8(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  __off_t _Var2;
  __off64_t _Var3;
  int local_10;
  int iStack_c;
  
  if (DAT_0005b41c == 0) {
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
    DAT_0005b41c = DAT_0005b41c + 1;
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



/* ===== FUN_000187f4 @ 000187f4 size=56 ===== */

bool FUN_000187f4(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_000188cc @ 000188cc size=144 ===== */

undefined4 FUN_000188cc(undefined4 param_1)

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



/* ===== FUN_0001895c @ 0001895c size=1148 ===== */

int FUN_0001895c(int param_1,int param_2,uint param_3,int param_4,int param_5,void *param_6)

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
    lVar7 = FUN_000186f8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),iVar4,iVar5,0);
    if (lVar7 != CONCAT44(iVar5,iVar4)) {
      piVar2 = __errno_location();
      if (*piVar2 == 0) {
        local_14 = 0x7f2bb745;
      }
      else {
        piVar2 = __errno_location();
        local_14 = *piVar2;
      }
      goto LAB_00018d40;
    }
    if ((*(int *)(param_1 + 0x60) != 0) &&
       ((((uint)param_6 & *(int *)(param_1 + 0x60) - 1U) != 0 ||
        ((local_18 & *(int *)(param_1 + 0x60) - 1U) != 0)))) goto LAB_00018d2c;
    local_1c = read(*(int *)(param_2 + 4),param_6,local_18);
    if (local_1c == local_18) {
      return 0;
    }
  }
  else {
    lVar7 = FUN_000186f8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),iVar4,iVar5,0);
    if (lVar7 != CONCAT44(iVar5,iVar4)) {
      piVar2 = __errno_location();
      if (*piVar2 == 0) {
        local_14 = 0x7f2bb745;
      }
      else {
        piVar2 = __errno_location();
        local_14 = *piVar2;
      }
      goto LAB_00018d40;
    }
LAB_00018d2c:
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
LAB_00018d40:
  if ((-1 < (int)local_1c) && ((int)local_1c < (int)local_18)) {
    memset((void *)((int)local_20 + local_1c),0,local_18 - local_1c);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    local_14 = (**(code **)(param_1 + 0x10))
                         (param_1,param_3,param_5,local_20,local_18,local_1c,local_14);
  }
  return local_14;
}



/* ===== FUN_00018dd8 @ 00018dd8 size=1344 ===== */

int FUN_00018dd8(int param_1,int param_2,uint param_3,int param_4,int param_5,void *param_6)

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
    lVar5 = FUN_000186f8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),local_20,
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
      goto LAB_000192c0;
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
LAB_000190b8:
        local_28 = 0x7f2bb725;
      }
      goto LAB_000192c0;
    }
  }
  else {
    lVar5 = FUN_000186f8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),local_20,
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
      goto LAB_000192c0;
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
        goto LAB_000192c0;
      }
      memset((void *)(*(int *)(param_2 + 0xe0) + local_24),0,*(int *)(param_1 + 0xc) - local_24);
    }
    local_24 = local_14;
    if (*(int *)(param_1 + 0xc) < (int)local_14) {
      local_24 = *(size_t *)(param_1 + 0xc);
    }
    memcpy(*(void **)(param_2 + 0xe0),local_2c,local_24);
    lVar5 = FUN_000186f8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),local_20,
                         iStack_1c,0);
    if (lVar5 != CONCAT44(iStack_1c,local_20)) break;
    local_24 = write(*(int *)(param_2 + 4),*(void **)(param_2 + 0xe0),*(size_t *)(param_1 + 0xc));
    if ((int)local_24 < 0) {
      piVar2 = __errno_location();
      local_28 = *piVar2;
      goto LAB_000192c0;
    }
    if (local_24 != *(uint *)(param_1 + 0xc)) goto LAB_000190b8;
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
LAB_000192c0:
  if (*(int *)(param_1 + 0x14) != 0) {
    local_28 = (**(code **)(param_1 + 0x14))
                         (param_1,param_3,param_5,local_2c,local_14,local_24,local_28);
  }
  return local_28;
}



/* ===== FUN_00019318 @ 00019318 size=332 ===== */

int FUN_00019318(int param_1,int param_2)

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
          FUN_00017630(param_2 + 0xe0);
        }
        local_c = FUN_00029308(param_1,0,param_2 + 0xe0);
      }
      return local_c;
    }
    local_10[2] = 0;
    local_10[3] = 0;
    local_10[4] = 0;
    *(byte *)(local_10 + 5) = *(byte *)(local_10 + 5) & 0xfe;
    *(byte *)(local_10 + 5) = *(byte *)(local_10 + 5) & 0xfd;
    if (*local_10 != 0) {
      FUN_00017630(local_10);
    }
    iVar1 = FUN_00029308(param_1,0,local_10);
    if (iVar1 != 0) break;
    local_14 = local_14 + 1;
    local_10 = local_10 + 6;
    local_c = 0;
  }
  return iVar1;
}



/* ===== FUN_00019464 @ 00019464 size=216 ===== */

void FUN_00019464(int param_1)

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
      FUN_00017630(local_c);
    }
    local_c = local_c + 6;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_00017630(param_1 + 0xe0);
  }
  return;
}



/* ===== FUN_0001953c @ 0001953c size=328 ===== */

int FUN_0001953c(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

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



/* ===== FUN_00019684 @ 00019684 size=204 ===== */

void FUN_00019684(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  if (((*(byte *)(param_3 + 5) & 1) != 0) && ((*(byte *)(param_3 + 5) & 2) != 0)) {
    FUN_00018dd8(param_1,param_2,param_3[2],param_3[3],1,*param_3);
  }
  *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
  *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) & 0xfe;
  param_3[2] = param_5;
  param_3[3] = param_6;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  param_3[4] = *(undefined4 *)(param_2 + 0x10);
  return;
}



/* ===== FUN_00019750 @ 00019750 size=284 ===== */

int FUN_00019750(undefined4 param_1,int param_2,int param_3)

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
         (iVar1 = FUN_00018dd8(param_1,param_2,local_c[2],local_c[3],1,*local_c), iVar1 == 0)) {
        *(byte *)(local_c + 5) = *(byte *)(local_c + 5) & 0xfe;
        iVar1 = local_10;
      }
    }
    local_10 = iVar1;
    local_c = local_c + 6;
  }
  return local_10;
}



/* ===== FUN_0001986c @ 0001986c size=88 ===== */

int FUN_0001986c(char *param_1,int param_2,int param_3)

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



/* ===== FUN_000198c4 @ 000198c4 size=48 ===== */

int FUN_000198c4(char *param_1,stat64 *param_2)

{
  int iVar1;
  
  iVar1 = stat64(param_1,param_2);
  return iVar1;
}



/* ===== FUN_000198f4 @ 000198f4 size=48 ===== */

int FUN_000198f4(int param_1,stat64 *param_2)

{
  int iVar1;
  
  iVar1 = fstat64(param_1,param_2);
  return iVar1;
}



/* ===== FUN_00019924 @ 00019924 size=1236 ===== */

/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int FUN_00019924(char *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
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
  iVar2 = FUN_000188cc("UNIX_IO_FORCE_BOUNCE");
  local_234 = param_3;
  if (iVar2 != 0) {
    local_234 = param_3 | 8;
  }
  local_14 = FUN_0001744c(100,&local_1c);
  if (local_14 == 0) {
    memset(local_1c,0,100);
    *local_1c = 0x7f2bb705;
    local_14 = FUN_0001744c(0x100,&local_20);
    if (local_14 == 0) {
      local_1c[1] = param_5;
      sVar3 = strlen(param_1);
      local_14 = FUN_0001744c(sVar3 + 1,local_1c + 2);
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
          uVar4 = FUN_00024c08(local_20[1]);
          puVar1[0x18] = uVar4;
        }
        iVar2 = FUN_000198f4(local_20[1],auStack_88);
        if (iVar2 == 0) {
          iVar2 = FUN_000187f4(local_78);
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
        local_14 = FUN_00019318(local_1c,local_20);
        if (local_14 == 0) {
          if ((local_234 & 1) != 0) {
            local_218 = 0;
            local_18 = ioctl(local_20[1],0x125e,&local_218);
            if ((local_18 == 0) && (local_218 != 0)) {
              local_14 = 1;
              local_18 = 0;
              goto LAB_00019d6c;
            }
          }
          if (((((((local_234 & 1) != 0) && (iVar2 = uname(&uStack_210), iVar2 == 0)) &&
                (uStack_210.release[0] == '2')) &&
               ((uStack_210.release[1] == '.' && (uStack_210.release[2] == '4')))) &&
              ((uStack_210.release[3] == '.' &&
               ((uStack_210.release[4] == '1' && (0x2f < (byte)uStack_210.release[5])))))) &&
             (((byte)uStack_210.release[5] < 0x38 &&
              ((iVar2 = FUN_000198f4(local_20[1],auStack_88), iVar2 == 0 &&
               (iVar2 = FUN_000187f4(local_78), iVar2 != 0)))))) {
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
LAB_00019d6c:
  if (local_20 != (undefined4 *)0x0) {
    if (-1 < (int)local_20[1]) {
      close(local_20[1]);
    }
    FUN_00019464(local_20);
    FUN_00017630(&local_20);
  }
  if (local_1c != (undefined4 *)0x0) {
    if (local_1c[2] != 0) {
      FUN_00017630(local_1c + 2);
    }
    FUN_00017630(&local_1c);
  }
  return local_14;
}



/* ===== FUN_00019df8 @ 00019df8 size=216 ===== */

undefined4 FUN_00019df8(char *param_1,undefined4 param_2,undefined4 param_3)

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
    uVar3 = FUN_00019924(param_1,iVar1,bVar4,param_3,DAT_0005b2ac);
  }
  return uVar3;
}



/* ===== FUN_00019ed0 @ 00019ed0 size=228 ===== */

int FUN_00019ed0(int param_1,uint param_2,undefined4 param_3)

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
    iVar2 = FUN_0001986c(param_1,local_c,0);
    if (iVar2 < 0) {
      piVar1 = __errno_location();
      iVar2 = *piVar1;
    }
    else {
      iVar2 = FUN_00019924(param_1,iVar2,param_2,param_3,DAT_0005b230);
    }
  }
  return iVar2;
}



/* ===== FUN_00019fb4 @ 00019fb4 size=296 ===== */

int FUN_00019fb4(int *param_1)

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
        local_c = FUN_00019750(param_1,local_10,0);
        iVar1 = close(local_10[1]);
        if (iVar1 < 0) {
          piVar2 = __errno_location();
          local_c = *piVar2;
        }
        FUN_00019464(local_10);
        FUN_00017630(local_14 + 0x16);
        if (local_14[2] != 0) {
          FUN_00017630(local_14 + 2);
        }
        FUN_00017630(&local_14);
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



/* ===== FUN_0001a0dc @ 0001a0dc size=236 ===== */

int FUN_0001a0dc(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 == 0x7f2bb705) {
    piVar2 = (int *)param_1[0x16];
    if (*piVar2 == 0x7f2bb706) {
      if (param_2 != param_1[3]) {
        iVar1 = FUN_00019750(param_1,piVar2,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        param_1[3] = param_2;
        FUN_00019464(piVar2);
        iVar1 = FUN_00019318(param_1,piVar2);
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



/* ===== FUN_0001a1c8 @ 0001a1c8 size=864 ===== */

int FUN_0001a1c8(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,void *param_6)

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
        local_28 = FUN_00019750(param_1,local_20,0);
        if (local_28 == 0) {
          local_28 = FUN_0001895c(param_1,local_20,param_3,param_4,param_5,param_6);
        }
      }
      else {
        local_14 = param_6;
        local_48 = param_3;
        iStack_44 = param_4;
        while (0 < param_5) {
          local_24 = (undefined4 *)FUN_0001953c(local_20);
          if (local_24 == (undefined4 *)0x0) {
            if (param_5 == 1) {
              local_24 = local_38[0];
              FUN_00019684(param_1,local_20,local_38[0],iStack_44,local_48,iStack_44);
              local_28 = FUN_0001895c(param_1,local_20,local_48,iStack_44,1,*local_24);
              if (local_28 != 0) {
                *(byte *)(local_24 + 5) = *(byte *)(local_24 + 5) & 0xfd;
                return local_28;
              }
              memcpy(local_14,(void *)*local_24,param_1[3]);
              return 0;
            }
            local_18 = 1;
            while (((int)local_18 < param_5 &&
                   (iVar1 = FUN_0001953c(local_20,local_38 + local_18,local_48 + local_18,
                                         iStack_44 + ((int)local_18 >> 0x1f) +
                                         (uint)CARRY4(local_48,local_18),local_38 + local_18),
                   iVar1 == 0))) {
              local_18 = local_18 + 1;
            }
            local_28 = FUN_0001895c(param_1,local_20,local_48,iStack_44,local_18,local_14);
            if (local_28 != 0) {
              return local_28;
            }
            for (local_1c = 0; local_1c < (int)local_18; local_1c = local_1c + 1) {
              param_5 = param_5 + -1;
              local_24 = local_38[local_1c];
              bVar2 = 0xfffffffe < local_48;
              FUN_00019684(param_1,local_20,local_24,iStack_44,local_48,iStack_44);
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



/* ===== FUN_0001a528 @ 0001a528 size=80 ===== */

undefined4 FUN_0001a528(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a1c8(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0001a578 @ 0001a578 size=524 ===== */

int FUN_0001a578(int *param_1,int param_2,uint param_3,int param_4,int param_5,void *param_6)

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
        local_10 = FUN_00019750(param_1,local_18,1);
        if (local_10 == 0) {
          local_10 = FUN_00018dd8(param_1,local_18,param_3,param_4,param_5,param_6);
        }
      }
      else {
        local_1c = param_1[7] & 1;
        if (local_1c != 0) {
          uVar2 = FUN_00018dd8(param_1,local_18,param_3,param_4,param_5,param_6);
          param_2 = (int)((ulonglong)uVar2 >> 0x20);
          local_10 = (int)uVar2;
        }
        local_14 = param_6;
        local_30 = param_3;
        iStack_2c = param_4;
        for (; 0 < param_5; param_5 = param_5 + -1) {
          local_c = (int *)FUN_0001953c(local_18,param_2,local_30,iStack_2c,&local_20);
          if (local_c == (int *)0x0) {
            local_c = local_20;
            FUN_00019684(param_1,local_18,local_20,iStack_2c,local_30,iStack_2c);
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



/* ===== FUN_0001a784 @ 0001a784 size=224 ===== */

int FUN_0001a784(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_0001a864 @ 0001a864 size=80 ===== */

undefined4 FUN_0001a864(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a578(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0001a8b4 @ 0001a8b4 size=380 ===== */

int FUN_0001a8b4(int *param_1,uint param_2,size_t param_3,void *param_4)

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
        iVar2 = FUN_00019750(param_1,piVar3,1);
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



/* ===== FUN_0001aa30 @ 0001aa30 size=200 ===== */

int FUN_0001aa30(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 0x7f2bb705) {
    piVar3 = (int *)param_1[0x16];
    if (*piVar3 == 0x7f2bb706) {
      iVar2 = FUN_00019750(param_1,piVar3,0);
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



/* ===== FUN_0001aaf8 @ 0001aaf8 size=284 ===== */

undefined4 FUN_0001aaf8(int *param_1,char *param_2,char *param_3)

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



/* ===== FUN_0001ac14 @ 0001ac14 size=512 ===== */

int FUN_0001ac14(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_0001ae14 @ 0001ae14 size=820 ===== */

int FUN_0001ae14(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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
  iVar2 = FUN_000188cc("UNIX_IO_NOZEROOUT");
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
      if (local_1c != 0) goto LAB_0001b0e8;
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
LAB_0001b0e8:
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



/* ===== FUN_0001b148 @ 0001b148 size=60 ===== */

bool FUN_0001b148(int param_1)

{
  return (*(uint *)(param_1 + 100) & 2) != 0;
}



/* ===== FUN_0001b184 @ 0001b184 size=52 ===== */

void FUN_0001b184(int param_1)

{
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
  return;
}



/* ===== FUN_0001b1b8 @ 0001b1b8 size=60 ===== */

bool FUN_0001b1b8(int param_1)

{
  return (*(uint *)(param_1 + 100) & 8) != 0;
}



/* ===== FUN_0001b1f4 @ 0001b1f4 size=60 ===== */

bool FUN_0001b1f4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x80) != 0;
}



/* ===== FUN_0001b230 @ 0001b230 size=64 ===== */

bool FUN_0001b230(uint param_1,int param_2)

{
  return param_2 != 0 || 0x7fffffff < param_1;
}



/* ===== FUN_0001b270 @ 0001b270 size=108 ===== */

undefined4 FUN_0001b270(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
  uVar1 = FUN_00045084(param_3 - uVar2,param_4 - (uint)(param_3 < uVar2),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),0);
  return uVar1;
}



/* ===== FUN_0001b2dc @ 0001b2dc size=120 ===== */

longlong FUN_0001b2dc(int param_1,uint param_2)

{
  return (ulonglong)param_2 * (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x20) +
         (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x14);
}



/* ===== FUN_0001b354 @ 0001b354 size=148 ===== */

longlong FUN_0001b354(int param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == *(int *)(param_1 + 0x1c) + -1) {
    uVar1 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
    lVar2 = CONCAT44((int)((ulonglong)uVar1 >> 0x20) - (uint)((int)uVar1 == 0),(int)uVar1 + -1);
  }
  else {
    lVar2 = FUN_0001b2dc(param_1,param_2);
    lVar2 = lVar2 + (ulonglong)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) - 1);
  }
  return lVar2;
}



/* ===== FUN_0001b3e8 @ 0001b3e8 size=192 ===== */

int FUN_0001b3e8(int param_1,int param_2)

{
  int extraout_r2;
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_c;
  
  if (param_2 == *(int *)(param_1 + 0x1c) + -1) {
    uVar2 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
    uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
    FUN_00045084((uint)uVar2 - uVar1,(int)((ulonglong)uVar2 >> 0x20) - (uint)((uint)uVar2 < uVar1),
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



/* ===== FUN_0001b4a8 @ 0001b4a8 size=208 ===== */

undefined8 FUN_0001b4a8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x1c);
  iVar1 = FUN_0001b1b8(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_0001b578 @ 0001b578 size=132 ===== */

undefined8 FUN_0001b578(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = FUN_0001b1b8(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(param_2 + 0x74);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_0001b5fc @ 0001b5fc size=120 ===== */

undefined8 FUN_0001b5fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = FUN_0001b1f4(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x150);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_0001b674 @ 0001b674 size=84 ===== */

void FUN_0001b674(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = param_3;
  iVar1 = FUN_0001b1f4(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x150) = param_4;
  }
  return;
}



/* ===== FUN_0001b6c8 @ 0001b6c8 size=72 ===== */

void FUN_0001b6c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_0001b5fc(param_1);
  lVar1 = lVar2 + CONCAT44(param_4,param_3);
  FUN_0001b674(param_1,(int)((ulonglong)lVar2 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}



/* ===== FUN_0001b710 @ 0001b710 size=120 ===== */

undefined8 FUN_0001b710(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  iVar1 = FUN_0001b1f4(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x154);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_0001b788 @ 0001b788 size=84 ===== */

void FUN_0001b788(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar1 = FUN_0001b1f4(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x154) = param_4;
  }
  return;
}



/* ===== FUN_0001b7dc @ 0001b7dc size=72 ===== */

void FUN_0001b7dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_0001b710(param_1);
  lVar1 = lVar2 + CONCAT44(param_4,param_3);
  FUN_0001b788(param_1,(int)((ulonglong)lVar2 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}



/* ===== FUN_0001b824 @ 0001b824 size=120 ===== */

undefined8 FUN_0001b824(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_0001b1f4(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x158);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_0001b89c @ 0001b89c size=84 ===== */

void FUN_0001b89c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = param_3;
  iVar1 = FUN_0001b1f4(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x158) = param_4;
  }
  return;
}



/* ===== FUN_0001b8f0 @ 0001b8f0 size=72 ===== */

void FUN_0001b8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_0001b824(param_1);
  lVar1 = lVar2 + CONCAT44(param_4,param_3);
  FUN_0001b89c(param_1,(int)((ulonglong)lVar2 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}



/* ===== FUN_0001b938 @ 0001b938 size=112 ===== */

int FUN_0001b938(int param_1,int param_2,int param_3)

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



/* ===== FUN_0001b9a8 @ 0001b9a8 size=56 ===== */

undefined4 FUN_0001b9a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001b938(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0001b9e0 @ 0001b9e0 size=120 ===== */

uint FUN_0001b9e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  local_c = (uint)*(ushort *)(iVar1 + 0x18);
  if (0x39 < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
    local_c = CONCAT22(*(undefined2 *)(iVar1 + 0x38),*(ushort *)(iVar1 + 0x18));
  }
  return local_c;
}



/* ===== FUN_0001ba58 @ 0001ba58 size=160 ===== */

undefined8 FUN_0001ba58(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar3 = *puVar1;
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = puVar1[8];
  }
  return CONCAT44(uVar4,uVar3);
}



/* ===== FUN_0001baf8 @ 0001baf8 size=124 ===== */

void FUN_0001baf8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *puVar1 = param_3;
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    puVar1[8] = param_4;
  }
  return;
}



/* ===== FUN_0001bb74 @ 0001bb74 size=120 ===== */

uint FUN_0001bb74(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  local_c = (uint)*(ushort *)(iVar1 + 0x1a);
  if (0x3b < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
    local_c = CONCAT22(*(undefined2 *)(iVar1 + 0x3a),*(ushort *)(iVar1 + 0x1a));
  }
  return local_c;
}



/* ===== FUN_0001bbec @ 0001bbec size=160 ===== */

undefined8 FUN_0001bbec(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar3 = *(undefined4 *)(iVar1 + 4);
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x24);
  }
  return CONCAT44(uVar4,uVar3);
}



/* ===== FUN_0001bc8c @ 0001bc8c size=124 ===== */

void FUN_0001bc8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined4 *)(iVar1 + 4) = param_3;
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0x24) = param_4;
  }
  return;
}



/* ===== FUN_0001bd08 @ 0001bd08 size=160 ===== */

undefined8 FUN_0001bd08(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar3 = *(undefined4 *)(iVar1 + 8);
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
  }
  return CONCAT44(uVar4,uVar3);
}



/* ===== FUN_0001bda8 @ 0001bda8 size=124 ===== */

void FUN_0001bda8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined4 *)(iVar1 + 8) = param_3;
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = param_4;
  }
  return;
}



/* ===== FUN_0001be24 @ 0001be24 size=124 ===== */

uint FUN_0001be24(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0xc);
  iVar3 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x2c) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_0001bea0 @ 0001bea0 size=128 ===== */

void FUN_0001bea0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0xc) = (short)param_3;
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x2c) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_0001bf20 @ 0001bf20 size=124 ===== */

uint FUN_0001bf20(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0xe);
  iVar3 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x2e) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_0001bf9c @ 0001bf9c size=128 ===== */

void FUN_0001bf9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0xe) = (short)param_3;
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x2e) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_0001c01c @ 0001c01c size=124 ===== */

uint FUN_0001c01c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0x10);
  iVar3 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x30) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_0001c098 @ 0001c098 size=128 ===== */

void FUN_0001c098(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0x10) = (short)param_3;
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x30) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_0001c118 @ 0001c118 size=124 ===== */

uint FUN_0001c118(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0x1c);
  iVar3 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x32) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_0001c194 @ 0001c194 size=128 ===== */

void FUN_0001c194(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0x1c) = (short)param_3;
  iVar2 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x32) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_0001c214 @ 0001c214 size=68 ===== */

undefined2 FUN_0001c214(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  return *(undefined2 *)(iVar1 + 0x12);
}



/* ===== FUN_0001c258 @ 0001c258 size=72 ===== */

void FUN_0001c258(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined2 *)(iVar1 + 0x12) = 0;
  return;
}



/* ===== FUN_0001c2a0 @ 0001c2a0 size=88 ===== */

ushort FUN_0001c2a0(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  return param_3 & *(ushort *)(iVar1 + 0x12);
}



/* ===== FUN_0001c2f8 @ 0001c2f8 size=96 ===== */

void FUN_0001c2f8(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(ushort *)(iVar1 + 0x12) = *(ushort *)(iVar1 + 0x12) | param_3;
  return;
}



/* ===== FUN_0001c358 @ 0001c358 size=112 ===== */

void FUN_0001c358(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(ushort *)(iVar1 + 0x12) = ~param_3 & *(ushort *)(iVar1 + 0x12);
  return;
}



/* ===== FUN_0001c3c8 @ 0001c3c8 size=68 ===== */

undefined2 FUN_0001c3c8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  return *(undefined2 *)(iVar1 + 0x1e);
}



/* ===== FUN_0001c40c @ 0001c40c size=80 ===== */

void FUN_0001c40c(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001b9a8(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined2 *)(iVar1 + 0x1e) = param_3;
  return;
}



/* ===== FUN_0001c45c @ 0001c45c size=148 ===== */

undefined8 FUN_0001c45c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uStack_14 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    uStack_14 = (uint)*(ushort *)(param_2 + 0x76);
  }
  return CONCAT44(uStack_14,uVar2);
}



/* ===== FUN_0001c4f0 @ 0001c4f0 size=112 ===== */

void FUN_0001c4f0(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x68) = param_3;
  if ((param_1 != 0) && (iVar1 = FUN_0001b1f4(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    *(undefined2 *)(param_2 + 0x76) = param_4;
  }
  return;
}



/* ===== FUN_0001c560 @ 0001c560 size=244 ===== */

undefined4 FUN_0001c560(int param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*param_2 & 0xf000) == 0x8000) || (param_4 == 0)) {
    if ((((*param_2 & 0xf000) == 0x8000) && (iVar1 = FUN_0001b230(param_3,param_4), iVar1 != 0)) &&
       ((iVar1 = FUN_0001b148(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0 ||
        (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0)))) {
      FUN_0001b184(*(undefined4 *)(param_1 + 0x10));
      FUN_0001cf90(param_1);
      FUN_000176ec(param_1);
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



/* ===== FUN_0001c654 @ 0001c654 size=60 ===== */

bool FUN_0001c654(int param_1)

{
  return (*(uint *)(param_1 + 0x5c) & 0x200) != 0;
}



/* ===== FUN_0001c690 @ 0001c690 size=60 ===== */

bool FUN_0001c690(int param_1)

{
  return (*(uint *)(param_1 + 100) & 1) != 0;
}



/* ===== FUN_0001c6cc @ 0001c6cc size=52 ===== */

void FUN_0001c6cc(int param_1)

{
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffb;
  return;
}



/* ===== FUN_0001c700 @ 0001c700 size=60 ===== */

bool FUN_0001c700(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 8) != 0;
}



/* ===== FUN_0001c73c @ 0001c73c size=60 ===== */

bool FUN_0001c73c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x10) != 0;
}



/* ===== FUN_0001c778 @ 0001c778 size=140 ===== */

undefined4 FUN_0001c778(uint param_1,uint param_2)

{
  int extraout_r1;
  uint local_c;
  
  local_c = param_1;
  while( true ) {
    if (local_c < param_2) {
      return 0;
    }
    if (local_c == param_2) break;
    FUN_00044ad4(local_c,param_2);
    if (extraout_r1 != 0) {
      return 0;
    }
    local_c = FUN_00044a2c(local_c,param_2);
  }
  return 1;
}



/* ===== FUN_0001c804 @ 0001c804 size=300 ===== */

undefined4 FUN_0001c804(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0001c654(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      if ((param_2 < 2) || (iVar1 = FUN_0001c690(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
        uVar2 = 1;
      }
      else if ((param_2 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_0001c778(param_2,3);
        if (((iVar1 == 0) && (iVar1 = FUN_0001c778(param_2,5), iVar1 == 0)) &&
           (iVar1 = FUN_0001c778(param_2,7), iVar1 == 0)) {
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



/* ===== FUN_0001c930 @ 0001c930 size=732 ===== */

undefined4
FUN_0001c930(int param_1,undefined4 param_2,longlong *param_3,longlong *param_4,longlong *param_5,
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
  lVar8 = FUN_0001b2dc(param_1,param_2);
  if ((lVar8 == 0) && (*(int *)(param_1 + 0x14) == 0x400)) {
    lVar8 = 1;
  }
  iVar3 = FUN_0001c73c(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    local_38 = *(int *)(param_1 + 0x20) + (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0xce);
  }
  else {
    local_38 = *(int *)(*(int *)(param_1 + 0x10) + 0x104);
  }
  local_3c = FUN_0001c804(param_1,param_2);
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
  iVar3 = FUN_00044af4(0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0xff),uVar6);
  uVar4 = FUN_00044a2c(param_2,iVar3);
  iVar5 = FUN_0001c73c(*(undefined4 *)(param_1 + 0x10));
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
    FUN_00044ad4(param_2,iVar3);
    if ((extraout_r1 == 0) ||
       ((FUN_00044ad4(param_2,iVar3), extraout_r1_00 == 1 ||
        (FUN_00044ad4(param_2,iVar3), lVar1 = 0, extraout_r1_01 == iVar3 + -1)))) {
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



/* ===== FUN_0001cc0c @ 0001cc0c size=332 ===== */

int FUN_0001cc0c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
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
  
  FUN_0001c930(param_1,param_2,local_18,local_20,local_28,&local_2c);
  local_c = FUN_0001b3e8(param_1,param_2);
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
    local_10 = FUN_00044af4(0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0xff),uVar2);
    uVar1 = FUN_00044a2c(param_2,local_10);
    *param_6 = uVar1;
  }
  return (local_c - (*(int *)(param_1 + 0x28) + local_2c)) + -2;
}



/* ===== FUN_0001cd58 @ 0001cd58 size=568 ===== */

int FUN_0001cd58(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  if ((*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) == 0) || (*(int *)(param_1 + 0x54) == 0)
     ) {
LAB_0001cda0:
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x10))(*(undefined4 *)(param_1 + 4),0x400);
    iVar1 = FUN_0002912c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),1,0,0xfffffc00,
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
        iVar2 = FUN_00028fd0(*(undefined4 *)(param_1 + 4),(iVar2 + 0x200) * 2,(local_c - iVar2) * 2,
                             (void *)((int)param_2 + iVar2 * 2));
        if (iVar2 == 0x7f2bb750) goto LAB_0001cda0;
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



/* ===== FUN_0001cf90 @ 0001cf90 size=100 ===== */

void FUN_0001cf90(int param_1)

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



/* ===== FUN_0001cff4 @ 0001cff4 size=160 ===== */

int FUN_0001cff4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = param_2;
  if (0xffff < param_2) {
    local_c = 0xffff;
  }
  *(short *)(param_5 + 0x5a) = (short)local_c;
  iVar1 = FUN_0001dd88(param_1,param_5);
  if (iVar1 == 0) {
    iVar1 = FUN_0002912c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4,
                         0xfffffc00,param_5);
  }
  return iVar1;
}



/* ===== FUN_0001d094 @ 0001d094 size=44 ===== */

undefined4 FUN_0001d094(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d0c0(param_1,0);
  return uVar1;
}



/* ===== FUN_0001d0c0 @ 0001d0c0 size=1528 ===== */

int FUN_0001d0c0(int *param_1,uint param_2)

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
      FUN_0001c6cc(param_1[4]);
      local_24 = param_1[4];
      local_28 = param_1[9];
      iVar1 = FUN_0001c700(param_1[4]);
      if (iVar1 == 0) {
        local_34 = local_28;
        iVar1 = FUN_0001c73c(param_1[4]);
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
          FUN_0001c930(param_1,local_14,&local_50,&local_58,&local_60,0);
          if (((((param_1[2] & 0x200U) == 0) && (local_14 != 0)) &&
              (local_50 != 0 || iStack_4c != 0)) &&
             (local_18 = FUN_0001cff4(param_1,local_14,local_50,iStack_4c,local_24), local_18 != 0))
          goto LAB_0001d694;
          if ((param_1[2] & 0x800U) == 0) {
            if (((local_58 != 0 || iStack_54 != 0) &&
                (((param_1[2] & 0x200U) == 0 || (local_14 == 0)))) &&
               (local_18 = FUN_0002912c(param_1[1],local_20,local_58,iStack_54,local_20,local_34),
               local_18 != 0)) goto LAB_0001d694;
            if (local_60 != 0 || iStack_5c != 0) {
              if ((*(uint *)(param_1[4] + 0x60) & 0x80) == 0) {
                uVar3 = 0x20;
              }
              else {
                uVar3 = *(undefined2 *)(param_1[4] + 0xfe);
              }
              uVar2 = FUN_00044af4(0x400 << (*(uint *)(param_1[4] + 0x18) & 0xff),uVar3);
              local_38 = FUN_00044a2c(local_14,uVar2);
              local_18 = FUN_0002912c(param_1[1],1,local_60,iStack_5c,1,
                                      local_34 + local_38 * param_1[5]);
              if (local_18 != 0) goto LAB_0001d694;
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
      local_18 = FUN_0001dd88(param_1,local_24);
      if (local_18 != 0) {
        return local_18;
      }
      iVar1 = 0;
      if (((((param_2 & 1) != 0) ||
           (local_18 = (**(code **)(*(int *)(param_1[1] + 4) + 0x1c))(param_1[1]), iVar1 = local_18,
           local_18 == 0)) &&
          (local_18 = iVar1, local_18 = FUN_0001cd58(param_1,local_24), local_18 == 0)) &&
         (param_1[2] = param_1[2] & 0xfffffffb, (param_2 & 1) == 0)) {
        local_18 = (**(code **)(*(int *)(param_1[1] + 4) + 0x1c))(param_1[1]);
      }
    }
LAB_0001d694:
    *(short *)(param_1[4] + 0x3a) = (short)local_2c;
  }
  else {
    local_18 = 0x7f2bb701;
  }
  return local_18;
}



/* ===== FUN_0001d6b8 @ 0001d6b8 size=92 ===== */

int FUN_0001d6b8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = FUN_0001d740(uVar2,0);
  if (iVar1 != 0) {
    FUN_000204a4(uVar2);
  }
  *param_1 = 0;
  return iVar1;
}



/* ===== FUN_0001d714 @ 0001d714 size=44 ===== */

undefined4 FUN_0001d714(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d740(param_1,0);
  return uVar1;
}



/* ===== FUN_0001d740 @ 0001d740 size=596 ===== */

int FUN_0001d740(int *param_1,undefined4 param_2)

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
          uVar2 = FUN_00044a2c(local_18,(uint)param_1[5] >> 10);
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
      if ((((param_1[2] & 4U) == 0) || (local_14 = FUN_0001d0c0(param_1,param_2), local_14 == 0)) &&
         (local_14 = FUN_0002b534(param_1), local_14 == 0)) {
        FUN_000204a4(param_1);
        local_14 = 0;
      }
    }
  }
  else {
    local_14 = 0x7f2bb701;
  }
  return local_14;
}



/* ===== FUN_0001d994 @ 0001d994 size=60 ===== */

bool FUN_0001d994(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_0001d9d0 @ 0001d9d0 size=60 ===== */

bool FUN_0001d9d0(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0001da0c @ 0001da0c size=60 ===== */

bool FUN_0001da0c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x2000) != 0;
}



/* ===== FUN_0001da48 @ 0001da48 size=96 ===== */

undefined4 FUN_0001da48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0001d994(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0001daa8 @ 0001daa8 size=148 ===== */

void FUN_0001daa8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001da0c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      uVar2 = FUN_0003690c(0xffffffff,*(int *)(param_1 + 0x10) + 0x68,0x10);
      *(undefined4 *)(param_1 + 0xa8) = uVar2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x270);
  }
  return;
}



/* ===== FUN_0001db3c @ 0001db3c size=68 ===== */

undefined4 FUN_0001db3c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003690c(*(undefined4 *)(param_1 + 0xa8),param_2,0x3fc);
  return uVar1;
}



/* ===== FUN_0001db80 @ 0001db80 size=112 ===== */

bool FUN_0001db80(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_0001db3c(param_1,param_2);
    bVar2 = iVar1 == *(int *)(param_2 + 0x3fc);
  }
  return bVar2;
}



/* ===== FUN_0001dbf0 @ 0001dbf0 size=100 ===== */

undefined4 FUN_0001dbf0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    uVar2 = FUN_0001db3c(param_1,param_2);
    *(undefined4 *)(param_2 + 0x3fc) = uVar2;
  }
  return 0;
}



/* ===== FUN_0001dc54 @ 0001dc54 size=92 ===== */

bool FUN_0001dc54(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)(param_2 + 0x175) == '\x01';
  }
  return bVar2;
}



/* ===== FUN_0001dcb0 @ 0001dcb0 size=64 ===== */

undefined4 FUN_0001dcb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003690c(0xffffffff,param_2,0x3fc,0x3fc,param_2,param_1);
  return uVar1;
}



/* ===== FUN_0001dcf0 @ 0001dcf0 size=152 ===== */

bool FUN_0001dcf0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 100) & 0x400) == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_0001dcb0(param_1,param_2);
    bVar2 = iVar1 == *(int *)(param_2 + 0x3fc);
  }
  return bVar2;
}



/* ===== FUN_0001dd88 @ 0001dd88 size=140 ===== */

undefined4 FUN_0001dd88(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 100) & 0x400) != 0) {
    uVar1 = FUN_0001dcb0(param_1,param_2);
    *(undefined4 *)(param_2 + 0x3fc) = uVar1;
  }
  return 0;
}



/* ===== FUN_0001de14 @ 0001de14 size=168 ===== */

undefined4
FUN_0001de14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
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
  uVar1 = FUN_0003690c(*(undefined4 *)(param_1 + 0xa8),&local_20,8);
  *param_6 = uVar1;
  uVar1 = FUN_0003690c(*param_6,local_c,*(undefined4 *)(local_14 + 0x14));
  *param_6 = uVar1;
  *(undefined4 *)(param_5 + 0x10) = local_10;
  return 0;
}



/* ===== FUN_0001debc @ 0001debc size=156 ===== */

bool FUN_0001debc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int local_10 [2];
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_0001de14(param_1,param_2,param_3,param_4,param_5,local_10);
    if (iVar1 == 0) {
      bVar2 = *(int *)(param_5 + 0x10) == local_10[0];
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



/* ===== FUN_0001df58 @ 0001df58 size=144 ===== */

int FUN_0001df58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 local_10 [2];
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0001de14(param_1,param_2,param_3,param_4,param_5,local_10);
    if (iVar1 == 0) {
      *(undefined4 *)(param_5 + 0x10) = local_10[0];
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0001dfe8 @ 0001dfe8 size=40 ===== */

undefined2 FUN_0001dfe8(undefined2 param_1)

{
  return param_1;
}



/* ===== FUN_0001e010 @ 0001e010 size=40 ===== */

undefined2 FUN_0001e010(undefined2 param_1)

{
  return param_1;
}



/* ===== FUN_0001e038 @ 0001e038 size=492 ===== */

undefined4 FUN_0001e038(int param_1,int param_2,undefined4 *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int local_c;
  
  if (param_5 == 0) {
    uVar1 = 0xdfe8;
  }
  else {
    uVar1 = 0xe010;
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



/* ===== FUN_0001e224 @ 0001e224 size=72 ===== */

undefined4 FUN_0001e224(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e038(param_1,param_2,param_3,param_4,0);
  return uVar1;
}



/* ===== FUN_0001e26c @ 0001e26c size=76 ===== */

void FUN_0001e26c(undefined4 param_1,void *param_2)

{
  memset(param_2,0,0xc);
  FUN_0001fb78(param_1,0xc,param_2);
  *(undefined2 *)((int)param_2 + 6) = 0xde00;
  return;
}



/* ===== FUN_0001e2b8 @ 0001e2b8 size=400 ===== */

undefined4 FUN_0001e2b8(int param_1,int *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  uint local_10;
  int *local_c;
  
  if (param_4 == 0) {
    uVar1 = 0xdfe8;
  }
  else {
    uVar1 = 0xe010;
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



/* ===== FUN_0001e448 @ 0001e448 size=72 ===== */

bool FUN_0001e448(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001e2b8(param_1,param_2,0,0);
  return iVar1 == 0;
}



/* ===== FUN_0001e490 @ 0001e490 size=220 ===== */

int FUN_0001e490(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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
  local_10 = FUN_00028480(param_1,param_2,auStack_94);
  if (local_10 == 0) {
    local_14 = local_30;
    uVar1 = FUN_0003690c(*(undefined4 *)(local_9c + 0xa8),&local_a0,4);
    *param_4 = uVar1;
    uVar1 = FUN_0003690c(*param_4,&local_14,4);
    *param_4 = uVar1;
    uVar1 = FUN_0003690c(*param_4,local_c,param_5);
    *param_4 = uVar1;
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_0001e56c @ 0001e56c size=172 ===== */

bool FUN_0001e56c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_0001e2b8(param_1,param_3,&local_14,1);
  if (local_c == 0) {
    iVar1 = FUN_0001e490(param_1,param_2,param_3,&local_10,local_14 - param_3);
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



/* ===== FUN_0001e618 @ 0001e618 size=160 ===== */

int FUN_0001e618(undefined4 param_1,undefined4 param_2,int param_3)

{
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = FUN_0001e2b8(param_1,param_3,&local_14,1);
  if ((local_c == 0) &&
     (local_c = FUN_0001e490(param_1,param_2,param_3,&local_10,local_14 - param_3), local_c == 0)) {
    *(undefined4 *)(local_14 + 8) = local_10;
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_0001e6b8 @ 0001e6b8 size=312 ===== */

int FUN_0001e6b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5,
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
  local_18 = FUN_00028480(param_1,param_2,auStack_9c);
  if (local_18 == 0) {
    local_1c = local_38;
    uVar1 = FUN_0003690c(*(undefined4 *)(local_a4 + 0xa8),&local_a8,4);
    *param_4 = uVar1;
    uVar1 = FUN_0003690c(*param_4,&local_1c,4);
    *param_4 = uVar1;
    uVar1 = FUN_0003690c(*param_4,local_c,local_10);
    *param_4 = uVar1;
    uVar1 = FUN_0003690c(*param_4,param_7,8);
    *param_4 = uVar1;
    *(undefined4 *)(param_7 + 4) = local_14;
    local_18 = 0;
  }
  return local_18;
}



/* ===== FUN_0001e7f0 @ 0001e7f0 size=280 ===== */

bool FUN_0001e7f0(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  local_c = FUN_0001e038(param_1,param_3,&local_20,&local_24,1);
  if (local_c == 0) {
    local_10 = (uint)*local_20;
    local_14 = (uint)local_20[1];
    if (*(int *)(param_1 + 0x14) - 8U < local_10 * 8 + local_24) {
      bVar2 = false;
    }
    else {
      local_18 = local_20 + local_10 * 4;
      iVar1 = FUN_0001e6b8(param_1,param_2,param_3,&local_1c,local_24,local_14,local_18);
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



/* ===== FUN_0001e908 @ 0001e908 size=280 ===== */

int FUN_0001e908(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_24;
  ushort *local_20;
  undefined4 local_1c;
  ushort *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_c = FUN_0001e038(param_1,param_3,&local_20,&local_24,1);
  if (local_c == 0) {
    local_10 = (uint)*local_20;
    local_14 = (uint)local_20[1];
    if (*(int *)(param_1 + 0x14) - 8U < local_10 * 8 + local_24) {
      local_c = 0x7f2bb795;
    }
    else {
      local_18 = local_20 + local_10 * 4;
      local_c = FUN_0001e6b8(param_1,param_2,param_3,&local_1c,local_24,local_14,local_18);
      if (local_c == 0) {
        *(undefined4 *)(local_18 + 2) = local_1c;
      }
    }
  }
  return local_c;
}



/* ===== FUN_0001ea20 @ 0001ea20 size=196 ===== */

undefined4 FUN_0001ea20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0001e2b8(param_1,param_3,0,1);
    if (iVar1 == 0) {
      uVar2 = FUN_0001e56c(param_1,param_2,param_3);
    }
    else {
      iVar1 = FUN_0001e038(param_1,param_3,0,0,1);
      if (iVar1 == 0) {
        uVar2 = FUN_0001e7f0(param_1,param_2,param_3);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* ===== FUN_0001eae4 @ 0001eae4 size=228 ===== */

undefined4 FUN_0001eae4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0001e2b8(param_1,param_3,0,1);
    if (iVar1 == 0) {
      uVar2 = FUN_0001e618(param_1,param_2,param_3);
    }
    else {
      iVar1 = FUN_0001e038(param_1,param_3,0,0,1);
      if (iVar1 == 0) {
        uVar2 = FUN_0001e908(param_1,param_2,param_3);
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



/* ===== FUN_0001ebc8 @ 0001ebc8 size=60 ===== */

int FUN_0001ebc8(int param_1)

{
  return param_1 + (*(ushort *)(param_1 + 4) + 1) * 0xc;
}



/* ===== FUN_0001ec04 @ 0001ec04 size=236 ===== */

int FUN_0001ec04(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

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
  local_10 = FUN_00028480(param_1,param_2,auStack_94);
  if (local_10 == 0) {
    local_14 = local_30;
    uVar1 = FUN_0003690c(*(undefined4 *)(local_9c + 0xa8),&local_a0,4);
    *param_4 = uVar1;
    uVar1 = FUN_0003690c(*param_4,&local_14,4);
    *param_4 = uVar1;
    uVar1 = FUN_0003690c(*param_4,param_3,local_c);
    *param_4 = uVar1;
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_0001ecf0 @ 0001ecf0 size=164 ===== */

bool FUN_0001ecf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  int local_18 [2];
  int local_10;
  int *local_c;
  
  local_c = (int *)FUN_0001ebc8(param_3);
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    local_10 = *local_c;
    iVar1 = FUN_0001ec04(param_1,param_2,param_3,local_18);
    if (iVar1 == 0) {
      bVar2 = local_10 == local_18[0];
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



/* ===== FUN_0001ed94 @ 0001ed94 size=144 ===== */

int FUN_0001ed94(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 *local_c;
  
  local_c = (undefined4 *)FUN_0001ebc8(param_3);
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0001ec04(param_1,param_2,param_3,local_14);
    if (iVar1 == 0) {
      *local_c = local_14[0];
    }
  }
  return iVar1;
}



/* ===== FUN_0001ee24 @ 0001ee24 size=228 ===== */

bool FUN_0001ee24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_10;
  uint local_c;
  
  iVar2 = FUN_0001b938(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar3 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = *(ushort *)(iVar2 + 0x1a);
    local_c = (uint)uVar1;
    local_10 = FUN_0003690c(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
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



/* ===== FUN_0001ef08 @ 0001ef08 size=192 ===== */

undefined4 FUN_0001ef08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0001b938(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar2 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar3 = FUN_0003690c(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
    *(short *)(iVar1 + 0x1a) = (short)uVar3;
    if (0x3b < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
      *(short *)(iVar1 + 0x3a) = (short)((uint)uVar3 >> 0x10);
    }
  }
  return 0;
}



/* ===== FUN_0001efc8 @ 0001efc8 size=228 ===== */

bool FUN_0001efc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_10;
  uint local_c;
  
  iVar2 = FUN_0001b938(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar3 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = *(ushort *)(iVar2 + 0x18);
    local_c = (uint)uVar1;
    local_10 = FUN_0003690c(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
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



/* ===== FUN_0001f0ac @ 0001f0ac size=192 ===== */

undefined4 FUN_0001f0ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0001b938(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar2 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar3 = FUN_0003690c(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
    *(short *)(iVar1 + 0x18) = (short)uVar3;
    if (0x39 < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
      *(short *)(iVar1 + 0x38) = (short)((uint)uVar3 >> 0x10);
    }
  }
  return 0;
}



/* ===== FUN_0001f16c @ 0001f16c size=328 ===== */

undefined4 FUN_0001f16c(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,int param_5)

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
  uVar1 = FUN_0003690c(*(undefined4 *)(param_1 + 0xa8),&local_28,4);
  *param_4 = uVar1;
  uVar1 = FUN_0003690c(*param_4,&local_1c,4);
  *param_4 = uVar1;
  uVar1 = FUN_0003690c(*param_4,local_10,local_14);
  *param_4 = uVar1;
  *(undefined2 *)(param_3 + 0x7c) = local_16;
  if (param_5 != 0) {
    *(undefined2 *)(param_3 + 0x82) = local_a;
  }
  return 0;
}



/* ===== FUN_0001f2b4 @ 0001f2b4 size=380 ===== */

undefined4 FUN_0001f2b4(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_24 [3];
  int local_18;
  char *local_14;
  uint local_10;
  uint local_c;
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
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
    iVar1 = FUN_0001f16c(param_1,param_2,param_3,local_24,local_18);
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



/* ===== FUN_0001f430 @ 0001f430 size=252 ===== */

int FUN_0001f430(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_14 [8];
  int local_c;
  
  iVar1 = FUN_0001d9d0(*(undefined4 *)(param_1 + 0x10));
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
    iVar1 = FUN_0001f16c(param_1,param_2,param_3,local_14,local_c);
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



/* ===== FUN_0001f52c @ 0001f52c size=424 ===== */

undefined2 FUN_0001f52c(int param_1,undefined4 param_2)

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
  local_10 = FUN_0001b938(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  if ((*(uint *)(*(int *)(local_24 + 0x10) + 0x60) & 0x80) == 0) {
    local_14 = 0x20;
  }
  else {
    local_14 = (uint)*(ushort *)(*(int *)(local_24 + 0x10) + 0xfe);
  }
  local_a = 0;
  iVar1 = FUN_0001d9d0(*(undefined4 *)(local_24 + 0x10));
  if (iVar1 == 0) {
    local_20 = 0x1e;
    local_a = FUN_00036508(0xffffffff,*(int *)(local_24 + 0x10) + 0x68,0x10);
    local_a = FUN_00036508(local_a,&local_28,4);
    local_a = FUN_00036508(local_a,local_10,local_20);
    local_20 = local_20 + 2;
    if (local_20 < local_14) {
      local_a = FUN_00036508(local_a,local_10 + local_20,local_14 - local_20);
    }
  }
  else {
    local_16 = *(undefined2 *)(local_10 + 0x1e);
    *(undefined2 *)(local_10 + 0x1e) = 0;
    local_1c = FUN_0003690c(*(undefined4 *)(local_24 + 0xa8),&local_28,4);
    local_a = FUN_0003690c(local_1c,local_10,local_14);
    *(undefined2 *)(local_10 + 0x1e) = local_16;
  }
  return local_a;
}



/* ===== FUN_0001f6d4 @ 0001f6d4 size=108 ===== */

undefined4 FUN_0001f6d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001da48(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0001c3c8(param_1,param_2);
    iVar2 = FUN_0001f52c(param_1,param_2);
    if (iVar1 != iVar2) {
      return 0;
    }
  }
  return 1;
}



/* ===== FUN_0001f740 @ 0001f740 size=88 ===== */

void FUN_0001f740(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001da48(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0001f52c(param_1,param_2);
    FUN_0001c40c(param_1,param_2,uVar2);
  }
  return;
}



/* ===== FUN_0001f798 @ 0001f798 size=164 ===== */

int FUN_0001f798(undefined4 param_1,int param_2,int param_3)

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
    iVar1 = FUN_00017104(param_1,local_c);
  } while (iVar1 == 0);
  return (local_c - uVar2) + 1;
}



/* ===== FUN_0001f83c @ 0001f83c size=596 ===== */

undefined4 FUN_0001f83c(int param_1)

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
    iVar2 = FUN_0001da48(param_1);
    if (iVar2 == 0) {
      uVar8 = 0;
    }
    else {
      local_18 = 0;
      while( true ) {
        if (*(uint *)(param_1 + 0x1c) <= local_18) break;
        iVar2 = FUN_0001c3c8(param_1,local_18);
        iVar3 = FUN_0001c118(param_1,local_18);
        iVar4 = FUN_0001c214(param_1,local_18);
        iVar5 = FUN_0001bf20(param_1,local_18);
        iVar6 = FUN_0001be24(param_1,local_18);
        if ((iVar6 == *(int *)(iVar7 + 0x20)) && (local_18 != *(int *)(param_1 + 0x1c) - 1U)) {
          FUN_0001c2f8(param_1,local_18,2);
        }
        if (iVar5 == *(int *)(iVar7 + 0x28)) {
          FUN_0001c2f8(param_1,local_18,1);
          FUN_0001c194(param_1,local_18,*(undefined4 *)(iVar7 + 0x28));
        }
        else {
          iVar6 = *(int *)(iVar7 + 0x28);
          iVar5 = FUN_0001f798(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar7 + 0x28),
                               local_18);
          FUN_0001c358(param_1,local_18,1);
          FUN_0001c194(param_1,local_18,iVar6 - iVar5);
        }
        FUN_0001f740(param_1,local_18);
        iVar5 = FUN_0001c214(param_1,local_18);
        if (iVar4 != iVar5) {
          bVar1 = true;
        }
        iVar4 = FUN_0001c118(param_1,local_18);
        if (iVar3 != iVar4) {
          bVar1 = true;
        }
        iVar3 = FUN_0001c3c8(param_1,local_18);
        if (iVar2 != iVar3) {
          bVar1 = true;
        }
        local_18 = local_18 + 1;
      }
      if (bVar1) {
        FUN_000176ec(param_1);
      }
      uVar8 = 0;
    }
  }
  return uVar8;
}



/* ===== FUN_0001fa90 @ 0001fa90 size=60 ===== */

bool FUN_0001fa90(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0001facc @ 0001facc size=172 ===== */

undefined4 FUN_0001facc(int param_1,int param_2,uint *param_3)

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



/* ===== FUN_0001fb78 @ 0001fb78 size=260 ===== */

undefined4 FUN_0001fb78(int param_1,uint param_2,int param_3)

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



/* ===== FUN_0001fc7c @ 0001fc7c size=244 ===== */

bool FUN_0001fc7c(int param_1,int param_2,uint param_3,uint param_4)

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
    iVar1 = FUN_0001facc(param_1,local_c,&local_10);
    if (iVar1 != 0) {
      return false;
    }
    local_1c = local_1c + local_10;
  } while (((7 < local_10) && ((local_10 & 3) == 0)) &&
          (iVar1 = FUN_00017ab0(local_c), iVar1 + 7 < (int)local_10));
  return false;
}



/* ===== FUN_0001fd70 @ 0001fd70 size=372 ===== */

int FUN_0001fd70(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
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
    local_10 = FUN_00028d44(param_1,param_2);
    if (local_10 == 0) {
      local_28 = param_2;
      local_24 = param_3;
      if (param_4 == 0) {
        local_c = local_10;
        local_c = FUN_0001744c(param_1[5],local_20);
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
      local_c = FUN_00034430(param_1,param_2,8,0,FUN_0001ffa4,&local_28);
      if (param_4 == 0) {
        FUN_00017630(local_20);
      }
      if (local_c == 0x7f2bb79d) {
        FUN_000250d0(param_1,param_2,&local_28);
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



/* ===== FUN_0001fee4 @ 0001fee4 size=92 ===== */

undefined4
FUN_0001fee4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*param_7)(param_3,param_4,param_5,param_6,param_7[1]);
  return uVar1;
}



/* ===== FUN_0001ff40 @ 0001ff40 size=100 ===== */

undefined4
FUN_0001ff40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_6;
  local_10 = param_5;
  uVar1 = FUN_0001fd70(param_1,param_2,param_3,param_4,FUN_0001fee4,&local_10);
  return uVar1;
}



/* ===== FUN_0001ffa4 @ 0001ffa4 size=1280 ===== */

uint FUN_0001ffa4(int param_1,undefined4 *param_2,int param_3,int param_4)

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
      uVar1 = FUN_00036a00(param_1,in_stack_0000000c[2],*param_2,param_2[1],in_stack_0000000c[2],0,
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
    iVar2 = FUN_0001fa90(*(undefined4 *)(param_1 + 0x10));
    if (iVar2 != 0) {
      local_2c = 0xc;
    }
    while (local_14 < local_24 - 8) {
      local_40 = (int *)(local_34[2] + local_14);
      iVar2 = FUN_0001facc(param_1,local_40,&local_4c);
      if (iVar2 != 0) {
        return 2;
      }
      if ((((local_24 < local_4c + local_14) || (local_4c < 8)) || ((local_4c & 3) != 0)) ||
         (iVar2 = FUN_00017ab0(local_40), (int)local_4c <= iVar2 + 7)) {
        local_34[6] = 0x7f2bb723;
        return 2;
      }
      if (*local_40 == 0) {
        if (((local_3c == 0) && (local_14 == local_24 - local_2c)) &&
           ((local_2c == *(ushort *)(local_40 + 1) && (*(short *)((int)local_40 + 6) == -0x2200))))
        {
          if ((local_34[1] & 4) != 0) {
            local_28 = 5;
            goto LAB_00020228;
          }
        }
        else if ((local_34[1] & 1) != 0) goto LAB_00020228;
      }
      else {
LAB_00020228:
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
          iVar2 = FUN_0001facc(param_1,local_40,&local_4c);
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
LAB_000203e4:
        local_14 = local_14 + local_4c;
      }
      else {
        iVar2 = FUN_00017ab0(local_40);
        local_44 = iVar2 + 0xbU & 0xfffffffc;
        if (local_44 == local_4c) goto LAB_000203e4;
        local_48 = local_14 + local_4c;
        local_14 = local_14 + local_44;
        while ((local_14 < local_48 &&
               (iVar2 = FUN_0001fc7c(param_1,local_34[2],local_14,local_48), iVar2 == 0))) {
          local_14 = local_14 + 4;
        }
      }
    }
    if (local_1c != 0) {
      if (local_3c == 0) {
        uVar1 = FUN_00036ba8(param_1,local_34[2],*param_2,param_2[1],local_34[2],0,*local_34);
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



/* ===== FUN_000204a4 @ 000204a4 size=648 ===== */

void FUN_000204a4(int *param_1,undefined4 param_2)

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
      FUN_00017630(local_c + 3);
      param_2 = extraout_r1_01;
    }
    if (local_c[4] != 0) {
      FUN_00017630(local_c + 4);
      param_2 = extraout_r1_02;
    }
    if (local_c[0x15] != 0) {
      FUN_00017630(local_c + 0x15);
      param_2 = extraout_r1_03;
    }
    if (local_c[9] != 0) {
      FUN_00017630(local_c + 9);
      param_2 = extraout_r1_04;
    }
    if (local_c[0xc] != 0) {
      FUN_0002ef1c(local_c[0xc]);
      param_2 = extraout_r1_05;
    }
    if (local_c[0xb] != 0) {
      FUN_0002eef8(local_c[0xb]);
      param_2 = extraout_r1_06;
    }
    if (local_c[0x16] != 0) {
      FUN_00017630(local_c + 0x16);
      param_2 = extraout_r1_07;
    }
    if (local_c[0x12] != 0) {
      FUN_0002079c(local_c[0x12]);
      param_2 = extraout_r1_08;
    }
    local_c[0x12] = 0;
    if (local_c[0x13] != 0) {
      FUN_000207c0(local_c[0x13]);
      param_2 = extraout_r1_09;
    }
    if (local_c[0x21] != 0) {
      FUN_00026308(local_c[0x21]);
      param_2 = extraout_r1_10;
    }
    if (local_c[0x25] != 0) {
      FUN_00017630(local_c + 0x25);
      param_2 = extraout_r1_11;
    }
    if (local_c[0x26] != 0) {
      FUN_00017630(local_c + 0x26);
      param_2 = extraout_r1_12;
    }
    *local_c = 0;
    FUN_0002985c(0,param_2,0,0,0,0,0);
    FUN_00017630(&local_c);
  }
  return;
}



/* ===== FUN_0002072c @ 0002072c size=112 ===== */

void FUN_0002072c(int *param_1)

{
  int *local_c;
  
  if (*param_1 == 0x7f2bb702) {
    local_c = param_1;
    if (param_1[3] != 0) {
      FUN_00017630(param_1 + 3);
    }
    local_c[3] = 0;
    FUN_00017630(&local_c);
  }
  return;
}



/* ===== FUN_0002079c @ 0002079c size=36 ===== */

void FUN_0002079c(undefined4 param_1)

{
  FUN_0002072c(param_1);
  return;
}



/* ===== FUN_000207c0 @ 000207c0 size=192 ===== */

void FUN_000207c0(int *param_1)

{
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb70c)) {
    local_c = param_1;
    if (param_1[7] != 0) {
      FUN_00017630(param_1 + 7);
    }
    local_c[7] = 0;
    if ((local_c[1] != 0) && (*(int **)(local_c[1] + 0x4c) == local_c)) {
      *(undefined4 *)(local_c[1] + 0x4c) = 0;
    }
    *local_c = 0;
    FUN_00017630(&local_c);
  }
  return;
}



/* ===== FUN_00020880 @ 00020880 size=140 ===== */

void FUN_00020880(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00043ed8(0,*(int *)(param_1 + 0x1c) + param_2,&DAT_00045c40,param_3);
  }
  else {
    FUN_00043ed8(0,*(int *)(param_1 + 0x1c) + param_2,"#%lu for %s",param_3,
                 *(undefined4 *)(param_1 + 0x14));
  }
  return;
}



/* ===== FUN_0002090c @ 0002090c size=132 ===== */

undefined4 FUN_0002090c(int *param_1)

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



/* ===== FUN_00020990 @ 00020990 size=556 ===== */

int FUN_00020990(int param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,
                void *param_7,undefined4 *param_8)

{
  size_t sVar1;
  int *local_14;
  size_t local_10;
  int local_c;
  
  local_c = FUN_0001744c(0x3c,&local_14);
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
      local_c = FUN_0001744c(sVar1 + 1,local_14 + 5);
      if (local_c != 0) {
        FUN_00017630(&local_14);
        return local_c;
      }
      strcpy((char *)local_14[5],param_6);
    }
    local_10 = ((uint)(local_14[4] - local_14[2]) >> 3) + 8 & 0xfffffffc;
    local_c = FUN_0001744c(local_10,local_14 + 6);
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
      FUN_00017630(local_14 + 5);
      FUN_00017630(&local_14);
    }
  }
  return local_c;
}



/* ===== FUN_00020bbc @ 00020bbc size=100 ===== */

undefined4
FUN_00020bbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020990(0x7f2bb70a,0,param_1,param_2,param_3,param_4,0,param_5);
  return uVar1;
}



/* ===== FUN_00020c20 @ 00020c20 size=132 ===== */

undefined4 FUN_00020c20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020990(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                       param_2);
  return uVar1;
}



/* ===== FUN_00020ca4 @ 00020ca4 size=168 ===== */

void FUN_00020ca4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *local_c;
  
  local_c = param_1;
  iVar1 = FUN_0002090c(param_1);
  if (iVar1 == 0) {
    *local_c = 0;
    if (local_c[5] != 0) {
      FUN_00017630(local_c + 5);
      local_c[5] = 0;
    }
    if (local_c[6] != 0) {
      FUN_00017630(local_c + 6);
      local_c[6] = 0;
    }
    FUN_00017630(&local_c);
  }
  return;
}



/* ===== FUN_00020d4c @ 00020d4c size=360 ===== */

undefined4 FUN_00020d4c(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[3] < param_2)) {
      FUN_00020880(param_1,2,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0002fb30(param_2 - param_1[2],param_1[6]);
    }
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00043ed8(0,0x7f2bb70a,"test_bitmap(%lu)",param_2);
      return 0;
    }
    FUN_000241e4(param_1,"ext2fs_test_generic_bitmap");
    uVar1 = FUN_00023334(param_1,extraout_r1,param_2,0);
  }
  return uVar1;
}



/* ===== FUN_00020eb4 @ 00020eb4 size=360 ===== */

undefined4 FUN_00020eb4(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[3] < param_2)) {
      FUN_00020880(param_1,0,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0002f9f8(param_2 - param_1[2],param_1[6]);
    }
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00043ed8(0,0x7f2bb70a,"mark_bitmap(%lu)",param_2);
      return 0;
    }
    FUN_000241e4(param_1,"ext2fs_mark_generic_bitmap");
    uVar1 = FUN_00022fec(param_1,extraout_r1,param_2,0);
  }
  return uVar1;
}



/* ===== FUN_0002101c @ 0002101c size=360 ===== */

undefined4 FUN_0002101c(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[3] < param_2)) {
      FUN_00020880(param_1,1,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0002fa90(param_2 - param_1[2],param_1[6]);
    }
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00043ed8(0,0x7f2bb70a,"mark_bitmap(%lu)",param_2);
      return 0;
    }
    FUN_000241e4(param_1,"ext2fs_unmark_generic_bitmap");
    uVar1 = FUN_00023190(param_1,extraout_r1,param_2,0);
  }
  return uVar1;
}



/* ===== FUN_00021184 @ 00021184 size=252 ===== */

int FUN_00021184(int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    iVar1 = param_1[2];
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00043ed8(0,0x7f2bb70a,"get_bitmap_start");
      return 0;
    }
    FUN_000241e4(param_1,"ext2fs_get_generic_bitmap_start");
    iVar1 = FUN_00022d80(param_1);
  }
  return iVar1;
}



/* ===== FUN_00021280 @ 00021280 size=252 ===== */

int FUN_00021280(int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    iVar1 = param_1[3];
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00043ed8(0,0x7f2bb70a,"get_bitmap_end");
      return 0;
    }
    FUN_000241e4(param_1,"ext2fs_get_generic_bitmap_end");
    iVar1 = FUN_00022e74(param_1);
  }
  return iVar1;
}



/* ===== FUN_0002137c @ 0002137c size=272 ===== */

void FUN_0002137c(int *param_1)

{
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    memset((void *)param_1[6],0,((uint)(param_1[4] - param_1[2]) >> 3) + 1);
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00043ed8(0,0x7f2bb70a,"clear_generic_bitmap");
      return;
    }
    FUN_000241e4(param_1,"ext2fs_clear_generic_bitmap");
    FUN_00022f68(param_1);
  }
  return;
}



/* ===== FUN_0002148c @ 0002148c size=144 ===== */

int FUN_0002148c(int *param_1,int param_2,int param_3,uint param_4,int *param_5)

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



/* ===== FUN_0002151c @ 0002151c size=456 ===== */

int FUN_0002151c(int param_1,uint param_2,int param_3,int *param_4)

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
        FUN_0002fa90(local_c - param_4[2],param_4[6]);
      }
    }
    if (param_3 == param_4[4]) {
      param_4[3] = param_2;
      param_1 = 0;
    }
    else {
      uVar1 = ((uint)(param_4[4] - param_4[2]) >> 3) + 1;
      uVar2 = ((uint)(param_3 - param_4[2]) >> 3) + 1;
      if ((uVar1 == uVar2) || (param_1 = FUN_0001767c(uVar1,uVar2,param_4 + 6), param_1 == 0)) {
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



/* ===== FUN_000216e4 @ 000216e4 size=364 ===== */

int FUN_000216e4(int param_1,int param_2,int *param_3,int *param_4)

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
      iVar1 = FUN_00016ce4(param_3,local_14);
      iVar2 = FUN_00016ce4(param_4,local_14);
      if (iVar1 != iVar2) {
        return param_2;
      }
    }
    param_1 = 0;
  }
  return param_1;
}



/* ===== FUN_00021850 @ 00021850 size=152 ===== */

void FUN_00021850(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = *(int *)(param_1 + 0xc) + 1;
  local_10 = local_c - *(int *)(param_1 + 8);
  for (; (local_c <= *(uint *)(param_1 + 0x10) && (*(uint *)(param_1 + 0xc) < local_c));
      local_c = local_c + 1) {
    FUN_0002f9f8(local_10,*(undefined4 *)(param_1 + 0x18));
    local_10 = local_10 + 1;
  }
  return;
}



/* ===== FUN_000218e8 @ 000218e8 size=192 ===== */

int FUN_000218e8(int *param_1,int param_2,uint param_3,int param_4,void *param_5)

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



/* ===== FUN_000219a8 @ 000219a8 size=192 ===== */

int FUN_000219a8(int *param_1,int param_2,uint param_3,int param_4,void *param_5)

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



/* ===== FUN_00021a68 @ 00021a68 size=172 ===== */

bool FUN_00021a68(void *param_1,uint param_2)

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
        iVar1 = memcmp(local_c,&DAT_00045d60,local_10);
        bVar2 = iVar1 == 0;
      }
      return bVar2;
    }
    iVar1 = memcmp(local_c,&DAT_00045d60,0x100);
    if (iVar1 != 0) break;
    local_10 = local_10 - 0x100;
    local_c = (void *)((int)local_c + 0x100);
  }
  return false;
}



/* ===== FUN_00021b14 @ 00021b14 size=604 ===== */

undefined4 FUN_00021b14(int param_1,int param_2,uint param_3)

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
  uVar1 = FUN_00021a68(iVar2 + local_c,local_10);
  return uVar1;
}



/* ===== FUN_00021d70 @ 00021d70 size=228 ===== */

undefined4 FUN_00021d70(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  if (((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < param_3)) ||
     (local_18 = param_2, param_3 < param_2)) {
    FUN_00020880(param_1,2,param_2);
    uVar2 = 0x16;
  }
  else {
    for (; local_18 <= param_3; local_18 = local_18 + 1) {
      iVar1 = FUN_0002fb30(local_18 - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        *param_4 = local_18;
        return 0;
      }
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* ===== FUN_00021e54 @ 00021e54 size=228 ===== */

undefined4 FUN_00021e54(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  if (((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < param_3)) ||
     (local_18 = param_2, param_3 < param_2)) {
    FUN_00020880(param_1,2,param_2);
    uVar2 = 0x16;
  }
  else {
    for (; local_18 <= param_3; local_18 = local_18 + 1) {
      iVar1 = FUN_0002fb30(local_18 - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if (iVar1 != 0) {
        *param_4 = local_18;
        return 0;
      }
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* ===== FUN_00021f38 @ 00021f38 size=184 ===== */

undefined4 FUN_00021f38(int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb708) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[4] < (param_3 + param_2) - 1)) {
      FUN_0002fb98(0x7f2bb72f,param_2,param_1[5]);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00021b14(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x7f2bb708;
  }
  return uVar1;
}



/* ===== FUN_00021ff0 @ 00021ff0 size=184 ===== */

undefined4 FUN_00021ff0(int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb709) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[4] < (param_3 + param_2) - 1)) {
      FUN_0002fb98(0x7f2bb732,param_2,param_1[5]);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00021b14(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x7f2bb709;
  }
  return uVar1;
}



/* ===== FUN_000220a8 @ 000220a8 size=200 ===== */

void FUN_000220a8(int param_1,uint param_2,int param_3)

{
  undefined4 local_c;
  
  if ((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < (param_3 + param_2) - 1)) {
    FUN_0002fb98(0x7f2bb72d,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  else {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      FUN_000168a4((local_c + param_2) - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    }
  }
  return;
}



/* ===== FUN_00022170 @ 00022170 size=200 ===== */

void FUN_00022170(int param_1,uint param_2,int param_3)

{
  undefined4 local_c;
  
  if ((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < (param_3 + param_2) - 1)) {
    FUN_0002fb98(0x7f2bb72e,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  else {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      FUN_00016910((local_c + param_2) - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    }
  }
  return;
}



/* ===== FUN_00022238 @ 00022238 size=148 ===== */

void FUN_00022238(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_00043ed8(0,*(int *)(param_1 + 0x34) + param_2,"#%llu",param_4,param_3,param_4);
  }
  else {
    FUN_00043ed8(0,*(int *)(param_1 + 0x34) + param_2,"#%llu for %s",param_4,param_3,param_4,
                 *(undefined4 *)(param_1 + 0x2c));
  }
  return;
}



/* ===== FUN_000222cc @ 000222cc size=764 ===== */

int FUN_000222cc(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
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
    local_c = &DAT_0005b2f4;
  }
  else if (local_24 == 3) {
    local_10 = FUN_00024a64(param_1,&local_18);
    if ((local_10 == 0) && (local_18 <= **(uint **)(param_1 + 0x10) / 0x140)) {
      local_c = &DAT_0005b2f4;
    }
    else {
      local_c = &DAT_0005b2b0;
    }
  }
  else {
    if (local_24 != 1) {
      return 0x16;
    }
    local_c = &DAT_0005b2b0;
  }
  local_10 = FUN_000174a4(0x48,&local_14);
  if (local_10 == 0) {
    iVar1 = gettimeofday((timeval *)(local_14 + 0xf),(__timezone_ptr_t)0x0);
    if (iVar1 == -1) {
      perror("gettimeofday");
      FUN_00017630(&local_14);
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
        local_10 = FUN_0001744c(sVar2 + 1,local_14 + 0xb);
        if (local_10 != 0) {
          FUN_00017630(&local_14);
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
        FUN_00017630(local_14 + 0xb);
        FUN_00017630(&local_14);
      }
    }
  }
  return local_10;
}



/* ===== FUN_000225c8 @ 000225c8 size=248 ===== */

void FUN_000225c8(int param_1)

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
    dStack_18 = (dVar4 + dVar2 * DAT_000226c0) - (dVar5 + dVar3 * DAT_000226c0);
    fprintf(stderr,"\n[+] %s bitmap (type %d)\n",*(undefined4 *)(param_1 + 0x2c),*local_c);
    fwrite("=================================================\n",1,0x32,stderr);
  }
  return;
}



/* ===== FUN_000226c8 @ 000226c8 size=364 ===== */

void FUN_000226c8(int *param_1)

{
  char *pcVar1;
  int *local_c;
  
  if (param_1 != (int *)0x0) {
    local_c = param_1;
    if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
      FUN_00020ca4(param_1);
    }
    else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
      pcVar1 = getenv("E2FSPROGS_BITMAP_STATS");
      if (pcVar1 != (char *)0x0) {
        FUN_000225c8(local_c);
        (**(code **)(local_c[2] + 0x38))(local_c);
      }
      (**(code **)(local_c[2] + 8))(local_c);
      if (local_c[0xb] != 0) {
        FUN_00017630(local_c + 0xb);
        local_c[0xb] = 0;
      }
      *local_c = 0;
      FUN_00017630(&local_c);
    }
  }
  return;
}



/* ===== FUN_00022834 @ 00022834 size=720 ===== */

int FUN_00022834(int *param_1,undefined4 *param_2)

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
    local_c = FUN_00020c20(param_1,param_2);
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    local_c = FUN_000174a4(0x48,&local_18);
    if (local_c == 0) {
      iVar2 = gettimeofday((timeval *)(local_18 + 0xf),(__timezone_ptr_t)0x0);
      if (iVar2 == -1) {
        perror("gettimeofday");
        FUN_00017630(&local_18);
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
          local_c = FUN_0001744c(sVar3 + 10,&local_14);
          uVar1 = s_copy_of_00045ef0._4_4_;
          if (local_c != 0) {
            FUN_00017630(&local_18);
            return local_c;
          }
          *(undefined4 *)local_14 = s_copy_of_00045ef0._0_4_;
          *(undefined4 *)(local_14 + 4) = uVar1;
          local_14[8] = s_copy_of_00045ef0[8];
          strcat(local_14,local_10);
          local_18[0xb] = (int)local_14;
        }
        local_c = (**(code **)(param_1[2] + 0xc))(param_1,local_18);
        if (local_c == 0) {
          *param_2 = local_18;
          local_c = 0;
        }
        else {
          FUN_00017630(local_18 + 0xb);
          FUN_00017630(&local_18);
        }
      }
    }
  }
  else {
    local_c = 0x16;
  }
  return local_c;
}



/* ===== FUN_00022b04 @ 00022b04 size=272 ===== */

undefined4
FUN_00022b04(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    uVar1 = FUN_0002151c(*param_1,param_3,param_5,param_1);
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



/* ===== FUN_00022c14 @ 00022c14 size=364 ===== */

undefined4 FUN_00022c14(int *param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_10 [2];
  
  if (param_1 == (int *)0x0) {
    param_2 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    param_2 = FUN_0002148c(param_1,*param_1,param_2,param_3,local_10);
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



/* ===== FUN_00022d80 @ 00022d80 size=244 ===== */

undefined8 FUN_00022d80(int *param_1)

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
          goto LAB_00022e64;
        }
      }
    }
    iVar1 = FUN_00021184(param_1);
    iVar2 = 0;
  }
LAB_00022e64:
  return CONCAT44(iVar2,iVar1);
}



/* ===== FUN_00022e74 @ 00022e74 size=244 ===== */

undefined8 FUN_00022e74(int *param_1)

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
          goto LAB_00022f58;
        }
      }
    }
    iVar1 = FUN_00021280(param_1);
    iVar2 = 0;
  }
LAB_00022f58:
  return CONCAT44(iVar2,iVar1);
}



/* ===== FUN_00022f68 @ 00022f68 size=132 ===== */

void FUN_00022f68(int *param_1)

{
  if (((*param_1 != 0x7f2bb70a) && (*param_1 != 0x7f2bb708)) && (*param_1 != 0x7f2bb709)) {
    (**(code **)(param_1[2] + 0x34))(param_1);
    return;
  }
  FUN_0002137c(param_1);
  return;
}



/* ===== FUN_00022fec @ 00022fec size=420 ===== */

undefined4 FUN_00022fec(int *param_1,undefined4 param_2,uint param_3,uint param_4)

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
      uVar3 = FUN_00020eb4(param_1,param_3);
    }
    else {
      FUN_00020880(param_1,0,0xffffffff);
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
    FUN_00022238(param_1,0,uVar2,param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00023190 @ 00023190 size=420 ===== */

undefined4 FUN_00023190(int *param_1,undefined4 param_2,uint param_3,uint param_4)

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
      uVar3 = FUN_0002101c(param_1,param_3);
    }
    else {
      FUN_00020880(param_1,1,0xffffffff);
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
    FUN_00022238(param_1,1,uVar2,param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00023334 @ 00023334 size=420 ===== */

undefined4 FUN_00023334(int *param_1,undefined4 param_2,uint param_3,uint param_4)

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
      uVar3 = FUN_00020d4c(param_1,param_3);
    }
    else {
      FUN_00020880(param_1,2,0xffffffff);
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
    FUN_00022238(param_1,2,uVar2,param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000234d8 @ 000234d8 size=368 ===== */

undefined4
FUN_000234d8(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 + (uint)CARRY4(param_3,param_5) == (uint)(param_3 + param_5 == 0)) {
      uVar1 = FUN_000219a8(param_1,*param_1,param_3,param_5,param_6);
    }
    else {
      FUN_00020880(param_1,1,0xffffffff);
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



/* ===== FUN_00023648 @ 00023648 size=368 ===== */

undefined4
FUN_00023648(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 + (uint)CARRY4(param_3,param_5) == (uint)(param_3 + param_5 == 0)) {
      uVar1 = FUN_000218e8(param_1,*param_1,param_3,param_5,param_6);
    }
    else {
      FUN_00020880(param_1,1,0xffffffff);
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



/* ===== FUN_000237b8 @ 000237b8 size=516 ===== */

undefined4 FUN_000237b8(undefined4 param_1,int *param_2,int *param_3)

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
      param_1 = FUN_000216e4(*param_2,param_1,param_2,param_3);
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
          uVar4 = FUN_00023334(param_2,uStack_1c,local_20,uStack_1c);
          iVar1 = FUN_00023334(param_3,(int)((ulonglong)uVar4 >> 0x20),local_20,uStack_1c);
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



/* ===== FUN_000239bc @ 000239bc size=192 ===== */

void FUN_000239bc(int *param_1)

{
  if (((*param_1 != 0x7f2bb70a) && (*param_1 != 0x7f2bb708)) && (*param_1 != 0x7f2bb709)) {
    (**(code **)(param_1[2] + 0x20))
              (param_1,*(code **)(param_1[2] + 0x20),param_1[6] + 1,
               param_1[7] + (uint)(0xfffffffe < (uint)param_1[6]),
               param_1[8] - (int)*(undefined8 *)(param_1 + 6));
    return;
  }
  FUN_00021850(param_1);
  return;
}



/* ===== FUN_00023a7c @ 00023a7c size=680 ===== */

uint FUN_00023a7c(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

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
    iVar1 = FUN_00023334(param_1,param_4,param_3,param_4);
    uVar4 = (uint)(iVar1 == 0);
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 + CARRY4(param_3,param_5) == (uint)(param_3 + param_5 == 0)) {
      uVar4 = FUN_00021f38(param_1,param_3,param_5);
    }
    else {
      FUN_00020880(param_1,1,0xffffffff);
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
    FUN_0002fb98(0x7f2bb72f,uVar5,param_1[0xb]);
    uVar4 = 0x16;
  }
  else {
    uVar4 = 0x16;
  }
  return uVar4;
}



/* ===== FUN_00023d24 @ 00023d24 size=608 ===== */

void FUN_00023d24(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

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
        FUN_00020880(param_1,1,0xffffffff);
        return;
      }
      FUN_000220a8(param_1,param_3,param_5);
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
      FUN_0002fb98(0x7f2bb72d,uVar4,param_1[0xb]);
    }
  }
  return;
}



/* ===== FUN_00023f84 @ 00023f84 size=608 ===== */

void FUN_00023f84(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

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
        FUN_00020880(param_1,1,0xffffffff);
        return;
      }
      FUN_00022170(param_1,param_3,param_5);
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
      FUN_0002fb98(0x7f2bb72e,uVar4,param_1[0xb]);
    }
  }
  return;
}



/* ===== FUN_000241e4 @ 000241e4 size=132 ===== */

void FUN_000241e4(int param_1,undefined4 param_2)

{
  if ((param_1 == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    FUN_00043ed8(0,0x7f2bb70a,"called %s with 64-bit bitmap",param_2);
  }
  else {
    FUN_00043ed8(0,0x7f2bb70a,"called %s with 64-bit bitmap for %s",param_2,
                 *(undefined4 *)(param_1 + 0x2c));
  }
  return;
}



/* ===== FUN_00024268 @ 00024268 size=444 ===== */

int FUN_00024268(int param_1,int *param_2)

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
  iVar1 = FUN_0002f4ac(local_20);
  if (iVar2 == iVar1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0002f118(param_1,"converted cluster bitmap",&local_40);
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
        iVar1 = FUN_00016f3c(local_20,uStack_14,local_18,uStack_14);
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
          FUN_00016edc(local_40,local_40,local_18,uStack_14);
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
      FUN_0002ef1c(local_20);
      *param_2 = local_40;
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00024424 @ 00024424 size=800 ===== */

int FUN_00024424(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6
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
      iVar2 = FUN_00021d70(param_1,param_3,param_5,&local_34);
      if (iVar2 == 0) {
        *param_7 = local_34;
        param_7[1] = 0;
      }
    }
    else {
      FUN_00020880(param_1,2,param_3);
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
    FUN_00022238(param_1,2,param_3,param_4);
    iVar2 = 0x16;
  }
  else {
    iVar2 = 0x16;
  }
  return iVar2;
}



/* ===== FUN_00024744 @ 00024744 size=800 ===== */

int FUN_00024744(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6
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
      iVar2 = FUN_00021e54(param_1,param_3,param_5,&local_34);
      if (iVar2 == 0) {
        *param_7 = local_34;
        param_7[1] = 0;
      }
    }
    else {
      FUN_00020880(param_1,2,param_3);
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
    FUN_00022238(param_1,2,param_3,param_4);
    iVar2 = 0x16;
  }
  else {
    iVar2 = 0x16;
  }
  return iVar2;
}



/* ===== FUN_00024a64 @ 00024a64 size=272 ===== */

undefined4 FUN_00024a64(int *param_1,uint *param_2)

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
      uVar1 = FUN_0001c01c(param_1,local_c);
      if (uVar3 < uVar1) {
        uVar1 = uVar3 >> 3;
      }
      else {
        uVar1 = FUN_0001c01c(param_1,local_c);
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



/* ===== FUN_00024b74 @ 00024b74 size=148 ===== */

int FUN_00024b74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0001986c(param_1,0,0);
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



/* ===== FUN_00024c08 @ 00024c08 size=152 ===== */

int FUN_00024c08(int param_1)

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



/* ===== FUN_00024ca0 @ 00024ca0 size=148 ===== */

int FUN_00024ca0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0001986c(param_1,0,0);
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



/* ===== FUN_00024d34 @ 00024d34 size=60 ===== */

bool FUN_00024d34(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_00024d70 @ 00024d70 size=60 ===== */

bool FUN_00024d70(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 2) != 0;
}



/* ===== FUN_00024dac @ 00024dac size=60 ===== */

bool FUN_00024dac(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x40) != 0;
}



/* ===== FUN_00024de8 @ 00024de8 size=204 ===== */

int FUN_00024de8(undefined4 *param_1)

{
  undefined4 local_10;
  int local_c;
  
  local_c = FUN_00039bc4(*param_1,param_1[1],&local_10);
  if (local_c == 0) {
    local_c = FUN_00038de4(local_10);
    if ((local_c == 0) &&
       (local_c = FUN_0003973c(local_10,"system.data",param_1[3],param_1[2]), local_c == 0)) {
      local_c = FUN_000382cc(local_10);
    }
    FUN_00039ce4(&local_10);
  }
  return local_c;
}



/* ===== FUN_00024eb4 @ 00024eb4 size=256 ===== */

int FUN_00024eb4(undefined4 *param_1)

{
  undefined4 local_10;
  int local_c;
  
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = FUN_00039bc4(*param_1,param_1[1],&local_10);
  if (local_c == 0) {
    local_c = FUN_00038de4(local_10);
    if ((local_c == 0) &&
       (local_c = FUN_00039320(local_10,"system.data",param_1 + 3,param_1 + 2),
       local_c == 0x7f2bb7a2)) {
      param_1[2] = 0;
      param_1[3] = 0;
      local_c = 0;
    }
    FUN_00039ce4(&local_10);
  }
  return local_c;
}



/* ===== FUN_00024fb4 @ 00024fb4 size=88 ===== */

undefined4 FUN_00024fb4(undefined4 param_1,undefined4 param_2)

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
  uVar1 = FUN_00024de8(&local_18);
  return uVar1;
}



/* ===== FUN_0002500c @ 0002500c size=196 ===== */

int FUN_0002500c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [32];
  uint local_6c;
  int local_c;
  
  local_c = FUN_00028480(param_1,param_2,auStack_8c);
  if (local_c == 0) {
    if ((local_6c & 0x10000000) == 0) {
      local_c = 0x7f2bb7a5;
    }
    else {
      local_9c = param_1;
      local_98 = param_2;
      local_c = FUN_00024eb4(&local_9c);
      if (local_c == 0) {
        *param_3 = local_94 + 0x3c;
        local_c = FUN_00017630(auStack_90);
      }
    }
  }
  return local_c;
}



/* ===== FUN_000250d0 @ 000250d0 size=1256 ===== */

uint FUN_000250d0(undefined4 param_1,undefined4 param_2,int param_3)

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
  uVar1 = FUN_00028480(param_1,param_2,local_ac);
  *(undefined4 *)(local_1c + 0x18) = uVar1;
  if (*(int *)(local_1c + 0x18) == 0) {
    if ((local_8c & 0x10000000) == 0) {
      *(undefined4 *)(local_1c + 0x18) = 0x7f2bb7a5;
    }
    else if ((local_ac[0] & 0xf000) == 0x4000) {
      local_c = 0;
      local_1ae = 1;
      local_1b4 = param_2;
      FUN_0001fb78(param_1,0xc,&local_1b4);
      local_1ac = 0x2e;
      local_1ab = 0;
      *(undefined4 **)(local_1c + 8) = &local_1b4;
      FUN_0001facc(param_1,&local_1b4,local_1c + 0xc);
      uVar2 = (uint)local_18;
      iVar3 = local_18._4_4_;
      bVar4 = 0xfffffffe < (uint)local_18;
      local_18._0_4_ = (uint)local_18 + 1;
      local_18._4_4_ = local_18._4_4_ + (uint)bVar4;
      uVar2 = FUN_0001ffa4(param_1,0,uVar2,iVar3,0,0,param_3);
      local_c = local_c | uVar2;
      if ((local_c & 2) == 0) {
        local_1b4 = local_84;
        local_1ae = 2;
        FUN_0001fb78(param_1,0xc,&local_1b4);
        local_1ac = 0x2e;
        local_1ab = 0x2e;
        local_1aa = 0;
        *(undefined4 **)(local_1c + 8) = &local_1b4;
        FUN_0001facc(param_1,&local_1b4,local_1c + 0xc);
        iVar3 = local_18._4_4_;
        uVar2 = (uint)local_18;
        local_18 = CONCAT44(local_18._4_4_ + (uint)(0xfffffffe < (uint)local_18),(uint)local_18 + 1)
        ;
        uVar2 = FUN_0001ffa4(param_1,0,uVar2,iVar3,0,0,param_3);
        local_c = local_c | uVar2;
        if ((local_c & 8) != 0) {
          local_84 = local_1b4;
          iVar3 = FUN_00028a3c(param_1,param_2,local_ac);
          if (iVar3 != 0) goto LAB_00025578;
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
          uVar2 = FUN_0001ffa4(param_1,0,uVar2,iVar3,0,0,param_3);
          local_c = local_c | uVar2;
          if ((local_c & 8) != 0) {
            uVar1 = FUN_00028a3c(param_1,param_2,local_ac);
            *(undefined4 *)(local_1c + 0x18) = uVar1;
            if (*(int *)(local_1c + 0x18) != 0) {
              local_c = local_c | 2;
            }
            local_c = local_c & 0xfffffff7;
          }
          if ((local_c & 2) == 0) {
            local_1c4 = param_1;
            local_1c0 = param_2;
            uVar1 = FUN_00024eb4(&local_1c4);
            *(undefined4 *)(local_1c + 0x18) = uVar1;
            if (*(int *)(local_1c + 0x18) == 0) {
              if (local_1bc != 0) {
                *(undefined4 *)(local_1c + 8) = local_1b8;
                *(int *)(local_1c + 0xc) = local_1bc;
                uVar2 = (uint)local_18;
                iVar3 = local_18._4_4_;
                local_18 = CONCAT44(local_18._4_4_ + (uint)(0xfffffffe < (uint)local_18),
                                    (uint)local_18 + 1);
                uVar2 = FUN_0001ffa4(param_1,0,uVar2,iVar3,0,0,param_3);
                local_c = local_c | uVar2;
                if ((local_c & 8) != 0) {
                  uVar1 = FUN_00024de8(&local_1c4);
                  *(undefined4 *)(local_1c + 0x18) = uVar1;
                  if (*(int *)(local_1c + 0x18) != 0) {
                    local_c = local_c | 2;
                  }
                }
              }
              FUN_00017630(&local_1b8);
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(local_1c + 0x18) = 0x7f2bb74a;
    }
  }
LAB_00025578:
  *(undefined4 *)(local_1c + 8) = local_20;
  *(undefined4 *)(local_1c + 0xc) = local_24;
  *(undefined4 *)(local_1c + 4) = local_28;
  return local_c & 0xfffffff5;
}



/* ===== FUN_000255b8 @ 000255b8 size=188 ===== */

int FUN_000255b8(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  int local_c;
  
  local_c = FUN_00039bc4(param_1,param_2,&local_10);
  if (local_c == 0) {
    local_c = FUN_00038de4(local_10);
    if ((local_c == 0) && (local_c = FUN_00039ab4(local_10,"system.data"), local_c == 0)) {
      local_c = FUN_000382cc(local_10);
    }
    FUN_00039ce4(&local_10);
  }
  return local_c;
}



/* ===== FUN_00025674 @ 00025674 size=632 ===== */

int FUN_00025674(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,int param_5)

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
  iVar1 = FUN_00024d34(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    local_18 = 0xc;
  }
  iVar1 = FUN_00024d70(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    local_1c = 2;
  }
  *param_3 = param_2;
  local_c = param_3;
  FUN_00017adc(param_3,1);
  FUN_00017b68(local_c,local_1c);
  *(undefined1 *)(local_c + 2) = 0x2e;
  local_28 = (*(int *)(param_1 + 0x14) - local_18) + -0xc;
  *(undefined2 *)(local_c + 1) = 0xc;
  local_c = (undefined4 *)((int)param_3 + (uint)*(ushort *)(local_c + 1));
  *(undefined2 *)(local_c + 1) = 0xc;
  *local_c = *param_4;
  FUN_00017adc(local_c,2);
  FUN_00017b68(local_c,local_1c);
  *(undefined1 *)(local_c + 2) = 0x2e;
  *(undefined1 *)((int)local_c + 9) = 0x2e;
  local_14 = 0x18;
  local_c = param_3 + 6;
  memcpy(param_3 + 6,param_4 + 1,param_5 - 4);
  iVar1 = local_10;
  do {
    local_10 = iVar1;
    local_20 = local_c;
    local_10 = FUN_0001facc(param_1,local_c,&local_28);
    if (local_10 != 0) {
      return local_10;
    }
    local_14 = local_14 + local_28;
    local_c = (undefined4 *)((int)param_3 + local_14);
    iVar1 = 0;
  } while (local_14 < param_5 + 0x14);
  local_28 = ((*(int *)(param_1 + 0x14) - local_18) - local_14) + local_28;
  local_10 = FUN_0001fb78(param_1,local_28,local_20);
  if ((local_10 == 0) && (local_18 != 0)) {
    local_24 = (int)param_3 + *(int *)(param_1 + 0x14) + -0xc;
    FUN_0001e26c(param_1,local_24);
  }
  return local_10;
}



/* ===== FUN_000258ec @ 000258ec size=540 ===== */

int FUN_000258ec(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  local_c = FUN_000174a4(*(undefined4 *)(param_1 + 0x14),&local_1c);
  if (local_c == 0) {
    uVar2 = FUN_00025674(param_1,param_2,local_1c,param_4,param_5);
    local_c = (int)uVar2;
    if ((local_c == 0) &&
       (local_c = FUN_0002d434(param_1,(int)((ulonglong)uVar2 >> 0x20),0,0,0,&local_18),
       local_c == 0)) {
      uVar3 = 0;
      local_c = FUN_00036ba8(param_1,local_1c,local_18,uStack_14,local_1c,0,param_2);
      if (local_c == 0) {
        iVar1 = FUN_00024dac(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x80000;
        }
        *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xefffffff;
        local_c = FUN_00041598(param_1,param_3,1,0);
        if (local_c == 0) {
          *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x14);
          local_c = FUN_00035c80(param_1,param_2,param_3,0,2,uVar3,0,0,&local_18);
          if ((local_c == 0) && (local_c = FUN_00028a3c(param_1,param_2,param_3), local_c == 0)) {
            FUN_0002eaf0(param_1,local_18,1);
          }
        }
      }
    }
    FUN_00017630(&local_1c);
  }
  return local_c;
}



/* ===== FUN_00025b08 @ 00025b08 size=324 ===== */

int FUN_00025b08(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  memset((void *)(param_3 + 0x28),0,0x3c);
  iVar1 = FUN_00024dac(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfff7ffff;
    local_c = FUN_0003a060(param_1,param_2,param_3,&local_14);
    if (local_c != 0) {
      return local_c;
    }
    FUN_00039f5c(local_14);
  }
  *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xefffffff;
  *(undefined4 *)(param_3 + 4) = 0;
  local_c = FUN_00028a3c(param_1,param_2,param_3);
  if ((local_c == 0) && (local_c = FUN_0003fe54(param_1,param_2,1,&local_10), local_c == 0)) {
    local_c = FUN_00040ad4(local_10,param_4,param_5,0);
    FUN_00040404(local_10);
  }
  return local_c;
}



/* ===== FUN_00025c4c @ 00025c4c size=596 ===== */

int FUN_00025c4c(int *param_1,undefined4 param_2)

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
    local_c = FUN_00028480(param_1,param_2,local_90);
    if (local_c == 0) {
      if ((local_70 & 0x10000000) == 0) {
        local_c = 0x7f2bb7a5;
      }
      else {
        local_a0 = param_1;
        local_9c = param_2;
        local_c = FUN_00024eb4(&local_a0);
        if (local_c == 0) {
          local_10 = local_98 + 0x3c;
          local_c = FUN_0001744c(local_10,&local_a4);
          if (local_c == 0) {
            memcpy(local_a4,auStack_68,0x3c);
            if (local_98 != 0) {
              memcpy((void *)((int)local_a4 + 0x3c),local_94,local_98);
            }
            memset(auStack_68,0,0x3c);
            local_c = FUN_00028a3c(param_1,param_2,local_90);
            if (((local_c == 0) && (local_c = FUN_000255b8(param_1,param_2), local_c == 0)) &&
               (local_c = FUN_00028480(param_1,param_2,local_90), local_c == 0)) {
              if ((local_90[0] & 0xf000) == 0x4000) {
                local_c = FUN_000258ec(param_1,param_2,local_90,local_a4,local_10);
              }
              else {
                local_c = FUN_00025b08(param_1,param_2,local_90,local_a4,local_10);
              }
            }
          }
          if (local_a4 != (void *)0x0) {
            FUN_00017630(&local_a4);
          }
          FUN_00017630(&local_94);
        }
      }
    }
  }
  else {
    local_c = 0x7f2bb701;
  }
  return local_c;
}



/* ===== FUN_00025ea0 @ 00025ea0 size=264 ===== */

int FUN_00025ea0(undefined4 param_1,undefined4 param_2,undefined1 *param_3,void *param_4,
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
    iVar1 = FUN_00028480(param_1,param_2,auStack_8c);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_ac = auStack_8c;
    local_c = 0;
  }
  local_9c = param_1;
  local_98 = param_2;
  local_c = FUN_00024eb4(&local_9c);
  if (local_c == 0) {
    memcpy(param_4,local_ac + 0x28,0x3c);
    if (local_94 != 0) {
      memcpy((void *)((int)param_4 + 0x3c),local_90,local_94);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = local_94 + 0x3c;
    }
    FUN_00017630(&local_90);
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_00025fa8 @ 00025fa8 size=492 ===== */

int FUN_00025fa8(undefined4 param_1,undefined4 param_2,undefined1 *param_3,void *param_4,
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
    iVar1 = FUN_00028480(param_1,param_2,auStack_90);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_b4 = auStack_90;
    local_10 = 0;
  }
  if (param_5 < 0x3d) {
    memcpy(local_b4 + 0x28,param_4,param_5);
    local_10 = FUN_00028a3c(param_1,param_2,local_b4);
  }
  else {
    local_10 = FUN_000394d0(param_1,param_2,&local_a4);
    if ((local_10 == 0) && (local_10 = FUN_0002500c(param_1,param_2,&local_a8), local_10 == 0)) {
      if (local_a8 < 0x3c) {
        local_c = 0x3c - local_a8;
      }
      else {
        local_c = 0;
      }
      if ((param_5 == local_a8) || (param_5 <= local_a8 + local_a4 + local_c)) {
        memcpy(local_b4 + 0x28,param_4,0x3c);
        local_10 = FUN_00028a3c(param_1,param_2,local_b4);
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
          local_10 = FUN_00024de8(&local_a0);
        }
      }
      else {
        local_10 = 0x7f2bb7a7;
      }
    }
  }
  return local_10;
}



/* ===== FUN_00026194 @ 00026194 size=60 ===== */

bool FUN_00026194(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_000261d0 @ 000261d0 size=60 ===== */

bool FUN_000261d0(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0002620c @ 0002620c size=96 ===== */

undefined4 FUN_0002620c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000261d0(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00026194(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0002626c @ 0002626c size=156 ===== */

undefined4 FUN_0002626c(int param_1)

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



/* ===== FUN_00026308 @ 00026308 size=220 ===== */

void FUN_00026308(int *param_1)

{
  int *local_14 [2];
  uint local_c;
  
  param_1[6] = param_1[6] + -1;
  if (param_1[6] == 0) {
    local_14[0] = param_1;
    if (*param_1 != 0) {
      FUN_00017630(param_1);
    }
    for (local_c = 0; local_c < (uint)local_14[0][5]; local_c = local_c + 1) {
      FUN_00017630(local_14[0][7] + local_c * 8 + 4);
    }
    if (local_14[0][7] != 0) {
      FUN_00017630(local_14[0] + 7);
    }
    local_14[0][2] = 0;
    local_14[0][3] = 0;
    FUN_00017630(local_14);
  }
  return;
}



/* ===== FUN_000263e4 @ 000263e4 size=496 ===== */

int FUN_000263e4(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int local_10;
  uint local_c;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    local_10 = FUN_0001744c(0x20,param_1 + 0x84);
    if (local_10 == 0) {
      memset(*(void **)(param_1 + 0x84),0,0x20);
      local_10 = FUN_0001744c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x84));
      if (local_10 == 0) {
        *(undefined8 *)(*(int *)(param_1 + 0x84) + 8) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x10) = 0xffffffff;
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x14) = param_2;
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x18) = 1;
        local_10 = FUN_00017510(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x14),8,
                                *(int *)(param_1 + 0x84) + 0x1c);
        if (local_10 == 0) {
          local_c = 0;
          while( true ) {
            if (*(uint *)(*(int *)(param_1 + 0x84) + 0x14) <= local_c) {
              FUN_0002626c(param_1);
              return 0;
            }
            if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
              uVar1 = 0x80;
            }
            else {
              uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x58);
            }
            local_10 = FUN_0001744c(uVar1,*(int *)(*(int *)(param_1 + 0x84) + 0x1c) + local_c * 8 +
                                          4);
            if (local_10 != 0) break;
            local_c = local_c + 1;
          }
        }
      }
      FUN_00026308(*(undefined4 *)(param_1 + 0x84));
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_000265d4 @ 000265d4 size=1068 ===== */

int FUN_000265d4(int *param_1,int param_2,undefined4 *param_3)

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
      local_18 = FUN_0002b920(param_1,param_1 + 0x12);
      if ((local_18 != 0) && (param_1[0x12] != 0)) {
        FUN_0002079c(param_1[0x12]);
        param_1[0x12] = 0;
      }
      param_1[0xd] = local_14;
    }
    local_18 = FUN_0001744c(0x68,&local_20);
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
      uVar6 = FUN_0001bd08(local_20[1],local_20[6]);
      *(undefined8 *)(puVar1 + 4) = uVar6;
      local_20[7] = *(undefined4 *)(*(int *)(local_20[1] + 0x10) + 0x28);
      local_20[8] = *(undefined4 *)(local_20[1] + 0x28);
      iVar2 = FUN_0002620c(param_1);
      if (iVar2 != 0) {
        local_1c = FUN_0001c118(param_1,local_20[6]);
        if (local_1c < (uint)local_20[7]) {
          local_20[7] = local_20[7] - local_1c;
        }
        else {
          local_20[7] = 0;
        }
        iVar5 = local_20[7];
        iVar2 = FUN_00044a2c(param_1[5],local_20[0xc]);
        puVar1 = local_20;
        uVar3 = FUN_00044a2c(local_20[0xc] * (iVar5 + iVar2 + -1),param_1[5]);
        puVar1[8] = uVar3;
      }
      local_18 = FUN_00029308(param_1[1],local_20[10],local_20 + 0xb);
      local_20[0x10] = 0;
      local_20[0x11] = 0;
      local_20[0x12] = 0;
      if (local_18 == 0) {
        local_18 = FUN_0001744c(local_20[0xc] + local_20[10],local_20 + 0xf);
        if (local_18 == 0) {
          memset((void *)(local_20[0xf] + local_20[0xc]),0,local_20[10]);
          if ((*(int *)(local_20[1] + 0x48) != 0) &&
             (*(int *)(*(int *)(local_20[1] + 0x48) + 4) != 0)) {
            local_20[0x13] = local_20[0x13] | 1;
          }
          iVar2 = FUN_0002620c(param_1);
          if (iVar2 != 0) {
            local_20[0x13] = local_20[0x13] | 0x10;
          }
          *param_3 = local_20;
          local_18 = 0;
        }
        else {
          FUN_00017630(local_20 + 0xb);
          FUN_00017630(&local_20);
        }
      }
      else {
        FUN_00017630(&local_20);
      }
    }
  }
  else {
    local_18 = 0x7f2bb701;
  }
  return local_18;
}



/* ===== FUN_00026a00 @ 00026a00 size=140 ===== */

void FUN_00026a00(int *param_1)

{
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb704)) {
    local_c = param_1;
    FUN_00017630(param_1 + 0xb);
    local_c[0xb] = 0;
    FUN_00017630(local_c + 0xf);
    local_c[0xf] = 0;
    FUN_00017630(&local_c);
  }
  return;
}



/* ===== FUN_00026b8c @ 00026b8c size=408 ===== */

undefined4 FUN_00026b8c(int param_1)

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
  uVar6 = FUN_0001bd08(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(int *)(param_1 + 8) = *(int *)(*(int *)(iVar4 + 0x10) + 0x28) * *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar4 + 0x28);
  iVar1 = FUN_0002620c(iVar4);
  if (iVar1 != 0) {
    uVar2 = FUN_0001c118(iVar4,*(undefined4 *)(param_1 + 0x18));
    if (uVar2 < *(uint *)(param_1 + 0x1c)) {
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar1 = FUN_00044a2c(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(param_1 + 0x30));
    uVar3 = FUN_00044a2c(*(int *)(param_1 + 0x30) * (iVar5 + iVar1 + -1),
                         *(undefined4 *)(iVar4 + 0x14));
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  return 0;
}



/* ===== FUN_00026d24 @ 00026d24 size=92 ===== */

undefined4 FUN_00026d24(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x18) = param_2 + -1;
  *(int *)(param_1 + 0x24) = *(int *)(*(int *)(param_1 + 4) + 0x1c) - param_2;
  uVar1 = FUN_00026b8c(param_1);
  return uVar1;
}



/* ===== FUN_00026d80 @ 00026d80 size=496 ===== */

undefined4 FUN_00026d80(int param_1,int *param_2)

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



/* ===== FUN_00026f70 @ 00026f70 size=464 ===== */

bool FUN_00026f70(int param_1,ushort *param_2)

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
              uVar4 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
              iVar1 = (int)((ulonglong)uVar4 >> 0x20);
              bVar3 = iVar1 == 0;
              if (iVar1 == 0) {
                bVar3 = (uint)uVar4 <= uVar2;
              }
              if (!bVar3) goto LAB_00027108;
            }
            local_18 = local_18 + 1;
          }
LAB_00027108:
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



/* ===== FUN_00027140 @ 00027140 size=92 ===== */

undefined4 FUN_00027140(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(uint *)(param_1 + 0x20) & 0x80000) == 0) ||
     (iVar1 = FUN_00039e68(param_1 + 0x28,0x3c), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0002719c @ 0002719c size=968 ===== */

void FUN_0002719c(int param_1,undefined4 param_2,uint param_3,int param_4)

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
    uVar5 = FUN_00045084((int)lVar1,uVar5 * param_4 + (int)((ulonglong)lVar1 >> 0x20),
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
    uVar5 = FUN_00044af4(0x400 << (*(uint *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x18) & 0xff),
                         uVar4);
    if (1 < uVar5) {
      while (local_10 != 0) {
        iVar2 = FUN_00044a2c(local_1c - *(int *)(param_1 + 0x2c),
                             *(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
        iVar3 = FUN_0001f2b4(*(undefined4 *)(param_1 + 4),local_c,local_1c);
        if (iVar3 == 0) {
          local_18 = local_18 + 1;
          local_14 = local_14 + 1;
        }
        else {
          iVar3 = FUN_00027140(local_1c);
          if ((iVar3 != 0) ||
             (iVar3 = FUN_00026f70(*(undefined4 *)(param_1 + 4),local_1c), iVar3 != 0)) {
            local_14 = local_14 + 1;
          }
        }
        if (uVar5 >> 1 < local_14) {
          *(byte *)((int)__s + iVar2) = *(byte *)((int)__s + iVar2) | 2;
          FUN_00044ad4(local_c + -1,uVar5);
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
          FUN_00044ad4(local_c,uVar5);
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



/* ===== FUN_00027564 @ 00027564 size=536 ===== */

int FUN_00027564(int param_1)

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
     (local_c = FUN_00026d80(param_1,&local_18), local_c == 0)) {
    if (((*(uint *)(param_1 + 0x4c) & 2) == 0) &&
       (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0)) {
      local_c = FUN_00029060(*(undefined4 *)(*(int *)(param_1 + 4) + 4),
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
    FUN_0002719c(param_1);
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



/* ===== FUN_0002777c @ 0002777c size=1576 ===== */

int FUN_0002777c(int *param_1,int *param_2,void *param_3,size_t param_4)

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
    if (param_1[7] != 0) goto LAB_000278d8;
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
        local_14 = FUN_00026b8c(param_1);
        if (local_14 != 0) {
          return local_14;
        }
LAB_000278d8:
      } while ((((param_1[0x13] & 0x10U) != 0) &&
               (iVar3 = FUN_0001c2a0(param_1[1],param_1[6],1), iVar3 != 0)) || (param_1[7] == 0));
      if (param_1[4] != 0 || param_1[5] != 0) {
        if (param_1[0xe] < param_1[0xc]) {
          if (param_1[0xe] != 0) {
            memcpy((void *)param_1[0xf],(void *)param_1[0xd],param_1[0xe]);
          }
          local_18 = param_1[0xe];
          local_14 = FUN_00027564(param_1);
          if (local_14 != 0) {
            return local_14;
          }
        }
        if (((int)param_4 < (int)local_1c) && (iVar3 = FUN_0001744c(local_1c,&local_28), iVar3 != 0)
           ) {
          return iVar3;
        }
        local_14 = 0;
        FUN_00044ad4(param_1[2],*(undefined4 *)(*(int *)(param_1[1] + 0x10) + 0x28));
        if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
          uVar2 = 0x80;
        }
        else {
          uVar2 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
        }
        uVar1 = FUN_00044af4(0x400 << (*(uint *)(*(int *)(param_1[1] + 0x10) + 0x18) & 0xff),uVar2);
        uVar1 = FUN_00044a2c(extraout_r1,uVar1);
        FUN_00044ad4(uVar1,param_1[10]);
        local_24 = extraout_r1_00;
        if (local_18 == 0) {
          if ((((*(byte *)(local_20 + extraout_r1_00) & 1) == 0) &&
              ((*(uint *)(param_1[1] + 8) & 0x200000) == 0)) &&
             (iVar3 = FUN_0001f2b4(param_1[1],param_1[2] + 1,param_1[0xd]), iVar3 == 0)) {
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
             (iVar3 = FUN_0001f2b4(param_1[1],param_1[2] + 1,param_1[0xf]), iVar3 == 0)) {
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
        FUN_00017630(&local_28);
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



/* ===== FUN_00027da4 @ 00027da4 size=60 ===== */

undefined4 FUN_00027da4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002777c(param_1,param_2,param_3,0x80);
  return uVar1;
}



/* ===== FUN_00027de0 @ 00027de0 size=1696 ===== */

int FUN_00027de0(int *param_1,uint param_2,void *param_3,size_t param_4)

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
      else if ((param_1[0x21] != 0) || (iVar6 = FUN_000263e4(param_1,4), iVar6 == 0)) {
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
          uVar3 = FUN_00044a2c(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
          if ((uint)param_1[7] < uVar3) {
            return 0x7f2bb729;
          }
          FUN_00044ad4(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
          if (*(int *)(param_1[4] + 0x4c) == 0) {
            local_14 = 0x80;
          }
          else {
            local_14 = (uint)*(ushort *)(param_1[4] + 0x58);
          }
          local_14 = extraout_r1_00 * local_14;
          uVar1 = local_14 >> (*(int *)(param_1[4] + 0x18) + 10U & 0xff);
          lVar10 = FUN_0001bd08(param_1,uVar3);
          if (lVar10 == 0) {
            return 0x7f2bb73b;
          }
          lVar10 = FUN_0001bd08(param_1,uVar3);
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
          uVar2 = FUN_00044a2c(param_1[5],uVar5);
          uVar3 = FUN_00044a2c(*(undefined4 *)(param_1[0x16] + 0x120),param_1[5]);
          uVar4 = FUN_00044a2c(param_2 - 1,uVar2);
          uVar8 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x20);
          lVar10 = CONCAT44((int)((ulonglong)uVar8 >> 0x20) + (uint)CARRY4((uint)uVar8,uVar3),
                            (uint)uVar8 + uVar3);
          FUN_00044ad4(param_2 - 1,uVar2);
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
        FUN_00044ad4(*(int *)(param_1[0x21] + 0x10) + 1,*(undefined4 *)(param_1[0x21] + 0x14));
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
            iVar6 = FUN_00029060(local_24,uStack_c,local_10,uStack_c,1,*(undefined4 *)param_1[0x21])
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
        iVar6 = FUN_0001f2b4(param_1,param_2,__src);
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



/* ===== FUN_00028480 @ 00028480 size=60 ===== */

undefined4 FUN_00028480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00027de0(param_1,param_2,param_3,0x80);
  return uVar1;
}



/* ===== FUN_000284bc @ 000284bc size=1408 ===== */

int FUN_000284bc(int *param_1,uint param_2,void *param_3,size_t param_4)

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
  local_18 = FUN_0001744c(local_28,&local_38);
  if (local_18 != 0) {
    return local_18;
  }
  iVar1 = 0;
  if ((int)param_4 < (int)local_28) {
    local_2c = param_1[2];
    param_1[2] = param_1[2] | 0x200000;
    local_18 = FUN_00027de0(param_1,param_2,local_38,local_28);
    param_1[2] = local_2c & 0x200000 | param_1[2] & 0xffdfffffU;
    iVar1 = local_18;
    if (local_18 != 0) goto LAB_00028a20;
  }
  local_18 = iVar1;
  if (param_1[0x21] == 0) {
    local_18 = FUN_000263e4(param_1,4);
    if (local_18 != 0) goto LAB_00028a20;
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
    local_18 = FUN_0001f430(param_1,param_2,local_38);
    if (local_18 == 0) {
      local_30 = FUN_00044a2c(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
      FUN_00044ad4(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
      if (*(int *)(param_1[4] + 0x4c) == 0) {
        local_14 = 0x80;
      }
      else {
        local_14 = (uint)*(ushort *)(param_1[4] + 0x58);
      }
      local_14 = extraout_r1 * local_14;
      local_34 = local_14 >> (*(int *)(param_1[4] + 0x18) + 10U & 0xff);
      lVar3 = FUN_0001bd08(param_1,local_30);
      if (lVar3 == 0) {
        local_18 = 0x7f2bb73b;
        local_10 = CONCAT44(local_10._4_4_,(undefined4)local_10);
      }
      else {
        lVar3 = FUN_0001bd08(param_1,local_30);
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
            local_18 = FUN_00029060(param_1[1],param_1[1],(undefined4)local_10,local_10._4_4_,1,
                                    *(undefined4 *)param_1[0x21]);
            local_10 = lVar3;
            if (local_18 != 0) goto LAB_00028a20;
            *(longlong *)(param_1[0x21] + 8) = local_10;
            local_18 = 0;
            lVar3 = local_10;
          }
          local_10 = lVar3;
          memcpy((void *)(*(int *)param_1[0x21] + local_14),local_1c,local_24);
          local_18 = FUN_0002912c(param_1[1],param_1[1],(undefined4)local_10,local_10._4_4_,1,
                                  *(undefined4 *)param_1[0x21]);
          if (local_18 != 0) goto LAB_00028a20;
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
LAB_00028a20:
  FUN_00017630(&local_38);
  return local_18;
}



/* ===== FUN_00028a3c @ 00028a3c size=60 ===== */

undefined4 FUN_00028a3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000284bc(param_1,param_2,param_3,0x80);
  return uVar1;
}



/* ===== FUN_00028a78 @ 00028a78 size=420 ===== */

undefined4 FUN_00028a78(int param_1,undefined4 param_2,void *param_3)

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
    uVar1 = FUN_000284bc(param_1,param_2,param_3,0x80);
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
      uVar1 = FUN_000284bc(param_1,param_2,__s,__size);
      free(__s);
    }
  }
  return uVar1;
}



/* ===== FUN_00028c1c @ 00028c1c size=296 ===== */

int FUN_00028c1c(int *param_1,uint param_2,int param_3)

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
      iVar1 = FUN_00028480(param_1,param_2,auStack_90);
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



/* ===== FUN_00028d44 @ 00028d44 size=248 ===== */

int FUN_00028d44(int *param_1,uint param_2)

{
  ushort local_8c [64];
  int local_c;
  
  if (*param_1 == 0x7f2bb701) {
    if (*(uint *)param_1[4] < param_2) {
      local_c = 0x7f2bb729;
    }
    else if (((param_1[0xe] == 0) ||
             (local_c = (*(code *)param_1[0xe])(param_1,param_2), local_c == 0x7f2bb741)) &&
            (local_c = FUN_00028480(param_1,param_2,local_8c), local_c == 0)) {
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



/* ===== FUN_00028e3c @ 00028e3c size=404 ===== */

int FUN_00028e3c(int *param_1,char *param_2)

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



/* ===== FUN_00028fd0 @ 00028fd0 size=144 ===== */

undefined4 FUN_00028fd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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



/* ===== FUN_00029060 @ 00029060 size=204 ===== */

undefined4
FUN_00029060(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
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



/* ===== FUN_0002912c @ 0002912c size=204 ===== */

undefined4
FUN_0002912c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
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



/* ===== FUN_000291f8 @ 000291f8 size=136 ===== */

undefined4
FUN_000291f8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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



/* ===== FUN_00029280 @ 00029280 size=136 ===== */

undefined4
FUN_00029280(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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



/* ===== FUN_00029308 @ 00029308 size=176 ===== */

undefined4 FUN_00029308(int param_1,int param_2,undefined4 param_3)

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
    uVar1 = FUN_0001744c(local_c,param_3);
  }
  else {
    uVar1 = FUN_00017c08(local_c,*(undefined4 *)(param_1 + 0x60),param_3);
  }
  return uVar1;
}



/* ===== FUN_000293b8 @ 000293b8 size=100 ===== */

undefined4
FUN_000293b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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



/* ===== FUN_0002941c @ 0002941c size=52 ===== */

void FUN_0002941c(int param_1)

{
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
  return;
}



/* ===== FUN_00029450 @ 00029450 size=60 ===== */

bool FUN_00029450(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 8) != 0;
}



/* ===== FUN_0002948c @ 0002948c size=60 ===== */

bool FUN_0002948c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x40) != 0;
}



/* ===== FUN_000294c8 @ 000294c8 size=460 ===== */

int FUN_000294c8(int param_1,uint param_2,uint param_3,undefined4 *param_4)

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
    local_14 = FUN_0001744c(*(undefined4 *)(param_1 + 0x14),&local_18);
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
      iVar4 = FUN_00029450(*(undefined4 *)(param_1 + 0x10));
      if (iVar4 != 0) {
        local_18[0x10] = 0;
        iVar4 = FUN_0002a294(*(undefined4 *)(param_1 + 0x14));
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



/* ===== FUN_00029694 @ 00029694 size=456 ===== */

int FUN_00029694(int param_1,char *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  void *local_1c;
  ssize_t local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_1c = (void *)0x0;
  local_c = FUN_000294c8(param_1,param_3,param_4,&local_1c);
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
              goto LAB_00029838;
            }
            if (local_18 != *(int *)(param_1 + 0x14)) goto LAB_00029838;
          }
        }
        local_c = 0;
      }
LAB_00029838:
      close(local_14);
    }
    FUN_00017630(&local_1c);
  }
  return local_c;
}



/* ===== FUN_0002985c @ 0002985c size=884 ===== */

int FUN_0002985c(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,uint *param_6,
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
    if (DAT_0005b420 != (void *)0x0) {
      free(DAT_0005b420);
      DAT_0005b420 = (void *)0x0;
      DAT_0005b424 = 0;
    }
  }
  else if ((0 < param_5) &&
          (iVar1 = FUN_00029280(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,
                                param_4,param_5,param_5 >> 0x1f), iVar1 != 0)) {
    if ((DAT_0005b424 < param_5) &&
       (iVar1 = FUN_00044af4(0x400000,*(undefined4 *)(param_1 + 0x14)), DAT_0005b424 < iVar1)) {
      local_1c = param_5;
      iVar1 = FUN_00044af4(0x400000,*(undefined4 *)(param_1 + 0x14));
      if (iVar1 < param_5) {
        local_1c = FUN_00044af4(0x400000,*(undefined4 *)(param_1 + 0x14));
      }
      __s = realloc(DAT_0005b420,local_1c * *(int *)(param_1 + 0x14));
      if (__s == (void *)0x0) {
        return 0x7f2bb746;
      }
      DAT_0005b424 = local_1c;
      DAT_0005b420 = __s;
      memset(__s,0,local_1c * *(int *)(param_1 + 0x14));
    }
    local_14 = 0;
    local_38 = param_3;
    uStack_34 = param_4;
    while (local_14 < param_5) {
      FUN_00045084(local_38,uStack_34,DAT_0005b424,DAT_0005b424 >> 0x1f);
      local_18 = DAT_0005b424;
      if (extraout_r2 == 0 && extraout_r3 == 0) {
        local_18 = param_5 - local_14;
        if (DAT_0005b424 < local_18) {
          local_18 = DAT_0005b424;
        }
      }
      else {
        FUN_00045084(local_38,uStack_34,DAT_0005b424,DAT_0005b424 >> 0x1f);
        local_18 = local_18 - extraout_r2_00;
        if (param_5 - local_14 < local_18) {
          local_18 = param_5 - local_14;
        }
      }
      iVar1 = FUN_0002912c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),local_38,
                           uStack_34,local_18,DAT_0005b420);
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



/* ===== FUN_00029bd0 @ 00029bd0 size=116 ===== */

int FUN_00029bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_0002985c(param_1,param_3,param_2,0,param_3,local_18,param_5);
  if (iVar1 != 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_00029c44 @ 00029c44 size=484 ===== */

undefined4 FUN_00029c44(int param_1)

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
  
  uVar7 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
  uVar6 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x20);
  uVar5 = iVar1 - ((int)((ulonglong)uVar6 >> 0x20) + (uint)((uint)uVar7 < (uint)uVar6));
  local_14 = FUN_0001b270(param_1,iVar1,(uint)uVar7 - (uint)uVar6 >> 1 | uVar5 * -0x80000000,
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
           (iVar1 = FUN_0001be24(param_1,local_14), iVar1 == 0))) {
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
    uVar2 = FUN_0001be24(param_1,local_1c);
    uVar3 = FUN_0001be24(param_1,local_14);
    local_18 = local_1c;
    if (uVar3 < uVar2) {
      local_14 = local_1c;
    }
  }
  uVar4 = FUN_0001b2dc(param_1,local_14);
  return uVar4;
}



/* ===== FUN_00029e28 @ 00029e28 size=824 ===== */

int FUN_00029e28(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
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
  local_c = FUN_000294c8(param_1,param_3,param_7,&local_1c);
  if (local_c == 0) {
    local_c = FUN_0002cd6c(param_1);
    if ((local_c == 0) && (local_c = FUN_00028480(param_1,param_2,local_9c), local_c == 0)) {
      if (local_80 == 0) {
        if (param_6 == -1 && param_5 == -1) {
          uVar2 = FUN_00029c44(param_1);
        }
        param_6 = (int)((ulonglong)uVar2 >> 0x20);
        iVar1 = FUN_0002948c(*(undefined4 *)(param_1 + 0x10));
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
        local_c = FUN_0001c560(param_1,local_9c,(undefined4)local_18,local_18._4_4_);
        if ((((local_c == 0) &&
             (local_c = FUN_0003fa84(param_1,local_10,param_2,local_9c,uVar2,0,param_3,0),
             local_c == 0)) && (local_c = FUN_00028a78(param_1,param_2,local_9c), local_c == 0)) &&
           ((local_c = FUN_00035c80(param_1,param_2,local_9c,0,0,param_6,0,0,&local_a8),
            local_c == 0 &&
            (local_c = FUN_0002912c(*(undefined4 *)(param_1 + 4),1,local_a8,uStack_a4,1,local_1c),
            local_c == 0)))) {
          memcpy((void *)(*(int *)(param_1 + 0x10) + 0x10c),auStack_74,0x3c);
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x148) = local_30;
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14c) = local_98;
          *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xfd) = 1;
          FUN_000176ec(param_1);
        }
      }
      else {
        local_c = 0x11;
      }
    }
    FUN_00017630(&local_1c);
  }
  return local_c;
}



/* ===== FUN_0002a294 @ 0002a294 size=56 ===== */

undefined4 FUN_0002a294(int param_1)

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



/* ===== FUN_0002a2cc @ 0002a2cc size=772 ===== */

int FUN_0002a2cc(int param_1,int param_2)

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
    local_18 = FUN_0002a294(*(undefined4 *)(param_2 + 0x14));
    local_1c = FUN_00029060(*(undefined4 *)(param_2 + 4),local_18 >> 0x1f,local_18,local_18 >> 0x1f,
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
          local_1c = FUN_0002912c(*(undefined4 *)(param_2 + 4),local_18 >> 0x1f,local_18,
                                  local_18 >> 0x1f,0xfffffc00,local_480);
          if (local_1c == 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe0) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe4) = (undefined4)sStack_80.st_rdev;
            memcpy((void *)(*(int *)(param_1 + 0x10) + 0xd0),local_20 + 0xc,0x10);
            memset((void *)(*(int *)(param_1 + 0x10) + 0x10c),0,0x44);
            FUN_0002941c(*(undefined4 *)(param_1 + 0x10));
            FUN_000176ec(param_1);
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



/* ===== FUN_0002a5d0 @ 0002a5d0 size=972 ===== */

int FUN_0002a5d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
    local_c = FUN_00018500(*(undefined4 *)(param_1 + 0xc),&local_474,acStack_470,0x3f6);
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
      local_c = FUN_00029e28(param_1,8,param_2,param_4,param_3,param_4,param_5);
      if (local_c != 0) {
        return local_c;
      }
LAB_0002a918:
      *(__ino_t *)(*(int *)(param_1 + 0x10) + 0xe0) = local_10;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe4) = 0;
      memset((void *)(*(int *)(param_1 + 0x10) + 0xd0),0,0x10);
      FUN_0002941c(*(undefined4 *)(param_1 + 0x10));
      FUN_000176ec(param_1);
      return 0;
    }
    local_c = 0x10;
  }
  else {
    local_478 = 0;
    sVar1 = strlen(acStack_470);
    *(undefined4 *)(acStack_470 + sVar1) = s___journal_00045f68._0_4_;
    *(undefined4 *)(acStack_46c + sVar1) = s___journal_00045f68._4_4_;
    *(undefined2 *)(acStack_468 + sVar1) = s___journal_00045f68._8_2_;
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
    local_c = FUN_00029694(param_1,acStack_470,param_2,param_5 & 0xfffffffd);
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
              goto LAB_0002a918;
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



/* ===== FUN_0002a99c @ 0002a99c size=68 ===== */

undefined4 FUN_0002a99c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002a5d0(param_1,param_2,0xffffffff,0xffffffff,param_3);
  return uVar1;
}



/* ===== FUN_0002a9e0 @ 0002a9e0 size=60 ===== */

bool FUN_0002a9e0(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x100) != 0;
}



/* ===== FUN_0002aa1c @ 0002aa1c size=712 ===== */

int FUN_0002aa1c(int param_1,undefined4 param_2,uint param_3,uint param_4,void *param_5)

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
    uVar8 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
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
        uVar3 = FUN_00024c08(*(undefined4 *)(param_1 + 0x9c));
        local_c = FUN_00017c08(*(undefined4 *)(param_1 + 0x14),uVar3,param_1 + 0x98);
        if (local_c != 0) {
          return local_c;
        }
      }
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x14) * (ulonglong)param_3;
      iVar2 = *(uint *)(param_1 + 0x14) * param_4 + (int)((ulonglong)lVar1 >> 0x20);
      lVar9 = FUN_000186f8(*(undefined4 *)(param_1 + 0x9c),iVar2,(int)lVar1,iVar2,0);
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
         (iVar2 = FUN_0001db80(param_1,piVar6), iVar2 == 0)) {
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



/* ===== FUN_0002ace4 @ 0002ace4 size=324 ===== */

int FUN_0002ace4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

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
    lVar7 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
    uVar2 = (uint)((ulonglong)lVar7 >> 0x20);
    bVar6 = uVar2 <= uVar5;
    if (uVar5 == uVar2) {
      bVar6 = (uint)lVar7 <= uVar3;
    }
    if (!bVar6 || lVar7 == lVar1) {
      local_18 = FUN_0001dbf0(param_1,local_14);
      if (local_18 != 0) {
        return local_18;
      }
      local_18 = FUN_0002912c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,
                              param_4,0xfffffc00,param_5);
      (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x1c))(*(undefined4 *)(param_1 + 4));
      return local_18;
    }
  }
  return 0x7f2bb78d;
}



/* ===== FUN_0002ae28 @ 0002ae28 size=196 ===== */

uint FUN_0002ae28(void)

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



/* ===== FUN_0002aeec @ 0002aeec size=344 ===== */

int FUN_0002aeec(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 0x94) == 0) &&
     (iVar1 = FUN_0001744c(*(undefined4 *)(param_1 + 0x14),param_1 + 0x94), iVar1 != 0)) {
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
  iVar1 = FUN_0002ace4(param_1,*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                       *(undefined4 *)(param_1 + 0x94));
  return iVar1;
}



/* ===== FUN_0002b044 @ 0002b044 size=44 ===== */

undefined4 FUN_0002b044(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002b68c(param_1,0);
  return uVar1;
}



/* ===== FUN_0002b070 @ 0002b070 size=84 ===== */

undefined4 FUN_0002b070(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    uVar1 = 0x7f2bb715;
  }
  else {
    uVar1 = FUN_0002aeec(param_1);
  }
  return uVar1;
}



/* ===== FUN_0002b0c4 @ 0002b0c4 size=292 ===== */

int FUN_0002b0c4(int param_1,undefined4 param_2)

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
    uVar1 = FUN_0001744c(*(undefined4 *)(param_1 + 0x14),param_1 + 0x94);
    if ((int)uVar1 != 0) {
      return (int)uVar1;
    }
  }
  local_c = (int)uVar1;
  local_c = FUN_0002d6f0(param_1,(int)((ulonglong)uVar1 >> 0x20),0,0,*(undefined4 *)(param_1 + 0x94)
                         ,&local_18);
  if (local_c == 0) {
    *(undefined4 *)(local_10 + 0x168) = local_18;
    *(undefined4 *)(local_10 + 0x16c) = uStack_14;
    local_c = FUN_0002aeec(param_1);
  }
  return local_c;
}



/* ===== FUN_0002b1e8 @ 0002b1e8 size=844 ===== */

int FUN_0002b1e8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  uint local_c;
  
  if ((*(int *)(param_1 + 0x94) == 0) &&
     (iVar1 = FUN_0001744c(*(undefined4 *)(param_1 + 0x14),param_1 + 0x94), iVar1 != 0)) {
    return iVar1;
  }
  iVar1 = FUN_0002aa1c(param_1,*(undefined4 *)(param_1 + 0x94),
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
    iVar2 = FUN_0002aa1c(param_1,*(undefined4 *)(param_1 + 0x94),
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
    iVar2 = FUN_0002ae28();
    *(int *)(iVar1 + 4) = iVar2;
    gethostname((char *)(iVar1 + 0x10),0x40);
    strncpy((char *)(iVar1 + 0x50),*(char **)(param_1 + 0xc),0x20);
    local_10 = FUN_0002ace4(param_1,*(undefined4 *)(param_1 + 0x94),
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                            *(undefined4 *)(param_1 + 0x94));
    if (local_10 == 0) {
      sleep(local_c * 2 + 1);
      local_10 = FUN_0002aa1c(param_1,*(undefined4 *)(param_1 + 0x94),
                              *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                              *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                              *(undefined4 *)(param_1 + 0x94));
      if (local_10 == 0) {
        if (iVar2 == *(int *)(iVar1 + 4)) {
          *(undefined4 *)(iVar1 + 4) = 0xe24d4d50;
          local_10 = FUN_0002ace4(param_1,*(undefined4 *)(param_1 + 0x94),
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



/* ===== FUN_0002b534 @ 0002b534 size=344 ===== */

int FUN_0002b534(int param_1)

{
  int iVar1;
  void *__s2;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0002a9e0(*(undefined4 *)(param_1 + 0x10));
  if ((((iVar1 != 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) &&
      ((*(uint *)(param_1 + 8) & 0x100000) == 0)) &&
     (local_c = FUN_0002aa1c(param_1,*(undefined4 *)(param_1 + 0x94),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                             *(undefined4 *)(param_1 + 0x94)), local_c == 0)) {
    __s2 = *(void **)(param_1 + 0x98);
    iVar1 = memcmp(*(void **)(param_1 + 0x94),__s2,0x400);
    if (iVar1 == 0) {
      *(undefined4 *)((int)__s2 + 4) = 0xff4d4d50;
      local_c = FUN_0002ace4(param_1,*(undefined4 *)(param_1 + 0x98),
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



/* ===== FUN_0002b68c @ 0002b68c size=376 ===== */

int FUN_0002b68c(int param_1,int param_2)

{
  int iVar1;
  timeval local_1c;
  void *local_14;
  void *local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0002a9e0(*(undefined4 *)(param_1 + 0x10));
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
      local_c = FUN_0002aa1c(param_1,0,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),0);
      if (local_c == 0) {
        local_10 = *(void **)(param_1 + 0x94);
        local_14 = *(void **)(param_1 + 0x98);
        iVar1 = memcmp(local_10,local_14,0x400);
        if (iVar1 == 0) {
          *(__time_t *)((int)local_10 + 8) = local_1c.tv_sec;
          *(__time_t *)((int)local_10 + 0xc) = local_1c.tv_sec >> 0x1f;
          *(undefined4 *)((int)local_10 + 4) = 0xe24d4d50;
          local_c = FUN_0002ace4(param_1,*(undefined4 *)(param_1 + 0x94),
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



/* ===== FUN_0002b804 @ 0002b804 size=60 ===== */

bool FUN_0002b804(int param_1)

{
  return (*(uint *)(param_1 + 100) & 8) != 0;
}



/* ===== FUN_0002b840 @ 0002b840 size=224 ===== */

undefined4
FUN_0002b840(int param_1,uint *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if ((-1 < param_4) && (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) <= *param_2)) {
    uVar3 = *param_2;
    uVar5 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    bVar4 = iVar2 == 0;
    if (iVar2 == 0) {
      bVar4 = (uint)uVar5 <= uVar3;
    }
    if (!bVar4) {
      uVar1 = FUN_00015cf8(*param_7,*param_2,*param_7,*param_2,param_3);
      param_7[1] = uVar1;
      if (param_7[1] == 0) {
        return 0;
      }
      return 2;
    }
  }
  return 0;
}



/* ===== FUN_0002b920 @ 0002b920 size=396 ===== */

int FUN_0002b920(int *param_1,int *param_2)

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
    local_10 = FUN_00028480(param_1,1,auStack_98);
    if (local_10 != 0) {
      return local_10;
    }
    local_c = local_7c;
    iVar1 = FUN_0002b804(param_1[4]);
    if ((iVar1 == 0) || ((local_78 & 0x40000) == 0)) {
      local_c = FUN_00044a2c(local_c,(uint)param_1[5] >> 9);
    }
    local_c = local_c + 0x14;
    if (local_c < 0x32) {
      local_c = 0x32;
    }
    if (50000 < local_c) {
      local_c = 500;
    }
    local_10 = FUN_00015978(param_2,local_c);
    if (local_10 != 0) {
      return local_10;
    }
  }
  local_18 = *param_2;
  local_14 = 0;
  iVar1 = FUN_00034fb8(param_1,1,8,0,FUN_0002b840,&local_18);
  if (iVar1 != 0) {
    local_14 = iVar1;
  }
  return local_14;
}



/* ===== FUN_0002baac @ 0002baac size=60 ===== */

bool FUN_0002baac(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_0002bae8 @ 0002bae8 size=60 ===== */

bool FUN_0002bae8(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0002bb24 @ 0002bb24 size=96 ===== */

undefined4 FUN_0002bb24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0002bae8(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0002baac(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0002bb84 @ 0002bb84 size=1544 ===== */

int FUN_0002bb84(int *param_1,int param_2,int param_3)

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
  local_30 = FUN_0002bb24(param_1);
  local_14 = 0;
  local_18 = 0;
  if (param_3 == 0) {
LAB_0002bc98:
    if (param_2 != 0) {
      local_18 = *(int *)(param_1[4] + 0x28) + 7U >> 3;
      local_1c = FUN_00029308(param_1[1],0,&local_48);
      if (local_1c != 0) goto LAB_0002c14c;
      memset(local_48,0xff,param_1[5]);
    }
    for (local_c = 0; local_c < (uint)param_1[7]; local_c = local_c + 1) {
      if (param_3 != 0) {
        if (local_30 == 0) {
LAB_0002bd3c:
          local_1c = FUN_0002f9b8(param_1[0xc],param_1[0xc],local_28,iStack_24,local_14 << 3,
                                  local_44);
          if (local_1c != 0) goto LAB_0002c14c;
          if (local_c == param_1[7] - 1U) {
            uVar5 = FUN_0001b5fc(param_1[4]);
            FUN_00045084((uint)uVar5 - *(uint *)(param_1[4] + 0x14),
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
                FUN_0002f9f8(local_10,local_44);
                uVar2 = local_10 + 1;
              }
            }
          }
          local_1c = FUN_0001f0ac(param_1,local_c,local_44,local_14);
          if (local_1c != 0) {
            return local_1c;
          }
          FUN_0001f740(param_1,local_c);
          param_1[2] = param_1[2] | 4;
          lVar6 = FUN_0001ba58(param_1,local_c);
          local_40 = lVar6;
          if (lVar6 != 0) {
            local_1c = FUN_0002912c(param_1[1],param_1[1],(int)lVar6,(int)((ulonglong)lVar6 >> 0x20)
                                    ,1,local_44);
            if (local_1c != 0) {
              local_1c = 0x7f2bb71d;
              goto LAB_0002c14c;
            }
          }
        }
        else {
          iVar1 = FUN_0001c2a0(param_1,local_c,2);
          if (iVar1 == 0) goto LAB_0002bd3c;
        }
        uVar5 = VectorShiftRight(CONCAT44(local_14 << 3,local_14 << 3),0x20);
        bVar4 = CARRY4((uint)uVar5,local_28);
        local_28 = (uint)uVar5 + local_28;
        iStack_24 = (int)((ulonglong)uVar5 >> 0x20) + iStack_24 + (uint)bVar4;
      }
      if (param_2 != 0) {
        if (local_30 == 0) {
LAB_0002bf98:
          local_1c = FUN_0002f8a0(param_1[0xb],local_48,local_2c,0,local_18 << 3,local_48);
          if (local_1c != 0) goto LAB_0002c14c;
          local_1c = FUN_0001ef08(param_1,local_c,local_48,local_18);
          if (local_1c != 0) goto LAB_0002c14c;
          FUN_0001f740(param_1,local_c);
          param_1[2] = param_1[2] | 4;
          lVar6 = FUN_0001bbec(param_1,local_c);
          local_40 = lVar6;
          if (lVar6 != 0) {
            local_1c = FUN_0002912c(param_1[1],param_1[1],(int)lVar6,(int)((ulonglong)lVar6 >> 0x20)
                                    ,1,local_48);
            if (local_1c != 0) {
              local_1c = 0x7f2bb71b;
              goto LAB_0002c14c;
            }
          }
        }
        else {
          iVar1 = FUN_0001c2a0(param_1,local_c,1);
          if (iVar1 == 0) goto LAB_0002bf98;
        }
        local_2c = local_2c + local_18 * 8;
      }
    }
    if (param_3 != 0) {
      param_1[2] = param_1[2] & 0xffffffdf;
      FUN_00017630(&local_44);
    }
    if (param_2 != 0) {
      param_1[2] = param_1[2] & 0xffffffef;
      FUN_00017630(&local_48);
    }
    local_1c = 0;
  }
  else {
    local_14 = *(uint *)(param_1[4] + 0x24) >> 3;
    local_1c = FUN_00029308(param_1[1],0,&local_44);
    if (local_1c == 0) {
      memset(local_44,0xff,param_1[5]);
      goto LAB_0002bc98;
    }
LAB_0002c14c:
    if (local_48 != (void *)0x0) {
      FUN_00017630(&local_48);
    }
    if (local_44 != (void *)0x0) {
      FUN_00017630(&local_44);
    }
  }
  return local_1c;
}



/* ===== FUN_0002c18c @ 0002c18c size=272 ===== */

undefined4 FUN_0002c18c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint local_c;
  
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  for (local_c = 0; local_c < *(uint *)(param_1 + 0x1c); local_c = local_c + 1) {
    iVar1 = FUN_0001c2a0(param_1,local_c,2);
    if (iVar1 != 0) {
      FUN_0002e47c(param_1,local_c,uVar3);
      lVar4 = FUN_0001bd08(param_1,local_c);
      uVar2 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        FUN_00023d24(uVar3,uVar2,(int)lVar4,uVar2,*(undefined4 *)(param_1 + 0x28));
      }
      lVar4 = FUN_0001ba58(param_1,local_c);
      uVar2 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        FUN_00016edc(uVar3,uVar2,(int)lVar4,uVar2);
      }
      lVar4 = FUN_0001bbec(param_1,local_c);
      uVar2 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        FUN_00016edc(uVar3,uVar2,(int)lVar4,uVar2);
      }
    }
  }
  return 0;
}



/* ===== FUN_0002c29c @ 0002c29c size=2576 ===== */

int FUN_0002c29c(int *param_1,int param_2,int param_3)

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
  param_1[0xf] = (int)FUN_0002cdf4;
  local_44 = FUN_0002bb24(param_1);
  sVar4 = strlen((char *)param_1[3]);
  local_10 = FUN_0001744c(sVar4 + 0x50,&local_50);
  if (local_10 != 0) {
    return local_10;
  }
  if (param_3 == 0) {
    local_14 = 0;
    local_10 = 0;
LAB_0002c4a4:
    if (param_2 == 0) {
      local_18 = 0;
    }
    else {
      if (param_1[0xb] != 0) {
        FUN_0002eef8(param_1[0xb]);
      }
      uVar3 = s_inode_bitmap_for_00045f88._12_4_;
      uVar2 = s_inode_bitmap_for_00045f88._8_4_;
      uVar1 = s_inode_bitmap_for_00045f88._4_4_;
      *(undefined4 *)local_50 = s_inode_bitmap_for_00045f88._0_4_;
      *(undefined4 *)(local_50 + 4) = uVar1;
      *(undefined4 *)(local_50 + 8) = uVar2;
      *(undefined4 *)(local_50 + 0xc) = uVar3;
      *(undefined2 *)(local_50 + 0x10) = s_inode_bitmap_for_00045f88._16_2_;
      strcat(local_50,(char *)param_1[3]);
      local_10 = FUN_0002ef94(param_1,local_50,param_1 + 0xb);
      if ((local_10 != 0) || (local_10 = FUN_00029308(param_1[1],0,&local_4c), local_10 != 0))
      goto LAB_0002cc04;
    }
    FUN_00017630(&local_50);
    if ((param_1[2] & 0x2000U) == 0) {
      for (local_c = 0; local_c < (uint)param_1[7]; local_c = local_c + 1) {
        if (local_48 != (void *)0x0) {
          local_28 = FUN_0001ba58(param_1,local_c);
          if (((local_44 != 0) && (iVar6 = FUN_0001c2a0(param_1,local_c,2), iVar6 != 0)) &&
             (iVar6 = FUN_0001f6d4(param_1,local_c), iVar6 != 0)) {
            local_28 = 0;
          }
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) {
            memset(local_48,0,local_14);
          }
          else {
            local_10 = FUN_00029060(param_1[1],param_1[1],(uint)local_28,local_28._4_4_,1,local_48);
            if (local_10 != 0) {
              local_10 = 0x7f2bb71e;
              goto LAB_0002cc04;
            }
            if (((param_1[2] & 0x200000U) == 0) &&
               (iVar6 = FUN_0001efc8(param_1,local_c,local_48,local_14), iVar6 == 0)) {
              local_10 = 0x7f2bb79c;
              goto LAB_0002cc04;
            }
          }
          local_1c = local_14 << 3;
          local_10 = FUN_0002f92c(param_1[0xc],param_1[0xc],local_30,iStack_2c,local_1c,local_48);
          if (local_10 != 0) goto LAB_0002cc04;
          uVar8 = VectorShiftRight(CONCAT44(local_14 << 3,local_14 << 3),0x20);
          bVar7 = CARRY4((uint)uVar8,local_30);
          local_30 = (uint)uVar8 + local_30;
          iStack_2c = (int)((ulonglong)uVar8 >> 0x20) + iStack_2c + (uint)bVar7;
          local_10 = 0;
        }
        if (local_4c != (void *)0x0) {
          local_28 = FUN_0001bbec(param_1,local_c);
          if (((local_44 != 0) && (iVar6 = FUN_0001c2a0(param_1,local_c,1), iVar6 != 0)) &&
             (iVar6 = FUN_0001f6d4(param_1,local_c), iVar6 != 0)) {
            local_28 = 0;
          }
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) {
            memset(local_4c,0,local_18);
          }
          else {
            local_10 = FUN_00029060(param_1[1],param_1[1],(uint)local_28,local_28._4_4_,1,local_4c);
            if (local_10 != 0) {
              local_10 = 0x7f2bb71c;
              goto LAB_0002cc04;
            }
            if (((param_1[2] & 0x200000U) == 0) &&
               (iVar6 = FUN_0001ee24(param_1,local_c,local_4c,local_18), iVar6 == 0)) {
              local_10 = 0x7f2bb793;
              goto LAB_0002cc04;
            }
          }
          local_1c = local_18 << 3;
          local_10 = FUN_0002f814(param_1[0xb],local_1c,local_3c,0,local_1c,local_4c);
          if (local_10 != 0) goto LAB_0002cc04;
          local_3c = local_3c + local_18 * 8;
          local_10 = 0;
        }
      }
      if ((param_3 != 0) && (local_10 = FUN_0002c18c(param_1), local_10 != 0)) goto LAB_0002cc04;
    }
    else {
      uVar5 = FUN_00044a2c(*(undefined4 *)(param_1[0x16] + 0x124),param_1[5]);
      local_28 = (ulonglong)uVar5;
      local_40 = *(uint *)param_1[4];
      for (; 0 < (int)local_18; local_18 = local_18 - param_1[5]) {
        local_28 = CONCAT44(local_28._4_4_ + (uint)(0xfffffffe < (uint)local_28),(uint)local_28 + 1)
        ;
        local_10 = FUN_00029060(param_1[0x22]);
        if (local_10 != 0) goto LAB_0002cc04;
        local_1c = param_1[5] << 3;
        if (local_40 < local_1c) {
          local_1c = local_40;
        }
        local_10 = FUN_0002f814(param_1[0xb],local_1c,local_3c,0,local_1c,local_4c);
        if (local_10 != 0) goto LAB_0002cc04;
        local_3c = local_3c + param_1[5] * 8;
        local_40 = local_40 + param_1[5] * -8;
        local_10 = 0;
      }
      uVar5 = FUN_00044a2c(*(undefined4 *)(param_1[0x16] + 0x128),param_1[5]);
      local_28 = (ulonglong)uVar5;
      local_38 = (ulonglong)(uint)param_1[7] * (ulonglong)*(uint *)(param_1[4] + 0x24);
      for (; 0 < (int)local_14; local_14 = local_14 - param_1[5]) {
        local_28 = CONCAT44(local_28._4_4_ + (uint)(0xfffffffe < (uint)local_28),(uint)local_28 + 1)
        ;
        local_10 = FUN_00029060(param_1[0x22]);
        if (local_10 != 0) goto LAB_0002cc04;
        local_1c = param_1[5] << 3;
        if (local_38._4_4_ == 0 && (uint)local_38 < local_1c) {
          local_1c = (uint)local_38;
        }
        local_10 = FUN_0002f92c(param_1[0xc],param_1[0xc],local_30,iStack_2c,local_1c,local_48);
        if (local_10 != 0) goto LAB_0002cc04;
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
      FUN_00017630(&local_4c);
    }
    if (local_48 != (void *)0x0) {
      FUN_00017630(&local_48);
    }
    local_10 = 0;
  }
  else {
    if (param_1[0xc] != 0) {
      FUN_0002ef1c(param_1[0xc]);
    }
    uVar3 = s_block_bitmap_for_00045f74._12_4_;
    uVar2 = s_block_bitmap_for_00045f74._8_4_;
    uVar1 = s_block_bitmap_for_00045f74._4_4_;
    *(undefined4 *)local_50 = s_block_bitmap_for_00045f74._0_4_;
    *(undefined4 *)(local_50 + 4) = uVar1;
    *(undefined4 *)(local_50 + 8) = uVar2;
    *(undefined4 *)(local_50 + 0xc) = uVar3;
    *(undefined2 *)(local_50 + 0x10) = s_block_bitmap_for_00045f74._16_2_;
    strcat(local_50,(char *)param_1[3]);
    local_10 = FUN_0002f118(param_1,local_50,param_1 + 0xc);
    if ((local_10 == 0) && (local_10 = FUN_00029308(param_1[1],0,&local_48), local_10 == 0))
    goto LAB_0002c4a4;
LAB_0002cc04:
    if (param_3 != 0) {
      FUN_00017630(param_1 + 0xc);
      param_1[0xc] = 0;
    }
    if (param_2 != 0) {
      FUN_00017630(param_1 + 0xb);
      param_1[0xb] = 0;
    }
    if (local_4c != (void *)0x0) {
      FUN_00017630(&local_4c);
    }
    if (local_48 != (void *)0x0) {
      FUN_00017630(&local_48);
    }
    if (local_50 != (char *)0x0) {
      FUN_00017630(&local_50);
    }
  }
  return local_10;
}



/* ===== FUN_0002ccac @ 0002ccac size=48 ===== */

undefined4 FUN_0002ccac(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c29c(param_1,1,0);
  return uVar1;
}



/* ===== FUN_0002ccdc @ 0002ccdc size=48 ===== */

undefined4 FUN_0002ccdc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c29c(param_1,0,1);
  return uVar1;
}



/* ===== FUN_0002cd0c @ 0002cd0c size=48 ===== */

undefined4 FUN_0002cd0c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002bb84(param_1,1,0);
  return uVar1;
}



/* ===== FUN_0002cd3c @ 0002cd3c size=48 ===== */

undefined4 FUN_0002cd3c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002bb84(param_1,0,1);
  return uVar1;
}



/* ===== FUN_0002cd6c @ 0002cd6c size=136 ===== */

undefined4 FUN_0002cd6c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(param_1 + 0x30) == 0)) {
    uVar1 = FUN_0002c29c(param_1,*(int *)(param_1 + 0x2c) == 0,*(int *)(param_1 + 0x30) == 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0002cdf4 @ 0002cdf4 size=184 ===== */

undefined4 FUN_0002cdf4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x2c) == 0) || (iVar1 = FUN_0001787c(param_1), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if ((*(int *)(param_1 + 0x30) == 0) || (iVar2 = FUN_000178a8(param_1), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  if ((iVar1 == 0) && (iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0002bb84(param_1,iVar1,iVar2);
  }
  return uVar3;
}



/* ===== FUN_0002ceac @ 0002ceac size=60 ===== */

bool FUN_0002ceac(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_0002cee8 @ 0002cee8 size=60 ===== */

bool FUN_0002cee8(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0002cf24 @ 0002cf24 size=96 ===== */

undefined4 FUN_0002cf24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0002cee8(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0002ceac(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0002cf84 @ 0002cf84 size=148 ===== */

void FUN_0002cf84(int param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 < *(uint *)(param_1 + 0x1c)) && (iVar1 = FUN_0002cf24(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_0001c2a0(param_1,param_2,2), iVar1 != 0)) {
    FUN_0001c358(param_1,param_2,2);
    FUN_0001f740(param_1,param_2);
    FUN_000176ec(param_1);
    FUN_00017848(param_1);
  }
  return;
}



/* ===== FUN_0002d018 @ 0002d018 size=268 ===== */

void FUN_0002d018(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((param_3 < *(uint *)(param_1 + 0x1c)) && (iVar1 = FUN_0002cf24(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_0001c2a0(param_1,param_3,1), iVar1 != 0)) {
    local_10 = param_3 * *(int *)(*(int *)(param_1 + 0x10) + 0x28);
    local_c = 0;
    while( true ) {
      local_10 = local_10 + 1;
      if (*(uint *)(*(int *)(param_1 + 0x10) + 0x28) <= local_c) break;
      FUN_000170d0(param_2,local_10);
      local_c = local_c + 1;
    }
    FUN_0001c358(param_1,param_3,1);
    FUN_0001c358(param_1,param_3,2);
    FUN_0001f740(param_1,param_3);
    FUN_00017814(param_1);
    FUN_000176ec(param_1);
  }
  return;
}



/* ===== FUN_0002d124 @ 0002d124 size=784 ===== */

undefined4 FUN_0002d124(int *param_1,int param_2,undefined4 param_3,int param_4,uint *param_5)

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
        local_18 = FUN_00044a2c(param_2 + -1,*(undefined4 *)(param_1[4] + 0x28));
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
          FUN_00044ad4(local_10 - 1,*(undefined4 *)(param_1[4] + 0x28));
          local_1c = extraout_r1;
          local_18 = FUN_00044a2c(local_10 - 1,*(undefined4 *)(param_1[4] + 0x28));
          FUN_0002d018(param_1,param_4,local_18,local_18,param_4,param_3);
          local_14 = local_10 + (*(int *)(param_1[4] + 0x28) - local_1c);
          if ((local_10 < local_c) && (local_c <= local_14)) {
            local_14 = local_c - 1;
          }
          if (*(uint *)param_1[4] < local_14) {
            local_14 = *(uint *)param_1[4];
          }
          local_20 = FUN_00017198(param_4,local_10,local_14,&local_24);
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
        iVar1 = FUN_00016fdc(param_4,local_10);
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



/* ===== FUN_0002d434 @ 0002d434 size=592 ===== */

int FUN_0002d434(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
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
    goto LAB_0002d620;
  }
  if (param_5 == 0) {
    param_5 = param_1[0xc];
  }
  if (param_5 == 0) {
    return 0x7f2bb728;
  }
  if (param_3 == 0 && param_4 == 0) {
LAB_0002d530:
    local_30 = *(uint *)(param_1[4] + 0x14);
    uStack_2c = 0;
  }
  else {
    uVar4 = FUN_0001b5fc(param_1[4]);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    bVar3 = uVar2 <= param_4;
    if (param_4 == uVar2) {
      bVar3 = (uint)uVar4 <= param_3;
    }
    local_30 = param_3;
    uStack_2c = param_4;
    if (bVar3) goto LAB_0002d530;
  }
  uVar2 = -(1 << (param_1[0x19] & 0xffU));
  local_30 = uVar2 & local_30;
  uStack_2c = (int)uVar2 >> 0x1f & uStack_2c;
  uVar4 = FUN_0001b5fc(param_1[4]);
  uVar4 = FUN_0001713c(param_5,&local_20,local_30,uStack_2c,(int)uVar4 + -1,
                       (int)((ulonglong)uVar4 >> 0x20) - (uint)((int)uVar4 == 0),&local_20);
  local_14 = (int)uVar4;
  if ((local_14 == 2) &&
     (uVar4 = CONCAT44(uStack_2c,local_14),
     uStack_2c != 0 || local_30 != *(uint *)(param_1[4] + 0x14))) {
    uVar4 = FUN_0001713c(param_5,0,*(undefined4 *)(param_1[4] + 0x14),0,local_30 - 1,
                         uStack_2c - (local_30 == 0),&local_20);
  }
LAB_0002d620:
  local_14 = (int)uVar4;
  if (local_14 == 2) {
    local_14 = 0x7f2bb748;
  }
  else if (local_14 == 0) {
    uVar1 = FUN_0001b270(param_1,(int)((ulonglong)uVar4 >> 0x20),(undefined4)local_20,local_20._4_4_
                        );
    FUN_0002cf84(param_1,uVar1);
    *param_6 = (undefined4)local_20;
    param_6[1] = local_20._4_4_;
    local_14 = 0;
  }
  return local_14;
}



/* ===== FUN_0002d684 @ 0002d684 size=108 ===== */

int FUN_0002d684(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_0002d434(param_1,param_3,param_2,0,param_3,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_0002d6f0 @ 0002d6f0 size=368 ===== */

int FUN_0002d6f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,void *param_5,
                undefined4 *param_6)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  uVar1 = CONCAT44(param_2,local_c);
  if (*(int *)(param_1 + 0x8c) == 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar1 = FUN_0002ccdc(param_1);
      if ((int)uVar1 != 0) {
        return (int)uVar1;
      }
    }
    local_c = (int)uVar1;
    local_c = FUN_0002d434(param_1,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4,0,&local_18);
  }
  else {
    local_c = (**(code **)(param_1 + 0x8c))
                        (param_1,*(code **)(param_1 + 0x8c),param_3,param_4,&local_18);
  }
  if (local_c == 0) {
    if (param_5 == (void *)0x0) {
      local_c = FUN_0002985c(param_1,1,local_18,uStack_14,1,0,0);
    }
    else {
      memset(param_5,0,*(size_t *)(param_1 + 0x14));
      local_c = FUN_0002912c(*(undefined4 *)(param_1 + 4),1,local_18,uStack_14,1,param_5);
    }
    if (local_c == 0) {
      FUN_0002e968(param_1,1,local_18,uStack_14,1);
      *param_6 = local_18;
      param_6[1] = uStack_14;
    }
  }
  return local_c;
}



/* ===== FUN_0002d860 @ 0002d860 size=108 ===== */

int FUN_0002d860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_0002d6f0(param_1,param_3,param_2,0,param_3,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_0002d8cc @ 0002d8cc size=520 ===== */

undefined4
FUN_0002d8cc(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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
      uVar1 = FUN_0002f4ac(param_8);
      uVar1 = 1 << (uVar1 & 0xff);
      local_20 = -uVar1 & local_20;
      uStack_1c = (int)-uVar1 >> 0x1f & uStack_1c;
      param_5 = -uVar1 & param_5;
      param_6 = (int)-uVar1 >> 0x1f & param_6;
      do {
        uVar5 = (uStack_1c + ((int)param_7 >> 0x1f) + (uint)CARRY4(local_20,param_7)) -
                (uint)(local_20 + param_7 == 0);
        uVar7 = FUN_0001b5fc(param_1[4]);
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
        iVar2 = FUN_000173ac(param_8,uVar3,local_20,uStack_1c,param_7);
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



/* ===== FUN_0002dad4 @ 0002dad4 size=140 ===== */

int FUN_0002dad4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_0002d8cc(param_1,0,param_2,0,param_3,0,param_4,param_5,local_18);
  if (iVar1 == 0) {
    *param_6 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_0002dbd8 @ 0002dbd8 size=476 ===== */

ulonglong FUN_0002dbd8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
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
  if (((param_3 != 0) && (lVar2 = FUN_0001b4a8(param_1,param_3), lVar2 != 0)) &&
     ((*(uint *)(param_3 + 0x20) & 0x10000000) == 0)) {
    if ((*(uint *)(param_3 + 0x20) & 0x80000) == 0) {
      if (*(int *)(param_3 + 0x28) != 0) {
        return (ulonglong)*(uint *)(param_3 + 0x28);
      }
    }
    else {
      local_18 = FUN_0003a060(param_1,param_2,param_3,&local_3c);
      if (((local_18 == 0) && (local_18 = FUN_0003b0d0(local_3c,0,param_5,param_6), local_18 == 0))
         && (local_18 = FUN_0003a43c(local_3c,0,&local_38), local_18 == 0)) {
        FUN_00039f5c(local_3c);
        uVar1 = param_5 - (uint)uStack_30;
        return CONCAT44((param_6 -
                        ((int)((ulonglong)uStack_30 >> 0x20) + (uint)(param_5 < (uint)uStack_30))) +
                        iStack_34 + (uint)CARRY4(uVar1,local_38),uVar1 + local_38);
      }
    }
  }
  FUN_00039f5c(local_3c);
  local_19 = *(sbyte *)(*(int *)(param_1 + 0x10) + 0x174);
  local_14 = FUN_0001790c(param_1,param_2);
  if (local_19 != 0) {
    local_14 = local_14 & -(1 << local_19);
  }
  uVar3 = FUN_0001b2dc(param_1,local_14);
  return uVar3;
}



/* ===== FUN_0002ddb4 @ 0002ddb4 size=1172 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_0002ddb4(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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
  local_38 = FUN_0001b5fc(param_1[4]);
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
    goto LAB_0002e11c;
  }
  if (param_7 == 0) {
    param_7 = param_1[0xc];
  }
  if (param_7 == 0) {
    return 0x7f2bb728;
  }
  if (param_3 == 0 && param_4 == 0) {
LAB_0002df40:
    local_60 = *(uint *)(param_1[4] + 0x14);
    uStack_5c = 0;
  }
  else {
    uVar8 = FUN_0001b5fc(param_1[4]);
    uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
    bVar7 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar7 = (uint)uVar8 <= param_3;
    }
    local_60 = param_3;
    uStack_5c = param_4;
    if (bVar7) goto LAB_0002df40;
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
      local_1c = FUN_0001713c(param_7,uStack_44,local_48,uStack_44,iVar2,iVar6,&local_48);
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
    local_1c = FUN_00017214(param_7,uStack_44,local_48,uStack_44,local_28,uStack_24,&local_50);
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
LAB_0002e11c:
  local_28 = local_48;
  uStack_24 = uStack_44;
  while( true ) {
    bVar7 = uStack_4c <= uStack_24;
    if (uStack_24 == uStack_4c) {
      bVar7 = local_50 <= local_28;
    }
    if (bVar7) break;
    uVar4 = FUN_0001b270(param_1,uStack_24,local_28,uStack_24);
    FUN_0002cf84(param_1,uVar4);
    bVar7 = CARRY4(*(uint *)(param_1[4] + 0x20),local_28);
    local_28 = *(uint *)(param_1[4] + 0x20) + local_28;
    uStack_24 = uStack_24 + bVar7;
  }
  return 0;
}



/* ===== FUN_0002e2c0 @ 0002e2c0 size=384 ===== */

int FUN_0002e2c0(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
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
      local_10 = FUN_0002ddb4(param_1,local_c,param_3,param_4,param_5,0,0,param_6,&local_18);
      if (local_10 == 0) {
        bVar1 = iStack_14 == 0;
        if (iStack_14 == 0) {
          bVar1 = local_18 <= param_5;
        }
        if (!bVar1 || iStack_14 == 0 && param_5 == local_18) {
          if (((param_2 & 2) == 0) ||
             (local_10 = FUN_0002985c(param_1,param_5,*param_6,param_6[1],param_5,0,0),
             local_10 == 0)) {
            FUN_0002eba8(param_1,param_5,*param_6,param_6[1],param_5,1);
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



/* ===== FUN_0002e440 @ 0002e440 size=60 ===== */

bool FUN_0002e440(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x10) != 0;
}



/* ===== FUN_0002e47c @ 0002e47c size=476 ===== */

int FUN_0002e47c(int param_1,int param_2,undefined4 param_3)

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
  
  FUN_0001c930(param_1,param_2,&local_20,&local_28,&local_30,&local_34);
  uVar7 = FUN_0002e440(*(undefined4 *)(param_1 + 0x10));
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 == 0) {
    local_14 = *(int *)(param_1 + 0x20) + (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0xce);
  }
  else {
    local_14 = *(uint *)(*(int *)(param_1 + 0x10) + 0x104);
  }
  if ((local_20 != 0 || iStack_1c != 0) || (param_2 == 0)) {
    FUN_00016edc(param_3,uVar3,local_20,iStack_1c);
    uVar3 = extraout_r1;
  }
  if (((param_2 == 0) && (*(int *)(param_1 + 0x14) == 0x400)) &&
     (1 < 1 << (*(uint *)(param_1 + 100) & 0xff))) {
    FUN_00016edc(param_3,uVar3,0,0);
    uVar3 = extraout_r1_00;
  }
  if (local_28 != 0 || iStack_24 != 0) {
    local_18 = local_14;
    uVar4 = local_14 + local_28;
    uVar5 = ((int)local_14 >> 0x1f) + iStack_24 + (uint)CARRY4(local_14,local_28);
    uVar7 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
    uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
    bVar6 = uVar2 <= uVar5;
    if (uVar5 == uVar2) {
      bVar6 = (uint)uVar7 <= uVar4;
    }
    if (bVar6) {
      iVar1 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
      local_18 = iVar1 - local_28;
    }
    FUN_00023d24(param_3,local_18,local_28,iStack_24,local_18);
    uVar3 = extraout_r1_01;
  }
  if (local_30 != 0 || iStack_2c != 0) {
    FUN_00016edc(param_3,uVar3,local_30,iStack_2c);
  }
  iVar1 = FUN_0001b3e8(param_1,param_2);
  return (iVar1 - (*(int *)(param_1 + 0x28) + local_34)) + -2;
}



/* ===== FUN_0002e658 @ 0002e658 size=60 ===== */

bool FUN_0002e658(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_0002e694 @ 0002e694 size=60 ===== */

bool FUN_0002e694(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0002e6d0 @ 0002e6d0 size=96 ===== */

undefined4 FUN_0002e6d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0002e694(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0002e658(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0002e730 @ 0002e730 size=512 ===== */

void FUN_0002e730(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0001790c(param_1,param_2);
  if (**(uint **)(param_1 + 0x10) < param_2) {
    FUN_00043ed8("ext2fs_inode_alloc_stats2",0,"Illegal inode number: %lu",param_2);
  }
  else {
    if (param_3 < 1) {
      FUN_00016fa4(*(undefined4 *)(param_1 + 0x2c),param_2);
    }
    else {
      FUN_00016f6c(*(undefined4 *)(param_1 + 0x2c),param_2);
    }
    iVar2 = FUN_0001bf20(param_1,iVar1);
    FUN_0001bf9c(param_1,iVar1,iVar2 - param_3);
    if (param_4 != 0) {
      iVar2 = FUN_0001c01c(param_1,iVar1);
      FUN_0001c098(param_1,iVar1,iVar2 + param_3);
    }
    FUN_0001c358(param_1,iVar1,1);
    iVar2 = FUN_0002e6d0(param_1);
    if (iVar2 != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x28);
      iVar2 = FUN_0001c118(param_1,iVar1);
      if ((iVar3 - iVar2) + iVar1 * *(int *)(*(int *)(param_1 + 0x10) + 0x28) + 1U <= param_2) {
        FUN_0001c194(param_1,iVar1,*(int *)(*(int *)(param_1 + 0x10) + 0x28) * (iVar1 + 1) - param_2
                    );
      }
      FUN_0001f740(param_1,iVar1);
    }
    *(int *)(*(int *)(param_1 + 0x10) + 0x10) = *(int *)(*(int *)(param_1 + 0x10) + 0x10) - param_3;
    FUN_000176ec(param_1);
    FUN_00017814(param_1);
  }
  return;
}



/* ===== FUN_0002e930 @ 0002e930 size=56 ===== */

void FUN_0002e930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0002e730(param_1,param_2,param_3,0);
  return;
}



/* ===== FUN_0002e968 @ 0002e968 size=392 ===== */

void FUN_0002e968(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_0001b270(param_1,param_2,param_3,param_4);
  uVar6 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  bVar5 = uVar4 <= param_4;
  if (param_4 == uVar4) {
    bVar5 = (uint)uVar6 <= param_3;
  }
  if (bVar5) {
    FUN_00043ed8("ext2fs_block_alloc_stats",0,"Illegal block number: %lu",param_3);
  }
  else {
    if (param_5 < 1) {
      FUN_00016f0c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4);
    }
    else {
      FUN_00016edc(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4);
    }
    iVar3 = FUN_0001be24(param_1,uVar2);
    FUN_0001bea0(param_1,uVar2,iVar3 - param_5);
    FUN_0001c358(param_1,uVar2,2);
    FUN_0001f740(param_1,uVar2);
    uVar1 = -param_5;
    uVar4 = 1 << (*(uint *)(param_1 + 100) & 0xff);
    iVar3 = uVar4 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar4 >> 0x1f) +
            (int)((ulonglong)uVar4 * (ulonglong)uVar1 >> 0x20);
    FUN_0001b8f0(*(undefined4 *)(param_1 + 0x10),iVar3,(int)((ulonglong)uVar4 * (ulonglong)uVar1),
                 iVar3);
    FUN_000176ec(param_1);
    FUN_00017848(param_1);
    if (*(int *)(param_1 + 0x90) != 0) {
      (**(code **)(param_1 + 0x90))(param_1,*(code **)(param_1 + 0x90),param_3,param_4,param_5);
    }
  }
  return;
}



/* ===== FUN_0002eaf0 @ 0002eaf0 size=64 ===== */

void FUN_0002eaf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0002e968(param_1,param_3,param_2,0,param_3);
  return;
}



/* ===== FUN_0002eba8 @ 0002eba8 size=728 ===== */

void FUN_0002eba8(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,uint param_6)

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
  lVar8 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
  uVar4 = (uint)((ulonglong)lVar8 >> 0x20);
  bVar7 = uVar4 <= uVar5;
  if (uVar5 == uVar4) {
    bVar7 = (uint)lVar8 <= param_5 + param_3;
  }
  if (bVar7 && lVar8 != CONCAT44(uVar5,param_5 + param_3)) {
    FUN_00043ed8("ext2fs_block_alloc_stats_range",0,"Illegal block range: %llu (%u) ",param_4,
                 param_3,param_4,param_5);
  }
  else if (param_6 != 0) {
    local_38 = param_3;
    if ((int)param_6 < 1) {
      FUN_00023f84(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4,
                   param_5);
      param_6 = 0xffffffff;
      iVar3 = extraout_r1_00;
      iStack_34 = param_4;
    }
    else {
      FUN_00023d24(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4,
                   param_5);
      param_6 = 1;
      iVar3 = extraout_r1;
      iStack_34 = param_4;
    }
    for (; param_5 != 0; param_5 = param_5 - local_18) {
      uVar1 = FUN_0001b270(param_1,iVar3,local_38,iStack_34);
      uVar9 = FUN_0001b354(param_1,uVar1);
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
      iVar2 = FUN_0001be24(param_1,uVar1);
      iVar3 = 1 << (*(uint *)(param_1 + 100) & 0xff);
      iVar3 = FUN_00045084((int)((ulonglong)param_6 * (ulonglong)local_18),
                           ((int)param_6 >> 0x1f) * local_18 + param_6 * local_14 +
                           (int)((ulonglong)param_6 * (ulonglong)local_18 >> 0x20),iVar3,
                           iVar3 >> 0x1f);
      FUN_0001bea0(param_1,uVar1,iVar2 - iVar3);
      FUN_0001c358(param_1,uVar1,2);
      FUN_0001f740(param_1,uVar1);
      uVar4 = -param_6;
      iVar3 = ((int)uVar4 >> 0x1f) * local_18 + uVar4 * local_14 +
              (int)((ulonglong)uVar4 * (ulonglong)local_18 >> 0x20);
      FUN_0001b8f0(*(undefined4 *)(param_1 + 0x10),iVar3,
                   (int)((ulonglong)uVar4 * (ulonglong)local_18),iVar3);
      bVar7 = CARRY4(local_18,local_38);
      local_38 = local_18 + local_38;
      iVar3 = iStack_34;
      iStack_34 = local_14 + iStack_34 + (uint)bVar7;
    }
    FUN_000176ec(param_1);
    FUN_00017848(param_1);
    if (*(int *)(param_1 + 0xb8) != 0) {
      (**(code **)(param_1 + 0xb8))(param_1,*(code **)(param_1 + 0xb8),local_38,iStack_34,0,param_6)
      ;
    }
  }
  return;
}



/* ===== FUN_0002eef8 @ 0002eef8 size=36 ===== */

void FUN_0002eef8(undefined4 param_1)

{
  FUN_000226c8(param_1);
  return;
}



/* ===== FUN_0002ef1c @ 0002ef1c size=36 ===== */

void FUN_0002ef1c(undefined4 param_1)

{
  FUN_000226c8(param_1);
  return;
}



/* ===== FUN_0002ef40 @ 0002ef40 size=48 ===== */

undefined4 FUN_0002ef40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022834(param_1,param_2);
  return uVar1;
}



/* ===== FUN_0002ef70 @ 0002ef70 size=36 ===== */

void FUN_0002ef70(undefined4 param_1)

{
  FUN_000239bc(param_1);
  return;
}



/* ===== FUN_0002ef94 @ 0002ef94 size=388 ===== */

/* WARNING: Removing unreachable block (ram,0x0002f0bc) */

undefined4 FUN_0002ef94(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == 0x7f2bb701) {
    param_1[0xf] = (int)FUN_0002cdf4;
    iVar2 = param_1[7] * *(int *)(param_1[4] + 0x28);
    if ((param_1[2] & 0x20000U) == 0) {
      uVar1 = FUN_00020990(0x7f2bb709,param_1,1,*(undefined4 *)param_1[4],iVar2,param_2,0,param_3);
    }
    else {
      uVar1 = FUN_000222cc(param_1,0x7f2bb76f,(short)param_1[0x1a],0,1,0,*(undefined4 *)param_1[4],0
                           ,iVar2,0,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x7f2bb701;
  }
  return uVar1;
}



/* ===== FUN_0002f118 @ 0002f118 size=496 ===== */

undefined4 FUN_0002f118(int *param_1,undefined4 param_2,undefined4 param_3)

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
    param_1[0xf] = (int)FUN_0002cdf4;
    uVar1 = *(uint *)(param_1[4] + 0x14) >> (param_1[0x19] & 0xffU);
    uVar9 = FUN_0001b5fc(param_1[4]);
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
        uVar6 = FUN_00020990(0x7f2bb708,param_1,uVar1,uVar4,iVar5,param_2,0,param_3);
      }
      else {
        uVar6 = 0x7f2bb789;
      }
    }
    else {
      uVar6 = FUN_000222cc(param_1,0x7f2bb76e,(short)param_1[0x1a],0,uVar1,0,uVar4,uVar7,iVar5,iVar8
                           ,param_2,param_3);
    }
  }
  else {
    uVar6 = 0x7f2bb701;
  }
  return uVar6;
}



/* ===== FUN_0002f308 @ 0002f308 size=420 ===== */

int FUN_0002f308(int *param_1,undefined4 param_2,int *param_3)

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
    param_1[0xf] = (int)FUN_0002cdf4;
    if (param_1[0x19] == 0) {
      iVar2 = FUN_0002f118(param_1,param_2,param_3);
    }
    else if ((param_1[2] & 0x20000U) == 0) {
      iVar2 = 0x7f2bb789;
    }
    else {
      local_18 = *(undefined4 *)(param_1[4] + 0x14);
      uStack_14 = 0;
      uVar3 = FUN_0001b5fc(param_1[4]);
      local_20 = (int)uVar3 + -1;
      iStack_1c = (int)((ulonglong)uVar3 >> 0x20) - (uint)((int)uVar3 == 0);
      lVar1 = (ulonglong)(uint)param_1[7] * (ulonglong)*(uint *)(param_1[4] + 0x20) +
              CONCAT44(uStack_14,local_18);
      iVar2 = (int)lVar1;
      local_28 = iVar2 + -1;
      iStack_24 = (int)((ulonglong)lVar1 >> 0x20) - (uint)(iVar2 == 0);
      iVar2 = FUN_000222cc(param_1,0x7f2bb76e,(short)param_1[0x1a],uStack_14,local_18,uStack_14,
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



/* ===== FUN_0002f4ac @ 0002f4ac size=128 ===== */

int FUN_0002f4ac(int *param_1)

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



/* ===== FUN_0002f52c @ 0002f52c size=104 ===== */

undefined4 FUN_0002f52c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_18 [4];
  
  uVar1 = FUN_00022c14(param_1,0x7f2bb734,param_2,0,local_18);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_18[0];
  }
  return uVar1;
}



/* ===== FUN_0002f594 @ 0002f594 size=76 ===== */

undefined4 FUN_0002f594(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002148c(param_1,0x7f2bb708,0x7f2bb733,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0002f5e0 @ 0002f5e0 size=64 ===== */

undefined4
FUN_0002f5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022c14(param_1,0x7f2bb733,param_3,param_4,param_5);
  return uVar1;
}



/* ===== FUN_0002f620 @ 0002f620 size=36 ===== */

void FUN_0002f620(undefined4 param_1)

{
  FUN_00022f68(param_1);
  return;
}



/* ===== FUN_0002f644 @ 0002f644 size=36 ===== */

void FUN_0002f644(undefined4 param_1)

{
  FUN_00022f68(param_1);
  return;
}



/* ===== FUN_0002f668 @ 0002f668 size=64 ===== */

undefined4 FUN_0002f668(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002151c(0x7f2bb709,param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0002f6a8 @ 0002f6a8 size=56 ===== */

undefined4
FUN_0002f6a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022b04(param_5,param_2,param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002f6e0 @ 0002f6e0 size=64 ===== */

undefined4 FUN_0002f6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002151c(0x7f2bb708,param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0002f720 @ 0002f720 size=56 ===== */

undefined4
FUN_0002f720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022b04(param_5,param_2,param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002f758 @ 0002f758 size=56 ===== */

undefined4 FUN_0002f758(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000237b8(0x7f2bb738,param_1,param_2);
  return uVar1;
}



/* ===== FUN_0002f790 @ 0002f790 size=56 ===== */

undefined4 FUN_0002f790(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000237b8(0x7f2bb739,param_1,param_2);
  return uVar1;
}



/* ===== FUN_0002f7c8 @ 0002f7c8 size=76 ===== */

undefined4 FUN_0002f7c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000219a8(param_1,0x7f2bb709,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002f814 @ 0002f814 size=64 ===== */

undefined4
FUN_0002f814(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000234d8(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_0002f854 @ 0002f854 size=76 ===== */

undefined4 FUN_0002f854(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000218e8(param_1,0x7f2bb709,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002f8a0 @ 0002f8a0 size=64 ===== */

undefined4
FUN_0002f8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023648(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_0002f8e0 @ 0002f8e0 size=76 ===== */

undefined4 FUN_0002f8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000219a8(param_1,0x7f2bb708,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002f92c @ 0002f92c size=64 ===== */

undefined4
FUN_0002f92c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000234d8(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_0002f96c @ 0002f96c size=76 ===== */

undefined4 FUN_0002f96c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000218e8(param_1,0x7f2bb708,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002f9b8 @ 0002f9b8 size=64 ===== */

undefined4
FUN_0002f9b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023648(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_0002f9f8 @ 0002f9f8 size=152 ===== */

uint FUN_0002f9f8(uint param_1,int param_2)

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



/* ===== FUN_0002fa90 @ 0002fa90 size=160 ===== */

uint FUN_0002fa90(uint param_1,int param_2)

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



/* ===== FUN_0002fb30 @ 0002fb30 size=104 ===== */

uint FUN_0002fb30(uint param_1,int param_2)

{
  return 1 << (param_1 & 7) & (uint)*(byte *)(param_2 + (param_1 >> 3));
}



/* ===== FUN_0002fb98 @ 0002fb98 size=108 ===== */

void FUN_0002fb98(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00043ed8(0,param_1,&DAT_00046058,param_2);
  }
  else {
    FUN_00043ed8(0,param_1,"#%lu for %s",param_2,param_3);
  }
  return;
}



/* ===== FUN_0002fc04 @ 0002fc04 size=160 ===== */

uint FUN_0002fc04(uint param_1,int param_2,int param_3)

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



/* ===== FUN_0002fca4 @ 0002fca4 size=168 ===== */

uint FUN_0002fca4(uint param_1,int param_2,int param_3)

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



/* ===== FUN_0002fd4c @ 0002fd4c size=112 ===== */

uint FUN_0002fd4c(uint param_1,int param_2,int param_3)

{
  return 1 << (param_1 & 7) & (uint)*(byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
}



/* ===== FUN_0002fdbc @ 0002fdbc size=104 ===== */

uint FUN_0002fdbc(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55);
  uVar1 = (param_1 & 0x33) + (param_1 >> 2 & 0x33);
  return (uVar1 >> 4) + uVar1 & 0xf;
}



/* ===== FUN_0002fe24 @ 0002fe24 size=180 ===== */

uint FUN_0002fe24(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55555555);
  uVar1 = (param_1 & 0x33333333) + (param_1 >> 2 & 0x33333333);
  uVar1 = (uVar1 >> 4) + uVar1 & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  return (uVar1 >> 0x10) + uVar1 & 0xff;
}



/* ===== FUN_0002fed8 @ 0002fed8 size=288 ===== */

int FUN_0002fed8(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint local_20;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_14 = 0;
  local_c = param_1;
  for (local_20 = param_2; (((uint)local_c & 3) != 0 && (local_20 != 0)); local_20 = local_20 - 1) {
    iVar1 = FUN_0002fdbc(*(undefined1 *)local_c);
    local_14 = local_14 + iVar1;
    local_c = (undefined4 *)((int)local_c + 1);
  }
  local_10 = local_c;
  for (; 4 < local_20; local_20 = local_20 - 4) {
    iVar1 = FUN_0002fe24(*local_10);
    local_14 = local_14 + iVar1;
    local_10 = local_10 + 1;
  }
  local_c = local_10;
  for (; local_20 != 0; local_20 = local_20 - 1) {
    iVar1 = FUN_0002fdbc(*(undefined1 *)local_c);
    local_14 = local_14 + iVar1;
    local_c = (undefined4 *)((int)local_c + 1);
  }
  return local_14;
}



/* ===== FUN_0002fff8 @ 0002fff8 size=196 ===== */

int FUN_0002fff8(int param_1)

{
  uint uVar1;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_0001744c(4,&local_14);
  if (local_c == 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    local_10 = (*(uint *)(param_1 + 0x20) - uVar1 >> 3 |
               (*(int *)(param_1 + 0x24) -
               ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
               (uint)(*(uint *)(param_1 + 0x20) < uVar1))) * 0x20000000) + 1;
    local_c = FUN_0001744c(local_10,local_14);
    if (local_c == 0) {
      *(undefined4 *)(param_1 + 0x30) = local_14;
      local_c = 0;
    }
    else {
      FUN_00017630(&local_14);
    }
  }
  return local_c;
}



/* ===== FUN_000300bc @ 000300bc size=156 ===== */

int FUN_000300bc(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0002fff8(param_2);
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



/* ===== FUN_00030158 @ 00030158 size=116 ===== */

void FUN_00030158(int param_1)

{
  int *local_c;
  
  local_c = *(int **)(param_1 + 0x30);
  if (local_c != (int *)0x0) {
    if (*local_c != 0) {
      FUN_00017630(local_c);
      *local_c = 0;
    }
    FUN_00017630(&local_c);
  }
  return;
}



/* ===== FUN_000301cc @ 000301cc size=172 ===== */

int FUN_000301cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  iVar1 = FUN_0002fff8(param_2);
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



/* ===== FUN_00030278 @ 00030278 size=484 ===== */

int FUN_00030278(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6)

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
      FUN_0002fca4(local_10 - *(uint *)(param_1 + 0x10),
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
    if ((uVar2 == uVar4) || (iVar3 = FUN_0001767c(uVar2,uVar4,piVar1), iVar3 == 0)) {
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



/* ===== FUN_0003045c @ 0003045c size=100 ===== */

undefined4 FUN_0003045c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002fc04(param_3 - *(uint *)(param_1 + 0x10),
                       param_4 - (*(int *)(param_1 + 0x14) +
                                 (uint)(param_3 < *(uint *)(param_1 + 0x10))),
                       **(undefined4 **)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_000304c0 @ 000304c0 size=100 ===== */

undefined4 FUN_000304c0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002fca4(param_3 - *(uint *)(param_1 + 0x10),
                       param_4 - (*(int *)(param_1 + 0x14) +
                                 (uint)(param_3 < *(uint *)(param_1 + 0x10))),
                       **(undefined4 **)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_00030524 @ 00030524 size=100 ===== */

undefined4 FUN_00030524(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002fd4c(param_3 - *(uint *)(param_1 + 0x10),
                       param_4 - (*(int *)(param_1 + 0x14) +
                                 (uint)(param_3 < *(uint *)(param_1 + 0x10))),
                       **(undefined4 **)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_00030588 @ 00030588 size=156 ===== */

void FUN_00030588(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 local_14;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  for (local_14 = 0; local_14 < param_5; local_14 = local_14 + 1) {
    FUN_00016984((local_14 + param_3) - *(uint *)(param_1 + 0x10),
                 (param_4 + (uint)CARRY4(local_14,param_3)) -
                 (*(int *)(param_1 + 0x14) + (uint)(local_14 + param_3 < *(uint *)(param_1 + 0x10)))
                 ,*puVar1);
  }
  return;
}



/* ===== FUN_00030624 @ 00030624 size=156 ===== */

void FUN_00030624(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 local_14;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  for (local_14 = 0; local_14 < param_5; local_14 = local_14 + 1) {
    FUN_000169f8((local_14 + param_3) - *(uint *)(param_1 + 0x10),
                 (param_4 + (uint)CARRY4(local_14,param_3)) -
                 (*(int *)(param_1 + 0x14) + (uint)(local_14 + param_3 < *(uint *)(param_1 + 0x10)))
                 ,*puVar1);
  }
  return;
}



/* ===== FUN_000306c0 @ 000306c0 size=660 ===== */

undefined4 FUN_000306c0(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

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
  uVar1 = FUN_00021a68(iVar3 + local_10,local_18);
  return uVar1;
}



/* ===== FUN_00030954 @ 00030954 size=104 ===== */

undefined4
FUN_00030954(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  memcpy((void *)(**(int **)(param_1 + 0x30) + (param_3 >> 3 | param_4 << 0x1d)),param_6,
         param_5 + 7U >> 3);
  return 0;
}



/* ===== FUN_000309bc @ 000309bc size=104 ===== */

undefined4
FUN_000309bc(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  memcpy(param_6,(void *)(**(int **)(param_1 + 0x30) + (param_3 >> 3 | param_4 << 0x1d)),
         param_5 + 7U >> 3);
  return 0;
}



/* ===== FUN_00030a24 @ 00030a24 size=112 ===== */

void FUN_00030a24(int param_1)

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



/* ===== FUN_00030a94 @ 00030a94 size=112 ===== */

void FUN_00030a94(int param_1)

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



/* ===== FUN_00030b04 @ 00030b04 size=816 ===== */

undefined4
FUN_00030b04(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
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
    iVar3 = FUN_0002fd4c(local_c,0,*piVar2,*piVar2,param_3,param_4);
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
      if ((local_10 < 8) || (((uint)local_18 & 7) == 0)) goto LAB_00030c74;
      if ((char)*local_18 != -1) break;
      local_18 = (int *)((int)local_18 + 1);
      local_10 = local_10 - 8;
      local_c = local_c + 8;
    }
    bVar1 = true;
LAB_00030c74:
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
      iVar3 = FUN_0002fd4c(local_c,0,*piVar2,*piVar2,param_3,param_4);
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



/* ===== FUN_00030e34 @ 00030e34 size=804 ===== */

undefined4
FUN_00030e34(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
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
    iVar3 = FUN_0002fd4c(local_c,0,*piVar2,*piVar2,param_3,param_4);
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
      if ((local_10 < 8) || (((uint)local_18 & 7) == 0)) goto LAB_00030fa4;
      if ((char)*local_18 != '\0') break;
      local_18 = (int *)((int)local_18 + 1);
      local_10 = local_10 - 8;
      local_c = local_c + 8;
    }
    bVar1 = true;
LAB_00030fa4:
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
      iVar3 = FUN_0002fd4c(local_c,0,*piVar2,*piVar2,param_3,param_4);
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



/* ===== FUN_00031158 @ 00031158 size=56 ===== */

bool FUN_00031158(int *param_1)

{
  return *param_1 == 0;
}



/* ===== FUN_00031190 @ 00031190 size=92 ===== */

void FUN_00031190(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_1[1];
  *param_3 = (int)param_1;
  return;
}



/* ===== FUN_000311ec @ 000311ec size=36 ===== */

undefined4 FUN_000311ec(undefined4 param_1)

{
  return param_1;
}



/* ===== FUN_00031210 @ 00031210 size=104 ===== */

void FUN_00031210(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int local_10;
  int local_c;
  
  local_c = FUN_0001744c(0x20,&local_10);
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



/* ===== FUN_00031278 @ 00031278 size=140 ===== */

void FUN_00031278(int param_1,int param_2)

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
  FUN_00017630(&local_10);
  return;
}



/* ===== FUN_00031304 @ 00031304 size=132 ===== */

int FUN_00031304(int param_1)

{
  int iVar1;
  undefined4 *local_10 [2];
  
  iVar1 = FUN_0001744c(0x10,local_10);
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



/* ===== FUN_00031388 @ 00031388 size=68 ===== */

int FUN_00031388(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00031304(param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000313cc @ 000313cc size=116 ===== */

void FUN_000313cc(undefined4 param_1)

{
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_00043908(param_1);
  while (local_c != 0) {
    local_10 = FUN_000439c8(local_c);
    local_14 = FUN_000311ec(local_c);
    FUN_00043434(local_c,param_1);
    FUN_00017630(&local_14);
    local_c = local_10;
  }
  return;
}



/* ===== FUN_00031440 @ 00031440 size=72 ===== */

void FUN_00031440(int param_1)

{
  undefined4 local_c;
  
  local_c = *(undefined4 *)(param_1 + 0x30);
  FUN_000313cc(local_c);
  FUN_00017630(&local_c);
  return;
}



/* ===== FUN_00031488 @ 00031488 size=340 ===== */

int FUN_00031488(int param_1,int param_2)

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
  local_18 = FUN_00031304(param_2);
  if (local_18 == 0) {
    local_1c = *(int *)(param_1 + 0x30);
    local_20 = *(int **)(param_2 + 0x30);
    *(undefined4 *)(local_1c + 8) = 0;
    local_20[2] = 0;
    for (local_c = FUN_00043908(local_1c); local_c != 0; local_c = FUN_000439c8(local_c)) {
      local_24 = (void *)FUN_000311ec(local_c);
      local_18 = FUN_0001744c(0x20,&local_2c);
      if (local_18 != 0) {
        return local_18;
      }
      memcpy(local_2c,local_24,0x20);
      local_28 = local_2c;
      local_14 = local_20;
      local_10 = 0;
      if (*local_20 != 0) {
        local_10 = FUN_00043968(local_20);
        local_14 = (int *)(local_10 + 4);
      }
      FUN_00031190(local_28,local_10,local_14);
      FUN_00042e1c(local_28,local_20);
    }
  }
  return local_18;
}



/* ===== FUN_000315dc @ 000315dc size=240 ===== */

void FUN_000315dc(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_18;
  int local_14;
  
  local_14 = FUN_00043968(param_3);
  while( true ) {
    if (local_14 == 0) {
      return;
    }
    local_18 = FUN_000311ec(local_14);
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
      FUN_00043434(local_14,param_3);
      FUN_00017630(&local_18);
      local_14 = FUN_00043968(param_3);
    }
  }
  return;
}



/* ===== FUN_000316cc @ 000316cc size=280 ===== */

undefined4
FUN_000316cc(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
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
  FUN_000315dc(uVar3 - *(uint *)(param_1 + 0x10),
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
    FUN_00031a70(uVar1 + 1,
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



/* ===== FUN_000317e4 @ 000317e4 size=652 ===== */

undefined4 FUN_000317e4(int *param_1,undefined4 param_2,uint param_3,uint param_4)

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
      iVar1 = FUN_000439c8(iVar2);
      if (iVar1 != 0) {
        local_c = FUN_000311ec(iVar1);
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
      iVar2 = FUN_000311ec(*local_10);
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



/* ===== FUN_00031a70 @ 00031a70 size=1092 ===== */

uint FUN_00031a70(uint param_1,uint param_2,uint param_3,int param_4,int *param_5)

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
LAB_00031b98:
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
        goto LAB_00031d44;
      }
    }
  }
  while (*local_20 != 0) {
    local_1c = *local_20;
    local_2c = FUN_000311ec(local_1c);
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
      if (!bVar4 || param_2 == uVar2 && param_1 == uVar1) goto LAB_00031b98;
      local_20 = (int *)(*local_20 + 4);
    }
    else {
      local_20 = (int *)(*local_20 + 8);
    }
  }
  FUN_00031210(&local_3c,&local_3c,param_1,param_2,param_3,param_4);
  local_24 = local_3c;
  FUN_00031190(local_3c,local_1c,local_20);
  FUN_00042e1c(local_24,local_34);
  param_5[1] = local_3c;
  local_28 = FUN_00043a8c(local_24);
  local_50 = param_3;
  iStack_4c = param_4;
  local_48 = param_1;
  uStack_44 = param_2;
  if ((local_28 != 0) &&
     (local_2c = FUN_000311ec(local_28),
     param_2 ==
     *(int *)(local_2c + 0x1c) + *(int *)(local_2c + 0x14) +
     (uint)CARRY4(*(uint *)(local_2c + 0x18),*(uint *)(local_2c + 0x10)) &&
     param_1 == *(uint *)(local_2c + 0x18) + *(uint *)(local_2c + 0x10))) {
    local_48 = *(uint *)(local_2c + 0x10);
    uStack_44 = *(uint *)(local_2c + 0x14);
    local_50 = *(uint *)(local_2c + 0x18) + param_3;
    iStack_4c = *(int *)(local_2c + 0x1c) + param_4 +
                (uint)CARRY4(*(uint *)(local_2c + 0x18),param_3);
    FUN_00043434(local_28,local_34);
    FUN_00031278(param_5,local_2c);
  }
LAB_00031d44:
  local_28 = FUN_000439c8(local_24);
  do {
    if (local_28 == 0) {
LAB_00031e8c:
      *(uint *)(local_3c + 0x10) = local_48;
      *(uint *)(local_3c + 0x14) = uStack_44;
      *(uint *)(local_3c + 0x18) = local_50;
      *(int *)(local_3c + 0x1c) = iStack_4c;
      return local_30;
    }
    local_38 = FUN_000439c8(local_28);
    local_2c = FUN_000311ec(local_28);
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
      if (!bVar4) goto LAB_00031e8c;
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
        FUN_00043434(local_28,local_34);
        FUN_00031278(param_5,local_2c);
        goto LAB_00031e8c;
      }
      FUN_00043434(local_28,local_34);
      FUN_00031278(param_5,local_2c);
    }
    local_28 = local_38;
  } while( true );
}



/* ===== FUN_00031eb4 @ 00031eb4 size=1028 ===== */

undefined4 FUN_00031eb4(uint param_1,uint param_2,uint param_3,int param_4,int *param_5)

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
  iVar1 = FUN_00031158(param_5);
  if (iVar1 != 0) {
    return 0;
  }
LAB_00032154:
  do {
    iVar1 = local_24;
    if (*local_28 == 0) {
LAB_00032294:
      while( true ) {
        do {
          local_24 = iVar1;
          if (local_24 == 0) {
            return local_2c;
          }
          iVar1 = FUN_000439c8(local_24);
          iVar2 = FUN_000311ec(local_24);
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
        FUN_00043434(local_24,param_5);
        FUN_00031278(param_5,iVar2);
        local_2c = 1;
      }
      return local_2c;
    }
    local_24 = *local_28;
    iVar2 = FUN_000311ec(local_24);
    bVar7 = *(uint *)(iVar2 + 0x14) <= param_2;
    if (param_2 == *(uint *)(iVar2 + 0x14)) {
      bVar7 = *(uint *)(iVar2 + 0x10) <= param_1;
    }
    if (!bVar7) {
      local_28 = (int *)(*local_28 + 8);
      goto LAB_00032154;
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
          FUN_00031a70(uVar4,iVar5,uVar3 - uVar4,
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
        iVar1 = FUN_000439c8(iVar2);
        FUN_00043434(iVar2,param_5);
        FUN_00031278(param_5,iVar2);
        goto LAB_00032294;
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



/* ===== FUN_000322b8 @ 000322b8 size=104 ===== */

undefined4 FUN_000322b8(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_00031a70(param_3 - uVar2,
                       param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                                 (uint)(param_3 < uVar2)),1,0,*(undefined4 *)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_00032320 @ 00032320 size=104 ===== */

undefined4 FUN_00032320(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_00031eb4(param_3 - uVar2,
                       param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                                 (uint)(param_3 < uVar2)),1,0,*(undefined4 *)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_00032388 @ 00032388 size=88 ===== */

undefined4 FUN_00032388(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_000317e4(*(undefined4 *)(param_1 + 0x30),param_4,param_3 - uVar2,
                       param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                                 (uint)(param_3 < uVar2)));
  return uVar1;
}



/* ===== FUN_000323e0 @ 000323e0 size=100 ===== */

void FUN_000323e0(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  FUN_00031a70(param_3 - uVar1,
               param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                         (uint)(param_3 < uVar1)),param_5,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



/* ===== FUN_00032444 @ 00032444 size=100 ===== */

void FUN_00032444(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  FUN_00031eb4(param_3 - uVar1,
               param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                         (uint)(param_3 < uVar1)),param_5,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



/* ===== FUN_000324a8 @ 000324a8 size=472 ===== */

undefined4 FUN_000324a8(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

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
  if ((param_5 == 0) || (iVar1 = FUN_00031158(local_10), iVar1 != 0)) {
    local_18 = 1;
  }
  else {
    while (*local_10 != 0) {
      local_c = *local_10;
      iVar1 = FUN_000311ec(local_c);
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
      iVar1 = FUN_000439c8(local_14);
      iVar2 = FUN_000311ec(local_14);
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



/* ===== FUN_00032680 @ 00032680 size=488 ===== */

undefined4
FUN_00032680(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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
        FUN_00031a70((local_18 + param_3) - *(uint *)(param_1 + 0x10),
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
        if ((cVar1 != '\0') || (local_18 != 0xffffffff)) goto LAB_0003273c;
        local_14 = local_14 + 7;
      }
    }
    else {
LAB_0003273c:
      iVar2 = FUN_0002fb30(local_14,param_6);
      if (iVar2 == 0) {
        if (local_18 != 0xffffffff) {
          FUN_00031a70((local_18 + param_3) - *(uint *)(param_1 + 0x10),
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



/* ===== FUN_00032868 @ 00032868 size=964 ===== */

undefined4
FUN_00032868(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,void *param_6)

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
  iVar1 = FUN_00031158(local_20);
  if (iVar1 != 0) {
    return 0;
  }
  while (*local_20 != 0) {
    local_1c = *local_20;
    iVar1 = FUN_000311ec(local_1c);
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
LAB_00032c08:
  if (local_1c == 0) {
    return 0;
  }
  iVar1 = FUN_000439c8(local_1c);
  iVar2 = FUN_000311ec(local_1c);
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
  if (!bVar7) goto code_r0x000329f8;
  goto LAB_00032a48;
code_r0x000329f8:
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
LAB_00032a48:
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
        FUN_00016984(local_30 - uVar3,uStack_2c - (uVar4 + (local_30 < uVar3)),param_6);
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
  goto LAB_00032c08;
}



/* ===== FUN_00032c2c @ 00032c2c size=88 ===== */

void FUN_00032c2c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  FUN_000313cc(iVar1);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}



/* ===== FUN_00032c84 @ 00032c84 size=476 ===== */

undefined4
FUN_00032c84(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6,
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
    iVar1 = FUN_00031158(local_14);
    if (iVar1 == 0) {
      while (*local_14 != 0) {
        iVar1 = FUN_000311ec(*local_14);
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



/* ===== FUN_00032e60 @ 00032e60 size=524 ===== */

undefined4
FUN_00032e60(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6,
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
    iVar1 = FUN_00031158(local_18);
    if (iVar1 == 0) {
      while (*local_18 != 0) {
        local_14 = *local_18;
        iVar1 = FUN_000311ec(local_14);
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
      local_1c = FUN_000311ec(local_14);
      uVar7 = *(uint *)(local_1c + 0x14);
      bVar8 = uVar7 <= uVar4;
      if (uVar4 == uVar7) {
        bVar8 = *(uint *)(local_1c + 0x10) <= uVar2;
      }
      if (bVar8 && (uVar4 != uVar7 || uVar2 != *(uint *)(local_1c + 0x10))) {
        iVar1 = FUN_000439c8(local_14);
        if (iVar1 == 0) {
          return 2;
        }
        local_1c = FUN_000311ec(iVar1);
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



/* ===== FUN_0003306c @ 0003306c size=656 ===== */

void FUN_0003306c(int param_1)

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
  local_1c = FUN_00043908(*(undefined4 *)(param_1 + 0x30));
  while( true ) {
    if (local_1c == 0) break;
    iVar1 = FUN_000311ec(local_1c);
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
    local_1c = FUN_000439c8(local_1c);
  }
  if (local_28 != 0 || iStack_24 != 0) {
    uVar6 = FUN_00045084(local_40,iStack_3c,local_28,iStack_24);
  }
  uStack_44 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_48 = (undefined4)uVar6;
  if (local_38._4_4_ == 0 && (uint)local_38 == 0xffffffff) {
    local_38 = 0;
  }
  dVar4 = (double)FUN_00044f3c(local_28 << 8,
                               (iStack_24 << 5 | local_28 >> 0x1b) << 3 |
                               (local_28 & 0x7ffffff) >> 0x18);
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  dVar5 = (double)FUN_00044f3c(*(uint *)(param_1 + 0x20) - uVar2,
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



/* ===== FUN_000332fc @ 000332fc size=1580 ===== */

uint FUN_000332fc(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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
      uVar4 = FUN_0001b5fc(*(undefined4 *)(*param_4 + 0x10));
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
        iVar2 = FUN_00041a44(*param_4,*param_1,param_4[7]);
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
              iVar2 = FUN_00041af4(*param_4,*param_1,param_4[7]);
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



/* ===== FUN_00033928 @ 00033928 size=1372 ===== */

uint FUN_00033928(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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
      uVar4 = FUN_0001b5fc(*(undefined4 *)(*param_4 + 0x10));
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
        iVar2 = FUN_00041a44(*param_4,*param_1,param_4[8]);
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
                local_2c = FUN_000332fc(local_24,*param_1,local_20,param_4);
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
              local_2c = FUN_000332fc(local_24,*param_1,local_20,param_4);
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
              iVar2 = FUN_00041af4(*param_4,*param_1,param_4[8]);
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



/* ===== FUN_00033e84 @ 00033e84 size=1452 ===== */

uint FUN_00033e84(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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
      uVar7 = FUN_0001b5fc(*(undefined4 *)(*param_4 + 0x10));
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
        iVar3 = FUN_00041a44(*param_4,*param_1,param_4[9]);
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
                local_34 = FUN_00033928(local_2c,*param_1,local_28,param_4);
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
              local_34 = FUN_00033928(local_2c,*param_1,local_28,param_4);
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
              iVar3 = FUN_00041af4(*param_4,*param_1,param_4[9]);
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



/* ===== FUN_00034430 @ 00034430 size=2812 ===== */

int FUN_00034430(int *param_1,undefined4 param_2,uint param_3,int param_4,code *param_5,
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
  local_d0 = FUN_00028480(param_1,param_2,local_b8);
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
    local_34 = FUN_00017510(3,param_1[5],&local_cc);
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
      if (((local_d4 & 8) == 0) || ((local_18 & 1) == 0)) goto LAB_00034680;
      local_d0 = 0x7f2bb76b;
      local_18 = local_18 | 6;
    }
  }
  else {
LAB_00034680:
    if ((local_98 & 0x80000) == 0) {
      for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
        if ((*(int *)(local_b8 + (local_14 + 10) * 2) != 0) || ((param_3 & 1) != 0)) {
          local_f0[0] = *(int *)(local_b8 + (local_14 + 10) * 2);
          local_f0[1] = 0;
          uVar2 = (*local_e4)(param_1,local_f0,local_e0,iStack_dc,0,local_14,param_6);
          local_18 = local_18 | uVar2;
          *(int *)(local_b8 + (local_14 + 10) * 2) = local_f0[0];
          if ((local_18 & 2) != 0) goto LAB_00034e98;
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
          uVar2 = FUN_000332fc(&local_60,0,0xc,&local_e8);
          local_18 = local_18 | uVar2;
          if ((local_18 & 2) != 0) goto LAB_00034e98;
        }
        if ((local_5c == 0) && ((param_3 & 1) == 0)) {
          uVar2 = local_30 * local_30;
          bVar3 = CARRY4(uVar2,local_e0);
          local_e0 = uVar2 + local_e0;
          iStack_dc = ((int)uVar2 >> 0x1f) + iStack_dc + (uint)bVar3;
        }
        else {
          uVar2 = FUN_00033928(&local_5c,0,0xd,&local_e8);
          local_18 = local_18 | uVar2;
          if ((local_18 & 2) != 0) goto LAB_00034e98;
        }
        if ((local_58[0] != 0) || ((param_3 & 1) != 0)) {
          uVar2 = FUN_00033e84(local_58,0,0xe,&local_e8);
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
      local_d0 = FUN_0003a060(param_1,param_2,local_b8,&local_f4);
      if (local_d0 == 0) {
        do {
          do {
            while( true ) {
              if (local_24 == 0) {
                local_d0 = 0;
              }
              else {
                local_d0 = FUN_0003a43c(local_f4,local_24,&local_110);
              }
              if (local_d0 != 0) {
                if ((local_d0 == 0x7f2bb77c) && (local_d0 = 0, (param_3 & 1) != 0))
                goto LAB_00034738;
                goto LAB_00034be0;
              }
              local_24 = 9;
              local_130 = CONCAT44(local_10c,local_110);
              if ((local_fc & 1) == 0) break;
              local_28 = (uint)((local_fc & 2) != 0);
              local_34 = FUN_0003a43c(local_f4,9,&local_128);
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
                    goto LAB_00034be0;
                  }
                  if ((local_38 & 1) != 0) {
                    local_d0 = FUN_0003c3f0(local_f4,local_20._4_4_,(uint)local_20,local_20._4_4_,
                                            local_138,local_134,local_28);
                    if (local_d0 != 0) goto LAB_00034be0;
                  }
                  if ((local_18 & 2) != 0) goto LAB_00034be0;
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
            local_d0 = FUN_0003b5a0(local_f4,0,&local_110);
            if (local_d0 != 0) break;
          }
        } while ((local_18 & 2) == 0);
LAB_00034be0:
        FUN_00039f5c(local_f4);
        local_18 = local_18 | 4;
        goto LAB_00034ee8;
      }
    }
  }
LAB_00034e98:
  if (((local_18 & 1) != 0) && (local_34 = FUN_00028a3c(param_1,param_2,local_b8), local_34 != 0)) {
    local_18 = local_18 | 4;
    local_d0 = local_34;
  }
LAB_00034ee8:
  if (param_4 == 0) {
    FUN_00017630(&local_cc);
  }
  if ((local_18 & 4) == 0) {
    local_d0 = 0;
  }
  return local_d0;
LAB_00034738:
  local_130 = 0;
  local_38 = (*local_e4)(param_1,&local_130,(uint)local_20,local_20._4_4_,0,0,param_6);
  local_18 = local_18 | local_38;
  if (((local_d4 & 8) != 0) && ((local_18 & 1) != 0)) {
    local_d0 = 0x7f2bb76b;
    local_18 = local_18 | 6;
    goto LAB_00034be0;
  }
  if ((local_38 & 1) == 0) goto LAB_00034be0;
  uVar2 = (uint)local_20;
  iVar1 = local_20._4_4_;
  local_20 = CONCAT44(local_20._4_4_ + (0xfffffffe < (uint)local_20),(uint)local_20 + 1);
  local_d0 = FUN_0003c3f0(local_f4,0,uVar2,iVar1,(int)local_130,local_130._4_4_,0);
  if ((local_d0 != 0) || ((local_18 & 2) != 0)) goto LAB_00034be0;
  if ((uint)local_130 == 0 && local_130._4_4_ == 0) goto LAB_00034be0;
  goto LAB_00034738;
}



/* ===== FUN_00034f2c @ 00034f2c size=140 ===== */

undefined4
FUN_00034f2c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
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



/* ===== FUN_00034fb8 @ 00034fb8 size=100 ===== */

undefined4
FUN_00034fb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_6;
  local_10 = param_5;
  uVar1 = FUN_00034430(param_1,param_2,param_3,param_4,FUN_00034f2c,&local_10);
  return uVar1;
}



/* ===== FUN_0003501c @ 0003501c size=80 ===== */

undefined4
FUN_0003501c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*param_7)(param_1,param_2,param_3,param_7[1],param_3,param_4);
  return uVar1;
}



/* ===== FUN_0003506c @ 0003506c size=104 ===== */

undefined4
FUN_0003506c(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_6;
  local_10 = param_5;
  uVar1 = FUN_00034fb8(param_1,param_2,param_3 | 0x1000,param_4,FUN_0003501c,&local_10);
  return uVar1;
}



/* ===== FUN_000350d4 @ 000350d4 size=60 ===== */

bool FUN_000350d4(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x200) != 0;
}



/* ===== FUN_00035110 @ 00035110 size=544 ===== */

int FUN_00035110(int param_1,uint param_2,int param_3,int param_4,int *param_5,int param_6,
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
          local_14 = FUN_0002d860(param_1,local_18,param_4 + *(int *)(param_1 + 0x14),&local_18);
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



/* ===== FUN_00035330 @ 00035330 size=232 ===== */

int FUN_00035330(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_1c = 0;
  local_14 = *(uint *)(param_1 + 0x14) >> 2;
  uVar1 = FUN_00044a2c(param_6,local_14);
  local_18 = FUN_00035110(param_1,param_2 & 0xfffffffd,param_3,param_4,param_5,uVar1,&local_1c);
  uVar1 = local_1c;
  if (local_18 == 0) {
    FUN_00044ad4(param_6,local_14);
    local_18 = FUN_00035110(param_1,param_2,uVar1,param_4,param_5,extraout_r1,param_7);
  }
  return local_18;
}



/* ===== FUN_00035418 @ 00035418 size=232 ===== */

int FUN_00035418(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_1c = 0;
  local_14 = *(uint *)(param_1 + 0x14) >> 2;
  uVar1 = FUN_00044a2c(param_6,local_14);
  local_18 = FUN_00035330(param_1,param_2 & 0xfffffffd,param_3,param_4,param_5,uVar1,&local_1c);
  uVar1 = local_1c;
  if (local_18 == 0) {
    FUN_00044ad4(param_6,local_14);
    local_18 = FUN_00035110(param_1,param_2,uVar1,param_4,param_5,extraout_r1,param_7);
  }
  return local_18;
}



/* ===== FUN_00035500 @ 00035500 size=432 ===== */

undefined4
FUN_00035500(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            uint param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 local_28;
  uint local_20;
  uint uStack_1c;
  uint local_14;
  
  local_28 = 0;
  iVar2 = FUN_000350d4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar1 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
    local_20 = uVar1 & param_5;
    uStack_1c = (int)uVar1 >> 0x1f & param_6;
    for (local_14 = 0; (int)local_14 < 1 << (*(uint *)(param_1 + 100) & 0xff);
        local_14 = local_14 + 1) {
      if (param_6 != uStack_1c + ((int)local_14 >> 0x1f) + (uint)CARRY4(local_20,local_14) ||
          param_5 != local_20 + local_14) {
        FUN_0003578c(param_1,param_2,param_3,param_4,0,0,local_20 + local_14,
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



/* ===== FUN_000356b0 @ 000356b0 size=220 ===== */

int FUN_000356b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined8 *param_7)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  *param_7 = 0;
  iVar1 = FUN_000350d4(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) || ((*(uint *)(param_3 + 0x20) & 0x80000) == 0)) {
    local_c = 0;
  }
  else {
    local_c = FUN_0003a060(param_1,param_2,param_3,&local_10);
    if (local_c == 0) {
      local_c = FUN_00035500(param_1,param_2,param_3,local_10,param_5,param_6,param_7);
      FUN_00039f5c(local_10);
    }
  }
  return local_c;
}



/* ===== FUN_0003578c @ 0003578c size=928 ===== */

int FUN_0003578c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    iVar2 = FUN_0003c3f0(param_4,local_1c,param_7,param_8,*param_11,param_11[1],local_1c);
    return iVar2;
  }
  local_18 = FUN_0003b330(param_4,param_2,param_7,param_8);
  if (local_18 == 0) {
    iVar2 = FUN_0003a43c(param_4,0,&local_38);
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
    FUN_00035500(param_1,param_2,param_3,param_4,param_7,param_8,&local_40);
    if ((uint)local_40 == 0 && local_40._4_4_ == 0) {
      local_18 = FUN_0003578c(param_1,param_2,param_3,param_4,param_5,0,param_7 - 1,
                              param_8 - (param_7 == 0),0,param_10,&local_40);
      uVar7 = CONCAT44(local_40._4_4_,(uint)local_40);
      if (local_18 != 0) {
        uVar7 = FUN_0002dbd8(param_1,param_2,param_3,param_8,param_7,param_8);
      }
      local_40._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
      local_40._0_4_ = (uint)uVar7;
      iVar2 = FUN_0002d6f0(param_1,param_5,(uint)local_40,local_40._4_4_,param_5,&local_40);
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
    local_18 = FUN_0003c3f0(param_4,local_1c,param_7,param_8,(uint)local_40,local_40._4_4_,local_1c)
    ;
    if (local_18 != 0) {
      FUN_0002e968(param_1,0xffffffff,(uint)local_40,local_40._4_4_,0xffffffff);
      return local_18;
    }
    iVar2 = FUN_00028480(param_1,param_2,param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    *param_10 = *param_10 + local_14;
    *param_11 = (uint)local_40;
    param_11[1] = local_40._4_4_;
  }
  return 0;
}



/* ===== FUN_00035b2c @ 00035b2c size=340 ===== */

bool FUN_00035b2c(int param_1,int param_2,uint param_3,uint param_4)

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



/* ===== FUN_00035c80 @ 00035c80 size=1992 ===== */

int FUN_00035c80(int param_1,undefined4 param_2,undefined1 *param_3,int param_4,uint param_5,
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
    iVar1 = FUN_00028480(param_1,param_2,auStack_9c);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_bc = auStack_9c;
  }
  local_14 = 0;
  local_1c = *(uint *)(param_1 + 0x14) >> 2;
  iVar1 = FUN_00035b2c(param_1,local_bc,param_7,param_8);
  if (iVar1 != 0) {
    return 0x7f2bb752;
  }
  if ((*(uint *)(local_bc + 0x20) & 0x10000000) != 0) {
    return 0x7f2bb7a6;
  }
  local_c0 = param_4;
  if (param_4 == 0) {
    iVar1 = FUN_00017510(2,*(undefined4 *)(param_1 + 0x14),&local_ac);
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
          local_a4 = FUN_0002dbd8(param_1,param_2,local_bc,param_8,param_7,param_8);
        }
        else {
          local_a4 = *(int *)(local_bc + (param_7 + 9) * 4);
        }
        if (((*param_10 == 0 && param_10[1] == 0) && ((param_5 & 1) != 0)) &&
           (local_14 = FUN_0002d860(param_1,local_a4,local_c0,&local_a4), local_14 == 0)) {
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
            goto LAB_00036360;
          }
          local_a4 = *(int *)(local_bc + 0x54);
          local_14 = FUN_0002d860(param_1,local_a4,local_c0,&local_a4);
          if (local_14 != 0) goto LAB_00036360;
          *(int *)(local_bc + 0x58) = local_a4;
          local_b0 = local_b0 + 1;
        }
        local_14 = FUN_00035110(param_1,param_5,local_a4,local_c0,&local_b0,uVar2,&local_a8);
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
              goto LAB_00036360;
            }
            local_a4 = *(int *)(local_bc + 0x5c);
            local_14 = FUN_0002d860(param_1,local_a4,local_c0,&local_a4);
            if (local_14 != 0) goto LAB_00036360;
            *(int *)(local_bc + 0x60) = local_a4;
            local_b0 = local_b0 + 1;
          }
          local_14 = FUN_00035418(param_1,param_5,local_a4,local_c0,&local_b0,uVar3 - iVar1,
                                  &local_a8);
          if (local_14 == 0) {
            *param_10 = local_a8;
            param_10[1] = 0;
          }
          goto LAB_00036360;
        }
        local_a4 = *(int *)(local_bc + 0x5c);
        if (local_a4 == 0) {
          if ((param_5 & 1) == 0) {
            if ((param_5 & 2) != 0) {
              local_14 = 0x7f2bb75f;
            }
            goto LAB_00036360;
          }
          local_a4 = *(int *)(local_bc + 0x58);
          local_14 = FUN_0002d860(param_1,local_a4,local_c0,&local_a4);
          if (local_14 != 0) goto LAB_00036360;
          *(int *)(local_bc + 0x5c) = local_a4;
          local_b0 = local_b0 + 1;
        }
        local_14 = FUN_00035330(param_1,param_5,local_a4,local_c0,&local_b0,uVar3,&local_a8);
        if (local_14 == 0) {
          *param_10 = local_a8;
          param_10[1] = 0;
        }
      }
    }
  }
  else {
    local_14 = FUN_0003a060(param_1,param_2,local_bc,&local_a0);
    if (local_14 == 0) {
      local_14 = FUN_0003578c(param_1,param_2,local_bc,local_a0,local_c0,param_5,param_7,param_8,
                              param_9,&local_b0,param_10);
    }
  }
LAB_00036360:
  if (((*param_10 != 0 || param_10[1] != 0) && (local_14 == 0)) && ((param_5 & 8) != 0)) {
    local_14 = FUN_0002985c(param_1,1,*param_10,param_10[1],1,0,0);
  }
  if (local_ac != 0) {
    FUN_00017630(&local_ac);
  }
  if (local_a0 != 0) {
    FUN_00039f5c(local_a0);
  }
  if ((local_14 == 0) && ((local_b0 != 0 || (local_18 != 0)))) {
    FUN_00041598(param_1,local_bc,local_b0,local_b0 >> 0x1f);
    local_14 = FUN_00028a3c(param_1,param_2,local_bc);
  }
  return local_14;
}



/* ===== FUN_00036448 @ 00036448 size=192 ===== */

/* WARNING: Removing unreachable block (ram,0x000364e4) */

int FUN_00036448(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_7;
  iVar1 = FUN_00035c80(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    *param_7 = uVar2;
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00036508 @ 00036508 size=152 ===== */

uint FUN_00036508(uint param_1,byte *param_2,int param_3)

{
  int local_1c;
  uint local_14;
  byte *local_c;
  
  local_1c = param_3;
  local_14 = param_1;
  local_c = param_2;
  while (local_1c != 0) {
    local_14 = (uint)*(ushort *)(&DAT_00046158 + ((local_14 ^ *local_c) & 0xff) * 2) ^
               local_14 >> 8 & 0xff;
    local_1c = local_1c + -1;
    local_c = local_c + 1;
  }
  return local_14;
}



/* ===== FUN_000365a0 @ 000365a0 size=808 ===== */

uint FUN_000365a0(uint param_1,byte *param_2,uint param_3,int param_4)

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



/* ===== FUN_000368c8 @ 000368c8 size=68 ===== */

undefined4 FUN_000368c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000365a0(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0003690c @ 0003690c size=76 ===== */

undefined4 FUN_0003690c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000368c8(param_1,param_2,param_3,&DAT_00048358,0x82f63b78);
  return uVar1;
}



/* ===== FUN_00036958 @ 00036958 size=92 ===== */

undefined4 FUN_00036958(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00016aa4(param_1);
  uVar1 = FUN_000365a0(uVar1,param_2,param_3,param_4);
  uVar1 = FUN_00016aa4(uVar1);
  return uVar1;
}



/* ===== FUN_000369b4 @ 000369b4 size=76 ===== */

undefined4 FUN_000369b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00036958(param_1,param_2,param_3,&DAT_00046358,0x4c11db7);
  return uVar1;
}



/* ===== FUN_00036a00 @ 00036a00 size=196 ===== */

int FUN_00036a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  int local_c;
  
  bVar1 = false;
  local_c = FUN_00029060(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4,1
                         ,param_5);
  if (local_c == 0) {
    if (((*(uint *)(param_1 + 8) & 0x200000) == 0) &&
       (iVar2 = FUN_0001ea20(param_1,param_7,param_5), iVar2 == 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      local_c = 0x7f2bb796;
    }
  }
  return local_c;
}



/* ===== FUN_00036ac4 @ 00036ac4 size=72 ===== */

undefined4
FUN_00036ac4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00036a00(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return uVar1;
}



/* ===== FUN_00036b0c @ 00036b0c size=80 ===== */

undefined4 FUN_00036b0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00036ac4(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00036b5c @ 00036b5c size=76 ===== */

undefined4 FUN_00036b5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00036ac4(param_1,param_3,param_2,0,param_3,0);
  return uVar1;
}



/* ===== FUN_00036ba8 @ 00036ba8 size=124 ===== */

int FUN_00036ba8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_c;
  
  local_c = FUN_0001eae4(param_1,param_7,param_5);
  if (local_c == 0) {
    local_c = FUN_0002912c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4
                           ,1,param_5);
  }
  return local_c;
}



/* ===== FUN_00036c24 @ 00036c24 size=72 ===== */

undefined4
FUN_00036c24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00036ba8(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return uVar1;
}



/* ===== FUN_00036c6c @ 00036c6c size=80 ===== */

undefined4 FUN_00036c6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00036c24(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00036cbc @ 00036cbc size=76 ===== */

undefined4 FUN_00036cbc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00036c24(param_1,param_3,param_2,0,param_3,0);
  return uVar1;
}



/* ===== FUN_00036d08 @ 00036d08 size=60 ===== */

bool FUN_00036d08(int param_1)

{
  return (*(uint *)(param_1 + 0x5c) & 8) != 0;
}



/* ===== FUN_00036d44 @ 00036d44 size=60 ===== */

bool FUN_00036d44(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x8000) != 0;
}



/* ===== FUN_00036d80 @ 00036d80 size=260 ===== */

uint FUN_00036d80(byte *param_1,uint *param_2)

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



/* ===== FUN_00036e84 @ 00036e84 size=112 ===== */

undefined4 FUN_00036e84(int *param_1)

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



/* ===== FUN_00036ef4 @ 00036ef4 size=216 ===== */

int FUN_00036ef4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int local_10;
  
  bVar1 = false;
  local_10 = FUN_00029060(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4,
                          1,param_5);
  if (local_10 == 0) {
    if (((*(uint *)(param_1 + 8) & 0x200000) == 0) &&
       (iVar2 = FUN_0001debc(param_1,param_6,param_3,param_4,param_5), iVar2 == 0)) {
      bVar1 = true;
    }
    local_10 = FUN_00036e84(param_5);
    if ((local_10 == 0) && (bVar1)) {
      local_10 = 0x7f2bb797;
    }
  }
  return local_10;
}



/* ===== FUN_00036fcc @ 00036fcc size=64 ===== */

undefined4
FUN_00036fcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00036ef4(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}



/* ===== FUN_0003700c @ 0003700c size=68 ===== */

undefined4 FUN_0003700c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00036fcc(param_1,param_3,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_00037050 @ 00037050 size=152 ===== */

int FUN_00037050(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_0001df58(param_1,param_6,param_3,param_4,param_5);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_0002912c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4
                           ,1,param_5), iVar1 == 0)) {
    FUN_00017720(param_1);
  }
  return iVar1;
}



/* ===== FUN_000370e8 @ 000370e8 size=64 ===== */

undefined4
FUN_000370e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00037050(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}



/* ===== FUN_00037128 @ 00037128 size=68 ===== */

undefined4 FUN_00037128(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000370e8(param_1,param_3,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_0003716c @ 0003716c size=368 ===== */

int FUN_0003716c(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6,
                undefined4 *param_7,undefined4 param_8)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  uVar3 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
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
      uVar3 = FUN_0001744c(*(undefined4 *)(param_1 + 0x14),&local_14);
      uVar1 = (uint)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        return (int)uVar3;
      }
      param_5 = local_14;
      local_c = 0;
    }
    uVar3 = FUN_00036ef4(param_1,uVar1,param_3,param_4,param_5,param_8);
    local_c = (int)uVar3;
    if (local_c == 0) {
      local_10 = param_5;
      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + param_6;
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = *(undefined4 *)(param_5 + 4);
      }
      local_c = FUN_00037050(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4,param_5,param_8
                            );
    }
    if (local_14 != 0) {
      FUN_00017630(&local_14);
    }
  }
  return local_c;
}



/* ===== FUN_000372dc @ 000372dc size=80 ===== */

undefined4
FUN_000372dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003716c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return uVar1;
}



/* ===== FUN_0003732c @ 0003732c size=88 ===== */

undefined4
FUN_0003732c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000372dc(param_1,param_3,param_2,0,param_3,param_4,param_5);
  return uVar1;
}



/* ===== FUN_00037384 @ 00037384 size=180 ===== */

int FUN_00037384(int param_1,int param_2)

{
  void *local_10;
  int local_c;
  
  local_c = FUN_00017590(*(int *)(param_1 + 0xc) + param_2,0xc,&local_10);
  if (local_c == 0) {
    memcpy(local_10,*(void **)(param_1 + 8),*(int *)(param_1 + 0xc) * 0xc);
    FUN_00017630(param_1 + 8);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
    *(void **)(param_1 + 8) = local_10;
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_00037438 @ 00037438 size=396 ===== */

int FUN_00037438(int *param_1,int *param_2)

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
        FUN_00037634(*local_14,&local_20,&local_28);
        FUN_00037634(*local_18,&local_24,&local_2c);
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



/* ===== FUN_000375c4 @ 000375c4 size=112 ===== */

int FUN_000375c4(int param_1)

{
  int *local_c;
  
  local_c = &DAT_0005b338;
  while( true ) {
    if (local_c[1] == 0) {
      return 0;
    }
    if (param_1 == *local_c) break;
    local_c = local_c + 2;
  }
  return local_c[1];
}



/* ===== FUN_00037634 @ 00037634 size=200 ===== */

undefined4 FUN_00037634(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  int iVar2;
  char *__s2;
  undefined4 *local_14;
  
  local_14 = &DAT_0005b338;
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



/* ===== FUN_000376fc @ 000376fc size=620 ===== */

int FUN_000376fc(int param_1,undefined4 param_2,undefined1 *param_3)

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
    iVar1 = FUN_00027de0(param_1,param_2,auStack_c0,0xa0);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_cc = auStack_c0;
    local_c = 0;
  }
  local_18 = FUN_0001c45c(param_1,local_cc);
  if (local_18 == 0) {
    local_c = 0;
  }
  else {
    if ((int)((ulonglong)local_18 >> 0x20) != 0 ||
        *(uint *)(*(int *)(param_1 + 0x10) + 0x14) <= (uint)local_18) {
      uVar4 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
      uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
      bVar3 = uVar2 <= local_18._4_4_;
      if (local_18._4_4_ == uVar2) {
        bVar3 = (uint)uVar4 <= (uint)local_18;
      }
      if (!bVar3) {
        uVar4 = FUN_0001744c(*(undefined4 *)(param_1 + 0x14),&local_20);
        local_c = (int)uVar4;
        if (local_c != 0) {
          return local_c;
        }
        uVar4 = FUN_00036ef4(param_1,(int)((ulonglong)uVar4 >> 0x20),(uint)local_18,local_18._4_4_,
                             local_20,param_2);
        local_c = (int)uVar4;
        if (local_c == 0) {
          local_1c = local_20;
          if (*local_20 == -0x15fe0000) {
            local_20[1] = local_20[1] + -1;
            local_c = FUN_00037050(param_1,(int)((ulonglong)uVar4 >> 0x20),(uint)local_18,
                                   local_18._4_4_,local_20,param_2);
            if (local_c == 0) {
              FUN_0001c4f0(param_1,local_cc,0,0);
              if (local_1c[1] == 0) {
                FUN_0002e968(param_1,extraout_r1,(uint)local_18,local_18._4_4_,0xffffffff);
              }
              local_c = FUN_00041754(param_1,local_cc,1,0);
              if ((local_c == 0) && (local_cc == auStack_c0)) {
                local_c = FUN_000284bc(param_1,param_2,auStack_c0,0xa0);
              }
            }
          }
          else {
            local_c = 0x7f2bb7a1;
          }
        }
        FUN_00017630(&local_20);
        return local_c;
      }
    }
    local_c = 0x7f2bb75a;
  }
  return local_c;
}



/* ===== FUN_00037968 @ 00037968 size=580 ===== */

int FUN_00037968(int param_1,undefined4 param_2,undefined4 param_3)

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
  local_28 = FUN_0001c45c(param_1,param_3);
  iVar1 = (int)((ulonglong)local_28 >> 0x20);
  if (local_28 == 0) {
    local_c = FUN_00041598(param_1,param_3,1,0);
    if (local_c != 0) {
      return local_c;
    }
LAB_00037afc:
    local_18 = FUN_0002dbd8(param_1,param_2,param_3,local_c,0);
    uVar2 = (undefined4)((ulonglong)local_18 >> 0x20);
    local_c = FUN_0002d6f0(param_1,uVar2,(int)local_18,uVar2,0,&local_28);
    if (local_c == 0) {
      FUN_0001c4f0(param_1,param_3,(uint)local_28,local_28._4_4_);
    }
LAB_00037b6c:
    if (local_1c != (int *)0x0) {
      FUN_00017630(&local_1c);
    }
  }
  else {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
    bVar4 = iVar1 == 0;
    if (iVar1 == 0) {
      bVar4 = (uint)local_28 <= uVar3;
    }
    if (!bVar4 || iVar1 == 0 && uVar3 == (uint)local_28) {
      lVar5 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
      uVar3 = (uint)((ulonglong)lVar5 >> 0x20);
      bVar4 = local_28._4_4_ <= uVar3;
      if (uVar3 == local_28._4_4_) {
        bVar4 = (uint)local_28 <= (uint)lVar5;
      }
      if (bVar4 && lVar5 != local_28) {
        local_c = FUN_0001744c(*(undefined4 *)(param_1 + 0x14),&local_1c);
        if (local_c != 0) {
          return local_c;
        }
        local_c = FUN_00036ef4(param_1,local_1c,(uint)local_28,local_28._4_4_,local_1c,param_2);
        local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
        if (local_c == 0) {
          local_10 = local_1c;
          if (*local_1c == -0x15fe0000) {
            local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
            if (local_1c[1] != 1) {
              local_1c[1] = local_1c[1] + -1;
              local_c = FUN_00037050(param_1,local_1c,(uint)local_28,local_28._4_4_,local_1c,param_2
                                    );
              if (local_c == 0) goto LAB_00037afc;
            }
          }
          else {
            local_c = 0x7f2bb7a1;
            local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
          }
        }
        goto LAB_00037b6c;
      }
    }
    local_c = 0x7f2bb75a;
  }
  return local_c;
}



/* ===== FUN_00037bac @ 00037bac size=96 ===== */

uint FUN_00037bac(uint param_1)

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



/* ===== FUN_00037c0c @ 00037c0c size=400 ===== */

undefined4 FUN_00037c0c(int *param_1,uint param_2,undefined4 *param_3,int *param_4)

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
    iVar1 = FUN_00037bac(param_2);
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



/* ===== FUN_00037e1c @ 00037e1c size=436 ===== */

int FUN_00037e1c(int *param_1,uint param_2,undefined4 *param_3,int *param_4)

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
    local_18 = FUN_0001744c(param_2 << 1,&local_24);
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
          FUN_00017630(&local_24);
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



/* ===== FUN_00038050 @ 00038050 size=636 ===== */

undefined4
FUN_00038050(int param_1,undefined4 *param_2,byte *param_3,size_t param_4,short param_5,int param_6)

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
      local_18 = FUN_00037634(*local_c,&local_24,local_28);
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
        uVar2 = FUN_00036d80(local_10,local_14);
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



/* ===== FUN_000382cc @ 000382cc size=1488 ===== */

int FUN_000382cc(int *param_1)

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
  local_10 = FUN_000174a4(local_c,&local_38);
  if (local_10 != 0) {
    return local_10;
  }
  if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
  }
  local_10 = FUN_00027de0(param_1[1],param_1[5],local_38,uVar1);
  if (local_10 != 0) goto LAB_00038874;
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
    goto LAB_00038874;
  }
  local_34 = (void *)param_1[2];
  qsort(local_34,param_1[3],0xc,FUN_00037438);
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
      local_10 = FUN_00038050(param_1,&local_34,local_20,local_1c,0,0);
      if (local_10 != 0) goto LAB_00038874;
      local_10 = 0;
    }
  }
  if (local_34 < (void *)(param_1[2] + param_1[4] * 0xc)) {
    local_10 = FUN_000174a4(*(undefined4 *)(param_1[1] + 0x14),&local_3c);
    if (local_10 != 0) goto LAB_00038874;
    local_1c = *(int *)(param_1[1] + 0x14) + -0x20;
    local_20 = local_3c + 8;
    local_10 = FUN_00038050(param_1,&local_34,local_20,local_1c,(int)local_20 - (int)local_3c,1);
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
        local_10 = FUN_00037968(param_1[1],param_1[5],local_38);
        if (local_10 == 0) {
          local_30 = FUN_0001c45c(param_1[1],local_38);
          local_10 = FUN_00037050(param_1[1],param_1[1],(int)local_30,
                                  (int)((ulonglong)local_30 >> 0x20),local_3c,param_1[5]);
          if (local_10 == 0) {
            local_10 = 0;
            goto LAB_0003877c;
          }
        }
      }
    }
  }
  else {
LAB_0003877c:
    lVar4 = FUN_0001c45c(param_1[1],local_38);
    local_30 = lVar4;
    if ((local_3c == (undefined4 *)0x0) && (lVar4 != 0)) {
      local_10 = FUN_000376fc(param_1[1],param_1[5],local_38);
      if (local_10 != 0) goto LAB_00038874;
    }
    if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
      uVar1 = 0x80;
    }
    else {
      uVar1 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
    }
    local_10 = FUN_000284bc(param_1[1],param_1[5],local_38,uVar1);
  }
  FUN_00017630(&local_3c);
LAB_00038874:
  FUN_00017630(&local_38);
  param_1[7] = 0;
  return local_10;
}



/* ===== FUN_0003889c @ 0003889c size=1132 ===== */

int FUN_0003889c(int param_1,byte *param_2,uint param_3,int param_4,int *param_5)

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
    iVar1 = FUN_00036d80(local_10,param_4 + (uint)*(ushort *)(local_10 + 2));
    if ((*(int *)(local_10 + 0xc) != 0) && (iVar1 != *(int *)(local_10 + 0xc))) break;
    iVar1 = *(int *)(local_10 + 8);
    if (local_c == (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0xc)) {
      iVar2 = FUN_00037384(param_1,4);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_c = (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0xc + -0x30);
    }
    __s = (char *)FUN_000375c4(local_10[1]);
    if (__s == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(__s);
    }
    iVar2 = FUN_000174a4(*local_10 + __n + 1,local_c);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (__s != (char *)0x0) {
      memcpy((void *)*local_c,__s,__n);
    }
    if (*local_10 != 0) {
      memcpy((void *)(*local_c + __n),local_10 + 0x10,(uint)*local_10);
    }
    iVar2 = FUN_0001744c(*(undefined4 *)(local_10 + 8),local_c + 1);
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



/* ===== FUN_00038d08 @ 00038d08 size=220 ===== */

void FUN_00038d08(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 8);
  for (local_c = 0; local_c < *(uint *)(param_1 + 0xc); local_c = local_c + 1) {
    if (*(int *)(iVar1 + local_c * 0xc) != 0) {
      FUN_00017630(iVar1 + local_c * 0xc);
    }
    if (*(int *)(iVar1 + local_c * 0xc + 4) != 0) {
      FUN_00017630(iVar1 + local_c * 0xc + 4);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* ===== FUN_00038de4 @ 00038de4 size=1084 ===== */

int FUN_00038de4(int *param_1)

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
  local_10 = FUN_000174a4(local_c,&local_28);
  if (local_10 != 0) {
    return local_10;
  }
  if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
  }
  local_10 = FUN_00027de0(param_1[1],param_1[5],local_28,uVar1);
  if (local_10 != 0) goto LAB_00039204;
  FUN_00038d08(param_1);
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
        goto LAB_00039204;
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
        local_10 = FUN_0003889c(param_1,local_18,local_14,local_18,param_1 + 4);
        if (local_10 != 0) goto LAB_00039204;
        local_10 = 0;
      }
    }
  }
  local_20 = FUN_0001c45c(param_1[1],local_28);
  if (local_20 == 0) {
LAB_000391b4:
    FUN_00017630(&local_30);
    FUN_00017630(&local_28);
    return 0;
  }
  if ((int)((ulonglong)local_20 >> 0x20) != 0 ||
      *(uint *)(*(int *)(param_1[1] + 0x10) + 0x14) <= (uint)local_20) {
    uVar5 = FUN_0001b5fc(*(undefined4 *)(param_1[1] + 0x10));
    uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
    bVar4 = uVar2 <= local_20._4_4_;
    if (local_20._4_4_ == uVar2) {
      bVar4 = (uint)uVar5 <= (uint)local_20;
    }
    if (!bVar4) {
      local_10 = FUN_0001744c(*(undefined4 *)(param_1[1] + 0x14),&local_30);
      if (local_10 == 0) {
        local_10 = FUN_00036ef4(param_1[1],param_1[1],(uint)local_20,local_20._4_4_,local_30,
                                param_1[5]);
        if (local_10 == 0) {
          local_24 = local_30;
          if (*local_30 == -0x15fe0000) {
            local_14 = *(int *)(param_1[1] + 0x14) + -0x20;
            local_18 = local_30 + 8;
            local_10 = FUN_0003889c(param_1,local_18,local_14,local_30,param_1 + 4);
            if (local_10 == 0) {
              FUN_00017630(&local_30);
              goto LAB_000391b4;
            }
          }
          else {
            local_10 = 0x7f2bb7a1;
          }
        }
        FUN_00017630(&local_30);
      }
      goto LAB_00039204;
    }
  }
  local_10 = 0x7f2bb75a;
LAB_00039204:
  FUN_00017630(&local_28);
  return local_10;
}



/* ===== FUN_00039220 @ 00039220 size=256 ===== */

undefined4 FUN_00039220(int *param_1,code *param_2,undefined4 param_3)

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



/* ===== FUN_00039320 @ 00039320 size=432 ===== */

int FUN_00039320(int *param_1,char *param_2,undefined4 *param_3,int *param_4)

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
          iVar1 = FUN_00037e1c(local_c[1],local_c[2],param_3,param_4);
          return iVar1;
        }
        local_10 = FUN_0001744c(local_c[2],&local_14);
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



/* ===== FUN_000394d0 @ 000394d0 size=620 ===== */

int FUN_000394d0(int param_1,undefined4 param_2,uint *param_3)

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
  local_18 = FUN_000174a4(local_14,&local_24);
  if (local_18 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
      uVar1 = 0x80;
    }
    else {
      uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x58);
    }
    local_18 = FUN_00027de0(param_1,param_2,local_24,uVar1);
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
    FUN_00017630(&local_24);
  }
  return local_18;
}



/* ===== FUN_0003973c @ 0003973c size=888 ===== */

int FUN_0003973c(int *param_1,char *param_2,void *param_3,size_t param_4)

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
  local_14 = FUN_0001744c(param_4,&local_18);
  if (local_14 != 0) {
    return local_14;
  }
  if (((local_1c[6] & 1U) == 0) &&
     ((iVar1 = strcmp(local_20,"system.posix_acl_default"), iVar1 == 0 ||
      (iVar1 = strcmp(local_20,"system.posix_acl_access"), iVar1 == 0)))) {
    local_14 = FUN_00037c0c(local_24,local_28,local_18,&local_28);
    if (local_14 != 0) goto LAB_00039a98;
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
        FUN_00017630(local_c + 1);
        local_c[1] = (int)local_18;
        local_c[2] = local_28;
        local_1c[7] = 1;
        return 0;
      }
    }
  }
  if (local_10 == (int *)0x0) {
    local_14 = FUN_00037384(local_1c,4);
    if (local_14 == 0) {
      local_c = (int *)(local_1c[2] + local_1c[3] * 0xc + -0x30);
      sVar2 = strlen(local_20);
      local_14 = FUN_0001744c(sVar2 + 1,local_c);
      if (local_14 == 0) {
        strcpy((char *)*local_c,local_20);
        local_14 = FUN_0001744c(local_28,local_c + 1);
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
    local_14 = FUN_0001744c(sVar2 + 1,local_10);
    if (local_14 == 0) {
      strcpy((char *)*local_10,local_20);
      local_10[1] = (int)local_18;
      local_10[2] = local_28;
      local_1c[7] = 1;
      local_1c[4] = local_1c[4] + 1;
      return 0;
    }
  }
LAB_00039a98:
  FUN_00017630(&local_18);
  return local_14;
}



/* ===== FUN_00039ab4 @ 00039ab4 size=272 ===== */

undefined4 FUN_00039ab4(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *local_c;
  
  if (*param_1 == 0x7f2bb7a8) {
    for (local_c = (int *)param_1[2]; local_c < (int *)(param_1[2] + param_1[3] * 0xc);
        local_c = local_c + 3) {
      if ((*local_c != 0) && (iVar1 = strcmp((char *)*local_c,param_2), iVar1 == 0)) {
        FUN_00017630(local_c);
        FUN_00017630(local_c + 1);
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



/* ===== FUN_00039bc4 @ 00039bc4 size=288 ===== */

int FUN_00039bc4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *local_10;
  int local_c;
  
  iVar1 = FUN_00036d08(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00036d44(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    local_c = 0x7f2bb7a4;
  }
  else {
    local_c = FUN_000174a4(0x20,&local_10);
    if (local_c == 0) {
      *local_10 = 0x7f2bb7a8;
      local_10[3] = 4;
      local_c = FUN_00017590(local_10[3],0xc,local_10 + 2);
      if (local_c == 0) {
        local_10[4] = 0;
        local_10[5] = param_2;
        local_10[1] = param_1;
        *param_3 = local_10;
        local_c = 0;
      }
      else {
        FUN_00017630(&local_10);
      }
    }
  }
  return local_c;
}



/* ===== FUN_00039ce4 @ 00039ce4 size=160 ===== */

int FUN_00039ce4(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0x7f2bb7a8) {
    if ((piVar1[7] == 0) || (iVar2 = FUN_000382cc(piVar1), iVar2 == 0)) {
      FUN_00038d08(piVar1);
      FUN_00017630(piVar1 + 2);
      FUN_00017630(param_1);
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x7f2bb7a8;
  }
  return iVar2;
}



/* ===== FUN_00039e68 @ 00039e68 size=244 ===== */

undefined4 FUN_00039e68(short *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == -0xcf6) {
    if ((ushort)param_1[2] < (ushort)param_1[1]) {
      uVar2 = 0x7f2bb777;
    }
    else {
      iVar1 = FUN_00044a2c(param_2 + -0xc,0xc);
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



/* ===== FUN_00039f5c @ 00039f5c size=200 ===== */

void FUN_00039f5c(int param_1)

{
  int local_14 [2];
  int local_c;
  
  if (param_1 != 0) {
    local_14[0] = param_1;
    if (*(int *)(param_1 + 0xa0) != 0) {
      for (local_c = 1; local_c < *(int *)(local_14[0] + 0x9c); local_c = local_c + 1) {
        if (*(int *)(*(int *)(local_14[0] + 0xa0) + local_c * 0x28) != 0) {
          FUN_00017630(*(int *)(local_14[0] + 0xa0) + local_c * 0x28);
        }
      }
      FUN_00017630(local_14[0] + 0xa0);
    }
    FUN_00017630(local_14);
  }
  return;
}



/* ===== FUN_0003a024 @ 0003a024 size=60 ===== */

undefined4 FUN_0003a024(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003a060(param_1,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_0003a060 @ 0003a060 size=988 ===== */

int FUN_0003a060(int *param_1,uint param_2,int param_3,undefined4 *param_4)

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
  local_14 = FUN_0001744c(0xa4,&local_20);
  if (local_14 != 0) {
    return local_14;
  }
  memset(local_20,0,0xa4);
  local_20[2] = param_2;
  local_20[1] = param_1;
  if (param_3 == 0) {
    local_20[3] = local_20 + 4;
    local_14 = FUN_00028480(param_1,param_2,local_20[3]);
    if (local_14 != 0) goto LAB_0003a420;
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
    local_14 = FUN_00039e68(local_1c,0x3c);
    if (local_14 == 0) {
      local_20[0x26] = (uint)local_1c[3];
      local_20[0x24] = (uint)*local_1c;
      local_20[0x27] = local_20[0x26] + 1;
      FUN_000174a4(local_20[0x27] * 0x28,local_20 + 0x28);
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
LAB_0003a420:
  FUN_00039f5c(local_20);
  return local_14;
}



/* ===== FUN_0003a43c @ 0003a43c size=2804 ===== */

int FUN_0003a43c(int *param_1,uint param_2,undefined4 *param_3)

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
             (iVar3 = FUN_0001744c(*(undefined4 *)(param_1[1] + 0x14),local_14), iVar3 != 0)) {
            return iVar3;
          }
          if (((*(uint *)(param_1[1] + 8) & 0x2000) == 0) ||
             (*(int *)(param_1[1] + 4) == *(int *)(param_1[1] + 0x88))) {
            iVar3 = FUN_00029060(*(undefined4 *)(param_1[1] + 4),*(undefined4 *)(param_1[1] + 4),
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
          iVar3 = FUN_00039e68(iVar6,*(undefined4 *)(param_1[1] + 0x14));
          if (iVar3 != 0) {
            param_1[0x25] = param_1[0x25] + -1;
            return iVar3;
          }
          if (((*(uint *)(param_1[1] + 8) & 0x200000) == 0) &&
             (iVar3 = FUN_0001ecf0(param_1[1],param_1[2],iVar6), iVar3 == 0)) {
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



/* ===== FUN_0003af68 @ 0003af68 size=360 ===== */

int FUN_0003af68(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar2 = FUN_00028a3c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0xc));
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x94) * 0x28 + -8);
    uVar4 = *(undefined4 *)(iVar2 + 4);
    uVar1 = *(undefined2 *)(iVar2 + 8);
    iVar2 = FUN_0001ed94(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x94) * 0x28)
                        );
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
      iVar2 = FUN_0002912c(uVar3,uVar3,uVar4,uVar1,1,
                           *(undefined4 *)
                            (*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x94) * 0x28));
    }
  }
  return iVar2;
}



/* ===== FUN_0003b0d0 @ 0003b0d0 size=608 ===== */

int FUN_0003b0d0(int param_1,int param_2,uint param_3,uint param_4)

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
  
  local_c = FUN_0003a43c(param_1,1,auStack_28);
  if (local_c == 0) {
    local_c = 0;
    if (*(int *)(param_1 + 0x98) < param_2) {
      local_c = 0x7f2bb781;
    }
    else {
LAB_0003b154:
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
            FUN_0003a43c(param_1,6,auStack_28);
            return 0x7f2bb784;
          }
          iVar1 = FUN_0003a43c(param_1,5,auStack_28);
          if (iVar1 == 0x7f2bb77c) {
            return 0x7f2bb784;
          }
          if (iVar1 != 0) {
            return iVar1;
          }
          local_c = 0;
        }
        local_c = FUN_0003a43c(param_1,5,auStack_28);
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
              goto LAB_0003b154;
            }
            local_c = FUN_0003a43c(param_1,6,auStack_28);
            if (local_c != 0) {
              return local_c;
            }
          }
        }
        local_c = FUN_0003a43c(param_1,0xc,auStack_28);
      } while (local_c == 0);
    }
  }
  else if (local_c == 0x7f2bb77c) {
    local_c = 0x7f2bb784;
  }
  return local_c;
}



/* ===== FUN_0003b330 @ 0003b330 size=52 ===== */

undefined4 FUN_0003b330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003b0d0(param_1,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0003b364 @ 0003b364 size=572 ===== */

int FUN_0003b364(int *param_1)

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
        local_c = FUN_0003a43c(param_1,0,auStack_38);
        if (local_c == 0) {
          local_18 = local_30;
          iStack_14 = iStack_2c;
          local_c = FUN_0003d44c(param_1,auStack_68);
          if (local_c == 0) {
            local_1c = local_58 - local_64;
            local_c = 0;
            while ((iVar1 = local_c, 0 < param_1[0x25] &&
                   (*(int *)(local_10 + 0xc) == *(int *)(local_10 + 4) + -1))) {
              local_c = FUN_0003a43c(param_1,0xb,auStack_38);
              if (local_c != 0) {
                return local_c;
              }
              iVar1 = 0;
              if (iStack_14 == iStack_2c && local_18 == local_30) break;
              local_10 = param_1[0x28] + param_1[0x25] * 0x28;
              local_28 = local_28 + (local_30 - local_18);
              local_30 = local_18;
              iStack_2c = iStack_14;
              local_c = FUN_0003b5a0(param_1,0,auStack_38);
              if (local_c != 0) {
                return local_c;
              }
              FUN_0003af68(param_1);
            }
            local_c = iVar1;
            local_c = FUN_0003b0d0(param_1,local_1c,local_18,iStack_14);
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



/* ===== FUN_0003b5a0 @ 0003b5a0 size=524 ===== */

undefined4 FUN_0003b5a0(int *param_1,undefined4 param_2,undefined4 *param_3)

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
        FUN_0003af68(param_1);
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0x7f2bb712;
  }
  return uVar1;
}



/* ===== FUN_0003b7ac @ 0003b7ac size=128 ===== */

undefined4 FUN_0003b7ac(int param_1,uint param_2)

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



/* ===== FUN_0003b82c @ 0003b82c size=2320 ===== */

int FUN_0003b82c(int *param_1,int param_2)

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
  local_14 = FUN_0003a43c(param_1,0,&local_88);
  if (local_14 == 0) {
    local_14 = FUN_0003d44c(param_1,auStack_c0);
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
        local_14 = FUN_0003a43c(param_1,0xb,&local_88);
        if (local_14 != 0) goto LAB_0003c10c;
        local_14 = FUN_0003b82c(param_1,param_2);
        if (local_14 != 0) goto LAB_0003c10c;
        local_14 = FUN_0003b0d0(param_1,local_34,local_40,uStack_3c);
        iVar4 = local_14;
        if (local_14 != 0) goto LAB_0003c10c;
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
        local_50 = FUN_0003b7ac(param_1,local_28);
      }
      local_44 = (void *)*local_28;
      if (param_1[0x25] == 0) {
        local_30 = 1;
        local_2c = (uint)*(ushort *)((int)local_44 + 2);
        local_14 = FUN_000174a4((param_1[0x27] + 1) * 0x28,&local_8c);
        if (local_14 != 0) goto LAB_0003c10c;
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
            uVar6 = FUN_0002dbd8(param_1[1],param_1[2],param_1[3],param_1[3],0);
          }
          local_20._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
          local_20._0_4_ = (uint)uVar6;
          local_14 = FUN_0002d6f0(param_1[1],param_1[1],(uint)local_20,local_20._4_4_,local_24,
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
            local_14 = FUN_0001ed94(param_1[1],param_1[2],local_54);
            if (local_14 == 0) {
              local_14 = FUN_0002912c(*(undefined4 *)(param_1[1] + 4),1,local_70,uStack_6c,1,
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
                local_14 = FUN_0003af68(param_1);
                if (local_14 == 0) {
                  if (local_30 == 0) {
                    local_14 = FUN_0003a43c(param_1,0xb,&local_88);
                    local_64 = local_60 - local_80;
                    local_78 = local_78 - local_64;
                    local_14 = FUN_0003b5a0(param_1,0,&local_88);
                    if (local_14 != 0) goto LAB_0003c10c;
                    local_80 = local_60;
                    uStack_7c = uStack_5c;
                    local_88 = local_70;
                    uStack_84 = uStack_6c;
                    local_78 = local_64;
                    local_14 = FUN_0003c168(param_1,1,&local_88);
                  }
                  else {
                    local_14 = FUN_0003a43c(param_1,3,&local_88);
                    if (local_14 != 0) goto LAB_0003c10c;
                    local_80 = local_60;
                    uStack_7c = uStack_5c;
                    local_88 = local_70;
                    uStack_84 = uStack_6c;
                    local_78 = *(int *)(param_1[0x28] + 0x18) - local_60;
                    local_14 = FUN_0003b5a0(param_1,0,&local_88);
                  }
                  if (local_14 == 0) {
                    local_14 = FUN_0003b0d0(param_1,local_34,local_40,uStack_3c);
                    if (local_14 == 0) {
                      FUN_00041598(param_1[1],param_1[3],1,0);
                      local_14 = FUN_00028a3c(param_1[1],param_1[2],param_1[3]);
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
LAB_0003c10c:
  if (local_8c != (int *)0x0) {
    FUN_00017630(&local_8c);
  }
  free(local_24);
  return local_14;
}



/* ===== FUN_0003c13c @ 0003c13c size=44 ===== */

undefined4 FUN_0003c13c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003b82c(param_1,0);
  return uVar1;
}



/* ===== FUN_0003c168 @ 0003c168 size=648 ===== */

int FUN_0003c168(int *param_1,uint param_2,undefined4 param_3)

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
        iVar1 = FUN_0003b82c(param_1,1);
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
      local_14 = FUN_0003b5a0(param_1,0,param_3);
      if ((local_14 == 0) && (local_14 = FUN_0003af68(param_1), local_14 == 0)) {
        local_14 = 0;
      }
      else {
        FUN_0003d180(param_1,0);
      }
    }
  }
  else {
    local_14 = 0x7f2bb712;
  }
  return local_14;
}



/* ===== FUN_0003c3f0 @ 0003c3f0 size=3472 ===== */

int FUN_0003c3f0(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6,
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
    iVar1 = FUN_0003c168(param_1,0,&local_c0);
    return iVar1;
  }
  local_14 = FUN_0003a43c(param_1,0,&local_78);
  if (local_14 != 0) {
    if (local_14 != 0x7f2bb780) {
      return local_14;
    }
    memset(&local_78,0,0x18);
  }
  uVar3 = FUN_0003d44c(param_1,auStack_f0);
  local_14 = (int)uVar3;
  if (local_14 != 0) {
    return local_14;
  }
  local_1c = local_e0 - local_ec;
  local_48 = local_70;
  uStack_44 = uStack_6c;
  local_14 = FUN_0003b330(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
  if (local_14 != 0) {
    if (local_14 != 0x7f2bb784) goto LAB_0003d140;
    local_14 = 0;
    local_18 = 0;
    if (param_5 == 0 && param_6 == 0) goto LAB_0003d140;
  }
  local_14 = FUN_0003a43c(param_1,0,&local_78);
  if (local_14 == 0) {
    if ((local_64 & 2) != 0) {
      local_20 = 1;
    }
    uVar3 = FUN_0003a43c(param_1,7,&local_90);
    local_14 = (int)uVar3;
    if (local_14 == 0) {
      local_38 = 1;
      if ((local_7c & 2) != 0) {
        local_28 = 1;
      }
    }
    else {
      local_38 = 0;
      if (local_14 != 0x7f2bb77c) goto LAB_0003d140;
    }
    local_14 = FUN_0003b330(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
    if ((local_14 == 0) || (local_14 == 0x7f2bb784)) {
      uVar3 = FUN_0003a43c(param_1,8,&local_a8);
      local_14 = (int)uVar3;
      if (local_14 == 0) {
        local_34 = 1;
        if ((local_94 & 2) != 0) {
          local_24 = 1;
        }
      }
      else {
        local_34 = 0;
        if (local_14 != 0x7f2bb77d) goto LAB_0003d140;
      }
      local_14 = FUN_0003b330(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
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
            local_14 = FUN_0003b5a0(param_1,0,&local_78);
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
            local_14 = FUN_0003b5a0(param_1,0,&local_78);
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
              local_14 = FUN_0003c168(param_1,1,&local_c0);
            }
            else {
              local_14 = FUN_0003c168(param_1,0,&local_c0);
            }
          }
          else {
            local_14 = FUN_0003a43c(param_1,7,&local_90);
            if (local_14 != 0) goto LAB_0003d140;
            local_80 = local_80 + 1;
            bVar2 = local_88 == 0;
            local_88 = local_88 + -1;
            iStack_84 = iStack_84 - (uint)bVar2;
            bVar2 = local_90 == 0;
            local_90 = local_90 + -1;
            iStack_8c = iStack_8c - (uint)bVar2;
            local_14 = FUN_0003b5a0(param_1,0,&local_90);
          }
          if (local_14 == 0) {
            local_14 = FUN_0003b364(param_1);
          }
        }
        else if ((param_4 == uStack_6c && param_3 == local_70) && (local_68 == 1)) {
          if (param_5 == 0 && param_6 == 0) {
            local_14 = FUN_0003d180(param_1,0);
            if ((local_14 == 0) && (local_4c = FUN_0003b364(param_1), local_4c != 0x7f2bb780)) {
              local_14 = local_4c;
            }
          }
          else {
            local_14 = FUN_0003b5a0(param_1,0,&local_c0);
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
              local_14 = FUN_0003c168(param_1,1,&local_c0);
            }
            else {
              local_14 = FUN_0003a43c(param_1,7,&local_90);
              if (local_14 != 0) goto LAB_0003d140;
              local_80 = local_80 + 1;
              bVar2 = local_88 == 0;
              local_88 = local_88 + -1;
              iStack_84 = iStack_84 - (uint)bVar2;
              bVar2 = local_90 == 0;
              local_90 = local_90 + -1;
              iStack_8c = iStack_8c - (uint)bVar2;
              local_14 = FUN_0003b5a0(param_1,0,&local_90);
              if (local_14 != 0) goto LAB_0003d140;
            }
            if (local_14 != 0) goto LAB_0003d140;
            uVar3 = FUN_0003b364(param_1);
            local_14 = (int)uVar3;
            if (((local_14 != 0) ||
                (local_14 = FUN_0003b330(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4),
                local_14 != 0)) || (local_14 = FUN_0003a43c(param_1,0,&local_78), local_14 != 0))
            goto LAB_0003d140;
          }
          local_68 = local_68 - 1;
          local_14 = FUN_0003b5a0(param_1,0,&local_78);
        }
        else if (param_4 == uStack_6c && param_3 == local_70) {
          if (param_5 != 0 || param_6 != 0) {
            if ((((local_34 == 0) ||
                 (param_4 != iStack_9c + (uint)CARRY4(local_98,local_a0) ||
                  param_3 != local_98 + local_a0)) ||
                (param_6 != iStack_a4 + (uint)CARRY4(local_98,local_a8) ||
                 param_5 != local_98 + local_a8)) ||
               ((local_2c != local_24 || (local_30 + -1 <= (int)local_98)))) {
              local_14 = FUN_0003c168(param_1,0,&local_c0);
            }
            else {
              local_14 = FUN_0003a43c(param_1,8,&local_a8);
              if (local_14 != 0) goto LAB_0003d140;
              local_98 = local_98 + 1;
              local_14 = FUN_0003b5a0(param_1,0,&local_a8);
            }
            if (((local_14 != 0) || (local_14 = FUN_0003b364(param_1), local_14 != 0)) ||
               (local_14 = FUN_0003a43c(param_1,7,&local_78), local_14 != 0)) goto LAB_0003d140;
          }
          bVar2 = 0xfffffffe < local_78;
          local_78 = local_78 + 1;
          iStack_74 = iStack_74 + (uint)bVar2;
          bVar2 = 0xfffffffe < local_70;
          local_70 = local_70 + 1;
          uStack_6c = uStack_6c + bVar2;
          local_68 = local_68 - 1;
          local_14 = FUN_0003b5a0(param_1,0,&local_78);
          if (local_14 == 0) {
            local_14 = FUN_0003b364(param_1);
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
          local_14 = FUN_0003b5a0(param_1,0,&local_78);
          if (local_14 == 0) {
            iVar1 = 0;
            if (param_5 != 0 || param_6 != 0) {
              uVar3 = FUN_0003c168(param_1,1,&local_c0);
              local_14 = (int)uVar3;
              iVar1 = local_14;
              if (local_14 != 0) {
                local_60 = FUN_0003b330(param_1,(int)((ulonglong)uVar3 >> 0x20),local_58,uStack_54);
                if (local_60 == 0) {
                  FUN_0003b5a0(param_1,0,&local_108);
                }
                goto LAB_0003d140;
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
            uVar3 = FUN_0003c168(param_1,1,&local_78);
            local_14 = (int)uVar3;
            if (local_14 != 0) {
              if (param_5 != 0 || param_6 != 0) {
                uVar4 = FUN_0003b330(param_1,(int)((ulonglong)uVar3 >> 0x20),local_b8,uStack_b4);
                uVar3 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),local_14);
                local_60 = (int)uVar4;
                if (local_60 == 0) {
                  FUN_0003d180(param_1,0);
                  uVar3 = CONCAT44(extraout_r1,local_14);
                }
              }
              local_14 = (int)uVar3;
              local_60 = FUN_0003b330(param_1,(int)((ulonglong)uVar3 >> 0x20),local_58,uStack_54);
              if (local_60 == 0) {
                FUN_0003b5a0(param_1,0,&local_108);
              }
            }
          }
        }
      }
    }
  }
LAB_0003d140:
  if (param_1[0x26] < local_1c) {
    local_1c = param_1[0x26];
  }
  FUN_0003b0d0(param_1,local_1c,local_48,uStack_44);
  return local_14;
}



/* ===== FUN_0003d180 @ 0003d180 size=716 ===== */

int FUN_0003d180(int *param_1,uint param_2)

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
          if (((param_2 & 1) == 0) && (local_c = FUN_0003a43c(param_1,0xb,&local_38), local_c == 0))
          {
            local_c = FUN_0003d180(param_1,param_2);
            *(uint *)(param_1[3] + 0x1c) =
                 *(int *)(param_1[3] + 0x1c) -
                 ((uint)(*(int *)(param_1[1] + 0x14) << (*(uint *)(param_1[1] + 100) & 0xff)) >> 9);
            local_c = FUN_00028a3c(param_1[1],param_1[2],param_1[3]);
            FUN_0002e968(param_1[1],0xffffffff,local_38,uStack_34,0xffffffff);
          }
        }
        else {
          local_1c = *local_10;
          *(short *)(local_1c + 2) = (short)local_10[1];
          if ((local_10[1] == 0) && (param_1[0x25] == 0)) {
            *(undefined2 *)(local_1c + 6) = 0;
            param_1[0x26] = 0;
          }
          local_c = FUN_0003af68(param_1);
        }
      }
    }
  }
  else {
    local_c = 0x7f2bb712;
  }
  return local_c;
}



/* ===== FUN_0003d44c @ 0003d44c size=376 ===== */

undefined4 FUN_0003d44c(int *param_1,uint *param_2)

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



/* ===== FUN_0003d5c4 @ 0003d5c4 size=96 ===== */

int FUN_0003d5c4(uint param_1)

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



/* ===== FUN_0003d624 @ 0003d624 size=280 ===== */

int FUN_0003d624(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(int *)(*(int *)(param_1 + 4) + 0x14) - 0xc;
  iVar4 = uVar3 * -0x55555555;
  if ((DAT_0005b428 == 0) || (iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x14), iVar4 != DAT_0005b428)
     ) {
    iVar4 = FUN_0003d5c4(0xffffffff,param_2,iVar4);
    iVar1 = FUN_0003d5c4(4);
    uVar2 = FUN_0003d5c4(uVar3 / 0xc);
    iVar4 = FUN_00044af4(iVar4 - iVar1,uVar2);
    DAT_0005b42c = iVar4 + 1;
    DAT_0005b428 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  }
  return DAT_0005b42c;
}



/* ===== FUN_0003d73c @ 0003d73c size=36 ===== */

void FUN_0003d73c(void)

{
  return;
}



/* ===== FUN_0003d760 @ 0003d760 size=196 ===== */

undefined4
FUN_0003d760(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = 1 << (*(uint *)(param_1 + 100) & 0xff);
  iVar2 = 1 << (*(uint *)(param_1 + 100) & 0xff);
  uVar4 = FUN_00045084(param_5 + uVar1 + -1,
                       (param_6 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(param_5,uVar1)) -
                       (uint)(param_5 + uVar1 == 0),iVar2,iVar2 >> 0x1f);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  FUN_0002eba8(param_1,uVar3,param_3,param_4,(int)uVar4 * (1 << (*(uint *)(param_1 + 100) & 0xff)),1
              );
  uVar3 = FUN_00041598(param_1,param_2,(int)uVar4,uVar3);
  return uVar3;
}



/* ===== FUN_0003d824 @ 0003d824 size=7272 ===== */

int FUN_0003d824(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
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
    lVar9 = FUN_00045084(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 0x6c),
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
          if (local_40 == 0 && uStack_3c == 0) goto LAB_0003dc88;
        }
        local_38 = lVar9;
        local_44 = FUN_0003b330(param_5,uVar3,param_6[2],param_6[3]);
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
          FUN_0003d73c("ext_falloc clus left+",param_6);
          local_44 = FUN_0003b5a0(param_5,0,param_6);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003b364(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = 0;
          lVar9 = local_38;
          if ((param_6[5] & 2) == 0) {
            uVar3 = *param_6 + param_6[4];
            iVar1 = FUN_0002985c(param_1,local_40,uVar3 - local_40,
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
LAB_0003dc88:
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
        local_44 = FUN_0003b330(param_5,param_7[3],param_7[2],param_7[3]);
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
        FUN_0003d73c("ext_falloc clus right+",param_7);
        local_44 = FUN_0003b5a0(param_5,0,param_7);
        if (local_44 != 0) {
          return local_44;
        }
        local_44 = FUN_0003b364(param_5);
        if (local_44 != 0) {
          return local_44;
        }
        iVar1 = 0;
        lVar9 = local_38;
        if ((param_7[5] & 2) == 0) {
          iVar1 = FUN_0002985c(param_1,local_40,*param_7,param_7[1],local_40,0,0);
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
      local_44 = FUN_0003b330(param_5,iVar1,param_6[2],param_6[3]);
      lVar9 = local_38;
      if (local_44 == 0) {
        local_58 = param_6[4] + *param_6;
        uStack_54 = param_6[1] + (uint)CARRY4(param_6[4],*param_6);
        uVar3 = *param_7 - local_58;
        local_44 = FUN_0002ddb4(param_1,3,local_58,uStack_54,uVar3 + 1,
                                (param_7[1] - (uStack_54 + (*param_7 < local_58))) +
                                (uint)(0xfffffffe < uVar3),0,&local_90,&local_98);
        lVar9 = local_38;
        if ((local_44 == 0) &&
           (uStack_8c + iStack_94 + (uint)CARRY4(local_90,local_98) == param_7[1] &&
            local_90 + local_98 == *param_7)) {
          local_44 = FUN_0003d760(param_1,param_4,local_90,uStack_8c,local_98,iStack_94);
          if (local_44 != 0) {
            return local_44;
          }
          param_6[4] = (uint)local_30;
          FUN_0003d73c("ext_falloc merge",param_6);
          local_44 = FUN_0003b5a0(param_5,0,param_6);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003b364(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003a43c(param_5,7,&local_70);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003d180(param_5,0);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003b364(param_5);
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
            iVar1 = FUN_0002985c(param_1,uVar3,param_9,param_10,param_11,0,0);
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
          iVar1 = FUN_000356b0(param_1,param_3,param_4,local_28._4_4_,(uint)local_28 + uVar3,
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
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) goto LAB_0003e63c;
        }
        iVar1 = param_6[4] + *param_6;
        iVar5 = param_6[1] + (uint)CARRY4(param_6[4],*param_6);
        local_30 = CONCAT44(iVar5,iVar1);
        local_44 = FUN_0002ddb4(param_1,3,iVar1,iVar5,(uint)local_28,local_28._4_4_,0,&local_90,
                                &local_98);
        iVar1 = local_44;
        lVar9 = local_38;
        if (local_44 == 0) {
          uVar10 = FUN_0003d760(param_1,param_4,local_90,uStack_8c,local_98,iStack_94);
          local_44 = (int)uVar10;
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003b330(param_5,(int)((ulonglong)uVar10 >> 0x20),param_6[2],param_6[3]);
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
          FUN_0003d73c("ext_falloc left+",param_6);
          local_44 = FUN_0003b5a0(param_5,0,param_6);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003b364(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = 0;
          lVar9 = local_38;
          if (((param_6[5] & 2) == 0) && ((param_2 & 1) != 0)) {
            iVar1 = FUN_0002985c(param_1,0,local_90,uStack_8c,local_98,0,0);
            lVar9 = local_38;
            if (iVar1 != 0) {
              return iVar1;
            }
          }
        }
      }
    }
  }
LAB_0003e63c:
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
          iVar1 = FUN_000356b0(param_1,param_3,param_4,local_28._4_4_,param_7[2] - (uint)local_28,
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
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) goto LAB_0003ea68;
        }
        local_44 = FUN_0002ddb4(param_1,3,*param_7 - (uint)local_28,
                                param_7[1] - (local_28._4_4_ + (*param_7 < (uint)local_28)),
                                (uint)local_28,local_28._4_4_,0,&local_90,&local_98);
        iVar1 = local_44;
        if (local_44 == 0) {
          uVar3 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
          uVar4 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
          uVar2 = uVar4 & local_90;
          uVar10 = FUN_0003d760(param_1,param_4,uVar3 & local_90,(int)uVar3 >> 0x1f & uStack_8c,
                                local_98 + uVar2,
                                iStack_94 + ((int)uVar4 >> 0x1f & uStack_8c) +
                                (uint)CARRY4(local_98,uVar2));
          local_44 = (int)uVar10;
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003b330(param_5,(int)((ulonglong)uVar10 >> 0x20),param_7[2],param_7[3]);
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
          FUN_0003d73c("ext_falloc right+",param_7);
          local_44 = FUN_0003b5a0(param_5,0,param_7);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003b364(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = 0;
          if (((param_7[5] & 2) == 0) && ((param_2 & 1) != 0)) {
            iVar1 = FUN_0002985c(param_1,0,local_90,uStack_8c,local_98 + local_40,0,0);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
        }
      }
    }
  }
LAB_0003ea68:
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
    local_44 = FUN_000356b0(param_1,param_3,param_4,param_10,param_9,param_10,&local_90);
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
      FUN_0003d73c("ext_falloc iclus left+",&local_70);
      FUN_0003b330(param_5,extraout_r1,local_68,uStack_64);
      local_44 = FUN_0003a43c(param_5,0,auStack_88);
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
      local_44 = FUN_0003c168(param_5,local_1c,&local_70);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003b364(param_5);
      if (local_44 != 0) {
        return local_44;
      }
      iVar1 = 0;
      if (((local_5c & 2) == 0) && ((param_2 & 1) != 0)) {
        iVar1 = FUN_0002985c(param_1,0,local_70,uStack_6c,local_60,0,0);
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
    local_44 = FUN_000356b0(param_1,param_3,param_4,uStack_64,local_68,uStack_64,&local_90);
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
      FUN_0003d73c("ext_falloc iclus right+",&local_70);
      FUN_0003b330(param_5,extraout_r1_00,local_68,uStack_64);
      local_44 = FUN_0003a43c(param_5,0,auStack_88);
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
      local_44 = FUN_0003c168(param_5,local_1c,&local_70);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003b364(param_5);
      if (local_44 != 0) {
        return local_44;
      }
      iVar1 = 0;
      if (((local_5c & 2) == 0) && ((param_2 & 1) != 0)) {
        iVar1 = FUN_0002985c(param_1,0,local_70,uStack_6c,local_60,0,0);
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
      local_44 = FUN_0002ddb4(param_1,0,uVar3 & local_90,(int)uVar3 >> 0x1f & uStack_8c,uVar2,iVar5,
                              0,&local_90,&local_98);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003d760(param_1,param_4,local_90,uStack_8c,local_98,iStack_94);
      if (local_44 != 0) {
        return local_44;
      }
      local_70 = local_40 + local_90;
      uStack_6c = uStack_3c + uStack_8c + (uint)CARRY4(local_40,local_90);
      local_60 = local_98 - local_40;
      FUN_0003d73c("ext_falloc create",&local_70);
      FUN_0003b330(param_5,extraout_r1_01,local_68,uStack_64);
      local_44 = FUN_0003a43c(param_5,0,auStack_88);
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
      local_44 = FUN_0003c168(param_5,local_1c,&local_70);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003b364(param_5);
      if (local_44 != 0) {
        return local_44;
      }
      iVar1 = 0;
      if (((local_5c & 2) == 0) && ((param_2 & 1) != 0)) {
        iVar1 = FUN_0002985c(param_1,0,local_90,uStack_8c,local_98,0,0);
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
      lVar9 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_0003f48c @ 0003f48c size=1528 ===== */

int FUN_0003f48c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
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
  local_1c = FUN_0003a060(param_1,param_3,param_4,&local_5c);
  if (local_1c != 0) {
    return local_1c;
  }
  while( true ) {
    FUN_0003b330(local_5c,local_5c,param_7,param_8);
    local_1c = FUN_0003a43c(local_5c,0,&local_78);
    if (local_1c == 0x7f2bb780) break;
    local_48 = CONCAT44(local_48._4_4_,(int)local_48);
    if (local_1c != 0) goto LAB_0003fa68;
    FUN_0003d73c("ext_falloc initial",&local_78);
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
      goto LAB_0003f780;
    }
    param_5 = (param_7 - local_70) + local_78;
    param_6 = (param_8 - (uStack_6c + (param_7 < local_70))) + iStack_74 +
              (uint)CARRY4(param_7 - local_70,local_78);
    local_1c = FUN_0003d824(param_1,param_2,param_3,param_4,local_5c,0,&local_78);
    if (local_1c != 0) goto LAB_0003fa68;
    local_1c = 0;
  }
  local_48 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
  lVar6 = CONCAT44(param_6,param_5);
  uVar1 = local_48;
  if (param_6 == -1 && param_5 == -1) {
    lVar6 = FUN_0002dbd8(param_1,param_3,param_4,param_8,param_7,param_8);
    uVar1 = local_48;
  }
  param_6 = (int)((ulonglong)lVar6 >> 0x20);
  param_5 = (int)lVar6;
  local_48._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_48._0_4_ = (int)uVar1;
  iVar2 = (int)local_48 + -1;
  iVar3 = local_48._4_4_ - (uint)((int)local_48 == 0);
  local_48 = uVar1;
  local_1c = FUN_0001713c(*(undefined4 *)(param_1 + 0x30),param_6,param_5,param_6,iVar2,iVar3,
                          &param_5);
  _param_5 = lVar6;
  _param_5 = _param_5 + CONCAT44(param_8,param_7);
  local_1c = FUN_0003d824(param_1,param_2,param_3,param_4,local_5c,0,0);
  goto LAB_0003fa68;
LAB_0003f780:
  do {
    local_1c = iVar2;
    local_1c = FUN_0003a43c(local_5c,7,&local_90);
    FUN_0003d73c("ext_falloc next",&local_90);
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
LAB_0003f828:
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
      if (bVar5 && (uStack_84 != uVar4 || local_88 != local_40 + 1)) goto LAB_0003f828;
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
      local_1c = FUN_0003d824(param_1,param_2,param_3,param_4,local_5c,local_14,local_18);
      local_48 = CONCAT44(local_48._4_4_,(int)local_48);
      if (local_1c != 0) break;
    }
    local_48 = CONCAT44(local_48._4_4_,(int)local_48);
    if (uStack_2c == uStack_3c && local_30 == local_40) break;
    local_1c = FUN_0003b330(local_5c,local_5c,local_88,uStack_84);
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
LAB_0003fa68:
  FUN_00039f5c(local_5c);
  return local_1c;
}



/* ===== FUN_0003fa84 @ 0003fa84 size=568 ===== */

int FUN_0003fa84(int param_1,uint param_2,undefined4 param_3,undefined1 *param_4,undefined4 param_5,
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
    lVar4 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10));
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
        iVar1 = FUN_00028480(param_1,param_3,auStack_9c);
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
          if (bVar3) goto LAB_0003fc8c;
          local_1c = FUN_00035c80(param_1,param_3,local_b8,0,0);
          if ((local_1c != 0) ||
             ((local_a8 == 0 && iStack_a4 == 0 &&
              (local_1c = FUN_00035c80(param_1,param_3,local_b8,0,0xd), local_1c != 0)))) break;
          bVar3 = 0xfffffffe < local_18;
          local_18 = local_18 + 1;
          uStack_14 = uStack_14 + bVar3;
        }
      }
      else {
        local_1c = FUN_0003f48c(param_1,param_2,param_3,local_b8,param_5,param_6,param_7,param_8,
                                param_9,param_10);
LAB_0003fc8c:
        if (local_b8 == auStack_9c) {
          FUN_00028a3c(param_1,param_3,local_b8);
        }
      }
    }
  }
  else {
    local_1c = 0x7f2bb747;
  }
  return local_1c;
}



/* ===== FUN_0003fcbc @ 0003fcbc size=408 ===== */

int FUN_0003fcbc(int param_1,undefined4 param_2,void *param_3,uint param_4,undefined4 *param_5)

{
  undefined4 *local_10;
  int local_c;
  
  if (((param_4 & 3) != 0) && ((*(uint *)(param_1 + 8) & 1) == 0)) {
    return 0x7f2bb715;
  }
  local_c = FUN_0001744c(0xb0,&local_10);
  if (local_c != 0) {
    return local_c;
  }
  memset(local_10,0,0xb0);
  *local_10 = 0x7f2bb70f;
  local_10[1] = param_1;
  local_10[2] = param_2;
  local_10[0x23] = param_4 & 0xff;
  if (param_3 == (void *)0x0) {
    local_c = FUN_00028480(param_1,param_2,local_10 + 3);
    if (local_c != 0) goto LAB_0003fe18;
  }
  else {
    memcpy(local_10 + 3,param_3,0x80);
  }
  local_c = FUN_00017510(3,*(undefined4 *)(param_1 + 0x14),local_10 + 0x2a);
  if (local_c == 0) {
    *param_5 = local_10;
    return 0;
  }
LAB_0003fe18:
  if (local_10[0x2a] != 0) {
    FUN_00017630(local_10 + 0x2a);
  }
  FUN_00017630(&local_10);
  return local_c;
}



/* ===== FUN_0003fe54 @ 0003fe54 size=72 ===== */

undefined4 FUN_0003fe54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003fcbc(param_1,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0003ff74 @ 0003ff74 size=660 ===== */

int FUN_0003ff74(int *param_1)

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
              ((iVar1 = FUN_00035c80(iVar2,param_1[2],param_1 + 3,
                                     param_1[0x2a] + *(int *)(iVar2 + 0x14),0), iVar1 == 0 &&
               (((local_1c & 1) == 0 ||
                (iVar1 = FUN_00035c80(iVar2,param_1[2],param_1 + 3,
                                      param_1[0x2a] + *(int *)(iVar2 + 0x14),2), iVar1 == 0)))))) &&
             ((param_1[0x28] != 0 || param_1[0x29] != 0 ||
              (iVar1 = FUN_00035c80(iVar2,param_1[2],param_1 + 3,
                                    param_1[0x2a] + *(int *)(iVar2 + 0x14),param_1[2] != 0),
              iVar1 == 0)))) &&
            (iVar1 = FUN_0002912c(*(undefined4 *)(iVar2 + 4),1,param_1[0x28],param_1[0x29],1,
                                  param_1[0x2a]), iVar1 == 0)) {
      param_1[0x23] = param_1[0x23] & 0xffffbfff;
    }
  }
  else {
    iVar1 = 0x7f2bb70f;
  }
  return iVar1;
}



/* ===== FUN_00040208 @ 00040208 size=164 ===== */

int FUN_00040208(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_00045084(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0);
  if (lVar2 != *(longlong *)(param_1 + 0x98)) {
    iVar1 = FUN_0003ff74(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffdfff;
  }
  *(longlong *)(param_1 + 0x98) = lVar2;
  return 0;
}



/* ===== FUN_000402ac @ 000402ac size=344 ===== */

int FUN_000402ac(int param_1,int param_2)

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
    local_10 = FUN_00035c80(local_c,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
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
        iVar1 = FUN_00029060(*(undefined4 *)(local_c + 4),1,*(undefined4 *)(param_1 + 0xa0),
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



/* ===== FUN_00040404 @ 00040404 size=128 ===== */

undefined4 FUN_00040404(int *param_1)

{
  int *local_14 [2];
  undefined4 local_c;
  
  if (*param_1 == 0x7f2bb70f) {
    local_14[0] = param_1;
    local_c = FUN_0003ff74(param_1);
    if (local_14[0][0x2a] != 0) {
      FUN_00017630(local_14[0] + 0x2a);
    }
    FUN_00017630(local_14);
  }
  else {
    local_c = 0x7f2bb70f;
  }
  return local_c;
}



/* ===== FUN_00040484 @ 00040484 size=340 ===== */

int FUN_00040484(int param_1,void *param_2,uint param_3,size_t *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_18;
  int local_14;
  undefined4 local_10;
  size_t local_c;
  
  local_c = 0;
  local_10 = *(undefined4 *)(param_1 + 4);
  local_14 = FUN_00025ea0(local_10,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
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



/* ===== FUN_000405d8 @ 000405d8 size=660 ===== */

int FUN_000405d8(int *param_1,void *param_2,uint param_3,int *param_4)

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
        if ((((bVar3) || (local_44 == 0)) || (local_1c = FUN_00040208(param_1), local_1c != 0)) ||
           (local_1c = FUN_000402ac(param_1,0), local_1c != 0)) break;
        FUN_00045084(param_1[0x24],param_1[0x25],*(undefined4 *)(iVar2 + 0x14),0);
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
      local_1c = FUN_00040484(param_1,param_2,param_3,param_4);
    }
  }
  else {
    local_1c = 0x7f2bb70f;
  }
  return local_1c;
}



/* ===== FUN_0004086c @ 0004086c size=616 ===== */

int FUN_0004086c(int param_1,void *param_2,int param_3,size_t *param_4)

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
  local_1c = FUN_00025ea0(local_18,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
                          *(undefined4 *)(param_1 + 0xa8),local_24);
  if (local_1c == 0) {
    if (*(int *)(param_1 + 0x94) == 0 && *(uint *)(param_1 + 0x90) < local_24[0]) {
      local_14 = param_3 - *(int *)(param_1 + 0x90);
      memcpy((void *)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0x90)),param_2,local_14);
      local_1c = FUN_00025fa8(local_18,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
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
            FUN_00041298(param_1,uVar1,*(undefined4 *)(param_1 + 0x90),
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
    local_1c = FUN_00025c4c(local_18,*(undefined4 *)(param_1 + 8));
    if ((local_1c == 0) &&
       (local_1c = FUN_00028480(local_18,*(undefined4 *)(param_1 + 8),param_1 + 0xc), local_1c == 0)
       ) {
      local_1c = 0x7f2bb7a7;
    }
  }
  return local_1c;
}



/* ===== FUN_00040ad4 @ 00040ad4 size=864 ===== */

int FUN_00040ad4(int *param_1,void *param_2,uint param_3,int *param_4)

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
        iVar1 = FUN_0004086c(param_1,param_2,param_3,param_4);
        if (iVar1 != 0x7f2bb7a7) {
          return iVar1;
        }
        local_14 = 0;
      }
      while ((local_3c != 0 && (local_14 = FUN_00040208(param_1), local_14 == 0))) {
        FUN_00045084(param_1[0x24],param_1[0x25],*(undefined4 *)(iVar2 + 0x14),0);
        local_18 = *(int *)(iVar2 + 0x14) - extraout_r2;
        if (local_3c < local_18) {
          local_18 = local_3c;
        }
        local_14 = FUN_000402ac(param_1,local_18 == *(size_t *)(iVar2 + 0x14));
        if ((local_14 != 0) ||
           ((param_1[0x28] == 0 && param_1[0x29] == 0 &&
            (local_14 = FUN_00035c80(iVar2,param_1[2],param_1 + 3,
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
           (iVar2 = FUN_00041298(param_1,uVar3,param_1[0x24],param_1[0x25]), local_14 == 0)) {
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



/* ===== FUN_00040e34 @ 00040e34 size=276 ===== */

undefined4
FUN_00040e34(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int *param_6)

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



/* ===== FUN_00040f48 @ 00040f48 size=124 ===== */

undefined4
FUN_00040f48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20[0] = 0;
  uStack_c = 0;
  local_10 = param_2;
  uVar1 = FUN_00040e34(param_1,param_2,param_2,0,param_3,local_20);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (undefined4)local_20[0];
  }
  return uVar1;
}



/* ===== FUN_00040fc4 @ 00040fc4 size=140 ===== */

undefined4 FUN_00040fc4(int *param_1,int *param_2)

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



/* ===== FUN_00041050 @ 00041050 size=100 ===== */

undefined4 FUN_00041050(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  int iStack_c;
  
  iVar1 = FUN_00040fc4(param_1,&local_10);
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



/* ===== FUN_000410b4 @ 000410b4 size=484 ===== */

int FUN_000410b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_00045084(param_3,param_4,*(undefined4 *)(local_18 + 0x14),0);
  if (extraout_r2 == 0 && extraout_r3 == 0) {
    local_14 = 0;
  }
  else {
    local_20 = extraout_r2;
    local_14 = FUN_00040208(param_1);
    if (local_14 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar2 = FUN_00045084(param_3,param_4,*(undefined4 *)(local_18 + 0x14),0);
      piVar4 = &local_30;
      puVar3 = &local_34;
      local_14 = FUN_00035c80(local_18,uVar1,0,0,0);
      if (local_14 == 0) {
        if ((local_30 == 0 && iStack_2c == 0) || ((local_34 & 1) != 0)) {
          local_14 = 0;
        }
        else {
          local_14 = FUN_0001744c(*(undefined4 *)(local_18 + 0x14),&local_24);
          if (local_14 == 0) {
            local_14 = FUN_00029060(*(undefined4 *)(local_18 + 4),1,local_30,iStack_2c,1,local_24,
                                    uVar2,puVar3,piVar4);
            if (local_14 == 0) {
              memset((void *)(local_24 + local_20),0,*(int *)(local_18 + 0x14) - local_20);
              local_14 = FUN_0002912c(*(undefined4 *)(local_18 + 4),1,local_30,iStack_2c,1,local_24)
              ;
            }
            FUN_00017630(&local_24);
          }
        }
      }
    }
  }
  return local_14;
}



/* ===== FUN_00041298 @ 00041298 size=652 ===== */

int FUN_00041298(int *param_1,undefined4 param_2,uint param_3,int param_4)

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
      uVar11 = FUN_00045084(param_3 - 1,param_4 - (uint)(param_3 == 0),
                            *(undefined4 *)(param_1[1] + 0x14),0);
      iVar5 = FUN_00035b2c(iVar5,param_1 + 3,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
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
    uVar11 = FUN_0001c560(param_1[1],param_1 + 3,param_3,param_4);
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    iVar5 = (int)uVar11;
    if (iVar5 == 0) {
      if (param_1[2] != 0) {
        uVar11 = FUN_00028a3c(param_1[1],param_1[2],param_1 + 3);
        uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 != 0) {
          return (int)uVar11;
        }
      }
      iVar5 = FUN_000410b4(param_1,uVar3,param_3,param_4);
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
          iVar5 = FUN_00042a94(param_1[1],param_1[2],param_1 + 3,0,uVar4,uVar6,0xffffffffffffffff);
        }
      }
    }
  }
  else {
    iVar5 = 0x7f2bb70f;
  }
  return iVar5;
}



/* ===== FUN_00041524 @ 00041524 size=56 ===== */

undefined4 FUN_00041524(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00041298(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_0004155c @ 0004155c size=60 ===== */

bool FUN_0004155c(int param_1)

{
  return (*(uint *)(param_1 + 100) & 8) != 0;
}



/* ===== FUN_00041598 @ 00041598 size=444 ===== */

undefined4 FUN_00041598(int param_1,int param_2,uint param_3,int param_4)

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
  iVar3 = FUN_0004155c(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 != 0) {
    uStack_14 = (uint)*(ushort *)(param_2 + 0x74);
  }
  iVar3 = FUN_0004155c(*(undefined4 *)(param_1 + 0x10));
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
  iVar3 = FUN_0004155c(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_00041754 @ 00041754 size=436 ===== */

undefined4 FUN_00041754(int param_1,int param_2,uint param_3,int param_4)

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
  iVar2 = FUN_0004155c(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uStack_14 = (uint)*(ushort *)(param_2 + 0x74);
  }
  iVar2 = FUN_0004155c(*(undefined4 *)(param_1 + 0x10));
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
    iVar2 = FUN_0004155c(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_00041908 @ 00041908 size=316 ===== */

undefined4 FUN_00041908(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  int local_14;
  
  iVar3 = FUN_0004155c(*(undefined4 *)(param_1 + 0x10));
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
  iVar3 = FUN_0004155c(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_00041a44 @ 00041a44 size=176 ===== */

int FUN_00041a44(int param_1,undefined4 param_2,void *param_3)

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



/* ===== FUN_00041af4 @ 00041af4 size=108 ===== */

undefined4 FUN_00041af4(int param_1,undefined4 param_2,undefined4 param_3)

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



/* ===== FUN_00041b60 @ 00041b60 size=116 ===== */

undefined4 FUN_00041b60(char *param_1,int param_2)

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



/* ===== FUN_00041bd4 @ 00041bd4 size=668 ===== */

int FUN_00041bd4(int param_1,undefined4 param_2,int param_3,int *param_4,int param_5,
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
          iVar1 = FUN_00041a44(param_1,iVar2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_00041bd4(param_1,param_2,param_3 + *(int *)(param_1 + 0x14),param_3,
                               param_5 + -1);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_00041af4(param_1,iVar2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_00041b60(param_3,*(undefined4 *)(param_1 + 0x14));
          if (iVar1 == 0) goto LAB_00041e04;
        }
        FUN_0002eaf0(param_1,iVar2,0xffffffff);
        *local_58 = 0;
        local_2c = local_2c + 1;
      }
    }
LAB_00041e04:
    local_58 = local_58 + 1;
    bVar6 = CARRY4(uVar3,local_28);
    local_28 = uVar3 + local_28;
    uStack_24 = uVar4 + uStack_24 + (uint)bVar6;
  }
  iVar2 = FUN_00041754(param_1,param_2,local_2c,local_2c >> 0x1f);
  return iVar2;
}



/* ===== FUN_00041e70 @ 00041e70 size=688 ===== */

int FUN_00041e70(int param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
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
      iVar2 = FUN_00017510(3,*(undefined4 *)(param_1 + 0x14),&local_34);
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
        local_14 = FUN_00041bd4(param_1,param_2,local_44,local_20,local_18);
        if (local_14 != 0) goto LAB_000420f8;
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
LAB_000420f8:
    if (local_34 != 0) {
      FUN_00017630(&local_34);
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



/* ===== FUN_00042120 @ 00042120 size=788 ===== */

int FUN_00042120(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
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
      FUN_0002e968(param_1);
      param_9 = param_9 - 1;
    }
    return local_1c;
  }
  uVar2 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
  uVar1 = (int)uVar2 >> 0x1f;
  if ((param_7 & uVar2) != 0 || (param_8 & uVar1) != 0) {
    uVar4 = FUN_000356b0(param_1,param_2,param_3,param_6,param_5,param_6,&local_28);
    local_1c = (int)uVar4;
    if (local_1c != 0) goto LAB_0004240c;
    if (local_28 == 0 && iStack_24 == 0) {
      FUN_0002e968(param_1,(int)((ulonglong)uVar4 >> 0x20),param_7,param_8,0xffffffff);
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
    FUN_0002e968(param_1,uVar1,param_7,param_8,0xffffffff);
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
    uVar4 = FUN_000356b0(param_1,param_2,param_3,param_6,param_5,param_6,&local_28);
    local_1c = (int)uVar4;
    if ((local_1c == 0) && (local_28 == 0 && iStack_24 == 0)) {
      FUN_0002e968(param_1,(int)((ulonglong)uVar4 >> 0x20),param_7,param_8,0xffffffff);
      local_14 = local_14 + 1;
    }
  }
LAB_0004240c:
  *param_10 = *param_10 + local_14;
  return local_1c;
}



/* ===== FUN_00042434 @ 00042434 size=1484 ===== */

int FUN_00042434(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_14 = FUN_0003a060(param_1,param_2,param_3,&local_54);
  if (local_14 != 0) {
    return local_14;
  }
  FUN_0003b330(local_54,local_54,param_5,param_6);
  local_14 = FUN_0003a43c(local_54,0,&local_70);
  if (local_14 != 0x7f2bb780) {
    do {
      if (local_14 != 0) goto LAB_000429e4;
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
        if (!bVar5) goto LAB_00042960;
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
LAB_0004276c:
        uStack_64 = uVar3;
        local_68 = uVar2;
        iStack_6c = iVar1;
        local_70 = uVar4;
        if (local_60 == 0) {
          local_14 = FUN_0003a43c(local_54,0,auStack_a8);
          if (local_14 != 0) goto LAB_000429e4;
          local_50 = local_a0;
          uStack_4c = uStack_9c;
          local_14 = FUN_0003a43c(local_54,7,auStack_a8);
          if (local_14 == 0x7f2bb77c) {
            local_38 = local_50;
            uStack_34 = uStack_4c;
          }
          else {
            if (local_14 != 0) goto LAB_000429e4;
            local_38 = local_a0;
            uStack_34 = uStack_9c;
          }
          local_14 = FUN_0003b330(local_54,local_54,local_50,uStack_4c);
          if (((local_14 != 0) || (local_14 = FUN_0003d180(local_54,0), local_14 != 0)) ||
             ((local_14 = FUN_0003b364(local_54), local_14 != 0 && (local_14 != 0x7f2bb780))))
          goto LAB_000429e4;
          local_14 = 0;
          FUN_0003b330(local_54,local_54,local_38,uStack_34);
          local_30 = 0;
        }
        else {
          local_14 = FUN_0003b5a0(local_54,0,&local_70);
          if (local_14 != 0) goto LAB_000429e4;
          local_14 = FUN_0003b364(local_54);
        }
        if ((local_14 != 0) ||
           (local_14 = FUN_00042120(param_1,param_2,param_3,uStack_24,local_28,uStack_24,local_20,
                                    iStack_1c,local_2c,&local_74), local_14 != 0))
        goto LAB_000429e4;
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
          local_14 = FUN_0003c168(local_54,1,&local_90);
          if (((local_14 == 0) && (local_14 = FUN_0003b364(local_54), local_14 == 0)) &&
             (local_14 = FUN_0003b330(local_54,local_54,local_68,uStack_64), uVar4 = local_70,
             iVar1 = iStack_6c, uVar2 = local_68, uVar3 = uStack_64, local_14 == 0))
          goto LAB_0004276c;
          goto LAB_000429e4;
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
          goto LAB_0004276c;
        }
      }
      local_14 = 0;
      local_14 = FUN_0003a43c(local_54,local_30,&local_70);
      if ((local_14 == 0x7f2bb77c) || (local_14 == 0x7f2bb780)) goto LAB_00042960;
    } while( true );
  }
  local_14 = 0;
LAB_000429e4:
  FUN_00039f5c(local_54);
  return local_14;
LAB_00042960:
  local_14 = FUN_00041754(param_1,param_3,local_74,local_74 >> 0x1f);
  goto LAB_000429e4;
}



/* ===== FUN_00042a00 @ 00042a00 size=148 ===== */

int FUN_00042a00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  
  if (param_5 == 0 && param_6 == 0) {
    memset((void *)(param_3 + 0x28),0,0x3c);
    *(undefined4 *)(param_3 + 4) = 0;
    iVar1 = FUN_00028a3c(param_1,param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_000255b8(param_1,param_2);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00042a94 @ 00042a94 size=328 ===== */

int FUN_00042a94(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
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
      iVar1 = FUN_00028480(param_1,param_2,auStack_8c);
      if (iVar1 != 0) {
        return iVar1;
      }
      local_9c = auStack_8c;
      local_c = 0;
    }
    if ((*(uint *)(local_9c + 0x20) & 0x10000000) == 0) {
      if ((*(uint *)(local_9c + 0x20) & 0x80000) == 0) {
        local_c = FUN_00041e70(param_1,local_9c,param_4,param_6,param_5,param_6,param_7,param_8);
      }
      else {
        local_c = FUN_00042434(param_1,param_2,local_9c,param_6,param_5,param_6,param_7,param_8);
      }
      if (local_c == 0) {
        local_c = FUN_00028a3c(param_1,param_2,local_9c);
      }
    }
    else {
      local_c = FUN_00042a00(param_1,param_2,local_9c,param_6,param_5,param_6,param_7,param_8);
    }
  }
  else {
    local_c = 0x16;
  }
  return local_c;
}



/* ===== FUN_00042bdc @ 00042bdc size=64 ===== */

void FUN_00042bdc(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 3 | param_2;
  return;
}



/* ===== FUN_00042c1c @ 00042c1c size=64 ===== */

void FUN_00042c1c(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xfffffffe | param_2;
  return;
}



/* ===== FUN_00042c5c @ 00042c5c size=224 ===== */

void FUN_00042c5c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_1 & 0xfffffffc;
  param_1[1] = *(uint *)(uVar1 + 8);
  if (param_1[1] != 0) {
    FUN_00042bdc(*(undefined4 *)(uVar1 + 8),param_1);
  }
  *(uint **)(uVar1 + 8) = param_1;
  FUN_00042bdc(uVar1,uVar2);
  if (uVar2 == 0) {
    *param_2 = uVar1;
  }
  else if (param_1 == *(uint **)(uVar2 + 8)) {
    *(uint *)(uVar2 + 8) = uVar1;
  }
  else {
    *(uint *)(uVar2 + 4) = uVar1;
  }
  FUN_00042bdc(param_1,uVar1);
  return;
}



/* ===== FUN_00042d3c @ 00042d3c size=224 ===== */

void FUN_00042d3c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = *param_1 & 0xfffffffc;
  param_1[2] = *(uint *)(uVar1 + 4);
  if (param_1[2] != 0) {
    FUN_00042bdc(*(undefined4 *)(uVar1 + 4),param_1);
  }
  *(uint **)(uVar1 + 4) = param_1;
  FUN_00042bdc(uVar1,uVar2);
  if (uVar2 == 0) {
    *param_2 = uVar1;
  }
  else if (param_1 == *(uint **)(uVar2 + 4)) {
    *(uint *)(uVar2 + 4) = uVar1;
  }
  else {
    *(uint *)(uVar2 + 8) = uVar1;
  }
  FUN_00042bdc(param_1,uVar1);
  return;
}



/* ===== FUN_00042e1c @ 00042e1c size=544 ===== */

void FUN_00042e1c(uint *param_1,undefined4 *param_2)

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
          FUN_00042c5c(puVar2,param_2);
          local_14 = local_1c;
          local_1c = puVar2;
        }
        *local_14 = *local_14 | 1;
        *puVar1 = *puVar1 & 0xfffffffe;
        FUN_00042d3c(puVar1,param_2);
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
          FUN_00042d3c(puVar2,param_2);
          local_14 = local_1c;
          local_1c = puVar2;
        }
        *local_14 = *local_14 | 1;
        *puVar1 = *puVar1 & 0xfffffffe;
        FUN_00042c5c(puVar1,param_2);
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



/* ===== FUN_0004303c @ 0004303c size=1016 ===== */

void FUN_0004303c(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint *local_18;
  uint *local_14;
  uint *local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  do {
    while( true ) {
      if (((local_14 != (uint *)0x0) && ((*local_14 & 1) == 0)) || (local_14 == (uint *)*param_3))
      goto LAB_00043408;
      if (local_14 == (uint *)local_18[2]) break;
      local_c = (uint *)local_18[2];
      if ((*local_c & 1) == 0) {
        *local_c = *local_c | 1;
        *local_18 = *local_18 & 0xfffffffe;
        FUN_00042d3c(local_18,param_3);
        local_c = (uint *)local_18[2];
      }
      if (((local_c[2] != 0) && ((*(uint *)local_c[2] & 1) == 0)) ||
         ((local_c[1] != 0 && ((*(uint *)local_c[1] & 1) == 0)))) {
        if ((local_c[2] == 0) || ((*(uint *)local_c[2] & 1) != 0)) {
          *(uint *)local_c[1] = *(uint *)local_c[1] | 1;
          *local_c = *local_c & 0xfffffffe;
          FUN_00042c5c(local_c,param_3);
          local_c = (uint *)local_18[2];
        }
        FUN_00042c1c(local_c,*local_18 & 1);
        *local_18 = *local_18 | 1;
        *(uint *)local_c[2] = *(uint *)local_c[2] | 1;
        FUN_00042d3c(local_18,param_3);
        local_14 = (uint *)*param_3;
LAB_00043408:
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
      FUN_00042c5c(local_18,param_3);
      local_c = (uint *)local_18[1];
    }
    if (((local_c[2] != 0) && ((*(uint *)local_c[2] & 1) == 0)) ||
       ((local_c[1] != 0 && ((*(uint *)local_c[1] & 1) == 0)))) {
      if ((local_c[1] == 0) || ((*(uint *)local_c[1] & 1) != 0)) {
        *(uint *)local_c[2] = *(uint *)local_c[2] | 1;
        *local_c = *local_c & 0xfffffffe;
        FUN_00042d3c(local_c,param_3);
        local_c = (uint *)local_18[1];
      }
      FUN_00042c1c(local_c,*local_18 & 1);
      *local_18 = *local_18 | 1;
      *(uint *)local_c[1] = *(uint *)local_c[1] | 1;
      FUN_00042c5c(local_18,param_3);
      local_14 = (uint *)*param_3;
      goto LAB_00043408;
    }
    *local_c = *local_c & 0xfffffffe;
    local_14 = local_18;
    local_18 = (uint *)(*local_18 & 0xfffffffc);
  } while( true );
}



/* ===== FUN_00043434 @ 00043434 size=628 ===== */

void FUN_00043434(uint *param_1,uint *param_2)

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
          FUN_00042bdc(local_c,local_10);
        }
        local_10[2] = local_c;
        local_24[1] = param_1[1];
        FUN_00042bdc(param_1[1],local_24);
      }
      *local_24 = *param_1;
      local_24[2] = param_1[2];
      FUN_00042bdc(param_1[2],local_24);
      goto LAB_00043680;
    }
    local_c = param_1[2];
  }
  local_10 = (uint *)(*param_1 & 0xfffffffc);
  local_14 = *param_1 & 1;
  if (local_c != 0) {
    FUN_00042bdc(local_c,local_10);
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
LAB_00043680:
  if (local_14 == 1) {
    FUN_0004303c(local_c,local_10,param_2);
  }
  return;
}



/* ===== FUN_000436a8 @ 000436a8 size=196 ===== */

void FUN_000436a8(uint *param_1,code *param_2,undefined4 param_3)

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



/* ===== FUN_0004376c @ 0004376c size=112 ===== */

void FUN_0004376c(int param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_000436a8(local_c,param_2,param_3);
  return;
}



/* ===== FUN_000437dc @ 000437dc size=236 ===== */

uint * FUN_000437dc(uint *param_1)

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
    local_c = (uint *)FUN_000439c8(param_1);
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



/* ===== FUN_000438c8 @ 000438c8 size=64 ===== */

void FUN_000438c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    FUN_000436a8(param_1,param_2,param_3);
  }
  return;
}



/* ===== FUN_00043908 @ 00043908 size=96 ===== */

int FUN_00043908(int *param_1)

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



/* ===== FUN_00043968 @ 00043968 size=96 ===== */

int FUN_00043968(int *param_1)

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



/* ===== FUN_000439c8 @ 000439c8 size=196 ===== */

uint * FUN_000439c8(uint *param_1)

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



/* ===== FUN_00043a8c @ 00043a8c size=196 ===== */

uint * FUN_00043a8c(uint *param_1)

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



/* ===== FUN_00043b50 @ 00043b50 size=216 ===== */

void FUN_00043b50(uint *param_1,uint *param_2,undefined4 *param_3)

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
    FUN_00042bdc(param_1[2],param_2);
  }
  if (param_1[1] != 0) {
    FUN_00042bdc(param_1[1],param_2);
  }
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}



/* ===== FUN_00043c28 @ 00043c28 size=616 ===== */

void FUN_00043c28(char *param_1,int param_2,char *param_3,__gnuc_va_list param_4)

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
    fwrite(&DAT_0004a4a4,1,2,stderr);
  }
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_00044070(param_2);
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



/* ===== FUN_00043e90 @ 00043e90 size=72 ===== */

void FUN_00043e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_0005b378)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00043ed8 @ 00043ed8 size=112 ===== */

void FUN_00043ed8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  if (DAT_0005b378 == (code *)0x0) {
    DAT_0005b378 = FUN_00043c28;
  }
  uStack_4 = param_4;
  FUN_00043e90(param_1,param_2,param_3,&uStack_4);
  return;
}



/* ===== FUN_00043ff4 @ 00043ff4 size=28 ===== */

undefined4 FUN_00043ff4(void)

{
  return 0;
}



/* ===== FUN_00044010 @ 00044010 size=28 ===== */

undefined4 FUN_00044010(void)

{
  return 0;
}



/* ===== FUN_00044070 @ 00044070 size=1012 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00044070(uint param_1)

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
    FUN_00043ff4();
    for (local_10 = DAT_0005b430; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_00044010();
          if (DAT_0005b438 == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_0005b438)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    for (local_10 = DAT_0005b434; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_00044010();
          if (DAT_0005b438 == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_0005b438)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    FUN_00044010();
  }
  uVar3 = ram0x0004a4b4;
  uVar2 = s_Unknown_code_0004a4a8._8_4_;
  uVar1 = s_Unknown_code_0004a4a8._4_4_;
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  pcVar4 = (char *)(iVar6 + DAT_00044464);
  *(undefined4 *)pcVar4 = s_Unknown_code_0004a4a8._0_4_;
  *(undefined4 *)(pcVar4 + 4) = uVar1;
  *(undefined4 *)(pcVar4 + 8) = uVar2;
  *(short *)(pcVar4 + 0xc) = (short)uVar3;
  if (param_1 != 0) {
    pcVar4 = (char *)FUN_00044964(param_1);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    strcat((char *)(iVar6 + DAT_00044464),pcVar4);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    sVar5 = strlen((char *)(iVar6 + DAT_00044464));
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined2 *)(sVar5 + iVar6 + DAT_00044464) = DAT_0004a4b8;
  }
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  for (local_18 = (char *)(iVar6 + DAT_00044464); *local_18 != '\0'; local_18 = local_18 + 1) {
  }
  if (local_c < 100) {
    pcVar4 = local_18;
    if (local_c < 10) goto LAB_00044420;
  }
  else {
    *local_18 = (char)(local_c / 100) + '0';
    local_c = local_c % 100;
    pcVar4 = local_18 + 1;
  }
  local_18 = pcVar4 + 1;
  *pcVar4 = (char)(local_c / 10) + '0';
  local_c = local_c % 10;
LAB_00044420:
  *local_18 = (char)local_c + '0';
  local_18[1] = '\0';
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return (char *)(iVar6 + DAT_00044464);
}



/* ===== FUN_00044468 @ 00044468 size=144 ===== */

undefined4 FUN_00044468(undefined4 param_1)

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



/* ===== FUN_000444f8 @ 000444f8 size=472 ===== */

void FUN_000444f8(void)

{
  int *piVar1;
  char *local_1c;
  uint local_18;
  int local_14;
  char *local_10;
  char *local_c;
  
  if ((DAT_0005b43c & 0x8000) == 0) {
    local_c = getenv("COMERR_DEBUG");
    if ((local_c != (char *)0x0) &&
       ((DAT_0005b43c = strtoul(local_c,&local_1c,0), *local_1c != '\0' ||
        (piVar1 = __errno_location(), *piVar1 != 0)))) {
      DAT_0005b43c = 0;
    }
    DAT_0005b43c = DAT_0005b43c | 0x8000;
    if (DAT_0005b43c != 0x8000) {
      local_10 = (char *)FUN_00044468("COMERR_DEBUG_FILE");
      if (local_10 != (char *)0x0) {
        DAT_0005b440 = fopen(local_10,"a");
      }
      if (DAT_0005b440 == (FILE *)0x0) {
        DAT_0005b440 = fopen("/dev/tty","a");
      }
      if (DAT_0005b440 == (FILE *)0x0) {
        DAT_0005b43c = 0x8000;
      }
      else {
        local_14 = fileno(DAT_0005b440);
        if ((-1 < local_14) && (local_18 = fcntl(local_14,1), -1 < (int)local_18)) {
          fcntl(local_14,2,local_18 | 1);
        }
      }
    }
  }
  return;
}



/* ===== FUN_000446d0 @ 000446d0 size=240 ===== */

int FUN_000446d0(int param_1)

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
    iVar3 = FUN_00043ff4();
    if (iVar3 == 0) {
      __ptr[1] = param_1;
      *__ptr = DAT_0005b434;
      DAT_0005b434 = __ptr;
      FUN_000444f8();
      __stream = DAT_0005b440;
      if ((DAT_0005b43c & 1) != 0) {
        uVar2 = FUN_00044964(*(undefined4 *)(param_1 + 4));
        fprintf(__stream,"add_error_table: %s (0x%p)\n",uVar2,param_1);
      }
      FUN_00044010();
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



/* ===== FUN_000447c0 @ 000447c0 size=376 ===== */

undefined4 FUN_000447c0(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_18;
  undefined4 *local_14;
  
  local_18 = (undefined4 *)0x0;
  iVar2 = FUN_00043ff4();
  if (iVar2 == 0) {
    local_14 = DAT_0005b434;
    FUN_000444f8();
    pFVar1 = DAT_0005b440;
    for (; local_14 != (undefined4 *)0x0; local_14 = (undefined4 *)*local_14) {
      if (*(int *)(local_14[1] + 4) == *(int *)(param_1 + 4)) {
        if (local_18 == (undefined4 *)0x0) {
          DAT_0005b434 = (undefined4 *)*local_14;
        }
        else {
          *local_18 = *local_14;
        }
        free(local_14);
        pFVar1 = DAT_0005b440;
        if ((DAT_0005b43c & 1) != 0) {
          uVar3 = FUN_00044964(*(undefined4 *)(param_1 + 4));
          fprintf(pFVar1,"remove_error_table: %s (0x%p)\n",uVar3,param_1);
        }
        FUN_00044010();
        return 0;
      }
      local_18 = local_14;
    }
    if ((DAT_0005b43c & 1) != 0) {
      uVar3 = FUN_00044964(*(undefined4 *)(param_1 + 4));
      fprintf(pFVar1,"remove_error_table FAILED: %s (0x%p)\n",uVar3,param_1);
    }
    FUN_00044010();
  }
  return 2;
}



/* ===== FUN_00044938 @ 00044938 size=44 ===== */

void FUN_00044938(int param_1)

{
  FUN_000446d0(*(undefined4 *)(param_1 + 4));
  return;
}



/* ===== FUN_00044964 @ 00044964 size=200 ===== */

undefined1 * FUN_00044964(int param_1)

{
  uint uVar1;
  undefined1 *local_10;
  int local_c;
  
  local_10 = &DAT_0005b444;
  for (local_c = 4; -1 < local_c; local_c = local_c + -1) {
    uVar1 = (int)(param_1 >> 8 & 0xffffffU) >> (local_c * 6 & 0xffU) & 0x3f;
    if (uVar1 != 0) {
      *local_10 = (&DAT_0004a553)[uVar1];
      local_10 = local_10 + 1;
    }
  }
  *local_10 = 0;
  return &DAT_0005b444;
}



/* ===== FUN_00044a2c @ 00044a2c size=168 ===== */

ulonglong FUN_00044a2c(uint param_1,uint param_2)

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



/* ===== FUN_00044ad4 @ 00044ad4 size=32 ===== */

void FUN_00044ad4(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00044a2c();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00044af4 @ 00044af4 size=220 ===== */

ulonglong FUN_00044af4(uint param_1,uint param_2)

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



/* ===== FUN_00044f3c @ 00044f3c size=372 ===== */

ulonglong FUN_00044f3c(uint param_1,uint param_2)

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
LAB_00044d14:
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
  if ((param_2 & 0x100000) != 0) goto LAB_00044d14;
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
      goto LAB_00044d94;
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
LAB_00044d94:
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



/* ===== FUN_00044fb0 @ 00044fb0 size=212 ===== */

undefined8 FUN_00044fb0(int param_1,int param_2,int param_3,int param_4)

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
      uVar2 = FUN_000450d0(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_000450d0();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_000450d0(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_000450d0(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_00045084 @ 00045084 size=76 ===== */

void FUN_00045084(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000450d0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000450d0 @ 000450d0 size=328 ===== */

undefined8 FUN_000450d0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 00045218 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0005c000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0005c004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0005c008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setmntent @ 0005c00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void setmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0005c010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 0005c014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 0005c018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0005c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 0005c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0005c024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0005c028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0005c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0005c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0005c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0005c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0005c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 0005c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0005c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hasmntopt @ 0005c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hasmntopt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0005c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 0005c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0005c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0005c058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 0005c05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0005c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0005c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0005c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 0005c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0005c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0005c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0005c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0005c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gethostname @ 0005c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gethostname(char *__name,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0005c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0005c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0005c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0005c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0005c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 0005c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0005c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0005c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0005c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pwrite64 @ 0005c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pwrite64(int __fd,void *__buf,size_t __n,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0005c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0005c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0005c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0005c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0005c0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0005c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::longjmp @ 0005c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nanosleep @ 0005c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0005c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0005c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0005c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0005c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpagesize @ 0005c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohl @ 0005c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t ntohl(uint32_t __netlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0005c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 0005c0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0005c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 0005c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0005c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 0005c0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 0005c0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setbuf @ 0005c100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0005c104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pread64 @ 0005c108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pread64(int __fd,void *__buf,size_t __nbytes,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::posix_memalign @ 0005c10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 0005c110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0005c114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 0005c118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0005c11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mbstowcs @ 0005c120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbstowcs(wchar_t *__pwcs,char *__s,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0005c124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0005c128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0005c12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::posix_fadvise64 @ 0005c130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_fadvise64(int __fd,__off64_t __offset,__off64_t __len,int __advise)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftruncate64 @ 0005c134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate64(int __fd,__off64_t __length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0005c138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0005c13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0005c140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_setjmp @ 0005c144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setjmp(__jmp_buf_tag *__env)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0005c148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::endmntent @ 0005c14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void endmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat @ 0005c150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srandom @ 0005c154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0005c158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0005c15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fallocate64 @ 0005c160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fallocate64(int __fd,int __mode,__off64_t __offset,__off64_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setrlimit64 @ 0005c164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getrlimit64 @ 0005c168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0005c16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::uname @ 0005c170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 0005c174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0005c178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0005c17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getmntent @ 0005c180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0005c184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0005c188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wcswidth @ 0005c18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wcswidth(wchar_t *__s,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 0005c190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


