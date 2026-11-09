// dumpe2fs — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 0001180c size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00011830 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0006b00c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::secure_getenv @ 0001183c size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_0006b010)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00011848 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0006b014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::setrlimit64 @ 00011854 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setrlimit64_0006b018)(__resource);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00011860 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0006b01c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::posix_fadvise64 @ 0001186c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_fadvise64(int __fd,__off64_t __offset,__off64_t __len,int __advise)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_posix_fadvise64_0006b020)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 00011878 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_0006b024)();
  return _Var1;
}



/* ===== <EXTERNAL>::sysconf @ 00011884 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0006b028)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::printf @ 00011890 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0006b02c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::random @ 0001189c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_0006b030)();
  return lVar1;
}



/* ===== <EXTERNAL>::strerror @ 000118a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0006b034)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 000118b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_0006b038)();
  return _Var1;
}



/* ===== <EXTERNAL>::stat64 @ 000118c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0006b03c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::memmove @ 000118cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0006b040)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000118d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0006b044)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getgrgid @ 000118e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrgid_0006b048)(__gid);
  return pgVar1;
}



/* ===== <EXTERNAL>::getenv @ 000118f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0006b04c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fchmod @ 000118fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchmod_0006b050)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::pwrite64 @ 00011908 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pwrite64(int __fd,void *__buf,size_t __n,__off64_t __offset)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_pwrite64_0006b054)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::getegid @ 00011914 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_0006b058)();
  return _Var1;
}



/* ===== <EXTERNAL>::getpagesize @ 00011920 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpagesize_0006b05c)();
  return iVar1;
}



/* ===== <EXTERNAL>::getpid @ 0001192c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0006b060)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 00011938 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0006b064)(__base);
  return;
}



/* ===== <EXTERNAL>::fgets @ 00011944 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0006b068)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 00011950 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0006b06c)();
  return;
}



/* ===== <EXTERNAL>::getrlimit64 @ 0001195c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getrlimit64_0006b070)(__resource);
  return iVar1;
}



/* ===== <EXTERNAL>::prctl @ 00011968 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0006b074)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00011974 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0006b078)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011980 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0006b07c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 0001198c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0006b080)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00011998 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0006b084)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getuid @ 000119a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_0006b088)();
  return _Var1;
}



/* ===== <EXTERNAL>::feof @ 000119b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_0006b08c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::hasmntopt @ 000119bc size=12 ===== */

void hasmntopt(void)

{
  (*(code *)PTR_hasmntopt_0006b090)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000119c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0006b094)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 000119d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_0006b098)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 000119e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0006b09c)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000119ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0006b0a0)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::readdir @ 000119f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_0006b0a4)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011a04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0006b0a8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::lseek @ 00011a10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_0006b0ac)(__fd);
  return _Var1;
}



/* ===== <EXTERNAL>::strncasecmp @ 00011a1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_0006b0b0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00011a28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0006b0b4)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 00011a34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_0006b0b8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtol @ 00011a40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0006b0bc)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::uname @ 00011a4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0006b0c0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::rename @ 00011a58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_0006b0c4)(__old);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00011a64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0006b0c8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011a70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0006b0cc)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00011a7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0006b0d0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fstat @ 00011a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_0006b0d4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011a94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0006b0d8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ctime @ 00011aa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_0006b0dc)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcat @ 00011aac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0006b0e0)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ntohl @ 00011ab8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t ntohl(uint32_t __netlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohl_0006b0e4)(__netlong);
  return uVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011ac4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0006b0e8)();
  return;
}



/* ===== <EXTERNAL>::umask @ 00011ad0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = (*(code *)PTR_umask_0006b0ec)(__mask);
  return _Var1;
}



/* ===== <EXTERNAL>::lstat @ 00011adc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_0006b0f0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00011ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0006b0f4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::pread64 @ 00011af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pread64(int __fd,void *__buf,size_t __nbytes,__off64_t __offset)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_pread64_0006b0f8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0006b0fc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0006b100)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_0006b104)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00011b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_0006b108)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 00011b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_0006b10c)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0006b110)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0006b114)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fdopen @ 00011b54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_0006b118)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011b60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0006b11c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::setmntent @ 00011b6c size=12 ===== */

void setmntent(void)

{
  (*(code *)PTR_setmntent_0006b120)();
  return;
}



/* ===== <EXTERNAL>::endmntent @ 00011b78 size=12 ===== */

void endmntent(void)

{
  (*(code *)PTR_endmntent_0006b124)();
  return;
}



/* ===== <EXTERNAL>::strtoull @ 00011b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_0006b12c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0006b130)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00011ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0006b134)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::getopt @ 00011bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0006b138)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0006b13c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fallocate64 @ 00011bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fallocate64(int __fd,int __mode,__off64_t __offset,__off64_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fallocate64_0006b140)
                    (__fd,__mode,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return iVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0006b144)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00011be4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0006b148)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 00011bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_0006b14c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 00011bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0006b150)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 00011c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0006b154)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0006b158)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getpwuid @ 00011c20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwuid_0006b15c)(__uid);
  return ppVar1;
}



/* ===== <EXTERNAL>::gethostname @ 00011c2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gethostname(char *__name,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gethostname_0006b160)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0006b164)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::difftime @ 00011c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_difftime_0006b168)(__time1);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::mkstemp @ 00011c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkstemp(char *__template)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkstemp_0006b16c)(__template);
  return iVar1;
}



/* ===== <EXTERNAL>::srandom @ 00011c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
  (*(code *)PTR_srandom_0006b170)(__seed);
  return;
}



/* ===== <EXTERNAL>::fsync @ 00011c68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0006b174)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00011c74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0006b178)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 00011c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0006b17c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::getmntent @ 00011c8c size=12 ===== */

void getmntent(void)

{
  (*(code *)PTR_getmntent_0006b180)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011c98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0006b184)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 00011ca4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0006b188)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011cb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0006b18c)();
  return piVar1;
}



/* ===== <EXTERNAL>::link @ 00011cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int link(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_link_0006b190)(__from);
  return iVar1;
}



/* ===== <EXTERNAL>::exit @ 00011cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0006b194)(__status);
  return;
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 00011cd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_makedev_0006b198)(__major);
  return uVar1;
}



/* ===== <EXTERNAL>::atoi @ 00011ce0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0006b19c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 00011cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_0006b1a0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0006b1a4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 00011d04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_0006b1a8)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::open @ 00011d10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0006b1ac)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011d1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0006b1b0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011d28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0006b1b4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00011d34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0006b1b8)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00011d40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_0006b1bc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::posix_memalign @ 00011d4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_0006b1c0)(__memptr);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011d58 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0006b1c4)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0006b1c8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00011d70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0006b1cc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00011d7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0006b1d0)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011d88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0006b1d4)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011d94 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0006b1d8)();
  return;
}



/* ===== <EXTERNAL>::ftruncate64 @ 00011da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate64(int __fd,__off64_t __length)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_ftruncate64_0006b1dc)
                    (__fd,in_r1,(int)__length,(int)((ulonglong)__length >> 0x20));
  return iVar1;
}



/* ===== entry @ 00011db0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0006b128)
            (DAT_00011de4,param_2,&stack0x00000004,DAT_00011de8,DAT_00011de0,param_1);
  return;
}



/* ===== FUN_00011dec @ 00011dec size=32 ===== */

void FUN_00011dec(void)

{
  if (DAT_00011e10 == DAT_00011e0c) {
    return;
  }
  if (DAT_00011e14 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011e14)();
  return;
}



/* ===== _FINI_0 @ 00011e50 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011e8c;
  if (*DAT_00011e8c != '\0') {
    return;
  }
  FUN_00011dec();
  if (DAT_00011e90 != 0) {
    __deregister_frame_info(DAT_00011e94);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011e98 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011ebc != 0) {
    __register_frame_info(DAT_00011ec4,DAT_00011ec0);
  }
  if ((DAT_00011e48 - DAT_00011e44 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011e4c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011e4c)();
  return;
}



/* ===== FUN_00011ec8 @ 00011ec8 size=60 ===== */

bool FUN_00011ec8(int param_1)

{
  return (*(uint *)(param_1 + 0x5c) & 4) != 0;
}



/* ===== FUN_00011f04 @ 00011f04 size=60 ===== */

bool FUN_00011f04(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_00011f40 @ 00011f40 size=60 ===== */

bool FUN_00011f40(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x200) != 0;
}



/* ===== FUN_00011f7c @ 00011f7c size=60 ===== */

bool FUN_00011f7c(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_00011fb8 @ 00011fb8 size=60 ===== */

bool FUN_00011fb8(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 8) != 0;
}



/* ===== FUN_00011ff4 @ 00011ff4 size=60 ===== */

bool FUN_00011ff4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x10) != 0;
}



/* ===== FUN_00012030 @ 00012030 size=60 ===== */

bool FUN_00012030(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x80) != 0;
}



/* ===== FUN_0001206c @ 0001206c size=60 ===== */

bool FUN_0001206c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x200) != 0;
}



/* ===== FUN_000120a8 @ 000120a8 size=96 ===== */

undefined4 FUN_000120a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00011f7c(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00011f04(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00012108 @ 00012108 size=56 ===== */

void FUN_00012108(void)

{
  fprintf(stderr,"Usage: %s [-bfghixV] [-o superblock=<num>] [-o blocksize=<num>] device\n",
          DAT_0006b1e8);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012140 @ 00012140 size=124 ===== */

void FUN_00012140(undefined4 param_1,undefined4 param_2)

{
  if (DAT_0006c0bc == 0) {
    printf("%llu",param_2,param_1,param_2);
  }
  else if (DAT_0006c0c0 == 0) {
    printf("0x%04llx",param_2,param_1,param_2);
  }
  else {
    printf("0x%08llx",param_2,param_1,param_2);
  }
  return;
}



/* ===== FUN_000121bc @ 000121bc size=152 ===== */

void FUN_000121bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_0006c0bc == 0) {
    printf("%llu-%llu",param_2,param_1,param_2,param_3,param_4);
  }
  else if (DAT_0006c0c0 == 0) {
    printf("0x%04llx-0x%04llx",param_2,param_1,param_2,param_3,param_4);
  }
  else {
    printf("0x%08llx-0x%08llx",param_2,param_1,param_2,param_3,param_4);
  }
  return;
}



/* ===== FUN_00012254 @ 00012254 size=488 ===== */

void FUN_00012254(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint local_14;
  uint local_10;
  
  bVar1 = false;
  iVar2 = FUN_000513e0(param_4,param_5);
  iVar2 = iVar2 + param_3 * param_1;
  local_10 = 0;
  while( true ) {
    if (param_3 <= local_10) break;
    iVar3 = FUN_00015c34(local_10,param_2);
    if (iVar3 == 0) {
      if (bVar1) {
        printf(", ");
      }
      FUN_00012140(param_5 * (local_10 + iVar2),0);
      local_14 = local_10;
      while( true ) {
        if ((param_3 <= local_14) || (iVar3 = FUN_00015c34(local_14,param_2), iVar3 != 0)) break;
        local_14 = local_14 + 1;
      }
      local_14 = local_14 - 1;
      if (local_14 != local_10) {
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(0x2d,stdout);
        }
        else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
          pcVar4 = stdout->_IO_write_base;
          stdout->_IO_write_base = pcVar4 + 1;
          *pcVar4 = '-';
        }
        else {
          __fputc_unlocked(0x2d,stdout);
        }
        FUN_00012140(param_5 * (local_14 + iVar2),0);
        local_10 = local_14;
      }
      bVar1 = true;
    }
    local_10 = local_10 + 1;
  }
  return;
}



/* ===== FUN_0001243c @ 0001243c size=180 ===== */

void FUN_0001243c(uint param_1,uint param_2,char *param_3,int *param_4)

{
  if ((param_2 & param_1) != 0) {
    if (*param_4 == 0) {
      fwrite(&DAT_00051bb0,1,2,stdout);
    }
    else {
      fwrite(&DAT_00051bb4,1,2,stdout);
      *param_4 = 0;
    }
    fputs(param_3,stdout);
  }
  return;
}



/* ===== FUN_000124f0 @ 000124f0 size=404 ===== */

void FUN_000124f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int local_18;
  FILE *local_14;
  FILE *local_10;
  undefined4 local_c;
  
  local_18 = 1;
  local_c = 0;
  iVar1 = FUN_000120a8(param_1);
  if (iVar1 != 0) {
    local_c = FUN_000171c8(param_1,param_2);
  }
  FUN_0001243c(local_c,1,"INODE_UNINIT",&local_18);
  FUN_0001243c(local_c,2,"BLOCK_UNINIT",&local_18);
  FUN_0001243c(local_c,4,"ITABLE_ZEROED",&local_18);
  if (local_18 == 0) {
    local_10 = stdout;
    if (stdout->_chain == (_IO_FILE *)0x0) {
      fputc(0x5d,stdout);
    }
    else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
      pcVar2 = stdout->_IO_write_base;
      stdout->_IO_write_base = pcVar2 + 1;
      *pcVar2 = ']';
    }
    else {
      __fputc_unlocked(0x5d,stdout);
    }
  }
  local_14 = stdout;
  if (stdout->_chain == (_IO_FILE *)0x0) {
    fputc(10,stdout);
  }
  else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
    pcVar2 = stdout->_IO_write_base;
    stdout->_IO_write_base = pcVar2 + 1;
    *pcVar2 = '\n';
  }
  else {
    __fputc_unlocked(10,stdout);
  }
  return;
}



/* ===== FUN_00012684 @ 00012684 size=236 ===== */

void FUN_00012684(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  bVar3 = param_8 <= param_4;
  if (param_4 == param_8) {
    bVar3 = param_7 <= param_3;
  }
  if (bVar3) {
    bVar3 = param_10 <= param_4;
    if (param_4 == param_10) {
      bVar3 = param_9 <= param_3;
    }
    if (!bVar3 || param_4 == param_10 && param_3 == param_9) {
      if ((param_5 != 0) && (param_4 == param_8 && param_3 == param_7)) {
        return;
      }
      printf(" (+%u)",param_3 - param_7);
      return;
    }
  }
  uVar4 = FUN_0001206c(*(undefined4 *)(param_1 + 0x10));
  if ((int)uVar4 != 0) {
    uVar1 = FUN_00016224(param_1,(int)((ulonglong)uVar4 >> 0x20),param_3,param_4);
    iVar2 = FUN_00016290(param_1,uVar1);
    printf(" (bg #%u + %u)",uVar1,param_3 - iVar2);
  }
  return;
}



/* ===== FUN_00012770 @ 00012770 size=3356 ===== */

void FUN_00012770(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  int local_98;
  int iStack_94;
  uint local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  FILE *local_7c;
  FILE *local_78;
  int local_74;
  FILE *local_70;
  FILE *local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  FILE *local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int iStack_34;
  int local_30;
  uint local_2c;
  char *local_28;
  void *local_24;
  void *local_20;
  uint local_1c;
  
  local_20 = (void *)0x0;
  local_24 = (void *)0x0;
  local_28 = "blocks";
  local_38 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> (*(uint *)(param_1 + 100) & 0xff);
  iStack_34 = 0;
  local_3c = 1;
  iVar2 = FUN_00011f40(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    local_28 = "clusters";
  }
  local_40 = *(uint *)(*(int *)(param_1 + 0x10) + 0x24) >> 3;
  local_44 = *(uint *)(*(int *)(param_1 + 0x10) + 0x28) >> 3;
  if (*(int *)(param_1 + 0x30) != 0) {
    local_20 = malloc(local_40);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_24 = malloc(local_44);
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
    uVar5 = 0x80;
  }
  else {
    uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x58);
  }
  local_48 = (*(int *)(*(int *)(param_1 + 0x10) + 0x28) * uVar5 +
             (0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0xff))) - 1 >>
             (*(int *)(*(int *)(param_1 + 0x10) + 0x18) + 10U & 0xff);
  local_4c = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0xce);
  local_50 = stdout;
  if (stdout->_chain == (_IO_FILE *)0x0) {
    fputc(10,stdout);
  }
  else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
    pcVar6 = stdout->_IO_write_base;
    stdout->_IO_write_base = pcVar6 + 1;
    *pcVar6 = '\n';
  }
  else {
    __fputc_unlocked(10,stdout);
  }
  local_58._0_4_ = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
  local_58._4_4_ = 0;
  iVar2 = FUN_00011ff4(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    local_2c = *(uint *)(param_1 + 0x20);
  }
  else {
    local_2c = *(uint *)(*(int *)(param_1 + 0x10) + 0x104);
  }
  if (param_2 != 0) {
    puts("group:block:super:gdt:bbitmap:ibitmap:itable");
  }
  local_1c = 0;
  do {
    if (*(uint *)(param_1 + 0x1c) <= local_1c) {
      if (local_20 != (void *)0x0) {
        free(local_20);
      }
      if (local_24 != (void *)0x0) {
        free(local_24);
      }
      return;
    }
    uVar8 = FUN_00016290(param_1,local_1c);
    local_58 = uVar8;
    uVar8 = FUN_00016308(param_1,local_1c);
    uVar12 = 0;
    local_60 = uVar8;
    FUN_000178e4(param_1,local_1c,&local_88,&local_90,&local_98,0);
    if (param_2 == 0) {
      printf("Group %lu: (Blocks ",local_1c);
      FUN_000121bc((undefined4)local_58,local_58._4_4_,(undefined4)local_60,local_60._4_4_);
      fputc(0x29,stdout);
      iVar2 = FUN_000120a8(param_1);
      if (iVar2 != 0) {
        local_64 = FUN_0001737c(param_1,local_1c);
        local_68 = FUN_0001a4e0(param_1,local_1c);
        printf(" csum 0x%04x",local_64);
        if (local_64 != local_68) {
          printf(" (EXPECTED 0x%04x)",local_68);
        }
      }
      FUN_000124f0(param_1,local_1c);
      if ((local_1c == 0) || (local_88 != 0 || iStack_84 != 0)) {
        local_30 = 1;
      }
      else {
        local_30 = 0;
      }
      if (local_30 != 0) {
        if (local_1c == 0) {
          uVar5 = 0x1ca4;
        }
        else {
          uVar5 = 0x1cac;
        }
        printf("  %s superblock at ",uVar5 | 0x50000);
        FUN_00012140(local_88,iStack_84);
      }
      if (local_90 == 0 && iStack_8c == 0) {
        if (local_98 != 0 || iStack_94 != 0) {
          local_6c = stdout;
          if (stdout->_chain == (_IO_FILE *)0x0) {
            if (local_30 == 0) {
              iVar2 = 0x20;
            }
            else {
              iVar2 = 0x2c;
            }
            fputc(iVar2,stdout);
          }
          else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
            if (local_30 == 0) {
              cVar1 = ' ';
            }
            else {
              cVar1 = ',';
            }
            pcVar6 = stdout->_IO_write_base;
            stdout->_IO_write_base = pcVar6 + 1;
            *pcVar6 = cVar1;
          }
          else {
            if (local_30 == 0) {
              uVar3 = 0x20;
            }
            else {
              uVar3 = 0x2c;
            }
            __fputc_unlocked(uVar3,stdout);
          }
          printf("%s"," Group descriptor at ");
          FUN_00012140(local_98,iStack_94);
          local_30 = local_30 + 1;
        }
      }
      else {
        printf("%s",", Group descriptors at ");
        FUN_000121bc(local_90,iStack_8c,local_90 + local_2c + -1,
                     (iStack_8c + ((int)local_2c >> 0x1f) + (uint)CARRY4(local_90,local_2c)) -
                     (uint)(local_90 + local_2c == 0));
        if (local_4c != 0) {
          printf("%s","\n  Reserved GDT blocks at ");
          iVar2 = local_4c + local_2c + local_90;
          FUN_000121bc(local_2c + local_90,
                       ((int)local_2c >> 0x1f) + iStack_8c + (uint)CARRY4(local_2c,local_90),
                       iVar2 + -1,
                       (((int)local_4c >> 0x1f) +
                        ((int)local_2c >> 0x1f) + iStack_8c + (uint)CARRY4(local_2c,local_90) +
                       (uint)CARRY4(local_4c,local_2c + local_90)) - (uint)(iVar2 == 0));
        }
      }
      if (local_30 != 0) {
        local_70 = stdout;
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
          pcVar6 = stdout->_IO_write_base;
          stdout->_IO_write_base = pcVar6 + 1;
          *pcVar6 = '\n';
        }
        else {
          __fputc_unlocked(10,stdout);
        }
      }
      fwrite("  Block bitmap at ",1,0x12,stdout);
      uVar8 = FUN_00016a0c(param_1,local_1c);
      FUN_00012140((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      uVar8 = FUN_00016a0c(param_1,local_1c);
      uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_00012684(param_1,uVar3,(int)uVar8,uVar3,0,uVar12,local_58,local_60);
      iVar2 = FUN_00011f7c(*(undefined4 *)(param_1 + 0x10));
      if (iVar2 != 0) {
        uVar3 = FUN_00016994(param_1,local_1c);
        printf(", csum 0x%08x",uVar3);
      }
      pcVar6 = getenv("DUMPE2FS_IGNORE_80COL");
      if (pcVar6 == (char *)0x0) {
        fwrite(&DAT_00051d54,1,2,stdout);
      }
      else {
        fputc(0x2c,stdout);
      }
      fwrite(" Inode bitmap at ",1,0x11,stdout);
      uVar8 = FUN_00016ba0(param_1,local_1c);
      FUN_00012140((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      uVar8 = FUN_00016ba0(param_1,local_1c);
      uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_00012684(param_1,uVar3,(int)uVar8,uVar3,0,uVar12,local_58,local_60);
      iVar2 = FUN_00011f7c(*(undefined4 *)(param_1 + 0x10));
      if (iVar2 != 0) {
        uVar3 = FUN_00016b28(param_1,local_1c);
        printf(", csum 0x%08x",uVar3);
      }
      fwrite("\n  Inode table at ",1,0x12,stdout);
      uVar8 = FUN_00016cbc(param_1,local_1c);
      lVar11 = FUN_00016cbc(param_1,local_1c);
      iVar2 = (int)(lVar11 + (int)local_48);
      FUN_000121bc((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),iVar2 + -1,
                   (int)((ulonglong)(lVar11 + (int)local_48) >> 0x20) - (uint)(iVar2 == 0));
      uVar8 = FUN_00016cbc(param_1,local_1c);
      uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_00012684(param_1,uVar3,(int)uVar8,uVar3,1,uVar12,local_58,local_60);
      uVar12 = FUN_00016dd8(param_1,local_1c);
      uVar3 = FUN_00016ed4(param_1,local_1c);
      uVar4 = FUN_00016fd0(param_1,local_1c);
      iVar2 = FUN_000170cc(param_1,local_1c);
      if (iVar2 == 0) {
        uVar5 = 0x1d84;
      }
      else {
        uVar5 = 0x1d80;
      }
      printf("\n  %u free %s, %u free inodes, %u directories%s",uVar12,local_28,uVar3,uVar4,
             uVar5 | 0x50000);
      iVar2 = FUN_000170cc(param_1,local_1c);
      if (iVar2 != 0) {
        uVar12 = FUN_000170cc(param_1,local_1c);
        printf(", %u unused inodes\n",uVar12);
      }
      if (local_20 != (void *)0x0) {
        fwrite("  Free blocks: ",1,0xf,stdout);
        local_74 = FUN_00015abc(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),
                                local_38,iStack_34,local_40 << 3,local_20);
        if (local_74 == 0) {
          FUN_00012254(local_1c,local_20,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14),
                       1 << (*(uint *)(param_1 + 100) & 0xff));
        }
        else {
          FUN_00044854("list_desc",local_74,"while reading block bitmap");
        }
        local_78 = stdout;
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
          pcVar6 = stdout->_IO_write_base;
          stdout->_IO_write_base = pcVar6 + 1;
          *pcVar6 = '\n';
        }
        else {
          __fputc_unlocked(10,stdout);
        }
        uVar5 = *(uint *)(*(int *)(param_1 + 0x10) + 0x24);
        bVar7 = CARRY4(uVar5,local_38);
        local_38 = uVar5 + local_38;
        iStack_34 = iStack_34 + (uint)bVar7;
      }
      if (local_24 != (void *)0x0) {
        fwrite("  Free inodes: ",1,0xf,stdout);
        local_74 = FUN_000159a4(*(undefined4 *)(param_1 + 0x2c),local_24,local_3c,0,local_44 << 3,
                                local_24);
        if (local_74 == 0) {
          FUN_00012254(local_1c,local_24,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28),1,1);
        }
        else {
          FUN_00044854("list_desc",local_74,"while reading inode bitmap");
        }
        local_7c = stdout;
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
          pcVar6 = stdout->_IO_write_base;
          stdout->_IO_write_base = pcVar6 + 1;
          *pcVar6 = '\n';
        }
        else {
          __fputc_unlocked(10,stdout);
        }
        local_3c = local_3c + *(int *)(*(int *)(param_1 + 0x10) + 0x28);
      }
    }
    else {
      printf("%lu:%llu:",local_1c,(undefined4)local_58,local_58._4_4_);
      if (local_1c == 0) {
LAB_00012a4c:
        printf("%llu:");
      }
      else {
        if (local_88 != 0 || iStack_84 != 0) goto LAB_00012a4c;
        printf("-1:");
      }
      if (local_90 == 0 && iStack_8c == 0) {
        if (local_98 == 0 && iStack_94 == 0) {
          printf("-1:");
        }
        else {
          printf("%llu:");
        }
      }
      else {
        FUN_000121bc(local_90,iStack_8c,local_90 + local_2c + -1,
                     (iStack_8c + ((int)local_2c >> 0x1f) + (uint)CARRY4(local_90,local_2c)) -
                     (uint)(local_90 + local_2c == 0));
        putchar(0x3a);
      }
      uVar8 = FUN_00016a0c(param_1,local_1c);
      uVar9 = FUN_00016ba0(param_1,local_1c);
      uVar10 = FUN_00016cbc(param_1,local_1c);
      uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
      printf("%llu:%llu:%llu\n",uVar12,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
             (int)((ulonglong)uVar9 >> 0x20),(int)uVar10,uVar12);
    }
    local_1c = local_1c + 1;
  } while( true );
}



/* ===== FUN_0001348c @ 0001348c size=460 ===== */

void FUN_0001348c(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  FILE *local_18;
  int local_14;
  char *local_10;
  char *local_c;
  
  local_1c = 0;
  local_14 = FUN_0002bbf8(param_1,&local_1c);
  if (local_14 == 0) {
    local_14 = FUN_00014d30(local_1c,&local_20);
    if (local_14 == 0) {
      local_14 = 0;
      if (param_2 == 0) {
        local_c = "Bad blocks: %u";
        local_10 = ", %u";
      }
      else {
        local_10 = "%u\n";
        local_c = "%u\n";
      }
      while (iVar1 = FUN_00014e30(local_20,&local_24), iVar1 != 0) {
        pcVar2 = local_10;
        if (local_c != (char *)0x0) {
          pcVar2 = local_c;
        }
        printf(pcVar2,local_24);
        local_c = (char *)0x0;
      }
      FUN_00014ebc(local_20);
      if (param_2 == 0) {
        local_18 = stdout;
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
          pcVar2 = stdout->_IO_write_base;
          stdout->_IO_write_base = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __fputc_unlocked(10,stdout);
        }
      }
      FUN_0001cff0(local_1c);
    }
    else {
      FUN_00044854("ext2fs_badblocks_list_iterate_begin",local_14,&DAT_00051ce0,
                   "while printing bad block list");
    }
  }
  else {
    FUN_00044854("ext2fs_read_bb_inode",local_14,0);
  }
  return;
}



/* ===== FUN_00013658 @ 00013658 size=460 ===== */

void FUN_00013658(int param_1)

{
  uint32_t uVar1;
  uint32_t local_498 [256];
  undefined4 local_98;
  undefined1 auStack_94 [128];
  uint32_t *local_14;
  int local_10;
  undefined4 local_c;
  
  local_c = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe0);
  if ((*(uint *)(param_1 + 8) & 0x2000) == 0) {
    local_10 = FUN_00025ef4(param_1,local_c,auStack_94);
    if (local_10 != 0) {
      FUN_00044854(DAT_0006b1e8,local_10,&DAT_00051ce0,"while reading journal inode");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = FUN_0001b458(param_1,local_c,auStack_94,0,&local_98);
    if (local_10 != 0) {
      FUN_00044854(DAT_0006b1e8,local_10,&DAT_00051ce0,"while opening journal inode");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = FUN_0001bd74(local_98,local_498,0x400,0);
    if (local_10 != 0) {
      FUN_00044854(DAT_0006b1e8,local_10,&DAT_00051ce0,"while reading journal super block");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    FUN_0001bba0(local_98);
    local_14 = local_498;
    uVar1 = ntohl(local_498[0]);
    if (uVar1 != 0xc03b3998) {
      fwrite("Journal superblock magic number invalid!\n",1,0x29,stderr);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    FUN_00046c84(stdout,local_498,*(undefined4 *)(param_1 + 0x14),0);
  }
  return;
}



/* ===== FUN_00013824 @ 00013824 size=332 ===== */

void FUN_00013824(int param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t local_418 [256];
  uint32_t *local_18;
  int local_14;
  
  local_14 = FUN_00026ad4(*(undefined4 *)(param_1 + 4),0,
                          *(int *)(*(int *)(param_1 + 0x10) + 0x14) + 1,0,0xfffffc00,local_418);
  if (local_14 != 0) {
    FUN_00044854(DAT_0006b1e8,local_14,&DAT_00051ce0,"while reading journal superblock");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_18 = local_418;
  uVar1 = ntohl(0xc03b3998);
  if ((local_418[0] == uVar1) && (uVar2 = local_18[1], uVar1 = ntohl(4), uVar2 == uVar1)) {
    FUN_00046c84(stdout,local_418,*(undefined4 *)(param_1 + 0x14),0);
    return;
  }
  FUN_00044854(DAT_0006b1e8,0,&DAT_00051ce0,"Couldn\'t find journal superblock magic numbers");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013970 @ 00013970 size=820 ===== */

void FUN_00013970(char *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  char *local_28;
  char *local_24;
  size_t local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  
  local_18 = (char *)0x0;
  local_1c = 0;
  local_20 = strlen(param_1);
  local_24 = malloc(local_20 + 1);
  if (local_24 == (char *)0x0) {
    fwrite("Couldn\'t allocate memory to parse options!\n",1,0x2b,stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  strcpy(local_24,param_1);
  local_c = local_24;
  while ((local_c != (char *)0x0 && (*local_c != '\0'))) {
    local_28 = strchr(local_c,0x2c);
    local_10 = (char *)0x0;
    if (local_28 != (char *)0x0) {
      *local_28 = '\0';
      local_10 = local_28 + 1;
    }
    local_14 = strchr(local_c,0x3d);
    if (local_14 != (char *)0x0) {
      *local_14 = '\0';
      local_14 = local_14 + 1;
    }
    iVar1 = strcmp(local_c,"superblock");
    if ((iVar1 == 0) || (iVar1 = strcmp(local_c,"sb"), iVar1 == 0)) {
      if (local_14 == (char *)0x0) {
        local_1c = local_1c + 1;
        local_18 = local_c;
      }
      else {
        uVar2 = strtoul(local_14,&local_28,0);
        *param_2 = uVar2;
        param_2[1] = 0;
        if (*local_28 != '\0') {
          fprintf(stderr,"Invalid superblock parameter: %s\n",local_14);
          local_1c = local_1c + 1;
        }
      }
    }
    else {
      iVar1 = strcmp(local_c,"blocksize");
      if ((iVar1 == 0) || (iVar1 = strcmp(local_c,"bs"), iVar1 == 0)) {
        if (local_14 == (char *)0x0) {
          local_1c = local_1c + 1;
          local_18 = local_c;
        }
        else {
          uVar2 = strtoul(local_14,&local_28,0);
          *param_3 = uVar2;
          if (*local_28 != '\0') {
            fprintf(stderr,"Invalid blocksize parameter: %s\n",local_14);
            local_1c = local_1c + 1;
          }
        }
      }
      else {
        local_1c = local_1c + 1;
        local_18 = local_c;
      }
    }
    local_c = local_10;
  }
  if (local_1c == 0) {
    free(local_24);
    return;
  }
  pcVar3 = local_18;
  if (local_18 == (char *)0x0) {
    pcVar3 = "";
  }
  fprintf(stderr,
          "\nBad extended option(s) specified: %s\n\nExtended options are separated by commas, and may take an argument which\n\tis set off by an equals (\'=\') sign.\n\nValid extended options are:\n\tsuperblock=<superblock number>\n\tblocksize=<blocksize>\n"
          ,pcVar3);
  free(local_24);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013ca4 @ 00013ca4 size=1604 ===== */

void FUN_00013ca4(int param_1,char **param_2)

{
  char *pcVar1;
  FILE *__stream;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int local_44;
  undefined8 local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_40 = 0;
  local_44 = 0;
  local_1c = 0;
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  FUN_00044248(&DAT_00053fc8);
  fprintf(stderr,"dumpe2fs %s (%s)\n","1.43.9","8-Feb-2018");
  if ((param_1 != 0) && (*param_2 != (char *)0x0)) {
    DAT_0006b1e8 = *param_2;
  }
  while (local_30 = getopt(param_1,param_2,"bfghixVo:"), __stream = stderr, local_30 != -1) {
    switch(local_30) {
    case 0x56:
      uVar3 = FUN_00043be8(0x7f2bb700);
      fprintf(__stream,"\tUsing %s\n",uVar3);
                    /* WARNING: Subroutine does not return */
      exit(0);
    default:
      FUN_00012108();
      break;
    case 0x62:
      local_18 = local_18 + 1;
      break;
    case 0x66:
      local_20 = local_20 + 1;
      break;
    case 0x67:
      local_2c = local_2c + 1;
      break;
    case 0x68:
      local_28 = local_28 + 1;
      break;
    case 0x69:
      local_1c = local_1c + 1;
      break;
    case 0x6f:
      FUN_00013970(optarg,&local_40,&local_44);
      break;
    case 0x78:
      DAT_0006c0bc = DAT_0006c0bc + 1;
    }
  }
  if (param_1 + -1 != optind) {
    FUN_00012108();
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar4 = optind + 1;
  DAT_0006c0b8 = param_2[optind];
  local_24 = 0x29000;
  if (local_20 != 0) {
    local_24 = 0x29400;
  }
  local_30 = 0xffffffff;
  optind = iVar4;
  if (local_1c != 0) {
    local_24 = local_24 | 0x2000;
  }
  do {
    if (((int)local_40 == 0 && local_40._4_4_ == 0) || (local_44 != 0)) {
      local_14 = FUN_00029744(DAT_0006c0b8,local_24,(int)local_40,local_44,DAT_0006b264,&local_34);
    }
    else {
      for (local_44 = 0x400; local_44 < 0x10001; local_44 = local_44 << 1) {
        local_14 = FUN_00029744(DAT_0006c0b8,local_24,(int)local_40,local_44,DAT_0006b264,&local_34)
        ;
        if (local_14 == 0) break;
      }
    }
    if ((local_14 == 0) || ((local_24 & 0x200000) != 0)) {
      if ((local_14 == 0) && ((*(uint *)(local_34 + 8) & 0x200000) != 0)) {
        puts("\n*** Checksum errors detected in filesystem!  Run e2fsck now!\n");
      }
      local_24 = local_24 | 0x200000;
      if (local_14 != 0) {
        FUN_00044854(DAT_0006b1e8,local_14,"while trying to open %s",DAT_0006c0b8);
        puts("Couldn\'t find valid filesystem superblock.");
        if (local_14 == 0x7f2bb713) {
          FUN_00044b30(DAT_0006c0b8,4,0);
        }
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      *(undefined2 *)(local_34 + 0x68) = 2;
      iVar4 = FUN_00012030(*(undefined4 *)(local_34 + 0x10));
      if (iVar4 != 0) {
        DAT_0006c0c0 = 1;
      }
      if (local_18 == 0) {
        if (local_2c == 0) {
          FUN_00046bb8(*(undefined4 *)(local_34 + 0x10));
          iVar4 = FUN_00011fb8(*(undefined4 *)(local_34 + 0x10));
          if (iVar4 != 0) {
            FUN_00013824(local_34);
            FUN_0001866c(&local_34);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          iVar4 = FUN_00011ec8(*(undefined4 *)(local_34 + 0x10));
          if ((iVar4 != 0) && (*(int *)(*(int *)(local_34 + 0x10) + 0xe0) != 0)) {
            FUN_00013658(local_34);
          }
          FUN_0001348c(local_34,0);
          if (local_28 != 0) {
            FUN_0001866c(&local_34);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          *(uint *)(local_34 + 8) = *(uint *)(local_34 + 8) & 0xffdfffff;
          while ((local_14 = FUN_0002d044(local_34), local_14 != 0 &&
                 ((*(uint *)(local_34 + 8) & 0x200000) == 0))) {
            *(uint *)(local_34 + 8) = *(uint *)(local_34 + 8) | 0x200000;
          }
          if ((local_14 == 0) && ((*(uint *)(local_34 + 8) & 0x200000) != 0)) {
            puts("\n*** Checksum errors detected in bitmaps!  Run e2fsck now!\n");
          }
        }
        FUN_00012770(local_34,local_2c);
        pcVar2 = DAT_0006c0b8;
        pcVar1 = DAT_0006b1e8;
        if (local_14 != 0) {
          uVar3 = FUN_00043be8(local_14);
          printf("\n%s: %s: error reading bitmaps: %s\n",pcVar1,pcVar2,uVar3);
        }
      }
      else {
        FUN_0001348c(local_34,1);
      }
      FUN_0001866c(&local_34);
      FUN_00044338(&DAT_00053fc8);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    local_24 = local_24 | 0x200000;
  } while( true );
}



/* ===== FUN_00014390 @ 00014390 size=224 ===== */

void FUN_00014390(undefined4 *param_1)

{
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_10 = param_1;
  for (local_c = (undefined4 *)*param_1; local_c != (undefined4 *)0x0;
      local_c = (undefined4 *)*local_c) {
    if (*(undefined ***)local_c[1] == &PTR_s_EXT2FS_Library_version_1_43_9_00053cfc) {
      return;
    }
    local_10 = local_c;
  }
  local_c = malloc(8);
  if (local_c == (undefined4 *)0x0) {
    if (DAT_0006c0c8 != 0) {
      return;
    }
    local_c = &DAT_0006c0c4;
  }
  local_c[1] = &DAT_00053fc8;
  *local_c = 0;
  *local_10 = local_c;
  return;
}



/* ===== FUN_00014470 @ 00014470 size=324 ===== */

int FUN_00014470(int param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  undefined4 *local_10;
  int local_c;
  
  local_c = FUN_00021f74(0x14,&local_10);
  if (local_c == 0) {
    memset(local_10,0,0x14);
    *local_10 = 0x7f2bb702;
    if (param_1 == 0) {
      param_1 = 10;
    }
    local_10[2] = param_1;
    local_10[1] = param_2;
    local_c = FUN_00022038(local_10[2],4,local_10 + 3);
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
      FUN_00022158(&local_10);
    }
  }
  return local_c;
}



/* ===== FUN_000145b4 @ 000145b4 size=56 ===== */

undefined4 FUN_000145b4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00014470(param_2,0,0,param_1);
  return uVar1;
}



/* ===== FUN_000145ec @ 000145ec size=56 ===== */

undefined4 FUN_000145ec(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00014470(param_2,0,0,param_1);
  return uVar1;
}



/* ===== FUN_00014624 @ 00014624 size=112 ===== */

int FUN_00014624(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00014470(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 0xc),param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(*param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00014694 @ 00014694 size=48 ===== */

undefined4 FUN_00014694(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00014624(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000146c4 @ 000146c4 size=680 ===== */

int FUN_000146c4(int *param_1,uint param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  
  if (*param_1 == 0x7f2bb702) {
    if (param_1[2] <= param_1[1]) {
      iVar1 = param_1[2];
      param_1[2] = param_1[2] + 100;
      iVar1 = FUN_000221a4(iVar1 << 2,param_1[2] << 2,param_1 + 3);
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



/* ===== FUN_0001496c @ 0001496c size=48 ===== */

undefined4 FUN_0001496c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000146c4(param_1,param_2);
  return uVar1;
}



/* ===== FUN_0001499c @ 0001499c size=376 ===== */

uint FUN_0001499c(int *param_1,uint param_2)

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



/* ===== FUN_00014b14 @ 00014b14 size=68 ===== */

bool FUN_00014b14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001499c(param_1,param_2);
  return -1 < iVar1;
}



/* ===== FUN_00014b58 @ 00014b58 size=48 ===== */

undefined4 FUN_00014b58(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00014b14(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00014b88 @ 00014b88 size=216 ===== */

undefined4 FUN_00014b88(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_c = FUN_0001499c(param_1,param_2);
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



/* ===== FUN_00014c60 @ 00014c60 size=44 ===== */

void FUN_00014c60(undefined4 param_1,undefined4 param_2)

{
  FUN_00014b88(param_1,param_2);
  return;
}



/* ===== FUN_00014c8c @ 00014c8c size=164 ===== */

int FUN_00014c8c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *local_10 [2];
  
  if (*param_1 == 0x7f2bb702) {
    iVar1 = FUN_00021f74(0xc,local_10);
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



/* ===== FUN_00014d30 @ 00014d30 size=48 ===== */

undefined4 FUN_00014d30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00014c8c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00014d60 @ 00014d60 size=208 ===== */

undefined4 FUN_00014d60(int *param_1,undefined4 *param_2)

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



/* ===== FUN_00014e30 @ 00014e30 size=48 ===== */

undefined4 FUN_00014e30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00014d60(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00014e60 @ 00014e60 size=92 ===== */

void FUN_00014e60(int *param_1)

{
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb703)) {
    param_1[1] = 0;
    local_c = param_1;
    FUN_00022158(&local_c);
  }
  return;
}



/* ===== FUN_00014ebc @ 00014ebc size=36 ===== */

void FUN_00014ebc(undefined4 param_1)

{
  FUN_00014e60(param_1);
  return;
}



/* ===== FUN_00014ee0 @ 00014ee0 size=196 ===== */

undefined4 FUN_00014ee0(int *param_1,int *param_2)

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



/* ===== FUN_00014fa4 @ 00014fa4 size=48 ===== */

undefined4 FUN_00014fa4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00014ee0(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00014ffc @ 00014ffc size=36 ===== */

void FUN_00014ffc(undefined4 param_1)

{
  FUN_0001ef20(param_1);
  return;
}



/* ===== FUN_00015020 @ 00015020 size=36 ===== */

void FUN_00015020(undefined4 param_1)

{
  FUN_0001ef20(param_1);
  return;
}



/* ===== FUN_00015044 @ 00015044 size=48 ===== */

undefined4 FUN_00015044(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f08c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00015074 @ 00015074 size=36 ===== */

void FUN_00015074(undefined4 param_1)

{
  FUN_00020214(param_1);
  return;
}



/* ===== FUN_00015098 @ 00015098 size=388 ===== */

/* WARNING: Removing unreachable block (ram,0x000151c0) */

undefined4 FUN_00015098(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == 0x7f2bb701) {
    param_1[0xf] = (int)FUN_0002d0cc;
    iVar2 = param_1[7] * *(int *)(param_1[4] + 0x28);
    if ((param_1[2] & 0x20000U) == 0) {
      uVar1 = FUN_0001d1e4(0x7f2bb709,param_1,1,*(undefined4 *)param_1[4],iVar2,param_2,0,param_3);
    }
    else {
      uVar1 = FUN_0001eb24(param_1,0x7f2bb76f,(short)param_1[0x1a],0,1,0,*(undefined4 *)param_1[4],0
                           ,iVar2,0,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x7f2bb701;
  }
  return uVar1;
}



/* ===== FUN_0001521c @ 0001521c size=496 ===== */

undefined4 FUN_0001521c(int *param_1,undefined4 param_2,undefined4 param_3)

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
    param_1[0xf] = (int)FUN_0002d0cc;
    uVar1 = *(uint *)(param_1[4] + 0x14) >> (param_1[0x19] & 0xffU);
    uVar9 = FUN_000165b0(param_1[4]);
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
        uVar6 = FUN_0001d1e4(0x7f2bb708,param_1,uVar1,uVar4,iVar5,param_2,0,param_3);
      }
      else {
        uVar6 = 0x7f2bb789;
      }
    }
    else {
      uVar6 = FUN_0001eb24(param_1,0x7f2bb76e,(short)param_1[0x1a],0,uVar1,0,uVar4,uVar7,iVar5,iVar8
                           ,param_2,param_3);
    }
  }
  else {
    uVar6 = 0x7f2bb701;
  }
  return uVar6;
}



/* ===== FUN_0001540c @ 0001540c size=420 ===== */

int FUN_0001540c(int *param_1,undefined4 param_2,int *param_3)

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
    param_1[0xf] = (int)FUN_0002d0cc;
    if (param_1[0x19] == 0) {
      iVar2 = FUN_0001521c(param_1,param_2,param_3);
    }
    else if ((param_1[2] & 0x20000U) == 0) {
      iVar2 = 0x7f2bb789;
    }
    else {
      local_18 = *(undefined4 *)(param_1[4] + 0x14);
      uStack_14 = 0;
      uVar3 = FUN_000165b0(param_1[4]);
      local_20 = (int)uVar3 + -1;
      iStack_1c = (int)((ulonglong)uVar3 >> 0x20) - (uint)((int)uVar3 == 0);
      lVar1 = (ulonglong)(uint)param_1[7] * (ulonglong)*(uint *)(param_1[4] + 0x20) +
              CONCAT44(uStack_14,local_18);
      iVar2 = (int)lVar1;
      local_28 = iVar2 + -1;
      iStack_24 = (int)((ulonglong)lVar1 >> 0x20) - (uint)(iVar2 == 0);
      iVar2 = FUN_0001eb24(param_1,0x7f2bb76e,(short)param_1[0x1a],uStack_14,local_18,uStack_14,
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



/* ===== FUN_000155b0 @ 000155b0 size=128 ===== */

int FUN_000155b0(int *param_1)

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



/* ===== FUN_00015630 @ 00015630 size=104 ===== */

undefined4 FUN_00015630(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_18 [4];
  
  uVar1 = FUN_0001f46c(param_1,0x7f2bb734,param_2,0,local_18);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_18[0];
  }
  return uVar1;
}



/* ===== FUN_00015698 @ 00015698 size=76 ===== */

undefined4 FUN_00015698(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001dce0(param_1,0x7f2bb708,0x7f2bb733,param_2,param_3);
  return uVar1;
}



/* ===== FUN_000156e4 @ 000156e4 size=64 ===== */

undefined4
FUN_000156e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f46c(param_1,0x7f2bb733,param_3,param_4,param_5);
  return uVar1;
}



/* ===== FUN_00015724 @ 00015724 size=36 ===== */

void FUN_00015724(undefined4 param_1)

{
  FUN_0001f7c0(param_1);
  return;
}



/* ===== FUN_00015748 @ 00015748 size=36 ===== */

void FUN_00015748(undefined4 param_1)

{
  FUN_0001f7c0(param_1);
  return;
}



/* ===== FUN_0001576c @ 0001576c size=64 ===== */

undefined4 FUN_0001576c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001dd70(0x7f2bb709,param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_000157ac @ 000157ac size=56 ===== */

undefined4
FUN_000157ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f35c(param_5,param_2,param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_000157e4 @ 000157e4 size=64 ===== */

undefined4 FUN_000157e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001dd70(0x7f2bb708,param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00015824 @ 00015824 size=56 ===== */

undefined4
FUN_00015824(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f35c(param_5,param_2,param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0001585c @ 0001585c size=56 ===== */

undefined4 FUN_0001585c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020010(0x7f2bb738,param_1,param_2);
  return uVar1;
}



/* ===== FUN_00015894 @ 00015894 size=56 ===== */

undefined4 FUN_00015894(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020010(0x7f2bb739,param_1,param_2);
  return uVar1;
}



/* ===== FUN_000158cc @ 000158cc size=76 ===== */

undefined4 FUN_000158cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e1fc(param_1,0x7f2bb709,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00015918 @ 00015918 size=64 ===== */

undefined4
FUN_00015918(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fd30(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_00015958 @ 00015958 size=76 ===== */

undefined4 FUN_00015958(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e13c(param_1,0x7f2bb709,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_000159a4 @ 000159a4 size=64 ===== */

undefined4
FUN_000159a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fea0(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_000159e4 @ 000159e4 size=76 ===== */

undefined4 FUN_000159e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e1fc(param_1,0x7f2bb708,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00015a30 @ 00015a30 size=64 ===== */

undefined4
FUN_00015a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fd30(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_00015a70 @ 00015a70 size=76 ===== */

undefined4 FUN_00015a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e13c(param_1,0x7f2bb708,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00015abc @ 00015abc size=64 ===== */

undefined4
FUN_00015abc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fea0(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_00015afc @ 00015afc size=152 ===== */

uint FUN_00015afc(uint param_1,int param_2)

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



/* ===== FUN_00015b94 @ 00015b94 size=160 ===== */

uint FUN_00015b94(uint param_1,int param_2)

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



/* ===== FUN_00015c34 @ 00015c34 size=104 ===== */

uint FUN_00015c34(uint param_1,int param_2)

{
  return 1 << (param_1 & 7) & (uint)*(byte *)(param_2 + (param_1 >> 3));
}



/* ===== FUN_00015c9c @ 00015c9c size=108 ===== */

void FUN_00015c9c(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00044854(0,param_1,&DAT_00053fe0,param_2);
  }
  else {
    FUN_00044854(0,param_1,"#%lu for %s",param_2,param_3);
  }
  return;
}



/* ===== FUN_00015d08 @ 00015d08 size=160 ===== */

uint FUN_00015d08(uint param_1,int param_2,int param_3)

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



/* ===== FUN_00015da8 @ 00015da8 size=168 ===== */

uint FUN_00015da8(uint param_1,int param_2,int param_3)

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



/* ===== FUN_00015e50 @ 00015e50 size=112 ===== */

uint FUN_00015e50(uint param_1,int param_2,int param_3)

{
  return 1 << (param_1 & 7) & (uint)*(byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
}



/* ===== FUN_00015ec0 @ 00015ec0 size=104 ===== */

uint FUN_00015ec0(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55);
  uVar1 = (param_1 & 0x33) + (param_1 >> 2 & 0x33);
  return (uVar1 >> 4) + uVar1 & 0xf;
}



/* ===== FUN_00015f28 @ 00015f28 size=180 ===== */

uint FUN_00015f28(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55555555);
  uVar1 = (param_1 & 0x33333333) + (param_1 >> 2 & 0x33333333);
  uVar1 = (uVar1 >> 4) + uVar1 & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  return (uVar1 >> 0x10) + uVar1 & 0xff;
}



/* ===== FUN_00015fdc @ 00015fdc size=288 ===== */

int FUN_00015fdc(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint local_20;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_14 = 0;
  local_c = param_1;
  for (local_20 = param_2; (((uint)local_c & 3) != 0 && (local_20 != 0)); local_20 = local_20 - 1) {
    iVar1 = FUN_00015ec0(*(undefined1 *)local_c);
    local_14 = local_14 + iVar1;
    local_c = (undefined4 *)((int)local_c + 1);
  }
  local_10 = local_c;
  for (; 4 < local_20; local_20 = local_20 - 4) {
    iVar1 = FUN_00015f28(*local_10);
    local_14 = local_14 + iVar1;
    local_10 = local_10 + 1;
  }
  local_c = local_10;
  for (; local_20 != 0; local_20 = local_20 - 1) {
    iVar1 = FUN_00015ec0(*(undefined1 *)local_c);
    local_14 = local_14 + iVar1;
    local_c = (undefined4 *)((int)local_c + 1);
  }
  return local_14;
}



/* ===== FUN_000160fc @ 000160fc size=60 ===== */

bool FUN_000160fc(int param_1)

{
  return (*(uint *)(param_1 + 100) & 2) != 0;
}



/* ===== FUN_00016138 @ 00016138 size=52 ===== */

void FUN_00016138(int param_1)

{
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
  return;
}



/* ===== FUN_0001616c @ 0001616c size=60 ===== */

bool FUN_0001616c(int param_1)

{
  return (*(uint *)(param_1 + 100) & 8) != 0;
}



/* ===== FUN_000161a8 @ 000161a8 size=60 ===== */

bool FUN_000161a8(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x80) != 0;
}



/* ===== FUN_000161e4 @ 000161e4 size=64 ===== */

bool FUN_000161e4(uint param_1,int param_2)

{
  return param_2 != 0 || 0x7fffffff < param_1;
}



/* ===== FUN_00016224 @ 00016224 size=108 ===== */

undefined4 FUN_00016224(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
  uVar1 = FUN_00051964(param_3 - uVar2,param_4 - (uint)(param_3 < uVar2),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),0);
  return uVar1;
}



/* ===== FUN_00016290 @ 00016290 size=120 ===== */

longlong FUN_00016290(int param_1,uint param_2)

{
  return (ulonglong)param_2 * (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x20) +
         (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x14);
}



/* ===== FUN_00016308 @ 00016308 size=148 ===== */

longlong FUN_00016308(int param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == *(int *)(param_1 + 0x1c) + -1) {
    uVar1 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
    lVar2 = CONCAT44((int)((ulonglong)uVar1 >> 0x20) - (uint)((int)uVar1 == 0),(int)uVar1 + -1);
  }
  else {
    lVar2 = FUN_00016290(param_1,param_2);
    lVar2 = lVar2 + (ulonglong)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) - 1);
  }
  return lVar2;
}



/* ===== FUN_0001639c @ 0001639c size=192 ===== */

int FUN_0001639c(int param_1,int param_2)

{
  int extraout_r2;
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_c;
  
  if (param_2 == *(int *)(param_1 + 0x1c) + -1) {
    uVar2 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
    uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
    FUN_00051964((uint)uVar2 - uVar1,(int)((ulonglong)uVar2 >> 0x20) - (uint)((uint)uVar2 < uVar1),
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



/* ===== FUN_0001645c @ 0001645c size=208 ===== */

undefined8 FUN_0001645c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x1c);
  iVar1 = FUN_0001616c(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_0001652c @ 0001652c size=132 ===== */

undefined8 FUN_0001652c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = FUN_0001616c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(param_2 + 0x74);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_000165b0 @ 000165b0 size=120 ===== */

undefined8 FUN_000165b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = FUN_000161a8(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x150);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_00016628 @ 00016628 size=84 ===== */

void FUN_00016628(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = param_3;
  iVar1 = FUN_000161a8(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x150) = param_4;
  }
  return;
}



/* ===== FUN_0001667c @ 0001667c size=72 ===== */

void FUN_0001667c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_000165b0(param_1);
  lVar1 = lVar2 + CONCAT44(param_4,param_3);
  FUN_00016628(param_1,(int)((ulonglong)lVar2 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}



/* ===== FUN_000166c4 @ 000166c4 size=120 ===== */

undefined8 FUN_000166c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  iVar1 = FUN_000161a8(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x154);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_0001673c @ 0001673c size=84 ===== */

void FUN_0001673c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar1 = FUN_000161a8(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x154) = param_4;
  }
  return;
}



/* ===== FUN_00016790 @ 00016790 size=72 ===== */

void FUN_00016790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_000166c4(param_1);
  lVar1 = lVar2 + CONCAT44(param_4,param_3);
  FUN_0001673c(param_1,(int)((ulonglong)lVar2 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}



/* ===== FUN_000167d8 @ 000167d8 size=120 ===== */

undefined8 FUN_000167d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_000161a8(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x158);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_00016850 @ 00016850 size=84 ===== */

void FUN_00016850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = param_3;
  iVar1 = FUN_000161a8(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x158) = param_4;
  }
  return;
}



/* ===== FUN_000168a4 @ 000168a4 size=72 ===== */

void FUN_000168a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_000167d8(param_1);
  lVar1 = lVar2 + CONCAT44(param_4,param_3);
  FUN_00016850(param_1,(int)((ulonglong)lVar2 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}



/* ===== FUN_000168ec @ 000168ec size=112 ===== */

int FUN_000168ec(int param_1,int param_2,int param_3)

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



/* ===== FUN_0001695c @ 0001695c size=56 ===== */

undefined4 FUN_0001695c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000168ec(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00016994 @ 00016994 size=120 ===== */

uint FUN_00016994(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  local_c = (uint)*(ushort *)(iVar1 + 0x18);
  if (0x39 < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
    local_c = CONCAT22(*(undefined2 *)(iVar1 + 0x38),*(ushort *)(iVar1 + 0x18));
  }
  return local_c;
}



/* ===== FUN_00016a0c @ 00016a0c size=160 ===== */

undefined8 FUN_00016a0c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar3 = *puVar1;
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = puVar1[8];
  }
  return CONCAT44(uVar4,uVar3);
}



/* ===== FUN_00016aac @ 00016aac size=124 ===== */

void FUN_00016aac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *puVar1 = param_3;
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    puVar1[8] = param_4;
  }
  return;
}



/* ===== FUN_00016b28 @ 00016b28 size=120 ===== */

uint FUN_00016b28(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  local_c = (uint)*(ushort *)(iVar1 + 0x1a);
  if (0x3b < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
    local_c = CONCAT22(*(undefined2 *)(iVar1 + 0x3a),*(ushort *)(iVar1 + 0x1a));
  }
  return local_c;
}



/* ===== FUN_00016ba0 @ 00016ba0 size=160 ===== */

undefined8 FUN_00016ba0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar3 = *(undefined4 *)(iVar1 + 4);
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x24);
  }
  return CONCAT44(uVar4,uVar3);
}



/* ===== FUN_00016c40 @ 00016c40 size=124 ===== */

void FUN_00016c40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined4 *)(iVar1 + 4) = param_3;
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0x24) = param_4;
  }
  return;
}



/* ===== FUN_00016cbc @ 00016cbc size=160 ===== */

undefined8 FUN_00016cbc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar3 = *(undefined4 *)(iVar1 + 8);
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
  }
  return CONCAT44(uVar4,uVar3);
}



/* ===== FUN_00016d5c @ 00016d5c size=124 ===== */

void FUN_00016d5c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined4 *)(iVar1 + 8) = param_3;
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = param_4;
  }
  return;
}



/* ===== FUN_00016dd8 @ 00016dd8 size=124 ===== */

uint FUN_00016dd8(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0xc);
  iVar3 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x2c) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_00016e54 @ 00016e54 size=128 ===== */

void FUN_00016e54(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0xc) = (short)param_3;
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x2c) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_00016ed4 @ 00016ed4 size=124 ===== */

uint FUN_00016ed4(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0xe);
  iVar3 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x2e) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_00016f50 @ 00016f50 size=128 ===== */

void FUN_00016f50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0xe) = (short)param_3;
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x2e) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_00016fd0 @ 00016fd0 size=124 ===== */

uint FUN_00016fd0(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0x10);
  iVar3 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x30) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_0001704c @ 0001704c size=128 ===== */

void FUN_0001704c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0x10) = (short)param_3;
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x30) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_000170cc @ 000170cc size=124 ===== */

uint FUN_000170cc(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  uVar1 = *(ushort *)(iVar2 + 0x1c);
  iVar3 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x32) << 0x10;
  }
  return uVar4 | uVar1;
}



/* ===== FUN_00017148 @ 00017148 size=128 ===== */

void FUN_00017148(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(short *)(iVar1 + 0x1c) = (short)param_3;
  iVar2 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    *(short *)(iVar1 + 0x32) = (short)((uint)param_3 >> 0x10);
  }
  return;
}



/* ===== FUN_000171c8 @ 000171c8 size=68 ===== */

undefined2 FUN_000171c8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  return *(undefined2 *)(iVar1 + 0x12);
}



/* ===== FUN_0001720c @ 0001720c size=72 ===== */

void FUN_0001720c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined2 *)(iVar1 + 0x12) = 0;
  return;
}



/* ===== FUN_00017254 @ 00017254 size=88 ===== */

ushort FUN_00017254(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  return param_3 & *(ushort *)(iVar1 + 0x12);
}



/* ===== FUN_000172ac @ 000172ac size=96 ===== */

void FUN_000172ac(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(ushort *)(iVar1 + 0x12) = *(ushort *)(iVar1 + 0x12) | param_3;
  return;
}



/* ===== FUN_0001730c @ 0001730c size=112 ===== */

void FUN_0001730c(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(ushort *)(iVar1 + 0x12) = ~param_3 & *(ushort *)(iVar1 + 0x12);
  return;
}



/* ===== FUN_0001737c @ 0001737c size=68 ===== */

undefined2 FUN_0001737c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  return *(undefined2 *)(iVar1 + 0x1e);
}



/* ===== FUN_000173c0 @ 000173c0 size=80 ===== */

void FUN_000173c0(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001695c(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined2 *)(iVar1 + 0x1e) = param_3;
  return;
}



/* ===== FUN_00017410 @ 00017410 size=148 ===== */

undefined8 FUN_00017410(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uStack_14 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    uStack_14 = (uint)*(ushort *)(param_2 + 0x76);
  }
  return CONCAT44(uStack_14,uVar2);
}



/* ===== FUN_000174a4 @ 000174a4 size=112 ===== */

void FUN_000174a4(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x68) = param_3;
  if ((param_1 != 0) && (iVar1 = FUN_000161a8(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    *(undefined2 *)(param_2 + 0x76) = param_4;
  }
  return;
}



/* ===== FUN_00017514 @ 00017514 size=244 ===== */

undefined4 FUN_00017514(int param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*param_2 & 0xf000) == 0x8000) || (param_4 == 0)) {
    if ((((*param_2 & 0xf000) == 0x8000) && (iVar1 = FUN_000161e4(param_3,param_4), iVar1 != 0)) &&
       ((iVar1 = FUN_000160fc(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0 ||
        (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0)))) {
      FUN_00016138(*(undefined4 *)(param_1 + 0x10));
      FUN_00017f44(param_1);
      FUN_00022214(param_1);
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



/* ===== FUN_00017608 @ 00017608 size=60 ===== */

bool FUN_00017608(int param_1)

{
  return (*(uint *)(param_1 + 0x5c) & 0x200) != 0;
}



/* ===== FUN_00017644 @ 00017644 size=60 ===== */

bool FUN_00017644(int param_1)

{
  return (*(uint *)(param_1 + 100) & 1) != 0;
}



/* ===== FUN_00017680 @ 00017680 size=52 ===== */

void FUN_00017680(int param_1)

{
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffb;
  return;
}



/* ===== FUN_000176b4 @ 000176b4 size=60 ===== */

bool FUN_000176b4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 8) != 0;
}



/* ===== FUN_000176f0 @ 000176f0 size=60 ===== */

bool FUN_000176f0(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x10) != 0;
}



/* ===== FUN_0001772c @ 0001772c size=140 ===== */

undefined4 FUN_0001772c(uint param_1,uint param_2)

{
  int extraout_r1;
  uint local_c;
  
  local_c = param_1;
  while( true ) {
    if (local_c < param_2) {
      return 0;
    }
    if (local_c == param_2) break;
    FUN_00051488(local_c,param_2);
    if (extraout_r1 != 0) {
      return 0;
    }
    local_c = FUN_000513e0(local_c,param_2);
  }
  return 1;
}



/* ===== FUN_000177b8 @ 000177b8 size=300 ===== */

undefined4 FUN_000177b8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00017608(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      if ((param_2 < 2) || (iVar1 = FUN_00017644(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
        uVar2 = 1;
      }
      else if ((param_2 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_0001772c(param_2,3);
        if (((iVar1 == 0) && (iVar1 = FUN_0001772c(param_2,5), iVar1 == 0)) &&
           (iVar1 = FUN_0001772c(param_2,7), iVar1 == 0)) {
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



/* ===== FUN_000178e4 @ 000178e4 size=732 ===== */

undefined4
FUN_000178e4(int param_1,undefined4 param_2,longlong *param_3,longlong *param_4,longlong *param_5,
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
  lVar8 = FUN_00016290(param_1,param_2);
  if ((lVar8 == 0) && (*(int *)(param_1 + 0x14) == 0x400)) {
    lVar8 = 1;
  }
  iVar3 = FUN_000176f0(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    local_38 = *(int *)(param_1 + 0x20) + (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0xce);
  }
  else {
    local_38 = *(int *)(*(int *)(param_1 + 0x10) + 0x104);
  }
  local_3c = FUN_000177b8(param_1,param_2);
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
  iVar3 = FUN_000514a8(0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0xff),uVar6);
  uVar4 = FUN_000513e0(param_2,iVar3);
  iVar5 = FUN_000176f0(*(undefined4 *)(param_1 + 0x10));
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
    FUN_00051488(param_2,iVar3);
    if ((extraout_r1 == 0) ||
       ((FUN_00051488(param_2,iVar3), extraout_r1_00 == 1 ||
        (FUN_00051488(param_2,iVar3), lVar1 = 0, extraout_r1_01 == iVar3 + -1)))) {
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



/* ===== FUN_00017bc0 @ 00017bc0 size=332 ===== */

int FUN_00017bc0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
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
  
  FUN_000178e4(param_1,param_2,local_18,local_20,local_28,&local_2c);
  local_c = FUN_0001639c(param_1,param_2);
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
    local_10 = FUN_000514a8(0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0xff),uVar2);
    uVar1 = FUN_000513e0(param_2,local_10);
    *param_6 = uVar1;
  }
  return (local_c - (*(int *)(param_1 + 0x28) + local_2c)) + -2;
}



/* ===== FUN_00017d0c @ 00017d0c size=568 ===== */

int FUN_00017d0c(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  if ((*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) == 0) || (*(int *)(param_1 + 0x54) == 0)
     ) {
LAB_00017d54:
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x10))(*(undefined4 *)(param_1 + 4),0x400);
    iVar1 = FUN_00026ba0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),1,0,0xfffffc00,
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
        iVar2 = FUN_00026a44(*(undefined4 *)(param_1 + 4),(iVar2 + 0x200) * 2,(local_c - iVar2) * 2,
                             (void *)((int)param_2 + iVar2 * 2));
        if (iVar2 == 0x7f2bb750) goto LAB_00017d54;
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



/* ===== FUN_00017f44 @ 00017f44 size=100 ===== */

void FUN_00017f44(int param_1)

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



/* ===== FUN_00017fa8 @ 00017fa8 size=160 ===== */

int FUN_00017fa8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = param_2;
  if (0xffff < param_2) {
    local_c = 0xffff;
  }
  *(short *)(param_5 + 0x5a) = (short)local_c;
  iVar1 = FUN_00018d3c(param_1,param_5);
  if (iVar1 == 0) {
    iVar1 = FUN_00026ba0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4,
                         0xfffffc00,param_5);
  }
  return iVar1;
}



/* ===== FUN_00018048 @ 00018048 size=44 ===== */

undefined4 FUN_00018048(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018074(param_1,0);
  return uVar1;
}



/* ===== FUN_00018074 @ 00018074 size=1528 ===== */

int FUN_00018074(int *param_1,uint param_2)

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
      FUN_00017680(param_1[4]);
      local_24 = param_1[4];
      local_28 = param_1[9];
      iVar1 = FUN_000176b4(param_1[4]);
      if (iVar1 == 0) {
        local_34 = local_28;
        iVar1 = FUN_000176f0(param_1[4]);
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
          FUN_000178e4(param_1,local_14,&local_50,&local_58,&local_60,0);
          if (((((param_1[2] & 0x200U) == 0) && (local_14 != 0)) &&
              (local_50 != 0 || iStack_4c != 0)) &&
             (local_18 = FUN_00017fa8(param_1,local_14,local_50,iStack_4c,local_24), local_18 != 0))
          goto LAB_00018648;
          if ((param_1[2] & 0x800U) == 0) {
            if (((local_58 != 0 || iStack_54 != 0) &&
                (((param_1[2] & 0x200U) == 0 || (local_14 == 0)))) &&
               (local_18 = FUN_00026ba0(param_1[1],local_20,local_58,iStack_54,local_20,local_34),
               local_18 != 0)) goto LAB_00018648;
            if (local_60 != 0 || iStack_5c != 0) {
              if ((*(uint *)(param_1[4] + 0x60) & 0x80) == 0) {
                uVar3 = 0x20;
              }
              else {
                uVar3 = *(undefined2 *)(param_1[4] + 0xfe);
              }
              uVar2 = FUN_000514a8(0x400 << (*(uint *)(param_1[4] + 0x18) & 0xff),uVar3);
              local_38 = FUN_000513e0(local_14,uVar2);
              local_18 = FUN_00026ba0(param_1[1],1,local_60,iStack_5c,1,
                                      local_34 + local_38 * param_1[5]);
              if (local_18 != 0) goto LAB_00018648;
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
      local_18 = FUN_00018d3c(param_1,local_24);
      if (local_18 != 0) {
        return local_18;
      }
      iVar1 = 0;
      if (((((param_2 & 1) != 0) ||
           (local_18 = (**(code **)(*(int *)(param_1[1] + 4) + 0x1c))(param_1[1]), iVar1 = local_18,
           local_18 == 0)) &&
          (local_18 = iVar1, local_18 = FUN_00017d0c(param_1,local_24), local_18 == 0)) &&
         (param_1[2] = param_1[2] & 0xfffffffb, (param_2 & 1) == 0)) {
        local_18 = (**(code **)(*(int *)(param_1[1] + 4) + 0x1c))(param_1[1]);
      }
    }
LAB_00018648:
    *(short *)(param_1[4] + 0x3a) = (short)local_2c;
  }
  else {
    local_18 = 0x7f2bb701;
  }
  return local_18;
}



/* ===== FUN_0001866c @ 0001866c size=92 ===== */

int FUN_0001866c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = FUN_000186f4(uVar2,0);
  if (iVar1 != 0) {
    FUN_0001ccf8(uVar2);
  }
  *param_1 = 0;
  return iVar1;
}



/* ===== FUN_000186c8 @ 000186c8 size=44 ===== */

undefined4 FUN_000186c8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000186f4(param_1,0);
  return uVar1;
}



/* ===== FUN_000186f4 @ 000186f4 size=596 ===== */

int FUN_000186f4(int *param_1,undefined4 param_2)

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
          uVar2 = FUN_000513e0(local_18,(uint)param_1[5] >> 10);
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
      if ((((param_1[2] & 4U) == 0) || (local_14 = FUN_00018074(param_1,param_2), local_14 == 0)) &&
         (local_14 = FUN_00028fa8(param_1), local_14 == 0)) {
        FUN_0001ccf8(param_1);
        local_14 = 0;
      }
    }
  }
  else {
    local_14 = 0x7f2bb701;
  }
  return local_14;
}



/* ===== FUN_00018948 @ 00018948 size=60 ===== */

bool FUN_00018948(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_00018984 @ 00018984 size=60 ===== */

bool FUN_00018984(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_000189c0 @ 000189c0 size=60 ===== */

bool FUN_000189c0(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x2000) != 0;
}



/* ===== FUN_000189fc @ 000189fc size=96 ===== */

undefined4 FUN_000189fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00018948(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00018a5c @ 00018a5c size=148 ===== */

void FUN_00018a5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000189c0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      uVar2 = FUN_00038438(0xffffffff,*(int *)(param_1 + 0x10) + 0x68,0x10);
      *(undefined4 *)(param_1 + 0xa8) = uVar2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x270);
  }
  return;
}



/* ===== FUN_00018af0 @ 00018af0 size=68 ===== */

undefined4 FUN_00018af0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038438(*(undefined4 *)(param_1 + 0xa8),param_2,0x3fc);
  return uVar1;
}



/* ===== FUN_00018b34 @ 00018b34 size=112 ===== */

bool FUN_00018b34(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_00018af0(param_1,param_2);
    bVar2 = iVar1 == *(int *)(param_2 + 0x3fc);
  }
  return bVar2;
}



/* ===== FUN_00018ba4 @ 00018ba4 size=100 ===== */

undefined4 FUN_00018ba4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    uVar2 = FUN_00018af0(param_1,param_2);
    *(undefined4 *)(param_2 + 0x3fc) = uVar2;
  }
  return 0;
}



/* ===== FUN_00018c08 @ 00018c08 size=92 ===== */

bool FUN_00018c08(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)(param_2 + 0x175) == '\x01';
  }
  return bVar2;
}



/* ===== FUN_00018c64 @ 00018c64 size=64 ===== */

undefined4 FUN_00018c64(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038438(0xffffffff,param_2,0x3fc,0x3fc,param_2,param_1);
  return uVar1;
}



/* ===== FUN_00018ca4 @ 00018ca4 size=152 ===== */

bool FUN_00018ca4(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 100) & 0x400) == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_00018c64(param_1,param_2);
    bVar2 = iVar1 == *(int *)(param_2 + 0x3fc);
  }
  return bVar2;
}



/* ===== FUN_00018d3c @ 00018d3c size=140 ===== */

undefined4 FUN_00018d3c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 100) & 0x400) != 0) {
    uVar1 = FUN_00018c64(param_1,param_2);
    *(undefined4 *)(param_2 + 0x3fc) = uVar1;
  }
  return 0;
}



/* ===== FUN_00018dc8 @ 00018dc8 size=168 ===== */

undefined4
FUN_00018dc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
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
  uVar1 = FUN_00038438(*(undefined4 *)(param_1 + 0xa8),&local_20,8);
  *param_6 = uVar1;
  uVar1 = FUN_00038438(*param_6,local_c,*(undefined4 *)(local_14 + 0x14));
  *param_6 = uVar1;
  *(undefined4 *)(param_5 + 0x10) = local_10;
  return 0;
}



/* ===== FUN_00018e70 @ 00018e70 size=156 ===== */

bool FUN_00018e70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int local_10 [2];
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_00018dc8(param_1,param_2,param_3,param_4,param_5,local_10);
    if (iVar1 == 0) {
      bVar2 = *(int *)(param_5 + 0x10) == local_10[0];
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



/* ===== FUN_00018f0c @ 00018f0c size=144 ===== */

int FUN_00018f0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 local_10 [2];
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00018dc8(param_1,param_2,param_3,param_4,param_5,local_10);
    if (iVar1 == 0) {
      *(undefined4 *)(param_5 + 0x10) = local_10[0];
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00018f9c @ 00018f9c size=40 ===== */

undefined2 FUN_00018f9c(undefined2 param_1)

{
  return param_1;
}



/* ===== FUN_00018fc4 @ 00018fc4 size=40 ===== */

undefined2 FUN_00018fc4(undefined2 param_1)

{
  return param_1;
}



/* ===== FUN_00018fec @ 00018fec size=492 ===== */

undefined4 FUN_00018fec(int param_1,int param_2,undefined4 *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int local_c;
  
  if (param_5 == 0) {
    uVar1 = 0x8f9c;
  }
  else {
    uVar1 = 0x8fc4;
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



/* ===== FUN_000191d8 @ 000191d8 size=72 ===== */

undefined4 FUN_000191d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018fec(param_1,param_2,param_3,param_4,0);
  return uVar1;
}



/* ===== FUN_00019220 @ 00019220 size=76 ===== */

void FUN_00019220(undefined4 param_1,void *param_2)

{
  memset(param_2,0,0xc);
  FUN_0001ab2c(param_1,0xc,param_2);
  *(undefined2 *)((int)param_2 + 6) = 0xde00;
  return;
}



/* ===== FUN_0001926c @ 0001926c size=400 ===== */

undefined4 FUN_0001926c(int param_1,int *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  uint local_10;
  int *local_c;
  
  if (param_4 == 0) {
    uVar1 = 0x8f9c;
  }
  else {
    uVar1 = 0x8fc4;
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



/* ===== FUN_000193fc @ 000193fc size=72 ===== */

bool FUN_000193fc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001926c(param_1,param_2,0,0);
  return iVar1 == 0;
}



/* ===== FUN_00019444 @ 00019444 size=220 ===== */

int FUN_00019444(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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
  local_10 = FUN_00025ef4(param_1,param_2,auStack_94);
  if (local_10 == 0) {
    local_14 = local_30;
    uVar1 = FUN_00038438(*(undefined4 *)(local_9c + 0xa8),&local_a0,4);
    *param_4 = uVar1;
    uVar1 = FUN_00038438(*param_4,&local_14,4);
    *param_4 = uVar1;
    uVar1 = FUN_00038438(*param_4,local_c,param_5);
    *param_4 = uVar1;
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_00019520 @ 00019520 size=172 ===== */

bool FUN_00019520(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_0001926c(param_1,param_3,&local_14,1);
  if (local_c == 0) {
    iVar1 = FUN_00019444(param_1,param_2,param_3,&local_10,local_14 - param_3);
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



/* ===== FUN_000195cc @ 000195cc size=160 ===== */

int FUN_000195cc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = FUN_0001926c(param_1,param_3,&local_14,1);
  if ((local_c == 0) &&
     (local_c = FUN_00019444(param_1,param_2,param_3,&local_10,local_14 - param_3), local_c == 0)) {
    *(undefined4 *)(local_14 + 8) = local_10;
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_0001966c @ 0001966c size=312 ===== */

int FUN_0001966c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5,
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
  local_18 = FUN_00025ef4(param_1,param_2,auStack_9c);
  if (local_18 == 0) {
    local_1c = local_38;
    uVar1 = FUN_00038438(*(undefined4 *)(local_a4 + 0xa8),&local_a8,4);
    *param_4 = uVar1;
    uVar1 = FUN_00038438(*param_4,&local_1c,4);
    *param_4 = uVar1;
    uVar1 = FUN_00038438(*param_4,local_c,local_10);
    *param_4 = uVar1;
    uVar1 = FUN_00038438(*param_4,param_7,8);
    *param_4 = uVar1;
    *(undefined4 *)(param_7 + 4) = local_14;
    local_18 = 0;
  }
  return local_18;
}



/* ===== FUN_000197a4 @ 000197a4 size=280 ===== */

bool FUN_000197a4(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  local_c = FUN_00018fec(param_1,param_3,&local_20,&local_24,1);
  if (local_c == 0) {
    local_10 = (uint)*local_20;
    local_14 = (uint)local_20[1];
    if (*(int *)(param_1 + 0x14) - 8U < local_10 * 8 + local_24) {
      bVar2 = false;
    }
    else {
      local_18 = local_20 + local_10 * 4;
      iVar1 = FUN_0001966c(param_1,param_2,param_3,&local_1c,local_24,local_14,local_18);
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



/* ===== FUN_000198bc @ 000198bc size=280 ===== */

int FUN_000198bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_24;
  ushort *local_20;
  undefined4 local_1c;
  ushort *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_c = FUN_00018fec(param_1,param_3,&local_20,&local_24,1);
  if (local_c == 0) {
    local_10 = (uint)*local_20;
    local_14 = (uint)local_20[1];
    if (*(int *)(param_1 + 0x14) - 8U < local_10 * 8 + local_24) {
      local_c = 0x7f2bb795;
    }
    else {
      local_18 = local_20 + local_10 * 4;
      local_c = FUN_0001966c(param_1,param_2,param_3,&local_1c,local_24,local_14,local_18);
      if (local_c == 0) {
        *(undefined4 *)(local_18 + 2) = local_1c;
      }
    }
  }
  return local_c;
}



/* ===== FUN_000199d4 @ 000199d4 size=196 ===== */

undefined4 FUN_000199d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0001926c(param_1,param_3,0,1);
    if (iVar1 == 0) {
      uVar2 = FUN_00019520(param_1,param_2,param_3);
    }
    else {
      iVar1 = FUN_00018fec(param_1,param_3,0,0,1);
      if (iVar1 == 0) {
        uVar2 = FUN_000197a4(param_1,param_2,param_3);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00019a98 @ 00019a98 size=228 ===== */

undefined4 FUN_00019a98(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0001926c(param_1,param_3,0,1);
    if (iVar1 == 0) {
      uVar2 = FUN_000195cc(param_1,param_2,param_3);
    }
    else {
      iVar1 = FUN_00018fec(param_1,param_3,0,0,1);
      if (iVar1 == 0) {
        uVar2 = FUN_000198bc(param_1,param_2,param_3);
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



/* ===== FUN_00019b7c @ 00019b7c size=60 ===== */

int FUN_00019b7c(int param_1)

{
  return param_1 + (*(ushort *)(param_1 + 4) + 1) * 0xc;
}



/* ===== FUN_00019bb8 @ 00019bb8 size=236 ===== */

int FUN_00019bb8(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

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
  local_10 = FUN_00025ef4(param_1,param_2,auStack_94);
  if (local_10 == 0) {
    local_14 = local_30;
    uVar1 = FUN_00038438(*(undefined4 *)(local_9c + 0xa8),&local_a0,4);
    *param_4 = uVar1;
    uVar1 = FUN_00038438(*param_4,&local_14,4);
    *param_4 = uVar1;
    uVar1 = FUN_00038438(*param_4,param_3,local_c);
    *param_4 = uVar1;
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_00019ca4 @ 00019ca4 size=164 ===== */

bool FUN_00019ca4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  int local_18 [2];
  int local_10;
  int *local_c;
  
  local_c = (int *)FUN_00019b7c(param_3);
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    local_10 = *local_c;
    iVar1 = FUN_00019bb8(param_1,param_2,param_3,local_18);
    if (iVar1 == 0) {
      bVar2 = local_10 == local_18[0];
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



/* ===== FUN_00019d48 @ 00019d48 size=144 ===== */

int FUN_00019d48(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 *local_c;
  
  local_c = (undefined4 *)FUN_00019b7c(param_3);
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00019bb8(param_1,param_2,param_3,local_14);
    if (iVar1 == 0) {
      *local_c = local_14[0];
    }
  }
  return iVar1;
}



/* ===== FUN_00019dd8 @ 00019dd8 size=228 ===== */

bool FUN_00019dd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_10;
  uint local_c;
  
  iVar2 = FUN_000168ec(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar3 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = *(ushort *)(iVar2 + 0x1a);
    local_c = (uint)uVar1;
    local_10 = FUN_00038438(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
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



/* ===== FUN_00019ebc @ 00019ebc size=192 ===== */

undefined4 FUN_00019ebc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_000168ec(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar2 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar3 = FUN_00038438(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
    *(short *)(iVar1 + 0x1a) = (short)uVar3;
    if (0x3b < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
      *(short *)(iVar1 + 0x3a) = (short)((uint)uVar3 >> 0x10);
    }
  }
  return 0;
}



/* ===== FUN_00019f7c @ 00019f7c size=228 ===== */

bool FUN_00019f7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_10;
  uint local_c;
  
  iVar2 = FUN_000168ec(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar3 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = *(ushort *)(iVar2 + 0x18);
    local_c = (uint)uVar1;
    local_10 = FUN_00038438(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
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



/* ===== FUN_0001a060 @ 0001a060 size=192 ===== */

undefined4 FUN_0001a060(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_000168ec(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  iVar2 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar3 = FUN_00038438(*(undefined4 *)(param_1 + 0xa8),param_3,param_4);
    *(short *)(iVar1 + 0x18) = (short)uVar3;
    if (0x39 < *(ushort *)(*(int *)(param_1 + 0x10) + 0xfe)) {
      *(short *)(iVar1 + 0x38) = (short)((uint)uVar3 >> 0x10);
    }
  }
  return 0;
}



/* ===== FUN_0001a120 @ 0001a120 size=328 ===== */

undefined4 FUN_0001a120(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,int param_5)

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
  uVar1 = FUN_00038438(*(undefined4 *)(param_1 + 0xa8),&local_28,4);
  *param_4 = uVar1;
  uVar1 = FUN_00038438(*param_4,&local_1c,4);
  *param_4 = uVar1;
  uVar1 = FUN_00038438(*param_4,local_10,local_14);
  *param_4 = uVar1;
  *(undefined2 *)(param_3 + 0x7c) = local_16;
  if (param_5 != 0) {
    *(undefined2 *)(param_3 + 0x82) = local_a;
  }
  return 0;
}



/* ===== FUN_0001a268 @ 0001a268 size=380 ===== */

undefined4 FUN_0001a268(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_24 [3];
  int local_18;
  char *local_14;
  uint local_10;
  uint local_c;
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
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
    iVar1 = FUN_0001a120(param_1,param_2,param_3,local_24,local_18);
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



/* ===== FUN_0001a3e4 @ 0001a3e4 size=252 ===== */

int FUN_0001a3e4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_14 [8];
  int local_c;
  
  iVar1 = FUN_00018984(*(undefined4 *)(param_1 + 0x10));
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
    iVar1 = FUN_0001a120(param_1,param_2,param_3,local_14,local_c);
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



/* ===== FUN_0001a4e0 @ 0001a4e0 size=424 ===== */

undefined2 FUN_0001a4e0(int param_1,undefined4 param_2)

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
  local_10 = FUN_000168ec(param_1,*(undefined4 *)(param_1 + 0x24),param_2);
  if ((*(uint *)(*(int *)(local_24 + 0x10) + 0x60) & 0x80) == 0) {
    local_14 = 0x20;
  }
  else {
    local_14 = (uint)*(ushort *)(*(int *)(local_24 + 0x10) + 0xfe);
  }
  local_a = 0;
  iVar1 = FUN_00018984(*(undefined4 *)(local_24 + 0x10));
  if (iVar1 == 0) {
    local_20 = 0x1e;
    local_a = FUN_00038034(0xffffffff,*(int *)(local_24 + 0x10) + 0x68,0x10);
    local_a = FUN_00038034(local_a,&local_28,4);
    local_a = FUN_00038034(local_a,local_10,local_20);
    local_20 = local_20 + 2;
    if (local_20 < local_14) {
      local_a = FUN_00038034(local_a,local_10 + local_20,local_14 - local_20);
    }
  }
  else {
    local_16 = *(undefined2 *)(local_10 + 0x1e);
    *(undefined2 *)(local_10 + 0x1e) = 0;
    local_1c = FUN_00038438(*(undefined4 *)(local_24 + 0xa8),&local_28,4);
    local_a = FUN_00038438(local_1c,local_10,local_14);
    *(undefined2 *)(local_10 + 0x1e) = local_16;
  }
  return local_a;
}



/* ===== FUN_0001a688 @ 0001a688 size=108 ===== */

undefined4 FUN_0001a688(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000189fc(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0001737c(param_1,param_2);
    iVar2 = FUN_0001a4e0(param_1,param_2);
    if (iVar1 != iVar2) {
      return 0;
    }
  }
  return 1;
}



/* ===== FUN_0001a6f4 @ 0001a6f4 size=88 ===== */

void FUN_0001a6f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000189fc(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0001a4e0(param_1,param_2);
    FUN_000173c0(param_1,param_2,uVar2);
  }
  return;
}



/* ===== FUN_0001a74c @ 0001a74c size=164 ===== */

int FUN_0001a74c(undefined4 param_1,int param_2,int param_3)

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
    iVar1 = FUN_00021c2c(param_1,local_c);
  } while (iVar1 == 0);
  return (local_c - uVar2) + 1;
}



/* ===== FUN_0001a7f0 @ 0001a7f0 size=596 ===== */

undefined4 FUN_0001a7f0(int param_1)

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
    iVar2 = FUN_000189fc(param_1);
    if (iVar2 == 0) {
      uVar8 = 0;
    }
    else {
      local_18 = 0;
      while( true ) {
        if (*(uint *)(param_1 + 0x1c) <= local_18) break;
        iVar2 = FUN_0001737c(param_1,local_18);
        iVar3 = FUN_000170cc(param_1,local_18);
        iVar4 = FUN_000171c8(param_1,local_18);
        iVar5 = FUN_00016ed4(param_1,local_18);
        iVar6 = FUN_00016dd8(param_1,local_18);
        if ((iVar6 == *(int *)(iVar7 + 0x20)) && (local_18 != *(int *)(param_1 + 0x1c) - 1U)) {
          FUN_000172ac(param_1,local_18,2);
        }
        if (iVar5 == *(int *)(iVar7 + 0x28)) {
          FUN_000172ac(param_1,local_18,1);
          FUN_00017148(param_1,local_18,*(undefined4 *)(iVar7 + 0x28));
        }
        else {
          iVar6 = *(int *)(iVar7 + 0x28);
          iVar5 = FUN_0001a74c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar7 + 0x28),
                               local_18);
          FUN_0001730c(param_1,local_18,1);
          FUN_00017148(param_1,local_18,iVar6 - iVar5);
        }
        FUN_0001a6f4(param_1,local_18);
        iVar5 = FUN_000171c8(param_1,local_18);
        if (iVar4 != iVar5) {
          bVar1 = true;
        }
        iVar4 = FUN_000170cc(param_1,local_18);
        if (iVar3 != iVar4) {
          bVar1 = true;
        }
        iVar3 = FUN_0001737c(param_1,local_18);
        if (iVar2 != iVar3) {
          bVar1 = true;
        }
        local_18 = local_18 + 1;
      }
      if (bVar1) {
        FUN_00022214(param_1);
      }
      uVar8 = 0;
    }
  }
  return uVar8;
}



/* ===== FUN_0001aa44 @ 0001aa44 size=60 ===== */

bool FUN_0001aa44(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0001aa80 @ 0001aa80 size=172 ===== */

undefined4 FUN_0001aa80(int param_1,int param_2,uint *param_3)

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



/* ===== FUN_0001ab2c @ 0001ab2c size=260 ===== */

undefined4 FUN_0001ab2c(int param_1,uint param_2,int param_3)

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



/* ===== FUN_0001ac30 @ 0001ac30 size=244 ===== */

bool FUN_0001ac30(int param_1,int param_2,uint param_3,uint param_4)

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
    iVar1 = FUN_0001aa80(param_1,local_c,&local_10);
    if (iVar1 != 0) {
      return false;
    }
    local_1c = local_1c + local_10;
  } while (((7 < local_10) && ((local_10 & 3) == 0)) &&
          (iVar1 = FUN_000225d8(local_c), iVar1 + 7 < (int)local_10));
  return false;
}



/* ===== FUN_0001ad24 @ 0001ad24 size=372 ===== */

int FUN_0001ad24(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
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
    local_10 = FUN_000267b8(param_1,param_2);
    if (local_10 == 0) {
      local_28 = param_2;
      local_24 = param_3;
      if (param_4 == 0) {
        local_c = local_10;
        local_c = FUN_00021f74(param_1[5],local_20);
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
      local_c = FUN_00035f5c(param_1,param_2,8,0,FUN_0001af58,&local_28);
      if (param_4 == 0) {
        FUN_00022158(local_20);
      }
      if (local_c == 0x7f2bb79d) {
        FUN_00022b44(param_1,param_2,&local_28);
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



/* ===== FUN_0001ae98 @ 0001ae98 size=92 ===== */

undefined4
FUN_0001ae98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*param_7)(param_3,param_4,param_5,param_6,param_7[1]);
  return uVar1;
}



/* ===== FUN_0001aef4 @ 0001aef4 size=100 ===== */

undefined4
FUN_0001aef4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_6;
  local_10 = param_5;
  uVar1 = FUN_0001ad24(param_1,param_2,param_3,param_4,FUN_0001ae98,&local_10);
  return uVar1;
}



/* ===== FUN_0001af58 @ 0001af58 size=1280 ===== */

uint FUN_0001af58(int param_1,undefined4 *param_2,int param_3,int param_4)

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
      uVar1 = FUN_0003852c(param_1,in_stack_0000000c[2],*param_2,param_2[1],in_stack_0000000c[2],0,
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
    iVar2 = FUN_0001aa44(*(undefined4 *)(param_1 + 0x10));
    if (iVar2 != 0) {
      local_2c = 0xc;
    }
    while (local_14 < local_24 - 8) {
      local_40 = (int *)(local_34[2] + local_14);
      iVar2 = FUN_0001aa80(param_1,local_40,&local_4c);
      if (iVar2 != 0) {
        return 2;
      }
      if ((((local_24 < local_4c + local_14) || (local_4c < 8)) || ((local_4c & 3) != 0)) ||
         (iVar2 = FUN_000225d8(local_40), (int)local_4c <= iVar2 + 7)) {
        local_34[6] = 0x7f2bb723;
        return 2;
      }
      if (*local_40 == 0) {
        if (((local_3c == 0) && (local_14 == local_24 - local_2c)) &&
           ((local_2c == *(ushort *)(local_40 + 1) && (*(short *)((int)local_40 + 6) == -0x2200))))
        {
          if ((local_34[1] & 4) != 0) {
            local_28 = 5;
            goto LAB_0001b1dc;
          }
        }
        else if ((local_34[1] & 1) != 0) goto LAB_0001b1dc;
      }
      else {
LAB_0001b1dc:
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
          iVar2 = FUN_0001aa80(param_1,local_40,&local_4c);
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
LAB_0001b398:
        local_14 = local_14 + local_4c;
      }
      else {
        iVar2 = FUN_000225d8(local_40);
        local_44 = iVar2 + 0xbU & 0xfffffffc;
        if (local_44 == local_4c) goto LAB_0001b398;
        local_48 = local_14 + local_4c;
        local_14 = local_14 + local_44;
        while ((local_14 < local_48 &&
               (iVar2 = FUN_0001ac30(param_1,local_34[2],local_14,local_48), iVar2 == 0))) {
          local_14 = local_14 + 4;
        }
      }
    }
    if (local_1c != 0) {
      if (local_3c == 0) {
        uVar1 = FUN_000386d4(param_1,local_34[2],*param_2,param_2[1],local_34[2],0,*local_34);
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



/* ===== FUN_0001b458 @ 0001b458 size=408 ===== */

int FUN_0001b458(int param_1,undefined4 param_2,void *param_3,uint param_4,undefined4 *param_5)

{
  undefined4 *local_10;
  int local_c;
  
  if (((param_4 & 3) != 0) && ((*(uint *)(param_1 + 8) & 1) == 0)) {
    return 0x7f2bb715;
  }
  local_c = FUN_00021f74(0xb0,&local_10);
  if (local_c != 0) {
    return local_c;
  }
  memset(local_10,0,0xb0);
  *local_10 = 0x7f2bb70f;
  local_10[1] = param_1;
  local_10[2] = param_2;
  local_10[0x23] = param_4 & 0xff;
  if (param_3 == (void *)0x0) {
    local_c = FUN_00025ef4(param_1,param_2,local_10 + 3);
    if (local_c != 0) goto LAB_0001b5b4;
  }
  else {
    memcpy(local_10 + 3,param_3,0x80);
  }
  local_c = FUN_00022038(3,*(undefined4 *)(param_1 + 0x14),local_10 + 0x2a);
  if (local_c == 0) {
    *param_5 = local_10;
    return 0;
  }
LAB_0001b5b4:
  if (local_10[0x2a] != 0) {
    FUN_00022158(local_10 + 0x2a);
  }
  FUN_00022158(&local_10);
  return local_c;
}



/* ===== FUN_0001b5f0 @ 0001b5f0 size=72 ===== */

undefined4 FUN_0001b5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001b458(param_1,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0001b710 @ 0001b710 size=660 ===== */

int FUN_0001b710(int *param_1)

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
              ((iVar1 = FUN_000377ac(iVar2,param_1[2],param_1 + 3,
                                     param_1[0x2a] + *(int *)(iVar2 + 0x14),0), iVar1 == 0 &&
               (((local_1c & 1) == 0 ||
                (iVar1 = FUN_000377ac(iVar2,param_1[2],param_1 + 3,
                                      param_1[0x2a] + *(int *)(iVar2 + 0x14),2), iVar1 == 0)))))) &&
             ((param_1[0x28] != 0 || param_1[0x29] != 0 ||
              (iVar1 = FUN_000377ac(iVar2,param_1[2],param_1 + 3,
                                    param_1[0x2a] + *(int *)(iVar2 + 0x14),param_1[2] != 0),
              iVar1 == 0)))) &&
            (iVar1 = FUN_00026ba0(*(undefined4 *)(iVar2 + 4),1,param_1[0x28],param_1[0x29],1,
                                  param_1[0x2a]), iVar1 == 0)) {
      param_1[0x23] = param_1[0x23] & 0xffffbfff;
    }
  }
  else {
    iVar1 = 0x7f2bb70f;
  }
  return iVar1;
}



/* ===== FUN_0001b9a4 @ 0001b9a4 size=164 ===== */

int FUN_0001b9a4(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_00051964(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0);
  if (lVar2 != *(longlong *)(param_1 + 0x98)) {
    iVar1 = FUN_0001b710(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffdfff;
  }
  *(longlong *)(param_1 + 0x98) = lVar2;
  return 0;
}



/* ===== FUN_0001ba48 @ 0001ba48 size=344 ===== */

int FUN_0001ba48(int param_1,int param_2)

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
    local_10 = FUN_000377ac(local_c,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
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
        iVar1 = FUN_00026ad4(*(undefined4 *)(local_c + 4),1,*(undefined4 *)(param_1 + 0xa0),
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



/* ===== FUN_0001bba0 @ 0001bba0 size=128 ===== */

undefined4 FUN_0001bba0(int *param_1)

{
  int *local_14 [2];
  undefined4 local_c;
  
  if (*param_1 == 0x7f2bb70f) {
    local_14[0] = param_1;
    local_c = FUN_0001b710(param_1);
    if (local_14[0][0x2a] != 0) {
      FUN_00022158(local_14[0] + 0x2a);
    }
    FUN_00022158(local_14);
  }
  else {
    local_c = 0x7f2bb70f;
  }
  return local_c;
}



/* ===== FUN_0001bc20 @ 0001bc20 size=340 ===== */

int FUN_0001bc20(int param_1,void *param_2,uint param_3,size_t *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_18;
  int local_14;
  undefined4 local_10;
  size_t local_c;
  
  local_c = 0;
  local_10 = *(undefined4 *)(param_1 + 4);
  local_14 = FUN_00023914(local_10,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
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



/* ===== FUN_0001bd74 @ 0001bd74 size=660 ===== */

int FUN_0001bd74(int *param_1,void *param_2,uint param_3,int *param_4)

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
        if ((((bVar3) || (local_44 == 0)) || (local_1c = FUN_0001b9a4(param_1), local_1c != 0)) ||
           (local_1c = FUN_0001ba48(param_1,0), local_1c != 0)) break;
        FUN_00051964(param_1[0x24],param_1[0x25],*(undefined4 *)(iVar2 + 0x14),0);
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
      local_1c = FUN_0001bc20(param_1,param_2,param_3,param_4);
    }
  }
  else {
    local_1c = 0x7f2bb70f;
  }
  return local_1c;
}



/* ===== FUN_0001c008 @ 0001c008 size=616 ===== */

int FUN_0001c008(int param_1,void *param_2,int param_3,size_t *param_4)

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
  local_1c = FUN_00023914(local_18,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
                          *(undefined4 *)(param_1 + 0xa8),local_24);
  if (local_1c == 0) {
    if (*(int *)(param_1 + 0x94) == 0 && *(uint *)(param_1 + 0x90) < local_24[0]) {
      local_14 = param_3 - *(int *)(param_1 + 0x90);
      memcpy((void *)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0x90)),param_2,local_14);
      local_1c = FUN_00023a1c(local_18,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
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
            FUN_0001ca34(param_1,uVar1,*(undefined4 *)(param_1 + 0x90),
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
    local_1c = FUN_000236c0(local_18,*(undefined4 *)(param_1 + 8));
    if ((local_1c == 0) &&
       (local_1c = FUN_00025ef4(local_18,*(undefined4 *)(param_1 + 8),param_1 + 0xc), local_1c == 0)
       ) {
      local_1c = 0x7f2bb7a7;
    }
  }
  return local_1c;
}



/* ===== FUN_0001c270 @ 0001c270 size=864 ===== */

int FUN_0001c270(int *param_1,void *param_2,uint param_3,int *param_4)

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
        iVar1 = FUN_0001c008(param_1,param_2,param_3,param_4);
        if (iVar1 != 0x7f2bb7a7) {
          return iVar1;
        }
        local_14 = 0;
      }
      while ((local_3c != 0 && (local_14 = FUN_0001b9a4(param_1), local_14 == 0))) {
        FUN_00051964(param_1[0x24],param_1[0x25],*(undefined4 *)(iVar2 + 0x14),0);
        local_18 = *(int *)(iVar2 + 0x14) - extraout_r2;
        if (local_3c < local_18) {
          local_18 = local_3c;
        }
        local_14 = FUN_0001ba48(param_1,local_18 == *(size_t *)(iVar2 + 0x14));
        if ((local_14 != 0) ||
           ((param_1[0x28] == 0 && param_1[0x29] == 0 &&
            (local_14 = FUN_000377ac(iVar2,param_1[2],param_1 + 3,
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
           (iVar2 = FUN_0001ca34(param_1,uVar3,param_1[0x24],param_1[0x25]), local_14 == 0)) {
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



/* ===== FUN_0001c5d0 @ 0001c5d0 size=276 ===== */

undefined4
FUN_0001c5d0(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int *param_6)

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



/* ===== FUN_0001c6e4 @ 0001c6e4 size=124 ===== */

undefined4
FUN_0001c6e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20[0] = 0;
  uStack_c = 0;
  local_10 = param_2;
  uVar1 = FUN_0001c5d0(param_1,param_2,param_2,0,param_3,local_20);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (undefined4)local_20[0];
  }
  return uVar1;
}



/* ===== FUN_0001c760 @ 0001c760 size=140 ===== */

undefined4 FUN_0001c760(int *param_1,int *param_2)

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



/* ===== FUN_0001c7ec @ 0001c7ec size=100 ===== */

undefined4 FUN_0001c7ec(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  int iStack_c;
  
  iVar1 = FUN_0001c760(param_1,&local_10);
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



/* ===== FUN_0001c850 @ 0001c850 size=484 ===== */

int FUN_0001c850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_00051964(param_3,param_4,*(undefined4 *)(local_18 + 0x14),0);
  if (extraout_r2 == 0 && extraout_r3 == 0) {
    local_14 = 0;
  }
  else {
    local_20 = extraout_r2;
    local_14 = FUN_0001b9a4(param_1);
    if (local_14 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar2 = FUN_00051964(param_3,param_4,*(undefined4 *)(local_18 + 0x14),0);
      piVar4 = &local_30;
      puVar3 = &local_34;
      local_14 = FUN_000377ac(local_18,uVar1,0,0,0);
      if (local_14 == 0) {
        if ((local_30 == 0 && iStack_2c == 0) || ((local_34 & 1) != 0)) {
          local_14 = 0;
        }
        else {
          local_14 = FUN_00021f74(*(undefined4 *)(local_18 + 0x14),&local_24);
          if (local_14 == 0) {
            local_14 = FUN_00026ad4(*(undefined4 *)(local_18 + 4),1,local_30,iStack_2c,1,local_24,
                                    uVar2,puVar3,piVar4);
            if (local_14 == 0) {
              memset((void *)(local_24 + local_20),0,*(int *)(local_18 + 0x14) - local_20);
              local_14 = FUN_00026ba0(*(undefined4 *)(local_18 + 4),1,local_30,iStack_2c,1,local_24)
              ;
            }
            FUN_00022158(&local_24);
          }
        }
      }
    }
  }
  return local_14;
}



/* ===== FUN_0001ca34 @ 0001ca34 size=652 ===== */

int FUN_0001ca34(int *param_1,undefined4 param_2,uint param_3,int param_4)

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
      uVar11 = FUN_00051964(param_3 - 1,param_4 - (uint)(param_3 == 0),
                            *(undefined4 *)(param_1[1] + 0x14),0);
      iVar5 = FUN_00037658(iVar5,param_1 + 3,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
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
    uVar11 = FUN_00017514(param_1[1],param_1 + 3,param_3,param_4);
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    iVar5 = (int)uVar11;
    if (iVar5 == 0) {
      if (param_1[2] != 0) {
        uVar11 = FUN_000264b0(param_1[1],param_1[2],param_1 + 3);
        uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 != 0) {
          return (int)uVar11;
        }
      }
      iVar5 = FUN_0001c850(param_1,uVar3,param_3,param_4);
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
          iVar5 = FUN_0002b994(param_1[1],param_1[2],param_1 + 3,0,uVar4,uVar6,0xffffffffffffffff);
        }
      }
    }
  }
  else {
    iVar5 = 0x7f2bb70f;
  }
  return iVar5;
}



/* ===== FUN_0001ccc0 @ 0001ccc0 size=56 ===== */

undefined4 FUN_0001ccc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001ca34(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_0001ccf8 @ 0001ccf8 size=648 ===== */

void FUN_0001ccf8(int *param_1,undefined4 param_2)

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
      FUN_00022158(local_c + 3);
      param_2 = extraout_r1_01;
    }
    if (local_c[4] != 0) {
      FUN_00022158(local_c + 4);
      param_2 = extraout_r1_02;
    }
    if (local_c[0x15] != 0) {
      FUN_00022158(local_c + 0x15);
      param_2 = extraout_r1_03;
    }
    if (local_c[9] != 0) {
      FUN_00022158(local_c + 9);
      param_2 = extraout_r1_04;
    }
    if (local_c[0xc] != 0) {
      FUN_00015020(local_c[0xc]);
      param_2 = extraout_r1_05;
    }
    if (local_c[0xb] != 0) {
      FUN_00014ffc(local_c[0xb]);
      param_2 = extraout_r1_06;
    }
    if (local_c[0x16] != 0) {
      FUN_00022158(local_c + 0x16);
      param_2 = extraout_r1_07;
    }
    if (local_c[0x12] != 0) {
      FUN_0001cff0(local_c[0x12]);
      param_2 = extraout_r1_08;
    }
    local_c[0x12] = 0;
    if (local_c[0x13] != 0) {
      FUN_0001d014(local_c[0x13]);
      param_2 = extraout_r1_09;
    }
    if (local_c[0x21] != 0) {
      FUN_00023d7c(local_c[0x21]);
      param_2 = extraout_r1_10;
    }
    if (local_c[0x25] != 0) {
      FUN_00022158(local_c + 0x25);
      param_2 = extraout_r1_11;
    }
    if (local_c[0x26] != 0) {
      FUN_00022158(local_c + 0x26);
      param_2 = extraout_r1_12;
    }
    *local_c = 0;
    FUN_000272d0(0,param_2,0,0,0,0,0);
    FUN_00022158(&local_c);
  }
  return;
}



/* ===== FUN_0001cf80 @ 0001cf80 size=112 ===== */

void FUN_0001cf80(int *param_1)

{
  int *local_c;
  
  if (*param_1 == 0x7f2bb702) {
    local_c = param_1;
    if (param_1[3] != 0) {
      FUN_00022158(param_1 + 3);
    }
    local_c[3] = 0;
    FUN_00022158(&local_c);
  }
  return;
}



/* ===== FUN_0001cff0 @ 0001cff0 size=36 ===== */

void FUN_0001cff0(undefined4 param_1)

{
  FUN_0001cf80(param_1);
  return;
}



/* ===== FUN_0001d014 @ 0001d014 size=192 ===== */

void FUN_0001d014(int *param_1)

{
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb70c)) {
    local_c = param_1;
    if (param_1[7] != 0) {
      FUN_00022158(param_1 + 7);
    }
    local_c[7] = 0;
    if ((local_c[1] != 0) && (*(int **)(local_c[1] + 0x4c) == local_c)) {
      *(undefined4 *)(local_c[1] + 0x4c) = 0;
    }
    *local_c = 0;
    FUN_00022158(&local_c);
  }
  return;
}



/* ===== FUN_0001d0d4 @ 0001d0d4 size=140 ===== */

void FUN_0001d0d4(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00044854(0,*(int *)(param_1 + 0x1c) + param_2,&DAT_00053ff4,param_3);
  }
  else {
    FUN_00044854(0,*(int *)(param_1 + 0x1c) + param_2,"#%lu for %s",param_3,
                 *(undefined4 *)(param_1 + 0x14));
  }
  return;
}



/* ===== FUN_0001d160 @ 0001d160 size=132 ===== */

undefined4 FUN_0001d160(int *param_1)

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



/* ===== FUN_0001d1e4 @ 0001d1e4 size=556 ===== */

int FUN_0001d1e4(int param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,
                void *param_7,undefined4 *param_8)

{
  size_t sVar1;
  int *local_14;
  size_t local_10;
  int local_c;
  
  local_c = FUN_00021f74(0x3c,&local_14);
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
      local_c = FUN_00021f74(sVar1 + 1,local_14 + 5);
      if (local_c != 0) {
        FUN_00022158(&local_14);
        return local_c;
      }
      strcpy((char *)local_14[5],param_6);
    }
    local_10 = ((uint)(local_14[4] - local_14[2]) >> 3) + 8 & 0xfffffffc;
    local_c = FUN_00021f74(local_10,local_14 + 6);
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
      FUN_00022158(local_14 + 5);
      FUN_00022158(&local_14);
    }
  }
  return local_c;
}



/* ===== FUN_0001d410 @ 0001d410 size=100 ===== */

undefined4
FUN_0001d410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d1e4(0x7f2bb70a,0,param_1,param_2,param_3,param_4,0,param_5);
  return uVar1;
}



/* ===== FUN_0001d474 @ 0001d474 size=132 ===== */

undefined4 FUN_0001d474(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d1e4(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                       param_2);
  return uVar1;
}



/* ===== FUN_0001d4f8 @ 0001d4f8 size=168 ===== */

void FUN_0001d4f8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *local_c;
  
  local_c = param_1;
  iVar1 = FUN_0001d160(param_1);
  if (iVar1 == 0) {
    *local_c = 0;
    if (local_c[5] != 0) {
      FUN_00022158(local_c + 5);
      local_c[5] = 0;
    }
    if (local_c[6] != 0) {
      FUN_00022158(local_c + 6);
      local_c[6] = 0;
    }
    FUN_00022158(&local_c);
  }
  return;
}



/* ===== FUN_0001d5a0 @ 0001d5a0 size=360 ===== */

undefined4 FUN_0001d5a0(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[3] < param_2)) {
      FUN_0001d0d4(param_1,2,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00015c34(param_2 - param_1[2],param_1[6]);
    }
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00044854(0,0x7f2bb70a,"test_bitmap(%lu)",param_2);
      return 0;
    }
    FUN_00020a3c(param_1,"ext2fs_test_generic_bitmap");
    uVar1 = FUN_0001fb8c(param_1,extraout_r1,param_2,0);
  }
  return uVar1;
}



/* ===== FUN_0001d708 @ 0001d708 size=360 ===== */

undefined4 FUN_0001d708(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[3] < param_2)) {
      FUN_0001d0d4(param_1,0,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00015afc(param_2 - param_1[2],param_1[6]);
    }
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00044854(0,0x7f2bb70a,"mark_bitmap(%lu)",param_2);
      return 0;
    }
    FUN_00020a3c(param_1,"ext2fs_mark_generic_bitmap");
    uVar1 = FUN_0001f844(param_1,extraout_r1,param_2,0);
  }
  return uVar1;
}



/* ===== FUN_0001d870 @ 0001d870 size=360 ===== */

undefined4 FUN_0001d870(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[3] < param_2)) {
      FUN_0001d0d4(param_1,1,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00015b94(param_2 - param_1[2],param_1[6]);
    }
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00044854(0,0x7f2bb70a,"mark_bitmap(%lu)",param_2);
      return 0;
    }
    FUN_00020a3c(param_1,"ext2fs_unmark_generic_bitmap");
    uVar1 = FUN_0001f9e8(param_1,extraout_r1,param_2,0);
  }
  return uVar1;
}



/* ===== FUN_0001d9d8 @ 0001d9d8 size=252 ===== */

int FUN_0001d9d8(int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    iVar1 = param_1[2];
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00044854(0,0x7f2bb70a,"get_bitmap_start");
      return 0;
    }
    FUN_00020a3c(param_1,"ext2fs_get_generic_bitmap_start");
    iVar1 = FUN_0001f5d8(param_1);
  }
  return iVar1;
}



/* ===== FUN_0001dad4 @ 0001dad4 size=252 ===== */

int FUN_0001dad4(int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    iVar1 = param_1[3];
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00044854(0,0x7f2bb70a,"get_bitmap_end");
      return 0;
    }
    FUN_00020a3c(param_1,"ext2fs_get_generic_bitmap_end");
    iVar1 = FUN_0001f6cc(param_1);
  }
  return iVar1;
}



/* ===== FUN_0001dbd0 @ 0001dbd0 size=272 ===== */

void FUN_0001dbd0(int *param_1)

{
  if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    memset((void *)param_1[6],0,((uint)(param_1[4] - param_1[2]) >> 3) + 1);
  }
  else {
    if (((*param_1 != 0x7f2bb76d) && (*param_1 != 0x7f2bb76e)) && (*param_1 != 0x7f2bb76f)) {
      FUN_00044854(0,0x7f2bb70a,"clear_generic_bitmap");
      return;
    }
    FUN_00020a3c(param_1,"ext2fs_clear_generic_bitmap");
    FUN_0001f7c0(param_1);
  }
  return;
}



/* ===== FUN_0001dce0 @ 0001dce0 size=144 ===== */

int FUN_0001dce0(int *param_1,int param_2,int param_3,uint param_4,int *param_5)

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



/* ===== FUN_0001dd70 @ 0001dd70 size=456 ===== */

int FUN_0001dd70(int param_1,uint param_2,int param_3,int *param_4)

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
        FUN_00015b94(local_c - param_4[2],param_4[6]);
      }
    }
    if (param_3 == param_4[4]) {
      param_4[3] = param_2;
      param_1 = 0;
    }
    else {
      uVar1 = ((uint)(param_4[4] - param_4[2]) >> 3) + 1;
      uVar2 = ((uint)(param_3 - param_4[2]) >> 3) + 1;
      if ((uVar1 == uVar2) || (param_1 = FUN_000221a4(uVar1,uVar2,param_4 + 6), param_1 == 0)) {
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



/* ===== FUN_0001df38 @ 0001df38 size=364 ===== */

int FUN_0001df38(int param_1,int param_2,int *param_3,int *param_4)

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
      iVar1 = FUN_0002180c(param_3,local_14);
      iVar2 = FUN_0002180c(param_4,local_14);
      if (iVar1 != iVar2) {
        return param_2;
      }
    }
    param_1 = 0;
  }
  return param_1;
}



/* ===== FUN_0001e0a4 @ 0001e0a4 size=152 ===== */

void FUN_0001e0a4(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = *(int *)(param_1 + 0xc) + 1;
  local_10 = local_c - *(int *)(param_1 + 8);
  for (; (local_c <= *(uint *)(param_1 + 0x10) && (*(uint *)(param_1 + 0xc) < local_c));
      local_c = local_c + 1) {
    FUN_00015afc(local_10,*(undefined4 *)(param_1 + 0x18));
    local_10 = local_10 + 1;
  }
  return;
}



/* ===== FUN_0001e13c @ 0001e13c size=192 ===== */

int FUN_0001e13c(int *param_1,int param_2,uint param_3,int param_4,void *param_5)

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



/* ===== FUN_0001e1fc @ 0001e1fc size=192 ===== */

int FUN_0001e1fc(int *param_1,int param_2,uint param_3,int param_4,void *param_5)

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



/* ===== FUN_0001e2bc @ 0001e2bc size=172 ===== */

bool FUN_0001e2bc(void *param_1,uint param_2)

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
        iVar1 = memcmp(local_c,&DAT_00054114,local_10);
        bVar2 = iVar1 == 0;
      }
      return bVar2;
    }
    iVar1 = memcmp(local_c,&DAT_00054114,0x100);
    if (iVar1 != 0) break;
    local_10 = local_10 - 0x100;
    local_c = (void *)((int)local_c + 0x100);
  }
  return false;
}



/* ===== FUN_0001e368 @ 0001e368 size=604 ===== */

undefined4 FUN_0001e368(int param_1,int param_2,uint param_3)

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
  uVar1 = FUN_0001e2bc(iVar2 + local_c,local_10);
  return uVar1;
}



/* ===== FUN_0001e5c4 @ 0001e5c4 size=228 ===== */

undefined4 FUN_0001e5c4(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  if (((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < param_3)) ||
     (local_18 = param_2, param_3 < param_2)) {
    FUN_0001d0d4(param_1,2,param_2);
    uVar2 = 0x16;
  }
  else {
    for (; local_18 <= param_3; local_18 = local_18 + 1) {
      iVar1 = FUN_00015c34(local_18 - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        *param_4 = local_18;
        return 0;
      }
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* ===== FUN_0001e6a8 @ 0001e6a8 size=228 ===== */

undefined4 FUN_0001e6a8(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  if (((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < param_3)) ||
     (local_18 = param_2, param_3 < param_2)) {
    FUN_0001d0d4(param_1,2,param_2);
    uVar2 = 0x16;
  }
  else {
    for (; local_18 <= param_3; local_18 = local_18 + 1) {
      iVar1 = FUN_00015c34(local_18 - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if (iVar1 != 0) {
        *param_4 = local_18;
        return 0;
      }
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* ===== FUN_0001e78c @ 0001e78c size=184 ===== */

undefined4 FUN_0001e78c(int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb708) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[4] < (param_3 + param_2) - 1)) {
      FUN_00015c9c(0x7f2bb72f,param_2,param_1[5]);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0001e368(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x7f2bb708;
  }
  return uVar1;
}



/* ===== FUN_0001e844 @ 0001e844 size=184 ===== */

undefined4 FUN_0001e844(int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x7f2bb709) {
    if ((param_2 < (uint)param_1[2]) || ((uint)param_1[4] < (param_3 + param_2) - 1)) {
      FUN_00015c9c(0x7f2bb732,param_2,param_1[5]);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0001e368(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x7f2bb709;
  }
  return uVar1;
}



/* ===== FUN_0001e8fc @ 0001e8fc size=200 ===== */

void FUN_0001e8fc(int param_1,uint param_2,int param_3)

{
  undefined4 local_c;
  
  if ((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < (param_3 + param_2) - 1)) {
    FUN_00015c9c(0x7f2bb72d,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  else {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      FUN_000213cc((local_c + param_2) - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    }
  }
  return;
}



/* ===== FUN_0001e9c4 @ 0001e9c4 size=200 ===== */

void FUN_0001e9c4(int param_1,uint param_2,int param_3)

{
  undefined4 local_c;
  
  if ((param_2 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 0xc) < (param_3 + param_2) - 1)) {
    FUN_00015c9c(0x7f2bb72e,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  else {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      FUN_00021438((local_c + param_2) - *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    }
  }
  return;
}



/* ===== FUN_0001ea90 @ 0001ea90 size=148 ===== */

void FUN_0001ea90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_00044854(0,*(int *)(param_1 + 0x34) + param_2,"#%llu",param_4,param_3,param_4);
  }
  else {
    FUN_00044854(0,*(int *)(param_1 + 0x34) + param_2,"#%llu for %s",param_4,param_3,param_4,
                 *(undefined4 *)(param_1 + 0x2c));
  }
  return;
}



/* ===== FUN_0001eb24 @ 0001eb24 size=764 ===== */

int FUN_0001eb24(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
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
    local_c = &DAT_0006b328;
  }
  else if (local_24 == 3) {
    local_10 = FUN_000212bc(param_1,&local_18);
    if ((local_10 == 0) && (local_18 <= **(uint **)(param_1 + 0x10) / 0x140)) {
      local_c = &DAT_0006b328;
    }
    else {
      local_c = &DAT_0006b2e4;
    }
  }
  else {
    if (local_24 != 1) {
      return 0x16;
    }
    local_c = &DAT_0006b2e4;
  }
  local_10 = FUN_00021fcc(0x48,&local_14);
  if (local_10 == 0) {
    iVar1 = gettimeofday((timeval *)(local_14 + 0xf),(__timezone_ptr_t)0x0);
    if (iVar1 == -1) {
      perror("gettimeofday");
      FUN_00022158(&local_14);
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
        local_10 = FUN_00021f74(sVar2 + 1,local_14 + 0xb);
        if (local_10 != 0) {
          FUN_00022158(&local_14);
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
        FUN_00022158(local_14 + 0xb);
        FUN_00022158(&local_14);
      }
    }
  }
  return local_10;
}



/* ===== FUN_0001ee20 @ 0001ee20 size=248 ===== */

void FUN_0001ee20(int param_1)

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
    dStack_18 = (dVar4 + dVar2 * DAT_0001ef18) - (dVar5 + dVar3 * DAT_0001ef18);
    fprintf(stderr,"\n[+] %s bitmap (type %d)\n",*(undefined4 *)(param_1 + 0x2c),*local_c);
    fwrite("=================================================\n",1,0x32,stderr);
  }
  return;
}



/* ===== FUN_0001ef20 @ 0001ef20 size=364 ===== */

void FUN_0001ef20(int *param_1)

{
  char *pcVar1;
  int *local_c;
  
  if (param_1 != (int *)0x0) {
    local_c = param_1;
    if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
      FUN_0001d4f8(param_1);
    }
    else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
      pcVar1 = getenv("E2FSPROGS_BITMAP_STATS");
      if (pcVar1 != (char *)0x0) {
        FUN_0001ee20(local_c);
        (**(code **)(local_c[2] + 0x38))(local_c);
      }
      (**(code **)(local_c[2] + 8))(local_c);
      if (local_c[0xb] != 0) {
        FUN_00022158(local_c + 0xb);
        local_c[0xb] = 0;
      }
      *local_c = 0;
      FUN_00022158(&local_c);
    }
  }
  return;
}



/* ===== FUN_0001f08c @ 0001f08c size=720 ===== */

int FUN_0001f08c(int *param_1,undefined4 *param_2)

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
    local_c = FUN_0001d474(param_1,param_2);
  }
  else if (((*param_1 == 0x7f2bb76d) || (*param_1 == 0x7f2bb76e)) || (*param_1 == 0x7f2bb76f)) {
    local_c = FUN_00021fcc(0x48,&local_18);
    if (local_c == 0) {
      iVar2 = gettimeofday((timeval *)(local_18 + 0xf),(__timezone_ptr_t)0x0);
      if (iVar2 == -1) {
        perror("gettimeofday");
        FUN_00022158(&local_18);
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
          local_c = FUN_00021f74(sVar3 + 10,&local_14);
          uVar1 = s_copy_of_000542a4._4_4_;
          if (local_c != 0) {
            FUN_00022158(&local_18);
            return local_c;
          }
          *(undefined4 *)local_14 = s_copy_of_000542a4._0_4_;
          *(undefined4 *)(local_14 + 4) = uVar1;
          local_14[8] = s_copy_of_000542a4[8];
          strcat(local_14,local_10);
          local_18[0xb] = (int)local_14;
        }
        local_c = (**(code **)(param_1[2] + 0xc))(param_1,local_18);
        if (local_c == 0) {
          *param_2 = local_18;
          local_c = 0;
        }
        else {
          FUN_00022158(local_18 + 0xb);
          FUN_00022158(&local_18);
        }
      }
    }
  }
  else {
    local_c = 0x16;
  }
  return local_c;
}



/* ===== FUN_0001f35c @ 0001f35c size=272 ===== */

undefined4
FUN_0001f35c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    uVar1 = FUN_0001dd70(*param_1,param_3,param_5,param_1);
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



/* ===== FUN_0001f46c @ 0001f46c size=364 ===== */

undefined4 FUN_0001f46c(int *param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_10 [2];
  
  if (param_1 == (int *)0x0) {
    param_2 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    param_2 = FUN_0001dce0(param_1,*param_1,param_2,param_3,local_10);
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



/* ===== FUN_0001f5d8 @ 0001f5d8 size=244 ===== */

undefined8 FUN_0001f5d8(int *param_1)

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
          goto LAB_0001f6bc;
        }
      }
    }
    iVar1 = FUN_0001d9d8(param_1);
    iVar2 = 0;
  }
LAB_0001f6bc:
  return CONCAT44(iVar2,iVar1);
}



/* ===== FUN_0001f6cc @ 0001f6cc size=244 ===== */

undefined8 FUN_0001f6cc(int *param_1)

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
          goto LAB_0001f7b0;
        }
      }
    }
    iVar1 = FUN_0001dad4(param_1);
    iVar2 = 0;
  }
LAB_0001f7b0:
  return CONCAT44(iVar2,iVar1);
}



/* ===== FUN_0001f7c0 @ 0001f7c0 size=132 ===== */

void FUN_0001f7c0(int *param_1)

{
  if (((*param_1 != 0x7f2bb70a) && (*param_1 != 0x7f2bb708)) && (*param_1 != 0x7f2bb709)) {
    (**(code **)(param_1[2] + 0x34))(param_1);
    return;
  }
  FUN_0001dbd0(param_1);
  return;
}



/* ===== FUN_0001f844 @ 0001f844 size=420 ===== */

undefined4 FUN_0001f844(int *param_1,undefined4 param_2,uint param_3,uint param_4)

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
      uVar3 = FUN_0001d708(param_1,param_3);
    }
    else {
      FUN_0001d0d4(param_1,0,0xffffffff);
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
    FUN_0001ea90(param_1,0,uVar2,param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0001f9e8 @ 0001f9e8 size=420 ===== */

undefined4 FUN_0001f9e8(int *param_1,undefined4 param_2,uint param_3,uint param_4)

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
      uVar3 = FUN_0001d870(param_1,param_3);
    }
    else {
      FUN_0001d0d4(param_1,1,0xffffffff);
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
    FUN_0001ea90(param_1,1,uVar2,param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0001fb8c @ 0001fb8c size=420 ===== */

undefined4 FUN_0001fb8c(int *param_1,undefined4 param_2,uint param_3,uint param_4)

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
      uVar3 = FUN_0001d5a0(param_1,param_3);
    }
    else {
      FUN_0001d0d4(param_1,2,0xffffffff);
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
    FUN_0001ea90(param_1,2,uVar2,param_4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0001fd30 @ 0001fd30 size=368 ===== */

undefined4
FUN_0001fd30(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 + (uint)CARRY4(param_3,param_5) == (uint)(param_3 + param_5 == 0)) {
      uVar1 = FUN_0001e1fc(param_1,*param_1,param_3,param_5,param_6);
    }
    else {
      FUN_0001d0d4(param_1,1,0xffffffff);
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



/* ===== FUN_0001fea0 @ 0001fea0 size=368 ===== */

undefined4
FUN_0001fea0(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 + (uint)CARRY4(param_3,param_5) == (uint)(param_3 + param_5 == 0)) {
      uVar1 = FUN_0001e13c(param_1,*param_1,param_3,param_5,param_6);
    }
    else {
      FUN_0001d0d4(param_1,1,0xffffffff);
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



/* ===== FUN_00020010 @ 00020010 size=516 ===== */

undefined4 FUN_00020010(undefined4 param_1,int *param_2,int *param_3)

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
      param_1 = FUN_0001df38(*param_2,param_1,param_2,param_3);
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
          uVar4 = FUN_0001fb8c(param_2,uStack_1c,local_20,uStack_1c);
          iVar1 = FUN_0001fb8c(param_3,(int)((ulonglong)uVar4 >> 0x20),local_20,uStack_1c);
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



/* ===== FUN_00020214 @ 00020214 size=192 ===== */

void FUN_00020214(int *param_1)

{
  if (((*param_1 != 0x7f2bb70a) && (*param_1 != 0x7f2bb708)) && (*param_1 != 0x7f2bb709)) {
    (**(code **)(param_1[2] + 0x20))
              (param_1,*(code **)(param_1[2] + 0x20),param_1[6] + 1,
               param_1[7] + (uint)(0xfffffffe < (uint)param_1[6]),
               param_1[8] - (int)*(undefined8 *)(param_1 + 6));
    return;
  }
  FUN_0001e0a4(param_1);
  return;
}



/* ===== FUN_000202d4 @ 000202d4 size=680 ===== */

uint FUN_000202d4(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

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
    iVar1 = FUN_0001fb8c(param_1,param_4,param_3,param_4);
    uVar4 = (uint)(iVar1 == 0);
  }
  else if (((*param_1 == 0x7f2bb70a) || (*param_1 == 0x7f2bb708)) || (*param_1 == 0x7f2bb709)) {
    if (param_4 + CARRY4(param_3,param_5) == (uint)(param_3 + param_5 == 0)) {
      uVar4 = FUN_0001e78c(param_1,param_3,param_5);
    }
    else {
      FUN_0001d0d4(param_1,1,0xffffffff);
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
    FUN_00015c9c(0x7f2bb72f,uVar5,param_1[0xb]);
    uVar4 = 0x16;
  }
  else {
    uVar4 = 0x16;
  }
  return uVar4;
}



/* ===== FUN_0002057c @ 0002057c size=608 ===== */

void FUN_0002057c(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

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
        FUN_0001d0d4(param_1,1,0xffffffff);
        return;
      }
      FUN_0001e8fc(param_1,param_3,param_5);
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
      FUN_00015c9c(0x7f2bb72d,uVar4,param_1[0xb]);
    }
  }
  return;
}



/* ===== FUN_000207dc @ 000207dc size=608 ===== */

void FUN_000207dc(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

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
        FUN_0001d0d4(param_1,1,0xffffffff);
        return;
      }
      FUN_0001e9c4(param_1,param_3,param_5);
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
      FUN_00015c9c(0x7f2bb72e,uVar4,param_1[0xb]);
    }
  }
  return;
}



/* ===== FUN_00020a3c @ 00020a3c size=132 ===== */

void FUN_00020a3c(int param_1,undefined4 param_2)

{
  if ((param_1 == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    FUN_00044854(0,0x7f2bb70a,"called %s with 64-bit bitmap",param_2);
  }
  else {
    FUN_00044854(0,0x7f2bb70a,"called %s with 64-bit bitmap for %s",param_2,
                 *(undefined4 *)(param_1 + 0x2c));
  }
  return;
}



/* ===== FUN_00020ac0 @ 00020ac0 size=444 ===== */

int FUN_00020ac0(int param_1,int *param_2)

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
  iVar1 = FUN_000155b0(local_20);
  if (iVar2 == iVar1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0001521c(param_1,"converted cluster bitmap",&local_40);
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
        iVar1 = FUN_00021a64(local_20,uStack_14,local_18,uStack_14);
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
          FUN_00021a04(local_40,local_40,local_18,uStack_14);
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
      FUN_00015020(local_20);
      *param_2 = local_40;
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00020c7c @ 00020c7c size=800 ===== */

int FUN_00020c7c(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6
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
      iVar2 = FUN_0001e5c4(param_1,param_3,param_5,&local_34);
      if (iVar2 == 0) {
        *param_7 = local_34;
        param_7[1] = 0;
      }
    }
    else {
      FUN_0001d0d4(param_1,2,param_3);
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
    FUN_0001ea90(param_1,2,param_3,param_4);
    iVar2 = 0x16;
  }
  else {
    iVar2 = 0x16;
  }
  return iVar2;
}



/* ===== FUN_00020f9c @ 00020f9c size=800 ===== */

int FUN_00020f9c(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6
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
      iVar2 = FUN_0001e6a8(param_1,param_3,param_5,&local_34);
      if (iVar2 == 0) {
        *param_7 = local_34;
        param_7[1] = 0;
      }
    }
    else {
      FUN_0001d0d4(param_1,2,param_3);
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
    FUN_0001ea90(param_1,2,param_3,param_4);
    iVar2 = 0x16;
  }
  else {
    iVar2 = 0x16;
  }
  return iVar2;
}



/* ===== FUN_000212bc @ 000212bc size=272 ===== */

undefined4 FUN_000212bc(int *param_1,uint *param_2)

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
      uVar1 = FUN_00016fd0(param_1,local_c);
      if (uVar3 < uVar1) {
        uVar1 = uVar3 >> 3;
      }
      else {
        uVar1 = FUN_00016fd0(param_1,local_c);
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



/* ===== FUN_000213cc @ 000213cc size=108 ===== */

void FUN_000213cc(uint param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_2 + (param_1 >> 3));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_1 & 7));
  return;
}



/* ===== FUN_00021438 @ 00021438 size=116 ===== */

void FUN_00021438(uint param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_2 + (param_1 >> 3));
  *pbVar1 = ~(byte)(1 << (param_1 & 7)) & *pbVar1;
  return;
}



/* ===== FUN_000214ac @ 000214ac size=116 ===== */

void FUN_000214ac(uint param_1,int param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_1 & 7));
  return;
}



/* ===== FUN_00021520 @ 00021520 size=124 ===== */

void FUN_00021520(uint param_1,int param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_3 + (param_1 >> 3 | param_2 << 0x1d));
  *pbVar1 = ~(byte)(1 << (param_1 & 7)) & *pbVar1;
  return;
}



/* ===== FUN_000215cc @ 000215cc size=84 ===== */

uint FUN_000215cc(uint param_1)

{
  return param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}



/* ===== FUN_00021620 @ 00021620 size=116 ===== */

undefined8 FUN_00021620(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_000215cc(param_2);
  uVar2 = FUN_000215cc(param_1);
  return CONCAT44(uVar2,uVar1);
}



/* ===== FUN_00021694 @ 00021694 size=48 ===== */

undefined4 FUN_00021694(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d708(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000216c4 @ 000216c4 size=48 ===== */

undefined4 FUN_000216c4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d870(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000216f4 @ 000216f4 size=48 ===== */

undefined4 FUN_000216f4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d5a0(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00021724 @ 00021724 size=48 ===== */

undefined4 FUN_00021724(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d708(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00021754 @ 00021754 size=48 ===== */

undefined4 FUN_00021754(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d870(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00021784 @ 00021784 size=48 ===== */

undefined4 FUN_00021784(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d5a0(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000217b4 @ 000217b4 size=44 ===== */

void FUN_000217b4(undefined4 param_1,undefined4 param_2)

{
  FUN_0001d708(param_1,param_2);
  return;
}



/* ===== FUN_000217e0 @ 000217e0 size=44 ===== */

void FUN_000217e0(undefined4 param_1,undefined4 param_2)

{
  FUN_0001d870(param_1,param_2);
  return;
}



/* ===== FUN_0002180c @ 0002180c size=48 ===== */

undefined4 FUN_0002180c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d5a0(param_1,param_2);
  return uVar1;
}



/* ===== FUN_0002183c @ 0002183c size=44 ===== */

void FUN_0002183c(undefined4 param_1,undefined4 param_2)

{
  FUN_0001d708(param_1,param_2);
  return;
}



/* ===== FUN_00021868 @ 00021868 size=44 ===== */

void FUN_00021868(undefined4 param_1,undefined4 param_2)

{
  FUN_0001d870(param_1,param_2);
  return;
}



/* ===== FUN_00021894 @ 00021894 size=48 ===== */

undefined4 FUN_00021894(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d5a0(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000218c4 @ 000218c4 size=40 ===== */

undefined4 FUN_000218c4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d9d8(param_1);
  return uVar1;
}



/* ===== FUN_000218ec @ 000218ec size=40 ===== */

undefined4 FUN_000218ec(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001d9d8(param_1);
  return uVar1;
}



/* ===== FUN_00021914 @ 00021914 size=40 ===== */

undefined4 FUN_00021914(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001dad4(param_1);
  return uVar1;
}



/* ===== FUN_0002193c @ 0002193c size=40 ===== */

undefined4 FUN_0002193c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001dad4(param_1);
  return uVar1;
}



/* ===== FUN_00021964 @ 00021964 size=56 ===== */

undefined4 FUN_00021964(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e78c(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0002199c @ 0002199c size=52 ===== */

void FUN_0002199c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001e8fc(param_1,param_2,param_3);
  return;
}



/* ===== FUN_000219d0 @ 000219d0 size=52 ===== */

void FUN_000219d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001e9c4(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00021a04 @ 00021a04 size=48 ===== */

undefined4 FUN_00021a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f844(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00021a34 @ 00021a34 size=48 ===== */

undefined4 FUN_00021a34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f9e8(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00021a64 @ 00021a64 size=48 ===== */

undefined4 FUN_00021a64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fb8c(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00021a94 @ 00021a94 size=56 ===== */

undefined4 FUN_00021a94(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f844(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00021acc @ 00021acc size=56 ===== */

undefined4 FUN_00021acc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f9e8(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00021b04 @ 00021b04 size=56 ===== */

undefined4 FUN_00021b04(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fb8c(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00021b3c @ 00021b3c size=44 ===== */

void FUN_00021b3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0001f844(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00021b68 @ 00021b68 size=44 ===== */

void FUN_00021b68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0001f9e8(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00021b94 @ 00021b94 size=48 ===== */

undefined4 FUN_00021b94(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fb8c(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00021bc4 @ 00021bc4 size=52 ===== */

void FUN_00021bc4(undefined4 param_1,undefined4 param_2)

{
  FUN_0001f844(param_1,param_2,param_2,0);
  return;
}



/* ===== FUN_00021bf8 @ 00021bf8 size=52 ===== */

void FUN_00021bf8(undefined4 param_1,undefined4 param_2)

{
  FUN_0001f9e8(param_1,param_2,param_2,0);
  return;
}



/* ===== FUN_00021c2c @ 00021c2c size=56 ===== */

undefined4 FUN_00021c2c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fb8c(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00021c64 @ 00021c64 size=92 ===== */

int FUN_00021c64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_00020c7c(param_1,param_2,param_3,param_4,param_5,param_6,&local_18);
  if (iVar1 == 0) {
    *param_7 = local_18;
    param_7[1] = uStack_14;
  }
  return iVar1;
}



/* ===== FUN_00021cc0 @ 00021cc0 size=124 ===== */

int FUN_00021cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_00020c7c(param_1,0,param_2,0,param_3,0,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_00021d3c @ 00021d3c size=92 ===== */

int FUN_00021d3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_00020f9c(param_1,param_2,param_3,param_4,param_5,param_6,&local_18);
  if (iVar1 == 0) {
    *param_7 = local_18;
    param_7[1] = uStack_14;
  }
  return iVar1;
}



/* ===== FUN_00021d98 @ 00021d98 size=124 ===== */

int FUN_00021d98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_00020f9c(param_1,0,param_2,0,param_3,0,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_00021e14 @ 00021e14 size=48 ===== */

undefined4 FUN_00021e14(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f5d8(param_1);
  return uVar1;
}



/* ===== FUN_00021e44 @ 00021e44 size=48 ===== */

undefined4 FUN_00021e44(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f5d8(param_1);
  return uVar1;
}



/* ===== FUN_00021e74 @ 00021e74 size=48 ===== */

undefined4 FUN_00021e74(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f6cc(param_1);
  return uVar1;
}



/* ===== FUN_00021ea4 @ 00021ea4 size=48 ===== */

undefined4 FUN_00021ea4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f6cc(param_1);
  return uVar1;
}



/* ===== FUN_00021ed4 @ 00021ed4 size=56 ===== */

undefined4
FUN_00021ed4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000202d4(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}



/* ===== FUN_00021f0c @ 00021f0c size=52 ===== */

void FUN_00021f0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0002057c(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== FUN_00021f40 @ 00021f40 size=52 ===== */

void FUN_00021f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_000207dc(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== FUN_00021f74 @ 00021f74 size=88 ===== */

undefined4 FUN_00021f74(size_t param_1,undefined4 *param_2)

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



/* ===== FUN_00021fcc @ 00021fcc size=108 ===== */

undefined4 FUN_00021fcc(size_t param_1,undefined4 *param_2)

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



/* ===== FUN_00022038 @ 00022038 size=128 ===== */

undefined4 FUN_00022038(uint param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || ((int)((ulonglong)param_2 * (ulonglong)param_1 >> 0x20) == 0)) {
    uVar1 = FUN_00021f74(param_2 * param_1,param_3);
  }
  else {
    uVar1 = 0x7f2bb746;
  }
  return uVar1;
}



/* ===== FUN_000220b8 @ 000220b8 size=160 ===== */

undefined4 FUN_000220b8(uint param_1,uint param_2,undefined4 *param_3)

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



/* ===== FUN_00022158 @ 00022158 size=76 ===== */

undefined4 FUN_00022158(undefined4 *param_1)

{
  free((void *)*param_1);
  *param_1 = 0;
  return 0;
}



/* ===== FUN_000221a4 @ 000221a4 size=112 ===== */

undefined4 FUN_000221a4(undefined4 param_1,size_t param_2,undefined4 *param_3)

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



/* ===== FUN_00022214 @ 00022214 size=52 ===== */

void FUN_00022214(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 6;
  return;
}



/* ===== FUN_00022248 @ 00022248 size=52 ===== */

void FUN_00022248(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



/* ===== FUN_0002233c @ 0002233c size=52 ===== */

void FUN_0002233c(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x12;
  return;
}



/* ===== FUN_00022370 @ 00022370 size=52 ===== */

void FUN_00022370(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x22;
  return;
}



/* ===== FUN_000223a4 @ 000223a4 size=44 ===== */

uint FUN_000223a4(int param_1)

{
  return *(uint *)(param_1 + 8) & 0x10;
}



/* ===== FUN_000223d0 @ 000223d0 size=44 ===== */

uint FUN_000223d0(int param_1)

{
  return *(uint *)(param_1 + 8) & 0x20;
}



/* ===== FUN_000223fc @ 000223fc size=56 ===== */

undefined4 FUN_000223fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00016224(param_1,param_2,param_2,0);
  return uVar1;
}



/* ===== FUN_00022434 @ 00022434 size=68 ===== */

undefined4 FUN_00022434(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000513e0(param_2 + -1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28));
  return uVar1;
}



/* ===== FUN_00022478 @ 00022478 size=56 ===== */

undefined4 FUN_00022478(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00016290(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000224b0 @ 000224b0 size=56 ===== */

undefined4 FUN_000224b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00016308(param_1,param_2);
  return uVar1;
}



/* ===== FUN_000224e8 @ 000224e8 size=56 ===== */

undefined4 FUN_000224e8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001645c(param_1,param_2);
  return uVar1;
}



/* ===== FUN_00022520 @ 00022520 size=80 ===== */

int FUN_00022520(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_000513e0(param_1 + -1,param_2);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ===== FUN_00022570 @ 00022570 size=104 ===== */

longlong FUN_00022570(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  if (param_1 == 0 && param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_00051964(param_1 + -1,param_2 - (uint)(param_1 == 0),param_3,param_4);
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* ===== FUN_000225d8 @ 000225d8 size=44 ===== */

ushort FUN_000225d8(int param_1)

{
  return *(ushort *)(param_1 + 6) & 0xff;
}



/* ===== FUN_00022604 @ 00022604 size=92 ===== */

void FUN_00022604(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xff00 | param_2 & 0xff;
  return;
}



/* ===== FUN_00022690 @ 00022690 size=88 ===== */

void FUN_00022690(int param_1,short param_2)

{
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xff | param_2 << 8;
  return;
}



/* ===== FUN_00022730 @ 00022730 size=120 ===== */

int FUN_00022730(size_t param_1,uint param_2,void **param_3)

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



/* ===== FUN_000227a8 @ 000227a8 size=60 ===== */

bool FUN_000227a8(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_000227e4 @ 000227e4 size=60 ===== */

bool FUN_000227e4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 2) != 0;
}



/* ===== FUN_00022820 @ 00022820 size=60 ===== */

bool FUN_00022820(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x40) != 0;
}



/* ===== FUN_0002285c @ 0002285c size=204 ===== */

int FUN_0002285c(undefined4 *param_1)

{
  undefined4 local_10;
  int local_c;
  
  local_c = FUN_0003b6f0(*param_1,param_1[1],&local_10);
  if (local_c == 0) {
    local_c = FUN_0003a910(local_10);
    if ((local_c == 0) &&
       (local_c = FUN_0003b268(local_10,"system.data",param_1[3],param_1[2]), local_c == 0)) {
      local_c = FUN_00039df8(local_10);
    }
    FUN_0003b810(&local_10);
  }
  return local_c;
}



/* ===== FUN_00022928 @ 00022928 size=256 ===== */

int FUN_00022928(undefined4 *param_1)

{
  undefined4 local_10;
  int local_c;
  
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = FUN_0003b6f0(*param_1,param_1[1],&local_10);
  if (local_c == 0) {
    local_c = FUN_0003a910(local_10);
    if ((local_c == 0) &&
       (local_c = FUN_0003ae4c(local_10,"system.data",param_1 + 3,param_1 + 2),
       local_c == 0x7f2bb7a2)) {
      param_1[2] = 0;
      param_1[3] = 0;
      local_c = 0;
    }
    FUN_0003b810(&local_10);
  }
  return local_c;
}



/* ===== FUN_00022a28 @ 00022a28 size=88 ===== */

undefined4 FUN_00022a28(undefined4 param_1,undefined4 param_2)

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
  uVar1 = FUN_0002285c(&local_18);
  return uVar1;
}



/* ===== FUN_00022a80 @ 00022a80 size=196 ===== */

int FUN_00022a80(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [32];
  uint local_6c;
  int local_c;
  
  local_c = FUN_00025ef4(param_1,param_2,auStack_8c);
  if (local_c == 0) {
    if ((local_6c & 0x10000000) == 0) {
      local_c = 0x7f2bb7a5;
    }
    else {
      local_9c = param_1;
      local_98 = param_2;
      local_c = FUN_00022928(&local_9c);
      if (local_c == 0) {
        *param_3 = local_94 + 0x3c;
        local_c = FUN_00022158(auStack_90);
      }
    }
  }
  return local_c;
}



/* ===== FUN_00022b44 @ 00022b44 size=1256 ===== */

uint FUN_00022b44(undefined4 param_1,undefined4 param_2,int param_3)

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
  uVar1 = FUN_00025ef4(param_1,param_2,local_ac);
  *(undefined4 *)(local_1c + 0x18) = uVar1;
  if (*(int *)(local_1c + 0x18) == 0) {
    if ((local_8c & 0x10000000) == 0) {
      *(undefined4 *)(local_1c + 0x18) = 0x7f2bb7a5;
    }
    else if ((local_ac[0] & 0xf000) == 0x4000) {
      local_c = 0;
      local_1ae = 1;
      local_1b4 = param_2;
      FUN_0001ab2c(param_1,0xc,&local_1b4);
      local_1ac = 0x2e;
      local_1ab = 0;
      *(undefined4 **)(local_1c + 8) = &local_1b4;
      FUN_0001aa80(param_1,&local_1b4,local_1c + 0xc);
      uVar2 = (uint)local_18;
      iVar3 = local_18._4_4_;
      bVar4 = 0xfffffffe < (uint)local_18;
      local_18._0_4_ = (uint)local_18 + 1;
      local_18._4_4_ = local_18._4_4_ + (uint)bVar4;
      uVar2 = FUN_0001af58(param_1,0,uVar2,iVar3,0,0,param_3);
      local_c = local_c | uVar2;
      if ((local_c & 2) == 0) {
        local_1b4 = local_84;
        local_1ae = 2;
        FUN_0001ab2c(param_1,0xc,&local_1b4);
        local_1ac = 0x2e;
        local_1ab = 0x2e;
        local_1aa = 0;
        *(undefined4 **)(local_1c + 8) = &local_1b4;
        FUN_0001aa80(param_1,&local_1b4,local_1c + 0xc);
        iVar3 = local_18._4_4_;
        uVar2 = (uint)local_18;
        local_18 = CONCAT44(local_18._4_4_ + (uint)(0xfffffffe < (uint)local_18),(uint)local_18 + 1)
        ;
        uVar2 = FUN_0001af58(param_1,0,uVar2,iVar3,0,0,param_3);
        local_c = local_c | uVar2;
        if ((local_c & 8) != 0) {
          local_84 = local_1b4;
          iVar3 = FUN_000264b0(param_1,param_2,local_ac);
          if (iVar3 != 0) goto LAB_00022fec;
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
          uVar2 = FUN_0001af58(param_1,0,uVar2,iVar3,0,0,param_3);
          local_c = local_c | uVar2;
          if ((local_c & 8) != 0) {
            uVar1 = FUN_000264b0(param_1,param_2,local_ac);
            *(undefined4 *)(local_1c + 0x18) = uVar1;
            if (*(int *)(local_1c + 0x18) != 0) {
              local_c = local_c | 2;
            }
            local_c = local_c & 0xfffffff7;
          }
          if ((local_c & 2) == 0) {
            local_1c4 = param_1;
            local_1c0 = param_2;
            uVar1 = FUN_00022928(&local_1c4);
            *(undefined4 *)(local_1c + 0x18) = uVar1;
            if (*(int *)(local_1c + 0x18) == 0) {
              if (local_1bc != 0) {
                *(undefined4 *)(local_1c + 8) = local_1b8;
                *(int *)(local_1c + 0xc) = local_1bc;
                uVar2 = (uint)local_18;
                iVar3 = local_18._4_4_;
                local_18 = CONCAT44(local_18._4_4_ + (uint)(0xfffffffe < (uint)local_18),
                                    (uint)local_18 + 1);
                uVar2 = FUN_0001af58(param_1,0,uVar2,iVar3,0,0,param_3);
                local_c = local_c | uVar2;
                if ((local_c & 8) != 0) {
                  uVar1 = FUN_0002285c(&local_1c4);
                  *(undefined4 *)(local_1c + 0x18) = uVar1;
                  if (*(int *)(local_1c + 0x18) != 0) {
                    local_c = local_c | 2;
                  }
                }
              }
              FUN_00022158(&local_1b8);
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(local_1c + 0x18) = 0x7f2bb74a;
    }
  }
LAB_00022fec:
  *(undefined4 *)(local_1c + 8) = local_20;
  *(undefined4 *)(local_1c + 0xc) = local_24;
  *(undefined4 *)(local_1c + 4) = local_28;
  return local_c & 0xfffffff5;
}



/* ===== FUN_0002302c @ 0002302c size=188 ===== */

int FUN_0002302c(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  int local_c;
  
  local_c = FUN_0003b6f0(param_1,param_2,&local_10);
  if (local_c == 0) {
    local_c = FUN_0003a910(local_10);
    if ((local_c == 0) && (local_c = FUN_0003b5e0(local_10,"system.data"), local_c == 0)) {
      local_c = FUN_00039df8(local_10);
    }
    FUN_0003b810(&local_10);
  }
  return local_c;
}



/* ===== FUN_000230e8 @ 000230e8 size=632 ===== */

int FUN_000230e8(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,int param_5)

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
  iVar1 = FUN_000227a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    local_18 = 0xc;
  }
  iVar1 = FUN_000227e4(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    local_1c = 2;
  }
  *param_3 = param_2;
  local_c = param_3;
  FUN_00022604(param_3,1);
  FUN_00022690(local_c,local_1c);
  *(undefined1 *)(local_c + 2) = 0x2e;
  local_28 = (*(int *)(param_1 + 0x14) - local_18) + -0xc;
  *(undefined2 *)(local_c + 1) = 0xc;
  local_c = (undefined4 *)((int)param_3 + (uint)*(ushort *)(local_c + 1));
  *(undefined2 *)(local_c + 1) = 0xc;
  *local_c = *param_4;
  FUN_00022604(local_c,2);
  FUN_00022690(local_c,local_1c);
  *(undefined1 *)(local_c + 2) = 0x2e;
  *(undefined1 *)((int)local_c + 9) = 0x2e;
  local_14 = 0x18;
  local_c = param_3 + 6;
  memcpy(param_3 + 6,param_4 + 1,param_5 - 4);
  iVar1 = local_10;
  do {
    local_10 = iVar1;
    local_20 = local_c;
    local_10 = FUN_0001aa80(param_1,local_c,&local_28);
    if (local_10 != 0) {
      return local_10;
    }
    local_14 = local_14 + local_28;
    local_c = (undefined4 *)((int)param_3 + local_14);
    iVar1 = 0;
  } while (local_14 < param_5 + 0x14);
  local_28 = ((*(int *)(param_1 + 0x14) - local_18) - local_14) + local_28;
  local_10 = FUN_0001ab2c(param_1,local_28,local_20);
  if ((local_10 == 0) && (local_18 != 0)) {
    local_24 = (int)param_3 + *(int *)(param_1 + 0x14) + -0xc;
    FUN_00019220(param_1,local_24);
  }
  return local_10;
}



/* ===== FUN_00023360 @ 00023360 size=540 ===== */

int FUN_00023360(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  local_c = FUN_00021fcc(*(undefined4 *)(param_1 + 0x14),&local_1c);
  if (local_c == 0) {
    uVar2 = FUN_000230e8(param_1,param_2,local_1c,param_4,param_5);
    local_c = (int)uVar2;
    if ((local_c == 0) &&
       (local_c = FUN_00030060(param_1,(int)((ulonglong)uVar2 >> 0x20),0,0,0,&local_18),
       local_c == 0)) {
      uVar3 = 0;
      local_c = FUN_000386d4(param_1,local_1c,local_18,uStack_14,local_1c,0,param_2);
      if (local_c == 0) {
        iVar1 = FUN_00022820(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 0) {
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x80000;
        }
        *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xefffffff;
        local_c = FUN_000419e4(param_1,param_3,1,0);
        if (local_c == 0) {
          *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x14);
          local_c = FUN_000377ac(param_1,param_2,param_3,0,2,uVar3,0,0,&local_18);
          if ((local_c == 0) && (local_c = FUN_000264b0(param_1,param_2,param_3), local_c == 0)) {
            FUN_0003171c(param_1,local_18,1);
          }
        }
      }
    }
    FUN_00022158(&local_1c);
  }
  return local_c;
}



/* ===== FUN_0002357c @ 0002357c size=324 ===== */

int FUN_0002357c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  memset((void *)(param_3 + 0x28),0,0x3c);
  iVar1 = FUN_00022820(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfff7ffff;
    local_c = FUN_0003bb8c(param_1,param_2,param_3,&local_14);
    if (local_c != 0) {
      return local_c;
    }
    FUN_0003ba88(local_14);
  }
  *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xefffffff;
  *(undefined4 *)(param_3 + 4) = 0;
  local_c = FUN_000264b0(param_1,param_2,param_3);
  if ((local_c == 0) && (local_c = FUN_0001b5f0(param_1,param_2,1,&local_10), local_c == 0)) {
    local_c = FUN_0001c270(local_10,param_4,param_5,0);
    FUN_0001bba0(local_10);
  }
  return local_c;
}



/* ===== FUN_000236c0 @ 000236c0 size=596 ===== */

int FUN_000236c0(int *param_1,undefined4 param_2)

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
    local_c = FUN_00025ef4(param_1,param_2,local_90);
    if (local_c == 0) {
      if ((local_70 & 0x10000000) == 0) {
        local_c = 0x7f2bb7a5;
      }
      else {
        local_a0 = param_1;
        local_9c = param_2;
        local_c = FUN_00022928(&local_a0);
        if (local_c == 0) {
          local_10 = local_98 + 0x3c;
          local_c = FUN_00021f74(local_10,&local_a4);
          if (local_c == 0) {
            memcpy(local_a4,auStack_68,0x3c);
            if (local_98 != 0) {
              memcpy((void *)((int)local_a4 + 0x3c),local_94,local_98);
            }
            memset(auStack_68,0,0x3c);
            local_c = FUN_000264b0(param_1,param_2,local_90);
            if (((local_c == 0) && (local_c = FUN_0002302c(param_1,param_2), local_c == 0)) &&
               (local_c = FUN_00025ef4(param_1,param_2,local_90), local_c == 0)) {
              if ((local_90[0] & 0xf000) == 0x4000) {
                local_c = FUN_00023360(param_1,param_2,local_90,local_a4,local_10);
              }
              else {
                local_c = FUN_0002357c(param_1,param_2,local_90,local_a4,local_10);
              }
            }
          }
          if (local_a4 != (void *)0x0) {
            FUN_00022158(&local_a4);
          }
          FUN_00022158(&local_94);
        }
      }
    }
  }
  else {
    local_c = 0x7f2bb701;
  }
  return local_c;
}



/* ===== FUN_00023914 @ 00023914 size=264 ===== */

int FUN_00023914(undefined4 param_1,undefined4 param_2,undefined1 *param_3,void *param_4,
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
    iVar1 = FUN_00025ef4(param_1,param_2,auStack_8c);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_ac = auStack_8c;
    local_c = 0;
  }
  local_9c = param_1;
  local_98 = param_2;
  local_c = FUN_00022928(&local_9c);
  if (local_c == 0) {
    memcpy(param_4,local_ac + 0x28,0x3c);
    if (local_94 != 0) {
      memcpy((void *)((int)param_4 + 0x3c),local_90,local_94);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = local_94 + 0x3c;
    }
    FUN_00022158(&local_90);
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_00023a1c @ 00023a1c size=492 ===== */

int FUN_00023a1c(undefined4 param_1,undefined4 param_2,undefined1 *param_3,void *param_4,
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
    iVar1 = FUN_00025ef4(param_1,param_2,auStack_90);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_b4 = auStack_90;
    local_10 = 0;
  }
  if (param_5 < 0x3d) {
    memcpy(local_b4 + 0x28,param_4,param_5);
    local_10 = FUN_000264b0(param_1,param_2,local_b4);
  }
  else {
    local_10 = FUN_0003affc(param_1,param_2,&local_a4);
    if ((local_10 == 0) && (local_10 = FUN_00022a80(param_1,param_2,&local_a8), local_10 == 0)) {
      if (local_a8 < 0x3c) {
        local_c = 0x3c - local_a8;
      }
      else {
        local_c = 0;
      }
      if ((param_5 == local_a8) || (param_5 <= local_a8 + local_a4 + local_c)) {
        memcpy(local_b4 + 0x28,param_4,0x3c);
        local_10 = FUN_000264b0(param_1,param_2,local_b4);
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
          local_10 = FUN_0002285c(&local_a0);
        }
      }
      else {
        local_10 = 0x7f2bb7a7;
      }
    }
  }
  return local_10;
}



/* ===== FUN_00023c08 @ 00023c08 size=60 ===== */

bool FUN_00023c08(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_00023c44 @ 00023c44 size=60 ===== */

bool FUN_00023c44(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_00023c80 @ 00023c80 size=96 ===== */

undefined4 FUN_00023c80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00023c44(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00023c08(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00023ce0 @ 00023ce0 size=156 ===== */

undefined4 FUN_00023ce0(int param_1)

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



/* ===== FUN_00023d7c @ 00023d7c size=220 ===== */

void FUN_00023d7c(int *param_1)

{
  int *local_14 [2];
  uint local_c;
  
  param_1[6] = param_1[6] + -1;
  if (param_1[6] == 0) {
    local_14[0] = param_1;
    if (*param_1 != 0) {
      FUN_00022158(param_1);
    }
    for (local_c = 0; local_c < (uint)local_14[0][5]; local_c = local_c + 1) {
      FUN_00022158(local_14[0][7] + local_c * 8 + 4);
    }
    if (local_14[0][7] != 0) {
      FUN_00022158(local_14[0] + 7);
    }
    local_14[0][2] = 0;
    local_14[0][3] = 0;
    FUN_00022158(local_14);
  }
  return;
}



/* ===== FUN_00023e58 @ 00023e58 size=496 ===== */

int FUN_00023e58(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int local_10;
  uint local_c;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    local_10 = FUN_00021f74(0x20,param_1 + 0x84);
    if (local_10 == 0) {
      memset(*(void **)(param_1 + 0x84),0,0x20);
      local_10 = FUN_00021f74(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x84));
      if (local_10 == 0) {
        *(undefined8 *)(*(int *)(param_1 + 0x84) + 8) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x10) = 0xffffffff;
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x14) = param_2;
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x18) = 1;
        local_10 = FUN_00022038(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x14),8,
                                *(int *)(param_1 + 0x84) + 0x1c);
        if (local_10 == 0) {
          local_c = 0;
          while( true ) {
            if (*(uint *)(*(int *)(param_1 + 0x84) + 0x14) <= local_c) {
              FUN_00023ce0(param_1);
              return 0;
            }
            if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
              uVar1 = 0x80;
            }
            else {
              uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x58);
            }
            local_10 = FUN_00021f74(uVar1,*(int *)(*(int *)(param_1 + 0x84) + 0x1c) + local_c * 8 +
                                          4);
            if (local_10 != 0) break;
            local_c = local_c + 1;
          }
        }
      }
      FUN_00023d7c(*(undefined4 *)(param_1 + 0x84));
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_00024048 @ 00024048 size=1068 ===== */

int FUN_00024048(int *param_1,int param_2,undefined4 *param_3)

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
      local_18 = FUN_0002bbf8(param_1,param_1 + 0x12);
      if ((local_18 != 0) && (param_1[0x12] != 0)) {
        FUN_0001cff0(param_1[0x12]);
        param_1[0x12] = 0;
      }
      param_1[0xd] = local_14;
    }
    local_18 = FUN_00021f74(0x68,&local_20);
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
      uVar6 = FUN_00016cbc(local_20[1],local_20[6]);
      *(undefined8 *)(puVar1 + 4) = uVar6;
      local_20[7] = *(undefined4 *)(*(int *)(local_20[1] + 0x10) + 0x28);
      local_20[8] = *(undefined4 *)(local_20[1] + 0x28);
      iVar2 = FUN_00023c80(param_1);
      if (iVar2 != 0) {
        local_1c = FUN_000170cc(param_1,local_20[6]);
        if (local_1c < (uint)local_20[7]) {
          local_20[7] = local_20[7] - local_1c;
        }
        else {
          local_20[7] = 0;
        }
        iVar5 = local_20[7];
        iVar2 = FUN_000513e0(param_1[5],local_20[0xc]);
        puVar1 = local_20;
        uVar3 = FUN_000513e0(local_20[0xc] * (iVar5 + iVar2 + -1),param_1[5]);
        puVar1[8] = uVar3;
      }
      local_18 = FUN_00026d7c(param_1[1],local_20[10],local_20 + 0xb);
      local_20[0x10] = 0;
      local_20[0x11] = 0;
      local_20[0x12] = 0;
      if (local_18 == 0) {
        local_18 = FUN_00021f74(local_20[0xc] + local_20[10],local_20 + 0xf);
        if (local_18 == 0) {
          memset((void *)(local_20[0xf] + local_20[0xc]),0,local_20[10]);
          if ((*(int *)(local_20[1] + 0x48) != 0) &&
             (*(int *)(*(int *)(local_20[1] + 0x48) + 4) != 0)) {
            local_20[0x13] = local_20[0x13] | 1;
          }
          iVar2 = FUN_00023c80(param_1);
          if (iVar2 != 0) {
            local_20[0x13] = local_20[0x13] | 0x10;
          }
          *param_3 = local_20;
          local_18 = 0;
        }
        else {
          FUN_00022158(local_20 + 0xb);
          FUN_00022158(&local_20);
        }
      }
      else {
        FUN_00022158(&local_20);
      }
    }
  }
  else {
    local_18 = 0x7f2bb701;
  }
  return local_18;
}



/* ===== FUN_00024474 @ 00024474 size=140 ===== */

void FUN_00024474(int *param_1)

{
  int *local_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7f2bb704)) {
    local_c = param_1;
    FUN_00022158(param_1 + 0xb);
    local_c[0xb] = 0;
    FUN_00022158(local_c + 0xf);
    local_c[0xf] = 0;
    FUN_00022158(&local_c);
  }
  return;
}



/* ===== FUN_00024600 @ 00024600 size=408 ===== */

undefined4 FUN_00024600(int param_1)

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
  uVar6 = FUN_00016cbc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(int *)(param_1 + 8) = *(int *)(*(int *)(iVar4 + 0x10) + 0x28) * *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar4 + 0x28);
  iVar1 = FUN_00023c80(iVar4);
  if (iVar1 != 0) {
    uVar2 = FUN_000170cc(iVar4,*(undefined4 *)(param_1 + 0x18));
    if (uVar2 < *(uint *)(param_1 + 0x1c)) {
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar1 = FUN_000513e0(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(param_1 + 0x30));
    uVar3 = FUN_000513e0(*(int *)(param_1 + 0x30) * (iVar5 + iVar1 + -1),
                         *(undefined4 *)(iVar4 + 0x14));
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  return 0;
}



/* ===== FUN_00024798 @ 00024798 size=92 ===== */

undefined4 FUN_00024798(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x18) = param_2 + -1;
  *(int *)(param_1 + 0x24) = *(int *)(*(int *)(param_1 + 4) + 0x1c) - param_2;
  uVar1 = FUN_00024600(param_1);
  return uVar1;
}



/* ===== FUN_000247f4 @ 000247f4 size=496 ===== */

undefined4 FUN_000247f4(int param_1,int *param_2)

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



/* ===== FUN_000249e4 @ 000249e4 size=464 ===== */

bool FUN_000249e4(int param_1,ushort *param_2)

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
              uVar4 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
              iVar1 = (int)((ulonglong)uVar4 >> 0x20);
              bVar3 = iVar1 == 0;
              if (iVar1 == 0) {
                bVar3 = (uint)uVar4 <= uVar2;
              }
              if (!bVar3) goto LAB_00024b7c;
            }
            local_18 = local_18 + 1;
          }
LAB_00024b7c:
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



/* ===== FUN_00024bb4 @ 00024bb4 size=92 ===== */

undefined4 FUN_00024bb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(uint *)(param_1 + 0x20) & 0x80000) == 0) ||
     (iVar1 = FUN_0003b994(param_1 + 0x28,0x3c), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00024c10 @ 00024c10 size=968 ===== */

void FUN_00024c10(int param_1,undefined4 param_2,uint param_3,int param_4)

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
    uVar5 = FUN_00051964((int)lVar1,uVar5 * param_4 + (int)((ulonglong)lVar1 >> 0x20),
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
    uVar5 = FUN_000514a8(0x400 << (*(uint *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x18) & 0xff),
                         uVar4);
    if (1 < uVar5) {
      while (local_10 != 0) {
        iVar2 = FUN_000513e0(local_1c - *(int *)(param_1 + 0x2c),
                             *(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
        iVar3 = FUN_0001a268(*(undefined4 *)(param_1 + 4),local_c,local_1c);
        if (iVar3 == 0) {
          local_18 = local_18 + 1;
          local_14 = local_14 + 1;
        }
        else {
          iVar3 = FUN_00024bb4(local_1c);
          if ((iVar3 != 0) ||
             (iVar3 = FUN_000249e4(*(undefined4 *)(param_1 + 4),local_1c), iVar3 != 0)) {
            local_14 = local_14 + 1;
          }
        }
        if (uVar5 >> 1 < local_14) {
          *(byte *)((int)__s + iVar2) = *(byte *)((int)__s + iVar2) | 2;
          FUN_00051488(local_c + -1,uVar5);
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
          FUN_00051488(local_c,uVar5);
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



/* ===== FUN_00024fd8 @ 00024fd8 size=536 ===== */

int FUN_00024fd8(int param_1)

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
     (local_c = FUN_000247f4(param_1,&local_18), local_c == 0)) {
    if (((*(uint *)(param_1 + 0x4c) & 2) == 0) &&
       (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0)) {
      local_c = FUN_00026ad4(*(undefined4 *)(*(int *)(param_1 + 4) + 4),
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
    FUN_00024c10(param_1);
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



/* ===== FUN_000251f0 @ 000251f0 size=1576 ===== */

int FUN_000251f0(int *param_1,int *param_2,void *param_3,size_t param_4)

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
    if (param_1[7] != 0) goto LAB_0002534c;
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
        local_14 = FUN_00024600(param_1);
        if (local_14 != 0) {
          return local_14;
        }
LAB_0002534c:
      } while ((((param_1[0x13] & 0x10U) != 0) &&
               (iVar3 = FUN_00017254(param_1[1],param_1[6],1), iVar3 != 0)) || (param_1[7] == 0));
      if (param_1[4] != 0 || param_1[5] != 0) {
        if (param_1[0xe] < param_1[0xc]) {
          if (param_1[0xe] != 0) {
            memcpy((void *)param_1[0xf],(void *)param_1[0xd],param_1[0xe]);
          }
          local_18 = param_1[0xe];
          local_14 = FUN_00024fd8(param_1);
          if (local_14 != 0) {
            return local_14;
          }
        }
        if (((int)param_4 < (int)local_1c) && (iVar3 = FUN_00021f74(local_1c,&local_28), iVar3 != 0)
           ) {
          return iVar3;
        }
        local_14 = 0;
        FUN_00051488(param_1[2],*(undefined4 *)(*(int *)(param_1[1] + 0x10) + 0x28));
        if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
          uVar2 = 0x80;
        }
        else {
          uVar2 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
        }
        uVar1 = FUN_000514a8(0x400 << (*(uint *)(*(int *)(param_1[1] + 0x10) + 0x18) & 0xff),uVar2);
        uVar1 = FUN_000513e0(extraout_r1,uVar1);
        FUN_00051488(uVar1,param_1[10]);
        local_24 = extraout_r1_00;
        if (local_18 == 0) {
          if ((((*(byte *)(local_20 + extraout_r1_00) & 1) == 0) &&
              ((*(uint *)(param_1[1] + 8) & 0x200000) == 0)) &&
             (iVar3 = FUN_0001a268(param_1[1],param_1[2] + 1,param_1[0xd]), iVar3 == 0)) {
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
             (iVar3 = FUN_0001a268(param_1[1],param_1[2] + 1,param_1[0xf]), iVar3 == 0)) {
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
        FUN_00022158(&local_28);
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



/* ===== FUN_00025818 @ 00025818 size=60 ===== */

undefined4 FUN_00025818(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000251f0(param_1,param_2,param_3,0x80);
  return uVar1;
}



/* ===== FUN_00025854 @ 00025854 size=1696 ===== */

int FUN_00025854(int *param_1,uint param_2,void *param_3,size_t param_4)

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
      else if ((param_1[0x21] != 0) || (iVar6 = FUN_00023e58(param_1,4), iVar6 == 0)) {
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
          uVar3 = FUN_000513e0(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
          if ((uint)param_1[7] < uVar3) {
            return 0x7f2bb729;
          }
          FUN_00051488(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
          if (*(int *)(param_1[4] + 0x4c) == 0) {
            local_14 = 0x80;
          }
          else {
            local_14 = (uint)*(ushort *)(param_1[4] + 0x58);
          }
          local_14 = extraout_r1_00 * local_14;
          uVar1 = local_14 >> (*(int *)(param_1[4] + 0x18) + 10U & 0xff);
          lVar10 = FUN_00016cbc(param_1,uVar3);
          if (lVar10 == 0) {
            return 0x7f2bb73b;
          }
          lVar10 = FUN_00016cbc(param_1,uVar3);
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
          uVar2 = FUN_000513e0(param_1[5],uVar5);
          uVar3 = FUN_000513e0(*(undefined4 *)(param_1[0x16] + 0x120),param_1[5]);
          uVar4 = FUN_000513e0(param_2 - 1,uVar2);
          uVar8 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x20);
          lVar10 = CONCAT44((int)((ulonglong)uVar8 >> 0x20) + (uint)CARRY4((uint)uVar8,uVar3),
                            (uint)uVar8 + uVar3);
          FUN_00051488(param_2 - 1,uVar2);
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
        FUN_00051488(*(int *)(param_1[0x21] + 0x10) + 1,*(undefined4 *)(param_1[0x21] + 0x14));
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
            iVar6 = FUN_00026ad4(local_24,uStack_c,local_10,uStack_c,1,*(undefined4 *)param_1[0x21])
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
        iVar6 = FUN_0001a268(param_1,param_2,__src);
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



/* ===== FUN_00025ef4 @ 00025ef4 size=60 ===== */

undefined4 FUN_00025ef4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00025854(param_1,param_2,param_3,0x80);
  return uVar1;
}



/* ===== FUN_00025f30 @ 00025f30 size=1408 ===== */

int FUN_00025f30(int *param_1,uint param_2,void *param_3,size_t param_4)

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
  local_18 = FUN_00021f74(local_28,&local_38);
  if (local_18 != 0) {
    return local_18;
  }
  iVar1 = 0;
  if ((int)param_4 < (int)local_28) {
    local_2c = param_1[2];
    param_1[2] = param_1[2] | 0x200000;
    local_18 = FUN_00025854(param_1,param_2,local_38,local_28);
    param_1[2] = local_2c & 0x200000 | param_1[2] & 0xffdfffffU;
    iVar1 = local_18;
    if (local_18 != 0) goto LAB_00026494;
  }
  local_18 = iVar1;
  if (param_1[0x21] == 0) {
    local_18 = FUN_00023e58(param_1,4);
    if (local_18 != 0) goto LAB_00026494;
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
    local_18 = FUN_0001a3e4(param_1,param_2,local_38);
    if (local_18 == 0) {
      local_30 = FUN_000513e0(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
      FUN_00051488(param_2 - 1,*(undefined4 *)(param_1[4] + 0x28));
      if (*(int *)(param_1[4] + 0x4c) == 0) {
        local_14 = 0x80;
      }
      else {
        local_14 = (uint)*(ushort *)(param_1[4] + 0x58);
      }
      local_14 = extraout_r1 * local_14;
      local_34 = local_14 >> (*(int *)(param_1[4] + 0x18) + 10U & 0xff);
      lVar3 = FUN_00016cbc(param_1,local_30);
      if (lVar3 == 0) {
        local_18 = 0x7f2bb73b;
        local_10 = CONCAT44(local_10._4_4_,(undefined4)local_10);
      }
      else {
        lVar3 = FUN_00016cbc(param_1,local_30);
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
            local_18 = FUN_00026ad4(param_1[1],param_1[1],(undefined4)local_10,local_10._4_4_,1,
                                    *(undefined4 *)param_1[0x21]);
            local_10 = lVar3;
            if (local_18 != 0) goto LAB_00026494;
            *(longlong *)(param_1[0x21] + 8) = local_10;
            local_18 = 0;
            lVar3 = local_10;
          }
          local_10 = lVar3;
          memcpy((void *)(*(int *)param_1[0x21] + local_14),local_1c,local_24);
          local_18 = FUN_00026ba0(param_1[1],param_1[1],(undefined4)local_10,local_10._4_4_,1,
                                  *(undefined4 *)param_1[0x21]);
          if (local_18 != 0) goto LAB_00026494;
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
LAB_00026494:
  FUN_00022158(&local_38);
  return local_18;
}



/* ===== FUN_000264b0 @ 000264b0 size=60 ===== */

undefined4 FUN_000264b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00025f30(param_1,param_2,param_3,0x80);
  return uVar1;
}



/* ===== FUN_000264ec @ 000264ec size=420 ===== */

undefined4 FUN_000264ec(int param_1,undefined4 param_2,void *param_3)

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
    uVar1 = FUN_00025f30(param_1,param_2,param_3,0x80);
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
      uVar1 = FUN_00025f30(param_1,param_2,__s,__size);
      free(__s);
    }
  }
  return uVar1;
}



/* ===== FUN_00026690 @ 00026690 size=296 ===== */

int FUN_00026690(int *param_1,uint param_2,int param_3)

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
      iVar1 = FUN_00025ef4(param_1,param_2,auStack_90);
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



/* ===== FUN_000267b8 @ 000267b8 size=248 ===== */

int FUN_000267b8(int *param_1,uint param_2)

{
  ushort local_8c [64];
  int local_c;
  
  if (*param_1 == 0x7f2bb701) {
    if (*(uint *)param_1[4] < param_2) {
      local_c = 0x7f2bb729;
    }
    else if (((param_1[0xe] == 0) ||
             (local_c = (*(code *)param_1[0xe])(param_1,param_2), local_c == 0x7f2bb741)) &&
            (local_c = FUN_00025ef4(param_1,param_2,local_8c), local_c == 0)) {
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



/* ===== FUN_000268b0 @ 000268b0 size=404 ===== */

int FUN_000268b0(int *param_1,char *param_2)

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



/* ===== FUN_00026a44 @ 00026a44 size=144 ===== */

undefined4 FUN_00026a44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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



/* ===== FUN_00026ad4 @ 00026ad4 size=204 ===== */

undefined4
FUN_00026ad4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
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



/* ===== FUN_00026ba0 @ 00026ba0 size=204 ===== */

undefined4
FUN_00026ba0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
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



/* ===== FUN_00026c6c @ 00026c6c size=136 ===== */

undefined4
FUN_00026c6c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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



/* ===== FUN_00026cf4 @ 00026cf4 size=136 ===== */

undefined4
FUN_00026cf4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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



/* ===== FUN_00026d7c @ 00026d7c size=176 ===== */

undefined4 FUN_00026d7c(int param_1,int param_2,undefined4 param_3)

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
    uVar1 = FUN_00021f74(local_c,param_3);
  }
  else {
    uVar1 = FUN_00022730(local_c,*(undefined4 *)(param_1 + 0x60),param_3);
  }
  return uVar1;
}



/* ===== FUN_00026e2c @ 00026e2c size=100 ===== */

undefined4
FUN_00026e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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



/* ===== FUN_00026e90 @ 00026e90 size=52 ===== */

void FUN_00026e90(int param_1)

{
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
  return;
}



/* ===== FUN_00026ec4 @ 00026ec4 size=60 ===== */

bool FUN_00026ec4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 8) != 0;
}



/* ===== FUN_00026f00 @ 00026f00 size=60 ===== */

bool FUN_00026f00(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x40) != 0;
}



/* ===== FUN_00026f3c @ 00026f3c size=460 ===== */

int FUN_00026f3c(int param_1,uint param_2,uint param_3,undefined4 *param_4)

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
    local_14 = FUN_00021f74(*(undefined4 *)(param_1 + 0x14),&local_18);
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
      iVar4 = FUN_00026ec4(*(undefined4 *)(param_1 + 0x10));
      if (iVar4 != 0) {
        local_18[0x10] = 0;
        iVar4 = FUN_00027d08(*(undefined4 *)(param_1 + 0x14));
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



/* ===== FUN_00027108 @ 00027108 size=456 ===== */

int FUN_00027108(int param_1,char *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  void *local_1c;
  ssize_t local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_1c = (void *)0x0;
  local_c = FUN_00026f3c(param_1,param_3,param_4,&local_1c);
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
              goto LAB_000272ac;
            }
            if (local_18 != *(int *)(param_1 + 0x14)) goto LAB_000272ac;
          }
        }
        local_c = 0;
      }
LAB_000272ac:
      close(local_14);
    }
    FUN_00022158(&local_1c);
  }
  return local_c;
}



/* ===== FUN_000272d0 @ 000272d0 size=884 ===== */

int FUN_000272d0(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,uint *param_6,
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
    if (DAT_0006c0cc != (void *)0x0) {
      free(DAT_0006c0cc);
      DAT_0006c0cc = (void *)0x0;
      DAT_0006c0d0 = 0;
    }
  }
  else if ((0 < param_5) &&
          (iVar1 = FUN_00026cf4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,
                                param_4,param_5,param_5 >> 0x1f), iVar1 != 0)) {
    if ((DAT_0006c0d0 < param_5) &&
       (iVar1 = FUN_000514a8(0x400000,*(undefined4 *)(param_1 + 0x14)), DAT_0006c0d0 < iVar1)) {
      local_1c = param_5;
      iVar1 = FUN_000514a8(0x400000,*(undefined4 *)(param_1 + 0x14));
      if (iVar1 < param_5) {
        local_1c = FUN_000514a8(0x400000,*(undefined4 *)(param_1 + 0x14));
      }
      __s = realloc(DAT_0006c0cc,local_1c * *(int *)(param_1 + 0x14));
      if (__s == (void *)0x0) {
        return 0x7f2bb746;
      }
      DAT_0006c0d0 = local_1c;
      DAT_0006c0cc = __s;
      memset(__s,0,local_1c * *(int *)(param_1 + 0x14));
    }
    local_14 = 0;
    local_38 = param_3;
    uStack_34 = param_4;
    while (local_14 < param_5) {
      FUN_00051964(local_38,uStack_34,DAT_0006c0d0,DAT_0006c0d0 >> 0x1f);
      local_18 = DAT_0006c0d0;
      if (extraout_r2 == 0 && extraout_r3 == 0) {
        local_18 = param_5 - local_14;
        if (DAT_0006c0d0 < local_18) {
          local_18 = DAT_0006c0d0;
        }
      }
      else {
        FUN_00051964(local_38,uStack_34,DAT_0006c0d0,DAT_0006c0d0 >> 0x1f);
        local_18 = local_18 - extraout_r2_00;
        if (param_5 - local_14 < local_18) {
          local_18 = param_5 - local_14;
        }
      }
      iVar1 = FUN_00026ba0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),local_38,
                           uStack_34,local_18,DAT_0006c0cc);
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



/* ===== FUN_00027644 @ 00027644 size=116 ===== */

int FUN_00027644(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_000272d0(param_1,param_3,param_2,0,param_3,local_18,param_5);
  if (iVar1 != 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_000276b8 @ 000276b8 size=484 ===== */

undefined4 FUN_000276b8(int param_1)

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
  
  uVar7 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
  uVar6 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x20);
  uVar5 = iVar1 - ((int)((ulonglong)uVar6 >> 0x20) + (uint)((uint)uVar7 < (uint)uVar6));
  local_14 = FUN_00016224(param_1,iVar1,(uint)uVar7 - (uint)uVar6 >> 1 | uVar5 * -0x80000000,
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
           (iVar1 = FUN_00016dd8(param_1,local_14), iVar1 == 0))) {
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
    uVar2 = FUN_00016dd8(param_1,local_1c);
    uVar3 = FUN_00016dd8(param_1,local_14);
    local_18 = local_1c;
    if (uVar3 < uVar2) {
      local_14 = local_1c;
    }
  }
  uVar4 = FUN_00016290(param_1,local_14);
  return uVar4;
}



/* ===== FUN_0002789c @ 0002789c size=824 ===== */

int FUN_0002789c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
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
  local_c = FUN_00026f3c(param_1,param_3,param_7,&local_1c);
  if (local_c == 0) {
    local_c = FUN_0002d044(param_1);
    if ((local_c == 0) && (local_c = FUN_00025ef4(param_1,param_2,local_9c), local_c == 0)) {
      if (local_80 == 0) {
        if (param_6 == -1 && param_5 == -1) {
          uVar2 = FUN_000276b8(param_1);
        }
        param_6 = (int)((ulonglong)uVar2 >> 0x20);
        iVar1 = FUN_00026f00(*(undefined4 *)(param_1 + 0x10));
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
        local_c = FUN_00017514(param_1,local_9c,(undefined4)local_18,local_18._4_4_);
        if ((((local_c == 0) &&
             (local_c = FUN_000415b0(param_1,local_10,param_2,local_9c,uVar2,0,param_3,0),
             local_c == 0)) && (local_c = FUN_000264ec(param_1,param_2,local_9c), local_c == 0)) &&
           ((local_c = FUN_000377ac(param_1,param_2,local_9c,0,0,param_6,0,0,&local_a8),
            local_c == 0 &&
            (local_c = FUN_00026ba0(*(undefined4 *)(param_1 + 4),1,local_a8,uStack_a4,1,local_1c),
            local_c == 0)))) {
          memcpy((void *)(*(int *)(param_1 + 0x10) + 0x10c),auStack_74,0x3c);
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x148) = local_30;
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14c) = local_98;
          *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xfd) = 1;
          FUN_00022214(param_1);
        }
      }
      else {
        local_c = 0x11;
      }
    }
    FUN_00022158(&local_1c);
  }
  return local_c;
}



/* ===== FUN_00027d08 @ 00027d08 size=56 ===== */

undefined4 FUN_00027d08(int param_1)

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



/* ===== FUN_00027d40 @ 00027d40 size=772 ===== */

int FUN_00027d40(int param_1,int param_2)

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
    local_18 = FUN_00027d08(*(undefined4 *)(param_2 + 0x14));
    local_1c = FUN_00026ad4(*(undefined4 *)(param_2 + 4),local_18 >> 0x1f,local_18,local_18 >> 0x1f,
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
          local_1c = FUN_00026ba0(*(undefined4 *)(param_2 + 4),local_18 >> 0x1f,local_18,
                                  local_18 >> 0x1f,0xfffffc00,local_480);
          if (local_1c == 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe0) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe4) = (undefined4)sStack_80.st_rdev;
            memcpy((void *)(*(int *)(param_1 + 0x10) + 0xd0),local_20 + 0xc,0x10);
            memset((void *)(*(int *)(param_1 + 0x10) + 0x10c),0,0x44);
            FUN_00026e90(*(undefined4 *)(param_1 + 0x10));
            FUN_00022214(param_1);
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



/* ===== FUN_00028044 @ 00028044 size=972 ===== */

int FUN_00028044(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
    local_c = FUN_0004282c(*(undefined4 *)(param_1 + 0xc),&local_474,acStack_470,0x3f6);
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
      local_c = FUN_0002789c(param_1,8,param_2,param_4,param_3,param_4,param_5);
      if (local_c != 0) {
        return local_c;
      }
LAB_0002838c:
      *(__ino_t *)(*(int *)(param_1 + 0x10) + 0xe0) = local_10;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe4) = 0;
      memset((void *)(*(int *)(param_1 + 0x10) + 0xd0),0,0x10);
      FUN_00026e90(*(undefined4 *)(param_1 + 0x10));
      FUN_00022214(param_1);
      return 0;
    }
    local_c = 0x10;
  }
  else {
    local_478 = 0;
    sVar1 = strlen(acStack_470);
    *(undefined4 *)(acStack_470 + sVar1) = s___journal_0005431c._0_4_;
    *(undefined4 *)(acStack_46c + sVar1) = s___journal_0005431c._4_4_;
    *(undefined2 *)(acStack_468 + sVar1) = s___journal_0005431c._8_2_;
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
    local_c = FUN_00027108(param_1,acStack_470,param_2,param_5 & 0xfffffffd);
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
              goto LAB_0002838c;
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



/* ===== FUN_00028410 @ 00028410 size=68 ===== */

undefined4 FUN_00028410(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00028044(param_1,param_2,0xffffffff,0xffffffff,param_3);
  return uVar1;
}



/* ===== FUN_00028454 @ 00028454 size=60 ===== */

bool FUN_00028454(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x100) != 0;
}



/* ===== FUN_00028490 @ 00028490 size=712 ===== */

int FUN_00028490(int param_1,undefined4 param_2,uint param_3,uint param_4,void *param_5)

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
    uVar8 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
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
        uVar3 = FUN_0004187c(*(undefined4 *)(param_1 + 0x9c));
        local_c = FUN_00022730(*(undefined4 *)(param_1 + 0x14),uVar3,param_1 + 0x98);
        if (local_c != 0) {
          return local_c;
        }
      }
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x14) * (ulonglong)param_3;
      iVar2 = *(uint *)(param_1 + 0x14) * param_4 + (int)((ulonglong)lVar1 >> 0x20);
      lVar9 = FUN_00042a24(*(undefined4 *)(param_1 + 0x9c),iVar2,(int)lVar1,iVar2,0);
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
         (iVar2 = FUN_00018b34(param_1,piVar6), iVar2 == 0)) {
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



/* ===== FUN_00028758 @ 00028758 size=324 ===== */

int FUN_00028758(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

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
    lVar7 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
    uVar2 = (uint)((ulonglong)lVar7 >> 0x20);
    bVar6 = uVar2 <= uVar5;
    if (uVar5 == uVar2) {
      bVar6 = (uint)lVar7 <= uVar3;
    }
    if (!bVar6 || lVar7 == lVar1) {
      local_18 = FUN_00018ba4(param_1,local_14);
      if (local_18 != 0) {
        return local_18;
      }
      local_18 = FUN_00026ba0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,
                              param_4,0xfffffc00,param_5);
      (**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x1c))(*(undefined4 *)(param_1 + 4));
      return local_18;
    }
  }
  return 0x7f2bb78d;
}



/* ===== FUN_0002889c @ 0002889c size=196 ===== */

uint FUN_0002889c(void)

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



/* ===== FUN_00028960 @ 00028960 size=344 ===== */

int FUN_00028960(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 0x94) == 0) &&
     (iVar1 = FUN_00021f74(*(undefined4 *)(param_1 + 0x14),param_1 + 0x94), iVar1 != 0)) {
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
  iVar1 = FUN_00028758(param_1,*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                       *(undefined4 *)(param_1 + 0x94));
  return iVar1;
}



/* ===== FUN_00028ab8 @ 00028ab8 size=44 ===== */

undefined4 FUN_00028ab8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00029100(param_1,0);
  return uVar1;
}



/* ===== FUN_00028ae4 @ 00028ae4 size=84 ===== */

undefined4 FUN_00028ae4(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    uVar1 = 0x7f2bb715;
  }
  else {
    uVar1 = FUN_00028960(param_1);
  }
  return uVar1;
}



/* ===== FUN_00028b38 @ 00028b38 size=292 ===== */

int FUN_00028b38(int param_1,undefined4 param_2)

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
    uVar1 = FUN_00021f74(*(undefined4 *)(param_1 + 0x14),param_1 + 0x94);
    if ((int)uVar1 != 0) {
      return (int)uVar1;
    }
  }
  local_c = (int)uVar1;
  local_c = FUN_0003031c(param_1,(int)((ulonglong)uVar1 >> 0x20),0,0,*(undefined4 *)(param_1 + 0x94)
                         ,&local_18);
  if (local_c == 0) {
    *(undefined4 *)(local_10 + 0x168) = local_18;
    *(undefined4 *)(local_10 + 0x16c) = uStack_14;
    local_c = FUN_00028960(param_1);
  }
  return local_c;
}



/* ===== FUN_00028c5c @ 00028c5c size=844 ===== */

int FUN_00028c5c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  uint local_c;
  
  if ((*(int *)(param_1 + 0x94) == 0) &&
     (iVar1 = FUN_00021f74(*(undefined4 *)(param_1 + 0x14),param_1 + 0x94), iVar1 != 0)) {
    return iVar1;
  }
  iVar1 = FUN_00028490(param_1,*(undefined4 *)(param_1 + 0x94),
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
    iVar2 = FUN_00028490(param_1,*(undefined4 *)(param_1 + 0x94),
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
    iVar2 = FUN_0002889c();
    *(int *)(iVar1 + 4) = iVar2;
    gethostname((char *)(iVar1 + 0x10),0x40);
    strncpy((char *)(iVar1 + 0x50),*(char **)(param_1 + 0xc),0x20);
    local_10 = FUN_00028758(param_1,*(undefined4 *)(param_1 + 0x94),
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                            *(undefined4 *)(param_1 + 0x94));
    if (local_10 == 0) {
      sleep(local_c * 2 + 1);
      local_10 = FUN_00028490(param_1,*(undefined4 *)(param_1 + 0x94),
                              *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                              *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                              *(undefined4 *)(param_1 + 0x94));
      if (local_10 == 0) {
        if (iVar2 == *(int *)(iVar1 + 4)) {
          *(undefined4 *)(iVar1 + 4) = 0xe24d4d50;
          local_10 = FUN_00028758(param_1,*(undefined4 *)(param_1 + 0x94),
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



/* ===== FUN_00028fa8 @ 00028fa8 size=344 ===== */

int FUN_00028fa8(int param_1)

{
  int iVar1;
  void *__s2;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_00028454(*(undefined4 *)(param_1 + 0x10));
  if ((((iVar1 != 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) &&
      ((*(uint *)(param_1 + 8) & 0x100000) == 0)) &&
     (local_c = FUN_00028490(param_1,*(undefined4 *)(param_1 + 0x94),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),
                             *(undefined4 *)(param_1 + 0x94)), local_c == 0)) {
    __s2 = *(void **)(param_1 + 0x98);
    iVar1 = memcmp(*(void **)(param_1 + 0x94),__s2,0x400);
    if (iVar1 == 0) {
      *(undefined4 *)((int)__s2 + 4) = 0xff4d4d50;
      local_c = FUN_00028758(param_1,*(undefined4 *)(param_1 + 0x98),
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



/* ===== FUN_00029100 @ 00029100 size=376 ===== */

int FUN_00029100(int param_1,int param_2)

{
  int iVar1;
  timeval local_1c;
  void *local_14;
  void *local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_00028454(*(undefined4 *)(param_1 + 0x10));
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
      local_c = FUN_00028490(param_1,0,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x168),
                             *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16c),0);
      if (local_c == 0) {
        local_10 = *(void **)(param_1 + 0x94);
        local_14 = *(void **)(param_1 + 0x98);
        iVar1 = memcmp(local_10,local_14,0x400);
        if (iVar1 == 0) {
          *(__time_t *)((int)local_10 + 8) = local_1c.tv_sec;
          *(__time_t *)((int)local_10 + 0xc) = local_1c.tv_sec >> 0x1f;
          *(undefined4 *)((int)local_10 + 4) = 0xe24d4d50;
          local_c = FUN_00028758(param_1,*(undefined4 *)(param_1 + 0x94),
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



/* ===== FUN_00029278 @ 00029278 size=60 ===== */

bool FUN_00029278(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_000292b4 @ 000292b4 size=60 ===== */

bool FUN_000292b4(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x200) != 0;
}



/* ===== FUN_000292f0 @ 000292f0 size=60 ===== */

bool FUN_000292f0(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0002932c @ 0002932c size=60 ===== */

bool FUN_0002932c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 8) != 0;
}



/* ===== FUN_00029368 @ 00029368 size=60 ===== */

bool FUN_00029368(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x10) != 0;
}



/* ===== FUN_000293a4 @ 000293a4 size=60 ===== */

bool FUN_000293a4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x80) != 0;
}



/* ===== FUN_000293e0 @ 000293e0 size=60 ===== */

bool FUN_000293e0(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x100) != 0;
}



/* ===== FUN_0002941c @ 0002941c size=96 ===== */

undefined4 FUN_0002941c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000292f0(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00029278(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0002947c @ 0002947c size=636 ===== */

longlong FUN_0002947c(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

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
  iVar1 = FUN_00029368(*(undefined4 *)(param_1 + 0x10));
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
    iVar1 = FUN_000514a8(0x400 << (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0xff),uVar5);
    iVar1 = param_5 * iVar1;
    iVar2 = FUN_000177b8(param_1,iVar1);
    local_14 = (uint)(iVar2 != 0);
    lVar9 = FUN_00016290(param_1,iVar1);
    if (param_4 != 0 || param_3 != *(uint *)(*(int *)(param_1 + 0x10) + 0x14)) {
      uVar4 = local_14 + (uint)lVar9;
      uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + 0x20);
      uVar7 = (int)((ulonglong)lVar9 >> 0x20) + (uint)CARRY4(local_14,(uint)lVar9) +
              (uint)CARRY4(uVar4,uVar6);
      uVar10 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
      uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
      bVar8 = uVar3 <= uVar7;
      if (uVar7 == uVar3) {
        bVar8 = (uint)uVar10 <= uVar4 + uVar6;
      }
      if (!bVar8) {
        lVar9 = lVar9 + (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x20);
        iVar1 = FUN_000177b8(param_1,iVar1 + 1);
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



/* ===== FUN_000296f8 @ 000296f8 size=76 ===== */

undefined4 FUN_000296f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002947c(param_1,param_3,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_00029744 @ 00029744 size=88 ===== */

undefined4
FUN_00029744(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002979c(param_1,0,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



/* ===== FUN_0002979c @ 0002979c size=4204 ===== */

int FUN_0002979c(char *param_1,char *param_2,uint param_3,int param_4,int param_5,int *param_6,
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
  local_14 = FUN_00021f74(0xbc,&local_5c);
  if (local_14 != 0) {
    return local_14;
  }
  memset(local_5c,0,0xbc);
  *local_5c = 0x7f2bb701;
  local_5c[2] = param_3;
  local_5c[2] = local_5c[2] | 0x200;
  local_5c[0x17] = 0x12;
  sVar2 = strlen(param_1);
  local_14 = FUN_00021f74(sVar2 + 1,local_5c + 3);
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
        local_14 = FUN_000268b0(local_5c[1],local_68);
        iVar3 = local_14;
        if (local_14 != 0) goto LAB_0002a7c8;
      }
      local_14 = iVar3;
      local_5c[0x22] = local_5c[1];
      *(undefined4 **)(local_5c[1] + 0x5c) = local_5c;
      local_14 = FUN_00026d7c(local_5c[1],0xfffffc00,local_5c + 4);
      if (local_14 == 0) {
        local_70 = param_4;
        if ((param_3 & 0x2000) != 0) {
          local_14 = FUN_00021f74(0x14c,local_5c + 0x16);
          if (local_14 != 0) goto LAB_0002a7c8;
          local_14 = (**(code **)(*(int *)(local_5c[1] + 4) + 0x14))
                               (local_5c[1],0,0xfffffeb4,local_5c[0x16]);
          if (local_14 != 0) goto LAB_0002a7c8;
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
          local_14 = FUN_00021f74(0x400,local_5c + 0x15);
          if (local_14 != 0) goto LAB_0002a7c8;
        }
        else {
          if (param_5 == 0) {
            local_14 = 0x7f2bb747;
            local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
            local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
            goto LAB_0002a7c8;
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
            iVar3 = FUN_00018c08(local_5c,local_5c[4]);
            if (iVar3 == 0) {
              local_14 = 0x7f2bb799;
            }
            iVar3 = FUN_00018ca4(local_5c,local_5c[4]);
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
                    goto LAB_0002a7c8;
                  }
                  local_20 = *(uint *)(local_5c[4] + 100);
                  if ((param_3 & 0x8000) != 0) {
                    local_20 = local_20 & 0xfffff7ff;
                  }
                  if (((param_3 & 1) != 0) && ((local_20 & 0xffffc884) != 0)) {
                    local_14 = 0x7f2bb744;
                    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                    local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                    goto LAB_0002a7c8;
                  }
                  if ((param_3 & 0x1000) == 0) {
                    iVar3 = FUN_0002932c(local_5c[4]);
                    if (iVar3 != 0) {
                      local_14 = 0x7f2bb743;
                      local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                      local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                      goto LAB_0002a7c8;
                    }
                  }
                }
                if (*(uint *)(local_5c[4] + 0x18) < 7) {
                  iVar3 = FUN_000292b4(local_5c[4]);
                  if ((iVar3 == 0) || ((param_3 & 0x20000) != 0)) {
                    iVar3 = FUN_000292b4(local_5c[4]);
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
                        iVar3 = FUN_000293a4(local_5c[4]);
                        if (iVar3 == 0) {
                          if ((*(short *)(local_5c[4] + 0xfe) != 0) &&
                             (*(short *)(local_5c[4] + 0xfe) != 0x20)) {
                            local_14 = 0x7f2bb791;
                            goto LAB_0002a7c8;
                          }
                        }
                        else if (*(ushort *)(local_5c[4] + 0xfe) < 0x40) {
                          local_14 = 0x7f2bb791;
                          local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
                          local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
                          goto LAB_0002a7c8;
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
                            iVar3 = FUN_0002932c(local_5c[4]);
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
                              FUN_00018a5c(local_5c);
                              local_48 = *(uint *)(local_5c[4] + 0x20);
                              if ((local_48 != 0) &&
                                 (iVar3 = FUN_000514a8(0x400 << (*(uint *)(local_5c[4] + 0x1c) &
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
                                iVar3 = FUN_000514a8(0x400 << (*(uint *)(local_5c[4] + 0x18) & 0xff)
                                                     ,uVar6);
                                if (uVar5 <= 0x10000U - iVar3) {
                                  if ((*(uint *)(local_5c[4] + 0x60) & 0x80) == 0) {
                                    uVar6 = 0x20;
                                  }
                                  else {
                                    uVar6 = *(undefined2 *)(local_5c[4] + 0xfe);
                                  }
                                  iVar3 = FUN_000514a8(0x400 << (*(uint *)(local_5c[4] + 0x18) &
                                                                0xff),uVar6);
                                  if (iVar3 != 0) {
                                    uVar5 = *(uint *)(local_5c[4] + 0x14);
                                    uVar9 = FUN_000165b0(local_5c[4]);
                                    iVar3 = (int)((ulonglong)uVar9 >> 0x20);
                                    bVar8 = iVar3 == 0;
                                    if (iVar3 == 0) {
                                      bVar8 = (uint)uVar9 <= uVar5;
                                    }
                                    if (!bVar8) {
                                      uVar9 = FUN_000165b0(local_5c[4]);
                                      local_50 = FUN_00022570((uint)uVar9 -
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
                                          uVar4 = FUN_000514a8(0x400 << (*(uint *)(local_5c[4] +
                                                                                  0x18) & 0xff),
                                                               uVar6);
                                          puVar1 = local_5c;
                                          uVar7 = FUN_00022520(uVar7,uVar4);
                                          puVar1[8] = uVar7;
                                          local_14 = FUN_00022038(local_5c[8],local_5c[5],
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
                                            iVar3 = FUN_00029368(local_5c[4]);
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
                                              if (local_14 != 0) goto LAB_0002a7c8;
                                              local_34 = local_34 + local_1c * local_5c[5];
                                              local_14 = 0;
                                            }
                                            for (local_18 = local_1c; local_18 < (uint)local_5c[8];
                                                local_18 = local_18 + 1) {
                                              uVar9 = FUN_0002947c(local_5c,local_5c,(int)local_30,
                                                                   local_30._4_4_,local_18);
                                              local_58 = uVar9;
                                              FUN_00026e2c(local_5c[1],local_5c[1],(int)uVar9,
                                                           (int)((ulonglong)uVar9 >> 0x20),1,0);
                                            }
                                            for (local_18 = local_1c; local_18 < (uint)local_5c[8];
                                                local_18 = local_18 + 1) {
                                              uVar9 = FUN_0002947c(local_5c,local_5c,(int)local_30,
                                                                   local_30._4_4_,local_18);
                                              local_58 = uVar9;
                                              local_14 = FUN_00026ad4(local_5c[1],local_5c[1],
                                                                      (int)uVar9,
                                                                      (int)((ulonglong)uVar9 >> 0x20
                                                                           ),1,local_34);
                                              if (local_14 != 0) goto LAB_0002a7c8;
                                              local_34 = local_34 + local_5c[5];
                                              local_14 = 0;
                                            }
                                            local_5c[0x14] = (uint)*(ushort *)(local_5c[4] + 0x164);
                                            if (1 < local_70) {
                                              iVar3 = FUN_0002941c(local_5c);
                                              if (iVar3 != 0) {
                                                for (local_3c = 0; local_3c < (uint)local_5c[7];
                                                    local_3c = local_3c + 1) {
                                                  FUN_0001730c(local_5c,local_3c,2);
                                                  FUN_0001730c(local_5c,local_3c,1);
                                                  FUN_00017148(local_5c,local_3c,0);
                                                  FUN_0001a6f4(local_5c,local_3c);
                                                }
                                                if ((local_5c[2] & 1) != 0) {
                                                  FUN_00022214(local_5c);
                                                }
                                              }
                                            }
                                            iVar3 = FUN_000293e0(local_5c[4]);
                                            if (((iVar3 != 0) && ((param_3 & 0x100000) == 0)) &&
                                               ((param_3 & 0x4001) != 0)) {
                                              local_14 = FUN_00028c5c(local_5c);
                                              if (local_14 != 0) {
                                                local_5c[2] = local_5c[2] | 0x100000;
                                                FUN_00028fa8(local_5c);
                                                goto LAB_0002a7c8;
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
                                      goto LAB_0002a7c8;
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
LAB_0002a7c8:
  if ((param_3 & 0x10000) == 0) {
    FUN_0001ccf8(local_5c);
    local_5c = (undefined4 *)0x0;
  }
  *param_7 = local_5c;
  return local_14;
}



/* ===== FUN_0002a8f8 @ 0002a8f8 size=360 ===== */

int FUN_0002a8f8(int param_1,int param_2)

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



/* ===== FUN_0002aa60 @ 0002aa60 size=116 ===== */

undefined4 FUN_0002aa60(char *param_1,int param_2)

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



/* ===== FUN_0002aad4 @ 0002aad4 size=668 ===== */

int FUN_0002aad4(int param_1,undefined4 param_2,int param_3,int *param_4,int param_5,
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
          iVar1 = FUN_00041e90(param_1,iVar2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_0002aad4(param_1,param_2,param_3 + *(int *)(param_1 + 0x14),param_3,
                               param_5 + -1);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_00041f40(param_1,iVar2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_0002aa60(param_3,*(undefined4 *)(param_1 + 0x14));
          if (iVar1 == 0) goto LAB_0002ad04;
        }
        FUN_0003171c(param_1,iVar2,0xffffffff);
        *local_58 = 0;
        local_2c = local_2c + 1;
      }
    }
LAB_0002ad04:
    local_58 = local_58 + 1;
    bVar6 = CARRY4(uVar3,local_28);
    local_28 = uVar3 + local_28;
    uStack_24 = uVar4 + uStack_24 + (uint)bVar6;
  }
  iVar2 = FUN_00041ba0(param_1,param_2,local_2c,local_2c >> 0x1f);
  return iVar2;
}



/* ===== FUN_0002ad70 @ 0002ad70 size=688 ===== */

int FUN_0002ad70(int param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
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
      iVar2 = FUN_00022038(3,*(undefined4 *)(param_1 + 0x14),&local_34);
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
        local_14 = FUN_0002aad4(param_1,param_2,local_44,local_20,local_18);
        if (local_14 != 0) goto LAB_0002aff8;
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
LAB_0002aff8:
    if (local_34 != 0) {
      FUN_00022158(&local_34);
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



/* ===== FUN_0002b020 @ 0002b020 size=788 ===== */

int FUN_0002b020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
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
      FUN_00031594(param_1);
      param_9 = param_9 - 1;
    }
    return local_1c;
  }
  uVar2 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
  uVar1 = (int)uVar2 >> 0x1f;
  if ((param_7 & uVar2) != 0 || (param_8 & uVar1) != 0) {
    uVar4 = FUN_000371dc(param_1,param_2,param_3,param_6,param_5,param_6,&local_28);
    local_1c = (int)uVar4;
    if (local_1c != 0) goto LAB_0002b30c;
    if (local_28 == 0 && iStack_24 == 0) {
      FUN_00031594(param_1,(int)((ulonglong)uVar4 >> 0x20),param_7,param_8,0xffffffff);
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
    FUN_00031594(param_1,uVar1,param_7,param_8,0xffffffff);
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
    uVar4 = FUN_000371dc(param_1,param_2,param_3,param_6,param_5,param_6,&local_28);
    local_1c = (int)uVar4;
    if ((local_1c == 0) && (local_28 == 0 && iStack_24 == 0)) {
      FUN_00031594(param_1,(int)((ulonglong)uVar4 >> 0x20),param_7,param_8,0xffffffff);
      local_14 = local_14 + 1;
    }
  }
LAB_0002b30c:
  *param_10 = *param_10 + local_14;
  return local_1c;
}



/* ===== FUN_0002b334 @ 0002b334 size=1484 ===== */

int FUN_0002b334(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_14 = FUN_0003bb8c(param_1,param_2,param_3,&local_54);
  if (local_14 != 0) {
    return local_14;
  }
  FUN_0003ce5c(local_54,local_54,param_5,param_6);
  local_14 = FUN_0003bf68(local_54,0,&local_70);
  if (local_14 != 0x7f2bb780) {
    do {
      if (local_14 != 0) goto LAB_0002b8e4;
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
        if (!bVar5) goto LAB_0002b860;
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
LAB_0002b66c:
        uStack_64 = uVar3;
        local_68 = uVar2;
        iStack_6c = iVar1;
        local_70 = uVar4;
        if (local_60 == 0) {
          local_14 = FUN_0003bf68(local_54,0,auStack_a8);
          if (local_14 != 0) goto LAB_0002b8e4;
          local_50 = local_a0;
          uStack_4c = uStack_9c;
          local_14 = FUN_0003bf68(local_54,7,auStack_a8);
          if (local_14 == 0x7f2bb77c) {
            local_38 = local_50;
            uStack_34 = uStack_4c;
          }
          else {
            if (local_14 != 0) goto LAB_0002b8e4;
            local_38 = local_a0;
            uStack_34 = uStack_9c;
          }
          local_14 = FUN_0003ce5c(local_54,local_54,local_50,uStack_4c);
          if (((local_14 != 0) || (local_14 = FUN_0003ecac(local_54,0), local_14 != 0)) ||
             ((local_14 = FUN_0003ce90(local_54), local_14 != 0 && (local_14 != 0x7f2bb780))))
          goto LAB_0002b8e4;
          local_14 = 0;
          FUN_0003ce5c(local_54,local_54,local_38,uStack_34);
          local_30 = 0;
        }
        else {
          local_14 = FUN_0003d0cc(local_54,0,&local_70);
          if (local_14 != 0) goto LAB_0002b8e4;
          local_14 = FUN_0003ce90(local_54);
        }
        if ((local_14 != 0) ||
           (local_14 = FUN_0002b020(param_1,param_2,param_3,uStack_24,local_28,uStack_24,local_20,
                                    iStack_1c,local_2c,&local_74), local_14 != 0))
        goto LAB_0002b8e4;
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
          local_14 = FUN_0003dc94(local_54,1,&local_90);
          if (((local_14 == 0) && (local_14 = FUN_0003ce90(local_54), local_14 == 0)) &&
             (local_14 = FUN_0003ce5c(local_54,local_54,local_68,uStack_64), uVar4 = local_70,
             iVar1 = iStack_6c, uVar2 = local_68, uVar3 = uStack_64, local_14 == 0))
          goto LAB_0002b66c;
          goto LAB_0002b8e4;
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
          goto LAB_0002b66c;
        }
      }
      local_14 = 0;
      local_14 = FUN_0003bf68(local_54,local_30,&local_70);
      if ((local_14 == 0x7f2bb77c) || (local_14 == 0x7f2bb780)) goto LAB_0002b860;
    } while( true );
  }
  local_14 = 0;
LAB_0002b8e4:
  FUN_0003ba88(local_54);
  return local_14;
LAB_0002b860:
  local_14 = FUN_00041ba0(param_1,param_3,local_74,local_74 >> 0x1f);
  goto LAB_0002b8e4;
}



/* ===== FUN_0002b900 @ 0002b900 size=148 ===== */

int FUN_0002b900(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  
  if (param_5 == 0 && param_6 == 0) {
    memset((void *)(param_3 + 0x28),0,0x3c);
    *(undefined4 *)(param_3 + 4) = 0;
    iVar1 = FUN_000264b0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_0002302c(param_1,param_2);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0002b994 @ 0002b994 size=328 ===== */

int FUN_0002b994(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
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
      iVar1 = FUN_00025ef4(param_1,param_2,auStack_8c);
      if (iVar1 != 0) {
        return iVar1;
      }
      local_9c = auStack_8c;
      local_c = 0;
    }
    if ((*(uint *)(local_9c + 0x20) & 0x10000000) == 0) {
      if ((*(uint *)(local_9c + 0x20) & 0x80000) == 0) {
        local_c = FUN_0002ad70(param_1,local_9c,param_4,param_6,param_5,param_6,param_7,param_8);
      }
      else {
        local_c = FUN_0002b334(param_1,param_2,local_9c,param_6,param_5,param_6,param_7,param_8);
      }
      if (local_c == 0) {
        local_c = FUN_000264b0(param_1,param_2,local_9c);
      }
    }
    else {
      local_c = FUN_0002b900(param_1,param_2,local_9c,param_6,param_5,param_6,param_7,param_8);
    }
  }
  else {
    local_c = 0x16;
  }
  return local_c;
}



/* ===== FUN_0002badc @ 0002badc size=60 ===== */

bool FUN_0002badc(int param_1)

{
  return (*(uint *)(param_1 + 100) & 8) != 0;
}



/* ===== FUN_0002bb18 @ 0002bb18 size=224 ===== */

undefined4
FUN_0002bb18(int param_1,uint *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if ((-1 < param_4) && (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) <= *param_2)) {
    uVar3 = *param_2;
    uVar5 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    bVar4 = iVar2 == 0;
    if (iVar2 == 0) {
      bVar4 = (uint)uVar5 <= uVar3;
    }
    if (!bVar4) {
      uVar1 = FUN_0001496c(*param_7,*param_2,*param_7,*param_2,param_3);
      param_7[1] = uVar1;
      if (param_7[1] == 0) {
        return 0;
      }
      return 2;
    }
  }
  return 0;
}



/* ===== FUN_0002bbf8 @ 0002bbf8 size=396 ===== */

int FUN_0002bbf8(int *param_1,int *param_2)

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
    local_10 = FUN_00025ef4(param_1,1,auStack_98);
    if (local_10 != 0) {
      return local_10;
    }
    local_c = local_7c;
    iVar1 = FUN_0002badc(param_1[4]);
    if ((iVar1 == 0) || ((local_78 & 0x40000) == 0)) {
      local_c = FUN_000513e0(local_c,(uint)param_1[5] >> 9);
    }
    local_c = local_c + 0x14;
    if (local_c < 0x32) {
      local_c = 0x32;
    }
    if (50000 < local_c) {
      local_c = 500;
    }
    local_10 = FUN_000145ec(param_2,local_c);
    if (local_10 != 0) {
      return local_10;
    }
  }
  local_18 = *param_2;
  local_14 = 0;
  iVar1 = FUN_00036ae4(param_1,1,8,0,FUN_0002bb18,&local_18);
  if (iVar1 != 0) {
    local_14 = iVar1;
  }
  return local_14;
}



/* ===== FUN_0002bd84 @ 0002bd84 size=60 ===== */

bool FUN_0002bd84(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_0002bdc0 @ 0002bdc0 size=60 ===== */

bool FUN_0002bdc0(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0002bdfc @ 0002bdfc size=96 ===== */

undefined4 FUN_0002bdfc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0002bdc0(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0002bd84(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0002be5c @ 0002be5c size=1544 ===== */

int FUN_0002be5c(int *param_1,int param_2,int param_3)

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
  local_30 = FUN_0002bdfc(param_1);
  local_14 = 0;
  local_18 = 0;
  if (param_3 == 0) {
LAB_0002bf70:
    if (param_2 != 0) {
      local_18 = *(int *)(param_1[4] + 0x28) + 7U >> 3;
      local_1c = FUN_00026d7c(param_1[1],0,&local_48);
      if (local_1c != 0) goto LAB_0002c424;
      memset(local_48,0xff,param_1[5]);
    }
    for (local_c = 0; local_c < (uint)param_1[7]; local_c = local_c + 1) {
      if (param_3 != 0) {
        if (local_30 == 0) {
LAB_0002c014:
          local_1c = FUN_00015abc(param_1[0xc],param_1[0xc],local_28,iStack_24,local_14 << 3,
                                  local_44);
          if (local_1c != 0) goto LAB_0002c424;
          if (local_c == param_1[7] - 1U) {
            uVar5 = FUN_000165b0(param_1[4]);
            FUN_00051964((uint)uVar5 - *(uint *)(param_1[4] + 0x14),
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
                FUN_00015afc(local_10,local_44);
                uVar2 = local_10 + 1;
              }
            }
          }
          local_1c = FUN_0001a060(param_1,local_c,local_44,local_14);
          if (local_1c != 0) {
            return local_1c;
          }
          FUN_0001a6f4(param_1,local_c);
          param_1[2] = param_1[2] | 4;
          lVar6 = FUN_00016a0c(param_1,local_c);
          local_40 = lVar6;
          if (lVar6 != 0) {
            local_1c = FUN_00026ba0(param_1[1],param_1[1],(int)lVar6,(int)((ulonglong)lVar6 >> 0x20)
                                    ,1,local_44);
            if (local_1c != 0) {
              local_1c = 0x7f2bb71d;
              goto LAB_0002c424;
            }
          }
        }
        else {
          iVar1 = FUN_00017254(param_1,local_c,2);
          if (iVar1 == 0) goto LAB_0002c014;
        }
        uVar5 = VectorShiftRight(CONCAT44(local_14 << 3,local_14 << 3),0x20);
        bVar4 = CARRY4((uint)uVar5,local_28);
        local_28 = (uint)uVar5 + local_28;
        iStack_24 = (int)((ulonglong)uVar5 >> 0x20) + iStack_24 + (uint)bVar4;
      }
      if (param_2 != 0) {
        if (local_30 == 0) {
LAB_0002c270:
          local_1c = FUN_000159a4(param_1[0xb],local_48,local_2c,0,local_18 << 3,local_48);
          if (local_1c != 0) goto LAB_0002c424;
          local_1c = FUN_00019ebc(param_1,local_c,local_48,local_18);
          if (local_1c != 0) goto LAB_0002c424;
          FUN_0001a6f4(param_1,local_c);
          param_1[2] = param_1[2] | 4;
          lVar6 = FUN_00016ba0(param_1,local_c);
          local_40 = lVar6;
          if (lVar6 != 0) {
            local_1c = FUN_00026ba0(param_1[1],param_1[1],(int)lVar6,(int)((ulonglong)lVar6 >> 0x20)
                                    ,1,local_48);
            if (local_1c != 0) {
              local_1c = 0x7f2bb71b;
              goto LAB_0002c424;
            }
          }
        }
        else {
          iVar1 = FUN_00017254(param_1,local_c,1);
          if (iVar1 == 0) goto LAB_0002c270;
        }
        local_2c = local_2c + local_18 * 8;
      }
    }
    if (param_3 != 0) {
      param_1[2] = param_1[2] & 0xffffffdf;
      FUN_00022158(&local_44);
    }
    if (param_2 != 0) {
      param_1[2] = param_1[2] & 0xffffffef;
      FUN_00022158(&local_48);
    }
    local_1c = 0;
  }
  else {
    local_14 = *(uint *)(param_1[4] + 0x24) >> 3;
    local_1c = FUN_00026d7c(param_1[1],0,&local_44);
    if (local_1c == 0) {
      memset(local_44,0xff,param_1[5]);
      goto LAB_0002bf70;
    }
LAB_0002c424:
    if (local_48 != (void *)0x0) {
      FUN_00022158(&local_48);
    }
    if (local_44 != (void *)0x0) {
      FUN_00022158(&local_44);
    }
  }
  return local_1c;
}



/* ===== FUN_0002c464 @ 0002c464 size=272 ===== */

undefined4 FUN_0002c464(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint local_c;
  
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  for (local_c = 0; local_c < *(uint *)(param_1 + 0x1c); local_c = local_c + 1) {
    iVar1 = FUN_00017254(param_1,local_c,2);
    if (iVar1 != 0) {
      FUN_000310a8(param_1,local_c,uVar3);
      lVar4 = FUN_00016cbc(param_1,local_c);
      uVar2 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        FUN_0002057c(uVar3,uVar2,(int)lVar4,uVar2,*(undefined4 *)(param_1 + 0x28));
      }
      lVar4 = FUN_00016a0c(param_1,local_c);
      uVar2 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        FUN_00021a04(uVar3,uVar2,(int)lVar4,uVar2);
      }
      lVar4 = FUN_00016ba0(param_1,local_c);
      uVar2 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        FUN_00021a04(uVar3,uVar2,(int)lVar4,uVar2);
      }
    }
  }
  return 0;
}



/* ===== FUN_0002c574 @ 0002c574 size=2576 ===== */

int FUN_0002c574(int *param_1,int param_2,int param_3)

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
  param_1[0xf] = (int)FUN_0002d0cc;
  local_44 = FUN_0002bdfc(param_1);
  sVar4 = strlen((char *)param_1[3]);
  local_10 = FUN_00021f74(sVar4 + 0x50,&local_50);
  if (local_10 != 0) {
    return local_10;
  }
  if (param_3 == 0) {
    local_14 = 0;
    local_10 = 0;
LAB_0002c77c:
    if (param_2 == 0) {
      local_18 = 0;
    }
    else {
      if (param_1[0xb] != 0) {
        FUN_00014ffc(param_1[0xb]);
      }
      uVar3 = s_inode_bitmap_for_0005433c._12_4_;
      uVar2 = s_inode_bitmap_for_0005433c._8_4_;
      uVar1 = s_inode_bitmap_for_0005433c._4_4_;
      *(undefined4 *)local_50 = s_inode_bitmap_for_0005433c._0_4_;
      *(undefined4 *)(local_50 + 4) = uVar1;
      *(undefined4 *)(local_50 + 8) = uVar2;
      *(undefined4 *)(local_50 + 0xc) = uVar3;
      *(undefined2 *)(local_50 + 0x10) = s_inode_bitmap_for_0005433c._16_2_;
      strcat(local_50,(char *)param_1[3]);
      local_10 = FUN_00015098(param_1,local_50,param_1 + 0xb);
      if ((local_10 != 0) || (local_10 = FUN_00026d7c(param_1[1],0,&local_4c), local_10 != 0))
      goto LAB_0002cedc;
    }
    FUN_00022158(&local_50);
    if ((param_1[2] & 0x2000U) == 0) {
      for (local_c = 0; local_c < (uint)param_1[7]; local_c = local_c + 1) {
        if (local_48 != (void *)0x0) {
          local_28 = FUN_00016a0c(param_1,local_c);
          if (((local_44 != 0) && (iVar6 = FUN_00017254(param_1,local_c,2), iVar6 != 0)) &&
             (iVar6 = FUN_0001a688(param_1,local_c), iVar6 != 0)) {
            local_28 = 0;
          }
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) {
            memset(local_48,0,local_14);
          }
          else {
            local_10 = FUN_00026ad4(param_1[1],param_1[1],(uint)local_28,local_28._4_4_,1,local_48);
            if (local_10 != 0) {
              local_10 = 0x7f2bb71e;
              goto LAB_0002cedc;
            }
            if (((param_1[2] & 0x200000U) == 0) &&
               (iVar6 = FUN_00019f7c(param_1,local_c,local_48,local_14), iVar6 == 0)) {
              local_10 = 0x7f2bb79c;
              goto LAB_0002cedc;
            }
          }
          local_1c = local_14 << 3;
          local_10 = FUN_00015a30(param_1[0xc],param_1[0xc],local_30,iStack_2c,local_1c,local_48);
          if (local_10 != 0) goto LAB_0002cedc;
          uVar8 = VectorShiftRight(CONCAT44(local_14 << 3,local_14 << 3),0x20);
          bVar7 = CARRY4((uint)uVar8,local_30);
          local_30 = (uint)uVar8 + local_30;
          iStack_2c = (int)((ulonglong)uVar8 >> 0x20) + iStack_2c + (uint)bVar7;
          local_10 = 0;
        }
        if (local_4c != (void *)0x0) {
          local_28 = FUN_00016ba0(param_1,local_c);
          if (((local_44 != 0) && (iVar6 = FUN_00017254(param_1,local_c,1), iVar6 != 0)) &&
             (iVar6 = FUN_0001a688(param_1,local_c), iVar6 != 0)) {
            local_28 = 0;
          }
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) {
            memset(local_4c,0,local_18);
          }
          else {
            local_10 = FUN_00026ad4(param_1[1],param_1[1],(uint)local_28,local_28._4_4_,1,local_4c);
            if (local_10 != 0) {
              local_10 = 0x7f2bb71c;
              goto LAB_0002cedc;
            }
            if (((param_1[2] & 0x200000U) == 0) &&
               (iVar6 = FUN_00019dd8(param_1,local_c,local_4c,local_18), iVar6 == 0)) {
              local_10 = 0x7f2bb793;
              goto LAB_0002cedc;
            }
          }
          local_1c = local_18 << 3;
          local_10 = FUN_00015918(param_1[0xb],local_1c,local_3c,0,local_1c,local_4c);
          if (local_10 != 0) goto LAB_0002cedc;
          local_3c = local_3c + local_18 * 8;
          local_10 = 0;
        }
      }
      if ((param_3 != 0) && (local_10 = FUN_0002c464(param_1), local_10 != 0)) goto LAB_0002cedc;
    }
    else {
      uVar5 = FUN_000513e0(*(undefined4 *)(param_1[0x16] + 0x124),param_1[5]);
      local_28 = (ulonglong)uVar5;
      local_40 = *(uint *)param_1[4];
      for (; 0 < (int)local_18; local_18 = local_18 - param_1[5]) {
        local_28 = CONCAT44(local_28._4_4_ + (uint)(0xfffffffe < (uint)local_28),(uint)local_28 + 1)
        ;
        local_10 = FUN_00026ad4(param_1[0x22]);
        if (local_10 != 0) goto LAB_0002cedc;
        local_1c = param_1[5] << 3;
        if (local_40 < local_1c) {
          local_1c = local_40;
        }
        local_10 = FUN_00015918(param_1[0xb],local_1c,local_3c,0,local_1c,local_4c);
        if (local_10 != 0) goto LAB_0002cedc;
        local_3c = local_3c + param_1[5] * 8;
        local_40 = local_40 + param_1[5] * -8;
        local_10 = 0;
      }
      uVar5 = FUN_000513e0(*(undefined4 *)(param_1[0x16] + 0x128),param_1[5]);
      local_28 = (ulonglong)uVar5;
      local_38 = (ulonglong)(uint)param_1[7] * (ulonglong)*(uint *)(param_1[4] + 0x24);
      for (; 0 < (int)local_14; local_14 = local_14 - param_1[5]) {
        local_28 = CONCAT44(local_28._4_4_ + (uint)(0xfffffffe < (uint)local_28),(uint)local_28 + 1)
        ;
        local_10 = FUN_00026ad4(param_1[0x22]);
        if (local_10 != 0) goto LAB_0002cedc;
        local_1c = param_1[5] << 3;
        if (local_38._4_4_ == 0 && (uint)local_38 < local_1c) {
          local_1c = (uint)local_38;
        }
        local_10 = FUN_00015a30(param_1[0xc],param_1[0xc],local_30,iStack_2c,local_1c,local_48);
        if (local_10 != 0) goto LAB_0002cedc;
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
      FUN_00022158(&local_4c);
    }
    if (local_48 != (void *)0x0) {
      FUN_00022158(&local_48);
    }
    local_10 = 0;
  }
  else {
    if (param_1[0xc] != 0) {
      FUN_00015020(param_1[0xc]);
    }
    uVar3 = s_block_bitmap_for_00054328._12_4_;
    uVar2 = s_block_bitmap_for_00054328._8_4_;
    uVar1 = s_block_bitmap_for_00054328._4_4_;
    *(undefined4 *)local_50 = s_block_bitmap_for_00054328._0_4_;
    *(undefined4 *)(local_50 + 4) = uVar1;
    *(undefined4 *)(local_50 + 8) = uVar2;
    *(undefined4 *)(local_50 + 0xc) = uVar3;
    *(undefined2 *)(local_50 + 0x10) = s_block_bitmap_for_00054328._16_2_;
    strcat(local_50,(char *)param_1[3]);
    local_10 = FUN_0001521c(param_1,local_50,param_1 + 0xc);
    if ((local_10 == 0) && (local_10 = FUN_00026d7c(param_1[1],0,&local_48), local_10 == 0))
    goto LAB_0002c77c;
LAB_0002cedc:
    if (param_3 != 0) {
      FUN_00022158(param_1 + 0xc);
      param_1[0xc] = 0;
    }
    if (param_2 != 0) {
      FUN_00022158(param_1 + 0xb);
      param_1[0xb] = 0;
    }
    if (local_4c != (void *)0x0) {
      FUN_00022158(&local_4c);
    }
    if (local_48 != (void *)0x0) {
      FUN_00022158(&local_48);
    }
    if (local_50 != (char *)0x0) {
      FUN_00022158(&local_50);
    }
  }
  return local_10;
}



/* ===== FUN_0002cf84 @ 0002cf84 size=48 ===== */

undefined4 FUN_0002cf84(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c574(param_1,1,0);
  return uVar1;
}



/* ===== FUN_0002cfb4 @ 0002cfb4 size=48 ===== */

undefined4 FUN_0002cfb4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002c574(param_1,0,1);
  return uVar1;
}



/* ===== FUN_0002cfe4 @ 0002cfe4 size=48 ===== */

undefined4 FUN_0002cfe4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002be5c(param_1,1,0);
  return uVar1;
}



/* ===== FUN_0002d014 @ 0002d014 size=48 ===== */

undefined4 FUN_0002d014(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002be5c(param_1,0,1);
  return uVar1;
}



/* ===== FUN_0002d044 @ 0002d044 size=136 ===== */

undefined4 FUN_0002d044(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(param_1 + 0x30) == 0)) {
    uVar1 = FUN_0002c574(param_1,*(int *)(param_1 + 0x2c) == 0,*(int *)(param_1 + 0x30) == 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0002d0cc @ 0002d0cc size=184 ===== */

undefined4 FUN_0002d0cc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x2c) == 0) || (iVar1 = FUN_000223a4(param_1), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if ((*(int *)(param_1 + 0x30) == 0) || (iVar2 = FUN_000223d0(param_1), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  if ((iVar1 == 0) && (iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0002be5c(param_1,iVar1,iVar2);
  }
  return uVar3;
}



/* ===== FUN_0002d184 @ 0002d184 size=56 ===== */

bool FUN_0002d184(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_0002d25c @ 0002d25c size=144 ===== */

undefined4 FUN_0002d25c(undefined4 param_1)

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



/* ===== FUN_0002d2ec @ 0002d2ec size=1148 ===== */

int FUN_0002d2ec(int param_1,int param_2,uint param_3,int param_4,int param_5,void *param_6)

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
    lVar7 = FUN_00042a24(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),iVar4,iVar5,0);
    if (lVar7 != CONCAT44(iVar5,iVar4)) {
      piVar2 = __errno_location();
      if (*piVar2 == 0) {
        local_14 = 0x7f2bb745;
      }
      else {
        piVar2 = __errno_location();
        local_14 = *piVar2;
      }
      goto LAB_0002d6d0;
    }
    if ((*(int *)(param_1 + 0x60) != 0) &&
       ((((uint)param_6 & *(int *)(param_1 + 0x60) - 1U) != 0 ||
        ((local_18 & *(int *)(param_1 + 0x60) - 1U) != 0)))) goto LAB_0002d6bc;
    local_1c = read(*(int *)(param_2 + 4),param_6,local_18);
    if (local_1c == local_18) {
      return 0;
    }
  }
  else {
    lVar7 = FUN_00042a24(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),iVar4,iVar5,0);
    if (lVar7 != CONCAT44(iVar5,iVar4)) {
      piVar2 = __errno_location();
      if (*piVar2 == 0) {
        local_14 = 0x7f2bb745;
      }
      else {
        piVar2 = __errno_location();
        local_14 = *piVar2;
      }
      goto LAB_0002d6d0;
    }
LAB_0002d6bc:
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
LAB_0002d6d0:
  if ((-1 < (int)local_1c) && ((int)local_1c < (int)local_18)) {
    memset((void *)((int)local_20 + local_1c),0,local_18 - local_1c);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    local_14 = (**(code **)(param_1 + 0x10))
                         (param_1,param_3,param_5,local_20,local_18,local_1c,local_14);
  }
  return local_14;
}



/* ===== FUN_0002d768 @ 0002d768 size=1344 ===== */

int FUN_0002d768(int param_1,int param_2,uint param_3,int param_4,int param_5,void *param_6)

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
    lVar5 = FUN_00042a24(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),local_20,
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
      goto LAB_0002dc50;
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
LAB_0002da48:
        local_28 = 0x7f2bb725;
      }
      goto LAB_0002dc50;
    }
  }
  else {
    lVar5 = FUN_00042a24(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),local_20,
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
      goto LAB_0002dc50;
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
        goto LAB_0002dc50;
      }
      memset((void *)(*(int *)(param_2 + 0xe0) + local_24),0,*(int *)(param_1 + 0xc) - local_24);
    }
    local_24 = local_14;
    if (*(int *)(param_1 + 0xc) < (int)local_14) {
      local_24 = *(size_t *)(param_1 + 0xc);
    }
    memcpy(*(void **)(param_2 + 0xe0),local_2c,local_24);
    lVar5 = FUN_00042a24(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4),local_20,
                         iStack_1c,0);
    if (lVar5 != CONCAT44(iStack_1c,local_20)) break;
    local_24 = write(*(int *)(param_2 + 4),*(void **)(param_2 + 0xe0),*(size_t *)(param_1 + 0xc));
    if ((int)local_24 < 0) {
      piVar2 = __errno_location();
      local_28 = *piVar2;
      goto LAB_0002dc50;
    }
    if (local_24 != *(uint *)(param_1 + 0xc)) goto LAB_0002da48;
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
LAB_0002dc50:
  if (*(int *)(param_1 + 0x14) != 0) {
    local_28 = (**(code **)(param_1 + 0x14))
                         (param_1,param_3,param_5,local_2c,local_14,local_24,local_28);
  }
  return local_28;
}



/* ===== FUN_0002dca8 @ 0002dca8 size=332 ===== */

int FUN_0002dca8(int param_1,int param_2)

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
          FUN_00022158(param_2 + 0xe0);
        }
        local_c = FUN_00026d7c(param_1,0,param_2 + 0xe0);
      }
      return local_c;
    }
    local_10[2] = 0;
    local_10[3] = 0;
    local_10[4] = 0;
    *(byte *)(local_10 + 5) = *(byte *)(local_10 + 5) & 0xfe;
    *(byte *)(local_10 + 5) = *(byte *)(local_10 + 5) & 0xfd;
    if (*local_10 != 0) {
      FUN_00022158(local_10);
    }
    iVar1 = FUN_00026d7c(param_1,0,local_10);
    if (iVar1 != 0) break;
    local_14 = local_14 + 1;
    local_10 = local_10 + 6;
    local_c = 0;
  }
  return iVar1;
}



/* ===== FUN_0002ddf4 @ 0002ddf4 size=216 ===== */

void FUN_0002ddf4(int param_1)

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
      FUN_00022158(local_c);
    }
    local_c = local_c + 6;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_00022158(param_1 + 0xe0);
  }
  return;
}



/* ===== FUN_0002decc @ 0002decc size=328 ===== */

int FUN_0002decc(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

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



/* ===== FUN_0002e014 @ 0002e014 size=204 ===== */

void FUN_0002e014(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  if (((*(byte *)(param_3 + 5) & 1) != 0) && ((*(byte *)(param_3 + 5) & 2) != 0)) {
    FUN_0002d768(param_1,param_2,param_3[2],param_3[3],1,*param_3);
  }
  *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
  *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) & 0xfe;
  param_3[2] = param_5;
  param_3[3] = param_6;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  param_3[4] = *(undefined4 *)(param_2 + 0x10);
  return;
}



/* ===== FUN_0002e0e0 @ 0002e0e0 size=284 ===== */

int FUN_0002e0e0(undefined4 param_1,int param_2,int param_3)

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
         (iVar1 = FUN_0002d768(param_1,param_2,local_c[2],local_c[3],1,*local_c), iVar1 == 0)) {
        *(byte *)(local_c + 5) = *(byte *)(local_c + 5) & 0xfe;
        iVar1 = local_10;
      }
    }
    local_10 = iVar1;
    local_c = local_c + 6;
  }
  return local_10;
}



/* ===== FUN_0002e1fc @ 0002e1fc size=88 ===== */

int FUN_0002e1fc(char *param_1,int param_2,int param_3)

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



/* ===== FUN_0002e254 @ 0002e254 size=48 ===== */

int FUN_0002e254(char *param_1,stat64 *param_2)

{
  int iVar1;
  
  iVar1 = stat64(param_1,param_2);
  return iVar1;
}



/* ===== FUN_0002e284 @ 0002e284 size=48 ===== */

int FUN_0002e284(int param_1,stat64 *param_2)

{
  int iVar1;
  
  iVar1 = fstat64(param_1,param_2);
  return iVar1;
}



/* ===== FUN_0002e2b4 @ 0002e2b4 size=1236 ===== */

/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int FUN_0002e2b4(char *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
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
  iVar2 = FUN_0002d25c("UNIX_IO_FORCE_BOUNCE");
  local_234 = param_3;
  if (iVar2 != 0) {
    local_234 = param_3 | 8;
  }
  local_14 = FUN_00021f74(100,&local_1c);
  if (local_14 == 0) {
    memset(local_1c,0,100);
    *local_1c = 0x7f2bb705;
    local_14 = FUN_00021f74(0x100,&local_20);
    if (local_14 == 0) {
      local_1c[1] = param_5;
      sVar3 = strlen(param_1);
      local_14 = FUN_00021f74(sVar3 + 1,local_1c + 2);
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
          uVar4 = FUN_0004187c(local_20[1]);
          puVar1[0x18] = uVar4;
        }
        iVar2 = FUN_0002e284(local_20[1],auStack_88);
        if (iVar2 == 0) {
          iVar2 = FUN_0002d184(local_78);
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
        local_14 = FUN_0002dca8(local_1c,local_20);
        if (local_14 == 0) {
          if ((local_234 & 1) != 0) {
            local_218 = 0;
            local_18 = ioctl(local_20[1],0x125e,&local_218);
            if ((local_18 == 0) && (local_218 != 0)) {
              local_14 = 1;
              local_18 = 0;
              goto LAB_0002e6fc;
            }
          }
          if (((((((local_234 & 1) != 0) && (iVar2 = uname(&uStack_210), iVar2 == 0)) &&
                (uStack_210.release[0] == '2')) &&
               ((uStack_210.release[1] == '.' && (uStack_210.release[2] == '4')))) &&
              ((uStack_210.release[3] == '.' &&
               ((uStack_210.release[4] == '1' && (0x2f < (byte)uStack_210.release[5])))))) &&
             (((byte)uStack_210.release[5] < 0x38 &&
              ((iVar2 = FUN_0002e284(local_20[1],auStack_88), iVar2 == 0 &&
               (iVar2 = FUN_0002d184(local_78), iVar2 != 0)))))) {
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
LAB_0002e6fc:
  if (local_20 != (undefined4 *)0x0) {
    if (-1 < (int)local_20[1]) {
      close(local_20[1]);
    }
    FUN_0002ddf4(local_20);
    FUN_00022158(&local_20);
  }
  if (local_1c != (undefined4 *)0x0) {
    if (local_1c[2] != 0) {
      FUN_00022158(local_1c + 2);
    }
    FUN_00022158(&local_1c);
  }
  return local_14;
}



/* ===== FUN_0002e788 @ 0002e788 size=216 ===== */

undefined4 FUN_0002e788(char *param_1,undefined4 param_2,undefined4 param_3)

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
    uVar3 = FUN_0002e2b4(param_1,iVar1,bVar4,param_3,DAT_0006b2e0);
  }
  return uVar3;
}



/* ===== FUN_0002e860 @ 0002e860 size=228 ===== */

int FUN_0002e860(int param_1,uint param_2,undefined4 param_3)

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
    iVar2 = FUN_0002e1fc(param_1,local_c,0);
    if (iVar2 < 0) {
      piVar1 = __errno_location();
      iVar2 = *piVar1;
    }
    else {
      iVar2 = FUN_0002e2b4(param_1,iVar2,param_2,param_3,DAT_0006b264);
    }
  }
  return iVar2;
}



/* ===== FUN_0002e944 @ 0002e944 size=296 ===== */

int FUN_0002e944(int *param_1)

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
        local_c = FUN_0002e0e0(param_1,local_10,0);
        iVar1 = close(local_10[1]);
        if (iVar1 < 0) {
          piVar2 = __errno_location();
          local_c = *piVar2;
        }
        FUN_0002ddf4(local_10);
        FUN_00022158(local_14 + 0x16);
        if (local_14[2] != 0) {
          FUN_00022158(local_14 + 2);
        }
        FUN_00022158(&local_14);
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



/* ===== FUN_0002ea6c @ 0002ea6c size=236 ===== */

int FUN_0002ea6c(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 == 0x7f2bb705) {
    piVar2 = (int *)param_1[0x16];
    if (*piVar2 == 0x7f2bb706) {
      if (param_2 != param_1[3]) {
        iVar1 = FUN_0002e0e0(param_1,piVar2,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        param_1[3] = param_2;
        FUN_0002ddf4(piVar2);
        iVar1 = FUN_0002dca8(param_1,piVar2);
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



/* ===== FUN_0002eb58 @ 0002eb58 size=864 ===== */

int FUN_0002eb58(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,void *param_6)

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
        local_28 = FUN_0002e0e0(param_1,local_20,0);
        if (local_28 == 0) {
          local_28 = FUN_0002d2ec(param_1,local_20,param_3,param_4,param_5,param_6);
        }
      }
      else {
        local_14 = param_6;
        local_48 = param_3;
        iStack_44 = param_4;
        while (0 < param_5) {
          local_24 = (undefined4 *)FUN_0002decc(local_20);
          if (local_24 == (undefined4 *)0x0) {
            if (param_5 == 1) {
              local_24 = local_38[0];
              FUN_0002e014(param_1,local_20,local_38[0],iStack_44,local_48,iStack_44);
              local_28 = FUN_0002d2ec(param_1,local_20,local_48,iStack_44,1,*local_24);
              if (local_28 != 0) {
                *(byte *)(local_24 + 5) = *(byte *)(local_24 + 5) & 0xfd;
                return local_28;
              }
              memcpy(local_14,(void *)*local_24,param_1[3]);
              return 0;
            }
            local_18 = 1;
            while (((int)local_18 < param_5 &&
                   (iVar1 = FUN_0002decc(local_20,local_38 + local_18,local_48 + local_18,
                                         iStack_44 + ((int)local_18 >> 0x1f) +
                                         (uint)CARRY4(local_48,local_18),local_38 + local_18),
                   iVar1 == 0))) {
              local_18 = local_18 + 1;
            }
            local_28 = FUN_0002d2ec(param_1,local_20,local_48,iStack_44,local_18,local_14);
            if (local_28 != 0) {
              return local_28;
            }
            for (local_1c = 0; local_1c < (int)local_18; local_1c = local_1c + 1) {
              param_5 = param_5 + -1;
              local_24 = local_38[local_1c];
              bVar2 = 0xfffffffe < local_48;
              FUN_0002e014(param_1,local_20,local_24,iStack_44,local_48,iStack_44);
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



/* ===== FUN_0002eeb8 @ 0002eeb8 size=80 ===== */

undefined4 FUN_0002eeb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002eb58(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002ef08 @ 0002ef08 size=524 ===== */

int FUN_0002ef08(int *param_1,int param_2,uint param_3,int param_4,int param_5,void *param_6)

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
        local_10 = FUN_0002e0e0(param_1,local_18,1);
        if (local_10 == 0) {
          local_10 = FUN_0002d768(param_1,local_18,param_3,param_4,param_5,param_6);
        }
      }
      else {
        local_1c = param_1[7] & 1;
        if (local_1c != 0) {
          uVar2 = FUN_0002d768(param_1,local_18,param_3,param_4,param_5,param_6);
          param_2 = (int)((ulonglong)uVar2 >> 0x20);
          local_10 = (int)uVar2;
        }
        local_14 = param_6;
        local_30 = param_3;
        iStack_2c = param_4;
        for (; 0 < param_5; param_5 = param_5 + -1) {
          local_c = (int *)FUN_0002decc(local_18,param_2,local_30,iStack_2c,&local_20);
          if (local_c == (int *)0x0) {
            local_c = local_20;
            FUN_0002e014(param_1,local_18,local_20,iStack_2c,local_30,iStack_2c);
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



/* ===== FUN_0002f114 @ 0002f114 size=224 ===== */

int FUN_0002f114(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_0002f1f4 @ 0002f1f4 size=80 ===== */

undefined4 FUN_0002f1f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002ef08(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002f244 @ 0002f244 size=380 ===== */

int FUN_0002f244(int *param_1,uint param_2,size_t param_3,void *param_4)

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
        iVar2 = FUN_0002e0e0(param_1,piVar3,1);
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



/* ===== FUN_0002f3c0 @ 0002f3c0 size=200 ===== */

int FUN_0002f3c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 0x7f2bb705) {
    piVar3 = (int *)param_1[0x16];
    if (*piVar3 == 0x7f2bb706) {
      iVar2 = FUN_0002e0e0(param_1,piVar3,0);
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



/* ===== FUN_0002f488 @ 0002f488 size=284 ===== */

undefined4 FUN_0002f488(int *param_1,char *param_2,char *param_3)

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



/* ===== FUN_0002f5a4 @ 0002f5a4 size=512 ===== */

int FUN_0002f5a4(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_0002f7a4 @ 0002f7a4 size=820 ===== */

int FUN_0002f7a4(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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
  iVar2 = FUN_0002d25c("UNIX_IO_NOZEROOUT");
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
      if (local_1c != 0) goto LAB_0002fa78;
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
LAB_0002fa78:
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



/* ===== FUN_0002fad8 @ 0002fad8 size=60 ===== */

bool FUN_0002fad8(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_0002fb14 @ 0002fb14 size=60 ===== */

bool FUN_0002fb14(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_0002fb50 @ 0002fb50 size=96 ===== */

undefined4 FUN_0002fb50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0002fb14(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_0002fad8(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0002fbb0 @ 0002fbb0 size=148 ===== */

void FUN_0002fbb0(int param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 < *(uint *)(param_1 + 0x1c)) && (iVar1 = FUN_0002fb50(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_00017254(param_1,param_2,2), iVar1 != 0)) {
    FUN_0001730c(param_1,param_2,2);
    FUN_0001a6f4(param_1,param_2);
    FUN_00022214(param_1);
    FUN_00022370(param_1);
  }
  return;
}



/* ===== FUN_0002fc44 @ 0002fc44 size=268 ===== */

void FUN_0002fc44(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((param_3 < *(uint *)(param_1 + 0x1c)) && (iVar1 = FUN_0002fb50(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_00017254(param_1,param_3,1), iVar1 != 0)) {
    local_10 = param_3 * *(int *)(*(int *)(param_1 + 0x10) + 0x28);
    local_c = 0;
    while( true ) {
      local_10 = local_10 + 1;
      if (*(uint *)(*(int *)(param_1 + 0x10) + 0x28) <= local_c) break;
      FUN_00021bf8(param_2,local_10);
      local_c = local_c + 1;
    }
    FUN_0001730c(param_1,param_3,1);
    FUN_0001730c(param_1,param_3,2);
    FUN_0001a6f4(param_1,param_3);
    FUN_0002233c(param_1);
    FUN_00022214(param_1);
  }
  return;
}



/* ===== FUN_0002fd50 @ 0002fd50 size=784 ===== */

undefined4 FUN_0002fd50(int *param_1,int param_2,undefined4 param_3,int param_4,uint *param_5)

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
        local_18 = FUN_000513e0(param_2 + -1,*(undefined4 *)(param_1[4] + 0x28));
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
          FUN_00051488(local_10 - 1,*(undefined4 *)(param_1[4] + 0x28));
          local_1c = extraout_r1;
          local_18 = FUN_000513e0(local_10 - 1,*(undefined4 *)(param_1[4] + 0x28));
          FUN_0002fc44(param_1,param_4,local_18,local_18,param_4,param_3);
          local_14 = local_10 + (*(int *)(param_1[4] + 0x28) - local_1c);
          if ((local_10 < local_c) && (local_c <= local_14)) {
            local_14 = local_c - 1;
          }
          if (*(uint *)param_1[4] < local_14) {
            local_14 = *(uint *)param_1[4];
          }
          local_20 = FUN_00021cc0(param_4,local_10,local_14,&local_24);
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
        iVar1 = FUN_00021b04(param_4,local_10);
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



/* ===== FUN_00030060 @ 00030060 size=592 ===== */

int FUN_00030060(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
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
    goto LAB_0003024c;
  }
  if (param_5 == 0) {
    param_5 = param_1[0xc];
  }
  if (param_5 == 0) {
    return 0x7f2bb728;
  }
  if (param_3 == 0 && param_4 == 0) {
LAB_0003015c:
    local_30 = *(uint *)(param_1[4] + 0x14);
    uStack_2c = 0;
  }
  else {
    uVar4 = FUN_000165b0(param_1[4]);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    bVar3 = uVar2 <= param_4;
    if (param_4 == uVar2) {
      bVar3 = (uint)uVar4 <= param_3;
    }
    local_30 = param_3;
    uStack_2c = param_4;
    if (bVar3) goto LAB_0003015c;
  }
  uVar2 = -(1 << (param_1[0x19] & 0xffU));
  local_30 = uVar2 & local_30;
  uStack_2c = (int)uVar2 >> 0x1f & uStack_2c;
  uVar4 = FUN_000165b0(param_1[4]);
  uVar4 = FUN_00021c64(param_5,&local_20,local_30,uStack_2c,(int)uVar4 + -1,
                       (int)((ulonglong)uVar4 >> 0x20) - (uint)((int)uVar4 == 0),&local_20);
  local_14 = (int)uVar4;
  if ((local_14 == 2) &&
     (uVar4 = CONCAT44(uStack_2c,local_14),
     uStack_2c != 0 || local_30 != *(uint *)(param_1[4] + 0x14))) {
    uVar4 = FUN_00021c64(param_5,0,*(undefined4 *)(param_1[4] + 0x14),0,local_30 - 1,
                         uStack_2c - (local_30 == 0),&local_20);
  }
LAB_0003024c:
  local_14 = (int)uVar4;
  if (local_14 == 2) {
    local_14 = 0x7f2bb748;
  }
  else if (local_14 == 0) {
    uVar1 = FUN_00016224(param_1,(int)((ulonglong)uVar4 >> 0x20),(undefined4)local_20,local_20._4_4_
                        );
    FUN_0002fbb0(param_1,uVar1);
    *param_6 = (undefined4)local_20;
    param_6[1] = local_20._4_4_;
    local_14 = 0;
  }
  return local_14;
}



/* ===== FUN_000302b0 @ 000302b0 size=108 ===== */

int FUN_000302b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_00030060(param_1,param_3,param_2,0,param_3,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_0003031c @ 0003031c size=368 ===== */

int FUN_0003031c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,void *param_5,
                undefined4 *param_6)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  uVar1 = CONCAT44(param_2,local_c);
  if (*(int *)(param_1 + 0x8c) == 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar1 = FUN_0002cfb4(param_1);
      if ((int)uVar1 != 0) {
        return (int)uVar1;
      }
    }
    local_c = (int)uVar1;
    local_c = FUN_00030060(param_1,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4,0,&local_18);
  }
  else {
    local_c = (**(code **)(param_1 + 0x8c))
                        (param_1,*(code **)(param_1 + 0x8c),param_3,param_4,&local_18);
  }
  if (local_c == 0) {
    if (param_5 == (void *)0x0) {
      local_c = FUN_000272d0(param_1,1,local_18,uStack_14,1,0,0);
    }
    else {
      memset(param_5,0,*(size_t *)(param_1 + 0x14));
      local_c = FUN_00026ba0(*(undefined4 *)(param_1 + 4),1,local_18,uStack_14,1,param_5);
    }
    if (local_c == 0) {
      FUN_00031594(param_1,1,local_18,uStack_14,1);
      *param_6 = local_18;
      param_6[1] = uStack_14;
    }
  }
  return local_c;
}



/* ===== FUN_0003048c @ 0003048c size=108 ===== */

int FUN_0003048c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_0003031c(param_1,param_3,param_2,0,param_3,local_18);
  if (iVar1 == 0) {
    *param_4 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_000304f8 @ 000304f8 size=520 ===== */

undefined4
FUN_000304f8(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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
      uVar1 = FUN_000155b0(param_8);
      uVar1 = 1 << (uVar1 & 0xff);
      local_20 = -uVar1 & local_20;
      uStack_1c = (int)-uVar1 >> 0x1f & uStack_1c;
      param_5 = -uVar1 & param_5;
      param_6 = (int)-uVar1 >> 0x1f & param_6;
      do {
        uVar5 = (uStack_1c + ((int)param_7 >> 0x1f) + (uint)CARRY4(local_20,param_7)) -
                (uint)(local_20 + param_7 == 0);
        uVar7 = FUN_000165b0(param_1[4]);
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
        iVar2 = FUN_00021ed4(param_8,uVar3,local_20,uStack_1c,param_7);
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



/* ===== FUN_00030700 @ 00030700 size=140 ===== */

int FUN_00030700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_000304f8(param_1,0,param_2,0,param_3,0,param_4,param_5,local_18);
  if (iVar1 == 0) {
    *param_6 = local_18[0];
  }
  return iVar1;
}



/* ===== FUN_00030804 @ 00030804 size=476 ===== */

ulonglong FUN_00030804(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
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
  if (((param_3 != 0) && (lVar2 = FUN_0001645c(param_1,param_3), lVar2 != 0)) &&
     ((*(uint *)(param_3 + 0x20) & 0x10000000) == 0)) {
    if ((*(uint *)(param_3 + 0x20) & 0x80000) == 0) {
      if (*(int *)(param_3 + 0x28) != 0) {
        return (ulonglong)*(uint *)(param_3 + 0x28);
      }
    }
    else {
      local_18 = FUN_0003bb8c(param_1,param_2,param_3,&local_3c);
      if (((local_18 == 0) && (local_18 = FUN_0003cbfc(local_3c,0,param_5,param_6), local_18 == 0))
         && (local_18 = FUN_0003bf68(local_3c,0,&local_38), local_18 == 0)) {
        FUN_0003ba88(local_3c);
        uVar1 = param_5 - (uint)uStack_30;
        return CONCAT44((param_6 -
                        ((int)((ulonglong)uStack_30 >> 0x20) + (uint)(param_5 < (uint)uStack_30))) +
                        iStack_34 + (uint)CARRY4(uVar1,local_38),uVar1 + local_38);
      }
    }
  }
  FUN_0003ba88(local_3c);
  local_19 = *(sbyte *)(*(int *)(param_1 + 0x10) + 0x174);
  local_14 = FUN_00022434(param_1,param_2);
  if (local_19 != 0) {
    local_14 = local_14 & -(1 << local_19);
  }
  uVar3 = FUN_00016290(param_1,local_14);
  return uVar3;
}



/* ===== FUN_000309e0 @ 000309e0 size=1172 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_000309e0(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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
  local_38 = FUN_000165b0(param_1[4]);
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
    goto LAB_00030d48;
  }
  if (param_7 == 0) {
    param_7 = param_1[0xc];
  }
  if (param_7 == 0) {
    return 0x7f2bb728;
  }
  if (param_3 == 0 && param_4 == 0) {
LAB_00030b6c:
    local_60 = *(uint *)(param_1[4] + 0x14);
    uStack_5c = 0;
  }
  else {
    uVar8 = FUN_000165b0(param_1[4]);
    uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
    bVar7 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar7 = (uint)uVar8 <= param_3;
    }
    local_60 = param_3;
    uStack_5c = param_4;
    if (bVar7) goto LAB_00030b6c;
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
      local_1c = FUN_00021c64(param_7,uStack_44,local_48,uStack_44,iVar2,iVar6,&local_48);
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
    local_1c = FUN_00021d3c(param_7,uStack_44,local_48,uStack_44,local_28,uStack_24,&local_50);
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
LAB_00030d48:
  local_28 = local_48;
  uStack_24 = uStack_44;
  while( true ) {
    bVar7 = uStack_4c <= uStack_24;
    if (uStack_24 == uStack_4c) {
      bVar7 = local_50 <= local_28;
    }
    if (bVar7) break;
    uVar4 = FUN_00016224(param_1,uStack_24,local_28,uStack_24);
    FUN_0002fbb0(param_1,uVar4);
    bVar7 = CARRY4(*(uint *)(param_1[4] + 0x20),local_28);
    local_28 = *(uint *)(param_1[4] + 0x20) + local_28;
    uStack_24 = uStack_24 + bVar7;
  }
  return 0;
}



/* ===== FUN_00030eec @ 00030eec size=384 ===== */

int FUN_00030eec(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
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
      local_10 = FUN_000309e0(param_1,local_c,param_3,param_4,param_5,0,0,param_6,&local_18);
      if (local_10 == 0) {
        bVar1 = iStack_14 == 0;
        if (iStack_14 == 0) {
          bVar1 = local_18 <= param_5;
        }
        if (!bVar1 || iStack_14 == 0 && param_5 == local_18) {
          if (((param_2 & 2) == 0) ||
             (local_10 = FUN_000272d0(param_1,param_5,*param_6,param_6[1],param_5,0,0),
             local_10 == 0)) {
            FUN_000317d4(param_1,param_5,*param_6,param_6[1],param_5,1);
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



/* ===== FUN_0003106c @ 0003106c size=60 ===== */

bool FUN_0003106c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x10) != 0;
}



/* ===== FUN_000310a8 @ 000310a8 size=476 ===== */

int FUN_000310a8(int param_1,int param_2,undefined4 param_3)

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
  
  FUN_000178e4(param_1,param_2,&local_20,&local_28,&local_30,&local_34);
  uVar7 = FUN_0003106c(*(undefined4 *)(param_1 + 0x10));
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 == 0) {
    local_14 = *(int *)(param_1 + 0x20) + (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0xce);
  }
  else {
    local_14 = *(uint *)(*(int *)(param_1 + 0x10) + 0x104);
  }
  if ((local_20 != 0 || iStack_1c != 0) || (param_2 == 0)) {
    FUN_00021a04(param_3,uVar3,local_20,iStack_1c);
    uVar3 = extraout_r1;
  }
  if (((param_2 == 0) && (*(int *)(param_1 + 0x14) == 0x400)) &&
     (1 < 1 << (*(uint *)(param_1 + 100) & 0xff))) {
    FUN_00021a04(param_3,uVar3,0,0);
    uVar3 = extraout_r1_00;
  }
  if (local_28 != 0 || iStack_24 != 0) {
    local_18 = local_14;
    uVar4 = local_14 + local_28;
    uVar5 = ((int)local_14 >> 0x1f) + iStack_24 + (uint)CARRY4(local_14,local_28);
    uVar7 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
    uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
    bVar6 = uVar2 <= uVar5;
    if (uVar5 == uVar2) {
      bVar6 = (uint)uVar7 <= uVar4;
    }
    if (bVar6) {
      iVar1 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
      local_18 = iVar1 - local_28;
    }
    FUN_0002057c(param_3,local_18,local_28,iStack_24,local_18);
    uVar3 = extraout_r1_01;
  }
  if (local_30 != 0 || iStack_2c != 0) {
    FUN_00021a04(param_3,uVar3,local_30,iStack_2c);
  }
  iVar1 = FUN_0001639c(param_1,param_2);
  return (iVar1 - (*(int *)(param_1 + 0x28) + local_34)) + -2;
}



/* ===== FUN_00031284 @ 00031284 size=60 ===== */

bool FUN_00031284(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x10) != 0;
}



/* ===== FUN_000312c0 @ 000312c0 size=60 ===== */

bool FUN_000312c0(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_000312fc @ 000312fc size=96 ===== */

undefined4 FUN_000312fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000312c0(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00031284(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0003135c @ 0003135c size=512 ===== */

void FUN_0003135c(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00022434(param_1,param_2);
  if (**(uint **)(param_1 + 0x10) < param_2) {
    FUN_00044854("ext2fs_inode_alloc_stats2",0,"Illegal inode number: %lu",param_2);
  }
  else {
    if (param_3 < 1) {
      FUN_00021acc(*(undefined4 *)(param_1 + 0x2c),param_2);
    }
    else {
      FUN_00021a94(*(undefined4 *)(param_1 + 0x2c),param_2);
    }
    iVar2 = FUN_00016ed4(param_1,iVar1);
    FUN_00016f50(param_1,iVar1,iVar2 - param_3);
    if (param_4 != 0) {
      iVar2 = FUN_00016fd0(param_1,iVar1);
      FUN_0001704c(param_1,iVar1,iVar2 + param_3);
    }
    FUN_0001730c(param_1,iVar1,1);
    iVar2 = FUN_000312fc(param_1);
    if (iVar2 != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x28);
      iVar2 = FUN_000170cc(param_1,iVar1);
      if ((iVar3 - iVar2) + iVar1 * *(int *)(*(int *)(param_1 + 0x10) + 0x28) + 1U <= param_2) {
        FUN_00017148(param_1,iVar1,*(int *)(*(int *)(param_1 + 0x10) + 0x28) * (iVar1 + 1) - param_2
                    );
      }
      FUN_0001a6f4(param_1,iVar1);
    }
    *(int *)(*(int *)(param_1 + 0x10) + 0x10) = *(int *)(*(int *)(param_1 + 0x10) + 0x10) - param_3;
    FUN_00022214(param_1);
    FUN_0002233c(param_1);
  }
  return;
}



/* ===== FUN_0003155c @ 0003155c size=56 ===== */

void FUN_0003155c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0003135c(param_1,param_2,param_3,0);
  return;
}



/* ===== FUN_00031594 @ 00031594 size=392 ===== */

void FUN_00031594(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_00016224(param_1,param_2,param_3,param_4);
  uVar6 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  bVar5 = uVar4 <= param_4;
  if (param_4 == uVar4) {
    bVar5 = (uint)uVar6 <= param_3;
  }
  if (bVar5) {
    FUN_00044854("ext2fs_block_alloc_stats",0,"Illegal block number: %lu",param_3);
  }
  else {
    if (param_5 < 1) {
      FUN_00021a34(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4);
    }
    else {
      FUN_00021a04(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4);
    }
    iVar3 = FUN_00016dd8(param_1,uVar2);
    FUN_00016e54(param_1,uVar2,iVar3 - param_5);
    FUN_0001730c(param_1,uVar2,2);
    FUN_0001a6f4(param_1,uVar2);
    uVar1 = -param_5;
    uVar4 = 1 << (*(uint *)(param_1 + 100) & 0xff);
    iVar3 = uVar4 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar4 >> 0x1f) +
            (int)((ulonglong)uVar4 * (ulonglong)uVar1 >> 0x20);
    FUN_000168a4(*(undefined4 *)(param_1 + 0x10),iVar3,(int)((ulonglong)uVar4 * (ulonglong)uVar1),
                 iVar3);
    FUN_00022214(param_1);
    FUN_00022370(param_1);
    if (*(int *)(param_1 + 0x90) != 0) {
      (**(code **)(param_1 + 0x90))(param_1,*(code **)(param_1 + 0x90),param_3,param_4,param_5);
    }
  }
  return;
}



/* ===== FUN_0003171c @ 0003171c size=64 ===== */

void FUN_0003171c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00031594(param_1,param_3,param_2,0,param_3);
  return;
}



/* ===== FUN_000317d4 @ 000317d4 size=728 ===== */

void FUN_000317d4(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,uint param_6)

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
  lVar8 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
  uVar4 = (uint)((ulonglong)lVar8 >> 0x20);
  bVar7 = uVar4 <= uVar5;
  if (uVar5 == uVar4) {
    bVar7 = (uint)lVar8 <= param_5 + param_3;
  }
  if (bVar7 && lVar8 != CONCAT44(uVar5,param_5 + param_3)) {
    FUN_00044854("ext2fs_block_alloc_stats_range",0,"Illegal block range: %llu (%u) ",param_4,
                 param_3,param_4,param_5);
  }
  else if (param_6 != 0) {
    local_38 = param_3;
    if ((int)param_6 < 1) {
      FUN_000207dc(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4,
                   param_5);
      param_6 = 0xffffffff;
      iVar3 = extraout_r1_00;
      iStack_34 = param_4;
    }
    else {
      FUN_0002057c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),param_3,param_4,
                   param_5);
      param_6 = 1;
      iVar3 = extraout_r1;
      iStack_34 = param_4;
    }
    for (; param_5 != 0; param_5 = param_5 - local_18) {
      uVar1 = FUN_00016224(param_1,iVar3,local_38,iStack_34);
      uVar9 = FUN_00016308(param_1,uVar1);
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
      iVar2 = FUN_00016dd8(param_1,uVar1);
      iVar3 = 1 << (*(uint *)(param_1 + 100) & 0xff);
      iVar3 = FUN_00051964((int)((ulonglong)param_6 * (ulonglong)local_18),
                           ((int)param_6 >> 0x1f) * local_18 + param_6 * local_14 +
                           (int)((ulonglong)param_6 * (ulonglong)local_18 >> 0x20),iVar3,
                           iVar3 >> 0x1f);
      FUN_00016e54(param_1,uVar1,iVar2 - iVar3);
      FUN_0001730c(param_1,uVar1,2);
      FUN_0001a6f4(param_1,uVar1);
      uVar4 = -param_6;
      iVar3 = ((int)uVar4 >> 0x1f) * local_18 + uVar4 * local_14 +
              (int)((ulonglong)uVar4 * (ulonglong)local_18 >> 0x20);
      FUN_000168a4(*(undefined4 *)(param_1 + 0x10),iVar3,
                   (int)((ulonglong)uVar4 * (ulonglong)local_18),iVar3);
      bVar7 = CARRY4(local_18,local_38);
      local_38 = local_18 + local_38;
      iVar3 = iStack_34;
      iStack_34 = local_14 + iStack_34 + (uint)bVar7;
    }
    FUN_00022214(param_1);
    FUN_00022370(param_1);
    if (*(int *)(param_1 + 0xb8) != 0) {
      (**(code **)(param_1 + 0xb8))(param_1,*(code **)(param_1 + 0xb8),local_38,iStack_34,0,param_6)
      ;
    }
  }
  return;
}



/* ===== FUN_00031b24 @ 00031b24 size=196 ===== */

int FUN_00031b24(int param_1)

{
  uint uVar1;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_00021f74(4,&local_14);
  if (local_c == 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    local_10 = (*(uint *)(param_1 + 0x20) - uVar1 >> 3 |
               (*(int *)(param_1 + 0x24) -
               ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
               (uint)(*(uint *)(param_1 + 0x20) < uVar1))) * 0x20000000) + 1;
    local_c = FUN_00021f74(local_10,local_14);
    if (local_c == 0) {
      *(undefined4 *)(param_1 + 0x30) = local_14;
      local_c = 0;
    }
    else {
      FUN_00022158(&local_14);
    }
  }
  return local_c;
}



/* ===== FUN_00031be8 @ 00031be8 size=156 ===== */

int FUN_00031be8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00031b24(param_2);
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



/* ===== FUN_00031c84 @ 00031c84 size=116 ===== */

void FUN_00031c84(int param_1)

{
  int *local_c;
  
  local_c = *(int **)(param_1 + 0x30);
  if (local_c != (int *)0x0) {
    if (*local_c != 0) {
      FUN_00022158(local_c);
      *local_c = 0;
    }
    FUN_00022158(&local_c);
  }
  return;
}



/* ===== FUN_00031cf8 @ 00031cf8 size=172 ===== */

int FUN_00031cf8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  iVar1 = FUN_00031b24(param_2);
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



/* ===== FUN_00031da4 @ 00031da4 size=484 ===== */

int FUN_00031da4(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6)

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
      FUN_00015da8(local_10 - *(uint *)(param_1 + 0x10),
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
    if ((uVar2 == uVar4) || (iVar3 = FUN_000221a4(uVar2,uVar4,piVar1), iVar3 == 0)) {
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



/* ===== FUN_00031f88 @ 00031f88 size=100 ===== */

undefined4 FUN_00031f88(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015d08(param_3 - *(uint *)(param_1 + 0x10),
                       param_4 - (*(int *)(param_1 + 0x14) +
                                 (uint)(param_3 < *(uint *)(param_1 + 0x10))),
                       **(undefined4 **)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_00031fec @ 00031fec size=100 ===== */

undefined4 FUN_00031fec(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015da8(param_3 - *(uint *)(param_1 + 0x10),
                       param_4 - (*(int *)(param_1 + 0x14) +
                                 (uint)(param_3 < *(uint *)(param_1 + 0x10))),
                       **(undefined4 **)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_00032050 @ 00032050 size=100 ===== */

undefined4 FUN_00032050(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015e50(param_3 - *(uint *)(param_1 + 0x10),
                       param_4 - (*(int *)(param_1 + 0x14) +
                                 (uint)(param_3 < *(uint *)(param_1 + 0x10))),
                       **(undefined4 **)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_000320b4 @ 000320b4 size=156 ===== */

void FUN_000320b4(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 local_14;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  for (local_14 = 0; local_14 < param_5; local_14 = local_14 + 1) {
    FUN_000214ac((local_14 + param_3) - *(uint *)(param_1 + 0x10),
                 (param_4 + (uint)CARRY4(local_14,param_3)) -
                 (*(int *)(param_1 + 0x14) + (uint)(local_14 + param_3 < *(uint *)(param_1 + 0x10)))
                 ,*puVar1);
  }
  return;
}



/* ===== FUN_00032150 @ 00032150 size=156 ===== */

void FUN_00032150(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 local_14;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  for (local_14 = 0; local_14 < param_5; local_14 = local_14 + 1) {
    FUN_00021520((local_14 + param_3) - *(uint *)(param_1 + 0x10),
                 (param_4 + (uint)CARRY4(local_14,param_3)) -
                 (*(int *)(param_1 + 0x14) + (uint)(local_14 + param_3 < *(uint *)(param_1 + 0x10)))
                 ,*puVar1);
  }
  return;
}



/* ===== FUN_000321ec @ 000321ec size=660 ===== */

undefined4 FUN_000321ec(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

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
  uVar1 = FUN_0001e2bc(iVar3 + local_10,local_18);
  return uVar1;
}



/* ===== FUN_00032480 @ 00032480 size=104 ===== */

undefined4
FUN_00032480(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  memcpy((void *)(**(int **)(param_1 + 0x30) + (param_3 >> 3 | param_4 << 0x1d)),param_6,
         param_5 + 7U >> 3);
  return 0;
}



/* ===== FUN_000324e8 @ 000324e8 size=104 ===== */

undefined4
FUN_000324e8(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,void *param_6)

{
  memcpy(param_6,(void *)(**(int **)(param_1 + 0x30) + (param_3 >> 3 | param_4 << 0x1d)),
         param_5 + 7U >> 3);
  return 0;
}



/* ===== FUN_00032550 @ 00032550 size=112 ===== */

void FUN_00032550(int param_1)

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



/* ===== FUN_000325c0 @ 000325c0 size=112 ===== */

void FUN_000325c0(int param_1)

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



/* ===== FUN_00032630 @ 00032630 size=816 ===== */

undefined4
FUN_00032630(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
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
    iVar3 = FUN_00015e50(local_c,0,*piVar2,*piVar2,param_3,param_4);
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
      if ((local_10 < 8) || (((uint)local_18 & 7) == 0)) goto LAB_000327a0;
      if ((char)*local_18 != -1) break;
      local_18 = (int *)((int)local_18 + 1);
      local_10 = local_10 - 8;
      local_c = local_c + 8;
    }
    bVar1 = true;
LAB_000327a0:
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
      iVar3 = FUN_00015e50(local_c,0,*piVar2,*piVar2,param_3,param_4);
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



/* ===== FUN_00032960 @ 00032960 size=804 ===== */

undefined4
FUN_00032960(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
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
    iVar3 = FUN_00015e50(local_c,0,*piVar2,*piVar2,param_3,param_4);
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
      if ((local_10 < 8) || (((uint)local_18 & 7) == 0)) goto LAB_00032ad0;
      if ((char)*local_18 != '\0') break;
      local_18 = (int *)((int)local_18 + 1);
      local_10 = local_10 - 8;
      local_c = local_c + 8;
    }
    bVar1 = true;
LAB_00032ad0:
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
      iVar3 = FUN_00015e50(local_c,0,*piVar2,*piVar2,param_3,param_4);
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



/* ===== FUN_00032c84 @ 00032c84 size=56 ===== */

bool FUN_00032c84(int *param_1)

{
  return *param_1 == 0;
}



/* ===== FUN_00032cbc @ 00032cbc size=92 ===== */

void FUN_00032cbc(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_1[1];
  *param_3 = (int)param_1;
  return;
}



/* ===== FUN_00032d18 @ 00032d18 size=36 ===== */

undefined4 FUN_00032d18(undefined4 param_1)

{
  return param_1;
}



/* ===== FUN_00032d3c @ 00032d3c size=104 ===== */

void FUN_00032d3c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int local_10;
  int local_c;
  
  local_c = FUN_00021f74(0x20,&local_10);
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



/* ===== FUN_00032da4 @ 00032da4 size=140 ===== */

void FUN_00032da4(int param_1,int param_2)

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
  FUN_00022158(&local_10);
  return;
}



/* ===== FUN_00032e30 @ 00032e30 size=132 ===== */

int FUN_00032e30(int param_1)

{
  int iVar1;
  undefined4 *local_10 [2];
  
  iVar1 = FUN_00021f74(0x10,local_10);
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



/* ===== FUN_00032eb4 @ 00032eb4 size=68 ===== */

int FUN_00032eb4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00032e30(param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00032ef8 @ 00032ef8 size=116 ===== */

void FUN_00032ef8(undefined4 param_1)

{
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_0004384c(param_1);
  while (local_c != 0) {
    local_10 = FUN_0004390c(local_c);
    local_14 = FUN_00032d18(local_c);
    FUN_00043378(local_c,param_1);
    FUN_00022158(&local_14);
    local_c = local_10;
  }
  return;
}



/* ===== FUN_00032f6c @ 00032f6c size=72 ===== */

void FUN_00032f6c(int param_1)

{
  undefined4 local_c;
  
  local_c = *(undefined4 *)(param_1 + 0x30);
  FUN_00032ef8(local_c);
  FUN_00022158(&local_c);
  return;
}



/* ===== FUN_00032fb4 @ 00032fb4 size=340 ===== */

int FUN_00032fb4(int param_1,int param_2)

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
  local_18 = FUN_00032e30(param_2);
  if (local_18 == 0) {
    local_1c = *(int *)(param_1 + 0x30);
    local_20 = *(int **)(param_2 + 0x30);
    *(undefined4 *)(local_1c + 8) = 0;
    local_20[2] = 0;
    for (local_c = FUN_0004384c(local_1c); local_c != 0; local_c = FUN_0004390c(local_c)) {
      local_24 = (void *)FUN_00032d18(local_c);
      local_18 = FUN_00021f74(0x20,&local_2c);
      if (local_18 != 0) {
        return local_18;
      }
      memcpy(local_2c,local_24,0x20);
      local_28 = local_2c;
      local_14 = local_20;
      local_10 = 0;
      if (*local_20 != 0) {
        local_10 = FUN_000438ac(local_20);
        local_14 = (int *)(local_10 + 4);
      }
      FUN_00032cbc(local_28,local_10,local_14);
      FUN_00042d60(local_28,local_20);
    }
  }
  return local_18;
}



/* ===== FUN_00033108 @ 00033108 size=240 ===== */

void FUN_00033108(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_18;
  int local_14;
  
  local_14 = FUN_000438ac(param_3);
  while( true ) {
    if (local_14 == 0) {
      return;
    }
    local_18 = FUN_00032d18(local_14);
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
      FUN_00043378(local_14,param_3);
      FUN_00022158(&local_18);
      local_14 = FUN_000438ac(param_3);
    }
  }
  return;
}



/* ===== FUN_000331f8 @ 000331f8 size=280 ===== */

undefined4
FUN_000331f8(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
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
  FUN_00033108(uVar3 - *(uint *)(param_1 + 0x10),
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
    FUN_0003359c(uVar1 + 1,
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



/* ===== FUN_00033310 @ 00033310 size=652 ===== */

undefined4 FUN_00033310(int *param_1,undefined4 param_2,uint param_3,uint param_4)

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
      iVar1 = FUN_0004390c(iVar2);
      if (iVar1 != 0) {
        local_c = FUN_00032d18(iVar1);
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
      iVar2 = FUN_00032d18(*local_10);
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



/* ===== FUN_0003359c @ 0003359c size=1092 ===== */

uint FUN_0003359c(uint param_1,uint param_2,uint param_3,int param_4,int *param_5)

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
LAB_000336c4:
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
        goto LAB_00033870;
      }
    }
  }
  while (*local_20 != 0) {
    local_1c = *local_20;
    local_2c = FUN_00032d18(local_1c);
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
      if (!bVar4 || param_2 == uVar2 && param_1 == uVar1) goto LAB_000336c4;
      local_20 = (int *)(*local_20 + 4);
    }
    else {
      local_20 = (int *)(*local_20 + 8);
    }
  }
  FUN_00032d3c(&local_3c,&local_3c,param_1,param_2,param_3,param_4);
  local_24 = local_3c;
  FUN_00032cbc(local_3c,local_1c,local_20);
  FUN_00042d60(local_24,local_34);
  param_5[1] = local_3c;
  local_28 = FUN_000439d0(local_24);
  local_50 = param_3;
  iStack_4c = param_4;
  local_48 = param_1;
  uStack_44 = param_2;
  if ((local_28 != 0) &&
     (local_2c = FUN_00032d18(local_28),
     param_2 ==
     *(int *)(local_2c + 0x1c) + *(int *)(local_2c + 0x14) +
     (uint)CARRY4(*(uint *)(local_2c + 0x18),*(uint *)(local_2c + 0x10)) &&
     param_1 == *(uint *)(local_2c + 0x18) + *(uint *)(local_2c + 0x10))) {
    local_48 = *(uint *)(local_2c + 0x10);
    uStack_44 = *(uint *)(local_2c + 0x14);
    local_50 = *(uint *)(local_2c + 0x18) + param_3;
    iStack_4c = *(int *)(local_2c + 0x1c) + param_4 +
                (uint)CARRY4(*(uint *)(local_2c + 0x18),param_3);
    FUN_00043378(local_28,local_34);
    FUN_00032da4(param_5,local_2c);
  }
LAB_00033870:
  local_28 = FUN_0004390c(local_24);
  do {
    if (local_28 == 0) {
LAB_000339b8:
      *(uint *)(local_3c + 0x10) = local_48;
      *(uint *)(local_3c + 0x14) = uStack_44;
      *(uint *)(local_3c + 0x18) = local_50;
      *(int *)(local_3c + 0x1c) = iStack_4c;
      return local_30;
    }
    local_38 = FUN_0004390c(local_28);
    local_2c = FUN_00032d18(local_28);
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
      if (!bVar4) goto LAB_000339b8;
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
        FUN_00043378(local_28,local_34);
        FUN_00032da4(param_5,local_2c);
        goto LAB_000339b8;
      }
      FUN_00043378(local_28,local_34);
      FUN_00032da4(param_5,local_2c);
    }
    local_28 = local_38;
  } while( true );
}



/* ===== FUN_000339e0 @ 000339e0 size=1028 ===== */

undefined4 FUN_000339e0(uint param_1,uint param_2,uint param_3,int param_4,int *param_5)

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
  iVar1 = FUN_00032c84(param_5);
  if (iVar1 != 0) {
    return 0;
  }
LAB_00033c80:
  do {
    iVar1 = local_24;
    if (*local_28 == 0) {
LAB_00033dc0:
      while( true ) {
        do {
          local_24 = iVar1;
          if (local_24 == 0) {
            return local_2c;
          }
          iVar1 = FUN_0004390c(local_24);
          iVar2 = FUN_00032d18(local_24);
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
        FUN_00043378(local_24,param_5);
        FUN_00032da4(param_5,iVar2);
        local_2c = 1;
      }
      return local_2c;
    }
    local_24 = *local_28;
    iVar2 = FUN_00032d18(local_24);
    bVar7 = *(uint *)(iVar2 + 0x14) <= param_2;
    if (param_2 == *(uint *)(iVar2 + 0x14)) {
      bVar7 = *(uint *)(iVar2 + 0x10) <= param_1;
    }
    if (!bVar7) {
      local_28 = (int *)(*local_28 + 8);
      goto LAB_00033c80;
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
          FUN_0003359c(uVar4,iVar5,uVar3 - uVar4,
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
        iVar1 = FUN_0004390c(iVar2);
        FUN_00043378(iVar2,param_5);
        FUN_00032da4(param_5,iVar2);
        goto LAB_00033dc0;
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



/* ===== FUN_00033de4 @ 00033de4 size=104 ===== */

undefined4 FUN_00033de4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0003359c(param_3 - uVar2,
                       param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                                 (uint)(param_3 < uVar2)),1,0,*(undefined4 *)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_00033e4c @ 00033e4c size=104 ===== */

undefined4 FUN_00033e4c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_000339e0(param_3 - uVar2,
                       param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                                 (uint)(param_3 < uVar2)),1,0,*(undefined4 *)(param_1 + 0x30));
  return uVar1;
}



/* ===== FUN_00033eb4 @ 00033eb4 size=88 ===== */

undefined4 FUN_00033eb4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_00033310(*(undefined4 *)(param_1 + 0x30),param_4,param_3 - uVar2,
                       param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                                 (uint)(param_3 < uVar2)));
  return uVar1;
}



/* ===== FUN_00033f0c @ 00033f0c size=100 ===== */

void FUN_00033f0c(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  FUN_0003359c(param_3 - uVar1,
               param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                         (uint)(param_3 < uVar1)),param_5,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



/* ===== FUN_00033f70 @ 00033f70 size=100 ===== */

void FUN_00033f70(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  FUN_000339e0(param_3 - uVar1,
               param_4 - ((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                         (uint)(param_3 < uVar1)),param_5,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



/* ===== FUN_00033fd4 @ 00033fd4 size=472 ===== */

undefined4 FUN_00033fd4(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

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
  if ((param_5 == 0) || (iVar1 = FUN_00032c84(local_10), iVar1 != 0)) {
    local_18 = 1;
  }
  else {
    while (*local_10 != 0) {
      local_c = *local_10;
      iVar1 = FUN_00032d18(local_c);
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
      iVar1 = FUN_0004390c(local_14);
      iVar2 = FUN_00032d18(local_14);
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



/* ===== FUN_000341ac @ 000341ac size=488 ===== */

undefined4
FUN_000341ac(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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
        FUN_0003359c((local_18 + param_3) - *(uint *)(param_1 + 0x10),
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
        if ((cVar1 != '\0') || (local_18 != 0xffffffff)) goto LAB_00034268;
        local_14 = local_14 + 7;
      }
    }
    else {
LAB_00034268:
      iVar2 = FUN_00015c34(local_14,param_6);
      if (iVar2 == 0) {
        if (local_18 != 0xffffffff) {
          FUN_0003359c((local_18 + param_3) - *(uint *)(param_1 + 0x10),
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



/* ===== FUN_00034394 @ 00034394 size=964 ===== */

undefined4
FUN_00034394(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,void *param_6)

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
  iVar1 = FUN_00032c84(local_20);
  if (iVar1 != 0) {
    return 0;
  }
  while (*local_20 != 0) {
    local_1c = *local_20;
    iVar1 = FUN_00032d18(local_1c);
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
LAB_00034734:
  if (local_1c == 0) {
    return 0;
  }
  iVar1 = FUN_0004390c(local_1c);
  iVar2 = FUN_00032d18(local_1c);
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
  if (!bVar7) goto code_r0x00034524;
  goto LAB_00034574;
code_r0x00034524:
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
LAB_00034574:
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
        FUN_000214ac(local_30 - uVar3,uStack_2c - (uVar4 + (local_30 < uVar3)),param_6);
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
  goto LAB_00034734;
}



/* ===== FUN_00034758 @ 00034758 size=88 ===== */

void FUN_00034758(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  FUN_00032ef8(iVar1);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}



/* ===== FUN_000347b0 @ 000347b0 size=476 ===== */

undefined4
FUN_000347b0(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6,
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
    iVar1 = FUN_00032c84(local_14);
    if (iVar1 == 0) {
      while (*local_14 != 0) {
        iVar1 = FUN_00032d18(*local_14);
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



/* ===== FUN_0003498c @ 0003498c size=524 ===== */

undefined4
FUN_0003498c(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6,
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
    iVar1 = FUN_00032c84(local_18);
    if (iVar1 == 0) {
      while (*local_18 != 0) {
        local_14 = *local_18;
        iVar1 = FUN_00032d18(local_14);
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
      local_1c = FUN_00032d18(local_14);
      uVar7 = *(uint *)(local_1c + 0x14);
      bVar8 = uVar7 <= uVar4;
      if (uVar4 == uVar7) {
        bVar8 = *(uint *)(local_1c + 0x10) <= uVar2;
      }
      if (bVar8 && (uVar4 != uVar7 || uVar2 != *(uint *)(local_1c + 0x10))) {
        iVar1 = FUN_0004390c(local_14);
        if (iVar1 == 0) {
          return 2;
        }
        local_1c = FUN_00032d18(iVar1);
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



/* ===== FUN_00034b98 @ 00034b98 size=656 ===== */

void FUN_00034b98(int param_1)

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
  local_1c = FUN_0004384c(*(undefined4 *)(param_1 + 0x30));
  while( true ) {
    if (local_1c == 0) break;
    iVar1 = FUN_00032d18(local_1c);
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
    local_1c = FUN_0004390c(local_1c);
  }
  if (local_28 != 0 || iStack_24 != 0) {
    uVar6 = FUN_00051964(local_40,iStack_3c,local_28,iStack_24);
  }
  uStack_44 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_48 = (undefined4)uVar6;
  if (local_38._4_4_ == 0 && (uint)local_38 == 0xffffffff) {
    local_38 = 0;
  }
  dVar4 = (double)FUN_000518f0(local_28 << 8,
                               (iStack_24 << 5 | local_28 >> 0x1b) << 3 |
                               (local_28 & 0x7ffffff) >> 0x18);
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  dVar5 = (double)FUN_000518f0(*(uint *)(param_1 + 0x20) - uVar2,
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



/* ===== FUN_00034e28 @ 00034e28 size=1580 ===== */

uint FUN_00034e28(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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
      uVar4 = FUN_000165b0(*(undefined4 *)(*param_4 + 0x10));
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
        iVar2 = FUN_00041e90(*param_4,*param_1,param_4[7]);
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
              iVar2 = FUN_00041f40(*param_4,*param_1,param_4[7]);
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



/* ===== FUN_00035454 @ 00035454 size=1372 ===== */

uint FUN_00035454(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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
      uVar4 = FUN_000165b0(*(undefined4 *)(*param_4 + 0x10));
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
        iVar2 = FUN_00041e90(*param_4,*param_1,param_4[8]);
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
                local_2c = FUN_00034e28(local_24,*param_1,local_20,param_4);
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
              local_2c = FUN_00034e28(local_24,*param_1,local_20,param_4);
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
              iVar2 = FUN_00041f40(*param_4,*param_1,param_4[8]);
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



/* ===== FUN_000359b0 @ 000359b0 size=1452 ===== */

uint FUN_000359b0(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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
      uVar7 = FUN_000165b0(*(undefined4 *)(*param_4 + 0x10));
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
        iVar3 = FUN_00041e90(*param_4,*param_1,param_4[9]);
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
                local_34 = FUN_00035454(local_2c,*param_1,local_28,param_4);
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
              local_34 = FUN_00035454(local_2c,*param_1,local_28,param_4);
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
              iVar3 = FUN_00041f40(*param_4,*param_1,param_4[9]);
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



/* ===== FUN_00035f5c @ 00035f5c size=2812 ===== */

int FUN_00035f5c(int *param_1,undefined4 param_2,uint param_3,int param_4,code *param_5,
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
  local_d0 = FUN_00025ef4(param_1,param_2,local_b8);
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
    local_34 = FUN_00022038(3,param_1[5],&local_cc);
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
      if (((local_d4 & 8) == 0) || ((local_18 & 1) == 0)) goto LAB_000361ac;
      local_d0 = 0x7f2bb76b;
      local_18 = local_18 | 6;
    }
  }
  else {
LAB_000361ac:
    if ((local_98 & 0x80000) == 0) {
      for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
        if ((*(int *)(local_b8 + (local_14 + 10) * 2) != 0) || ((param_3 & 1) != 0)) {
          local_f0[0] = *(int *)(local_b8 + (local_14 + 10) * 2);
          local_f0[1] = 0;
          uVar2 = (*local_e4)(param_1,local_f0,local_e0,iStack_dc,0,local_14,param_6);
          local_18 = local_18 | uVar2;
          *(int *)(local_b8 + (local_14 + 10) * 2) = local_f0[0];
          if ((local_18 & 2) != 0) goto LAB_000369c4;
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
          uVar2 = FUN_00034e28(&local_60,0,0xc,&local_e8);
          local_18 = local_18 | uVar2;
          if ((local_18 & 2) != 0) goto LAB_000369c4;
        }
        if ((local_5c == 0) && ((param_3 & 1) == 0)) {
          uVar2 = local_30 * local_30;
          bVar3 = CARRY4(uVar2,local_e0);
          local_e0 = uVar2 + local_e0;
          iStack_dc = ((int)uVar2 >> 0x1f) + iStack_dc + (uint)bVar3;
        }
        else {
          uVar2 = FUN_00035454(&local_5c,0,0xd,&local_e8);
          local_18 = local_18 | uVar2;
          if ((local_18 & 2) != 0) goto LAB_000369c4;
        }
        if ((local_58[0] != 0) || ((param_3 & 1) != 0)) {
          uVar2 = FUN_000359b0(local_58,0,0xe,&local_e8);
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
      local_d0 = FUN_0003bb8c(param_1,param_2,local_b8,&local_f4);
      if (local_d0 == 0) {
        do {
          do {
            while( true ) {
              if (local_24 == 0) {
                local_d0 = 0;
              }
              else {
                local_d0 = FUN_0003bf68(local_f4,local_24,&local_110);
              }
              if (local_d0 != 0) {
                if ((local_d0 == 0x7f2bb77c) && (local_d0 = 0, (param_3 & 1) != 0))
                goto LAB_00036264;
                goto LAB_0003670c;
              }
              local_24 = 9;
              local_130 = CONCAT44(local_10c,local_110);
              if ((local_fc & 1) == 0) break;
              local_28 = (uint)((local_fc & 2) != 0);
              local_34 = FUN_0003bf68(local_f4,9,&local_128);
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
                    goto LAB_0003670c;
                  }
                  if ((local_38 & 1) != 0) {
                    local_d0 = FUN_0003df1c(local_f4,local_20._4_4_,(uint)local_20,local_20._4_4_,
                                            local_138,local_134,local_28);
                    if (local_d0 != 0) goto LAB_0003670c;
                  }
                  if ((local_18 & 2) != 0) goto LAB_0003670c;
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
            local_d0 = FUN_0003d0cc(local_f4,0,&local_110);
            if (local_d0 != 0) break;
          }
        } while ((local_18 & 2) == 0);
LAB_0003670c:
        FUN_0003ba88(local_f4);
        local_18 = local_18 | 4;
        goto LAB_00036a14;
      }
    }
  }
LAB_000369c4:
  if (((local_18 & 1) != 0) && (local_34 = FUN_000264b0(param_1,param_2,local_b8), local_34 != 0)) {
    local_18 = local_18 | 4;
    local_d0 = local_34;
  }
LAB_00036a14:
  if (param_4 == 0) {
    FUN_00022158(&local_cc);
  }
  if ((local_18 & 4) == 0) {
    local_d0 = 0;
  }
  return local_d0;
LAB_00036264:
  local_130 = 0;
  local_38 = (*local_e4)(param_1,&local_130,(uint)local_20,local_20._4_4_,0,0,param_6);
  local_18 = local_18 | local_38;
  if (((local_d4 & 8) != 0) && ((local_18 & 1) != 0)) {
    local_d0 = 0x7f2bb76b;
    local_18 = local_18 | 6;
    goto LAB_0003670c;
  }
  if ((local_38 & 1) == 0) goto LAB_0003670c;
  uVar2 = (uint)local_20;
  iVar1 = local_20._4_4_;
  local_20 = CONCAT44(local_20._4_4_ + (0xfffffffe < (uint)local_20),(uint)local_20 + 1);
  local_d0 = FUN_0003df1c(local_f4,0,uVar2,iVar1,(int)local_130,local_130._4_4_,0);
  if ((local_d0 != 0) || ((local_18 & 2) != 0)) goto LAB_0003670c;
  if ((uint)local_130 == 0 && local_130._4_4_ == 0) goto LAB_0003670c;
  goto LAB_00036264;
}



/* ===== FUN_00036a58 @ 00036a58 size=140 ===== */

undefined4
FUN_00036a58(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
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



/* ===== FUN_00036ae4 @ 00036ae4 size=100 ===== */

undefined4
FUN_00036ae4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_6;
  local_10 = param_5;
  uVar1 = FUN_00035f5c(param_1,param_2,param_3,param_4,FUN_00036a58,&local_10);
  return uVar1;
}



/* ===== FUN_00036b48 @ 00036b48 size=80 ===== */

undefined4
FUN_00036b48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*param_7)(param_1,param_2,param_3,param_7[1],param_3,param_4);
  return uVar1;
}



/* ===== FUN_00036b98 @ 00036b98 size=104 ===== */

undefined4
FUN_00036b98(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_6;
  local_10 = param_5;
  uVar1 = FUN_00036ae4(param_1,param_2,param_3 | 0x1000,param_4,FUN_00036b48,&local_10);
  return uVar1;
}



/* ===== FUN_00036c00 @ 00036c00 size=60 ===== */

bool FUN_00036c00(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x200) != 0;
}



/* ===== FUN_00036c3c @ 00036c3c size=544 ===== */

int FUN_00036c3c(int param_1,uint param_2,int param_3,int param_4,int *param_5,int param_6,
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
          local_14 = FUN_0003048c(param_1,local_18,param_4 + *(int *)(param_1 + 0x14),&local_18);
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



/* ===== FUN_00036e5c @ 00036e5c size=232 ===== */

int FUN_00036e5c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_1c = 0;
  local_14 = *(uint *)(param_1 + 0x14) >> 2;
  uVar1 = FUN_000513e0(param_6,local_14);
  local_18 = FUN_00036c3c(param_1,param_2 & 0xfffffffd,param_3,param_4,param_5,uVar1,&local_1c);
  uVar1 = local_1c;
  if (local_18 == 0) {
    FUN_00051488(param_6,local_14);
    local_18 = FUN_00036c3c(param_1,param_2,uVar1,param_4,param_5,extraout_r1,param_7);
  }
  return local_18;
}



/* ===== FUN_00036f44 @ 00036f44 size=232 ===== */

int FUN_00036f44(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_1c = 0;
  local_14 = *(uint *)(param_1 + 0x14) >> 2;
  uVar1 = FUN_000513e0(param_6,local_14);
  local_18 = FUN_00036e5c(param_1,param_2 & 0xfffffffd,param_3,param_4,param_5,uVar1,&local_1c);
  uVar1 = local_1c;
  if (local_18 == 0) {
    FUN_00051488(param_6,local_14);
    local_18 = FUN_00036c3c(param_1,param_2,uVar1,param_4,param_5,extraout_r1,param_7);
  }
  return local_18;
}



/* ===== FUN_0003702c @ 0003702c size=432 ===== */

undefined4
FUN_0003702c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            uint param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 local_28;
  uint local_20;
  uint uStack_1c;
  uint local_14;
  
  local_28 = 0;
  iVar2 = FUN_00036c00(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar1 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
    local_20 = uVar1 & param_5;
    uStack_1c = (int)uVar1 >> 0x1f & param_6;
    for (local_14 = 0; (int)local_14 < 1 << (*(uint *)(param_1 + 100) & 0xff);
        local_14 = local_14 + 1) {
      if (param_6 != uStack_1c + ((int)local_14 >> 0x1f) + (uint)CARRY4(local_20,local_14) ||
          param_5 != local_20 + local_14) {
        FUN_000372b8(param_1,param_2,param_3,param_4,0,0,local_20 + local_14,
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



/* ===== FUN_000371dc @ 000371dc size=220 ===== */

int FUN_000371dc(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined8 *param_7)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  *param_7 = 0;
  iVar1 = FUN_00036c00(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) || ((*(uint *)(param_3 + 0x20) & 0x80000) == 0)) {
    local_c = 0;
  }
  else {
    local_c = FUN_0003bb8c(param_1,param_2,param_3,&local_10);
    if (local_c == 0) {
      local_c = FUN_0003702c(param_1,param_2,param_3,local_10,param_5,param_6,param_7);
      FUN_0003ba88(local_10);
    }
  }
  return local_c;
}



/* ===== FUN_000372b8 @ 000372b8 size=928 ===== */

int FUN_000372b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    iVar2 = FUN_0003df1c(param_4,local_1c,param_7,param_8,*param_11,param_11[1],local_1c);
    return iVar2;
  }
  local_18 = FUN_0003ce5c(param_4,param_2,param_7,param_8);
  if (local_18 == 0) {
    iVar2 = FUN_0003bf68(param_4,0,&local_38);
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
    FUN_0003702c(param_1,param_2,param_3,param_4,param_7,param_8,&local_40);
    if ((uint)local_40 == 0 && local_40._4_4_ == 0) {
      local_18 = FUN_000372b8(param_1,param_2,param_3,param_4,param_5,0,param_7 - 1,
                              param_8 - (param_7 == 0),0,param_10,&local_40);
      uVar7 = CONCAT44(local_40._4_4_,(uint)local_40);
      if (local_18 != 0) {
        uVar7 = FUN_00030804(param_1,param_2,param_3,param_8,param_7,param_8);
      }
      local_40._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
      local_40._0_4_ = (uint)uVar7;
      iVar2 = FUN_0003031c(param_1,param_5,(uint)local_40,local_40._4_4_,param_5,&local_40);
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
    local_18 = FUN_0003df1c(param_4,local_1c,param_7,param_8,(uint)local_40,local_40._4_4_,local_1c)
    ;
    if (local_18 != 0) {
      FUN_00031594(param_1,0xffffffff,(uint)local_40,local_40._4_4_,0xffffffff);
      return local_18;
    }
    iVar2 = FUN_00025ef4(param_1,param_2,param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    *param_10 = *param_10 + local_14;
    *param_11 = (uint)local_40;
    param_11[1] = local_40._4_4_;
  }
  return 0;
}



/* ===== FUN_00037658 @ 00037658 size=340 ===== */

bool FUN_00037658(int param_1,int param_2,uint param_3,uint param_4)

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



/* ===== FUN_000377ac @ 000377ac size=1992 ===== */

int FUN_000377ac(int param_1,undefined4 param_2,undefined1 *param_3,int param_4,uint param_5,
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
    iVar1 = FUN_00025ef4(param_1,param_2,auStack_9c);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_bc = auStack_9c;
  }
  local_14 = 0;
  local_1c = *(uint *)(param_1 + 0x14) >> 2;
  iVar1 = FUN_00037658(param_1,local_bc,param_7,param_8);
  if (iVar1 != 0) {
    return 0x7f2bb752;
  }
  if ((*(uint *)(local_bc + 0x20) & 0x10000000) != 0) {
    return 0x7f2bb7a6;
  }
  local_c0 = param_4;
  if (param_4 == 0) {
    iVar1 = FUN_00022038(2,*(undefined4 *)(param_1 + 0x14),&local_ac);
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
          local_a4 = FUN_00030804(param_1,param_2,local_bc,param_8,param_7,param_8);
        }
        else {
          local_a4 = *(int *)(local_bc + (param_7 + 9) * 4);
        }
        if (((*param_10 == 0 && param_10[1] == 0) && ((param_5 & 1) != 0)) &&
           (local_14 = FUN_0003048c(param_1,local_a4,local_c0,&local_a4), local_14 == 0)) {
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
            goto LAB_00037e8c;
          }
          local_a4 = *(int *)(local_bc + 0x54);
          local_14 = FUN_0003048c(param_1,local_a4,local_c0,&local_a4);
          if (local_14 != 0) goto LAB_00037e8c;
          *(int *)(local_bc + 0x58) = local_a4;
          local_b0 = local_b0 + 1;
        }
        local_14 = FUN_00036c3c(param_1,param_5,local_a4,local_c0,&local_b0,uVar2,&local_a8);
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
              goto LAB_00037e8c;
            }
            local_a4 = *(int *)(local_bc + 0x5c);
            local_14 = FUN_0003048c(param_1,local_a4,local_c0,&local_a4);
            if (local_14 != 0) goto LAB_00037e8c;
            *(int *)(local_bc + 0x60) = local_a4;
            local_b0 = local_b0 + 1;
          }
          local_14 = FUN_00036f44(param_1,param_5,local_a4,local_c0,&local_b0,uVar3 - iVar1,
                                  &local_a8);
          if (local_14 == 0) {
            *param_10 = local_a8;
            param_10[1] = 0;
          }
          goto LAB_00037e8c;
        }
        local_a4 = *(int *)(local_bc + 0x5c);
        if (local_a4 == 0) {
          if ((param_5 & 1) == 0) {
            if ((param_5 & 2) != 0) {
              local_14 = 0x7f2bb75f;
            }
            goto LAB_00037e8c;
          }
          local_a4 = *(int *)(local_bc + 0x58);
          local_14 = FUN_0003048c(param_1,local_a4,local_c0,&local_a4);
          if (local_14 != 0) goto LAB_00037e8c;
          *(int *)(local_bc + 0x5c) = local_a4;
          local_b0 = local_b0 + 1;
        }
        local_14 = FUN_00036e5c(param_1,param_5,local_a4,local_c0,&local_b0,uVar3,&local_a8);
        if (local_14 == 0) {
          *param_10 = local_a8;
          param_10[1] = 0;
        }
      }
    }
  }
  else {
    local_14 = FUN_0003bb8c(param_1,param_2,local_bc,&local_a0);
    if (local_14 == 0) {
      local_14 = FUN_000372b8(param_1,param_2,local_bc,local_a0,local_c0,param_5,param_7,param_8,
                              param_9,&local_b0,param_10);
    }
  }
LAB_00037e8c:
  if (((*param_10 != 0 || param_10[1] != 0) && (local_14 == 0)) && ((param_5 & 8) != 0)) {
    local_14 = FUN_000272d0(param_1,1,*param_10,param_10[1],1,0,0);
  }
  if (local_ac != 0) {
    FUN_00022158(&local_ac);
  }
  if (local_a0 != 0) {
    FUN_0003ba88(local_a0);
  }
  if ((local_14 == 0) && ((local_b0 != 0 || (local_18 != 0)))) {
    FUN_000419e4(param_1,local_bc,local_b0,local_b0 >> 0x1f);
    local_14 = FUN_000264b0(param_1,param_2,local_bc);
  }
  return local_14;
}



/* ===== FUN_00037f74 @ 00037f74 size=192 ===== */

/* WARNING: Removing unreachable block (ram,0x00038010) */

int FUN_00037f74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_7;
  iVar1 = FUN_000377ac(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    *param_7 = uVar2;
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00038034 @ 00038034 size=152 ===== */

uint FUN_00038034(uint param_1,byte *param_2,int param_3)

{
  int local_1c;
  uint local_14;
  byte *local_c;
  
  local_1c = param_3;
  local_14 = param_1;
  local_c = param_2;
  while (local_1c != 0) {
    local_14 = (uint)*(ushort *)(&DAT_00054554 + ((local_14 ^ *local_c) & 0xff) * 2) ^
               local_14 >> 8 & 0xff;
    local_1c = local_1c + -1;
    local_c = local_c + 1;
  }
  return local_14;
}



/* ===== FUN_000380cc @ 000380cc size=808 ===== */

uint FUN_000380cc(uint param_1,byte *param_2,uint param_3,int param_4)

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



/* ===== FUN_000383f4 @ 000383f4 size=68 ===== */

undefined4 FUN_000383f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000380cc(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00038438 @ 00038438 size=76 ===== */

undefined4 FUN_00038438(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000383f4(param_1,param_2,param_3,&DAT_00056754,0x82f63b78);
  return uVar1;
}



/* ===== FUN_00038484 @ 00038484 size=92 ===== */

undefined4 FUN_00038484(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000215cc(param_1);
  uVar1 = FUN_000380cc(uVar1,param_2,param_3,param_4);
  uVar1 = FUN_000215cc(uVar1);
  return uVar1;
}



/* ===== FUN_000384e0 @ 000384e0 size=76 ===== */

undefined4 FUN_000384e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038484(param_1,param_2,param_3,&DAT_00054754,0x4c11db7);
  return uVar1;
}



/* ===== FUN_0003852c @ 0003852c size=196 ===== */

int FUN_0003852c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  int local_c;
  
  bVar1 = false;
  local_c = FUN_00026ad4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4,1
                         ,param_5);
  if (local_c == 0) {
    if (((*(uint *)(param_1 + 8) & 0x200000) == 0) &&
       (iVar2 = FUN_000199d4(param_1,param_7,param_5), iVar2 == 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      local_c = 0x7f2bb796;
    }
  }
  return local_c;
}



/* ===== FUN_000385f0 @ 000385f0 size=72 ===== */

undefined4
FUN_000385f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003852c(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return uVar1;
}



/* ===== FUN_00038638 @ 00038638 size=80 ===== */

undefined4 FUN_00038638(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000385f0(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00038688 @ 00038688 size=76 ===== */

undefined4 FUN_00038688(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000385f0(param_1,param_3,param_2,0,param_3,0);
  return uVar1;
}



/* ===== FUN_000386d4 @ 000386d4 size=124 ===== */

int FUN_000386d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_c;
  
  local_c = FUN_00019a98(param_1,param_7,param_5);
  if (local_c == 0) {
    local_c = FUN_00026ba0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4
                           ,1,param_5);
  }
  return local_c;
}



/* ===== FUN_00038750 @ 00038750 size=72 ===== */

undefined4
FUN_00038750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000386d4(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return uVar1;
}



/* ===== FUN_00038798 @ 00038798 size=80 ===== */

undefined4 FUN_00038798(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038750(param_1,param_3,param_2,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_000387e8 @ 000387e8 size=76 ===== */

undefined4 FUN_000387e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038750(param_1,param_3,param_2,0,param_3,0);
  return uVar1;
}



/* ===== FUN_00038834 @ 00038834 size=60 ===== */

bool FUN_00038834(int param_1)

{
  return (*(uint *)(param_1 + 0x5c) & 8) != 0;
}



/* ===== FUN_00038870 @ 00038870 size=60 ===== */

bool FUN_00038870(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x8000) != 0;
}



/* ===== FUN_000388ac @ 000388ac size=260 ===== */

uint FUN_000388ac(byte *param_1,uint *param_2)

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



/* ===== FUN_000389b0 @ 000389b0 size=112 ===== */

undefined4 FUN_000389b0(int *param_1)

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



/* ===== FUN_00038a20 @ 00038a20 size=216 ===== */

int FUN_00038a20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int local_10;
  
  bVar1 = false;
  local_10 = FUN_00026ad4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4,
                          1,param_5);
  if (local_10 == 0) {
    if (((*(uint *)(param_1 + 8) & 0x200000) == 0) &&
       (iVar2 = FUN_00018e70(param_1,param_6,param_3,param_4,param_5), iVar2 == 0)) {
      bVar1 = true;
    }
    local_10 = FUN_000389b0(param_5);
    if ((local_10 == 0) && (bVar1)) {
      local_10 = 0x7f2bb797;
    }
  }
  return local_10;
}



/* ===== FUN_00038af8 @ 00038af8 size=64 ===== */

undefined4
FUN_00038af8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038a20(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}



/* ===== FUN_00038b38 @ 00038b38 size=68 ===== */

undefined4 FUN_00038b38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038af8(param_1,param_3,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_00038b7c @ 00038b7c size=152 ===== */

int FUN_00038b7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00018f0c(param_1,param_6,param_3,param_4,param_5);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_00026ba0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),param_3,param_4
                           ,1,param_5), iVar1 == 0)) {
    FUN_00022248(param_1);
  }
  return iVar1;
}



/* ===== FUN_00038c14 @ 00038c14 size=64 ===== */

undefined4
FUN_00038c14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038b7c(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}



/* ===== FUN_00038c54 @ 00038c54 size=68 ===== */

undefined4 FUN_00038c54(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038c14(param_1,param_3,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_00038c98 @ 00038c98 size=368 ===== */

int FUN_00038c98(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6,
                undefined4 *param_7,undefined4 param_8)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  uVar3 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
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
      uVar3 = FUN_00021f74(*(undefined4 *)(param_1 + 0x14),&local_14);
      uVar1 = (uint)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        return (int)uVar3;
      }
      param_5 = local_14;
      local_c = 0;
    }
    uVar3 = FUN_00038a20(param_1,uVar1,param_3,param_4,param_5,param_8);
    local_c = (int)uVar3;
    if (local_c == 0) {
      local_10 = param_5;
      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + param_6;
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = *(undefined4 *)(param_5 + 4);
      }
      local_c = FUN_00038b7c(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4,param_5,param_8
                            );
    }
    if (local_14 != 0) {
      FUN_00022158(&local_14);
    }
  }
  return local_c;
}



/* ===== FUN_00038e08 @ 00038e08 size=80 ===== */

undefined4
FUN_00038e08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038c98(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return uVar1;
}



/* ===== FUN_00038e58 @ 00038e58 size=88 ===== */

undefined4
FUN_00038e58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00038e08(param_1,param_3,param_2,0,param_3,param_4,param_5);
  return uVar1;
}



/* ===== FUN_00038eb0 @ 00038eb0 size=180 ===== */

int FUN_00038eb0(int param_1,int param_2)

{
  void *local_10;
  int local_c;
  
  local_c = FUN_000220b8(*(int *)(param_1 + 0xc) + param_2,0xc,&local_10);
  if (local_c == 0) {
    memcpy(local_10,*(void **)(param_1 + 8),*(int *)(param_1 + 0xc) * 0xc);
    FUN_00022158(param_1 + 8);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
    *(void **)(param_1 + 8) = local_10;
    local_c = 0;
  }
  return local_c;
}



/* ===== FUN_00038f64 @ 00038f64 size=396 ===== */

int FUN_00038f64(int *param_1,int *param_2)

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
        FUN_00039160(*local_14,&local_20,&local_28);
        FUN_00039160(*local_18,&local_24,&local_2c);
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



/* ===== FUN_000390f0 @ 000390f0 size=112 ===== */

int FUN_000390f0(int param_1)

{
  int *local_c;
  
  local_c = &DAT_0006b36c;
  while( true ) {
    if (local_c[1] == 0) {
      return 0;
    }
    if (param_1 == *local_c) break;
    local_c = local_c + 2;
  }
  return local_c[1];
}



/* ===== FUN_00039160 @ 00039160 size=200 ===== */

undefined4 FUN_00039160(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  int iVar2;
  char *__s2;
  undefined4 *local_14;
  
  local_14 = &DAT_0006b36c;
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



/* ===== FUN_00039228 @ 00039228 size=620 ===== */

int FUN_00039228(int param_1,undefined4 param_2,undefined1 *param_3)

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
    iVar1 = FUN_00025854(param_1,param_2,auStack_c0,0xa0);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_cc = auStack_c0;
    local_c = 0;
  }
  local_18 = FUN_00017410(param_1,local_cc);
  if (local_18 == 0) {
    local_c = 0;
  }
  else {
    if ((int)((ulonglong)local_18 >> 0x20) != 0 ||
        *(uint *)(*(int *)(param_1 + 0x10) + 0x14) <= (uint)local_18) {
      uVar4 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
      uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
      bVar3 = uVar2 <= local_18._4_4_;
      if (local_18._4_4_ == uVar2) {
        bVar3 = (uint)uVar4 <= (uint)local_18;
      }
      if (!bVar3) {
        uVar4 = FUN_00021f74(*(undefined4 *)(param_1 + 0x14),&local_20);
        local_c = (int)uVar4;
        if (local_c != 0) {
          return local_c;
        }
        uVar4 = FUN_00038a20(param_1,(int)((ulonglong)uVar4 >> 0x20),(uint)local_18,local_18._4_4_,
                             local_20,param_2);
        local_c = (int)uVar4;
        if (local_c == 0) {
          local_1c = local_20;
          if (*local_20 == -0x15fe0000) {
            local_20[1] = local_20[1] + -1;
            local_c = FUN_00038b7c(param_1,(int)((ulonglong)uVar4 >> 0x20),(uint)local_18,
                                   local_18._4_4_,local_20,param_2);
            if (local_c == 0) {
              FUN_000174a4(param_1,local_cc,0,0);
              if (local_1c[1] == 0) {
                FUN_00031594(param_1,extraout_r1,(uint)local_18,local_18._4_4_,0xffffffff);
              }
              local_c = FUN_00041ba0(param_1,local_cc,1,0);
              if ((local_c == 0) && (local_cc == auStack_c0)) {
                local_c = FUN_00025f30(param_1,param_2,auStack_c0,0xa0);
              }
            }
          }
          else {
            local_c = 0x7f2bb7a1;
          }
        }
        FUN_00022158(&local_20);
        return local_c;
      }
    }
    local_c = 0x7f2bb75a;
  }
  return local_c;
}



/* ===== FUN_00039494 @ 00039494 size=580 ===== */

int FUN_00039494(int param_1,undefined4 param_2,undefined4 param_3)

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
  local_28 = FUN_00017410(param_1,param_3);
  iVar1 = (int)((ulonglong)local_28 >> 0x20);
  if (local_28 == 0) {
    local_c = FUN_000419e4(param_1,param_3,1,0);
    if (local_c != 0) {
      return local_c;
    }
LAB_00039628:
    local_18 = FUN_00030804(param_1,param_2,param_3,local_c,0);
    uVar2 = (undefined4)((ulonglong)local_18 >> 0x20);
    local_c = FUN_0003031c(param_1,uVar2,(int)local_18,uVar2,0,&local_28);
    if (local_c == 0) {
      FUN_000174a4(param_1,param_3,(uint)local_28,local_28._4_4_);
    }
LAB_00039698:
    if (local_1c != (int *)0x0) {
      FUN_00022158(&local_1c);
    }
  }
  else {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
    bVar4 = iVar1 == 0;
    if (iVar1 == 0) {
      bVar4 = (uint)local_28 <= uVar3;
    }
    if (!bVar4 || iVar1 == 0 && uVar3 == (uint)local_28) {
      lVar5 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
      uVar3 = (uint)((ulonglong)lVar5 >> 0x20);
      bVar4 = local_28._4_4_ <= uVar3;
      if (uVar3 == local_28._4_4_) {
        bVar4 = (uint)local_28 <= (uint)lVar5;
      }
      if (bVar4 && lVar5 != local_28) {
        local_c = FUN_00021f74(*(undefined4 *)(param_1 + 0x14),&local_1c);
        if (local_c != 0) {
          return local_c;
        }
        local_c = FUN_00038a20(param_1,local_1c,(uint)local_28,local_28._4_4_,local_1c,param_2);
        local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
        if (local_c == 0) {
          local_10 = local_1c;
          if (*local_1c == -0x15fe0000) {
            local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
            if (local_1c[1] != 1) {
              local_1c[1] = local_1c[1] + -1;
              local_c = FUN_00038b7c(param_1,local_1c,(uint)local_28,local_28._4_4_,local_1c,param_2
                                    );
              if (local_c == 0) goto LAB_00039628;
            }
          }
          else {
            local_c = 0x7f2bb7a1;
            local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
          }
        }
        goto LAB_00039698;
      }
    }
    local_c = 0x7f2bb75a;
  }
  return local_c;
}



/* ===== FUN_000396d8 @ 000396d8 size=96 ===== */

uint FUN_000396d8(uint param_1)

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



/* ===== FUN_00039738 @ 00039738 size=400 ===== */

undefined4 FUN_00039738(int *param_1,uint param_2,undefined4 *param_3,int *param_4)

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
    iVar1 = FUN_000396d8(param_2);
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



/* ===== FUN_00039948 @ 00039948 size=436 ===== */

int FUN_00039948(int *param_1,uint param_2,undefined4 *param_3,int *param_4)

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
    local_18 = FUN_00021f74(param_2 << 1,&local_24);
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
          FUN_00022158(&local_24);
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



/* ===== FUN_00039b7c @ 00039b7c size=636 ===== */

undefined4
FUN_00039b7c(int param_1,undefined4 *param_2,byte *param_3,size_t param_4,short param_5,int param_6)

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
      local_18 = FUN_00039160(*local_c,&local_24,local_28);
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
        uVar2 = FUN_000388ac(local_10,local_14);
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



/* ===== FUN_00039df8 @ 00039df8 size=1488 ===== */

int FUN_00039df8(int *param_1)

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
  local_10 = FUN_00021fcc(local_c,&local_38);
  if (local_10 != 0) {
    return local_10;
  }
  if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
  }
  local_10 = FUN_00025854(param_1[1],param_1[5],local_38,uVar1);
  if (local_10 != 0) goto LAB_0003a3a0;
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
    goto LAB_0003a3a0;
  }
  local_34 = (void *)param_1[2];
  qsort(local_34,param_1[3],0xc,FUN_00038f64);
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
      local_10 = FUN_00039b7c(param_1,&local_34,local_20,local_1c,0,0);
      if (local_10 != 0) goto LAB_0003a3a0;
      local_10 = 0;
    }
  }
  if (local_34 < (void *)(param_1[2] + param_1[4] * 0xc)) {
    local_10 = FUN_00021fcc(*(undefined4 *)(param_1[1] + 0x14),&local_3c);
    if (local_10 != 0) goto LAB_0003a3a0;
    local_1c = *(int *)(param_1[1] + 0x14) + -0x20;
    local_20 = local_3c + 8;
    local_10 = FUN_00039b7c(param_1,&local_34,local_20,local_1c,(int)local_20 - (int)local_3c,1);
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
        local_10 = FUN_00039494(param_1[1],param_1[5],local_38);
        if (local_10 == 0) {
          local_30 = FUN_00017410(param_1[1],local_38);
          local_10 = FUN_00038b7c(param_1[1],param_1[1],(int)local_30,
                                  (int)((ulonglong)local_30 >> 0x20),local_3c,param_1[5]);
          if (local_10 == 0) {
            local_10 = 0;
            goto LAB_0003a2a8;
          }
        }
      }
    }
  }
  else {
LAB_0003a2a8:
    lVar4 = FUN_00017410(param_1[1],local_38);
    local_30 = lVar4;
    if ((local_3c == (undefined4 *)0x0) && (lVar4 != 0)) {
      local_10 = FUN_00039228(param_1[1],param_1[5],local_38);
      if (local_10 != 0) goto LAB_0003a3a0;
    }
    if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
      uVar1 = 0x80;
    }
    else {
      uVar1 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
    }
    local_10 = FUN_00025f30(param_1[1],param_1[5],local_38,uVar1);
  }
  FUN_00022158(&local_3c);
LAB_0003a3a0:
  FUN_00022158(&local_38);
  param_1[7] = 0;
  return local_10;
}



/* ===== FUN_0003a3c8 @ 0003a3c8 size=1132 ===== */

int FUN_0003a3c8(int param_1,byte *param_2,uint param_3,int param_4,int *param_5)

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
    iVar1 = FUN_000388ac(local_10,param_4 + (uint)*(ushort *)(local_10 + 2));
    if ((*(int *)(local_10 + 0xc) != 0) && (iVar1 != *(int *)(local_10 + 0xc))) break;
    iVar1 = *(int *)(local_10 + 8);
    if (local_c == (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0xc)) {
      iVar2 = FUN_00038eb0(param_1,4);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_c = (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0xc + -0x30);
    }
    __s = (char *)FUN_000390f0(local_10[1]);
    if (__s == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(__s);
    }
    iVar2 = FUN_00021fcc(*local_10 + __n + 1,local_c);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (__s != (char *)0x0) {
      memcpy((void *)*local_c,__s,__n);
    }
    if (*local_10 != 0) {
      memcpy((void *)(*local_c + __n),local_10 + 0x10,(uint)*local_10);
    }
    iVar2 = FUN_00021f74(*(undefined4 *)(local_10 + 8),local_c + 1);
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



/* ===== FUN_0003a834 @ 0003a834 size=220 ===== */

void FUN_0003a834(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 8);
  for (local_c = 0; local_c < *(uint *)(param_1 + 0xc); local_c = local_c + 1) {
    if (*(int *)(iVar1 + local_c * 0xc) != 0) {
      FUN_00022158(iVar1 + local_c * 0xc);
    }
    if (*(int *)(iVar1 + local_c * 0xc + 4) != 0) {
      FUN_00022158(iVar1 + local_c * 0xc + 4);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* ===== FUN_0003a910 @ 0003a910 size=1084 ===== */

int FUN_0003a910(int *param_1)

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
  local_10 = FUN_00021fcc(local_c,&local_28);
  if (local_10 != 0) {
    return local_10;
  }
  if (*(int *)(*(int *)(param_1[1] + 0x10) + 0x4c) == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1[1] + 0x10) + 0x58);
  }
  local_10 = FUN_00025854(param_1[1],param_1[5],local_28,uVar1);
  if (local_10 != 0) goto LAB_0003ad30;
  FUN_0003a834(param_1);
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
        goto LAB_0003ad30;
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
        local_10 = FUN_0003a3c8(param_1,local_18,local_14,local_18,param_1 + 4);
        if (local_10 != 0) goto LAB_0003ad30;
        local_10 = 0;
      }
    }
  }
  local_20 = FUN_00017410(param_1[1],local_28);
  if (local_20 == 0) {
LAB_0003ace0:
    FUN_00022158(&local_30);
    FUN_00022158(&local_28);
    return 0;
  }
  if ((int)((ulonglong)local_20 >> 0x20) != 0 ||
      *(uint *)(*(int *)(param_1[1] + 0x10) + 0x14) <= (uint)local_20) {
    uVar5 = FUN_000165b0(*(undefined4 *)(param_1[1] + 0x10));
    uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
    bVar4 = uVar2 <= local_20._4_4_;
    if (local_20._4_4_ == uVar2) {
      bVar4 = (uint)uVar5 <= (uint)local_20;
    }
    if (!bVar4) {
      local_10 = FUN_00021f74(*(undefined4 *)(param_1[1] + 0x14),&local_30);
      if (local_10 == 0) {
        local_10 = FUN_00038a20(param_1[1],param_1[1],(uint)local_20,local_20._4_4_,local_30,
                                param_1[5]);
        if (local_10 == 0) {
          local_24 = local_30;
          if (*local_30 == -0x15fe0000) {
            local_14 = *(int *)(param_1[1] + 0x14) + -0x20;
            local_18 = local_30 + 8;
            local_10 = FUN_0003a3c8(param_1,local_18,local_14,local_30,param_1 + 4);
            if (local_10 == 0) {
              FUN_00022158(&local_30);
              goto LAB_0003ace0;
            }
          }
          else {
            local_10 = 0x7f2bb7a1;
          }
        }
        FUN_00022158(&local_30);
      }
      goto LAB_0003ad30;
    }
  }
  local_10 = 0x7f2bb75a;
LAB_0003ad30:
  FUN_00022158(&local_28);
  return local_10;
}



/* ===== FUN_0003ad4c @ 0003ad4c size=256 ===== */

undefined4 FUN_0003ad4c(int *param_1,code *param_2,undefined4 param_3)

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



/* ===== FUN_0003ae4c @ 0003ae4c size=432 ===== */

int FUN_0003ae4c(int *param_1,char *param_2,undefined4 *param_3,int *param_4)

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
          iVar1 = FUN_00039948(local_c[1],local_c[2],param_3,param_4);
          return iVar1;
        }
        local_10 = FUN_00021f74(local_c[2],&local_14);
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



/* ===== FUN_0003affc @ 0003affc size=620 ===== */

int FUN_0003affc(int param_1,undefined4 param_2,uint *param_3)

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
  local_18 = FUN_00021fcc(local_14,&local_24);
  if (local_18 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c) == 0) {
      uVar1 = 0x80;
    }
    else {
      uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x58);
    }
    local_18 = FUN_00025854(param_1,param_2,local_24,uVar1);
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
    FUN_00022158(&local_24);
  }
  return local_18;
}



/* ===== FUN_0003b268 @ 0003b268 size=888 ===== */

int FUN_0003b268(int *param_1,char *param_2,void *param_3,size_t param_4)

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
  local_14 = FUN_00021f74(param_4,&local_18);
  if (local_14 != 0) {
    return local_14;
  }
  if (((local_1c[6] & 1U) == 0) &&
     ((iVar1 = strcmp(local_20,"system.posix_acl_default"), iVar1 == 0 ||
      (iVar1 = strcmp(local_20,"system.posix_acl_access"), iVar1 == 0)))) {
    local_14 = FUN_00039738(local_24,local_28,local_18,&local_28);
    if (local_14 != 0) goto LAB_0003b5c4;
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
        FUN_00022158(local_c + 1);
        local_c[1] = (int)local_18;
        local_c[2] = local_28;
        local_1c[7] = 1;
        return 0;
      }
    }
  }
  if (local_10 == (int *)0x0) {
    local_14 = FUN_00038eb0(local_1c,4);
    if (local_14 == 0) {
      local_c = (int *)(local_1c[2] + local_1c[3] * 0xc + -0x30);
      sVar2 = strlen(local_20);
      local_14 = FUN_00021f74(sVar2 + 1,local_c);
      if (local_14 == 0) {
        strcpy((char *)*local_c,local_20);
        local_14 = FUN_00021f74(local_28,local_c + 1);
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
    local_14 = FUN_00021f74(sVar2 + 1,local_10);
    if (local_14 == 0) {
      strcpy((char *)*local_10,local_20);
      local_10[1] = (int)local_18;
      local_10[2] = local_28;
      local_1c[7] = 1;
      local_1c[4] = local_1c[4] + 1;
      return 0;
    }
  }
LAB_0003b5c4:
  FUN_00022158(&local_18);
  return local_14;
}



/* ===== FUN_0003b5e0 @ 0003b5e0 size=272 ===== */

undefined4 FUN_0003b5e0(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *local_c;
  
  if (*param_1 == 0x7f2bb7a8) {
    for (local_c = (int *)param_1[2]; local_c < (int *)(param_1[2] + param_1[3] * 0xc);
        local_c = local_c + 3) {
      if ((*local_c != 0) && (iVar1 = strcmp((char *)*local_c,param_2), iVar1 == 0)) {
        FUN_00022158(local_c);
        FUN_00022158(local_c + 1);
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



/* ===== FUN_0003b6f0 @ 0003b6f0 size=288 ===== */

int FUN_0003b6f0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *local_10;
  int local_c;
  
  iVar1 = FUN_00038834(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && (iVar1 = FUN_00038870(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    local_c = 0x7f2bb7a4;
  }
  else {
    local_c = FUN_00021fcc(0x20,&local_10);
    if (local_c == 0) {
      *local_10 = 0x7f2bb7a8;
      local_10[3] = 4;
      local_c = FUN_000220b8(local_10[3],0xc,local_10 + 2);
      if (local_c == 0) {
        local_10[4] = 0;
        local_10[5] = param_2;
        local_10[1] = param_1;
        *param_3 = local_10;
        local_c = 0;
      }
      else {
        FUN_00022158(&local_10);
      }
    }
  }
  return local_c;
}



/* ===== FUN_0003b810 @ 0003b810 size=160 ===== */

int FUN_0003b810(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0x7f2bb7a8) {
    if ((piVar1[7] == 0) || (iVar2 = FUN_00039df8(piVar1), iVar2 == 0)) {
      FUN_0003a834(piVar1);
      FUN_00022158(piVar1 + 2);
      FUN_00022158(param_1);
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x7f2bb7a8;
  }
  return iVar2;
}



/* ===== FUN_0003b994 @ 0003b994 size=244 ===== */

undefined4 FUN_0003b994(short *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == -0xcf6) {
    if ((ushort)param_1[2] < (ushort)param_1[1]) {
      uVar2 = 0x7f2bb777;
    }
    else {
      iVar1 = FUN_000513e0(param_2 + -0xc,0xc);
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



/* ===== FUN_0003ba88 @ 0003ba88 size=200 ===== */

void FUN_0003ba88(int param_1)

{
  int local_14 [2];
  int local_c;
  
  if (param_1 != 0) {
    local_14[0] = param_1;
    if (*(int *)(param_1 + 0xa0) != 0) {
      for (local_c = 1; local_c < *(int *)(local_14[0] + 0x9c); local_c = local_c + 1) {
        if (*(int *)(*(int *)(local_14[0] + 0xa0) + local_c * 0x28) != 0) {
          FUN_00022158(*(int *)(local_14[0] + 0xa0) + local_c * 0x28);
        }
      }
      FUN_00022158(local_14[0] + 0xa0);
    }
    FUN_00022158(local_14);
  }
  return;
}



/* ===== FUN_0003bb50 @ 0003bb50 size=60 ===== */

undefined4 FUN_0003bb50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003bb8c(param_1,param_2,0,param_3);
  return uVar1;
}



/* ===== FUN_0003bb8c @ 0003bb8c size=988 ===== */

int FUN_0003bb8c(int *param_1,uint param_2,int param_3,undefined4 *param_4)

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
  local_14 = FUN_00021f74(0xa4,&local_20);
  if (local_14 != 0) {
    return local_14;
  }
  memset(local_20,0,0xa4);
  local_20[2] = param_2;
  local_20[1] = param_1;
  if (param_3 == 0) {
    local_20[3] = local_20 + 4;
    local_14 = FUN_00025ef4(param_1,param_2,local_20[3]);
    if (local_14 != 0) goto LAB_0003bf4c;
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
    local_14 = FUN_0003b994(local_1c,0x3c);
    if (local_14 == 0) {
      local_20[0x26] = (uint)local_1c[3];
      local_20[0x24] = (uint)*local_1c;
      local_20[0x27] = local_20[0x26] + 1;
      FUN_00021fcc(local_20[0x27] * 0x28,local_20 + 0x28);
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
LAB_0003bf4c:
  FUN_0003ba88(local_20);
  return local_14;
}



/* ===== FUN_0003bf68 @ 0003bf68 size=2804 ===== */

int FUN_0003bf68(int *param_1,uint param_2,undefined4 *param_3)

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
             (iVar3 = FUN_00021f74(*(undefined4 *)(param_1[1] + 0x14),local_14), iVar3 != 0)) {
            return iVar3;
          }
          if (((*(uint *)(param_1[1] + 8) & 0x2000) == 0) ||
             (*(int *)(param_1[1] + 4) == *(int *)(param_1[1] + 0x88))) {
            iVar3 = FUN_00026ad4(*(undefined4 *)(param_1[1] + 4),*(undefined4 *)(param_1[1] + 4),
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
          iVar3 = FUN_0003b994(iVar6,*(undefined4 *)(param_1[1] + 0x14));
          if (iVar3 != 0) {
            param_1[0x25] = param_1[0x25] + -1;
            return iVar3;
          }
          if (((*(uint *)(param_1[1] + 8) & 0x200000) == 0) &&
             (iVar3 = FUN_00019ca4(param_1[1],param_1[2],iVar6), iVar3 == 0)) {
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



/* ===== FUN_0003ca94 @ 0003ca94 size=360 ===== */

int FUN_0003ca94(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar2 = FUN_000264b0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0xc));
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x94) * 0x28 + -8);
    uVar4 = *(undefined4 *)(iVar2 + 4);
    uVar1 = *(undefined2 *)(iVar2 + 8);
    iVar2 = FUN_00019d48(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x94) * 0x28)
                        );
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
      iVar2 = FUN_00026ba0(uVar3,uVar3,uVar4,uVar1,1,
                           *(undefined4 *)
                            (*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x94) * 0x28));
    }
  }
  return iVar2;
}



/* ===== FUN_0003cbfc @ 0003cbfc size=608 ===== */

int FUN_0003cbfc(int param_1,int param_2,uint param_3,uint param_4)

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
  
  local_c = FUN_0003bf68(param_1,1,auStack_28);
  if (local_c == 0) {
    local_c = 0;
    if (*(int *)(param_1 + 0x98) < param_2) {
      local_c = 0x7f2bb781;
    }
    else {
LAB_0003cc80:
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
            FUN_0003bf68(param_1,6,auStack_28);
            return 0x7f2bb784;
          }
          iVar1 = FUN_0003bf68(param_1,5,auStack_28);
          if (iVar1 == 0x7f2bb77c) {
            return 0x7f2bb784;
          }
          if (iVar1 != 0) {
            return iVar1;
          }
          local_c = 0;
        }
        local_c = FUN_0003bf68(param_1,5,auStack_28);
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
              goto LAB_0003cc80;
            }
            local_c = FUN_0003bf68(param_1,6,auStack_28);
            if (local_c != 0) {
              return local_c;
            }
          }
        }
        local_c = FUN_0003bf68(param_1,0xc,auStack_28);
      } while (local_c == 0);
    }
  }
  else if (local_c == 0x7f2bb77c) {
    local_c = 0x7f2bb784;
  }
  return local_c;
}



/* ===== FUN_0003ce5c @ 0003ce5c size=52 ===== */

undefined4 FUN_0003ce5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003cbfc(param_1,0,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0003ce90 @ 0003ce90 size=572 ===== */

int FUN_0003ce90(int *param_1)

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
        local_c = FUN_0003bf68(param_1,0,auStack_38);
        if (local_c == 0) {
          local_18 = local_30;
          iStack_14 = iStack_2c;
          local_c = FUN_0003ef78(param_1,auStack_68);
          if (local_c == 0) {
            local_1c = local_58 - local_64;
            local_c = 0;
            while ((iVar1 = local_c, 0 < param_1[0x25] &&
                   (*(int *)(local_10 + 0xc) == *(int *)(local_10 + 4) + -1))) {
              local_c = FUN_0003bf68(param_1,0xb,auStack_38);
              if (local_c != 0) {
                return local_c;
              }
              iVar1 = 0;
              if (iStack_14 == iStack_2c && local_18 == local_30) break;
              local_10 = param_1[0x28] + param_1[0x25] * 0x28;
              local_28 = local_28 + (local_30 - local_18);
              local_30 = local_18;
              iStack_2c = iStack_14;
              local_c = FUN_0003d0cc(param_1,0,auStack_38);
              if (local_c != 0) {
                return local_c;
              }
              FUN_0003ca94(param_1);
            }
            local_c = iVar1;
            local_c = FUN_0003cbfc(param_1,local_1c,local_18,iStack_14);
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



/* ===== FUN_0003d0cc @ 0003d0cc size=524 ===== */

undefined4 FUN_0003d0cc(int *param_1,undefined4 param_2,undefined4 *param_3)

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
        FUN_0003ca94(param_1);
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0x7f2bb712;
  }
  return uVar1;
}



/* ===== FUN_0003d2d8 @ 0003d2d8 size=128 ===== */

undefined4 FUN_0003d2d8(int param_1,uint param_2)

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



/* ===== FUN_0003d358 @ 0003d358 size=2320 ===== */

int FUN_0003d358(int *param_1,int param_2)

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
  local_14 = FUN_0003bf68(param_1,0,&local_88);
  if (local_14 == 0) {
    local_14 = FUN_0003ef78(param_1,auStack_c0);
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
        local_14 = FUN_0003bf68(param_1,0xb,&local_88);
        if (local_14 != 0) goto LAB_0003dc38;
        local_14 = FUN_0003d358(param_1,param_2);
        if (local_14 != 0) goto LAB_0003dc38;
        local_14 = FUN_0003cbfc(param_1,local_34,local_40,uStack_3c);
        iVar4 = local_14;
        if (local_14 != 0) goto LAB_0003dc38;
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
        local_50 = FUN_0003d2d8(param_1,local_28);
      }
      local_44 = (void *)*local_28;
      if (param_1[0x25] == 0) {
        local_30 = 1;
        local_2c = (uint)*(ushort *)((int)local_44 + 2);
        local_14 = FUN_00021fcc((param_1[0x27] + 1) * 0x28,&local_8c);
        if (local_14 != 0) goto LAB_0003dc38;
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
            uVar6 = FUN_00030804(param_1[1],param_1[2],param_1[3],param_1[3],0);
          }
          local_20._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
          local_20._0_4_ = (uint)uVar6;
          local_14 = FUN_0003031c(param_1[1],param_1[1],(uint)local_20,local_20._4_4_,local_24,
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
            local_14 = FUN_00019d48(param_1[1],param_1[2],local_54);
            if (local_14 == 0) {
              local_14 = FUN_00026ba0(*(undefined4 *)(param_1[1] + 4),1,local_70,uStack_6c,1,
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
                local_14 = FUN_0003ca94(param_1);
                if (local_14 == 0) {
                  if (local_30 == 0) {
                    local_14 = FUN_0003bf68(param_1,0xb,&local_88);
                    local_64 = local_60 - local_80;
                    local_78 = local_78 - local_64;
                    local_14 = FUN_0003d0cc(param_1,0,&local_88);
                    if (local_14 != 0) goto LAB_0003dc38;
                    local_80 = local_60;
                    uStack_7c = uStack_5c;
                    local_88 = local_70;
                    uStack_84 = uStack_6c;
                    local_78 = local_64;
                    local_14 = FUN_0003dc94(param_1,1,&local_88);
                  }
                  else {
                    local_14 = FUN_0003bf68(param_1,3,&local_88);
                    if (local_14 != 0) goto LAB_0003dc38;
                    local_80 = local_60;
                    uStack_7c = uStack_5c;
                    local_88 = local_70;
                    uStack_84 = uStack_6c;
                    local_78 = *(int *)(param_1[0x28] + 0x18) - local_60;
                    local_14 = FUN_0003d0cc(param_1,0,&local_88);
                  }
                  if (local_14 == 0) {
                    local_14 = FUN_0003cbfc(param_1,local_34,local_40,uStack_3c);
                    if (local_14 == 0) {
                      FUN_000419e4(param_1[1],param_1[3],1,0);
                      local_14 = FUN_000264b0(param_1[1],param_1[2],param_1[3]);
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
LAB_0003dc38:
  if (local_8c != (int *)0x0) {
    FUN_00022158(&local_8c);
  }
  free(local_24);
  return local_14;
}



/* ===== FUN_0003dc68 @ 0003dc68 size=44 ===== */

undefined4 FUN_0003dc68(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003d358(param_1,0);
  return uVar1;
}



/* ===== FUN_0003dc94 @ 0003dc94 size=648 ===== */

int FUN_0003dc94(int *param_1,uint param_2,undefined4 param_3)

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
        iVar1 = FUN_0003d358(param_1,1);
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
      local_14 = FUN_0003d0cc(param_1,0,param_3);
      if ((local_14 == 0) && (local_14 = FUN_0003ca94(param_1), local_14 == 0)) {
        local_14 = 0;
      }
      else {
        FUN_0003ecac(param_1,0);
      }
    }
  }
  else {
    local_14 = 0x7f2bb712;
  }
  return local_14;
}



/* ===== FUN_0003df1c @ 0003df1c size=3472 ===== */

int FUN_0003df1c(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6,
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
    iVar1 = FUN_0003dc94(param_1,0,&local_c0);
    return iVar1;
  }
  local_14 = FUN_0003bf68(param_1,0,&local_78);
  if (local_14 != 0) {
    if (local_14 != 0x7f2bb780) {
      return local_14;
    }
    memset(&local_78,0,0x18);
  }
  uVar3 = FUN_0003ef78(param_1,auStack_f0);
  local_14 = (int)uVar3;
  if (local_14 != 0) {
    return local_14;
  }
  local_1c = local_e0 - local_ec;
  local_48 = local_70;
  uStack_44 = uStack_6c;
  local_14 = FUN_0003ce5c(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
  if (local_14 != 0) {
    if (local_14 != 0x7f2bb784) goto LAB_0003ec6c;
    local_14 = 0;
    local_18 = 0;
    if (param_5 == 0 && param_6 == 0) goto LAB_0003ec6c;
  }
  local_14 = FUN_0003bf68(param_1,0,&local_78);
  if (local_14 == 0) {
    if ((local_64 & 2) != 0) {
      local_20 = 1;
    }
    uVar3 = FUN_0003bf68(param_1,7,&local_90);
    local_14 = (int)uVar3;
    if (local_14 == 0) {
      local_38 = 1;
      if ((local_7c & 2) != 0) {
        local_28 = 1;
      }
    }
    else {
      local_38 = 0;
      if (local_14 != 0x7f2bb77c) goto LAB_0003ec6c;
    }
    local_14 = FUN_0003ce5c(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
    if ((local_14 == 0) || (local_14 == 0x7f2bb784)) {
      uVar3 = FUN_0003bf68(param_1,8,&local_a8);
      local_14 = (int)uVar3;
      if (local_14 == 0) {
        local_34 = 1;
        if ((local_94 & 2) != 0) {
          local_24 = 1;
        }
      }
      else {
        local_34 = 0;
        if (local_14 != 0x7f2bb77d) goto LAB_0003ec6c;
      }
      local_14 = FUN_0003ce5c(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
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
            local_14 = FUN_0003d0cc(param_1,0,&local_78);
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
            local_14 = FUN_0003d0cc(param_1,0,&local_78);
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
              local_14 = FUN_0003dc94(param_1,1,&local_c0);
            }
            else {
              local_14 = FUN_0003dc94(param_1,0,&local_c0);
            }
          }
          else {
            local_14 = FUN_0003bf68(param_1,7,&local_90);
            if (local_14 != 0) goto LAB_0003ec6c;
            local_80 = local_80 + 1;
            bVar2 = local_88 == 0;
            local_88 = local_88 + -1;
            iStack_84 = iStack_84 - (uint)bVar2;
            bVar2 = local_90 == 0;
            local_90 = local_90 + -1;
            iStack_8c = iStack_8c - (uint)bVar2;
            local_14 = FUN_0003d0cc(param_1,0,&local_90);
          }
          if (local_14 == 0) {
            local_14 = FUN_0003ce90(param_1);
          }
        }
        else if ((param_4 == uStack_6c && param_3 == local_70) && (local_68 == 1)) {
          if (param_5 == 0 && param_6 == 0) {
            local_14 = FUN_0003ecac(param_1,0);
            if ((local_14 == 0) && (local_4c = FUN_0003ce90(param_1), local_4c != 0x7f2bb780)) {
              local_14 = local_4c;
            }
          }
          else {
            local_14 = FUN_0003d0cc(param_1,0,&local_c0);
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
              local_14 = FUN_0003dc94(param_1,1,&local_c0);
            }
            else {
              local_14 = FUN_0003bf68(param_1,7,&local_90);
              if (local_14 != 0) goto LAB_0003ec6c;
              local_80 = local_80 + 1;
              bVar2 = local_88 == 0;
              local_88 = local_88 + -1;
              iStack_84 = iStack_84 - (uint)bVar2;
              bVar2 = local_90 == 0;
              local_90 = local_90 + -1;
              iStack_8c = iStack_8c - (uint)bVar2;
              local_14 = FUN_0003d0cc(param_1,0,&local_90);
              if (local_14 != 0) goto LAB_0003ec6c;
            }
            if (local_14 != 0) goto LAB_0003ec6c;
            uVar3 = FUN_0003ce90(param_1);
            local_14 = (int)uVar3;
            if (((local_14 != 0) ||
                (local_14 = FUN_0003ce5c(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4),
                local_14 != 0)) || (local_14 = FUN_0003bf68(param_1,0,&local_78), local_14 != 0))
            goto LAB_0003ec6c;
          }
          local_68 = local_68 - 1;
          local_14 = FUN_0003d0cc(param_1,0,&local_78);
        }
        else if (param_4 == uStack_6c && param_3 == local_70) {
          if (param_5 != 0 || param_6 != 0) {
            if ((((local_34 == 0) ||
                 (param_4 != iStack_9c + (uint)CARRY4(local_98,local_a0) ||
                  param_3 != local_98 + local_a0)) ||
                (param_6 != iStack_a4 + (uint)CARRY4(local_98,local_a8) ||
                 param_5 != local_98 + local_a8)) ||
               ((local_2c != local_24 || (local_30 + -1 <= (int)local_98)))) {
              local_14 = FUN_0003dc94(param_1,0,&local_c0);
            }
            else {
              local_14 = FUN_0003bf68(param_1,8,&local_a8);
              if (local_14 != 0) goto LAB_0003ec6c;
              local_98 = local_98 + 1;
              local_14 = FUN_0003d0cc(param_1,0,&local_a8);
            }
            if (((local_14 != 0) || (local_14 = FUN_0003ce90(param_1), local_14 != 0)) ||
               (local_14 = FUN_0003bf68(param_1,7,&local_78), local_14 != 0)) goto LAB_0003ec6c;
          }
          bVar2 = 0xfffffffe < local_78;
          local_78 = local_78 + 1;
          iStack_74 = iStack_74 + (uint)bVar2;
          bVar2 = 0xfffffffe < local_70;
          local_70 = local_70 + 1;
          uStack_6c = uStack_6c + bVar2;
          local_68 = local_68 - 1;
          local_14 = FUN_0003d0cc(param_1,0,&local_78);
          if (local_14 == 0) {
            local_14 = FUN_0003ce90(param_1);
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
          local_14 = FUN_0003d0cc(param_1,0,&local_78);
          if (local_14 == 0) {
            iVar1 = 0;
            if (param_5 != 0 || param_6 != 0) {
              uVar3 = FUN_0003dc94(param_1,1,&local_c0);
              local_14 = (int)uVar3;
              iVar1 = local_14;
              if (local_14 != 0) {
                local_60 = FUN_0003ce5c(param_1,(int)((ulonglong)uVar3 >> 0x20),local_58,uStack_54);
                if (local_60 == 0) {
                  FUN_0003d0cc(param_1,0,&local_108);
                }
                goto LAB_0003ec6c;
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
            uVar3 = FUN_0003dc94(param_1,1,&local_78);
            local_14 = (int)uVar3;
            if (local_14 != 0) {
              if (param_5 != 0 || param_6 != 0) {
                uVar4 = FUN_0003ce5c(param_1,(int)((ulonglong)uVar3 >> 0x20),local_b8,uStack_b4);
                uVar3 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),local_14);
                local_60 = (int)uVar4;
                if (local_60 == 0) {
                  FUN_0003ecac(param_1,0);
                  uVar3 = CONCAT44(extraout_r1,local_14);
                }
              }
              local_14 = (int)uVar3;
              local_60 = FUN_0003ce5c(param_1,(int)((ulonglong)uVar3 >> 0x20),local_58,uStack_54);
              if (local_60 == 0) {
                FUN_0003d0cc(param_1,0,&local_108);
              }
            }
          }
        }
      }
    }
  }
LAB_0003ec6c:
  if (param_1[0x26] < local_1c) {
    local_1c = param_1[0x26];
  }
  FUN_0003cbfc(param_1,local_1c,local_48,uStack_44);
  return local_14;
}



/* ===== FUN_0003ecac @ 0003ecac size=716 ===== */

int FUN_0003ecac(int *param_1,uint param_2)

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
          if (((param_2 & 1) == 0) && (local_c = FUN_0003bf68(param_1,0xb,&local_38), local_c == 0))
          {
            local_c = FUN_0003ecac(param_1,param_2);
            *(uint *)(param_1[3] + 0x1c) =
                 *(int *)(param_1[3] + 0x1c) -
                 ((uint)(*(int *)(param_1[1] + 0x14) << (*(uint *)(param_1[1] + 100) & 0xff)) >> 9);
            local_c = FUN_000264b0(param_1[1],param_1[2],param_1[3]);
            FUN_00031594(param_1[1],0xffffffff,local_38,uStack_34,0xffffffff);
          }
        }
        else {
          local_1c = *local_10;
          *(short *)(local_1c + 2) = (short)local_10[1];
          if ((local_10[1] == 0) && (param_1[0x25] == 0)) {
            *(undefined2 *)(local_1c + 6) = 0;
            param_1[0x26] = 0;
          }
          local_c = FUN_0003ca94(param_1);
        }
      }
    }
  }
  else {
    local_c = 0x7f2bb712;
  }
  return local_c;
}



/* ===== FUN_0003ef78 @ 0003ef78 size=376 ===== */

undefined4 FUN_0003ef78(int *param_1,uint *param_2)

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



/* ===== FUN_0003f0f0 @ 0003f0f0 size=96 ===== */

int FUN_0003f0f0(uint param_1)

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



/* ===== FUN_0003f150 @ 0003f150 size=280 ===== */

int FUN_0003f150(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(int *)(*(int *)(param_1 + 4) + 0x14) - 0xc;
  iVar4 = uVar3 * -0x55555555;
  if ((DAT_0006c0d4 == 0) || (iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x14), iVar4 != DAT_0006c0d4)
     ) {
    iVar4 = FUN_0003f0f0(0xffffffff,param_2,iVar4);
    iVar1 = FUN_0003f0f0(4);
    uVar2 = FUN_0003f0f0(uVar3 / 0xc);
    iVar4 = FUN_000514a8(iVar4 - iVar1,uVar2);
    DAT_0006c0d8 = iVar4 + 1;
    DAT_0006c0d4 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  }
  return DAT_0006c0d8;
}



/* ===== FUN_0003f268 @ 0003f268 size=36 ===== */

void FUN_0003f268(void)

{
  return;
}



/* ===== FUN_0003f28c @ 0003f28c size=196 ===== */

undefined4
FUN_0003f28c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = 1 << (*(uint *)(param_1 + 100) & 0xff);
  iVar2 = 1 << (*(uint *)(param_1 + 100) & 0xff);
  uVar4 = FUN_00051964(param_5 + uVar1 + -1,
                       (param_6 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(param_5,uVar1)) -
                       (uint)(param_5 + uVar1 == 0),iVar2,iVar2 >> 0x1f);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  FUN_000317d4(param_1,uVar3,param_3,param_4,(int)uVar4 * (1 << (*(uint *)(param_1 + 100) & 0xff)),1
              );
  uVar3 = FUN_000419e4(param_1,param_2,(int)uVar4,uVar3);
  return uVar3;
}



/* ===== FUN_0003f350 @ 0003f350 size=7272 ===== */

int FUN_0003f350(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
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
    lVar9 = FUN_00051964(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 0x6c),
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
          if (local_40 == 0 && uStack_3c == 0) goto LAB_0003f7b4;
        }
        local_38 = lVar9;
        local_44 = FUN_0003ce5c(param_5,uVar3,param_6[2],param_6[3]);
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
          FUN_0003f268("ext_falloc clus left+",param_6);
          local_44 = FUN_0003d0cc(param_5,0,param_6);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003ce90(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = 0;
          lVar9 = local_38;
          if ((param_6[5] & 2) == 0) {
            uVar3 = *param_6 + param_6[4];
            iVar1 = FUN_000272d0(param_1,local_40,uVar3 - local_40,
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
LAB_0003f7b4:
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
        local_44 = FUN_0003ce5c(param_5,param_7[3],param_7[2],param_7[3]);
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
        FUN_0003f268("ext_falloc clus right+",param_7);
        local_44 = FUN_0003d0cc(param_5,0,param_7);
        if (local_44 != 0) {
          return local_44;
        }
        local_44 = FUN_0003ce90(param_5);
        if (local_44 != 0) {
          return local_44;
        }
        iVar1 = 0;
        lVar9 = local_38;
        if ((param_7[5] & 2) == 0) {
          iVar1 = FUN_000272d0(param_1,local_40,*param_7,param_7[1],local_40,0,0);
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
      local_44 = FUN_0003ce5c(param_5,iVar1,param_6[2],param_6[3]);
      lVar9 = local_38;
      if (local_44 == 0) {
        local_58 = param_6[4] + *param_6;
        uStack_54 = param_6[1] + (uint)CARRY4(param_6[4],*param_6);
        uVar3 = *param_7 - local_58;
        local_44 = FUN_000309e0(param_1,3,local_58,uStack_54,uVar3 + 1,
                                (param_7[1] - (uStack_54 + (*param_7 < local_58))) +
                                (uint)(0xfffffffe < uVar3),0,&local_90,&local_98);
        lVar9 = local_38;
        if ((local_44 == 0) &&
           (uStack_8c + iStack_94 + (uint)CARRY4(local_90,local_98) == param_7[1] &&
            local_90 + local_98 == *param_7)) {
          local_44 = FUN_0003f28c(param_1,param_4,local_90,uStack_8c,local_98,iStack_94);
          if (local_44 != 0) {
            return local_44;
          }
          param_6[4] = (uint)local_30;
          FUN_0003f268("ext_falloc merge",param_6);
          local_44 = FUN_0003d0cc(param_5,0,param_6);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003ce90(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003bf68(param_5,7,&local_70);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003ecac(param_5,0);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003ce90(param_5);
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
            iVar1 = FUN_000272d0(param_1,uVar3,param_9,param_10,param_11,0,0);
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
          iVar1 = FUN_000371dc(param_1,param_3,param_4,local_28._4_4_,(uint)local_28 + uVar3,
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
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) goto LAB_00040168;
        }
        iVar1 = param_6[4] + *param_6;
        iVar5 = param_6[1] + (uint)CARRY4(param_6[4],*param_6);
        local_30 = CONCAT44(iVar5,iVar1);
        local_44 = FUN_000309e0(param_1,3,iVar1,iVar5,(uint)local_28,local_28._4_4_,0,&local_90,
                                &local_98);
        iVar1 = local_44;
        lVar9 = local_38;
        if (local_44 == 0) {
          uVar10 = FUN_0003f28c(param_1,param_4,local_90,uStack_8c,local_98,iStack_94);
          local_44 = (int)uVar10;
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003ce5c(param_5,(int)((ulonglong)uVar10 >> 0x20),param_6[2],param_6[3]);
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
          FUN_0003f268("ext_falloc left+",param_6);
          local_44 = FUN_0003d0cc(param_5,0,param_6);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003ce90(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = 0;
          lVar9 = local_38;
          if (((param_6[5] & 2) == 0) && ((param_2 & 1) != 0)) {
            iVar1 = FUN_000272d0(param_1,0,local_90,uStack_8c,local_98,0,0);
            lVar9 = local_38;
            if (iVar1 != 0) {
              return iVar1;
            }
          }
        }
      }
    }
  }
LAB_00040168:
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
          iVar1 = FUN_000371dc(param_1,param_3,param_4,local_28._4_4_,param_7[2] - (uint)local_28,
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
          if ((uint)local_28 == 0 && local_28._4_4_ == 0) goto LAB_00040594;
        }
        local_44 = FUN_000309e0(param_1,3,*param_7 - (uint)local_28,
                                param_7[1] - (local_28._4_4_ + (*param_7 < (uint)local_28)),
                                (uint)local_28,local_28._4_4_,0,&local_90,&local_98);
        iVar1 = local_44;
        if (local_44 == 0) {
          uVar3 = -(1 << (*(uint *)(param_1 + 100) & 0xff));
          uVar4 = (1 << (*(uint *)(param_1 + 100) & 0xff)) - 1;
          uVar2 = uVar4 & local_90;
          uVar10 = FUN_0003f28c(param_1,param_4,uVar3 & local_90,(int)uVar3 >> 0x1f & uStack_8c,
                                local_98 + uVar2,
                                iStack_94 + ((int)uVar4 >> 0x1f & uStack_8c) +
                                (uint)CARRY4(local_98,uVar2));
          local_44 = (int)uVar10;
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003ce5c(param_5,(int)((ulonglong)uVar10 >> 0x20),param_7[2],param_7[3]);
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
          FUN_0003f268("ext_falloc right+",param_7);
          local_44 = FUN_0003d0cc(param_5,0,param_7);
          if (local_44 != 0) {
            return local_44;
          }
          local_44 = FUN_0003ce90(param_5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = 0;
          if (((param_7[5] & 2) == 0) && ((param_2 & 1) != 0)) {
            iVar1 = FUN_000272d0(param_1,0,local_90,uStack_8c,local_98 + local_40,0,0);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
        }
      }
    }
  }
LAB_00040594:
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
    local_44 = FUN_000371dc(param_1,param_3,param_4,param_10,param_9,param_10,&local_90);
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
      FUN_0003f268("ext_falloc iclus left+",&local_70);
      FUN_0003ce5c(param_5,extraout_r1,local_68,uStack_64);
      local_44 = FUN_0003bf68(param_5,0,auStack_88);
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
      local_44 = FUN_0003dc94(param_5,local_1c,&local_70);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003ce90(param_5);
      if (local_44 != 0) {
        return local_44;
      }
      iVar1 = 0;
      if (((local_5c & 2) == 0) && ((param_2 & 1) != 0)) {
        iVar1 = FUN_000272d0(param_1,0,local_70,uStack_6c,local_60,0,0);
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
    local_44 = FUN_000371dc(param_1,param_3,param_4,uStack_64,local_68,uStack_64,&local_90);
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
      FUN_0003f268("ext_falloc iclus right+",&local_70);
      FUN_0003ce5c(param_5,extraout_r1_00,local_68,uStack_64);
      local_44 = FUN_0003bf68(param_5,0,auStack_88);
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
      local_44 = FUN_0003dc94(param_5,local_1c,&local_70);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003ce90(param_5);
      if (local_44 != 0) {
        return local_44;
      }
      iVar1 = 0;
      if (((local_5c & 2) == 0) && ((param_2 & 1) != 0)) {
        iVar1 = FUN_000272d0(param_1,0,local_70,uStack_6c,local_60,0,0);
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
      local_44 = FUN_000309e0(param_1,0,uVar3 & local_90,(int)uVar3 >> 0x1f & uStack_8c,uVar2,iVar5,
                              0,&local_90,&local_98);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003f28c(param_1,param_4,local_90,uStack_8c,local_98,iStack_94);
      if (local_44 != 0) {
        return local_44;
      }
      local_70 = local_40 + local_90;
      uStack_6c = uStack_3c + uStack_8c + (uint)CARRY4(local_40,local_90);
      local_60 = local_98 - local_40;
      FUN_0003f268("ext_falloc create",&local_70);
      FUN_0003ce5c(param_5,extraout_r1_01,local_68,uStack_64);
      local_44 = FUN_0003bf68(param_5,0,auStack_88);
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
      local_44 = FUN_0003dc94(param_5,local_1c,&local_70);
      if (local_44 != 0) {
        return local_44;
      }
      local_44 = FUN_0003ce90(param_5);
      if (local_44 != 0) {
        return local_44;
      }
      iVar1 = 0;
      if (((local_5c & 2) == 0) && ((param_2 & 1) != 0)) {
        iVar1 = FUN_000272d0(param_1,0,local_90,uStack_8c,local_98,0,0);
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
      lVar9 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_00040fb8 @ 00040fb8 size=1528 ===== */

int FUN_00040fb8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
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
  local_1c = FUN_0003bb8c(param_1,param_3,param_4,&local_5c);
  if (local_1c != 0) {
    return local_1c;
  }
  while( true ) {
    FUN_0003ce5c(local_5c,local_5c,param_7,param_8);
    local_1c = FUN_0003bf68(local_5c,0,&local_78);
    if (local_1c == 0x7f2bb780) break;
    local_48 = CONCAT44(local_48._4_4_,(int)local_48);
    if (local_1c != 0) goto LAB_00041594;
    FUN_0003f268("ext_falloc initial",&local_78);
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
      goto LAB_000412ac;
    }
    param_5 = (param_7 - local_70) + local_78;
    param_6 = (param_8 - (uStack_6c + (param_7 < local_70))) + iStack_74 +
              (uint)CARRY4(param_7 - local_70,local_78);
    local_1c = FUN_0003f350(param_1,param_2,param_3,param_4,local_5c,0,&local_78);
    if (local_1c != 0) goto LAB_00041594;
    local_1c = 0;
  }
  local_48 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
  lVar6 = CONCAT44(param_6,param_5);
  uVar1 = local_48;
  if (param_6 == -1 && param_5 == -1) {
    lVar6 = FUN_00030804(param_1,param_3,param_4,param_8,param_7,param_8);
    uVar1 = local_48;
  }
  param_6 = (int)((ulonglong)lVar6 >> 0x20);
  param_5 = (int)lVar6;
  local_48._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_48._0_4_ = (int)uVar1;
  iVar2 = (int)local_48 + -1;
  iVar3 = local_48._4_4_ - (uint)((int)local_48 == 0);
  local_48 = uVar1;
  local_1c = FUN_00021c64(*(undefined4 *)(param_1 + 0x30),param_6,param_5,param_6,iVar2,iVar3,
                          &param_5);
  _param_5 = lVar6;
  _param_5 = _param_5 + CONCAT44(param_8,param_7);
  local_1c = FUN_0003f350(param_1,param_2,param_3,param_4,local_5c,0,0);
  goto LAB_00041594;
LAB_000412ac:
  do {
    local_1c = iVar2;
    local_1c = FUN_0003bf68(local_5c,7,&local_90);
    FUN_0003f268("ext_falloc next",&local_90);
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
LAB_00041354:
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
      if (bVar5 && (uStack_84 != uVar4 || local_88 != local_40 + 1)) goto LAB_00041354;
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
      local_1c = FUN_0003f350(param_1,param_2,param_3,param_4,local_5c,local_14,local_18);
      local_48 = CONCAT44(local_48._4_4_,(int)local_48);
      if (local_1c != 0) break;
    }
    local_48 = CONCAT44(local_48._4_4_,(int)local_48);
    if (uStack_2c == uStack_3c && local_30 == local_40) break;
    local_1c = FUN_0003ce5c(local_5c,local_5c,local_88,uStack_84);
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
LAB_00041594:
  FUN_0003ba88(local_5c);
  return local_1c;
}



/* ===== FUN_000415b0 @ 000415b0 size=568 ===== */

int FUN_000415b0(int param_1,uint param_2,undefined4 param_3,undefined1 *param_4,undefined4 param_5,
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
    lVar4 = FUN_000165b0(*(undefined4 *)(param_1 + 0x10));
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
        iVar1 = FUN_00025ef4(param_1,param_3,auStack_9c);
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
          if (bVar3) goto LAB_000417b8;
          local_1c = FUN_000377ac(param_1,param_3,local_b8,0,0);
          if ((local_1c != 0) ||
             ((local_a8 == 0 && iStack_a4 == 0 &&
              (local_1c = FUN_000377ac(param_1,param_3,local_b8,0,0xd), local_1c != 0)))) break;
          bVar3 = 0xfffffffe < local_18;
          local_18 = local_18 + 1;
          uStack_14 = uStack_14 + bVar3;
        }
      }
      else {
        local_1c = FUN_00040fb8(param_1,param_2,param_3,local_b8,param_5,param_6,param_7,param_8,
                                param_9,param_10);
LAB_000417b8:
        if (local_b8 == auStack_9c) {
          FUN_000264b0(param_1,param_3,local_b8);
        }
      }
    }
  }
  else {
    local_1c = 0x7f2bb747;
  }
  return local_1c;
}



/* ===== FUN_000417e8 @ 000417e8 size=148 ===== */

int FUN_000417e8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0002e1fc(param_1,0,0);
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



/* ===== FUN_0004187c @ 0004187c size=152 ===== */

int FUN_0004187c(int param_1)

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



/* ===== FUN_00041914 @ 00041914 size=148 ===== */

int FUN_00041914(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0002e1fc(param_1,0,0);
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



/* ===== FUN_000419a8 @ 000419a8 size=60 ===== */

bool FUN_000419a8(int param_1)

{
  return (*(uint *)(param_1 + 100) & 8) != 0;
}



/* ===== FUN_000419e4 @ 000419e4 size=444 ===== */

undefined4 FUN_000419e4(int param_1,int param_2,uint param_3,int param_4)

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
  iVar3 = FUN_000419a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar3 != 0) {
    uStack_14 = (uint)*(ushort *)(param_2 + 0x74);
  }
  iVar3 = FUN_000419a8(*(undefined4 *)(param_1 + 0x10));
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
  iVar3 = FUN_000419a8(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_00041ba0 @ 00041ba0 size=436 ===== */

undefined4 FUN_00041ba0(int param_1,int param_2,uint param_3,int param_4)

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
  iVar2 = FUN_000419a8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uStack_14 = (uint)*(ushort *)(param_2 + 0x74);
  }
  iVar2 = FUN_000419a8(*(undefined4 *)(param_1 + 0x10));
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
    iVar2 = FUN_000419a8(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_00041d54 @ 00041d54 size=316 ===== */

undefined4 FUN_00041d54(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  int local_14;
  
  iVar3 = FUN_000419a8(*(undefined4 *)(param_1 + 0x10));
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
  iVar3 = FUN_000419a8(*(undefined4 *)(param_1 + 0x10));
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



/* ===== FUN_00041e90 @ 00041e90 size=176 ===== */

int FUN_00041e90(int param_1,undefined4 param_2,void *param_3)

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



/* ===== FUN_00041f40 @ 00041f40 size=108 ===== */

undefined4 FUN_00041f40(int param_1,undefined4 param_2,undefined4 param_3)

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



/* ===== FUN_00041fac @ 00041fac size=56 ===== */

bool FUN_00041fac(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_00041fe4 @ 00041fe4 size=228 ===== */

undefined4
FUN_00041fe4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
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



/* ===== FUN_000420c8 @ 000420c8 size=1124 ===== */

int FUN_000420c8(undefined4 param_1,char *param_2,uint *param_3,char *param_4,size_t param_5)

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
  local_28 = setmntent(param_1,&DAT_000588a0);
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
    iVar3 = FUN_00041fac(local_88.st_mode);
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
          if (local_2c == (undefined4 *)0x0) goto LAB_00042304;
        } while (*(char *)*local_2c != '/');
        iVar3 = strcmp(param_2,(char *)*local_2c);
        if (iVar3 == 0) goto LAB_00042304;
        iVar3 = stat((char *)*local_2c,&local_88);
      } while (iVar3 != 0);
      iVar3 = FUN_00041fac(local_88.st_mode);
      if (iVar3 == 0) break;
      if (((local_20 != 0 || iStack_1c != 0) &&
          (iStack_1c == local_88.st_rdev._4_4_ && local_20 == (int)local_88.st_rdev)) ||
         (iVar3 = FUN_00041fe4(*local_2c,local_88.st_rdev._4_4_,(int)local_88.st_rdev,
                               local_88.st_rdev._4_4_,local_18,iStack_14,local_24), iVar3 == 1))
      goto LAB_00042304;
    }
  } while (((local_18 == 0 && iStack_14 == 0) ||
           (iStack_14 != local_88.st_dev._4_4_ || local_18 != (int)local_88.st_dev)) ||
          (local_24 != local_88.st_ino));
LAB_00042304:
  if (local_2c == (undefined4 *)0x0) {
    if (((local_20 == 0 && iStack_1c == 0) || (iVar3 = stat("/",&local_88), iVar3 != 0)) ||
       (iStack_1c != local_88.st_dev._4_4_ || local_20 != (int)local_88.st_dev)) goto LAB_00042514;
    *param_3 = 1;
    if (param_4 != (char *)0x0) {
      strncpy(param_4,"/",param_5);
    }
LAB_0004247c:
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
      goto LAB_00042514;
    }
    if ((local_20 != 0 || iStack_1c != 0) &&
       (iStack_1c != local_88.st_dev._4_4_ || local_20 != (int)local_88.st_dev)) goto LAB_00042514;
    *param_3 = 1;
    iVar3 = hasmntopt(local_2c,&DAT_000588bc);
    if (iVar3 != 0) {
      *param_3 = *param_3 | 4;
    }
    if (param_4 != (char *)0x0) {
      strncpy(param_4,(char *)local_2c[1],param_5);
    }
    iVar3 = strcmp((char *)local_2c[1],"/");
    if (iVar3 == 0) goto LAB_0004247c;
  }
  local_c = 0;
LAB_00042514:
  endmntent(local_28);
  return local_c;
}



/* ===== FUN_0004252c @ 0004252c size=152 ===== */

undefined4 FUN_0004252c(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000420c8("/proc/mounts",param_1,param_2,param_3,param_4);
  if ((iVar1 == 0) && (*param_2 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000420c8("/etc/mtab",param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



/* ===== FUN_000425c4 @ 000425c4 size=616 ===== */

int FUN_000425c4(char *param_1)

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
  if ((iVar1 == 0) && (iVar1 = FUN_00041fac(sStack_478.st_mode), iVar1 != 0)) {
    local_10 = CONCAT44(sStack_478.st_rdev._4_4_,(int)sStack_478.st_rdev);
  }
  local_18 = fopen("/proc/swaps","r");
  if (local_18 == (FILE *)0x0) {
    local_14 = 0;
  }
  else {
    pcVar2 = fgets(local_41c,0x400,local_18);
    if (pcVar2 != (char *)0x0) {
      if (local_41c[0] == '\0') goto LAB_000427e4;
      iVar1 = strncmp(local_41c,"Filename\t",9);
      if (iVar1 == 0) goto LAB_000427e4;
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
           (iVar1 = FUN_00041fac(sStack_478.st_mode), iVar1 != 0)) {
          if (local_10._4_4_ == sStack_478.st_rdev._4_4_ && (int)local_10 == (int)sStack_478.st_rdev
             ) {
            local_14 = local_14 + 1;
            break;
          }
        }
LAB_000427e4:
        pcVar2 = fgets(local_41c,0x400,local_18);
      } while (pcVar2 != (char *)0x0);
    }
    fclose(local_18);
  }
  return local_14;
}



/* ===== FUN_0004282c @ 0004282c size=448 ===== */

int FUN_0004282c(char *param_1,uint *param_2,char *param_3,size_t param_4)

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
      iVar2 = FUN_000425c4(param_1);
      if (iVar2 == 0) {
        local_c = FUN_0004252c(param_1,param_2,param_3,param_4);
      }
      else {
        *param_2 = 9;
        strncpy(param_3,"<swap>",param_4);
      }
      if (local_c == 0) {
        iVar2 = stat(param_1,&sStack_68);
        if ((iVar2 == 0) && (iVar2 = FUN_00041fac(sStack_68.st_mode), iVar2 != 0)) {
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



/* ===== FUN_000429ec @ 000429ec size=56 ===== */

undefined4 FUN_000429ec(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0004282c(param_1,param_2,0,0);
  return uVar1;
}



/* ===== FUN_00042a24 @ 00042a24 size=252 ===== */

__off64_t FUN_00042a24(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  __off_t _Var2;
  __off64_t _Var3;
  int local_10;
  int iStack_c;
  
  if (DAT_0006c0dc == 0) {
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
    DAT_0006c0dc = DAT_0006c0dc + 1;
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



/* ===== FUN_00042b20 @ 00042b20 size=64 ===== */

void FUN_00042b20(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 3 | param_2;
  return;
}



/* ===== FUN_00042b60 @ 00042b60 size=64 ===== */

void FUN_00042b60(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xfffffffe | param_2;
  return;
}



/* ===== FUN_00042ba0 @ 00042ba0 size=224 ===== */

void FUN_00042ba0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_1 & 0xfffffffc;
  param_1[1] = *(uint *)(uVar1 + 8);
  if (param_1[1] != 0) {
    FUN_00042b20(*(undefined4 *)(uVar1 + 8),param_1);
  }
  *(uint **)(uVar1 + 8) = param_1;
  FUN_00042b20(uVar1,uVar2);
  if (uVar2 == 0) {
    *param_2 = uVar1;
  }
  else if (param_1 == *(uint **)(uVar2 + 8)) {
    *(uint *)(uVar2 + 8) = uVar1;
  }
  else {
    *(uint *)(uVar2 + 4) = uVar1;
  }
  FUN_00042b20(param_1,uVar1);
  return;
}



/* ===== FUN_00042c80 @ 00042c80 size=224 ===== */

void FUN_00042c80(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = *param_1 & 0xfffffffc;
  param_1[2] = *(uint *)(uVar1 + 4);
  if (param_1[2] != 0) {
    FUN_00042b20(*(undefined4 *)(uVar1 + 4),param_1);
  }
  *(uint **)(uVar1 + 4) = param_1;
  FUN_00042b20(uVar1,uVar2);
  if (uVar2 == 0) {
    *param_2 = uVar1;
  }
  else if (param_1 == *(uint **)(uVar2 + 4)) {
    *(uint *)(uVar2 + 4) = uVar1;
  }
  else {
    *(uint *)(uVar2 + 8) = uVar1;
  }
  FUN_00042b20(param_1,uVar1);
  return;
}



/* ===== FUN_00042d60 @ 00042d60 size=544 ===== */

void FUN_00042d60(uint *param_1,undefined4 *param_2)

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
          FUN_00042ba0(puVar2,param_2);
          local_14 = local_1c;
          local_1c = puVar2;
        }
        *local_14 = *local_14 | 1;
        *puVar1 = *puVar1 & 0xfffffffe;
        FUN_00042c80(puVar1,param_2);
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
          FUN_00042c80(puVar2,param_2);
          local_14 = local_1c;
          local_1c = puVar2;
        }
        *local_14 = *local_14 | 1;
        *puVar1 = *puVar1 & 0xfffffffe;
        FUN_00042ba0(puVar1,param_2);
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



/* ===== FUN_00042f80 @ 00042f80 size=1016 ===== */

void FUN_00042f80(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint *local_18;
  uint *local_14;
  uint *local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  do {
    while( true ) {
      if (((local_14 != (uint *)0x0) && ((*local_14 & 1) == 0)) || (local_14 == (uint *)*param_3))
      goto LAB_0004334c;
      if (local_14 == (uint *)local_18[2]) break;
      local_c = (uint *)local_18[2];
      if ((*local_c & 1) == 0) {
        *local_c = *local_c | 1;
        *local_18 = *local_18 & 0xfffffffe;
        FUN_00042c80(local_18,param_3);
        local_c = (uint *)local_18[2];
      }
      if (((local_c[2] != 0) && ((*(uint *)local_c[2] & 1) == 0)) ||
         ((local_c[1] != 0 && ((*(uint *)local_c[1] & 1) == 0)))) {
        if ((local_c[2] == 0) || ((*(uint *)local_c[2] & 1) != 0)) {
          *(uint *)local_c[1] = *(uint *)local_c[1] | 1;
          *local_c = *local_c & 0xfffffffe;
          FUN_00042ba0(local_c,param_3);
          local_c = (uint *)local_18[2];
        }
        FUN_00042b60(local_c,*local_18 & 1);
        *local_18 = *local_18 | 1;
        *(uint *)local_c[2] = *(uint *)local_c[2] | 1;
        FUN_00042c80(local_18,param_3);
        local_14 = (uint *)*param_3;
LAB_0004334c:
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
      FUN_00042ba0(local_18,param_3);
      local_c = (uint *)local_18[1];
    }
    if (((local_c[2] != 0) && ((*(uint *)local_c[2] & 1) == 0)) ||
       ((local_c[1] != 0 && ((*(uint *)local_c[1] & 1) == 0)))) {
      if ((local_c[1] == 0) || ((*(uint *)local_c[1] & 1) != 0)) {
        *(uint *)local_c[2] = *(uint *)local_c[2] | 1;
        *local_c = *local_c & 0xfffffffe;
        FUN_00042c80(local_c,param_3);
        local_c = (uint *)local_18[1];
      }
      FUN_00042b60(local_c,*local_18 & 1);
      *local_18 = *local_18 | 1;
      *(uint *)local_c[1] = *(uint *)local_c[1] | 1;
      FUN_00042ba0(local_18,param_3);
      local_14 = (uint *)*param_3;
      goto LAB_0004334c;
    }
    *local_c = *local_c & 0xfffffffe;
    local_14 = local_18;
    local_18 = (uint *)(*local_18 & 0xfffffffc);
  } while( true );
}



/* ===== FUN_00043378 @ 00043378 size=628 ===== */

void FUN_00043378(uint *param_1,uint *param_2)

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
          FUN_00042b20(local_c,local_10);
        }
        local_10[2] = local_c;
        local_24[1] = param_1[1];
        FUN_00042b20(param_1[1],local_24);
      }
      *local_24 = *param_1;
      local_24[2] = param_1[2];
      FUN_00042b20(param_1[2],local_24);
      goto LAB_000435c4;
    }
    local_c = param_1[2];
  }
  local_10 = (uint *)(*param_1 & 0xfffffffc);
  local_14 = *param_1 & 1;
  if (local_c != 0) {
    FUN_00042b20(local_c,local_10);
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
LAB_000435c4:
  if (local_14 == 1) {
    FUN_00042f80(local_c,local_10,param_2);
  }
  return;
}



/* ===== FUN_000435ec @ 000435ec size=196 ===== */

void FUN_000435ec(uint *param_1,code *param_2,undefined4 param_3)

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



/* ===== FUN_000436b0 @ 000436b0 size=112 ===== */

void FUN_000436b0(int param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_000435ec(local_c,param_2,param_3);
  return;
}



/* ===== FUN_00043720 @ 00043720 size=236 ===== */

uint * FUN_00043720(uint *param_1)

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
    local_c = (uint *)FUN_0004390c(param_1);
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



/* ===== FUN_0004380c @ 0004380c size=64 ===== */

void FUN_0004380c(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    FUN_000435ec(param_1,param_2,param_3);
  }
  return;
}



/* ===== FUN_0004384c @ 0004384c size=96 ===== */

int FUN_0004384c(int *param_1)

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



/* ===== FUN_000438ac @ 000438ac size=96 ===== */

int FUN_000438ac(int *param_1)

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



/* ===== FUN_0004390c @ 0004390c size=196 ===== */

uint * FUN_0004390c(uint *param_1)

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



/* ===== FUN_000439d0 @ 000439d0 size=196 ===== */

uint * FUN_000439d0(uint *param_1)

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



/* ===== FUN_00043a94 @ 00043a94 size=216 ===== */

void FUN_00043a94(uint *param_1,uint *param_2,undefined4 *param_3)

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
    FUN_00042b20(param_1[2],param_2);
  }
  if (param_1[1] != 0) {
    FUN_00042b20(param_1[1],param_2);
  }
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}



/* ===== FUN_00043b6c @ 00043b6c size=28 ===== */

undefined4 FUN_00043b6c(void)

{
  return 0;
}



/* ===== FUN_00043b88 @ 00043b88 size=28 ===== */

undefined4 FUN_00043b88(void)

{
  return 0;
}



/* ===== FUN_00043be8 @ 00043be8 size=1012 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00043be8(uint param_1)

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
    FUN_00043b6c();
    for (local_10 = DAT_0006c0e0; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_00043b88();
          if (DAT_0006c0e8 == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_0006c0e8)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    for (local_10 = DAT_0006c0e4; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_00043b88();
          if (DAT_0006c0e8 == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_0006c0e8)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    FUN_00043b88();
  }
  uVar3 = ram0x00058964;
  uVar2 = s_Unknown_code_00058958._8_4_;
  uVar1 = s_Unknown_code_00058958._4_4_;
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  pcVar4 = (char *)(iVar6 + DAT_00043fdc);
  *(undefined4 *)pcVar4 = s_Unknown_code_00058958._0_4_;
  *(undefined4 *)(pcVar4 + 4) = uVar1;
  *(undefined4 *)(pcVar4 + 8) = uVar2;
  *(short *)(pcVar4 + 0xc) = (short)uVar3;
  if (param_1 != 0) {
    pcVar4 = (char *)FUN_000444dc(param_1);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    strcat((char *)(iVar6 + DAT_00043fdc),pcVar4);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    sVar5 = strlen((char *)(iVar6 + DAT_00043fdc));
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined2 *)(sVar5 + iVar6 + DAT_00043fdc) = DAT_00058968;
  }
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  for (local_18 = (char *)(iVar6 + DAT_00043fdc); *local_18 != '\0'; local_18 = local_18 + 1) {
  }
  if (local_c < 100) {
    pcVar4 = local_18;
    if (local_c < 10) goto LAB_00043f98;
  }
  else {
    *local_18 = (char)(local_c / 100) + '0';
    local_c = local_c % 100;
    pcVar4 = local_18 + 1;
  }
  local_18 = pcVar4 + 1;
  *pcVar4 = (char)(local_c / 10) + '0';
  local_c = local_c % 10;
LAB_00043f98:
  *local_18 = (char)local_c + '0';
  local_18[1] = '\0';
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return (char *)(iVar6 + DAT_00043fdc);
}



/* ===== FUN_00043fe0 @ 00043fe0 size=144 ===== */

undefined4 FUN_00043fe0(undefined4 param_1)

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



/* ===== FUN_00044070 @ 00044070 size=472 ===== */

void FUN_00044070(void)

{
  int *piVar1;
  char *local_1c;
  uint local_18;
  int local_14;
  char *local_10;
  char *local_c;
  
  if ((DAT_0006c0ec & 0x8000) == 0) {
    local_c = getenv("COMERR_DEBUG");
    if ((local_c != (char *)0x0) &&
       ((DAT_0006c0ec = strtoul(local_c,&local_1c,0), *local_1c != '\0' ||
        (piVar1 = __errno_location(), *piVar1 != 0)))) {
      DAT_0006c0ec = 0;
    }
    DAT_0006c0ec = DAT_0006c0ec | 0x8000;
    if (DAT_0006c0ec != 0x8000) {
      local_10 = (char *)FUN_00043fe0("COMERR_DEBUG_FILE");
      if (local_10 != (char *)0x0) {
        DAT_0006c0f0 = fopen(local_10,"a");
      }
      if (DAT_0006c0f0 == (FILE *)0x0) {
        DAT_0006c0f0 = fopen("/dev/tty","a");
      }
      if (DAT_0006c0f0 == (FILE *)0x0) {
        DAT_0006c0ec = 0x8000;
      }
      else {
        local_14 = fileno(DAT_0006c0f0);
        if ((-1 < local_14) && (local_18 = fcntl(local_14,1), -1 < (int)local_18)) {
          fcntl(local_14,2,local_18 | 1);
        }
      }
    }
  }
  return;
}



/* ===== FUN_00044248 @ 00044248 size=240 ===== */

int FUN_00044248(int param_1)

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
    iVar3 = FUN_00043b6c();
    if (iVar3 == 0) {
      __ptr[1] = param_1;
      *__ptr = DAT_0006c0e4;
      DAT_0006c0e4 = __ptr;
      FUN_00044070();
      __stream = DAT_0006c0f0;
      if ((DAT_0006c0ec & 1) != 0) {
        uVar2 = FUN_000444dc(*(undefined4 *)(param_1 + 4));
        fprintf(__stream,"add_error_table: %s (0x%p)\n",uVar2,param_1);
      }
      FUN_00043b88();
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



/* ===== FUN_00044338 @ 00044338 size=376 ===== */

undefined4 FUN_00044338(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_18;
  undefined4 *local_14;
  
  local_18 = (undefined4 *)0x0;
  iVar2 = FUN_00043b6c();
  if (iVar2 == 0) {
    local_14 = DAT_0006c0e4;
    FUN_00044070();
    pFVar1 = DAT_0006c0f0;
    for (; local_14 != (undefined4 *)0x0; local_14 = (undefined4 *)*local_14) {
      if (*(int *)(local_14[1] + 4) == *(int *)(param_1 + 4)) {
        if (local_18 == (undefined4 *)0x0) {
          DAT_0006c0e4 = (undefined4 *)*local_14;
        }
        else {
          *local_18 = *local_14;
        }
        free(local_14);
        pFVar1 = DAT_0006c0f0;
        if ((DAT_0006c0ec & 1) != 0) {
          uVar3 = FUN_000444dc(*(undefined4 *)(param_1 + 4));
          fprintf(pFVar1,"remove_error_table: %s (0x%p)\n",uVar3,param_1);
        }
        FUN_00043b88();
        return 0;
      }
      local_18 = local_14;
    }
    if ((DAT_0006c0ec & 1) != 0) {
      uVar3 = FUN_000444dc(*(undefined4 *)(param_1 + 4));
      fprintf(pFVar1,"remove_error_table FAILED: %s (0x%p)\n",uVar3,param_1);
    }
    FUN_00043b88();
  }
  return 2;
}



/* ===== FUN_000444b0 @ 000444b0 size=44 ===== */

void FUN_000444b0(int param_1)

{
  FUN_00044248(*(undefined4 *)(param_1 + 4));
  return;
}



/* ===== FUN_000444dc @ 000444dc size=200 ===== */

undefined1 * FUN_000444dc(int param_1)

{
  uint uVar1;
  undefined1 *local_10;
  int local_c;
  
  local_10 = &DAT_0006c0f4;
  for (local_c = 4; -1 < local_c; local_c = local_c + -1) {
    uVar1 = (int)(param_1 >> 8 & 0xffffffU) >> (local_c * 6 & 0xffU) & 0x3f;
    if (uVar1 != 0) {
      *local_10 = (&DAT_00058a03)[uVar1];
      local_10 = local_10 + 1;
    }
  }
  *local_10 = 0;
  return &DAT_0006c0f4;
}



/* ===== FUN_000445a4 @ 000445a4 size=616 ===== */

void FUN_000445a4(char *param_1,int param_2,char *param_3,__gnuc_va_list param_4)

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
    fwrite(&DAT_00058a44,1,2,stderr);
  }
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_00043be8(param_2);
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



/* ===== FUN_0004480c @ 0004480c size=72 ===== */

void FUN_0004480c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_0006b3ac)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00044854 @ 00044854 size=112 ===== */

void FUN_00044854(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  if (DAT_0006b3ac == (code *)0x0) {
    DAT_0006b3ac = FUN_000445a4;
  }
  uStack_4 = param_4;
  FUN_0004480c(param_1,param_2,param_3,&uStack_4);
  return;
}



/* ===== FUN_00044970 @ 00044970 size=412 ===== */

void FUN_00044970(undefined4 param_1)

{
  char *pcVar1;
  char acStack_68 [80];
  time_t local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = FUN_0002979c(param_1,0,0x20000,0,0,DAT_0006b264,&local_14);
  if (local_c == 0) {
    local_10 = *(int *)(local_14 + 0x10);
    if (*(int *)(local_10 + 0x2c) == 0) {
      if (*(int *)(local_10 + 0x108) == 0) {
        if (*(int *)(local_10 + 0x30) != 0) {
          local_18 = *(time_t *)(local_10 + 0x30);
          pcVar1 = ctime(&local_18);
          printf("\tlast modified on %s",pcVar1);
        }
      }
      else {
        local_18 = *(time_t *)(local_10 + 0x108);
        pcVar1 = ctime(&local_18);
        printf("\tcreated on %s",pcVar1);
      }
    }
    else {
      local_18 = *(time_t *)(local_10 + 0x2c);
      if (*(char *)(local_10 + 0x88) == '\0') {
        pcVar1 = ctime(&local_18);
        printf("\tlast mounted on %s",pcVar1);
      }
      else {
        memset(acStack_68,0,0x50);
        strncpy(acStack_68,(char *)(local_10 + 0x88),0x40);
        pcVar1 = ctime(&local_18);
        printf("\tlast mounted on %s on %s",acStack_68,pcVar1);
      }
    }
    FUN_0001866c(&local_14);
  }
  return;
}



/* ===== FUN_00044b0c @ 00044b0c size=36 ===== */

undefined4 FUN_00044b0c(void)

{
  return 0xffffffff;
}



/* ===== FUN_00044b30 @ 00044b30 size=888 ===== */

int FUN_00044b30(undefined4 param_1,uint param_2,int *param_3)

{
  FILE *__stream;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  uint local_80;
  uint local_24;
  void *local_20;
  char *local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_24 = 0;
  local_94 = 0;
  local_1c = (char *)0x0;
  local_20 = (void *)0x0;
  local_14 = FUN_0002e1fc(param_1,0,0x1b6);
  if (((local_14 < 0) && (piVar1 = __errno_location(), *piVar1 == 2)) && ((param_2 & 0x10) != 0)) {
    fprintf(stderr,"The file %s does not exist and no size was specified.\n",param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (((local_14 < 0) && (piVar1 = __errno_location(), *piVar1 == 2)) && ((param_2 & 2) != 0)) {
    local_24 = local_24 | 0x40;
    local_14 = FUN_0002e1fc(param_1,local_24,0x1b6);
    if ((-1 < local_14) && ((param_2 & 8) != 0)) {
      printf("Creating regular file %s\n",param_1);
    }
  }
  __stream = stderr;
  if (-1 < local_14) {
    iVar3 = FUN_0002e284(local_14,auStack_90);
    if (-1 < iVar3) {
      close(local_14);
      if ((local_80 & 0xf000) == 0x6000) {
        local_18 = 1;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = local_18;
      }
      if (((param_2 & 1) == 0) || (local_18 != 0)) {
        if (((param_2 & 4) != 0) && (iVar3 = FUN_000489d4(&local_94,0), -1 < iVar3)) {
          local_1c = (char *)FUN_0004a200(local_94,&DAT_00058b80,param_1);
          if (local_1c != (char *)0x0) {
            local_20 = (void *)FUN_0004a200(local_94,"LABEL",param_1);
          }
          FUN_00048ad8(local_94);
        }
        if (local_1c == (char *)0x0) {
          iVar3 = FUN_00044b0c(param_1);
          if (iVar3 < 0) {
            iVar3 = 1;
          }
        }
        else {
          if (local_20 == (void *)0x0) {
            printf("%s contains a %s file system\n",param_1,local_1c);
          }
          else {
            printf("%s contains a %s file system labelled \'%s\'\n",param_1,local_1c,local_20);
          }
          iVar3 = strncmp(local_1c,"ext",3);
          if (iVar3 == 0) {
            FUN_00044970(param_1);
          }
          free(local_1c);
          free(local_20);
          iVar3 = 0;
        }
      }
      else {
        printf("%s is not a block special device.\n",param_1);
        iVar3 = 0;
      }
      return iVar3;
    }
    perror("stat");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  piVar1 = __errno_location();
  uVar2 = FUN_00043be8(*piVar1);
  fprintf(__stream,"Could not open %s: %s\n",param_1,uVar2);
  piVar1 = __errno_location();
  if (*piVar1 == 2) {
    fwrite("\nThe device apparently does not exist; did you specify it correctly?\n",1,0x45,stderr);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00044ea8 @ 00044ea8 size=60 ===== */

bool FUN_00044ea8(int param_1)

{
  return (*(uint *)(param_1 + 0x5c) & 0x20) != 0;
}



/* ===== FUN_00044ee4 @ 00044ee4 size=60 ===== */

bool FUN_00044ee4(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x200) != 0;
}



/* ===== FUN_00044f20 @ 00044f20 size=60 ===== */

bool FUN_00044f20(int param_1)

{
  return (*(uint *)(param_1 + 100) & 0x400) != 0;
}



/* ===== FUN_00044f5c @ 00044f5c size=60 ===== */

bool FUN_00044f5c(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x80) != 0;
}



/* ===== FUN_00044f98 @ 00044f98 size=60 ===== */

bool FUN_00044f98(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x100) != 0;
}



/* ===== FUN_00044fd4 @ 00044fd4 size=60 ===== */

bool FUN_00044fd4(int param_1)

{
  return (*(uint *)(param_1 + 0x60) & 0x2000) != 0;
}



/* ===== FUN_00045010 @ 00045010 size=116 ===== */

int FUN_00045010(int param_1,int param_2)

{
  if (param_2 == 1) {
    param_1 = param_1 + 0x244;
  }
  else if (param_2 == 0) {
    param_1 = param_1 + 0x240;
  }
  else if (param_2 == 2) {
    param_1 = param_1 + 0x26c;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* ===== FUN_00045084 @ 00045084 size=144 ===== */

void FUN_00045084(ushort param_1,FILE *param_2)

{
  passwd *ppVar1;
  
  fprintf(param_2,"%u ",(uint)param_1);
  ppVar1 = getpwuid((uint)param_1);
  if (ppVar1 == (passwd *)0x0) {
    fwrite("(user unknown)\n",1,0xf,param_2);
  }
  else {
    fprintf(param_2,"(user %s)\n",ppVar1->pw_name);
  }
  return;
}



/* ===== FUN_00045114 @ 00045114 size=144 ===== */

void FUN_00045114(ushort param_1,FILE *param_2)

{
  group *pgVar1;
  
  fprintf(param_2,"%u ",(uint)param_1);
  pgVar1 = getgrgid((uint)param_1);
  if (pgVar1 == (group *)0x0) {
    fwrite("(group unknown)\n",1,0x10,param_2);
  }
  else {
    fprintf(param_2,"(group %s)\n",pgVar1->gr_name);
  }
  return;
}



/* ===== FUN_000451a4 @ 000451a4 size=816 ===== */

undefined4 * FUN_000451a4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_1c;
  
  DAT_0006c0fc = '\0';
  if (param_1 == 0) {
    puVar4 = &DAT_00058c20;
  }
  else {
    local_1c = param_1;
    if (0x278cff < param_1) {
      local_1c = param_1 % 0x278d00;
      if (param_1 / 0x278d00 < 2) {
        uVar1 = 0x8c2c;
      }
      else {
        uVar1 = 0x8c28;
      }
      sprintf(&DAT_0006c0fc,"%d month%s",param_1 / 0x278d00,uVar1 | 0x50000);
    }
    if (0x93a7f < local_1c) {
      uVar1 = local_1c / 0x93a80;
      local_1c = local_1c % 0x93a80;
      if (DAT_0006c0fc == '\0') {
        uVar2 = 0x8c2c;
      }
      else {
        uVar2 = 0x8c3c;
      }
      if (uVar1 < 2) {
        uVar3 = 0x8c2c;
      }
      else {
        uVar3 = 0x8c28;
      }
      sprintf(&DAT_0006c1fc,"%s%d week%s",uVar2 | 0x50000,uVar1,uVar3 | 0x50000);
      strcat(&DAT_0006c0fc,&DAT_0006c1fc);
    }
    if (0x1517f < local_1c) {
      uVar1 = local_1c / 0x15180;
      local_1c = local_1c % 0x15180;
      if (DAT_0006c0fc == '\0') {
        uVar2 = 0x8c2c;
      }
      else {
        uVar2 = 0x8c3c;
      }
      if (uVar1 < 2) {
        uVar3 = 0x8c2c;
      }
      else {
        uVar3 = 0x8c28;
      }
      sprintf(&DAT_0006c1fc,"%s%d day%s",uVar2 | 0x50000,uVar1,uVar3 | 0x50000);
      strcat(&DAT_0006c0fc,&DAT_0006c1fc);
    }
    if (local_1c != 0) {
      if (DAT_0006c0fc == '\0') {
        uVar1 = 0x8c2c;
      }
      else {
        uVar1 = 0x8c3c;
      }
      sprintf(&DAT_0006c1fc,"%s%d:%02d:%02d",uVar1 | 0x50000,local_1c / 0xe10,
              (local_1c % 0xe10) / 0x3c,(local_1c % 0xe10) % 0x3c);
      strcat(&DAT_0006c0fc,&DAT_0006c1fc);
    }
    puVar4 = (undefined4 *)&DAT_0006c0fc;
  }
  return puVar4;
}



/* ===== FUN_000454d4 @ 000454d4 size=300 ===== */

void FUN_000454d4(int param_1,FILE *param_2)

{
  undefined4 uVar1;
  uint local_1c;
  uint *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_18 = (uint *)(param_1 + 0x5c);
  fwrite("Filesystem features:     ",1,0x19,param_2);
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    local_1c = 1;
    for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
      if ((local_1c & *local_18) != 0) {
        uVar1 = FUN_00047ba0(local_c,local_1c);
        fprintf(param_2," %s",uVar1);
        local_14 = local_14 + 1;
      }
      local_1c = local_1c << 1;
    }
    local_18 = local_18 + 1;
  }
  if (local_14 == 0) {
    fwrite(" (none)",1,7,param_2);
  }
  fputc(10,param_2);
  return;
}



/* ===== FUN_00045600 @ 00045600 size=336 ===== */

void FUN_00045600(int param_1,FILE *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  uint local_14;
  uint local_10;
  int local_c;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  fwrite("Default mount options:   ",1,0x19,param_2);
  bVar3 = (uVar2 & 0x60) != 0;
  if (bVar3) {
    uVar1 = FUN_00047168(uVar2 & 0x60);
    fprintf(param_2," %s",uVar1);
  }
  local_10 = (uint)bVar3;
  local_14 = 1;
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    if ((local_14 & 0x60) == 0) {
      if ((local_14 & uVar2) != 0) {
        uVar1 = FUN_00047168(local_14);
        fprintf(param_2," %s",uVar1);
        local_10 = local_10 + 1;
      }
    }
    local_14 = local_14 << 1;
  }
  if (local_10 == 0) {
    fwrite(" (none)",1,7,param_2);
  }
  fputc(10,param_2);
  return;
}



/* ===== FUN_00045750 @ 00045750 size=304 ===== */

void FUN_00045750(int param_1,FILE *param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x160) != 0) {
    fwrite("Filesystem flags:         ",1,0x1a,param_2);
    cVar1 = (*(uint *)(param_1 + 0x160) & 1) != 0;
    if ((bool)cVar1) {
      fwrite("signed_directory_hash ",1,0x16,param_2);
    }
    if ((*(uint *)(param_1 + 0x160) & 2) != 0) {
      fwrite("unsigned_directory_hash ",1,0x18,param_2);
      cVar1 = cVar1 + '\x01';
    }
    if ((*(uint *)(param_1 + 0x160) & 4) != 0) {
      fwrite("test_filesystem ",1,0x10,param_2);
      cVar1 = cVar1 + '\x01';
    }
    if (cVar1 == '\0') {
      fwrite("(none)\n",1,7,param_2);
    }
    else {
      fputc(10,param_2);
    }
  }
  return;
}



/* ===== FUN_00045880 @ 00045880 size=120 ===== */

undefined8 FUN_00045880(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = FUN_00044f5c(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x150);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_000458f8 @ 000458f8 size=120 ===== */

undefined8 FUN_000458f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  iVar1 = FUN_00044f5c(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x154);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_00045970 @ 00045970 size=120 ===== */

undefined8 FUN_00045970(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_00044f5c(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x158);
  }
  return CONCAT44(uVar3,uVar2);
}



/* ===== FUN_000459e8 @ 000459e8 size=68 ===== */

uint FUN_000459e8(char param_1)

{
  uint uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = 0x8d18;
  }
  else {
    uVar1 = 0x8d20;
  }
  return uVar1 | 0x50000;
}



/* ===== FUN_00045a2c @ 00045a2c size=48 ===== */

undefined * FUN_00045a2c(int param_1)

{
  return (&PTR_s_User_quota_inode__0006b3b0)[param_1];
}



/* ===== FUN_00045a5c @ 00045a5c size=4444 ===== */

void FUN_00045a5c(undefined4 *param_1,FILE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_78;
  time_t local_74;
  char local_70 [4];
  undefined3 local_6c;
  char cStack_69;
  char acStack_68 [4];
  char acStack_64 [68];
  FILE *local_20;
  void *local_1c;
  uint local_18;
  uint local_14;
  
  if (param_1[0x13] == 0) {
    uVar6 = 0x80;
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x16);
  }
  local_18 = (param_1[10] * uVar6 + (0x400 << (param_1[6] & 0xff))) - 1 >> (param_1[6] + 10 & 0xff);
  if (*(char *)(param_1 + 0x1e) == '\0') {
    local_70 = (char  [4])DAT_00058c20;
    local_6c = (undefined3)DAT_00058c24;
  }
  else {
    memset(local_70,0,0x50);
    strncpy(local_70,(char *)(param_1 + 0x1e),0x10);
  }
  fprintf(param_2,"Filesystem volume name:   %s\n",local_70);
  if (*(char *)(param_1 + 0x22) == '\0') {
    local_70[0] = s_<not_available>_00058d88[0];
    local_70[1] = s_<not_available>_00058d88[1];
    local_70[2] = s_<not_available>_00058d88[2];
    local_70[3] = s_<not_available>_00058d88[3];
    local_6c._0_1_ = s_<not_available>_00058d88[4];
    local_6c._1_1_ = s_<not_available>_00058d88[5];
    local_6c._2_1_ = s_<not_available>_00058d88[6];
    cStack_69 = s_<not_available>_00058d88[7];
    acStack_68[0] = s_<not_available>_00058d88[8];
    acStack_68[1] = s_<not_available>_00058d88[9];
    acStack_68[2] = s_<not_available>_00058d88[10];
    acStack_68[3] = s_<not_available>_00058d88[0xb];
    acStack_64[0] = s_<not_available>_00058d88[0xc];
    acStack_64[1] = s_<not_available>_00058d88[0xd];
    acStack_64[2] = s_<not_available>_00058d88[0xe];
    acStack_64[3] = s_<not_available>_00058d88[0xf];
  }
  else {
    memset(local_70,0,0x50);
    strncpy(local_70,(char *)(param_1 + 0x22),0x40);
  }
  fprintf(param_2,"Last mounted on:          %s\n",local_70);
  uVar1 = FUN_00047a30(param_1 + 0x1a);
  fprintf(param_2,"Filesystem UUID:          %s\n",uVar1);
  fprintf(param_2,"Filesystem magic number:  0x%04X\n",(uint)*(ushort *)(param_1 + 0xe));
  fprintf(param_2,"Filesystem revision #:    %d",param_1[0x13]);
  if (param_1[0x13] == 0) {
    fwrite(" (original)\n",1,0xc,param_2);
  }
  else if (param_1[0x13] == 1) {
    fwrite(" (dynamic)\n",1,0xb,param_2);
  }
  else {
    fwrite(" (unknown)\n",1,0xb,param_2);
  }
  FUN_000454d4(param_1,param_2);
  FUN_00045750(param_1,param_2);
  FUN_00045600(param_1,param_2);
  if (*(char *)(param_1 + 0x80) != '\0') {
    fprintf(param_2,"Mount options:            %s\n",param_1 + 0x80);
  }
  fwrite("Filesystem state:        ",1,0x19,param_2);
  FUN_000476f8(param_2,*(undefined2 *)((int)param_1 + 0x3a));
  fputc(10,param_2);
  fwrite("Errors behavior:          ",1,0x1a,param_2);
  FUN_0004764c(param_2,*(undefined2 *)(param_1 + 0xf));
  fputc(10,param_2);
  local_1c = (void *)FUN_00047a84(param_1[0x12]);
  fprintf(param_2,"Filesystem OS type:       %s\n",local_1c);
  free(local_1c);
  fprintf(param_2,"Inode count:              %u\n",*param_1);
  uVar9 = FUN_00045880(param_1);
  fprintf(param_2,"Block count:              %llu\n",(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_000458f8(param_1);
  fprintf(param_2,"Reserved block count:     %llu\n",(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  if (param_1[0x92] != 0) {
    fprintf(param_2,"Overhead blocks:          %u\n",param_1[0x92]);
  }
  uVar9 = FUN_00045970(param_1);
  fprintf(param_2,"Free blocks:              %llu\n",(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  fprintf(param_2,"Free inodes:              %u\n",param_1[4]);
  fprintf(param_2,"First block:              %u\n",param_1[5]);
  fprintf(param_2,"Block size:               %u\n",0x400 << (param_1[6] & 0xff));
  iVar2 = FUN_00044ee4(param_1);
  if (iVar2 == 0) {
    fprintf(param_2,"Fragment size:            %u\n",0x400 << (param_1[7] & 0xff));
  }
  else {
    fprintf(param_2,"Cluster size:             %u\n",0x400 << (param_1[7] & 0xff));
  }
  iVar2 = FUN_00044f5c(param_1);
  if (iVar2 != 0) {
    fprintf(param_2,"Group descriptor size:    %u\n",(uint)*(ushort *)((int)param_1 + 0xfe));
  }
  if (*(short *)((int)param_1 + 0xce) != 0) {
    fprintf(param_2,"Reserved GDT blocks:      %u\n",(uint)*(ushort *)((int)param_1 + 0xce));
  }
  fprintf(param_2,"Blocks per group:         %u\n",param_1[8]);
  iVar2 = FUN_00044ee4(param_1);
  if (iVar2 == 0) {
    fprintf(param_2,"Fragments per group:      %u\n",param_1[9]);
  }
  else {
    fprintf(param_2,"Clusters per group:       %u\n",param_1[9]);
  }
  fprintf(param_2,"Inodes per group:         %u\n",param_1[10]);
  fprintf(param_2,"Inode blocks per group:   %u\n",local_18);
  if (*(short *)(param_1 + 0x59) != 0) {
    fprintf(param_2,"RAID stride:              %u\n",(uint)*(ushort *)(param_1 + 0x59));
  }
  if (param_1[0x5c] != 0) {
    fprintf(param_2,"RAID stripe width:        %u\n",param_1[0x5c]);
  }
  if (param_1[0x41] != 0) {
    fprintf(param_2,"First meta block group:   %u\n",param_1[0x41]);
  }
  if (*(char *)(param_1 + 0x5d) != '\0') {
    fprintf(param_2,"Flex block group size:    %u\n",1 << *(sbyte *)(param_1 + 0x5d));
  }
  if (param_1[0x42] != 0) {
    local_74 = param_1[0x42];
    pcVar3 = ctime(&local_74);
    fprintf(param_2,"Filesystem created:       %s",pcVar3);
  }
  local_74 = param_1[0xb];
  if (param_1[0xb] == 0) {
    pcVar3 = "n/a\n";
  }
  else {
    pcVar3 = ctime(&local_74);
  }
  fprintf(param_2,"Last mount time:          %s",pcVar3);
  local_74 = param_1[0xc];
  pcVar3 = ctime(&local_74);
  fprintf(param_2,"Last write time:          %s",pcVar3);
  fprintf(param_2,"Mount count:              %u\n",(uint)*(ushort *)(param_1 + 0xd));
  fprintf(param_2,"Maximum mount count:      %d\n",(int)*(short *)((int)param_1 + 0x36));
  local_74 = param_1[0x10];
  pcVar3 = ctime(&local_74);
  fprintf(param_2,"Last checked:             %s",pcVar3);
  uVar7 = param_1[0x11];
  uVar1 = FUN_000451a4(param_1[0x11]);
  fprintf(param_2,"Check interval:           %u (%s)\n",uVar7,uVar1);
  if (param_1[0x11] != 0) {
    local_78 = param_1[0x10] + param_1[0x11];
    pcVar3 = ctime(&local_78);
    fprintf(param_2,"Next check after:         %s",pcVar3);
  }
  if (param_1[0x5e] != 0 || param_1[0x5f] != 0) {
    fwrite("Lifetime writes:          ",1,0x1a,param_2);
    if (param_1[0x5f] == 0 && (uint)param_1[0x5e] < 0x2000) {
      fprintf(param_2,"%llu kB\n",param_1[0x5e],param_1[0x5f]);
    }
    else if (param_1[0x5f] == 0 && (uint)param_1[0x5e] < 0x800000) {
      uVar6 = param_1[0x5f] + (uint)(0xfffffdff < (uint)param_1[0x5e]);
      fprintf(param_2,"%llu MB\n",param_1[0x5e] + 0x200 >> 10 | uVar6 * 0x400000,uVar6 >> 10);
    }
    else {
      iVar2 = param_1[0x5f];
      bVar8 = iVar2 != 0;
      if (iVar2 == 1) {
        bVar8 = 0xfffffffe < (uint)param_1[0x5e];
      }
      if (bVar8 && (iVar2 != 1 || param_1[0x5e] != 0xffffffff)) {
        uVar6 = param_1[0x5f];
        bVar8 = 0x7fe < uVar6;
        if (uVar6 == 0x7ff) {
          bVar8 = 0xfffffffe < (uint)param_1[0x5e];
        }
        if (bVar8 && (uVar6 != 0x7ff || param_1[0x5e] != 0xffffffff)) {
          fprintf(param_2,"%llu PB\n",param_1[0x5f] + 0x80 >> 8,0);
        }
        else {
          uVar6 = param_1[0x5f] + (uint)(0xdfffffff < (uint)param_1[0x5e]);
          fprintf(param_2,"%llu TB\n",param_1[0x5e] + 0x20000000 >> 0x1e | uVar6 * 4,uVar6 >> 0x1e);
        }
      }
      else {
        uVar6 = param_1[0x5f] + (uint)(0xfff7ffff < (uint)param_1[0x5e]);
        fprintf(param_2,"%llu GB\n",param_1[0x5e] + 0x80000 >> 0x14 | uVar6 * 0x1000,uVar6 >> 0x14);
      }
    }
  }
  fwrite("Reserved blocks uid:      ",1,0x1a,param_2);
  FUN_00045084(*(undefined2 *)(param_1 + 0x14),param_2);
  fwrite("Reserved blocks gid:      ",1,0x1a,param_2);
  FUN_00045114(*(undefined2 *)((int)param_1 + 0x52),param_2);
  if (param_1[0x13] != 0) {
    fprintf(param_2,"First inode:              %d\n",param_1[0x15]);
    fprintf(param_2,"Inode size:\t          %d\n",(uint)*(ushort *)(param_1 + 0x16));
    if (*(short *)(param_1 + 0x57) != 0) {
      fprintf(param_2,"Required extra isize:     %d\n",(uint)*(ushort *)(param_1 + 0x57));
    }
    if (*(short *)((int)param_1 + 0x15e) != 0) {
      fprintf(param_2,"Desired extra isize:      %d\n",(uint)*(ushort *)((int)param_1 + 0x15e));
    }
  }
  iVar2 = FUN_00047788(param_1 + 0x34);
  if (iVar2 == 0) {
    uVar1 = FUN_00047a30(param_1 + 0x34);
    fprintf(param_2,"Journal UUID:             %s\n",uVar1);
  }
  if (param_1[0x38] != 0) {
    fprintf(param_2,"Journal inode:            %u\n",param_1[0x38]);
  }
  if (param_1[0x39] != 0) {
    fprintf(param_2,"Journal device:\t          0x%04x\n",param_1[0x39]);
  }
  if (param_1[0x3a] != 0) {
    fprintf(param_2,"First orphan inode:       %u\n",param_1[0x3a]);
  }
  iVar2 = FUN_00044ea8(param_1);
  if ((iVar2 != 0) || (*(char *)(param_1 + 0x3f) != '\0')) {
    uVar1 = FUN_00048770(*(undefined1 *)(param_1 + 0x3f));
    fprintf(param_2,"Default directory hash:   %s\n",uVar1);
  }
  iVar2 = FUN_00047788(param_1 + 0x3b);
  if (iVar2 == 0) {
    uVar1 = FUN_00047a30(param_1 + 0x3b);
    fprintf(param_2,"Directory Hash Seed:      %s\n",uVar1);
  }
  if (*(char *)((int)param_1 + 0xfd) != '\0') {
    fwrite("Journal backup:           ",1,0x1a,param_2);
    if (*(char *)((int)param_1 + 0xfd) == '\x01') {
      fwrite("inode blocks\n",1,0xd,param_2);
    }
    else {
      fprintf(param_2,"type %u\n",(uint)*(byte *)((int)param_1 + 0xfd));
    }
  }
  if ((param_1[0x93] != 0) || (param_1[0x94] != 0)) {
    fwrite("Backup block groups:      ",1,0x1a,param_2);
    if (param_1[0x93] != 0) {
      fprintf(param_2,"%u ",param_1[0x93]);
    }
    if (param_1[0x94] != 0) {
      fprintf(param_2,"%u ",param_1[0x94]);
    }
    local_20 = param_2;
    if (param_2->_chain == (_IO_FILE *)0x0) {
      fputc(10,param_2);
    }
    else if (param_2->_IO_write_base < param_2->_IO_buf_base) {
      pcVar3 = param_2->_IO_write_base;
      param_2->_IO_write_base = pcVar3 + 1;
      *pcVar3 = '\n';
    }
    else {
      __fputc_unlocked(10,param_2);
    }
  }
  if (param_1[0x60] != 0) {
    fprintf(param_2,"Snapshot inode:           %u\n",param_1[0x60]);
    fprintf(param_2,"Snapshot ID:              %u\n",param_1[0x61]);
    fprintf(param_2,"Snapshot reserved blocks: %llu\n",param_1[0x62],param_1[99]);
  }
  if (param_1[100] != 0) {
    fprintf(param_2,"Snapshot list head:       %u\n",param_1[100]);
  }
  if (param_1[0x65] != 0) {
    fprintf(param_2,"FS Error count:           %u\n",param_1[0x65]);
  }
  if (param_1[0x66] != 0) {
    local_74 = param_1[0x66];
    pcVar3 = ctime(&local_74);
    fprintf(param_2,"First error time:         %s",pcVar3);
    memset(local_70,0,0x50);
    strncpy(local_70,(char *)(param_1 + 0x6a),0x20);
    fprintf(param_2,"First error function:     %s\n",local_70);
    fprintf(param_2,"First error line #:       %u\n",param_1[0x72]);
    fprintf(param_2,"First error inode #:      %u\n",param_1[0x67]);
    fprintf(param_2,"First error block #:      %llu\n",param_1[0x68],param_1[0x69]);
  }
  if (param_1[0x73] != 0) {
    local_74 = param_1[0x73];
    pcVar3 = ctime(&local_74);
    fprintf(param_2,"Last error time:          %s",pcVar3);
    memset(local_70,0,0x50);
    strncpy(local_70,(char *)(param_1 + 0x78),0x20);
    fprintf(param_2,"Last error function:      %s\n",local_70);
    fprintf(param_2,"Last error line #:        %u\n",param_1[0x75]);
    fprintf(param_2,"Last error inode #:       %u\n",param_1[0x74]);
    fprintf(param_2,"Last error block #:       %llu\n",param_1[0x76],param_1[0x77]);
  }
  iVar2 = FUN_00044f98(param_1);
  if (iVar2 != 0) {
    fprintf(param_2,"MMP block number:         %llu\n",param_1[0x5a],param_1[0x5b]);
    fprintf(param_2,"MMP update interval:      %u\n",(uint)*(ushort *)((int)param_1 + 0x166));
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    piVar4 = (int *)FUN_00045010(param_1,local_14);
    if (*piVar4 != 0) {
      uVar1 = FUN_00045a2c(local_14);
      puVar5 = (undefined4 *)FUN_00045010(param_1,local_14);
      fprintf(param_2,"%-26s%u\n",uVar1,*puVar5);
    }
  }
  iVar2 = FUN_00044f20(param_1);
  if (iVar2 != 0) {
    uVar1 = FUN_000459e8(*(undefined1 *)((int)param_1 + 0x175));
    fprintf(param_2,"Checksum type:            %s\n",uVar1);
    fprintf(param_2,"Checksum:                 0x%08x\n",param_1[0xff]);
  }
  iVar2 = FUN_00047788(param_1 + 0x96);
  if (iVar2 == 0) {
    uVar1 = FUN_00047a30(param_1 + 0x96);
    fprintf(param_2,"Encryption PW Salt:       %s\n",uVar1);
  }
  iVar2 = FUN_00044fd4(param_1);
  if (iVar2 != 0) {
    fprintf(param_2,"Checksum seed:            0x%08x\n",param_1[0x9c]);
  }
  return;
}



/* ===== FUN_00046bb8 @ 00046bb8 size=52 ===== */

void FUN_00046bb8(undefined4 param_1)

{
  FUN_00045a5c(param_1,stdout);
  return;
}



/* ===== FUN_00046bec @ 00046bec size=84 ===== */

uint FUN_00046bec(uint param_1)

{
  return param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}



/* ===== FUN_00046c40 @ 00046c40 size=68 ===== */

uint FUN_00046c40(char param_1)

{
  uint uVar1;
  
  if (param_1 == '\x04') {
    uVar1 = 0x9740;
  }
  else {
    uVar1 = 0x9748;
  }
  return uVar1 | 0x50000;
}



/* ===== FUN_00046c84 @ 00046c84 size=1252 ===== */

void FUN_00046c84(FILE *param_1,int param_2,uint32_t param_3,undefined4 param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  undefined4 *local_14;
  
  local_24 = 0;
  fwrite("Journal features:        ",1,0x19,param_1);
  local_14 = (undefined4 *)(param_2 + 0x24);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    uVar8 = FUN_00046bec(*local_14);
    local_18 = 1;
    for (local_20 = 0; local_20 < 0x20; local_20 = local_20 + 1) {
      if ((local_18 & uVar8) != 0) {
        uVar4 = FUN_00047f28(local_1c,local_18,uVar8,local_18 & uVar8,param_4);
        fprintf(param_1," %s",uVar4);
        local_24 = local_24 + 1;
      }
      local_18 = local_18 << 1;
    }
    local_14 = local_14 + 1;
  }
  if (local_24 == 0) {
    fwrite(" (none)",1,7,param_1);
  }
  if (param_1->_chain == (_IO_FILE *)0x0) {
    fputc(10,param_1);
  }
  else if (param_1->_IO_write_base < param_1->_IO_buf_base) {
    pcVar7 = param_1->_IO_write_base;
    param_1->_IO_write_base = pcVar7 + 1;
    *pcVar7 = '\n';
  }
  else {
    __fputc_unlocked(10,param_1);
  }
  fwrite("Journal size:             ",1,0x1a,param_1);
  uVar1 = ntohl(*(uint32_t *)(param_2 + 0xc));
  uVar2 = ntohl(*(uint32_t *)(param_2 + 0x10));
  uVar8 = uVar2 * (uVar1 >> 10);
  if (uVar8 < 0x2000) {
    fprintf(param_1,"%uk\n",uVar8);
  }
  else {
    fprintf(param_1,"%uM\n",uVar8 >> 10);
  }
  uVar1 = ntohl(*(uint32_t *)(param_2 + 0x40));
  uVar2 = ntohl(*(uint32_t *)(param_2 + 0xc));
  if (uVar2 != param_3) {
    uVar2 = ntohl(*(uint32_t *)(param_2 + 0xc));
    fprintf(param_1,"Journal block size:       %u\n",uVar2);
  }
  uVar2 = ntohl(*(uint32_t *)(param_2 + 0x10));
  fprintf(param_1,"Journal length:           %u\n",uVar2);
  uVar2 = ntohl(*(uint32_t *)(param_2 + 0x14));
  if (uVar2 != 1) {
    uVar2 = ntohl(*(uint32_t *)(param_2 + 0x14));
    fprintf(param_1,"Journal first block:      %u\n",uVar2);
  }
  uVar2 = ntohl(*(uint32_t *)(param_2 + 0x18));
  uVar3 = ntohl(*(uint32_t *)(param_2 + 0x1c));
  fprintf(param_1,"Journal sequence:         0x%08x\nJournal start:            %u\n",uVar2,uVar3);
  if (uVar1 != 1) {
    fprintf(param_1,"Journal number of users:  %u\n",uVar1);
  }
  uVar9 = *(uint *)(param_2 + 0x24);
  uVar8 = FUN_00046bec(1);
  if ((uVar8 & uVar9) != 0) {
    fwrite("Journal checksum type:    crc32\n",1,0x20,param_1);
  }
  uVar9 = *(uint *)(param_2 + 0x28);
  uVar8 = FUN_00046bec(0x10);
  if (((uVar8 & uVar9) != 0) ||
     (uVar9 = *(uint *)(param_2 + 0x28), uVar8 = FUN_00046bec(8), (uVar8 & uVar9) != 0)) {
    uVar4 = FUN_00046c40(*(undefined1 *)(param_2 + 0x50));
    uVar5 = FUN_00046bec(*(undefined4 *)(param_2 + 0xfc));
    fprintf(param_1,"Journal checksum type:    %s\nJournal checksum:         0x%08x\n",uVar4,uVar5);
  }
  if ((1 < uVar1) || (iVar6 = FUN_00047788(param_2 + 0x100), iVar6 == 0)) {
    for (local_1c = 0; local_1c < uVar1; local_1c = local_1c + 1) {
      if (local_1c == 0) {
        uVar8 = 0x98e8;
      }
      else {
        uVar8 = 0x98c8;
      }
      uVar4 = FUN_00047a30(param_2 + local_1c * 0x10 + 0x100);
      printf((char *)(uVar8 | 0x50000),uVar4);
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    uVar1 = ntohl(*(uint32_t *)(param_2 + 0x20));
    fprintf(param_1,"Journal errno:            %d\n",uVar1);
  }
  return;
}



/* ===== FUN_00047168 @ 00047168 size=184 ===== */

undefined * FUN_00047168(uint param_1)

{
  uint local_14;
  int local_10;
  uint *local_c;
  
  local_c = &DAT_0006b3bc;
  while( true ) {
    if (local_c[1] == 0) {
      local_10 = 0;
      local_14 = param_1;
      while (local_14 = local_14 >> 1, local_14 != 0) {
        local_10 = local_10 + 1;
      }
      sprintf(&DAT_0006c24c,"MNTOPT_%d",local_10);
      return &DAT_0006c24c;
    }
    if (param_1 == *local_c) break;
    local_c = local_c + 2;
  }
  return (undefined *)local_c[1];
}



/* ===== FUN_00047220 @ 00047220 size=312 ===== */

undefined4 FUN_00047220(char *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *local_14 [2];
  int *local_c;
  
  local_c = &DAT_0006b3bc;
  while( true ) {
    if (local_c[1] == 0) {
      iVar1 = strncasecmp(param_1,"MNTOPT_",7);
      if (iVar1 == 0) {
        if (param_1[8] == '\0') {
          uVar3 = 1;
        }
        else {
          uVar2 = strtol(param_1 + 8,local_14,10);
          if (((int)uVar2 < 0x20) && (-1 < (int)uVar2)) {
            if (*local_14[0] == '\0') {
              *param_2 = 1 << (uVar2 & 0xff);
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = 1;
          }
        }
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    iVar1 = strcasecmp(param_1,(char *)local_c[1]);
    if (iVar1 == 0) break;
    local_c = local_c + 2;
  }
  *param_2 = *local_c;
  return 0;
}



/* ===== FUN_00047358 @ 00047358 size=112 ===== */

byte * FUN_00047358(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_000473c8 @ 000473c8 size=128 ===== */

byte * FUN_000473c8(byte *param_1)

{
  byte *local_c;
  
  for (local_c = param_1;
      ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) == 0)) &&
      (*local_c != 0x2c)); local_c = local_c + 1) {
  }
  return local_c;
}



/* ===== FUN_00047448 @ 00047448 size=516 ===== */

undefined4 FUN_00047448(char *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  uint local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  char *local_c;
  
  local_18 = 0;
  sVar2 = strlen(param_1);
  local_1c = malloc(sVar2 + 1);
  if (local_1c == (char *)0x0) {
    local_18 = 1;
  }
  else {
    strcpy(local_1c,param_1);
    local_c = local_1c;
LAB_00047618:
    if ((local_c == (char *)0x0) || (*local_c == '\0')) goto LAB_00047634;
    local_14 = 0;
    local_c = (char *)FUN_00047358(local_c);
    local_10 = (char *)FUN_000473c8(local_c);
    if (*local_10 == '\0') {
      local_10 = (char *)0x0;
    }
    else {
      *local_10 = '\0';
    }
    cVar1 = *local_c;
    if ((cVar1 == '-') || (cVar1 == '^')) {
      local_14 = local_14 + 1;
LAB_0004752c:
      local_c = local_c + 1;
    }
    else if (cVar1 == '+') goto LAB_0004752c;
    iVar3 = FUN_00047220(local_c,&local_20);
    if (iVar3 == 0) {
      if ((param_3 != 0) && ((param_3 & local_20) == 0)) {
        local_18 = 1;
        goto LAB_00047634;
      }
      if ((local_20 & 0x60) != 0) {
        *param_2 = *param_2 & 0xffffff9f;
      }
      if (local_14 == 0) {
        *param_2 = *param_2 | local_20;
      }
      else {
        *param_2 = *param_2 & ~local_20;
      }
      if (local_10 == (char *)0x0) {
        local_c = (char *)0x0;
      }
      else {
        local_c = local_10 + 1;
      }
      goto LAB_00047618;
    }
    local_18 = 1;
LAB_00047634:
    free(local_1c);
  }
  return local_18;
}



/* ===== FUN_0004764c @ 0004764c size=172 ===== */

void FUN_0004764c(FILE *param_1,short param_2)

{
  if (param_2 == 2) {
    fwrite("Remount read-only",1,0x11,param_1);
  }
  else if (param_2 == 3) {
    fwrite("Panic",1,5,param_1);
  }
  else if (param_2 == 1) {
    fwrite("Continue",1,8,param_1);
  }
  else {
    fwrite("Unknown (continue)",1,0x12,param_1);
  }
  return;
}



/* ===== FUN_000476f8 @ 000476f8 size=144 ===== */

void FUN_000476f8(FILE *param_1,ushort param_2)

{
  if ((param_2 & 1) == 0) {
    fwrite(" not clean",1,10,param_1);
  }
  else {
    fwrite(" clean",1,6,param_1);
  }
  if ((param_2 & 2) != 0) {
    fwrite(" with errors",1,0xc,param_1);
  }
  return;
}



/* ===== FUN_00047788 @ 00047788 size=112 ===== */

undefined4 FUN_00047788(char *param_1)

{
  int local_10;
  char *local_c;
  
  local_10 = 0;
  local_c = param_1;
  while( true ) {
    if (0xf < local_10) {
      return 1;
    }
    if (*local_c != '\0') break;
    local_10 = local_10 + 1;
    local_c = local_c + 1;
  }
  return 0;
}



/* ===== FUN_000477f8 @ 000477f8 size=396 ===== */

void FUN_000477f8(undefined1 *param_1,undefined4 *param_2)

{
  *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  *(ushort *)(param_2 + 1) = CONCAT11(param_1[4],param_1[5]);
  *(ushort *)((int)param_2 + 6) = CONCAT11(param_1[6],param_1[7]);
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[8],param_1[9]);
  memcpy((void *)((int)param_2 + 10),param_1 + 10,6);
  return;
}



/* ===== FUN_00047984 @ 00047984 size=172 ===== */

void FUN_00047984(undefined4 param_1,char *param_2)

{
  undefined4 local_30;
  ushort local_2c;
  ushort local_2a;
  ushort local_28;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  FUN_000477f8(param_1,&local_30);
  sprintf(param_2,"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",local_30,(uint)local_2c,
          (uint)local_2a,(uint)(local_28 >> 8),local_28 & 0xff,(uint)local_26,(uint)local_25,
          (uint)local_24,(uint)local_23,(uint)local_22,(uint)local_21);
  return;
}



/* ===== FUN_00047a30 @ 00047a30 size=84 ===== */

char * FUN_00047a30(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00047788(param_1);
  if (iVar1 == 0) {
    FUN_00047984(param_1,&DAT_0006c260);
    pcVar2 = &DAT_0006c260;
  }
  else {
    pcVar2 = "<none>";
  }
  return pcVar2;
}



/* ===== FUN_00047a84 @ 00047a84 size=148 ===== */

char * FUN_00047a84(int param_1)

{
  size_t sVar1;
  char *__dest;
  char *local_c;
  
  if ((param_1 < 0) || (4 < param_1)) {
    local_c = "(unknown os)";
  }
  else {
    local_c = (char *)(&DAT_0006b424)[param_1];
  }
  sVar1 = strlen(local_c);
  __dest = malloc(sVar1 + 1);
  if (__dest != (char *)0x0) {
    strcpy(__dest,local_c);
  }
  return __dest;
}



/* ===== FUN_00047b18 @ 00047b18 size=136 ===== */

int FUN_00047b18(char *param_1)

{
  int iVar1;
  int local_10;
  int *local_c;
  
  local_10 = 0;
  local_c = &DAT_0006b424;
  while( true ) {
    if (*local_c == 0) {
      return -1;
    }
    iVar1 = strcasecmp(param_1,(char *)*local_c);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
    local_10 = local_10 + 1;
  }
  return local_10;
}



/* ===== FUN_00047ba0 @ 00047ba0 size=296 ===== */

undefined * FUN_00047ba0(int param_1,uint param_2)

{
  uint local_20;
  int local_14;
  byte local_d;
  int *local_c;
  
  local_c = &DAT_0006b43c;
  while( true ) {
    if (local_c[2] == 0) {
      if (param_1 == 1) {
        local_d = 0x49;
      }
      else if (param_1 == 2) {
        local_d = 0x52;
      }
      else if (param_1 == 0) {
        local_d = 0x43;
      }
      else {
        local_d = 0x3f;
      }
      local_14 = 0;
      local_20 = param_2;
      while (local_20 = local_20 >> 1, local_20 != 0) {
        local_14 = local_14 + 1;
      }
      sprintf(&DAT_0006c2b0,"FEATURE_%c%d",(uint)local_d,local_14);
      return &DAT_0006c2b0;
    }
    if ((param_1 == *local_c) && (param_2 == local_c[1])) break;
    local_c = local_c + 3;
  }
  return (undefined *)local_c[2];
}



/* ===== FUN_00047cc8 @ 00047cc8 size=416 ===== */

undefined4 FUN_00047cc8(char *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *local_14 [2];
  undefined4 *local_c;
  
  local_c = &DAT_0006b43c;
  while( true ) {
    if (local_c[2] == 0) {
      iVar1 = strncasecmp(param_1,"FEATURE_",8);
      if (iVar1 == 0) {
        switch(param_1[8]) {
        case 'C':
        case 'c':
          *param_2 = 0;
          break;
        default:
          return 1;
        case 'I':
        case 'i':
          *param_2 = 1;
          break;
        case 'R':
        case 'r':
          *param_2 = 2;
        }
        if (param_1[9] == '\0') {
          uVar3 = 1;
        }
        else {
          uVar2 = strtol(param_1 + 9,local_14,10);
          if (((int)uVar2 < 0x20) && (-1 < (int)uVar2)) {
            if (*local_14[0] == '\0') {
              *param_3 = 1 << (uVar2 & 0xff);
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = 1;
          }
        }
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    iVar1 = strcasecmp(param_1,(char *)local_c[2]);
    if (iVar1 == 0) break;
    local_c = local_c + 3;
  }
  *param_2 = *local_c;
  *param_3 = local_c[1];
  return 0;
}



/* ===== FUN_00047f28 @ 00047f28 size=296 ===== */

undefined * FUN_00047f28(int param_1,uint param_2)

{
  uint local_20;
  int local_14;
  byte local_d;
  int *local_c;
  
  local_c = &DAT_0006b610;
  while( true ) {
    if (local_c[2] == 0) {
      if (param_1 == 1) {
        local_d = 0x49;
      }
      else if (param_1 == 2) {
        local_d = 0x52;
      }
      else if (param_1 == 0) {
        local_d = 0x43;
      }
      else {
        local_d = 0x3f;
      }
      local_14 = 0;
      local_20 = param_2;
      while (local_20 = local_20 >> 1, local_20 != 0) {
        local_14 = local_14 + 1;
      }
      sprintf(&DAT_0006c2c4,"FEATURE_%c%d",(uint)local_d,local_14);
      return &DAT_0006c2c4;
    }
    if ((param_1 == *local_c) && (param_2 == local_c[1])) break;
    local_c = local_c + 3;
  }
  return (undefined *)local_c[2];
}



/* ===== FUN_00048050 @ 00048050 size=416 ===== */

undefined4 FUN_00048050(char *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *local_14 [2];
  undefined4 *local_c;
  
  local_c = &DAT_0006b610;
  while( true ) {
    if (local_c[2] == 0) {
      iVar1 = strncasecmp(param_1,"FEATURE_",8);
      if (iVar1 == 0) {
        switch(param_1[8]) {
        case 'C':
        case 'c':
          *param_2 = 0;
          break;
        default:
          return 1;
        case 'I':
        case 'i':
          *param_2 = 1;
          break;
        case 'R':
        case 'r':
          *param_2 = 2;
        }
        if (param_1[9] == '\0') {
          uVar3 = 1;
        }
        else {
          uVar2 = strtol(param_1 + 9,local_14,10);
          if (((int)uVar2 < 0x20) && (-1 < (int)uVar2)) {
            if (*local_14[0] == '\0') {
              *param_3 = 1 << (uVar2 & 0xff);
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = 1;
          }
        }
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    iVar1 = strcasecmp(param_1,(char *)local_c[2]);
    if (iVar1 == 0) break;
    local_c = local_c + 3;
  }
  *param_2 = *local_c;
  *param_3 = local_c[1];
  return 0;
}



/* ===== FUN_000482b0 @ 000482b0 size=112 ===== */

byte * FUN_000482b0(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_00048320 @ 00048320 size=128 ===== */

byte * FUN_00048320(byte *param_1)

{
  byte *local_c;
  
  for (local_c = param_1;
      ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) == 0)) &&
      (*local_c != 0x2c)); local_c = local_c + 1) {
  }
  return local_c;
}



/* ===== FUN_000483a0 @ 000483a0 size=900 ===== */

undefined4
FUN_000483a0(char *param_1,undefined4 *param_2,int param_3,int param_4,uint *param_5,uint *param_6)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  int local_38;
  uint local_24;
  uint local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  char *local_c;
  
  local_18 = 0;
  local_38 = param_4;
  if (param_4 == 0) {
    local_38 = param_3;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  sVar2 = strlen(param_1);
  local_1c = malloc(sVar2 + 1);
  if (local_1c == (char *)0x0) {
    return 1;
  }
  strcpy(local_1c,param_1);
  local_c = local_1c;
  do {
    if ((local_c == (char *)0x0) || (*local_c == '\0')) goto LAB_0004870c;
    local_14 = 0;
    local_c = (char *)FUN_000482b0(local_c);
    local_10 = (char *)FUN_00048320(local_c);
    if (*local_10 == '\0') {
      local_10 = (char *)0x0;
    }
    else {
      *local_10 = '\0';
    }
    iVar3 = strcasecmp(local_c,"none");
    if ((iVar3 == 0) || (iVar3 = strcasecmp(local_c,"clear"), iVar3 == 0)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    else {
      cVar1 = *local_c;
      if ((cVar1 == '-') || (cVar1 == '^')) {
        local_14 = local_14 + 1;
LAB_00048534:
        local_c = local_c + 1;
      }
      else if (cVar1 == '+') goto LAB_00048534;
      iVar3 = FUN_00047cc8(local_c,&local_24,&local_20);
      if (iVar3 != 0) {
        local_18 = 1;
        goto LAB_0004870c;
      }
      if (local_14 == 0) {
        if ((param_3 != 0) && ((local_20 & *(uint *)(param_3 + local_24 * 4)) == 0)) {
          local_18 = 1;
          if (param_5 != (uint *)0x0) {
            *param_5 = local_24;
          }
          if (param_6 != (uint *)0x0) {
            *param_6 = local_20;
          }
LAB_0004870c:
          free(local_1c);
          return local_18;
        }
        param_2[local_24] = param_2[local_24] | local_20;
      }
      else {
        if ((local_38 != 0) && ((local_20 & *(uint *)(local_38 + local_24 * 4)) == 0)) {
          local_18 = 1;
          if (param_5 != (uint *)0x0) {
            *param_5 = local_24 | 0x80;
          }
          if (param_6 != (uint *)0x0) {
            *param_6 = local_20;
          }
          goto LAB_0004870c;
        }
        param_2[local_24] = ~local_20 & param_2[local_24];
      }
    }
    if (local_10 == (char *)0x0) {
      local_c = (char *)0x0;
    }
    else {
      local_c = local_10 + 1;
    }
  } while( true );
}



/* ===== FUN_00048724 @ 00048724 size=76 ===== */

undefined4 FUN_00048724(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000483a0(param_1,param_2,param_3,0,0,0);
  return uVar1;
}



/* ===== FUN_00048770 @ 00048770 size=136 ===== */

undefined * FUN_00048770(int param_1)

{
  int *local_c;
  
  local_c = &DAT_0006b664;
  while( true ) {
    if (local_c[1] == 0) {
      sprintf(&DAT_0006c2d8,"HASHALG_%d",param_1);
      return &DAT_0006c2d8;
    }
    if (param_1 == *local_c) break;
    local_c = local_c + 2;
  }
  return (undefined *)local_c[1];
}



/* ===== FUN_000487f8 @ 000487f8 size=272 ===== */

long FUN_000487f8(char *param_1)

{
  int iVar1;
  long lVar2;
  char *local_14 [2];
  long *local_c;
  
  local_c = &DAT_0006b664;
  while( true ) {
    if (local_c[1] == 0) {
      iVar1 = strncasecmp(param_1,"HASHALG_",8);
      if (iVar1 == 0) {
        if (param_1[8] == '\0') {
          lVar2 = -1;
        }
        else {
          lVar2 = strtol(param_1 + 8,local_14,10);
          if ((lVar2 < 0x100) && (-1 < lVar2)) {
            if (*local_14[0] != '\0') {
              lVar2 = -1;
            }
          }
          else {
            lVar2 = -1;
          }
        }
      }
      else {
        lVar2 = -1;
      }
      return lVar2;
    }
    iVar1 = strcasecmp(param_1,(char *)local_c[1]);
    if (iVar1 == 0) break;
    local_c = local_c + 2;
  }
  return *local_c;
}



/* ===== FUN_00048908 @ 00048908 size=60 ===== */

bool FUN_00048908(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_00048944 @ 00048944 size=144 ===== */

undefined4 FUN_00048944(undefined4 param_1)

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



/* ===== FUN_000489d4 @ 000489d4 size=260 ===== */

undefined4 FUN_000489d4(undefined4 *param_1,char *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  char *local_18;
  
  pvVar1 = calloc(1,0x20);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *(void **)pvVar1 = pvVar1;
    *(void **)((int)pvVar1 + 4) = pvVar1;
    *(int *)((int)pvVar1 + 8) = (int)pvVar1 + 8;
    *(int *)((int)pvVar1 + 0xc) = (int)pvVar1 + 8;
    local_18 = param_2;
    if ((param_2 != (char *)0x0) && (*param_2 == '\0')) {
      local_18 = (char *)0x0;
    }
    if (local_18 == (char *)0x0) {
      local_18 = (char *)FUN_00048944("BLKID_FILE");
    }
    if (local_18 == (char *)0x0) {
      local_18 = "/etc/blkid.tab";
    }
    uVar2 = FUN_0004920c(local_18);
    *(undefined4 *)((int)pvVar1 + 0x1c) = uVar2;
    FUN_00049f44(pvVar1);
    *param_1 = pvVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00048ad8 @ 00048ad8 size=232 ===== */

void FUN_00048ad8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_0004a5a8(param_1);
    while (iVar1 = FUN_00048908(param_1), iVar1 == 0) {
      FUN_00048da0(*param_1);
    }
    while (iVar1 = FUN_00048908(param_1 + 2), iVar1 == 0) {
      iVar1 = param_1[2];
      while (iVar2 = FUN_00048908(iVar1 + 8), iVar2 == 0) {
        FUN_0004aa84(*(int *)(iVar1 + 8) + -8);
      }
      FUN_0004aa84(iVar1);
    }
    free((void *)param_1[7]);
    free(param_1);
  }
  return;
}



/* ===== FUN_00048bc0 @ 00048bc0 size=180 ===== */

void FUN_00048bc0(undefined4 *param_1)

{
  int iVar1;
  stat sStack_70;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
    local_10 = (undefined4 *)*local_c;
    while (local_c != param_1) {
      local_14 = local_c;
      iVar1 = stat((char *)local_c[5],&sStack_70);
      if (iVar1 < 0) {
        FUN_00048da0(local_14);
        param_1[6] = param_1[6] | 4;
      }
      local_c = local_10;
      local_10 = (undefined4 *)*local_10;
    }
  }
  return;
}



/* ===== FUN_00048c74 @ 00048c74 size=60 ===== */

void FUN_00048c74(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



/* ===== FUN_00048cb0 @ 00048cb0 size=56 ===== */

void FUN_00048cb0(undefined4 *param_1)

{
  FUN_00048c74(param_1[1],*param_1);
  return;
}



/* ===== FUN_00048ce8 @ 00048ce8 size=60 ===== */

bool FUN_00048ce8(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_00048d24 @ 00048d24 size=124 ===== */

void * FUN_00048d24(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x38);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    *(void **)pvVar1 = pvVar1;
    *(void **)((int)pvVar1 + 4) = pvVar1;
    *(int *)((int)pvVar1 + 8) = (int)pvVar1 + 8;
    *(int *)((int)pvVar1 + 0xc) = (int)pvVar1 + 8;
  }
  return pvVar1;
}



/* ===== FUN_00048da0 @ 00048da0 size=132 ===== */

void FUN_00048da0(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    FUN_00048cb0(param_1);
    while (iVar1 = FUN_00048ce8((int)param_1 + 8), iVar1 == 0) {
      FUN_0004aa84(*(undefined4 *)((int)param_1 + 8));
    }
    free(*(void **)((int)param_1 + 0x14));
    free(param_1);
  }
  return;
}



/* ===== FUN_00048e24 @ 00048e24 size=40 ===== */

undefined4 FUN_00048e24(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ===== FUN_00048e4c @ 00048e4c size=128 ===== */

undefined4 * FUN_00048e4c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1a5284c;
    puVar1[1] = param_1;
    puVar1[4] = *param_1;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return puVar1;
}



/* ===== FUN_00048ecc @ 00048ecc size=300 ===== */

undefined4 FUN_00048ecc(int *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  char *__dest;
  char *__dest_00;
  undefined4 uVar2;
  
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x1a5284c)) || (param_2 == (char *)0x0)) ||
     (param_3 == (char *)0x0)) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar1 = strlen(param_2);
    __dest = malloc(sVar1 + 1);
    sVar1 = strlen(param_3);
    __dest_00 = malloc(sVar1 + 1);
    if ((__dest == (char *)0x0) || (__dest_00 == (char *)0x0)) {
      free(__dest);
      free(__dest_00);
      uVar2 = 0xffffffff;
    }
    else {
      strcpy(__dest,param_2);
      strcpy(__dest_00,param_3);
      free((void *)param_1[2]);
      free((void *)param_1[3]);
      param_1[2] = (int)__dest;
      param_1[3] = (int)__dest_00;
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_00048ff8 @ 00048ff8 size=228 ===== */

undefined4 FUN_00048ff8(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_2 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x1a5284c)) {
    uVar2 = 0xffffffff;
  }
  else {
    do {
      if (param_1[4] == param_1[1]) {
        return 0xffffffff;
      }
      iVar3 = param_1[4];
      param_1[4] = *(int *)param_1[4];
    } while ((param_1[2] != 0) && (iVar1 = FUN_0004ab98(iVar3,param_1[2],param_1[3]), iVar1 == 0));
    *param_2 = iVar3;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_000490dc @ 000490dc size=88 ===== */

void FUN_000490dc(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1a5284c)) {
    *param_1 = 0;
    free(param_1);
  }
  return;
}



/* ===== FUN_00049134 @ 00049134 size=56 ===== */

bool FUN_00049134(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_0004916c @ 0004916c size=160 ===== */

char * FUN_0004916c(char *param_1,size_t param_2)

{
  char *__dest;
  size_t local_18;
  
  if (param_1 == (char *)0x0) {
    __dest = (char *)0x0;
  }
  else {
    local_18 = param_2;
    if (param_2 == 0) {
      local_18 = strlen(param_1);
    }
    __dest = malloc(local_18 + 1);
    if (__dest != (char *)0x0) {
      strncpy(__dest,param_1,local_18);
      __dest[local_18] = '\0';
    }
  }
  return __dest;
}



/* ===== FUN_0004920c @ 0004920c size=44 ===== */

undefined4 FUN_0004920c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0004916c(param_1,0);
  return uVar1;
}



/* ===== FUN_00049238 @ 00049238 size=140 ===== */

void FUN_00049238(undefined4 param_1,int *param_2)

{
  int *__ptr;
  int iVar1;
  
  __ptr = malloc(8);
  if (__ptr != (int *)0x0) {
    iVar1 = FUN_0004920c(param_1);
    *__ptr = iVar1;
    if (*__ptr == 0) {
      free(__ptr);
    }
    else {
      __ptr[1] = *param_2;
      *param_2 = (int)__ptr;
    }
  }
  return;
}



/* ===== FUN_000492c4 @ 000492c4 size=112 ===== */

void FUN_000492c4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_c;
  
  local_c = (undefined4 *)*param_1;
  while (local_c != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)local_c[1];
    free((void *)*local_c);
    free(local_c);
    local_c = puVar1;
  }
  *param_1 = 0;
  return;
}



/* ===== FUN_00049334 @ 00049334 size=540 ===== */

void FUN_00049334(char *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 *param_6)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  stat sStack_470;
  char acStack_414 [1024];
  dirent *local_14;
  int local_10;
  DIR *local_c;
  
  local_c = opendir(param_1);
  if (local_c != (DIR *)0x0) {
    sVar1 = strlen(param_1);
    local_10 = sVar1 + 2;
    while (local_14 = readdir(local_c), local_14 != (dirent *)0x0) {
      sVar1 = strlen(local_14->d_name);
      if ((sVar1 + local_10 < 0x400) &&
         ((local_14->d_name[0] != '.' ||
          ((local_14->d_name[1] != '\0' &&
           ((local_14->d_name[1] != '.' || (local_14->d_name[2] != '\0')))))))) {
        sprintf(acStack_414,"%s/%s",param_1,local_14->d_name);
        iVar2 = stat(acStack_414,&sStack_470);
        if (-1 < iVar2) {
          iVar2 = FUN_00049134(sStack_470.st_mode);
          if ((iVar2 != 0) &&
             (param_4 == sStack_470.st_rdev._4_4_ && param_3 == (int)sStack_470.st_rdev)) {
            uVar3 = FUN_0004920c(acStack_414);
            *param_6 = uVar3;
            break;
          }
          if ((((param_5 != 0) && ((sStack_470.st_mode & 0xf000) == 0x4000)) &&
              (iVar2 = lstat(acStack_414,&sStack_470), iVar2 == 0)) &&
             ((sStack_470.st_mode & 0xf000) == 0x4000)) {
            FUN_00049238(acStack_414,param_5);
          }
        }
      }
    }
    closedir(local_c);
  }
  return;
}



/* ===== FUN_00049550 @ 00049550 size=292 ===== */

int FUN_00049550(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int *local_c;
  
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  for (local_c = &DAT_0006b684; *local_c != 0; local_c = local_c + 1) {
    FUN_00049238(*local_c,&local_14);
  }
  while (local_14 != (undefined4 *)0x0) {
    local_10 = local_14;
    uVar1 = *local_14;
    local_14 = (undefined4 *)local_14[1];
    FUN_00049334(uVar1,uVar1,param_1,param_2,&local_18,&local_1c);
    free((void *)*local_10);
    free(local_10);
    if (local_1c != 0) break;
    if (local_14 == (undefined4 *)0x0) {
      local_14 = local_18;
      local_18 = (undefined4 *)0x0;
    }
  }
  FUN_000492c4(&local_14);
  FUN_000492c4(&local_18);
  return local_1c;
}



/* ===== FUN_00049674 @ 00049674 size=112 ===== */

byte * FUN_00049674(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_000496e4 @ 000496e4 size=204 ===== */

byte * FUN_000496e4(byte *param_1)

{
  byte bVar1;
  byte *local_14;
  
  local_14 = param_1;
  while( true ) {
    while( true ) {
      bVar1 = *local_14;
      if (bVar1 == 0) {
        return local_14;
      }
      if (bVar1 != 0x5c) break;
      if (local_14[1] == 0) {
        return local_14 + 1;
      }
      local_14 = local_14 + 2;
    }
    if ((*(ushort *)(__ctype_b + (uint)bVar1 * 2) & 0x20) != 0) {
      return local_14;
    }
    if (bVar1 == 0x3c) break;
    if (bVar1 == 0x3e) {
      return local_14;
    }
    local_14 = local_14 + 1;
  }
  return local_14;
}



/* ===== FUN_000497b0 @ 000497b0 size=164 ===== */

char * FUN_000497b0(undefined4 param_1)

{
  char *__s;
  size_t sVar1;
  byte *local_c;
  
  __s = (char *)FUN_00049674(param_1);
  sVar1 = strlen(__s);
  local_c = (byte *)(__s + (sVar1 - 1));
  while ((*__s != '\0' && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    *local_c = 0;
    local_c = local_c + -1;
  }
  return __s;
}



/* ===== FUN_00049854 @ 00049854 size=180 ===== */

undefined4 FUN_00049854(undefined4 *param_1)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  
  __s1 = (char *)FUN_000497b0(*param_1);
  if ((*__s1 == '\0') || (*__s1 == '#')) {
    uVar2 = 0;
  }
  else {
    iVar1 = strncmp(__s1,"<device",7);
    if (iVar1 == 0) {
      *param_1 = __s1 + 7;
      uVar2 = 1;
    }
    else if (*__s1 == '<') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffff2;
    }
  }
  return uVar2;
}



/* ===== FUN_00049908 @ 00049908 size=128 ===== */

undefined4 FUN_00049908(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00049674(*param_1);
  *param_1 = iVar1;
  iVar1 = strncmp((char *)*param_1,"</device>",9);
  if (iVar1 == 0) {
    *param_1 = *param_1 + 9;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffff2;
  }
  return uVar2;
}



/* ===== FUN_00049988 @ 00049988 size=452 ===== */

int FUN_00049988(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  char *local_1c;
  void *local_18;
  char *local_14;
  char *local_10;
  int local_c;
  
  local_c = FUN_00049854(param_3);
  if (0 < local_c) {
    local_1c = strchr((char *)*param_3,0x3e);
    if (local_1c == (char *)0x0) {
      local_c = -0xe;
    }
    else {
      local_10 = local_1c;
      local_10 = (char *)FUN_00049674(local_1c + 1);
      local_14 = (char *)FUN_000496e4(local_10);
      if (*(char *)*param_3 == '>') {
        *param_3 = (int)local_14;
      }
      else {
        *param_3 = *param_3 + 1;
      }
      *local_1c = '\0';
      local_1c = strrchr(local_14,0x3c);
      if (((local_1c != (char *)0x0) && (iVar1 = FUN_00049908(&local_1c), -1 < iVar1)) &&
         (local_1c != (char *)0x0)) {
        *local_1c = '\0';
      }
      if ((int)local_14 - (int)local_10 < 2) {
        local_c = -0xe;
      }
      else {
        local_18 = (void *)FUN_0004916c(local_10,(int)local_14 - (int)local_10);
        if (local_18 == (void *)0x0) {
          local_c = -0xc;
        }
        else {
          iVar1 = FUN_0004b604(param_1,local_18,1);
          *param_2 = iVar1;
          if (*param_2 == 0) {
            free(local_18);
            local_c = -0xc;
          }
          else {
            free(local_18);
            local_c = 1;
          }
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_00049b4c @ 00049b4c size=420 ===== */

undefined4 FUN_00049b4c(undefined4 *param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *local_c;
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    uVar3 = 0xffffffea;
  }
  else {
    pcVar1 = strchr((char *)*param_3,0x3d);
    *param_2 = (int)pcVar1;
    if (*param_2 == 0) {
      uVar3 = 0;
    }
    else {
      *(undefined1 *)*param_2 = 0;
      uVar3 = FUN_000497b0(*param_3);
      *param_1 = uVar3;
      iVar2 = FUN_00049674(*param_2 + 1);
      *param_2 = iVar2;
      if (*(char *)*param_2 == '\"') {
        local_c = strchr((char *)(*param_2 + 1),0x22);
        if (local_c == (char *)0x0) {
          *param_3 = *param_2;
          return 0xfffffff2;
        }
        *param_2 = *param_2 + 1;
        *local_c = '\0';
        local_c = local_c + 1;
      }
      else {
        local_c = (char *)FUN_000496e4(*param_2);
        if (*local_c != '\0') {
          *local_c = '\0';
          local_c = local_c + 1;
        }
      }
      *param_3 = (int)local_c;
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* ===== FUN_00049cf0 @ 00049cf0 size=392 ===== */

int FUN_00049cf0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  ulonglong uVar4;
  char *local_1c;
  char *local_18;
  int local_14;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_14 = -0x16;
  }
  else {
    local_14 = FUN_00049b4c(&local_18,&local_1c,param_3);
    if (0 < local_14) {
      iVar1 = strcmp(local_18,"DEVNO");
      if (iVar1 == 0) {
        uVar4 = strtoull(local_1c,(char **)0x0,0);
        *(ulonglong *)(param_2 + 0x20) = uVar4;
      }
      else {
        iVar1 = strcmp(local_18,"PRI");
        if (iVar1 == 0) {
          lVar2 = strtol(local_1c,(char **)0x0,0);
          *(long *)(param_2 + 0x1c) = lVar2;
        }
        else {
          iVar1 = strcmp(local_18,"TIME");
          if (iVar1 == 0) {
            uVar4 = strtoull(local_1c,(char **)0x0,0);
            *(int *)(param_2 + 0x28) = (int)uVar4;
          }
          else {
            sVar3 = strlen(local_1c);
            local_14 = FUN_0004acf8(param_2,local_18,local_1c,sVar3);
          }
        }
      }
      if (-1 < local_14) {
        local_14 = 1;
      }
    }
  }
  return local_14;
}



/* ===== FUN_00049e78 @ 00049e78 size=204 ===== */

int FUN_00049e78(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    local_c = -0x16;
  }
  else {
    *param_2 = 0;
    local_1c = param_3;
    local_18 = param_2;
    local_14 = param_1;
    local_c = FUN_00049988(param_1,param_2,&local_1c);
    if (0 < local_c) {
      local_10 = *local_18;
      do {
        local_c = FUN_00049cf0(local_14,local_10,&local_1c);
      } while (0 < local_c);
      if (*(int *)(local_10 + 0x18) == 0) {
        FUN_00048da0(local_10);
      }
    }
  }
  return local_c;
}



/* ===== FUN_00049f44 @ 00049f44 size=700 ===== */

void FUN_00049f44(int param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  undefined1 auStack_1074 [4];
  stat sStack_1070;
  char local_1018 [4096];
  FILE *local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if ((param_1 != 0) && (local_14 = open(*(char **)(param_1 + 0x1c),0), -1 < local_14)) {
    iVar1 = fstat(local_14,&sStack_1070);
    if ((iVar1 < 0) ||
       (((sStack_1070.st_mtim.tv_sec == *(int *)(param_1 + 0x14) ||
         ((*(uint *)(param_1 + 0x18) & 4) != 0)) ||
        (local_18 = fdopen(local_14,"r"), local_18 == (FILE *)0x0)))) {
      close(local_14);
    }
    else {
      while (pcVar3 = fgets(local_1018,0x1000,local_18), pcVar3 != (char *)0x0) {
        local_c = local_c + 1;
        if (local_1018[0] != '\0') {
          sVar2 = strlen(local_1018);
          while (((local_10 = sVar2 - 1, local_1018[sVar2 - 1] == '\\' && (local_10 < 0xffe)) &&
                 (pcVar3 = fgets(local_1018 + (sVar2 - 1),0x1000 - local_10,local_18),
                 pcVar3 != (char *)0x0))) {
            sVar2 = strlen(local_1018);
            local_c = local_c + 1;
          }
          FUN_00049e78(param_1,auStack_1074,local_1018);
        }
      }
      fclose(local_18);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
      *(__time_t *)(param_1 + 0x14) = sStack_1070.st_mtim.tv_sec;
    }
  }
  return;
}



/* ===== FUN_0004a200 @ 0004a200 size=232 ===== */

undefined4 FUN_0004a200(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_c = 0;
  if (param_3 == 0) {
    local_c = 0;
  }
  else {
    local_18 = param_1;
    if ((param_1 == 0) && (iVar1 = FUN_000489d4(&local_18,0), iVar1 < 0)) {
      local_c = 0;
    }
    else {
      local_10 = FUN_0004b604(local_18,param_3,3);
      if ((local_10 != 0) && (local_14 = FUN_0004aaf4(local_10,param_2), local_14 != 0)) {
        local_c = FUN_0004920c(*(undefined4 *)(local_14 + 0x14));
      }
      if (param_1 == 0) {
        FUN_00048ad8(local_18);
      }
    }
  }
  return local_c;
}



/* ===== FUN_0004a2e8 @ 0004a2e8 size=376 ===== */

undefined4 FUN_0004a2e8(int param_1,char *param_2,void *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  void *local_2c;
  char *local_28;
  void *local_1c;
  char *local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_18 = (char *)0x0;
  local_1c = (void *)0x0;
  local_c = 0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  local_14 = param_1;
  if ((param_1 == 0) && (iVar1 = FUN_000489d4(&local_14,0), iVar1 < 0)) {
    return 0;
  }
  local_2c = param_3;
  local_28 = param_2;
  if (param_3 == (void *)0x0) {
    pcVar2 = strchr(param_2,0x3d);
    if (pcVar2 == (char *)0x0) {
      local_c = FUN_0004920c(param_2);
      goto LAB_0004a420;
    }
    FUN_0004b03c(param_2,&local_18,&local_1c);
    if ((local_18 == (char *)0x0) || (local_1c == (void *)0x0)) goto LAB_0004a420;
    local_28 = local_18;
    local_2c = local_1c;
  }
  local_10 = FUN_0004b31c(local_14,local_28,local_2c);
  if (local_10 != 0) {
    uVar3 = FUN_00048e24(local_10);
    local_c = FUN_0004920c(uVar3);
  }
LAB_0004a420:
  free(local_18);
  free(local_1c);
  if (param_1 == 0) {
    FUN_00048ad8(local_14);
  }
  return local_c;
}



/* ===== FUN_0004a460 @ 0004a460 size=60 ===== */

bool FUN_0004a460(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_0004a49c @ 0004a49c size=268 ===== */

undefined4 FUN_0004a49c(int param_1,FILE *param_2)

{
  undefined4 *local_c;
  
  if ((param_1 != 0) && (**(char **)(param_1 + 0x14) == '/')) {
    fprintf(param_2,"<device DEVNO=\"0x%04lx\" TIME=\"%ld\"",*(undefined4 *)(param_1 + 0x20),
            *(undefined4 *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x1c) != 0) {
      fprintf(param_2," PRI=\"%d\"",*(undefined4 *)(param_1 + 0x1c));
    }
    for (local_c = *(undefined4 **)(param_1 + 8); local_c != (undefined4 *)(param_1 + 8);
        local_c = (undefined4 *)*local_c) {
      fprintf(param_2," %s=\"%s\"",local_c[4],local_c[5]);
    }
    fprintf(param_2,">%s</device>\n",*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}



/* ===== FUN_0004a5a8 @ 0004a5a8 size=860 ===== */

int FUN_0004a5a8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  stat sStack_88;
  char *local_30;
  undefined4 *local_2c;
  int local_28;
  __mode_t local_24;
  char *local_20;
  int local_1c;
  FILE *local_18;
  char *local_14;
  char *local_10;
  undefined4 *local_c;
  
  local_10 = (char *)0x0;
  local_14 = (char *)0x0;
  local_18 = (FILE *)0x0;
  local_1c = 0;
  if (param_1 == (undefined4 *)0x0) {
    local_1c = -0x16;
  }
  else {
    iVar1 = FUN_0004a460(param_1);
    if ((iVar1 == 0) && ((param_1[6] & 4) != 0)) {
      if (param_1[7] == 0) {
        local_20 = "/etc/blkid.tab";
      }
      else {
        local_20 = (char *)param_1[7];
      }
      local_1c = stat(local_20,&sStack_88);
      if (((local_1c < 0) && (piVar2 = __errno_location(), *piVar2 != 2)) ||
         ((local_1c == 0 && (iVar1 = access(local_20,2), iVar1 < 0)))) {
        local_1c = 0;
      }
      else {
        if ((local_1c == 0) && ((sStack_88.st_mode & 0xf000) == 0x8000)) {
          sVar3 = strlen(local_20);
          local_10 = malloc(sVar3 + 8);
          if (local_10 != (char *)0x0) {
            local_24 = umask(0x12);
            sprintf(local_10,"%s-XXXXXX",local_20);
            local_28 = mkstemp(local_10);
            umask(local_24);
            if (-1 < local_28) {
              local_18 = fdopen(local_28,"w");
              local_14 = local_10;
            }
            fchmod(local_28,0x1a4);
          }
        }
        if (local_18 == (FILE *)0x0) {
          local_18 = fopen(local_20,"w");
          local_14 = local_20;
        }
        if (local_18 == (FILE *)0x0) {
          piVar2 = __errno_location();
          local_1c = *piVar2;
        }
        else {
          local_c = (undefined4 *)*param_1;
          while ((local_c != param_1 &&
                 ((local_2c = local_c, local_c[6] == 0 ||
                  (local_1c = FUN_0004a49c(local_c,local_18), -1 < local_1c))))) {
            local_c = (undefined4 *)*local_c;
          }
          if (-1 < local_1c) {
            param_1[6] = param_1[6] & 0xfffffffb;
            local_1c = 1;
          }
          fclose(local_18);
          if (local_14 != local_20) {
            if (local_1c < 0) {
              unlink(local_14);
            }
            else {
              sVar3 = strlen(local_20);
              local_30 = malloc(sVar3 + 5);
              if (local_30 != (char *)0x0) {
                sprintf(local_30,"%s.old",local_20);
                unlink(local_30);
                link(local_20,local_30);
                free(local_30);
              }
              iVar1 = rename(local_14,local_20);
              if (iVar1 < 0) {
                unlink(local_14);
              }
            }
          }
        }
        free(local_10);
      }
    }
    else {
      local_1c = 0;
    }
  }
  return local_1c;
}



/* ===== FUN_0004a904 @ 0004a904 size=88 ===== */

void FUN_0004a904(int *param_1,int *param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}



/* ===== FUN_0004a95c @ 0004a95c size=56 ===== */

void FUN_0004a95c(undefined4 param_1,int param_2)

{
  FUN_0004a904(param_1,*(undefined4 *)(param_2 + 4),param_2);
  return;
}



/* ===== FUN_0004a994 @ 0004a994 size=60 ===== */

void FUN_0004a994(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



/* ===== FUN_0004a9d0 @ 0004a9d0 size=56 ===== */

void FUN_0004a9d0(undefined4 *param_1)

{
  FUN_0004a994(param_1[1],*param_1);
  return;
}



/* ===== FUN_0004aa08 @ 0004aa08 size=124 ===== */

void * FUN_0004aa08(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x1c);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    *(void **)pvVar1 = pvVar1;
    *(void **)((int)pvVar1 + 4) = pvVar1;
    *(int *)((int)pvVar1 + 8) = (int)pvVar1 + 8;
    *(int *)((int)pvVar1 + 0xc) = (int)pvVar1 + 8;
  }
  return pvVar1;
}



/* ===== FUN_0004aa84 @ 0004aa84 size=112 ===== */

void FUN_0004aa84(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_0004a9d0(param_1);
    FUN_0004a9d0((int)param_1 + 8);
    free(*(void **)((int)param_1 + 0x10));
    free(*(void **)((int)param_1 + 0x14));
    free(param_1);
  }
  return;
}



/* ===== FUN_0004aaf4 @ 0004aaf4 size=164 ===== */

undefined4 * FUN_0004aaf4(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *local_c;
  
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    for (local_c = *(undefined4 **)(param_1 + 8); local_c != (undefined4 *)(param_1 + 8);
        local_c = (undefined4 *)*local_c) {
      iVar1 = strcmp((char *)local_c[4],param_2);
      if (iVar1 == 0) {
        return local_c;
      }
    }
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0004ab98 @ 0004ab98 size=176 ===== */

uint FUN_0004ab98(int param_1,int param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0004aaf4(param_1,param_2);
    if (param_3 == (char *)0x0) {
      uVar2 = (uint)(iVar1 != 0);
    }
    else if ((iVar1 == 0) || (iVar1 = strcmp(*(char **)(iVar1 + 0x14),param_3), iVar1 != 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== FUN_0004ac48 @ 0004ac48 size=176 ===== */

undefined4 * FUN_0004ac48(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_c = (undefined4 *)0x0;
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_10 = *(undefined4 **)(param_1 + 8);
    while ((puVar2 = local_c, local_10 != (undefined4 *)(param_1 + 8) &&
           (iVar1 = strcmp((char *)local_10[4],param_2), puVar2 = local_10, iVar1 != 0))) {
      local_10 = (undefined4 *)*local_10;
    }
  }
  return puVar2;
}



/* ===== FUN_0004acf8 @ 0004acf8 size=836 ===== */

undefined4 FUN_0004acf8(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  char *__s2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_10;
  int local_c;
  
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    return 0xffffffea;
  }
  __s2 = (char *)FUN_0004916c(param_3,param_4);
  if ((__s2 == (char *)0x0) && (param_3 != 0)) {
    return 0xfffffff4;
  }
  iVar1 = strcmp(param_2,"TYPE");
  if (iVar1 == 0) {
    local_10 = (undefined4 *)(param_1 + 0x18);
  }
  else {
    iVar1 = strcmp(param_2,"LABEL");
    if (iVar1 == 0) {
      local_10 = (undefined4 *)(param_1 + 0x30);
    }
    else {
      iVar1 = strcmp(param_2,"UUID");
      if (iVar1 == 0) {
        local_10 = (undefined4 *)(param_1 + 0x34);
      }
    }
  }
  iVar1 = FUN_0004aaf4(param_1,param_2);
  if (param_3 == 0) {
    if (iVar1 != 0) {
      FUN_0004aa84(iVar1);
    }
  }
  else if (iVar1 == 0) {
    iVar1 = FUN_0004aa08();
    if (iVar1 == 0) goto LAB_0004aff8;
    uVar3 = FUN_0004920c(param_2);
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    *(char **)(iVar1 + 0x14) = __s2;
    *(int *)(iVar1 + 0x18) = param_1;
    FUN_0004a95c(iVar1,param_1 + 8);
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_0004af98;
    local_c = FUN_0004ac48(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(iVar1 + 0x10));
    if (local_c == 0) {
      local_c = FUN_0004aa08();
      if (local_c == 0) {
LAB_0004aff8:
        if (iVar1 == 0) {
          free(__s2);
        }
        else {
          FUN_0004aa84(iVar1);
        }
        if (local_c != 0) {
          FUN_0004aa84(local_c);
        }
        return 0xfffffff4;
      }
      uVar3 = FUN_0004920c(param_2);
      *(undefined4 *)(local_c + 0x10) = uVar3;
      if (*(int *)(local_c + 0x10) == 0) goto LAB_0004aff8;
      FUN_0004a95c(local_c,*(int *)(param_1 + 0x10) + 8);
    }
    FUN_0004a95c(iVar1 + 8,local_c + 8);
  }
  else {
    iVar2 = strcmp(*(char **)(iVar1 + 0x14),__s2);
    if (iVar2 == 0) {
      free(__s2);
      return 0;
    }
    free(*(void **)(iVar1 + 0x14));
    *(char **)(iVar1 + 0x14) = __s2;
  }
LAB_0004af98:
  if (local_10 != (undefined4 *)0x0) {
    *local_10 = __s2;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(uint *)(*(int *)(param_1 + 0x10) + 0x18) = *(uint *)(*(int *)(param_1 + 0x10) + 0x18) | 4;
  }
  return 0;
}



/* ===== FUN_0004b03c @ 0004b03c size=340 ===== */

undefined4 FUN_0004b03c(char *param_1,undefined4 *param_2,int *param_3)

{
  char *pcVar1;
  void *__ptr;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *local_c;
  
  if ((param_1 == (char *)0x0) || (pcVar1 = strchr(param_1,0x3d), pcVar1 == (char *)0x0)) {
    return 0xffffffff;
  }
  __ptr = (void *)FUN_0004920c(param_1);
  if (__ptr == (void *)0x0) {
    return 0xffffffff;
  }
  puVar4 = (undefined1 *)((int)__ptr + ((int)pcVar1 - (int)param_1));
  pbVar3 = puVar4 + 1;
  *puVar4 = 0;
  if ((*pbVar3 == 0x22) || (local_c = pbVar3, *pbVar3 == 0x27)) {
    local_c = puVar4 + 2;
    pcVar1 = strrchr((char *)local_c,(uint)*pbVar3);
    if (pcVar1 == (char *)0x0) goto LAB_0004b178;
    *pcVar1 = '\0';
  }
  iVar2 = FUN_0004920c(local_c);
  if (iVar2 != 0) {
    *param_2 = __ptr;
    *param_3 = iVar2;
    return 0;
  }
LAB_0004b178:
  free(__ptr);
  return 0xffffffff;
}



/* ===== FUN_0004b190 @ 0004b190 size=104 ===== */

undefined4 * FUN_0004b190(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1a5284c;
    puVar1[1] = param_1;
    puVar1[2] = *(undefined4 *)(param_1 + 8);
  }
  return puVar1;
}



/* ===== FUN_0004b1f8 @ 0004b1f8 size=204 ===== */

undefined4 FUN_0004b1f8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  if (((param_1 == (int *)0x0) || (*param_1 != 0x1a5284c)) || (param_1[2] == param_1[1] + 8)) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = param_1[2];
    *param_2 = *(undefined4 *)(iVar2 + 0x10);
    *param_3 = *(undefined4 *)(iVar2 + 0x14);
    param_1[2] = *(int *)param_1[2];
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0004b2c4 @ 0004b2c4 size=88 ===== */

void FUN_0004b2c4(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1a5284c)) {
    *param_1 = 0;
    free(param_1);
  }
  return;
}



/* ===== FUN_0004b31c @ 0004b31c size=544 ===== */

int FUN_0004b31c(int param_1,int param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_14;
  int local_10;
  int local_c;
  
  bVar1 = false;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (char *)0x0)) {
    FUN_00049f44(param_1);
    do {
      while( true ) {
        do {
          local_10 = -1;
          local_c = 0;
          iVar2 = FUN_0004ac48(param_1,param_2);
          if (iVar2 != 0) {
            for (local_14 = *(undefined4 **)(iVar2 + 8); local_14 != (undefined4 *)(iVar2 + 8);
                local_14 = (undefined4 *)*local_14) {
              iVar3 = strcmp((char *)local_14[3],param_3);
              if (((iVar3 == 0) && (local_10 < *(int *)(local_14[4] + 0x1c))) &&
                 (iVar3 = access(*(char **)(local_14[4] + 0x14),0), iVar3 == 0)) {
                local_c = local_14[4];
                local_10 = *(int *)(local_c + 0x1c);
              }
            }
          }
        } while (((local_c != 0) && ((*(uint *)(local_c + 0x2c) & 1) == 0)) &&
                ((local_c = FUN_00050790(param_1,local_c), local_c == 0 ||
                 ((local_c != 0 && ((*(uint *)(local_c + 0x2c) & 1) != 0))))));
        if ((local_c != 0) || (bVar1)) break;
        iVar2 = FUN_0004ca4c(param_1);
        if (iVar2 < 0) {
          return 0;
        }
        bVar1 = true;
      }
      if (local_c != 0) {
        return local_c;
      }
      if ((*(uint *)(param_1 + 0x18) & 2) != 0) {
        return 0;
      }
      iVar2 = FUN_0004c9f4(param_1);
    } while (-1 < iVar2);
  }
  return 0;
}



/* ===== FUN_0004b53c @ 0004b53c size=88 ===== */

void FUN_0004b53c(int *param_1,int *param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}



/* ===== FUN_0004b594 @ 0004b594 size=56 ===== */

void FUN_0004b594(undefined4 param_1,int param_2)

{
  FUN_0004b53c(param_1,*(undefined4 *)(param_2 + 4),param_2);
  return;
}



/* ===== FUN_0004b5cc @ 0004b5cc size=56 ===== */

bool FUN_0004b5cc(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_0004b604 @ 0004b604 size=956 ===== */

undefined4 * FUN_0004b604(undefined4 *param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_c = (undefined4 *)0x0;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (char *)0x0)) {
    return (undefined4 *)0x0;
  }
  local_10 = (undefined4 *)*param_1;
  do {
    if (local_10 == param_1) {
LAB_0004b6a8:
      if ((local_c == (undefined4 *)0x0) && ((param_3 & 1) != 0)) {
        iVar1 = access(param_2,0);
        if (iVar1 < 0) {
          return (undefined4 *)0x0;
        }
        local_c = (undefined4 *)FUN_00048d24();
        if (local_c == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        local_c[10] = 0x80000000;
        uVar2 = FUN_0004920c(param_2);
        local_c[5] = uVar2;
        local_c[4] = param_1;
        FUN_0004b594(local_c,param_1);
        param_1[6] = param_1[6] | 4;
      }
      if ((((param_3 & 2) != 0) &&
          (local_c = (undefined4 *)FUN_00050790(param_1,local_c), local_c != (undefined4 *)0x0)) &&
         ((local_c[0xb] & 1) != 0)) {
        local_10 = (undefined4 *)*param_1;
        local_14 = (undefined4 *)*local_10;
        while (local_10 != param_1) {
          if ((((((local_10[0xb] & 1) == 0) && (local_c[6] != 0)) &&
               ((local_10[6] != 0 &&
                (iVar1 = strcmp((char *)local_c[6],(char *)local_10[6]), iVar1 == 0)))) &&
              (((local_c[0xc] == 0 || (local_10[0xc] == 0)) ||
               (iVar1 = strcmp((char *)local_c[0xc],(char *)local_10[0xc]), iVar1 == 0)))) &&
             (((((((local_c[0xd] == 0 || (local_10[0xd] == 0)) ||
                  (iVar1 = strcmp((char *)local_c[0xd],(char *)local_10[0xd]), iVar1 == 0)) &&
                 ((local_c[0xc] == 0 || (local_10[0xc] != 0)))) &&
                ((local_c[0xc] != 0 || (local_10[0xc] == 0)))) &&
               ((local_c[0xd] == 0 || (local_10[0xd] != 0)))) &&
              (((local_c[0xd] != 0 || (local_10[0xd] == 0)) &&
               ((iVar1 = FUN_00050790(param_1,local_10), iVar1 != 0 &&
                ((*(uint *)(iVar1 + 0x2c) & 1) == 0)))))))) {
            FUN_00048da0(iVar1);
          }
          local_10 = local_14;
          local_14 = (undefined4 *)*local_14;
        }
      }
      return local_c;
    }
    iVar1 = strcmp((char *)local_10[5],param_2);
    if (iVar1 == 0) {
      local_c = local_10;
      goto LAB_0004b6a8;
    }
    local_10 = (undefined4 *)*local_10;
  } while( true );
}



/* ===== FUN_0004b9c0 @ 0004b9c0 size=440 ===== */

int FUN_0004b9c0(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char acStack_11c [256];
  dirent *local_1c;
  DIR *local_18;
  dirent *local_14;
  DIR *local_10;
  int local_c;
  
  local_c = 1;
  local_10 = opendir("/sys/block");
  if (local_10 == (DIR *)0x0) {
    local_c = 0;
  }
  else {
    do {
      do {
        do {
          local_14 = readdir(local_10);
          if (local_14 == (dirent *)0x0) goto LAB_0004bb60;
          iVar1 = strcmp(local_14->d_name,".");
        } while ((((iVar1 == 0) || (iVar1 = strcmp(local_14->d_name,".."), iVar1 == 0)) ||
                 (iVar1 = strcmp(local_14->d_name,param_1), iVar1 == 0)) ||
                ((iVar1 = strncmp(local_14->d_name,"dm-",3), iVar1 != 0 ||
                 (sVar2 = strlen(local_14->d_name), 0xe0 < sVar2))));
        sprintf(acStack_11c,"/sys/block/%s/slaves",local_14->d_name);
        local_18 = opendir(acStack_11c);
      } while (local_18 == (DIR *)0x0);
      do {
        local_1c = readdir(local_18);
        if (local_1c == (dirent *)0x0) goto LAB_0004bb2c;
        iVar1 = strcmp(local_1c->d_name,param_1);
      } while (iVar1 != 0);
      local_c = 0;
LAB_0004bb2c:
      closedir(local_18);
    } while (local_c != 0);
LAB_0004bb60:
    closedir(local_10);
  }
  return local_c;
}



/* ===== FUN_0004bb78 @ 0004bb78 size=240 ===== */

undefined4 FUN_0004bb78(undefined4 param_1)

{
  char *pcVar1;
  char acStack_215 [257];
  char acStack_114 [256];
  size_t local_14;
  FILE *local_10;
  undefined4 local_c;
  
  local_c = 0;
  snprintf(acStack_114,0x100,"/sys/block/%s/dm/name",param_1);
  local_10 = fopen(acStack_114,"r");
  if (local_10 == (FILE *)0x0) {
    local_c = 0;
  }
  else {
    pcVar1 = fgets(acStack_215 + 1,0x100,local_10);
    if (pcVar1 != (char *)0x0) {
      local_14 = strlen(acStack_215 + 1);
      if (1 < local_14) {
        acStack_215[local_14] = '\0';
        snprintf(acStack_114,0x100,"/dev/mapper/%s",acStack_215 + 1);
        local_c = FUN_0004920c(acStack_114);
      }
    }
    fclose(local_10);
  }
  return local_c;
}



/* ===== FUN_0004bc68 @ 0004bc68 size=1096 ===== */

void FUN_0004bc68(undefined4 *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  stat sStack_178;
  char acStack_120 [256];
  void *local_20;
  undefined4 *local_1c;
  int *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  
  local_20 = (void *)0x0;
  local_10 = (undefined4 *)*param_1;
  local_14 = (undefined4 *)*local_10;
  while (local_c = 0, local_10 != param_1) {
    local_1c = local_10;
    if (param_4 == local_10[9] && param_3 == local_10[8]) {
      if ((param_6 != 0) && (iVar1 = access((char *)local_10[5],0), iVar1 == 0)) {
        return;
      }
      local_c = FUN_00050790(param_1,local_1c);
      if ((local_c != 0) && ((*(uint *)(local_c + 0x2c) & 1) != 0)) break;
    }
    local_10 = local_14;
    local_14 = (undefined4 *)*local_14;
  }
  if ((local_c != 0) && (param_4 == *(int *)(local_c + 0x24) && param_3 == *(int *)(local_c + 0x20))
     ) goto LAB_0004bfd8;
  iVar1 = strncmp(param_2,"dm-",3);
  if ((iVar1 == 0) && ((*(ushort *)(__ctype_b + (uint)(byte)param_2[3] * 2) & 8) != 0)) {
    uVar2 = FUN_0004bb78(param_2);
    local_20 = (void *)uVar2;
    if (local_20 == (void *)0x0) {
      FUN_00049334("/dev/mapper",(int)((ulonglong)uVar2 >> 0x20),param_3,param_4,0,&local_20);
    }
    if (local_20 == (void *)0x0) goto LAB_0004be28;
  }
  else {
LAB_0004be28:
    for (local_18 = &DAT_0006b694; *local_18 != 0; local_18 = local_18 + 1) {
      sprintf(acStack_120,"%s/%s",*local_18,param_2);
      local_c = FUN_0004b604(param_1,acStack_120,0);
      if ((local_c != 0) &&
         (param_4 == *(int *)(local_c + 0x24) && param_3 == *(int *)(local_c + 0x20)))
      goto LAB_0004bfd8;
      iVar1 = stat(acStack_120,&sStack_178);
      if ((iVar1 == 0) &&
         ((iVar1 = FUN_0004b5cc(sStack_178.st_mode), iVar1 != 0 &&
          (param_4 == sStack_178.st_rdev._4_4_ && param_3 == (int)sStack_178.st_rdev)))) {
        local_20 = (void *)FUN_0004920c(acStack_120);
        goto LAB_0004bfa4;
      }
    }
    if (local_20 == (void *)0x0) {
      local_20 = (void *)FUN_0004bb78(param_2);
    }
    if (local_20 == (void *)0x0) {
      FUN_00049334("/dev/mapper");
    }
    if ((local_20 == (void *)0x0) &&
       (local_20 = (void *)FUN_00049550(param_3,param_4), local_20 == (void *)0x0)) {
      return;
    }
  }
LAB_0004bfa4:
  local_c = FUN_0004b604(param_1,local_20,3);
  free(local_20);
LAB_0004bfd8:
  if (local_c != 0) {
    if (param_5 == 0) {
      iVar1 = strncmp(*(char **)(local_c + 0x14),"/dev/mapper/",0xb);
      if (iVar1 == 0) {
        *(undefined4 *)(local_c + 0x1c) = 0x28;
        iVar1 = FUN_0004b9c0(param_2);
        if (iVar1 != 0) {
          *(int *)(local_c + 0x1c) = *(int *)(local_c + 0x1c) + 5;
        }
      }
      else {
        iVar1 = strncmp(param_2,"md",2);
        if (iVar1 == 0) {
          *(undefined4 *)(local_c + 0x1c) = 10;
        }
      }
    }
    else {
      *(int *)(local_c + 0x1c) = param_5;
    }
  }
  return;
}



/* ===== FUN_0004c0b0 @ 0004c0b0 size=224 ===== */

ulonglong FUN_0004c0b0(char *param_1)

{
  int iVar1;
  char *pcVar2;
  uint local_41c;
  uint local_418;
  char acStack_414 [1024];
  FILE *local_14;
  ulonglong local_10;
  
  local_10 = 0;
  local_14 = fopen(param_1,"r");
  if (local_14 == (FILE *)0x0) {
    local_10 = 0;
  }
  else {
    do {
      pcVar2 = fgets(acStack_414,0x400,local_14);
      if (pcVar2 == (char *)0x0) goto LAB_0004c170;
      iVar1 = sscanf(acStack_414,"device: %d:%d",&local_418,&local_41c);
    } while (iVar1 != 2);
    local_10 = gnu_dev_makedev(local_418,local_41c);
LAB_0004c170:
    fclose(local_14);
  }
  return local_10;
}



/* ===== FUN_0004c190 @ 0004c190 size=600 ===== */

void FUN_0004c190(undefined4 param_1,undefined4 param_2)

{
  DIR *__dirp;
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  DIR *__dirp_00;
  size_t sVar4;
  char *__s;
  dirent *pdVar5;
  char *__s1;
  undefined8 uVar6;
  
  __dirp = opendir("/proc/lvm/VGs");
  if (__dirp != (DIR *)0x0) {
    while (pdVar5 = readdir(__dirp), pdVar5 != (dirent *)0x0) {
      __s1 = pdVar5->d_name;
      iVar1 = strcmp(__s1,".");
      if ((iVar1 != 0) && (iVar1 = strcmp(__s1,".."), iVar1 != 0)) {
        sVar2 = strlen(__s1);
        pcVar3 = malloc(sVar2 + 0x15);
        if (pcVar3 == (char *)0x0) break;
        sprintf(pcVar3,"%s/%s/LVs","/proc/lvm/VGs",__s1);
        __dirp_00 = opendir(pcVar3);
        free(pcVar3);
        if (__dirp_00 != (DIR *)0x0) {
          while (pdVar5 = readdir(__dirp_00), pdVar5 != (dirent *)0x0) {
            pcVar3 = pdVar5->d_name;
            iVar1 = strcmp(pcVar3,".");
            if ((iVar1 != 0) && (iVar1 = strcmp(pcVar3,".."), iVar1 != 0)) {
              sVar2 = strlen(__s1);
              sVar4 = strlen(pcVar3);
              __s = malloc(sVar2 + sVar4 + 0x15);
              if (__s == (char *)0x0) {
                closedir(__dirp_00);
                goto LAB_0004c3d0;
              }
              sprintf(__s,"%s/%s/LVs/%s","/proc/lvm/VGs",__s1,pcVar3);
              uVar6 = FUN_0004c0b0(__s);
              sprintf(__s,"%s/%s",__s1,pcVar3);
              FUN_0004bc68(param_1,__s,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x14,param_2);
              free(__s);
            }
          }
          closedir(__dirp_00);
        }
      }
    }
LAB_0004c3d0:
    closedir(__dirp);
  }
  return;
}



/* ===== FUN_0004c3e8 @ 0004c3e8 size=268 ===== */

int FUN_0004c3e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_f8 [112];
  undefined1 auStack_88 [4];
  uint local_84;
  uint local_80;
  char acStack_7c [100];
  FILE *local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = fopen("/proc/evms/volumes","r");
  if (local_18 == (FILE *)0x0) {
    local_14 = 0;
  }
  else {
    while (pcVar2 = fgets(acStack_7c,100,local_18), pcVar2 != (char *)0x0) {
      iVar1 = sscanf(acStack_7c," %d %d %d %*s %*s %[^\n ]",&local_80,&local_84,auStack_88,
                     auStack_f8);
      if (iVar1 == 4) {
        uVar3 = gnu_dev_makedev(local_80,local_84);
        FUN_0004bc68(param_1,auStack_f8,(int)uVar3,(int)(uVar3 >> 0x20),0x1e,param_2);
        local_14 = local_14 + 1;
      }
    }
    fclose(local_18);
  }
  return local_14;
}



/* ===== FUN_0004c4f4 @ 0004c4f4 size=1280 ===== */

undefined4 FUN_0004c4f4(undefined4 *param_1,undefined4 param_2)

{
  time_t tVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  size_t local_558 [2];
  uint local_550;
  int iStack_54c;
  uint local_548;
  uint local_544;
  undefined8 uStack_540;
  undefined1 *local_52c [2];
  undefined1 auStack_524 [128];
  undefined1 auStack_4a4 [128];
  char acStack_424 [1024];
  undefined4 *local_24;
  FILE *local_20;
  uint local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  uint local_10;
  char *local_c;
  
  local_c = (char *)0x0;
  local_558[0] = 0;
  local_558[1] = 0;
  local_10 = 0;
  local_1c = 0;
  local_52c[0] = auStack_4a4;
  local_52c[1] = auStack_524;
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0xffffffea;
  }
  else if (((param_1[6] & 2) == 0) || (tVar1 = time((time_t *)0x0), 199 < tVar1 - param_1[4])) {
    FUN_00049f44(param_1);
    FUN_0004c3e8(param_1,param_2);
    FUN_0004c190(param_1,param_2);
    local_20 = fopen("/proc/partitions","r");
    if (local_20 == (FILE *)0x0) {
      uVar5 = 0xfffffff7;
    }
    else {
      while (pcVar4 = fgets(acStack_424,0x400,local_20), pcVar4 != (char *)0x0) {
        local_1c = local_10;
        local_10 = local_10 ^ 1;
        local_c = local_52c[local_10];
        iVar2 = sscanf(acStack_424," %d %d %llu %128[^\n ]",&local_544,&local_548,&local_550,local_c
                      );
        if (iVar2 == 4) {
          uVar6 = gnu_dev_makedev(local_544,local_548);
          (&uStack_540)[local_10] = uVar6;
          sVar3 = strlen(local_c);
          local_558[local_10] = sVar3;
          if ((*(ushort *)(__ctype_b + (uint)(byte)local_c[local_558[local_10] - 1] * 2) & 8) != 0)
          {
            if (iStack_54c != 0 || 1 < local_550) {
              FUN_0004bc68(param_1,local_c,*(undefined4 *)(&uStack_540 + local_10),
                           *(undefined4 *)((int)&uStack_540 + local_10 * 8 + 4),0,param_2);
            }
            local_558[local_10] = 0;
          }
          if ((local_558[local_1c] != 0) &&
             (iVar2 = strncmp(local_52c[local_1c],local_c,local_558[local_1c]), iVar2 == 0)) {
            local_14 = (undefined4 *)*param_1;
            local_18 = *(undefined4 **)*param_1;
            while (local_14 != param_1) {
              local_24 = local_14;
              if (local_14[9] == *(int *)((int)&uStack_540 + local_1c * 8 + 4) &&
                  local_14[8] == *(int *)(&uStack_540 + local_1c)) {
                FUN_00048da0(local_14);
                param_1[6] = param_1[6] | 4;
                break;
              }
              local_14 = local_18;
              local_18 = (undefined4 *)*local_18;
            }
            local_558[local_1c] = 0;
          }
          if ((local_558[local_1c] != 0) &&
             (iVar2 = strncmp(local_52c[local_1c],local_c,local_558[local_1c]), iVar2 != 0)) {
            FUN_0004bc68(param_1,local_52c[local_1c],*(undefined4 *)(&uStack_540 + local_1c),
                         *(undefined4 *)((int)&uStack_540 + local_1c * 8 + 4),0,param_2);
            local_558[local_1c] = 0;
          }
        }
      }
      if (local_558[local_10] != 0) {
        FUN_0004bc68(param_1,local_c,*(undefined4 *)(&uStack_540 + local_10),
                     *(undefined4 *)((int)&uStack_540 + local_10 * 8 + 4),0,param_2);
      }
      fclose(local_20);
      FUN_0004a5a8(param_1);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== FUN_0004c9f4 @ 0004c9f4 size=88 ===== */

undefined4 FUN_0004c9f4(int param_1)

{
  undefined4 uVar1;
  time_t tVar2;
  
  uVar1 = FUN_0004c4f4(param_1,0);
  tVar2 = time((time_t *)0x0);
  *(time_t *)(param_1 + 0x10) = tVar2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  return uVar1;
}



/* ===== FUN_0004ca4c @ 0004ca4c size=48 ===== */

undefined4 FUN_0004ca4c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0004c4f4(param_1,1);
  return uVar1;
}



/* ===== FUN_0004ca80 @ 0004ca80 size=76 ===== */

ushort FUN_0004ca80(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}



/* ===== FUN_0004cacc @ 0004cacc size=84 ===== */

uint FUN_0004cacc(uint param_1)

{
  return param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}



/* ===== FUN_0004cb20 @ 0004cb20 size=160 ===== */

char * FUN_0004cb20(char *param_1,int param_2)

{
  char *local_c;
  
  for (local_c = param_1 + param_2 + -1;
      ((*local_c == ' ' || (*local_c == '\0')) && (param_1 <= local_c)); local_c = local_c + -1) {
  }
  if (local_c < param_1) {
    local_c = (char *)0x0;
  }
  else {
    local_c = local_c + (1 - (int)param_1);
  }
  return local_c;
}



/* ===== FUN_0004cbc0 @ 0004cbc0 size=536 ===== */

int FUN_0004cbc0(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  void *pvVar1;
  __off_t _Var2;
  uint uVar3;
  int extraout_r1;
  int iVar4;
  bool bVar5;
  int local_14;
  
  iVar4 = param_4 + (uint)CARRY4(param_3,param_5);
  bVar5 = 0x11000 < param_3 + param_5;
  if ((int)-(iVar4 + (uint)bVar5) < 0 != (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)bVar5))) {
    if ((uint)param_1[6] < param_5) {
      pvVar1 = realloc((void *)param_1[5],param_5);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      param_1[5] = (int)pvVar1;
      param_1[6] = param_5;
    }
    FUN_00050f80(*param_1,*param_1,param_3,param_4,0);
    if (extraout_r1 < 0) {
      return 0;
    }
    uVar3 = read(*param_1,(void *)param_1[5],param_5);
    if (uVar3 != param_5) {
      return 0;
    }
    return param_1[5];
  }
  if (param_1[3] == 0) {
    pvVar1 = malloc(0x11000);
    param_1[3] = (int)pvVar1;
    if (param_1[3] == 0) {
      return 0;
    }
    _Var2 = lseek(*param_1,0,0);
    if (_Var2 < 0) {
      return 0;
    }
    local_14 = read(*param_1,(void *)param_1[3],0x11000);
    if (local_14 < 0) {
      local_14 = 0;
    }
    param_1[4] = local_14;
  }
  param_4 = param_4 + (uint)CARRY4(param_3,param_5);
  bVar5 = (uint)param_1[4] < param_3 + param_5;
  if ((int)-(param_4 + (uint)bVar5) < 0 == (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)bVar5)))
  {
    iVar4 = param_1[3] + param_3;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



/* ===== FUN_0004cdd8 @ 0004cdd8 size=536 ===== */

undefined4 FUN_0004cdd8(int param_1,int *param_2)

{
  ssize_t sVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_101c [12];
  undefined1 auStack_1010 [8];
  int local_1008;
  int local_fe8;
  int local_fe4;
  int local_fe0;
  undefined1 *local_1c;
  int local_18;
  int iStack_14;
  
  if (param_1 < 0) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar5 = FUN_00050d40(param_1);
    uVar4 = (uint)uVar5 & 0xffff0000;
    local_18 = uVar4 - 0x10000;
    iStack_14 = (int)((ulonglong)uVar5 >> 0x20) - (uint)(uVar4 < 0x10000);
    FUN_00050f80(param_1,auStack_1010,local_18,iStack_14,0);
    if ((extraout_r1 < 0) || (sVar1 = read(param_1,auStack_101c,0x1000), sVar1 != 0x1000)) {
      uVar3 = 0xfffffffb;
    }
    else {
      iVar2 = memcmp(&DAT_00059f74,auStack_101c,4);
      if ((iVar2 == 0) || (iVar2 = memcmp(&DAT_00059f7c,auStack_101c,4), iVar2 == 0)) {
        if (param_2 == (int *)0x0) {
          uVar3 = 0;
        }
        else {
          *(undefined1 *)param_2 = 0;
          local_1c = auStack_101c;
          if ((((local_1008 != 0) || (local_fe8 != 0)) || (local_fe4 != 0)) || (local_fe0 != 0)) {
            *param_2 = local_1008;
            memcpy(param_2 + 1,&local_fe8,0xc);
          }
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0xffffffea;
      }
    }
  }
  return uVar3;
}



/* ===== FUN_0004cff0 @ 0004cff0 size=116 ===== */

void FUN_0004cff0(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  undefined1 auStack_30 [40];
  
  iVar1 = FUN_00051084(param_2);
  if (iVar1 == 0) {
    FUN_00051218(param_2,auStack_30);
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_00059f84;
    }
    FUN_0004acf8(param_1,param_3,auStack_30,0x25);
  }
  return;
}



/* ===== FUN_0004d064 @ 0004d064 size=292 ===== */

void FUN_0004d064(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x78) != '\0') {
    local_c = param_3 + 0x78;
  }
  FUN_0004acf8(param_1,"LABEL",local_c,0x10);
  FUN_0004cff0(param_1,param_3 + 0x68,0);
  if (((*(uint *)(param_3 + 0x5c) & 4) != 0) && (iVar1 = FUN_00051084(param_3 + 0xd0), iVar1 == 0))
  {
    FUN_0004cff0(param_1,param_3 + 0xd0,"EXT_JOURNAL");
  }
  iVar1 = strcmp((char *)*param_2,"ext2");
  if ((iVar1 != 0) && ((*(uint *)(param_3 + 0x60) & 0xffffffed) == 0)) {
    FUN_0004acf8(param_1,"SEC_TYPE",&DAT_00059fa0,5);
  }
  return;
}



/* ===== FUN_0004d188 @ 0004d188 size=508 ===== */

undefined4 FUN_0004d188(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  byte local_64 [80];
  char *local_14;
  FILE *local_10;
  byte *local_c;
  
  local_10 = fopen("/proc/filesystems","r");
  if (local_10 == (FILE *)0x0) {
    uVar3 = 0;
  }
  else {
    do {
      iVar2 = feof(local_10);
      if ((iVar2 != 0) || (pcVar1 = fgets((char *)local_64,0x50,local_10), pcVar1 == (char *)0x0)) {
        fclose(local_10);
        return 0;
      }
      local_c = local_64;
      if ((*(ushort *)(__ctype_b + (uint)local_64[0] * 2) & 0x20) == 0) {
        while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) == 0))) {
          local_c = local_c + 1;
        }
      }
      while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
        local_c = local_c + 1;
      }
      local_14 = strchr((char *)local_c,10);
      if (local_14 != (char *)0x0) {
        *local_14 = '\0';
      }
      local_14 = strchr((char *)local_c,9);
      if (local_14 != (char *)0x0) {
        *local_14 = '\0';
      }
      local_14 = strchr((char *)local_c,0x20);
      if (local_14 != (char *)0x0) {
        *local_14 = '\0';
      }
      iVar2 = strcmp(param_1,(char *)local_c);
    } while (iVar2 != 0);
    fclose(local_10);
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== FUN_0004d384 @ 0004d384 size=500 ===== */

undefined4 FUN_0004d384(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char acStack_59c [1024];
  utsname uStack_19c;
  size_t local_14;
  FILE *local_10;
  char *local_c;
  
  iVar1 = uname(&uStack_19c);
  if (iVar1 == 0) {
    snprintf(acStack_59c,0x400,"/lib/modules/%s/modules.dep",uStack_19c.release);
    local_10 = fopen(acStack_59c,"r");
    if (local_10 == (FILE *)0x0) {
      uVar3 = 0;
    }
    else {
      local_14 = strlen(param_1);
      do {
        do {
          iVar1 = feof(local_10);
          if ((iVar1 != 0) || (pcVar2 = fgets(acStack_59c,0x400,local_10), pcVar2 == (char *)0x0)) {
            fclose(local_10);
            return 0;
          }
          local_c = strchr(acStack_59c,0x3a);
        } while (local_c == (char *)0x0);
        *local_c = '\0';
        local_c = strrchr(acStack_59c,0x2f);
        if (local_c == (char *)0x0) {
          local_c = acStack_59c;
        }
        else {
          local_c = local_c + 1;
        }
        iVar1 = strncmp(local_c,param_1,local_14);
      } while ((iVar1 != 0) ||
              ((iVar1 = strcmp(local_c + local_14,".ko"), iVar1 != 0 &&
               (iVar1 = strcmp(local_c + local_14,".ko.gz"), iVar1 != 0))));
      fclose(local_10);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0004d578 @ 0004d578 size=356 ===== */

int FUN_0004d578(void)

{
  int iVar1;
  long lVar2;
  char *local_1a4;
  utsname uStack_1a0;
  int local_14;
  long local_10;
  char *local_c;
  
  iVar1 = DAT_0006c070;
  if (DAT_0006c070 < 1) {
    iVar1 = uname(&uStack_1a0);
    if (iVar1 == 0) {
      local_c = uStack_1a0.release;
      local_10 = strtol(local_c,&local_1a4,10);
      if ((local_c == local_1a4) || (*local_1a4 != '.')) {
        iVar1 = 0;
      }
      else {
        local_c = local_1a4 + 1;
        local_14 = strtol(local_c,&local_1a4,10);
        if ((local_c == local_1a4) || (*local_1a4 != '.')) {
          iVar1 = 0;
        }
        else {
          local_c = local_1a4 + 1;
          lVar2 = strtol(local_c,&local_1a4,10);
          if (local_c == local_1a4) {
            iVar1 = 0;
          }
          else {
            DAT_0006c070 = (local_10 * 0x100 + local_14) * 0x100 + lVar2;
            iVar1 = DAT_0006c070;
          }
        }
      }
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0004d6dc @ 0004d6dc size=200 ===== */

int FUN_0004d6dc(void)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  if ((DAT_0006c074 == -1) && (4 < tVar1 - DAT_0006c2f0)) {
    DAT_0006c2f0 = tVar1;
    iVar2 = FUN_0004d188(&DAT_00059fa0);
    if ((iVar2 == 0) && (iVar2 = FUN_0004d384(&DAT_00059fa0), iVar2 == 0)) {
      DAT_0006c074 = 0;
    }
    else {
      DAT_0006c074 = 1;
    }
  }
  return DAT_0006c074;
}



/* ===== FUN_0004d7a4 @ 0004d7a4 size=200 ===== */

int FUN_0004d7a4(void)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  if ((DAT_0006c078 == -1) && (4 < tVar1 - DAT_0006c2f4)) {
    DAT_0006c2f4 = tVar1;
    iVar2 = FUN_0004d188(&DAT_00059ff4);
    if ((iVar2 == 0) && (iVar2 = FUN_0004d384(&DAT_00059ff4), iVar2 == 0)) {
      DAT_0006c078 = 0;
    }
    else {
      DAT_0006c078 = 1;
    }
  }
  return DAT_0006c078;
}



/* ===== FUN_0004d86c @ 0004d86c size=200 ===== */

int FUN_0004d86c(void)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  if ((DAT_0006c07c == -1) && (4 < tVar1 - DAT_0006c2f8)) {
    DAT_0006c2f8 = tVar1;
    iVar2 = FUN_0004d188("ext4dev");
    if ((iVar2 == 0) && (iVar2 = FUN_0004d384("ext4dev"), iVar2 == 0)) {
      DAT_0006c07c = 0;
    }
    else {
      DAT_0006c07c = 1;
    }
  }
  return DAT_0006c07c;
}



/* ===== FUN_0004d934 @ 0004d934 size=264 ===== */

undefined4 FUN_0004d934(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_3 + 0x60) & 8) != 0) {
    return 0xffffffea;
  }
  if (((((*(uint *)(param_3 + 0x5c) & 4) != 0) || (iVar1 = FUN_0004d6dc(), iVar1 != 0)) ||
      (iVar1 = FUN_0004d7a4(), iVar1 != 0)) ||
     ((iVar1 = FUN_0004d86c(), iVar1 == 0 || (iVar1 = FUN_0004d578(), iVar1 < 0x2061d)))) {
    if ((*(uint *)(param_3 + 0x160) & 4) == 0) {
      return 0xffffffea;
    }
    iVar1 = FUN_0004d86c();
    if ((iVar1 == 0) && (iVar1 = FUN_0004d7a4(), iVar1 != 0)) {
      return 0xffffffea;
    }
  }
  FUN_0004d064(*(undefined4 *)(param_1 + 8),param_2,param_3);
  return 0;
}



/* ===== FUN_0004da3c @ 0004da3c size=296 ===== */

undefined4 FUN_0004da3c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_3 + 0x60) & 8) == 0) {
    if ((((((*(uint *)(param_3 + 0x5c) & 4) == 0) && (iVar1 = FUN_0004d6dc(), iVar1 == 0)) &&
         (iVar1 = FUN_0004d7a4(), iVar1 != 0)) && (iVar1 = FUN_0004d578(), 0x2061c < iVar1)) ||
       (((*(uint *)(param_3 + 100) & 0xfffffff8) != 0 ||
        ((*(uint *)(param_3 + 0x60) & 0xffffffe9) != 0)))) {
      if (((*(uint *)(param_3 + 0x160) & 4) == 0) ||
         ((iVar1 = FUN_0004d86c(), iVar1 == 0 && (iVar1 = FUN_0004d7a4(), iVar1 != 0)))) {
        FUN_0004d064(*(undefined4 *)(param_1 + 8),param_2,param_3);
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffea;
      }
    }
    else {
      uVar2 = 0xffffffea;
    }
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== FUN_0004db64 @ 0004db64 size=148 ===== */

undefined4 FUN_0004db64(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_3 + 0x5c) & 4) == 0) {
    uVar1 = 0xffffffea;
  }
  else if (((*(uint *)(param_3 + 100) & 0xfffffff8) == 0) &&
          ((*(uint *)(param_3 + 0x60) & 0xffffffe9) == 0)) {
    FUN_0004d064(*(undefined4 *)(param_1 + 8),param_2,param_3);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== FUN_0004dbf8 @ 0004dbf8 size=228 ===== */

undefined4 FUN_0004dbf8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_3 + 0x5c) & 4) == 0) {
    if (((*(uint *)(param_3 + 100) & 0xfffffff8) == 0) &&
       ((*(uint *)(param_3 + 0x60) & 0xffffffed) == 0)) {
      iVar1 = FUN_0004d6dc();
      if ((iVar1 == 0) &&
         (((iVar1 = FUN_0004d7a4(), iVar1 != 0 || (iVar1 = FUN_0004d86c(), iVar1 != 0)) &&
          (iVar1 = FUN_0004d578(), 0x2061c < iVar1)))) {
        uVar2 = 0xffffffea;
      }
      else {
        FUN_0004d064(*(undefined4 *)(param_1 + 8),param_2,param_3);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffffea;
    }
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== FUN_0004dcdc @ 0004dcdc size=100 ===== */

undefined4 FUN_0004dcdc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_3 + 0x60) & 8) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    FUN_0004d064(*(undefined4 *)(param_1 + 8),param_2,param_3);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0004dd40 @ 0004dd40 size=288 ===== */

int FUN_0004dd40(int param_1,int param_2)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if ((param_2 <= local_c) || (*(char *)(param_1 + local_c * 0x20) == '\0')) {
      return 0;
    }
    if ((((*(char *)(param_1 + local_c * 0x20) != -0x1b) &&
         (*(short *)(param_1 + local_c * 0x20 + 0x14) == 0)) &&
        (*(short *)(param_1 + local_c * 0x20 + 0x1a) == 0)) &&
       (((*(byte *)(param_1 + local_c * 0x20 + 0xb) & 0x3f) != 0xf &&
        ((*(byte *)(param_1 + local_c * 0x20 + 0xb) & 0x18) == 8)))) break;
    local_c = local_c + 1;
  }
  return param_1 + local_c * 0x20;
}



/* ===== FUN_0004de60 @ 0004de60 size=1480 ===== */

undefined4 FUN_0004de60(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  char acStack_84 [12];
  int local_78;
  undefined4 uStack_74;
  uint local_6c;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  byte *local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  byte *local_14;
  void *local_10;
  void *local_c;
  
  local_c = (void *)0x0;
  local_10 = (void *)0x0;
  local_18 = 0;
  local_1c = 100;
  local_36 = (ushort)*(byte *)(param_3 + 0xb) + (ushort)*(byte *)(param_3 + 0xc) * 0x100;
  if ((((local_36 == 0x200) || (local_36 == 0x400)) || (local_36 == 0x800)) || (local_36 == 0x1000))
  {
    local_38 = (ushort)*(byte *)(param_3 + 0x11) + (ushort)*(byte *)(param_3 + 0x12) * 0x100;
    local_3a = *(ushort *)(param_3 + 0xe);
    local_34 = (byte *)(param_3 + 0x13);
    local_20 = (uint)*local_34 + (uint)*(byte *)(param_3 + 0x14) * 0x100;
    if (local_20 == 0) {
      local_20 = *(int *)(param_3 + 0x20);
    }
    local_24 = (uint)*(ushort *)(param_3 + 0x16);
    if (local_24 == 0) {
      local_24 = *(uint *)(param_3 + 0x24);
    }
    local_40 = *(byte *)(param_3 + 0x10) * local_24;
    local_30 = param_3;
    local_2c = param_3;
    local_44 = FUN_000513e0((uint)local_38 * 0x20 + (uint)local_36 + -1,local_36);
    local_48 = local_20 - ((uint)local_3a + local_40 + local_44);
    if (*(char *)(local_30 + 0xd) == '\0') {
      uVar3 = 1;
    }
    else {
      local_48 = FUN_000513e0(local_48,*(undefined1 *)(local_30 + 0xd));
      if (local_48 < 0xffffff7) {
        if (*(short *)(local_30 + 0x16) == 0) {
          local_54 = (uint)local_36 * (uint)*(byte *)(local_2c + 0xd);
          local_5c = local_40 + (uint)local_3a;
          local_28 = *(uint *)(local_2c + 0x2c);
          while ((local_28 != 0 && (local_1c = local_1c + -1, local_1c != 0))) {
            local_60 = (uint)*(byte *)(local_2c + 0xd) * (local_28 - 2);
            local_68 = (ulonglong)local_36 * (ulonglong)(uint)(local_5c + local_60);
            local_58 = FUN_0004cbc0(param_1,local_54,(undefined4)local_68,
                                    (int)((ulonglong)local_68 >> 0x20),local_54);
            if (local_58 == 0) break;
            local_6c = local_54 >> 5;
            local_10 = (void *)FUN_0004dd40(local_58,local_6c);
            if (local_10 != (void *)0x0) break;
            local_78 = (uint)local_36 * (uint)local_3a + local_28 * 4;
            uStack_74 = 0;
            puVar2 = (uint *)FUN_0004cbc0(param_1,local_54,local_78,0,local_54);
            if (puVar2 == (uint *)0x0) break;
            local_28 = *puVar2 & 0xfffffff;
          }
          if ((local_10 == (void *)0x0) || (iVar1 = memcmp(local_10,DAT_0006b6a4,0xb), iVar1 == 0))
          {
            local_10 = (void *)(local_2c + 0x47);
          }
          local_14 = (byte *)(local_2c + 0x43);
        }
        else {
          local_4c = (uint)local_36 * ((uint)local_3a + local_40);
          local_50 = (uint)*(byte *)(local_2c + 0x11) + (uint)*(byte *)(local_2c + 0x12) * 0x100;
          local_54 = local_50 * 0x20;
          local_58 = FUN_0004cbc0(param_1,local_54,local_4c,0,local_54);
          if (local_58 != 0) {
            local_10 = (void *)FUN_0004dd40(local_58,local_50);
          }
          if ((local_10 == (void *)0x0) || (iVar1 = memcmp(local_10,DAT_0006b6a4,0xb), iVar1 == 0))
          {
            local_10 = (void *)(local_30 + 0x2b);
          }
          local_14 = (byte *)(local_30 + 0x27);
          FUN_0004acf8(*(undefined4 *)(param_1 + 8),"SEC_TYPE","msdos",6);
        }
        if (((local_10 != (void *)0x0) && (iVar1 = memcmp(local_10,DAT_0006b6a4,0xb), iVar1 != 0))
           && (local_18 = FUN_0004cb20(local_10,0xb), local_18 != 0)) {
          local_c = local_10;
        }
        sprintf(acStack_84,"%02X%02X-%02X%02X",(uint)local_14[3],(uint)local_14[2],(uint)local_14[1]
                ,(uint)*local_14);
        FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,local_18);
        FUN_0004acf8(*(undefined4 *)(param_1 + 8),&DAT_00059f84,acStack_84,9);
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== FUN_0004e428 @ 0004e428 size=300 ===== */

undefined4 FUN_0004e428(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_3 + 0x1a) == 0) {
    uVar2 = 1;
  }
  else if ((*(char *)(param_3 + 0xd) == '\0') ||
          ((*(char *)(param_3 + 0xd) - 1U & *(byte *)(param_3 + 0xd)) != 0)) {
    uVar2 = 1;
  }
  else if ((*(byte *)(param_3 + 0x15) < 0xf8) && (*(char *)(param_3 + 0x15) != -0x10)) {
    uVar2 = 1;
  }
  else if (*(char *)(param_3 + 0x10) == '\0') {
    uVar2 = 1;
  }
  else {
    iVar1 = memcmp((void *)(param_3 + 0x36),"JFS     ",8);
    if ((iVar1 == 0) || (iVar1 = memcmp((void *)(param_3 + 0x36),"HPFS    ",8), iVar1 == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_0004de60(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_0004e554 @ 0004e554 size=1188 ===== */

undefined4 FUN_0004e554(int param_1,undefined4 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  char local_ec [132];
  char acStack_68 [20];
  char *local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int *local_44;
  void *local_40;
  void *local_3c;
  uint local_38;
  int iStack_34;
  undefined8 local_30;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  char *local_c;
  
  local_24 = (uint)*(byte *)(param_3 + 0xb) + (uint)*(byte *)(param_3 + 0xc) * 0x100;
  local_28 = (uint)*(byte *)(param_3 + 0xd);
  if ((0x1ff < local_24) && (local_28 != 0)) {
    if (*(char *)(param_3 + 0x40) < '\0') {
      local_10 = 1 << (-(int)*(char *)(param_3 + 0x40) & 0xffU);
    }
    else {
      local_10 = local_28 * (int)*(char *)(param_3 + 0x40) * local_24;
    }
    local_20 = param_3;
    local_30 = FUN_00051964(*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),local_28
                            ,0);
    uVar5 = (uint)((ulonglong)local_30 >> 0x20);
    bVar6 = *(uint *)(local_20 + 0x34) <= uVar5;
    if (uVar5 == *(uint *)(local_20 + 0x34)) {
      bVar6 = *(uint *)(local_20 + 0x30) <= (uint)local_30;
    }
    if (bVar6) {
      bVar6 = *(uint *)(local_20 + 0x3c) <= uVar5;
      if (uVar5 == *(uint *)(local_20 + 0x3c)) {
        bVar6 = *(uint *)(local_20 + 0x38) <= (uint)local_30;
      }
      if (bVar6) {
        uVar1 = (ulonglong)local_24 * (ulonglong)*(uint *)(local_20 + 0x38);
        lVar2 = (ulonglong)local_28 * (uVar1 & 0xffffffff);
        local_38 = (uint)lVar2;
        iStack_34 = local_28 *
                    (local_24 * *(int *)(local_20 + 0x3c) +
                     *(uint *)(local_20 + 0x38) * ((int)local_24 >> 0x1f) + (int)(uVar1 >> 0x20)) +
                    (int)uVar1 * ((int)local_28 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20);
        local_3c = (void *)FUN_0004cbc0(param_1,iStack_34,local_38,iStack_34,local_10);
        if (local_3c == (void *)0x0) {
          return 1;
        }
        iVar3 = memcmp(local_3c,&DAT_0005a044,4);
        if (iVar3 != 0) {
          return 1;
        }
        uVar1 = (ulonglong)local_24 * (ulonglong)*(uint *)(local_20 + 0x30);
        lVar2 = (ulonglong)local_28 * (uVar1 & 0xffffffff);
        local_38 = (uint)lVar2;
        iStack_34 = local_28 *
                    (local_24 * *(int *)(local_20 + 0x34) +
                     *(uint *)(local_20 + 0x30) * ((int)local_24 >> 0x1f) + (int)(uVar1 >> 0x20)) +
                    (int)uVar1 * ((int)local_28 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20);
        local_3c = (void *)FUN_0004cbc0(param_1,iStack_34,local_38,iStack_34,local_10);
        if (local_3c == (void *)0x0) {
          return 1;
        }
        iVar4 = memcmp(local_3c,&DAT_0005a044,4);
        iVar3 = iStack_34;
        if (iVar4 == 0) {
          uVar7 = VectorShiftRight(CONCAT44(local_10 * 3,local_10 * 3),0x20);
          bVar6 = CARRY4((uint)uVar7,local_38);
          local_38 = (uint)uVar7 + local_38;
          iStack_34 = (int)((ulonglong)uVar7 >> 0x20) + iStack_34 + (uint)bVar6;
          local_3c = (void *)FUN_0004cbc0(param_1,iVar3,local_38,iStack_34,local_10);
          if (local_3c == (void *)0x0) {
            return 1;
          }
          iVar3 = memcmp(local_3c,&DAT_0005a044,4);
          if (iVar3 == 0) {
            local_40 = local_3c;
            local_14 = (uint)*(ushort *)((int)local_3c + 0x14);
            local_ec[0] = '\0';
            while( true ) {
              local_44 = (int *)((int)local_3c + local_14);
              local_48 = local_44[1];
              local_4c = *local_44;
              local_50 = (uint)*(ushort *)(local_44 + 5);
              local_1c = local_44[4];
              local_14 = local_14 + local_48;
              if (((local_10 < (int)local_14) || (local_48 == 0)) || (local_4c == -1)) break;
              if (local_4c == 0x60) {
                if (0x81 < local_1c) {
                  local_1c = 0x80;
                }
                local_c = local_ec;
                for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 2) {
                  local_54 = (char *)((int)local_44 + local_50 + local_18);
                  *local_c = *local_54;
                  if (local_54[1] != '\0') {
                    *local_c = '?';
                  }
                  local_c = local_c + 1;
                }
                *local_c = '\0';
              }
            }
            sprintf(acStack_68,"%016llX",*(undefined4 *)(local_20 + 0x48),
                    *(undefined4 *)(local_20 + 0x4c));
            FUN_0004acf8(*(undefined4 *)(param_1 + 8),&DAT_00059f84,acStack_68,0);
            if (local_ec[0] != '\0') {
              FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_ec,0);
            }
            return 0;
          }
          return 1;
        }
        return 1;
      }
    }
  }
  return 1;
}



/* ===== FUN_0004e9f8 @ 0004e9f8 size=144 ===== */

undefined4 FUN_0004e9f8(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x6c) != '\0') {
    local_c = param_3 + 0x6c;
  }
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0xc);
  FUN_0004cff0(*(undefined4 *)(param_1 + 8),param_3 + 0x20,0);
  return 0;
}



/* ===== FUN_0004ea88 @ 0004ea88 size=292 ===== */

undefined4 FUN_0004ea88(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  if (*(ushort *)(param_3 + 0x2c) >> 10 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar1 = FUN_000513e0(*(undefined4 *)(param_2 + 4),*(ushort *)(param_3 + 0x2c) >> 10);
    if (*(uint *)(param_3 + 0xc) < uVar1) {
      uVar2 = 0xffffffe5;
    }
    else {
      if ((*(char *)(*(int *)(param_2 + 0x10) + 6) == '2') ||
         (*(char *)(*(int *)(param_2 + 0x10) + 6) == '3')) {
        if (*(char *)(param_3 + 100) != '\0') {
          local_c = param_3 + 100;
        }
        FUN_0004cff0(*(undefined4 *)(param_1 + 8),param_3 + 0x54,0);
      }
      FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x10);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_0004ebac @ 0004ebac size=144 ===== */

undefined4 FUN_0004ebac(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x24) != '\0') {
    local_c = param_3 + 0x24;
  }
  FUN_0004cff0(*(undefined4 *)(param_1 + 8),param_3 + 0x14,0);
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x10);
  return 0;
}



/* ===== FUN_0004ec3c @ 0004ec3c size=280 ===== */

undefined4 FUN_0004ec3c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_c;
  
  local_c = 0;
  if (*(int *)(param_3 + 0x10) == 1 << (*(ushort *)(param_3 + 0x14) & 0xff)) {
    if (*(int *)(param_3 + 0x18) == 1 << (*(ushort *)(param_3 + 0x1c) & 0xff)) {
      if ((uint)*(ushort *)(param_3 + 0x14) - (uint)*(ushort *)(param_3 + 0x1c) ==
          (uint)*(ushort *)(param_3 + 0x16)) {
        if (*(char *)(param_3 + 0x98) != '\0') {
          local_c = param_3 + 0x98;
        }
        FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x10);
        FUN_0004cff0(*(undefined4 *)(param_1 + 8),param_3 + 0x88,0);
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_0004ed80 @ 0004ed80 size=92 ===== */

undefined4 FUN_0004ed80(int param_1,undefined4 param_2,int param_3)

{
  char acStack_30 [40];
  
  strncpy(acStack_30,(char *)(param_3 + 0xa8),0x28);
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),&DAT_00059f84,acStack_30,0x28);
  return 0;
}



/* ===== FUN_0004eddc @ 0004eddc size=116 ===== */

undefined4 FUN_0004eddc(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x10) != '\0') {
    local_c = param_3 + 0x10;
  }
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0);
  return 0;
}



/* ===== FUN_0004ee50 @ 0004ee50 size=116 ===== */

undefined4 FUN_0004ee50(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x30) != '\0') {
    local_c = param_3 + 0x30;
  }
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0);
  return 0;
}



/* ===== FUN_0004eec4 @ 0004eec4 size=96 ===== */

undefined4 FUN_0004eec4(int param_1)

{
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),&DAT_00059f84,0,0);
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",0,0);
  return 0;
}



/* ===== FUN_0004ef24 @ 0004ef24 size=312 ===== */

undefined4 FUN_0004ef24(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  
  FUN_0004eec4(param_1,param_2,param_3);
  piVar1 = (int *)FUN_0004cbc0(param_1,extraout_r1,0x400,0,0x400);
  if (piVar1 == (int *)0x0) {
    uVar3 = 1;
  }
  else {
    iVar2 = memcmp(*(void **)(param_2 + 0x10),"SWAPSPACE2",*(size_t *)(param_2 + 0xc));
    if ((iVar2 == 0) && ((*piVar1 != 1 || (piVar1[1] == 0)))) {
      uVar3 = 1;
    }
    else {
      if (((char)piVar1[0x13] == '\0') && (*(char *)((int)piVar1 + 0x4d) == '\0')) {
        if ((char)piVar1[7] != '\0') {
          FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",piVar1 + 7,0x10);
        }
        if ((char)piVar1[3] != '\0') {
          FUN_0004cff0(*(undefined4 *)(param_1 + 8),piVar1 + 3,0);
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_0004f05c @ 0004f05c size=104 ===== */

undefined4 FUN_0004f05c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar1 = FUN_0004cb20(param_3 + 0x28,0x20);
  FUN_0004acf8(uVar2,"LABEL",param_3 + 0x28,uVar1);
  return 0;
}



/* ===== FUN_0004f0c4 @ 0004f0c4 size=468 ===== */

undefined4 FUN_0004f0c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  for (local_10 = 1; (int)local_10 < 0x10; local_10 = local_10 + 1) {
    local_14 = FUN_0004cbc0(param_1,0x60,(local_10 + 0x10) * 0x800,
                            (((int)local_10 >> 0x1f) + (uint)(0xffffffef < local_10)) * 0x800 |
                            local_10 + 0x10 >> 0x15,0x60);
    if (local_14 == 0) {
      return 1;
    }
    if (*(char *)(local_14 + 1) != '\0') break;
  }
  local_c = 1;
  while( true ) {
    if (0x3f < local_c) {
      return 1;
    }
    if ((1 < local_c) &&
       (iVar1 = (local_10 * local_c + 0x10) * 0x800,
       local_14 = FUN_0004cbc0(param_1,0x60,iVar1,iVar1 >> 0x1f,0x60), local_14 == 0)) {
      return 1;
    }
    iVar1 = memcmp((void *)(local_14 + 1),&DAT_0005a098,4);
    if (iVar1 == 0) {
      uVar2 = FUN_0004f05c(param_1,param_2,param_3);
      return uVar2;
    }
    local_18 = &DAT_0006b6a8;
    while ((*local_18 != 0 &&
           (iVar1 = memcmp((void *)*local_18,(void *)(local_14 + 1),5), iVar1 != 0))) {
      local_18 = local_18 + 1;
    }
    if (*local_18 == 0) break;
    local_c = local_c + 1;
  }
  return 1;
}



/* ===== FUN_0004f298 @ 0004f298 size=372 ===== */

undefined4 FUN_0004f298(int param_1,undefined4 param_2,void *param_3)

{
  undefined1 auStack_19c [48];
  undefined1 auStack_16c [64];
  byte local_12c;
  byte local_12b;
  undefined1 auStack_12a [18];
  undefined1 auStack_118 [4];
  byte local_114;
  byte local_113;
  byte local_112;
  byte local_111;
  undefined1 auStack_90 [128];
  byte local_10;
  byte local_f;
  uint local_c;
  
  memcpy(auStack_118,param_3,0x10a);
  memcpy(auStack_19c,(void *)((int)param_3 + 0x200),0x84);
  local_c = (uint)local_114 + (uint)local_113 * 0x100 + (uint)local_112 * 0x10000 +
            (uint)local_111 * 0x1000000;
  if (local_c == 1) {
    FUN_0004acf8(*(undefined4 *)(param_1 + 8),"SEC_TYPE","ocfs1",6);
  }
  else if (8 < local_c) {
    FUN_0004acf8(*(undefined4 *)(param_1 + 8),"SEC_TYPE","ntocfs",7);
  }
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",auStack_16c,
               (uint)local_12c + (uint)local_12b * 0x100);
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"MOUNT",auStack_90,
               (uint)local_10 + (uint)local_f * 0x100);
  FUN_0004cff0(*(undefined4 *)(param_1 + 8),auStack_12a,0);
  return 0;
}



/* ===== FUN_0004f40c @ 0004f40c size=108 ===== */

undefined4 FUN_0004f40c(int param_1,undefined4 param_2,int param_3)

{
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",param_3 + 0x110,0x40);
  FUN_0004cff0(*(undefined4 *)(param_1 + 8),param_3 + 0x150,0);
  return 0;
}



/* ===== FUN_0004f478 @ 0004f478 size=80 ===== */

undefined4 FUN_0004f478(int param_1,undefined4 param_2,int param_3)

{
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",param_3 + 0x28,0x18);
  return 0;
}



/* ===== FUN_0004f4c8 @ 0004f4c8 size=216 ===== */

undefined4 FUN_0004f4c8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0004cacc(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 == 0x51d) && (iVar1 = FUN_0004cacc(*(undefined4 *)(param_3 + 0x1c)), iVar1 == 0x579)) {
    FUN_0004acf8(*(undefined4 *)(param_1 + 8),&DAT_00059f84,0,0);
    if (*(char *)(param_3 + 0xa0) != '\0') {
      local_c = param_3 + 0xa0;
    }
    FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x40);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0004f5a0 @ 0004f5a0 size=216 ===== */

undefined4 FUN_0004f5a0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0004cacc(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 == 0x709) && (iVar1 = FUN_0004cacc(*(undefined4 *)(param_3 + 0x1c)), iVar1 == 0x76c)) {
    FUN_0004acf8(*(undefined4 *)(param_1 + 8),&DAT_00059f84,0,0);
    if (*(char *)(param_3 + 0xa0) != '\0') {
      local_c = param_3 + 0xa0;
    }
    FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x40);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0004f678 @ 0004f678 size=628 ===== */

void FUN_0004f678(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  do {
    if (param_4 <= local_c + 1) {
LAB_0004f8c8:
      *(undefined1 *)(param_1 + local_10) = 0;
      return;
    }
    uVar1 = *(undefined1 *)(param_3 + local_c + 1);
    uVar2 = CONCAT11(*(byte *)(param_3 + local_c),uVar1);
    uVar4 = (uint)uVar2;
    if (uVar4 == 0) {
      *(undefined1 *)(param_1 + local_10) = 0;
      goto LAB_0004f8c8;
    }
    if (uVar4 < 0x80) {
      if (param_2 <= local_10 + 1) goto LAB_0004f8c8;
      *(undefined1 *)(param_1 + local_10) = uVar1;
      local_10 = local_10 + 1;
    }
    else if (uVar4 < 0x800) {
      if (param_2 <= local_10 + 2) goto LAB_0004f8c8;
      iVar3 = local_10 + 1;
      *(byte *)(param_1 + local_10) = ~((byte)~(byte)(((uint)(uVar2 >> 6) << 0x1a) >> 0x18) >> 2);
      local_10 = local_10 + 2;
      *(byte *)(param_1 + iVar3) = ~((byte)~(byte)(((uVar4 & 0x3f) << 0x19) >> 0x18) >> 1);
    }
    else {
      if (param_2 <= local_10 + 3) goto LAB_0004f8c8;
      *(byte *)(param_1 + local_10) =
           ~((byte)~(byte)(((uint)(*(byte *)(param_3 + local_c) >> 4) << 0x1b) >> 0x18) >> 3);
      iVar3 = local_10 + 2;
      *(byte *)(param_1 + local_10 + 1) =
           ~((byte)~(byte)(((uVar2 >> 6 & 0x3f) << 0x19) >> 0x18) >> 1);
      local_10 = local_10 + 3;
      *(byte *)(param_1 + iVar3) = ~((byte)~(byte)(((uVar4 & 0x3f) << 0x19) >> 0x18) >> 1);
    }
    local_c = local_c + 2;
  } while( true );
}



/* ===== FUN_0004f8ec @ 0004f8ec size=256 ===== */

undefined4 FUN_0004f8ec(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_2c [20];
  int local_18;
  int iStack_14;
  int *local_10;
  int local_c;
  
  local_c = param_3;
  iVar1 = memcmp((void *)(param_3 + 0x7c),&DAT_0005a0b8,2);
  if ((iVar1 == 0) || (iVar1 = memcmp((void *)(local_c + 0x7c),&DAT_0005a0bc,2), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    local_10 = (int *)(local_c + 0x74);
    local_18 = *local_10;
    iStack_14 = *(int *)(local_c + 0x78);
    if (local_18 != 0 || iStack_14 != 0) {
      sprintf(acStack_2c,"%016llX",local_18,iStack_14);
      FUN_0004acf8(*(undefined4 *)(param_1 + 8),&DAT_00059f84,acStack_2c,0);
    }
    FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c + 0x25,*(undefined1 *)(local_c + 0x24)
                );
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0004f9ec @ 0004f9ec size=1428 ===== */

undefined4 FUN_0004f9ec(int param_1,int param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_2e4;
  undefined1 auStack_2d4 [512];
  char acStack_d4 [20];
  undefined4 local_c0 [16];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  longlong local_70;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int iStack_44;
  int *local_40;
  void *local_3c;
  int local_38;
  int local_34;
  int local_30;
  void *local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  
  local_1c = 0;
  local_2c = param_3;
  iVar2 = memcmp(param_3,&DAT_0005a0c0,2);
  local_2e4 = param_3;
  if (iVar2 == 0) {
    iVar2 = memcmp((void *)((int)local_2c + 0x7c),&DAT_0005a0b8,2);
    if ((iVar2 != 0) && (iVar2 = memcmp((void *)((int)local_2c + 0x7c),&DAT_0005a0bc,2), iVar2 != 0)
       ) {
      return 1;
    }
    local_30 = FUN_0004cacc(*(undefined4 *)((int)local_2c + 0x14));
    local_34 = FUN_0004ca80(*(undefined2 *)((int)local_2c + 0x1c));
    local_38 = FUN_0004ca80(*(undefined2 *)((int)local_2c + 0x7e));
    local_1c = local_34 * 0x200 + local_30 * local_38;
    local_2e4 = (void *)FUN_0004cbc0(param_1,0x82,*(int *)(param_2 + 4) * 0x400 + local_1c,0,0x82);
    if (local_2e4 == (void *)0x0) {
      return 1;
    }
  }
  local_3c = local_2e4;
  iVar2 = memcmp(local_2e4,&DAT_0005a0b8,2);
  if ((iVar2 == 0) || (iVar2 = memcmp(local_3c,&DAT_0005a0bc,2), iVar2 == 0)) {
    local_40 = (int *)((int)local_3c + 0x68);
    local_48 = *local_40;
    iStack_44 = *(int *)((int)local_3c + 0x6c);
    if (local_48 != 0 || iStack_44 != 0) {
      sprintf(acStack_d4,"%016llX",local_48,iStack_44);
      FUN_0004acf8(*(undefined4 *)(param_1 + 8),&DAT_00059f84,acStack_d4,0);
    }
    local_4c = FUN_0004cacc(*(undefined4 *)((int)local_3c + 0x28));
    puVar5 = (undefined4 *)((int)local_3c + 0x120);
    puVar7 = local_c0;
    puVar8 = (undefined4 *)((int)local_3c + 0x160);
    do {
      uVar4 = puVar5[1];
      uVar3 = puVar5[2];
      uVar6 = puVar5[3];
      *puVar7 = *puVar5;
      puVar7[1] = uVar4;
      puVar7[2] = uVar3;
      puVar7[3] = uVar6;
      puVar5 = puVar5 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar5 != puVar8);
    local_50 = FUN_0004cacc(local_c0[0]);
    lVar1 = (ulonglong)local_4c * (ulonglong)local_50 + (ulonglong)local_1c;
    uVar4 = (undefined4)((ulonglong)lVar1 >> 0x20);
    iVar2 = FUN_0004cbc0(param_1,uVar4,(int)lVar1,uVar4,0x2000);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      local_54 = iVar2 + 0xe;
      local_58 = FUN_0004cacc(*(undefined4 *)(iVar2 + 0x18));
      local_5c = FUN_0004ca80(*(undefined2 *)(local_54 + 0x12));
      local_60 = FUN_0004cacc(*(undefined4 *)(local_54 + 6));
      if (local_60 == 0) {
        uVar4 = 0;
      }
      else {
        local_24 = FUN_000513e0(local_5c * local_58,local_4c);
        for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
          local_20 = FUN_0004cacc(local_c0[local_28 * 2]);
          local_64 = FUN_0004cacc(local_c0[local_28 * 2 + 1]);
          if (local_64 == 0) {
            return 0;
          }
          if (local_24 < local_64) break;
          local_24 = local_24 - local_64;
        }
        if (local_28 == 8) {
          uVar4 = 0;
        }
        else {
          local_70 = (ulonglong)local_4c * (ulonglong)(local_20 + local_24);
          uVar4 = (undefined4)(local_70 + (ulonglong)local_1c >> 0x20);
          iVar2 = FUN_0004cbc0(param_1,uVar4,(int)(local_70 + (ulonglong)local_1c),uVar4,local_5c);
          if (iVar2 == 0) {
            uVar4 = 0;
          }
          else {
            local_74 = iVar2;
            local_78 = FUN_0004ca80(*(undefined2 *)(iVar2 + 10));
            if (local_78 == 0) {
              uVar4 = 0;
            }
            else if (*(char *)(local_74 + 8) == -1) {
              local_7c = iVar2 + 0xe;
              iVar2 = FUN_0004cacc(*(undefined4 *)(iVar2 + 0x10));
              if (iVar2 == 1) {
                local_80 = FUN_0004ca80(*(undefined2 *)(local_7c + 6));
                local_80 = local_80 << 1;
                FUN_0004f678(auStack_2d4,0x200,local_7c + 8,local_80);
                FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",auStack_2d4,0);
                uVar4 = 0;
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              uVar4 = 0;
            }
          }
        }
      }
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== FUN_0004ff80 @ 0004ff80 size=204 ===== */

uint FUN_0004ff80(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *local_14;
  uint local_10;
  uint local_c;
  
  local_10 = 0xf597a6cf;
  local_14 = param_1;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    uVar1 = *(uint *)(&DAT_0005a3a8 + ((local_10 ^ *local_14) & 0xf) * 4) ^
            (local_10 ^ *local_14) >> 4;
    local_10 = *(uint *)(&DAT_0005a3a8 + (uVar1 & 0xf) * 4) ^ uVar1 >> 4;
    local_14 = local_14 + 1;
  }
  return local_10;
}



/* ===== FUN_0005004c @ 0005004c size=456 ===== */

undefined4 FUN_0005004c(int param_1,int param_2,void *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_48 [40];
  uint local_20;
  uint local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  int local_c;
  
  local_c = *(int *)(param_2 + 4) << 1;
  local_10 = param_3;
  iVar4 = memcmp(param_3,"LABELONE",8);
  pvVar3 = param_3;
  if (iVar4 != 0) {
    iVar4 = memcmp((void *)((int)param_3 + 0x200),"LABELONE",8);
    if (iVar4 != 0) {
      return 1;
    }
    local_c = local_c + 1;
    pvVar3 = (void *)((int)param_3 + 0x200);
  }
  local_10 = pvVar3;
  if (*(int *)((int)local_10 + 0xc) == 0 && *(int *)((int)local_10 + 8) == local_c) {
    iVar4 = FUN_0004ff80((int)local_10 + 0x14,0x1ec);
    if (iVar4 == *(int *)((int)local_10 + 0x10)) {
      local_20 = 1;
      local_14 = local_48;
      local_18 = (undefined1 *)((int)local_10 + 0x20);
      for (local_1c = 0; local_1c < 0x20; local_1c = local_1c + 1) {
        if ((local_20 & 0x4444440) != 0) {
          puVar2 = local_14 + 1;
          *local_14 = 0x2d;
          local_14 = puVar2;
        }
        uVar1 = *local_18;
        local_18 = local_18 + 1;
        puVar2 = local_14 + 1;
        *local_14 = uVar1;
        local_14 = puVar2;
        local_20 = local_20 << 1;
      }
      FUN_0004acf8(*(undefined4 *)(param_1 + 8),&DAT_00059f84,local_48,0x26);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* ===== FUN_00050214 @ 00050214 size=152 ===== */

undefined4 FUN_00050214(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 299) != '\0') {
    local_c = param_3 + 299;
  }
  FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x100);
  FUN_0004cff0(*(undefined4 *)(param_1 + 8),param_3 + 0x20,0);
  return 0;
}



/* ===== FUN_000502ac @ 000502ac size=76 ===== */

undefined4 FUN_000502ac(int param_1,undefined4 param_2,int param_3)

{
  FUN_0004cff0(*(undefined4 *)(param_1 + 8),param_3 + 0x6c,0);
  return 0;
}



/* ===== FUN_000502f8 @ 000502f8 size=80 ===== */

undefined8 FUN_000502f8(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x6c);
  return CONCAT44(param_4 << uVar1 | param_3 << (uVar1 - 0x20 & 0xff) |
                  param_3 >> (0x20 - uVar1 & 0xff),param_3 << uVar1);
}



/* ===== FUN_00050348 @ 00050348 size=116 ===== */

undefined8 FUN_00050348(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 - 2;
  uVar2 = (uint)*(byte *)(param_1 + 0x6d);
  return CONCAT44((0 << uVar2 | uVar1 << (uVar2 - 0x20 & 0xff) | uVar1 >> (0x20 - uVar2 & 0xff)) +
                  (uint)CARRY4(uVar1 << uVar2,*(uint *)(param_1 + 0x58)),
                  (uVar1 << uVar2) + *(uint *)(param_1 + 0x58));
}



/* ===== FUN_000503bc @ 000503bc size=72 ===== */

undefined4 FUN_000503bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00050348(param_1,param_2);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar1 = FUN_000502f8(param_1,uVar1,(int)uVar2,uVar1);
  return uVar1;
}



/* ===== FUN_00050404 @ 00050404 size=164 ===== */

undefined4 FUN_00050404(undefined4 param_1,int param_2,uint param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar1 = FUN_000502f8(param_2,param_2,*(undefined4 *)(param_2 + 0x50),0);
  uVar4 = (ulonglong)CONCAT14(CARRY4(param_3,param_3),param_3 * 2);
  uVar4 = VectorAdd(uVar4,uVar4,8);
  lVar1 = (uVar4 & 0xffffffff00000000) + (uVar4 & 0xffffffff) + lVar1;
  local_18 = (undefined4)lVar1;
  uStack_14 = (undefined4)((ulonglong)lVar1 >> 0x20);
  puVar2 = (undefined4 *)FUN_0004cbc0(param_1,4,local_18,uStack_14,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  return uVar3;
}



/* ===== FUN_000504a8 @ 000504a8 size=352 ===== */

char * FUN_000504a8(undefined4 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  int extraout_r2;
  int extraout_r3;
  longlong lVar4;
  uint local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_c;
  
  local_c = *(uint *)(param_2 + 0x60);
  lVar4 = FUN_000503bc(param_2,local_c);
  local_1c = 0;
  while( true ) {
    uStack_14 = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_18 = (undefined4)lVar4;
    if (9999 < local_1c) {
      return (char *)0x0;
    }
    pcVar3 = (char *)FUN_0004cbc0(param_1,0x20,local_18,uStack_14,0x20);
    if (pcVar3 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar3 == '\0') {
      return (char *)0x0;
    }
    if (*pcVar3 == -0x7d) break;
    lVar2 = lVar4 + 0x20;
    lVar4 = lVar4 + 0x20;
    iVar1 = (1 << *(sbyte *)(param_2 + 0x6c)) << *(sbyte *)(param_2 + 0x6d);
    FUN_00051964((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),iVar1,iVar1 >> 0x1f);
    if (extraout_r2 == 0 && extraout_r3 == 0) {
      local_c = FUN_00050404(param_1,param_2,local_c);
      if (local_c < 2) {
        return (char *)0x0;
      }
      if (0xffffff6 < local_c) {
        return (char *)0x0;
      }
      lVar4 = FUN_000503bc(param_2,local_c);
    }
    local_1c = local_1c + 1;
  }
  return pcVar3;
}



/* ===== FUN_00050608 @ 00050608 size=392 ===== */

int FUN_00050608(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_28 [16];
  int local_18;
  int local_14;
  
  local_14 = param_3;
  if ((param_3 != 0) && ((1 << *(sbyte *)(param_3 + 0x6c)) << (uint)*(byte *)(param_3 + 0x6d) != 0))
  {
    local_18 = FUN_000504a8(param_1,param_3);
    if (local_18 == 0) {
      FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",&DAT_0005a0d0,4);
    }
    else {
      FUN_0004acf8(*(undefined4 *)(param_1 + 8),"LABEL",local_18 + 2,*(undefined1 *)(local_18 + 1));
    }
    memset(acStack_28,0,0x10);
    snprintf(acStack_28,0x10,"%02hhX%02hhX-%02hhX%02hhX",(uint)*(byte *)(local_14 + 0x67),
             (uint)*(byte *)(local_14 + 0x66),(uint)*(byte *)(local_14 + 0x65),
             (uint)*(byte *)(local_14 + 100));
    uVar4 = *(undefined4 *)(param_1 + 8);
    sVar2 = strlen(acStack_28);
    FUN_0004acf8(uVar4,&DAT_00059f84,acStack_28,sVar2);
    return 0;
  }
  piVar1 = __errno_location();
  if (*piVar1 == 0) {
    iVar3 = 1;
  }
  else {
    piVar1 = __errno_location();
    iVar3 = -*piVar1;
  }
  return iVar3;
}



/* ===== FUN_00050790 @ 00050790 size=1208 ===== */

int FUN_00050790(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  time_t tVar3;
  int local_c8;
  undefined1 auStack_c0 [16];
  stat sStack_b0;
  undefined1 auStack_58 [4];
  char *local_54;
  int local_50;
  int local_4c;
  int local_48;
  void *local_44;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  double dStack_28;
  time_t local_20;
  int *local_1c;
  
  if (param_2 == 0) {
    return 0;
  }
  local_20 = time((time_t *)0x0);
  dStack_28 = difftime(local_20,*(time_t *)(param_2 + 0x28));
  iVar1 = stat(*(char **)(param_2 + 0x14),&sStack_b0);
  if (-1 < iVar1) {
    if ((*(int *)(param_2 + 0x28) <= local_20) &&
       (sStack_b0.st_mtim.tv_sec <= *(int *)(param_2 + 0x28))) {
      if (dStack_28 < 2.0) {
        return param_2;
      }
      if (((*(uint *)(param_2 + 0x2c) & 1) != 0) && (dStack_28 < DAT_00050c48)) {
        return param_2;
      }
    }
    local_50 = open(*(char **)(param_2 + 0x14),0);
    if (-1 < local_50) {
      local_44 = (void *)0x0;
      local_3c = (void *)0x0;
      local_38 = 0;
      local_4c = param_1;
      local_48 = param_2;
      while( true ) {
        local_54 = (char *)0x0;
        local_c8 = param_2;
        if (((*(int *)(param_2 + 0x18) == 0) ||
            (iVar1 = strcmp(*(char **)(param_2 + 0x18),"mdraid"), iVar1 == 0)) &&
           (iVar1 = FUN_0004cdd8(local_50,auStack_c0), iVar1 == 0)) {
          FUN_0004cff0(param_2,auStack_c0,0);
          local_54 = "mdraid";
          goto LAB_00050b90;
        }
        for (local_1c = &DAT_0006b6c8; *local_1c != 0; local_1c = local_1c + 6) {
          if ((*(int *)(param_2 + 0x18) == 0) ||
             (iVar1 = strcmp((char *)*local_1c,*(char **)(param_2 + 0x18)), iVar1 == 0)) {
            local_2c = local_1c[1] + ((uint)local_1c[2] >> 10);
            local_30 = FUN_0004cbc0(&local_50,&local_50,local_2c * 0x400,local_2c >> 0x16,0x400);
            if (((local_30 != 0) &&
                (iVar1 = memcmp((void *)local_1c[4],(void *)(local_30 + (local_1c[2] & 0x3ffU)),
                                local_1c[3]), iVar1 == 0)) &&
               ((local_1c[5] == 0 ||
                (iVar1 = (*(code *)local_1c[5])(&local_50,local_1c,local_30), iVar1 == 0)))) {
              local_54 = (char *)*local_1c;
              goto LAB_00050b90;
            }
          }
        }
        if ((*local_1c != 0) || (*(int *)(param_2 + 0x18) == 0)) break;
        local_34 = FUN_0004b190(param_2);
        while (iVar1 = FUN_0004b1f8(local_34,&local_54,auStack_58), iVar1 == 0) {
          FUN_0004acf8(param_2,local_54,0,0);
        }
        FUN_0004b2c4(local_34);
      }
      if (*(int *)(param_2 + 0x18) == 0) {
        FUN_00048da0(param_2);
        local_c8 = 0;
      }
LAB_00050b90:
      if ((local_c8 != 0) && (local_54 != (char *)0x0)) {
        *(undefined4 *)(local_c8 + 0x20) = (undefined4)sStack_b0.st_rdev;
        *(undefined4 *)(local_c8 + 0x24) = sStack_b0.st_rdev._4_4_;
        tVar3 = time((time_t *)0x0);
        *(time_t *)(local_c8 + 0x28) = tVar3;
        *(uint *)(local_c8 + 0x2c) = *(uint *)(local_c8 + 0x2c) | 1;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
        FUN_0004acf8(local_c8,&DAT_0005a3a0,local_54,0);
      }
      free(local_44);
      free(local_3c);
      if (local_50 < 0) {
        return local_c8;
      }
      close(local_50);
      return local_c8;
    }
  }
  piVar2 = __errno_location();
  if (((*piVar2 != 1) && (piVar2 = __errno_location(), *piVar2 != 0xd)) &&
     (piVar2 = __errno_location(), *piVar2 != 2)) {
    FUN_00048da0(param_2);
    param_2 = 0;
  }
  return param_2;
}



/* ===== FUN_00050c50 @ 00050c50 size=116 ===== */

undefined4 FUN_00050c50(char *param_1)

{
  int iVar1;
  int *local_c;
  
  local_c = &DAT_0006b6c8;
  while( true ) {
    if (*local_c == 0) {
      return 0;
    }
    iVar1 = strcmp(param_1,(char *)*local_c);
    if (iVar1 == 0) break;
    local_c = local_c + 6;
  }
  return 1;
}



/* ===== FUN_00050cc4 @ 00050cc4 size=124 ===== */

undefined4 FUN_00050cc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined1 uStack_9;
  
  FUN_00050f80(param_1,param_2,param_3,param_4,0);
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



/* ===== FUN_00050d40 @ 00050d40 size=576 ===== */

undefined8 FUN_00050d40(int param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_r1;
  bool bVar3;
  utsname uStack_1e0;
  uint local_58 [7];
  uint local_3c;
  int local_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  int local_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  
  local_24 = 1;
  iVar2 = uname(&uStack_1e0);
  if ((((iVar2 == 0) && (uStack_1e0.release[0] == '2')) && (uStack_1e0.release[1] == '.')) &&
     (((byte)uStack_1e0.release[2] < 0x36 && (uStack_1e0.release[3] == '.')))) {
    local_24 = 0;
  }
  if ((local_24 == 0) || (iVar2 = ioctl(param_1,0x80041272,&local_38), iVar2 < 0)) {
    iVar2 = ioctl(param_1,0x1260,&local_3c);
    if (iVar2 < 0) {
      iVar2 = ioctl(param_1,0x801c0204,local_58);
      if (iVar2 < 0) {
        iVar2 = fstat64(param_1,(stat64 *)&uStack_1e0);
        if ((iVar2 != 0) ||
           (local_38 = uStack_1e0.sysname._48_4_, uStack_34 = uStack_1e0.sysname._52_4_,
           (uStack_1e0.sysname._16_4_ & 0xf000) != 0x8000)) {
          local_20 = 0;
          iStack_1c = 0;
          local_18 = 0x400;
          iStack_14 = 0;
          iVar2 = extraout_r1;
          while (iVar2 = FUN_00050cc4(param_1,iVar2,local_18,iStack_14), iVar2 != 0) {
            local_20 = local_18;
            iStack_1c = iStack_14;
            bVar3 = CARRY4(local_18,local_18);
            local_18 = local_18 * 2;
            iVar2 = iStack_14;
            iStack_14 = iStack_14 * 2 + (uint)bVar3;
          }
          while (iVar2 = iStack_14 - (uint)(local_18 == 0), bVar3 = local_20 < local_18 - 1,
                (int)(iStack_1c - (iVar2 + (uint)bVar3)) < 0 !=
                (SBORROW4(iStack_1c,iVar2) != SBORROW4(iStack_1c - iVar2,(uint)bVar3))) {
            iStack_2c = iStack_14 + iStack_1c + (uint)CARRY4(local_18,local_20);
            uVar1 = -(iStack_2c >> 0x1f);
            iStack_2c = iStack_2c + (uint)CARRY4(local_18 + local_20,uVar1);
            local_30 = local_18 + local_20 + uVar1 >> 1 | iStack_2c * -0x80000000;
            iStack_2c = iStack_2c >> 1;
            iVar2 = FUN_00050cc4(param_1,0,local_30,iStack_2c);
            if (iVar2 == 0) {
              local_18 = local_30;
              iStack_14 = iStack_2c;
            }
            else {
              local_20 = local_30;
              iStack_1c = iStack_2c;
            }
          }
          local_38 = local_20 + 1;
          uStack_34 = iStack_1c + (uint)(0xfffffffe < local_20);
        }
      }
      else {
        local_38 = local_58[0] << 9;
        uStack_34 = local_58[0] >> 0x17;
      }
    }
    else {
      local_38 = local_3c << 9;
      uStack_34 = local_3c >> 0x17;
    }
  }
  return CONCAT44(uStack_34,local_38);
}



/* ===== FUN_00050f80 @ 00050f80 size=260 ===== */

__off64_t FUN_00050f80(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  __off_t _Var1;
  int *piVar2;
  __off64_t _Var3;
  int local_10;
  int iStack_c;
  
  if ((int)-(param_4 + (uint)(0x7fffffff < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(0x7fffffff < param_3)))) {
    _Var1 = lseek(param_1,param_3,param_5);
    _Var3 = VectorShiftRight(CONCAT44(_Var1,_Var1),0x20);
  }
  else if (DAT_0006c2fc == 0) {
    _Var3 = lseek64(param_1,CONCAT44(param_4,param_3),param_5);
    local_10 = (int)_Var3;
    iStack_c = (int)((ulonglong)_Var3 >> 0x20);
    if ((iStack_c == -1 && local_10 == -1) && (piVar2 = __errno_location(), *piVar2 == 0x26)) {
      DAT_0006c2fc = DAT_0006c2fc + 1;
      piVar2 = __errno_location();
      *piVar2 = 0x4b;
    }
  }
  else {
    piVar2 = __errno_location();
    *piVar2 = 0x4b;
    _Var3 = -1;
  }
  return _Var3;
}



/* ===== FUN_00051084 @ 00051084 size=112 ===== */

undefined4 FUN_00051084(char *param_1)

{
  int local_10;
  char *local_c;
  
  local_10 = 0;
  local_c = param_1;
  while( true ) {
    if (0xf < local_10) {
      return 1;
    }
    if (*local_c != '\0') break;
    local_10 = local_10 + 1;
    local_c = local_c + 1;
  }
  return 0;
}



/* ===== FUN_000510f4 @ 000510f4 size=172 ===== */

void FUN_000510f4(undefined4 param_1,char *param_2,char *param_3)

{
  undefined4 local_30;
  ushort local_2c;
  ushort local_2a;
  ushort local_28;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  FUN_00051254(param_1,&local_30);
  sprintf(param_2,param_3,local_30,(uint)local_2c,(uint)local_2a,(uint)(local_28 >> 8),
          local_28 & 0xff,(uint)local_26,(uint)local_25,(uint)local_24,(uint)local_23,(uint)local_22
          ,(uint)local_21);
  return;
}



/* ===== FUN_000511a0 @ 000511a0 size=60 ===== */

void FUN_000511a0(undefined4 param_1,undefined4 param_2)

{
  FUN_000510f4(param_1,param_2,DAT_0006c080);
  return;
}



/* ===== FUN_000511dc @ 000511dc size=60 ===== */

void FUN_000511dc(undefined4 param_1,undefined4 param_2)

{
  FUN_000510f4(param_1,param_2,DAT_0006c084);
  return;
}



/* ===== FUN_00051218 @ 00051218 size=60 ===== */

void FUN_00051218(undefined4 param_1,undefined4 param_2)

{
  FUN_000510f4(param_1,param_2,DAT_0006c080);
  return;
}



/* ===== FUN_00051254 @ 00051254 size=396 ===== */

void FUN_00051254(undefined1 *param_1,undefined4 *param_2)

{
  *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  *(ushort *)(param_2 + 1) = CONCAT11(param_1[4],param_1[5]);
  *(ushort *)((int)param_2 + 6) = CONCAT11(param_1[6],param_1[7]);
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[8],param_1[9]);
  memcpy((void *)((int)param_2 + 10),param_1 + 10,6);
  return;
}



/* ===== FUN_000513e0 @ 000513e0 size=168 ===== */

ulonglong FUN_000513e0(uint param_1,uint param_2)

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



/* ===== FUN_00051488 @ 00051488 size=32 ===== */

void FUN_00051488(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000513e0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000514a8 @ 000514a8 size=220 ===== */

ulonglong FUN_000514a8(uint param_1,uint param_2)

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



/* ===== FUN_000518f0 @ 000518f0 size=372 ===== */

ulonglong FUN_000518f0(uint param_1,uint param_2)

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
LAB_000516c8:
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
  if ((param_2 & 0x100000) != 0) goto LAB_000516c8;
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
      goto LAB_00051748;
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
LAB_00051748:
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



/* ===== FUN_00051964 @ 00051964 size=76 ===== */

void FUN_00051964(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000519b0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000519b0 @ 000519b0 size=328 ===== */

undefined8 FUN_000519b0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 00051af8 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0006d000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0006d004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0006d008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setmntent @ 0006d00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void setmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0006d010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 0006d014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 0006d018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0006d01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 0006d020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0006d024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0006d028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0006d02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0006d030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0006d034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0006d038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0006d03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 0006d040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0006d044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hasmntopt @ 0006d048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hasmntopt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0006d04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 0006d050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0006d054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0006d058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 0006d05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0006d060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0006d064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwuid @ 0006d068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0006d06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 0006d070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0006d074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0006d078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0006d07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0006d080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gethostname @ 0006d084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gethostname(char *__name,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0006d088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0006d08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0006d090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0006d094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0006d098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 0006d09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0006d0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0006d0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0006d0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pwrite64 @ 0006d0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pwrite64(int __fd,void *__buf,size_t __n,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0006d0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0006d0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0006d0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0006d0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0006d0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0006d0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0006d0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0006d0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0006d0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0006d0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0006d0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpagesize @ 0006d0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohl @ 0006d0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t ntohl(uint32_t __netlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0006d0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 0006d0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0006d0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0006d0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 0006d0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0006d0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0006d0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 0006d100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 0006d104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 0006d108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0006d10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0006d110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0006d114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 0006d118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pread64 @ 0006d11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pread64(int __fd,void *__buf,size_t __nbytes,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::posix_memalign @ 0006d120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 0006d124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 0006d128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0006d12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkstemp @ 0006d130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkstemp(char *__template)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0006d134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 0006d138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 0006d13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0006d140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 0006d144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 0006d148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0006d14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrgid @ 0006d150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0006d154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0006d158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::posix_fadvise64 @ 0006d15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_fadvise64(int __fd,__off64_t __offset,__off64_t __len,int __advise)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftruncate64 @ 0006d160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate64(int __fd,__off64_t __length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0006d164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0006d168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0006d16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0006d170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat @ 0006d174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 0006d178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0006d17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::endmntent @ 0006d180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void endmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::link @ 0006d184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int link(char *__from,char *__to)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat @ 0006d188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srandom @ 0006d18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0006d190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0006d194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fallocate64 @ 0006d198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fallocate64(int __fd,int __mode,__off64_t __offset,__off64_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setrlimit64 @ 0006d19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getrlimit64 @ 0006d1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0006d1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::uname @ 0006d1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0006d1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0006d1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getmntent @ 0006d1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0006d1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::difftime @ 0006d1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchmod @ 0006d1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0006d1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0006d1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 0006d1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rename @ 0006d1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


